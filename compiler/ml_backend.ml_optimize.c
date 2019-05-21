/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module ml_backend.ml_optimize. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_optimize__init
ENDINIT
*/

#include "ml_backend.ml_optimize.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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



struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Stmt0_25;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__ModuleName_32;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__FunctionName_33;
  jmp_buf ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CalleeRval_75;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CallKind_78;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CodeAddr_82;
  MR_Word ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Var_83;
};

struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7;
  jmp_buf ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[4];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1];

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1];

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1];

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__938__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_18,
  MR_Word ml_backend__ml_optimize__ThisVar_19,
  MR_Word ml_backend__ml_optimize__Qualifier_21,
  MR_Word ml_backend__ml_optimize__QualKind_22,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_43);

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0(
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0(
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
  MR_Word ml_backend__ml_optimize__Component0_5,
  MR_Word * ml_backend__ml_optimize__Component_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
  MR_Word ml_backend__ml_optimize__Cond0_5,
  MR_Word * ml_backend__ml_optimize__Cond_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__FuncDefn0_5,
  MR_Word * ml_backend__ml_optimize__FuncDefn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
  MR_Word ml_backend__ml_optimize__Op0_5,
  MR_Word * ml_backend__ml_optimize__Op_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__LocalVarDefn0_5,
  MR_Word * ml_backend__ml_optimize__LocalVarDefn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
  MR_Word ml_backend__ml_optimize__Init0_5,
  MR_Word * ml_backend__ml_optimize__Init_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
  MR_Word ml_backend__ml_optimize__Lval0_5,
  MR_Word * ml_backend__ml_optimize__Lval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__Rval0_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_19,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_20);

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word ml_backend__ml_optimize__Stmt_3);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_5,
  MR_Word ml_backend__ml_optimize__Globals_6,
  MR_Word ml_backend__ml_optimize__FuncDefn0_7,
  MR_Word * ml_backend__ml_optimize__FuncDefn_8);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__maybe_eliminate_locals_7_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_7_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_5,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_6,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_7);

static MR_bool MR_CALL 
ml_backend__ml_optimize__try_to_eliminate_defn_8_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_9,
  MR_Word ml_backend__ml_optimize__LocalVarDefn0_10,
  MR_Word ml_backend__ml_optimize__LocalVarDefns0_11,
  MR_Word * ml_backend__ml_optimize__LocalVarDefns_12,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_28,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_29,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_30,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_31);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0(
  MR_Word ml_backend__ml_optimize__QualVarName_11,
  MR_Word ml_backend__ml_optimize__VarRval_12,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_22,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_23,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_24,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_25,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_26,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_27,
  MR_Integer * ml_backend__ml_optimize__Count_16,
  MR_Word * ml_backend__ml_optimize__Invalidated_17);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg);

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__Stmts_9);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
  MR_Word ml_backend__ml_optimize__Rval_2);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
  MR_Word ml_backend__ml_optimize__Rval_2);

static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_3,
  MR_Word ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5);

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_this_var_defn_6_p_0(
  MR_Word ml_backend__ml_optimize__VarName_7,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_18,
  MR_Word * ml_backend__ml_optimize__ThisVarDefn_11,
  MR_Word * ml_backend__ml_optimize__LaterDefns_12);

static MR_Box MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_9);

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_optimize__cases_affect_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lvals_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_optimize__statements_affect_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lvals_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_optimize__statement_affects_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lvals_4,
  MR_Word ml_backend__ml_optimize__Stmt_5,
  MR_Word * ml_backend__ml_optimize__Affects_6);

static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Rval_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_20);

static void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0_10001(
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001(
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001(
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[10][7];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[18][3];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[2][6];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_6[4][1];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_7[1][8];




static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[10][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_optimize__peephole_opt_statements_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_optimize__peephole_opt_statements_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[7])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[8])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[9])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "direct tailcall eliminated"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "loop_top"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "tailcall optimized into a loop"))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_qual_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_qual_kind_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0
};

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[4] = {
  (MR_String) "oi_globals",
  (MR_String) "oi_module_name",
  (MR_String) "oi_func_name",
  (MR_String) "oi_func_params"
};

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0 = {
  (MR_String) "opt_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_optimize____Unify____opt_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_optimize____Compare____opt_info_0_0_10001)),
  (MR_String) "ml_backend.ml_optimize",
  (MR_String) "opt_info",
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0 },
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_qual_local_var_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4] = {
  (MR_String) "var_name",
  (MR_String) "var_value",
  (MR_String) "replace_count",
  (MR_String) "invalidated"
};

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0 = {
  (MR_String) "var_elim_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001)),
  (MR_String) "ml_backend.ml_optimize",
  (MR_String) "var_elim_info",
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0 },
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0
};

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__938__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_18,
  MR_Word ml_backend__ml_optimize__ThisVar_19,
  MR_Word ml_backend__ml_optimize__Qualifier_21,
  MR_Word ml_backend__ml_optimize__QualKind_22,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_43)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__OtherVarName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OtherInitializer_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize___GC_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 4)));

    {
      MR_Word ml_backend__ml_optimize__QualOtherVar_34;
      MR_Word ml_backend__ml_optimize__Var_45;

      {
        ml_backend__ml_optimize__QualOtherVar_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_34, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_21));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_34, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_22));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_34, 2) = ((MR_Box) (ml_backend__ml_optimize__OtherVarName_29));
      }
      ml_backend__ml_optimize__Var_45 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_18, ml_backend__ml_optimize__QualOtherVar_34);
      ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_45 == (MR_Integer) 1);
    }
    if (!(ml_backend__ml_optimize__succeeded))
    {
      MR_Word ml_backend__ml_optimize__Var_44;

      ml_backend__ml_optimize__Var_44 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_optimize__OtherInitializer_32, ml_backend__ml_optimize__ThisVar_19);
      ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_44 == (MR_Integer) 1);
    }
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0(
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Integer ml_backend__ml_optimize__CastX_15 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;
    MR_Integer ml_backend__ml_optimize__CastY_16 = (MR_Integer) ml_backend__ml_optimize__HeadVar__3_3;

    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_15 == ml_backend__ml_optimize__CastY_16);
    if (ml_backend__ml_optimize__succeeded)
      *ml_backend__ml_optimize__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_optimize__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ml_backend__ml_optimize__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ml_backend__ml_optimize__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__Var_12;

      ml_backend__mlds____Compare____qual_local_var_name_0_0(&ml_backend__ml_optimize__Var_12, ml_backend__ml_optimize__ArgX1_4, ml_backend__ml_optimize__ArgY1_5);
      ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_12 == (MR_Integer) 0);
      ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
      if (ml_backend__ml_optimize__succeeded)
        *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_12;
      else
      {
        MR_Word ml_backend__ml_optimize__Var_13;

        ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_optimize__Var_13, ml_backend__ml_optimize__ArgX2_6, ml_backend__ml_optimize__ArgY2_7);
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_13 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_13;
        else
        {
          MR_Word ml_backend__ml_optimize__Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_optimize__Var_14, ml_backend__ml_optimize__ArgX3_8, ml_backend__ml_optimize__ArgY3_9);
          ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_14 == (MR_Integer) 0);
          ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
          if (ml_backend__ml_optimize__succeeded)
            *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_14;
          else
          {
            MR_Integer ml_backend__ml_optimize__Var_21 = (MR_Integer) ml_backend__ml_optimize__ArgX4_10;
            MR_Integer ml_backend__ml_optimize__Var_22 = (MR_Integer) ml_backend__ml_optimize__ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Var_21, ml_backend__ml_optimize__Var_22);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Integer ml_backend__ml_optimize__CastX_11 = (MR_Integer) ml_backend__ml_optimize__HeadVar__1_1;
    MR_Integer ml_backend__ml_optimize__CastY_12 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;

    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_11 == ml_backend__ml_optimize__CastY_12);
    if (ml_backend__ml_optimize__succeeded)
      ml_backend__ml_optimize__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_optimize__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ml_backend__ml_optimize__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ml_backend__ml_optimize__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));

      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____qual_local_var_name_0_0(ml_backend__ml_optimize__ArgX1_3, ml_backend__ml_optimize__ArgY1_4);
      if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__ArgX2_5, ml_backend__ml_optimize__ArgY2_6);
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__ArgX3_7 == ml_backend__ml_optimize__ArgY3_8);
          if (ml_backend__ml_optimize__succeeded)
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__ArgX4_9 == ml_backend__ml_optimize__ArgY4_10);
        }
      }
    }
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0(
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Integer ml_backend__ml_optimize__CastX_15 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;
    MR_Integer ml_backend__ml_optimize__CastY_16 = (MR_Integer) ml_backend__ml_optimize__HeadVar__3_3;

    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_15 == ml_backend__ml_optimize__CastY_16);
    if (ml_backend__ml_optimize__succeeded)
      *ml_backend__ml_optimize__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_optimize__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__Var_12;

      libs__globals____Compare____globals_0_0(&ml_backend__ml_optimize__Var_12, ml_backend__ml_optimize__ArgX1_4, ml_backend__ml_optimize__ArgY1_5);
      ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_12 == (MR_Integer) 0);
      ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
      if (ml_backend__ml_optimize__succeeded)
        *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_12;
      else
      {
        MR_Word ml_backend__ml_optimize__Var_13;

        ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_optimize__Var_13, ml_backend__ml_optimize__ArgX2_6, ml_backend__ml_optimize__ArgY2_7);
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_13 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_13;
        else
        {
          MR_Word ml_backend__ml_optimize__Var_14;

          ml_backend__mlds____Compare____mlds_function_name_0_0(&ml_backend__ml_optimize__Var_14, ml_backend__ml_optimize__ArgX3_8, ml_backend__ml_optimize__ArgY3_9);
          ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_14 == (MR_Integer) 0);
          ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
          if (ml_backend__ml_optimize__succeeded)
            *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_14;
          else
            ml_backend__mlds____Compare____mlds_func_params_0_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__ArgX4_10, ml_backend__ml_optimize__ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Integer ml_backend__ml_optimize__CastX_11 = (MR_Integer) ml_backend__ml_optimize__HeadVar__1_1;
    MR_Integer ml_backend__ml_optimize__CastY_12 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;

    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_11 == ml_backend__ml_optimize__CastY_12);
    if (ml_backend__ml_optimize__succeeded)
      ml_backend__ml_optimize__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_optimize__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));

      ml_backend__ml_optimize__succeeded = libs__globals____Unify____globals_0_0(ml_backend__ml_optimize__ArgX1_3, ml_backend__ml_optimize__ArgY1_4);
      if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ArgX2_5, ml_backend__ml_optimize__ArgY2_6);
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ml_backend__ml_optimize__ArgX3_7, ml_backend__ml_optimize__ArgY3_8);
          if (ml_backend__ml_optimize__succeeded)
            ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__ml_optimize__ArgX4_9, ml_backend__ml_optimize__ArgY4_10);
        }
      }
    }
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
  MR_Word ml_backend__ml_optimize__Component0_5,
  MR_Word * ml_backend__ml_optimize__Component_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Component0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ml_backend__ml_optimize__Component_6 = ml_backend__ml_optimize__Component0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *ml_backend__ml_optimize__Component_6 = ml_backend__ml_optimize__Component0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_optimize__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rval_14;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_13, &ml_backend__ml_optimize__Rval_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Component_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_optimize__Lval0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Lval_16;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_15, &ml_backend__ml_optimize__Lval_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Component_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_16));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            *ml_backend__ml_optimize__Component_6 = ml_backend__ml_optimize__Component0_5;
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Cond_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Cond_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Cond_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_24_24;
    MR_Word ml_backend__ml_optimize__FirstCond0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__LaterConds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__FirstCond_11;
    MR_Word ml_backend__ml_optimize__LaterConds_12;
    MR_Word ml_backend__ml_optimize__Stmt_13;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18;

    ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(ml_backend__ml_optimize__FirstCond0_8, &ml_backend__ml_optimize__FirstCond_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
    ml_backend__ml_optimize__TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_24_24, ml_backend__ml_optimize__TypeCtorInfo_24_24, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[17], ml_backend__ml_optimize__LaterConds0_9, &ml_backend__ml_optimize__LaterConds_12, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_10, &ml_backend__ml_optimize__Stmt_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__FirstCond_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterConds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Stmt_13));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
  MR_Word ml_backend__ml_optimize__Cond0_5,
  MR_Word * ml_backend__ml_optimize__Cond_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
{
  if (((MR_tag((MR_Word) ml_backend__ml_optimize__Cond0_5)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word ml_backend__ml_optimize__Low0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__High0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Low_12;
    MR_Word ml_backend__ml_optimize__High_13;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Low0_10, &ml_backend__ml_optimize__Low_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__High0_11, &ml_backend__ml_optimize__High_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_optimize__Cond_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Low_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__High_13));
    }
  }
  else
  {
    MR_Word ml_backend__ml_optimize__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Rval_9;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Cond_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__FuncDefn0_5,
  MR_Word * ml_backend__ml_optimize__FuncDefn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21)
{
  {
    MR_Word ml_backend__ml_optimize__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Id_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Params_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__Body0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize__Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize__EnvVarNames_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__MaybeRequireTailrecInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_5, (MR_Integer) 8)));
    MR_Word ml_backend__ml_optimize__Body_17;

    if ((ml_backend__ml_optimize__Body0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_optimize__Body_17 = ml_backend__ml_optimize__Body0_13;
      *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20;
    }
    else
    {
      MR_Word ml_backend__ml_optimize__Stmt0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Body0_13, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__Stmt_19;

      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_18, &ml_backend__ml_optimize__Stmt_19, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21);
      {
        ml_backend__ml_optimize__Body_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Body_17, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_19));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__FuncDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Id_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Params_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Body_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Attributes_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_15));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_optimize__MaybeRequireTailrecInfo_16));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Default0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ml_backend__ml_optimize__Default_6 = ml_backend__ml_optimize__Default0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_optimize__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Default0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Stmt_9;

        ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Default_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_9));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Case_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Case_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Case_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__ml_optimize__LocalVarDefns0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__FuncDefns0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__SubStmts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__LocalVarDefns_12;
        MR_Word ml_backend__ml_optimize__FuncDefns_13;
        MR_Word ml_backend__ml_optimize__SubStmts_14;

        ml_backend__ml_optimize__eliminate_var_in_block_8_p_0(ml_backend__ml_optimize__LocalVarDefns0_8, &ml_backend__ml_optimize__LocalVarDefns_12, ml_backend__ml_optimize__FuncDefns0_9, &ml_backend__ml_optimize__FuncDefns_13, ml_backend__ml_optimize__SubStmts0_10, &ml_backend__ml_optimize__SubStmts_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__LocalVarDefns_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__FuncDefns_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_14));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_optimize__Kind_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Rval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Rval_17;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_75_75;
        MR_Word ml_backend__ml_optimize__SubStmts0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__Context_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__SubStmts_80;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_16, &ml_backend__ml_optimize__Rval_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_75_75);
        ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__SubStmts0_78, &ml_backend__ml_optimize__SubStmts_80, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_75_75, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_17));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_80));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_79));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_optimize__Cond0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Then0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__MaybeElse0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__Cond_21;
        MR_Word ml_backend__ml_optimize__Then_22;
        MR_Word ml_backend__ml_optimize__MaybeElse_23;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73;
        MR_Word ml_backend__ml_optimize__Context_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Cond0_18, &ml_backend__ml_optimize__Cond_21, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72);
        ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Then0_19, &ml_backend__ml_optimize__Then_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73);
        ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(ml_backend__ml_optimize__MaybeElse0_20, &ml_backend__ml_optimize__MaybeElse_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Cond_21));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_22));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_23));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_81));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_optimize__TypeCtorInfo_97_97;
            MR_Word ml_backend__ml_optimize__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Val0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Range_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            MR_Word ml_backend__ml_optimize__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
            MR_Word ml_backend__ml_optimize__Default0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
            MR_Word ml_backend__ml_optimize__Val_29;
            MR_Word ml_backend__ml_optimize__Cases_30;
            MR_Word ml_backend__ml_optimize__Default_31;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_68;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70;
            MR_Word ml_backend__ml_optimize__Context_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
            MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_70_70;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Val0_25, &ml_backend__ml_optimize__Val_29, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_68);
            ml_backend__ml_optimize__TypeCtorInfo_97_97 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_97_97, ml_backend__ml_optimize__TypeCtorInfo_97_97, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[16], ml_backend__ml_optimize__Cases0_27, &ml_backend__ml_optimize__Cases_30, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_68)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_70_70);
            ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_70_70);
            ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(ml_backend__ml_optimize__Default0_28, &ml_backend__ml_optimize__Default_31, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_24));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Val_29));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_26));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_30));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_31));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Context_82));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56;
          }
          break;
        case (MR_Integer) 2:
          {
            *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__ml_optimize__Labels_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            MR_Word ml_backend__ml_optimize__Rval0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rval_85;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_84, &ml_backend__ml_optimize__Rval_85, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_85));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Labels_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_83));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__ml_optimize__Sig_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Func0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Args0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            MR_Word ml_backend__ml_optimize__RetLvals0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
            MR_Word ml_backend__ml_optimize__TailCall_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
            MR_Word ml_backend__ml_optimize__Markers_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
            MR_Word ml_backend__ml_optimize__Func_43;
            MR_Word ml_backend__ml_optimize__Args_44;
            MR_Word ml_backend__ml_optimize__RetLvals_45;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_64_64;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65;
            MR_Word ml_backend__ml_optimize__Context_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Func0_38, &ml_backend__ml_optimize__Func_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_64_64);
            ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Args0_39, &ml_backend__ml_optimize__Args_44, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_64_64, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65);
            ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(ml_backend__ml_optimize__RetLvals0_40, &ml_backend__ml_optimize__RetLvals_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Sig_37));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Func_43));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Args_44));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__RetLvals_45));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__TailCall_41));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Markers_42));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Context_86));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__ml_optimize__Rvals0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rvals_47;
            MR_Word ml_backend__ml_optimize__Context_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

            ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Rvals0_46, &ml_backend__ml_optimize__Rvals_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rvals_47));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_87));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ml_backend__ml_optimize__BodyStmt0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__HandlerStmt0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            MR_Word ml_backend__ml_optimize__BodyStmt_52;
            MR_Word ml_backend__ml_optimize__HandlerStmt_53;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_59_59;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60;
            MR_Word ml_backend__ml_optimize__Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
            MR_Word ml_backend__ml_optimize__Ref0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Ref_91;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Ref0_90, &ml_backend__ml_optimize__Ref_91, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_59_59);
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__BodyStmt0_50, &ml_backend__ml_optimize__BodyStmt_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_59_59, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60);
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__HandlerStmt0_51, &ml_backend__ml_optimize__HandlerStmt_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_91));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__BodyStmt_52));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerStmt_53));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_89));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ml_backend__ml_optimize__Ref0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Ref_49;
            MR_Word ml_backend__ml_optimize__Context_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Ref0_48, &ml_backend__ml_optimize__Ref_49, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_49));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_88));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ml_backend__ml_optimize__AtomicStmt0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__AtomicStmt_55;
            MR_Word ml_backend__ml_optimize__Context_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

            ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(ml_backend__ml_optimize__AtomicStmt0_54, &ml_backend__ml_optimize__AtomicStmt_55, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_55));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_92));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
{
  if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
  }
  else
  {
    MR_Word ml_backend__ml_optimize__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Stmt_9;

    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_optimize__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv7_Lval_6;
    MR_Word ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_21;

    ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv7_Lval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_21);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv7_Lval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_21));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_Rval_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_29;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_29);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Rval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_29));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Component_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_18;

    ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Component_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_18);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Component_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_18));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34;
      }
      break;
    case (MR_Integer) 1:
      {
        *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_optimize__Lval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Lval_11;
        MR_Word ml_backend__ml_optimize__Rval_12;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47;

        ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_9, &ml_backend__ml_optimize__Lval_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47);
        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_10, &ml_backend__ml_optimize__Rval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_11));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45;
            MR_Word ml_backend__ml_optimize__Lval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Lval_51;
            MR_Word ml_backend__ml_optimize__Rval_52;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_49, &ml_backend__ml_optimize__Lval_51, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45);
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_50, &ml_backend__ml_optimize__Rval_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_51));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_52));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_optimize__Rval0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rval_54;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_53, &ml_backend__ml_optimize__Rval_54, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_54));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_79;
            MR_Word ml_backend__ml_optimize__Target0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__MaybeTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__ExplicitSecTag_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            MR_Word ml_backend__ml_optimize__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
            MR_Word ml_backend__ml_optimize__MaybeSize_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
            MR_Word ml_backend__ml_optimize__MaybeCtorName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
            MR_Word ml_backend__ml_optimize__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
            MR_Word ml_backend__ml_optimize__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 8)));
            MR_Word ml_backend__ml_optimize__MayUseAtomic_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 9)));
            MR_Word ml_backend__ml_optimize__MaybeAllocId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 10)));
            MR_Word ml_backend__ml_optimize__Target_23;
            MR_Word ml_backend__ml_optimize__Args_24;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42;
            MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Target0_13, &ml_backend__ml_optimize__Target_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42);
            ml_backend__ml_optimize__TypeCtorInfo_18_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_79, ml_backend__ml_optimize__TypeCtorInfo_18_79, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[14], ml_backend__ml_optimize__Args0_19, &ml_backend__ml_optimize__Args_24, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Target_23));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeTag_14));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__ExplicitSecTag_15));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Type_16));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__MaybeSize_17));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__MaybeCtorName_18));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Args_24));
              MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_optimize__ArgTypes_20));
              MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ml_backend__ml_optimize__MayUseAtomic_21));
              MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ml_backend__ml_optimize__MaybeAllocId_22));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__ml_optimize__Lval0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Lval_56;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_55, &ml_backend__ml_optimize__Lval_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_56));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__ml_optimize__Rval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rval_58;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_57, &ml_backend__ml_optimize__Rval_58, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_58));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__ml_optimize__TrailOp0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__TrailOp_26;

            ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(ml_backend__ml_optimize__TrailOp0_25, &ml_backend__ml_optimize__TrailOp_26, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TrailOp_26));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ml_backend__ml_optimize__TypeCtorInfo_64_64 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
            MR_Word ml_backend__ml_optimize__Lang_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Components0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Components_29;
            MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35;

            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_64_64, ml_backend__ml_optimize__TypeCtorInfo_64_64, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[13], ml_backend__ml_optimize__Components0_28, &ml_backend__ml_optimize__Components_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lang_27));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Components_29));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_94 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
            MR_Word ml_backend__ml_optimize__Vs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Lvals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            MR_String ml_backend__ml_optimize__Code_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
            MR_Word ml_backend__ml_optimize__Lvals_33;
            MR_Word ml_backend__ml_optimize__Lang_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            MR_Box ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35;

            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_94, ml_backend__ml_optimize__TypeCtorInfo_18_94, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[15], ml_backend__ml_optimize__Lvals0_31, &ml_backend__ml_optimize__Lvals_33, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ((MR_Word) ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lang_59));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Vs_30));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Lvals_33));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Code_32));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
  MR_Word ml_backend__ml_optimize__Op0_5,
  MR_Word * ml_backend__ml_optimize__Op_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Op0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ml_backend__ml_optimize__Op_6 = ml_backend__ml_optimize__Op0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_optimize__Lval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Op0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Lval_9;

        ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Op_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_optimize__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Op0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Op0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Rval_12;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_10, &ml_backend__ml_optimize__Rval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Op_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_12));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Reason_11));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Op0_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_optimize__Lval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Op0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Lval_20;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_19, &ml_backend__ml_optimize__Lval_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Op_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_20));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_optimize__Rval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Op0_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Rval_22;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_21, &ml_backend__ml_optimize__Rval_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Op_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_22));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Lval_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_21;

    ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Lval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_21);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Lval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_21));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[12], ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Rval_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_29;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_29);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Rval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_29));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[11], ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__LocalVarDefn0_5,
  MR_Word * ml_backend__ml_optimize__LocalVarDefn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
{
  {
    MR_Word ml_backend__ml_optimize__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Initializer0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__GCStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__Initializer_13;

    ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(ml_backend__ml_optimize__Initializer0_11, &ml_backend__ml_optimize__Initializer_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__LocalVarDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Type_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Initializer_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__GCStmt_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_Init_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_16;

    ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Init_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_16);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Init_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_16));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Init_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_16;

    ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Init_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_16);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Init_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_16));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
  MR_Word ml_backend__ml_optimize__Init0_5,
  MR_Word * ml_backend__ml_optimize__Init_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Init0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ml_backend__ml_optimize__Init_6 = ml_backend__ml_optimize__Init0_5;
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_optimize__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Init0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Rval_9;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Init_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        MR_Word ml_backend__ml_optimize__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Init0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Members0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Init0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Members_14;
        MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_16;

        mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_32_32, ml_backend__ml_optimize__TypeCtorInfo_32_32, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[10], ml_backend__ml_optimize__Members0_13, &ml_backend__ml_optimize__Members_14, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_16);
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Init_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_12));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Members_14));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_26_26 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        MR_Word ml_backend__ml_optimize__Elements0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Init0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Elements_11;
        MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_16;

        mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_26_26, ml_backend__ml_optimize__TypeCtorInfo_26_26, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[9], ml_backend__ml_optimize__Elements0_10, &ml_backend__ml_optimize__Elements_11, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_16);
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Init_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Elements_11));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
  MR_Word ml_backend__ml_optimize__Lval0_5,
  MR_Word * ml_backend__ml_optimize__Lval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__PtrType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__Rval_13;

          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_9, &ml_backend__ml_optimize__Rval_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Lval_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__MaybeTag_8));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_13));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__FieldId_10));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__FieldType_11));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__PtrType_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Rval0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_27;

          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_26, &ml_backend__ml_optimize__Rval_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Lval_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__VarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize___Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 3)));

              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____qual_local_var_name_0_0(ml_backend__ml_optimize__VarName_18, ml_backend__ml_optimize__Var_35);
              if (ml_backend__ml_optimize__succeeded)
              {
                MR_Word ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 1)));
                MR_Integer ml_backend__ml_optimize__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20, (MR_Integer) 3)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_31));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_32));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_33));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
                }
              }
              else
                *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20;
              *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_21 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_20;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__Rval0_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_5;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Lval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__VarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_optimize__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Var_58;
          MR_Word ml_backend__ml_optimize__Var_10;

          ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 1)));
            ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 2)));
            ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____qual_local_var_name_0_0(ml_backend__ml_optimize__VarName_9, ml_backend__ml_optimize__Var_58);
          }
          if (ml_backend__ml_optimize__succeeded)
          {
            MR_Integer ml_backend__ml_optimize__Count0_11;
            MR_Integer ml_backend__ml_optimize__Var_37;
            MR_Word ml_backend__ml_optimize__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Var_50;

            *ml_backend__ml_optimize__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 1)));
            ml_backend__ml_optimize__Count0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 2)));
            ml_backend__ml_optimize__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, (MR_Integer) 3)));
            ml_backend__ml_optimize__Var_37 = (ml_backend__ml_optimize__Count0_11 + (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*ml_backend__ml_optimize__Rval_6));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_37));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_50));
            }
          }
          else
          {
            MR_Word ml_backend__ml_optimize__Lval_12;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Rval_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_12));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_optimize__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__ArgRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__ArgRval_15;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_14, &ml_backend__ml_optimize__ArgRval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Tag_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_15));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 6:
            {
              *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_5;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Op_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__ArgRval0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__ArgRval_41;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_40, &ml_backend__ml_optimize__ArgRval_41, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Op_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_41));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_optimize__ArgRvalA0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__ArgRvalB0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__ArgRvalA_19;
              MR_Word ml_backend__ml_optimize__ArgRvalB_20;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_32_32;
              MR_Word ml_backend__ml_optimize__Op_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRvalA0_17, &ml_backend__ml_optimize__ArgRvalA_19, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_32_32);
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRvalB0_18, &ml_backend__ml_optimize__ArgRvalB_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_32_32, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Op_42));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__ArgRvalA_19));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__ArgRvalB_20));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_optimize__Lval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Lval_44;

              ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_43, &ml_backend__ml_optimize__Lval_44, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_44));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_optimize__VectorCommon_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__RowRval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__RowRval_23;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__RowRval0_22, &ml_backend__ml_optimize__RowRval_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__VectorCommon_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__RowRval_23));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv7_Stmt_6;
    MR_Word ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_57;

    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv7_Stmt_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_57);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv7_Stmt_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_57));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_FuncDefn_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_21;

    ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_FuncDefn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_21);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_FuncDefn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_21));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_LocalVarDefn_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_LocalVarDefn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_LocalVarDefn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_19,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_20)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_33_33 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_34_34 = (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_39_39;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_53;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_23_23;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26_26;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_23_23;
    MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_26_26;
    MR_Box ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_20;

    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_33_33, ml_backend__ml_optimize__TypeCtorInfo_33_33, ml_backend__ml_optimize__TypeCtorInfo_34_34, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[6], ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_19)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_23_23);
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_23_23 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_23_23);
    ml_backend__ml_optimize__TypeCtorInfo_39_39 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_39_39, ml_backend__ml_optimize__TypeCtorInfo_39_39, ml_backend__ml_optimize__TypeCtorInfo_34_34, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[7], ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_23_23)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_26_26);
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26_26 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_26_26);
    ml_backend__ml_optimize__TypeCtorInfo_18_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_53, ml_backend__ml_optimize__TypeCtorInfo_18_53, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[8], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26_26)), &ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_20);
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_20 = ((MR_Word) ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_20);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word ml_backend__ml_optimize__Stmt_3)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Stmts_4;
    MR_Word ml_backend__ml_optimize__BlockStmts_5;
    MR_Word ml_backend__ml_optimize__Var_7;
    MR_Word ml_backend__ml_optimize__Var_8;
    MR_Word ml_backend__ml_optimize__Var_6;

    if (ml_backend__ml_optimize__succeeded)
    {
      ml_backend__ml_optimize__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 0)));
      ml_backend__ml_optimize__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 1)));
      ml_backend__ml_optimize__BlockStmts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 2)));
      ml_backend__ml_optimize__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 3)));
      ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ml_backend__ml_optimize__succeeded)
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (ml_backend__ml_optimize__succeeded)
      ml_backend__ml_optimize__Stmts_4 = ml_backend__ml_optimize__BlockStmts_5;
    else
    {
      {
        ml_backend__ml_optimize__Stmts_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_4, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_3));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return ml_backend__ml_optimize__Stmts_4;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6)
{
  {
    MR_Word ml_backend__ml_optimize__FirstCond_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__LaterConds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Stmt_10;

    ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_9, &ml_backend__ml_optimize__Stmt_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__FirstCond_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterConds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Stmt_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    {
      MR_Word ml_backend__ml_optimize___Signature_74;
      MR_Word ml_backend__ml_optimize___CallArgRvals_76;
      MR_Word ml_backend__ml_optimize___Results_77;
      MR_Word ml_backend__ml_optimize___Markers_79;
      MR_Word ml_backend__ml_optimize___Context_80;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
      {
        ml_backend__ml_optimize___Signature_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 1)));
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CalleeRval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 2)));
        ml_backend__ml_optimize___CallArgRvals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 3)));
        ml_backend__ml_optimize___Results_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 4)));
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CallKind_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 5)));
        ml_backend__ml_optimize___Markers_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 6)));
        ml_backend__ml_optimize___Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, (MR_Integer) 7)));
        switch ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CallKind_78) {
          default:
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
        {
          (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CalleeRval_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CalleeRval_75, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
          {
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CalleeRval_75, (MR_Integer) 1)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Var_83)) == (MR_mktag((MR_Integer) 1)));
            if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
            {
              (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CodeAddr_82 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Var_83), (MR_Integer) 1);
              (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__CodeAddr_82, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__ModuleName_32, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__FunctionName_33);
              if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
                ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_1(ml_backend__ml_optimize__env_ptr);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__commit_0) == 0)
      {
        ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Stmt0_25, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__SubStmt_61, ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_2, ml_backend__ml_optimize__env_ptr);
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_5,
  MR_Word ml_backend__ml_optimize__Globals_6,
  MR_Word ml_backend__ml_optimize__FuncDefn0_7,
  MR_Word * ml_backend__ml_optimize__FuncDefn_8)
{
  {
    struct ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0_s ml_backend__ml_optimize__env;

    {
      MR_Word ml_backend__ml_optimize__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__Flags_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__PredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 3)));
      MR_Word ml_backend__ml_optimize__Params_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 4)));
      MR_Word ml_backend__ml_optimize__FuncBody0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 5)));
      MR_Word ml_backend__ml_optimize__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 6)));
      MR_Word ml_backend__ml_optimize__EnvVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 7)));
      MR_Word ml_backend__ml_optimize__MaybeRequireTailrecInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncDefn0_7, (MR_Integer) 8)));
      MR_Word ml_backend__ml_optimize__OptInfo_18;
      MR_Word ml_backend__ml_optimize__FuncBody1_19;
      MR_Word ml_backend__ml_optimize__FuncBody_20;

      {
        ml_backend__ml_optimize__OptInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 1) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 3) = ((MR_Box) (ml_backend__ml_optimize__Params_13));
      }
      if ((ml_backend__ml_optimize__FuncBody0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_optimize__FuncBody1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ml_backend__ml_optimize__Stmt_26;
        MR_Word ml_backend__ml_optimize__Var_65;
        MR_Word ml_backend__ml_optimize__Var_67;

        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Stmt0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__FuncBody0_14, (MR_Integer) 0)));
        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_6, (MR_Integer) 464, (MR_Integer) 1);
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
        {
          ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 0)));
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 1)));
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__FunctionName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 2)));
          ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 3)));
          ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_3(&ml_backend__ml_optimize__env);
        }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__succeeded)
        {
          MR_Word ml_backend__ml_optimize__CommentStmt_35;
          MR_Word ml_backend__ml_optimize__SupportsBreakContinue_36;

          {
            ml_backend__ml_optimize__CommentStmt_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[3])));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_35, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
          }
          ml_backend__ml_optimize__SupportsBreakContinue_36 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_6);
          switch (ml_backend__ml_optimize__SupportsBreakContinue_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_optimize__LoopTopStmt_38;
                MR_Word ml_backend__ml_optimize__Var_46;
                MR_Word ml_backend__ml_optimize__Var_47;
                MR_Word ml_backend__ml_optimize__Var_48;

                {
                  ml_backend__ml_optimize__LoopTopStmt_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LoopTopStmt_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LoopTopStmt_38, 1) = ((MR_Box) ((MR_String) "loop_top"));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LoopTopStmt_38, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
                }
                {
                  ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Stmt0_25));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_optimize__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_47, 0) = ((MR_Box) (ml_backend__ml_optimize__LoopTopStmt_38));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_47, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
                }
                {
                  ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_35));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_47));
                }
                {
                  ml_backend__ml_optimize__Stmt_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_26, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_26, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_optimize__BreakStmt_37;
                MR_Word ml_backend__ml_optimize__Var_54;
                MR_Word ml_backend__ml_optimize__Var_57;
                MR_Word ml_backend__ml_optimize__Var_58;
                MR_Word ml_backend__ml_optimize__Var_59;

                {
                  ml_backend__ml_optimize__BreakStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__BreakStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__BreakStmt_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__BreakStmt_37, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
                }
                {
                  ml_backend__ml_optimize__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_59, 0) = ((MR_Box) (ml_backend__ml_optimize__BreakStmt_37));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_optimize__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_58, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Stmt0_25));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_58, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_59));
                }
                {
                  ml_backend__ml_optimize__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_57, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_35));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_57, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_58));
                }
                {
                  ml_backend__ml_optimize__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_57));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
                }
                {
                  ml_backend__ml_optimize__Stmt_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_26, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[1])));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_26, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_54));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_26, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
                }
              }
              break;
          }
        }
        else
          ml_backend__ml_optimize__Stmt_26 = (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_in_function_defn_4_p_0_env_0__Stmt0_25;
        {
          ml_backend__ml_optimize__FuncBody1_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__FuncBody1_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_26));
        }
      }
      if ((ml_backend__ml_optimize__FuncBody1_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_optimize__FuncBody_20 = ml_backend__ml_optimize__FuncBody1_19;
      else
      {
        MR_Word ml_backend__ml_optimize__Stmt0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__FuncBody1_19, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Stmt_89;

        ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_18, ml_backend__ml_optimize__Stmt0_88, &ml_backend__ml_optimize__Stmt_89);
        {
          ml_backend__ml_optimize__FuncBody_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__FuncBody_20, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_89));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_optimize__FuncDefn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_11));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__PredProcId_12));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Params_13));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_optimize__FuncBody_20));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Attributes_15));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_16));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_optimize__MaybeRequireTailrecInfo_17));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6)
{
  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Default0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__ml_optimize__Default0_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_optimize__Stmt0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Default0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Stmt_8;

        ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_7, &ml_backend__ml_optimize__Stmt_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Default_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_8));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_Case_6;

    ml_backend__ml_optimize__optimize_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Case_6);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Case_6));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__LocalVarDefns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__FuncDefns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__SubStmts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__LocalVarDefns1_18;
          MR_Word ml_backend__ml_optimize__SubStmts1_19;
          MR_Word ml_backend__ml_optimize__LocalVarDefns_20;
          MR_Word ml_backend__ml_optimize__FuncDefns_21;
          MR_Word ml_backend__ml_optimize__SubStmts2_22;
          MR_Word ml_backend__ml_optimize__SubStmts3_23;
          MR_Word ml_backend__ml_optimize__SubStmts_24;
          MR_Word ml_backend__ml_optimize__Globals_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__OptInit_84;
          MR_Word ml_backend__ml_optimize__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));

          libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_83, (MR_Integer) 466, &ml_backend__ml_optimize__OptInit_84);
          switch (ml_backend__ml_optimize__OptInit_84) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__LocalVarDefns1_18 = ml_backend__ml_optimize__LocalVarDefns0_14;
                ml_backend__ml_optimize__SubStmts1_19 = ml_backend__ml_optimize__SubStmts0_16;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__LocalVarDefns0_14, &ml_backend__ml_optimize__LocalVarDefns1_18, ml_backend__ml_optimize__SubStmts0_16, &ml_backend__ml_optimize__SubStmts1_19);
              break;
          }
          ml_backend__ml_optimize__maybe_eliminate_locals_7_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__LocalVarDefns1_18, &ml_backend__ml_optimize__LocalVarDefns_20, ml_backend__ml_optimize__FuncDefns0_15, &ml_backend__ml_optimize__FuncDefns_21, ml_backend__ml_optimize__SubStmts1_19, &ml_backend__ml_optimize__SubStmts2_22);
          ml_backend__ml_optimize__maybe_flatten_block_2_p_0(ml_backend__ml_optimize__SubStmts2_22, &ml_backend__ml_optimize__SubStmts3_23);
          ml_backend__ml_optimize__optimize_in_stmts_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__SubStmts3_23, &ml_backend__ml_optimize__SubStmts_24);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__LocalVarDefns_20));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__FuncDefns_21));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_24));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__SubStmts0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__SubStmts_65;

          ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__SubStmts0_63, &ml_backend__ml_optimize__SubStmts_65);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_26));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_65));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_64));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Then_29;
          MR_Word ml_backend__ml_optimize__MaybeElse_30;
          MR_Word ml_backend__ml_optimize__Context_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Rval_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Else_32;
          MR_Word ml_backend__ml_optimize__Var_57;
          MR_Word ml_backend__ml_optimize__Var_58;
          MR_Word ml_backend__ml_optimize__Var_59;
          MR_Word ml_backend__ml_optimize__Var_31;

          ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Then0_27, &ml_backend__ml_optimize__Then_29);
          if ((ml_backend__ml_optimize__MaybeElse0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__ml_optimize__MaybeElse_30 = ml_backend__ml_optimize__MaybeElse0_28;
          else
          {
            MR_Word ml_backend__ml_optimize__Stmt0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse0_28, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Stmt_96;

            ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_95, &ml_backend__ml_optimize__Stmt_96);
            {
              ml_backend__ml_optimize__MaybeElse_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_30, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_96));
            }
          }
          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Then_29)) == (MR_mktag((MR_Integer) 0)));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_29, (MR_Integer) 0)));
            ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_29, (MR_Integer) 1)));
            ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_29, (MR_Integer) 2)));
            ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_29, (MR_Integer) 3)));
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ml_backend__ml_optimize__succeeded)
                {
                  ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__MaybeElse_30)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_optimize__succeeded)
                    ml_backend__ml_optimize__Else_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_30, (MR_Integer) 0)));
                }
              }
            }
          }
          if (ml_backend__ml_optimize__succeeded)
          {
            MR_Word ml_backend__ml_optimize__NotRval_33;

            {
              ml_backend__ml_optimize__NotRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NotRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NotRval_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_6[2])));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NotRval_33, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__NotRval_33));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Else_32));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_66));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmt_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_67));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_29));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_30));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_66));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_75_75;
              MR_Word ml_backend__ml_optimize__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Range_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Cases_38;
              MR_Word ml_backend__ml_optimize__Default_39;
              MR_Word ml_backend__ml_optimize__Var_56;
              MR_Word ml_backend__ml_optimize__Context_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
              MR_Word ml_backend__ml_optimize__Rval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_56, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_56, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_56, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
              }
              ml_backend__ml_optimize__TypeCtorInfo_75_75 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_75_75, ml_backend__ml_optimize__TypeCtorInfo_75_75, ml_backend__ml_optimize__Var_56, ml_backend__ml_optimize__Cases0_36, &ml_backend__ml_optimize__Cases_38);
              ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Default0_37, &ml_backend__ml_optimize__Default_39);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_69));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_35));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_38));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_39));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Context_68));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
            break;
          case (MR_Integer) 4:
            ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_5, ml_backend__ml_optimize__Stmt_6);
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Ref_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__BodyStmt0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__HandlerStmt0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__BodyStmt_43;
              MR_Word ml_backend__ml_optimize__HandlerStmt_44;
              MR_Word ml_backend__ml_optimize__Context_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));

              ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__BodyStmt0_41, &ml_backend__ml_optimize__BodyStmt_43);
              ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__HandlerStmt0_42, &ml_backend__ml_optimize__HandlerStmt_44);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_40));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__BodyStmt_43));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerStmt_44));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_70));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__maybe_eliminate_locals_7_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18)
{
  {
    MR_Word ml_backend__ml_optimize__EliminateLocalVars_12;
    MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_8, (MR_Integer) 3)));

    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Var_19, (MR_Integer) 467, &ml_backend__ml_optimize__EliminateLocalVars_12);
    switch (ml_backend__ml_optimize__EliminateLocalVars_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14 = ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13;
          *ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16 = ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15;
          *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_optimize__eliminate_locals_7_p_0(ml_backend__ml_optimize__OptInfo_8, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_13, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_14, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_15, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_16, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_17, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_18);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_7_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_5,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_6,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded;

      if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_7 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_6;
        *ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_5 = ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_4;
      }
      else
      {
        MR_Word ml_backend__ml_optimize__LocalVarDefn0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__LocalVarDefns0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__LocalVarDefns1_21;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_27_27;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_28_28;

        ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__try_to_eliminate_defn_8_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__LocalVarDefn0_16, ml_backend__ml_optimize__LocalVarDefns0_17, &ml_backend__ml_optimize__LocalVarDefns1_21, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_4, &ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_27_27, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_6, &ml_backend__ml_optimize__STATE_VARIABLE_Stmts_28_28);
        if (ml_backend__ml_optimize__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__2_2 = ml_backend__ml_optimize__LocalVarDefns1_21;
            MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_FuncDefns_0_4 = ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_27_27;
            MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Stmts_0_6 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_28_28;

            ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
            ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_4 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_FuncDefns_0_4;
            ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_6 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Stmts_0_6;
          }
          continue;
        }
        else
        {
          MR_Word ml_backend__ml_optimize__LocalVarDefns2_22;

          ml_backend__ml_optimize__eliminate_locals_7_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__LocalVarDefns0_17, &ml_backend__ml_optimize__LocalVarDefns2_22, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_4, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_5, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_6, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_7);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__LocalVarDefn0_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LocalVarDefns2_22));
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__try_to_eliminate_defn_8_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_9,
  MR_Word ml_backend__ml_optimize__LocalVarDefn0_10,
  MR_Word ml_backend__ml_optimize__LocalVarDefns0_11,
  MR_Word * ml_backend__ml_optimize__LocalVarDefns_12,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_28,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_29,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_30,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_31)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__VarName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Initializer_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__QualVarName_20;
    MR_Word ml_backend__ml_optimize__Rval_21;
    MR_Integer ml_backend__ml_optimize__Count_26;
    MR_Word ml_backend__ml_optimize__Invalidated_27;
    MR_Word ml_backend__ml_optimize__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34_34;
    MR_Word ml_backend__ml_optimize___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize___GCStmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 3)));

    {
      ml_backend__ml_optimize__QualVarName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_15));
    }
    if ((ml_backend__ml_optimize__Initializer_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(ml_backend__ml_optimize__QualVarName_20, &ml_backend__ml_optimize__Rval_21, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_30, &ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34_34);
    else
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Initializer_18)) == (MR_mktag((MR_Integer) 1))))
    {
      ml_backend__ml_optimize__Rval_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Initializer_18, (MR_Integer) 0)));
      ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34_34 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_30;
      ml_backend__ml_optimize__succeeded = MR_TRUE;
    }
    else
      ml_backend__ml_optimize__succeeded = MR_FALSE;
    if (ml_backend__ml_optimize__succeeded)
    {
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__Rval_21);
      if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_cannot_throw_1_p_0(ml_backend__ml_optimize__Rval_21);
        if (!(ml_backend__ml_optimize__succeeded))
        {
          MR_Word ml_backend__ml_optimize__Globals_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Var_37;
          MR_Word ml_backend__ml_optimize__Var_38;
          MR_Word ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_9, (MR_Integer) 3)));

          ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_25, (MR_Integer) 176, (MR_Integer) 1);
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_37 = (MR_Integer) 177;
            ml_backend__ml_optimize__Var_38 = (MR_Integer) 1;
            ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_25, ml_backend__ml_optimize__Var_37, ml_backend__ml_optimize__Var_38);
          }
        }
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__eliminate_var_10_p_0(ml_backend__ml_optimize__QualVarName_20, ml_backend__ml_optimize__Rval_21, ml_backend__ml_optimize__LocalVarDefns0_11, ml_backend__ml_optimize__LocalVarDefns_12, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_28, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_29, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34_34, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_31, &ml_backend__ml_optimize__Count_26, &ml_backend__ml_optimize__Invalidated_27);
          ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Invalidated_27 == (MR_Integer) 0);
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Count_26 <= (MR_Integer) 1);
            if (!(ml_backend__ml_optimize__succeeded))
              switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_21)) {
                default:
                  ml_backend__ml_optimize__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__ml_optimize__Lval_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)));

                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_56, (MR_Integer) 0)))) == (MR_Integer) 1))))
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                    else
                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_56, (MR_Integer) 0)))) == (MR_Integer) 0))))
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                    else
                      ml_backend__ml_optimize__succeeded = MR_FALSE;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)))) {
                    default:
                      ml_backend__ml_optimize__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 4:
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 5:
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 6:
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                      break;
                  }
                  break;
              }
          }
        }
      }
    }
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv7_Stmt_6;
    MR_Word ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_57;

    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv7_Stmt_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_57);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv7_Stmt_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_57));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_FuncDefn_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_21;

    ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_FuncDefn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_21);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_FuncDefn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_21));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_LocalVarDefn_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_LocalVarDefn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_LocalVarDefn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0(
  MR_Word ml_backend__ml_optimize__QualVarName_11,
  MR_Word ml_backend__ml_optimize__VarRval_12,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_22,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_23,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_24,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_25,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_26,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_27,
  MR_Integer * ml_backend__ml_optimize__Count_16,
  MR_Word * ml_backend__ml_optimize__Invalidated_17)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_33_61;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_34_62;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_39_67;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_81;
    MR_Word ml_backend__ml_optimize__VarElimInfo0_20;
    MR_Word ml_backend__ml_optimize__VarElimInfo_21;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_23_51;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26_54;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_23_51;
    MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_26_54;
    MR_Box ml_backend__ml_optimize__conv8_VarElimInfo_21;
    MR_Word ml_backend__ml_optimize__Var_31;
    MR_Word ml_backend__ml_optimize__Var_32;

    {
      ml_backend__ml_optimize__VarElimInfo0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_20, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_20, 1) = ((MR_Box) (ml_backend__ml_optimize__VarRval_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_20, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_20, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    ml_backend__ml_optimize__TypeCtorInfo_33_61 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
    ml_backend__ml_optimize__TypeCtorInfo_34_62 = (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_33_61, ml_backend__ml_optimize__TypeCtorInfo_33_61, ml_backend__ml_optimize__TypeCtorInfo_34_62, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[3], ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_22, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_23, ((MR_Box) (ml_backend__ml_optimize__VarElimInfo0_20)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_23_51);
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_23_51 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_23_51);
    ml_backend__ml_optimize__TypeCtorInfo_39_67 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_39_67, ml_backend__ml_optimize__TypeCtorInfo_39_67, ml_backend__ml_optimize__TypeCtorInfo_34_62, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[4], ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_0_24, ml_backend__ml_optimize__STATE_VARIABLE_FuncDefns_25, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_23_51)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_26_54);
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26_54 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_26_54);
    ml_backend__ml_optimize__TypeCtorInfo_18_81 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_81, ml_backend__ml_optimize__TypeCtorInfo_18_81, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_4[5], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_26, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_27, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26_54)), &ml_backend__ml_optimize__conv8_VarElimInfo_21);
    ml_backend__ml_optimize__VarElimInfo_21 = ((MR_Word) ml_backend__ml_optimize__conv8_VarElimInfo_21);
    ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_21, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_21, (MR_Integer) 1)));
    *ml_backend__ml_optimize__Count_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_21, (MR_Integer) 2)));
    *ml_backend__ml_optimize__Invalidated_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_21, (MR_Integer) 3)));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    {
      MR_String ml_backend__ml_optimize__Var_14;
      MR_Word ml_backend__ml_optimize__Var_15;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
      {
        ml_backend__ml_optimize__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 2)));
        ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(ml_backend__ml_optimize__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0) == 0)
      {
        ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2, ml_backend__ml_optimize__env_ptr);
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__Stmts_9)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s ml_backend__ml_optimize__env;

    {
      MR_Word ml_backend__ml_optimize__Stmts0_8;
      MR_Word ml_backend__ml_optimize__Rval1_10;
      MR_Word ml_backend__ml_optimize__Stmt1_11;
      MR_Word ml_backend__ml_optimize__Context_26;
      MR_Word ml_backend__ml_optimize__Rval0_28;
      MR_Word ml_backend__ml_optimize__AtomicStmt_25;
      MR_Word ml_backend__ml_optimize__Var_33;
      MR_Word ml_backend__ml_optimize__Var_40;
      MR_Word ml_backend__ml_optimize___Type_27;

      (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
      {
        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
        ml_backend__ml_optimize__Stmts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          ml_backend__ml_optimize__AtomicStmt_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 1)));
          ml_backend__ml_optimize__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 2)));
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_25)) == (MR_mktag((MR_Integer) 2)));
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_25, (MR_Integer) 0)));
            ml_backend__ml_optimize__Rval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_25, (MR_Integer) 1)));
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              ml_backend__ml_optimize__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_33, (MR_Integer) 1)));
              ml_backend__ml_optimize___Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_33, (MR_Integer) 2)));
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__mlds____Unify____qual_local_var_name_0_0(ml_backend__ml_optimize__VarName_5, ml_backend__ml_optimize__Var_40);
            }
          }
        }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          ml_backend__ml_optimize__Rval1_10 = ml_backend__ml_optimize__Rval0_28;
          {
            ml_backend__ml_optimize__Stmt1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_26));
          }
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ml_backend__ml_optimize__LocalVarDefns0_29;
          MR_Word ml_backend__ml_optimize__FuncDefns0_30;
          MR_Word ml_backend__ml_optimize__SubStmts0_31;
          MR_Word ml_backend__ml_optimize__SubStmts_32;
          MR_Word ml_backend__ml_optimize__Var_37;
          MR_Word ml_backend__ml_optimize__Var_38;
          MR_Word ml_backend__ml_optimize__Context_39;

          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7)) == (MR_mktag((MR_Integer) 0)));
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__LocalVarDefns0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 0)));
            ml_backend__ml_optimize__FuncDefns0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 1)));
            ml_backend__ml_optimize__SubStmts0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 2)));
            ml_backend__ml_optimize__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 3)));
            ml_backend__ml_optimize__Var_37 = ml_backend__ml_util__local_var_defns_contains_var_2_f_0(ml_backend__ml_optimize__LocalVarDefns0_29, ml_backend__ml_optimize__VarName_5);
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_37 == (MR_Integer) 0);
            if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              ml_backend__ml_optimize__Var_38 = ml_backend__ml_util__function_defns_contains_var_2_f_0(ml_backend__ml_optimize__FuncDefns0_30, ml_backend__ml_optimize__VarName_5);
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_38 == (MR_Integer) 0);
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
              {
                (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(ml_backend__ml_optimize__VarName_5, &ml_backend__ml_optimize__Rval1_10, ml_backend__ml_optimize__SubStmts0_31, &ml_backend__ml_optimize__SubStmts_32);
                if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                {
                  {
                    ml_backend__ml_optimize__Stmt1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 0) = ((MR_Box) (ml_backend__ml_optimize__LocalVarDefns0_29));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 1) = ((MR_Box) (ml_backend__ml_optimize__FuncDefns0_30));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_32));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_39));
                  }
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          MR_Word ml_backend__ml_optimize__Var_17;
          MR_Word ml_backend__ml_optimize__Var_18;
          MR_Word ml_backend__ml_optimize__Var_19;
          MR_Word ml_backend__ml_optimize__Var_12;

          *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval1_10;
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt1_11)) == (MR_mktag((MR_Integer) 0)));
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 0)));
            ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 1)));
            ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 2)));
            ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 3)));
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            *ml_backend__ml_optimize__Stmts_9 = ml_backend__ml_optimize__Stmts0_8;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__Stmts_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt1_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Stmts0_8));
            }
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ml_backend__ml_optimize__Stmts1_16;
          MR_Word ml_backend__ml_optimize__Var_20;

          ml_backend__ml_optimize__Var_20 = ml_backend__ml_util__statement_contains_var_2_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, ml_backend__ml_optimize__VarName_5);
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_20 == (MR_Integer) 0);
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(&ml_backend__ml_optimize__env);
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = !((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded);
            if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(ml_backend__ml_optimize__VarName_5, ml_backend__ml_optimize__Rval_6, ml_backend__ml_optimize__Stmts0_8, &ml_backend__ml_optimize__Stmts1_16);
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_optimize__Stmts_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Stmts1_16));
                }
                (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      return (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
  MR_Word ml_backend__ml_optimize__Rval_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded;

      switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_2)) {
        default:
          ml_backend__ml_optimize__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          ml_backend__ml_optimize__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          ml_backend__ml_optimize__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 0)))) {
            default:
              ml_backend__ml_optimize__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_optimize__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                MR_Integer ml_backend__ml_optimize___Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_9;

                  ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_optimize__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              ml_backend__ml_optimize__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ml_backend__ml_optimize__SubRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_17;

                  ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 6:
              ml_backend__ml_optimize__succeeded = MR_TRUE;
              break;
          }
          break;
      }
      return ml_backend__ml_optimize__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
  MR_Word ml_backend__ml_optimize__Rval_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded;

      switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_2)) {
        default:
          ml_backend__ml_optimize__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          ml_backend__ml_optimize__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          ml_backend__ml_optimize__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 0)))) {
            default:
              ml_backend__ml_optimize__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_optimize__SubRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                MR_Integer ml_backend__ml_optimize___Tag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_21;

                  ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_optimize__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_optimize__SubRval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize___Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_30;

                  ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ml_backend__ml_optimize__SubRvalA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__SubRvalB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 3)));
                MR_Word ml_backend__ml_optimize___Op_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__SubRvalA_23);
                if (ml_backend__ml_optimize__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRvalB_24;

                    ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ml_backend__ml_optimize__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_8)) {
                  default:
                    ml_backend__ml_optimize__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_optimize__Address_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 4)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__Address_13;

                        ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_optimize__Address_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_8, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_optimize___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_8, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__Address_29;

                        ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_8, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__ml_optimize__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_optimize__succeeded = MR_TRUE;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              ml_backend__ml_optimize__succeeded = MR_TRUE;
              break;
          }
          break;
      }
      return ml_backend__ml_optimize__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;

    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__938__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_3,
  MR_Word ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded;

      if ((ml_backend__ml_optimize__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_3 = ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2;
      }
      else
      {
        MR_Word ml_backend__ml_optimize__HeadStmt0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__TailStmts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__AtomicHeadStmt0_15;
        MR_Word ml_backend__ml_optimize__Var_16;

        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadStmt0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadStmt0_12, (MR_Integer) 0)))) == (MR_Integer) 8)));
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__AtomicHeadStmt0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadStmt0_12, (MR_Integer) 1)));
          ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadStmt0_12, (MR_Integer) 2)));
          {
            MR_Word ml_backend__ml_optimize__RHS_18;
            MR_Word ml_backend__ml_optimize__RevPrevDefns_24;
            MR_Word ml_backend__ml_optimize__ThisVarDefn0_25;
            MR_Word ml_backend__ml_optimize__LaterDefns_26;
            MR_Word ml_backend__ml_optimize__LHS_17;
            MR_Word ml_backend__ml_optimize__ThisVar_19;
            MR_Word ml_backend__ml_optimize__Qualifier_21;
            MR_Word ml_backend__ml_optimize__QualKind_22;
            MR_Word ml_backend__ml_optimize__VarName_23;
            MR_Word ml_backend__ml_optimize__Filter_27;
            MR_Word ml_backend__ml_optimize__Var_41;
            MR_Word ml_backend__ml_optimize__Var_42;
            MR_Word ml_backend__ml_optimize__Var_63;
            MR_Word ml_backend__ml_optimize___ThisType_20;
            MR_Word ml_backend__ml_optimize__Var_53;
            MR_Word ml_backend__ml_optimize__Var_54;
            MR_Word ml_backend__ml_optimize__Var_55;
            MR_Word ml_backend__ml_optimize__TypeCtorInfo_61_61;
            MR_Word ml_backend__ml_optimize__Var_35;
            MR_Box ml_backend__ml_optimize__conv0_Var_35;

            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicHeadStmt0_15)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicHeadStmt0_15, (MR_Integer) 0)));
              ml_backend__ml_optimize__RHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicHeadStmt0_15, (MR_Integer) 1)));
              ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__LHS_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__ThisVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_17, (MR_Integer) 1)));
                ml_backend__ml_optimize___ThisType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_17, (MR_Integer) 2)));
                ml_backend__ml_optimize__Qualifier_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_19, (MR_Integer) 0)));
                ml_backend__ml_optimize__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_19, (MR_Integer) 1)));
                ml_backend__ml_optimize__VarName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_19, (MR_Integer) 2)));
                ml_backend__ml_optimize__Var_41 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_18, ml_backend__ml_optimize__ThisVar_19);
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_41 == (MR_Integer) 0);
                if (ml_backend__ml_optimize__succeeded)
                {
                  ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
                  ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
                  ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                  ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__Qualifier_21, ml_backend__ml_optimize__Var_63);
                  if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_this_var_defn_6_p_0(ml_backend__ml_optimize__VarName_23, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2, ml_backend__ml_optimize__Var_42, &ml_backend__ml_optimize__RevPrevDefns_24, &ml_backend__ml_optimize__ThisVarDefn0_25, &ml_backend__ml_optimize__LaterDefns_26);
                    if (ml_backend__ml_optimize__succeeded)
                    {
                      {
                        ml_backend__ml_optimize__Filter_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_7[0]));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 3) = ((MR_Box) (ml_backend__ml_optimize__RHS_18));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 4) = ((MR_Box) (ml_backend__ml_optimize__ThisVar_19));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 5) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_21));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_27, 6) = ((MR_Box) (ml_backend__ml_optimize__QualKind_22));
                      }
                      ml_backend__ml_optimize__TypeCtorInfo_61_61 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
                      ml_backend__ml_optimize__succeeded = mercury__list__find_first_match_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_61_61, ml_backend__ml_optimize__Filter_27, ml_backend__ml_optimize__LaterDefns_26, &ml_backend__ml_optimize__conv0_Var_35);
                      if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_35 = ((MR_Word) ml_backend__ml_optimize__conv0_Var_35);
                        ml_backend__ml_optimize__succeeded = MR_TRUE;
                      }
                      ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                    }
                  }
                }
              }
            }
            if (ml_backend__ml_optimize__succeeded)
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_62_62;
              MR_Word ml_backend__ml_optimize__ThisVarDefn_36;
              MR_Word ml_backend__ml_optimize__Var_46;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_47_47;
              MR_Word ml_backend__ml_optimize__Var_48;
              MR_Word ml_backend__ml_optimize__Var_49;
              MR_Word ml_backend__ml_optimize__Var_56;
              MR_Word ml_backend__ml_optimize__Var_57;
              MR_Word ml_backend__ml_optimize__Var_58;
              MR_Word ml_backend__ml_optimize__Var_60;
              MR_Word ml_backend__ml_optimize__Var_59;

              {
                ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (ml_backend__ml_optimize__RHS_18));
              }
              ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn0_25, (MR_Integer) 0)));
              ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn0_25, (MR_Integer) 1)));
              ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn0_25, (MR_Integer) 2)));
              ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn0_25, (MR_Integer) 3)));
              ml_backend__ml_optimize__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn0_25, (MR_Integer) 4)));
              {
                ml_backend__ml_optimize__ThisVarDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn_36, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_56));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn_36, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_57));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn_36, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_58));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn_36, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVarDefn_36, 4) = ((MR_Box) (ml_backend__ml_optimize__Var_60));
              }
              ml_backend__ml_optimize__TypeCtorInfo_62_62 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
              ml_backend__ml_optimize__Var_48 = mercury__list__reverse_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_62_62, ml_backend__ml_optimize__RevPrevDefns_24);
              {
                ml_backend__ml_optimize__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_49, 0) = ((MR_Box) (ml_backend__ml_optimize__ThisVarDefn_36));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_49, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterDefns_26));
              }
              ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_47_47 = mercury__list__f_43_43_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_62_62, ml_backend__ml_optimize__Var_48, ml_backend__ml_optimize__Var_49);
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_LocalVarDefns_0_2 = ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_47_47;
                MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__4_4 = ml_backend__ml_optimize__TailStmts0_13;

                ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_LocalVarDefns_0_2;
                ml_backend__ml_optimize__HeadVar__4_4 = ml_backend__ml_optimize__next_value_of_HeadVar__4_4;
              }
              continue;
            }
            else
            {
              MR_String ml_backend__ml_optimize__Var_37;

              ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicHeadStmt0_15)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__AtomicHeadStmt0_15, (MR_Integer) 0)));
                {
                  MR_Word ml_backend__ml_optimize__TailStmts_38;

                  ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2, ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_3, ml_backend__ml_optimize__TailStmts0_13, &ml_backend__ml_optimize__TailStmts_38);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_optimize__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__HeadStmt0_12));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TailStmts_38));
                  }
                }
              }
              else
              {
                *ml_backend__ml_optimize__HeadVar__5_5 = ml_backend__ml_optimize__HeadVar__4_4;
                *ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_3 = ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2;
              }
            }
          }
        }
        else
        {
          *ml_backend__ml_optimize__HeadVar__5_5 = ml_backend__ml_optimize__HeadVar__4_4;
          *ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_3 = ml_backend__ml_optimize__STATE_VARIABLE_LocalVarDefns_0_2;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_this_var_defn_6_p_0(
  MR_Word ml_backend__ml_optimize__VarName_7,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_18,
  MR_Word * ml_backend__ml_optimize__ThisVarDefn_11,
  MR_Word * ml_backend__ml_optimize__LaterDefns_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__LocalVarDefn_8;
      MR_Word ml_backend__ml_optimize__LocalVarDefns_9;
      MR_Word ml_backend__ml_optimize__Var_21;
      MR_Word ml_backend__ml_optimize__Var_13;
      MR_Word ml_backend__ml_optimize__Var_14;
      MR_Word ml_backend__ml_optimize__Var_15;
      MR_Word ml_backend__ml_optimize__Var_16;

      if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__LocalVarDefn_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
        ml_backend__ml_optimize__LocalVarDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn_8, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn_8, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn_8, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn_8, (MR_Integer) 3)));
        ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LocalVarDefn_8, (MR_Integer) 4)));
        ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ml_backend__ml_optimize__VarName_7, ml_backend__ml_optimize__Var_21);
        if (ml_backend__ml_optimize__succeeded)
        {
          *ml_backend__ml_optimize__ThisVarDefn_11 = ml_backend__ml_optimize__LocalVarDefn_8;
          *ml_backend__ml_optimize__LaterDefns_12 = ml_backend__ml_optimize__LocalVarDefns_9;
          *ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_18 = ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_0_17;
          ml_backend__ml_optimize__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_19_19;

          {
            ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_19_19, 0) = ((MR_Box) (ml_backend__ml_optimize__LocalVarDefn_8));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_19_19, 1) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_0_17));
          }
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__2_2 = ml_backend__ml_optimize__LocalVarDefns_9;
            MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_RevPrevDefns_0_17 = ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_19_19;

            ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
            ml_backend__ml_optimize__STATE_VARIABLE_RevPrevDefns_0_17 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_RevPrevDefns_0_17;
          }
          continue;
        }
      }
      return ml_backend__ml_optimize__succeeded;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_optimize__wrapper_arg_2;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_Stmts_4;

    ml_backend__ml_optimize__conv0_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Stmts_4));
    return ml_backend__ml_optimize__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_9 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    MR_Word ml_backend__ml_optimize__Var_7;

    ml_backend__ml_optimize__Var_7 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_9, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_4[2], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4);
    *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_9, ml_backend__ml_optimize__Var_7);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__FuncRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__CallArgRvals_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OptTailCalls_15;
    MR_Word ml_backend__ml_optimize___Signature_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___Results_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize___IsTailCall_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize___Markers_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__ModuleName_16;
    MR_Word ml_backend__ml_optimize__FunctionName_17;
    MR_Word ml_backend__ml_optimize__CalleeRval_83;
    MR_Word ml_backend__ml_optimize__CallKind_86;
    MR_Word ml_backend__ml_optimize__CodeAddr_90;
    MR_Word ml_backend__ml_optimize__Var_91;
    MR_Word ml_backend__ml_optimize__Var_65;
    MR_Word ml_backend__ml_optimize__Var_67;
    MR_Word ml_backend__ml_optimize___Signature_82;
    MR_Word ml_backend__ml_optimize___CallArgRvals_84;
    MR_Word ml_backend__ml_optimize___Results_85;
    MR_Word ml_backend__ml_optimize___Markers_87;
    MR_Word ml_backend__ml_optimize___Context_88;

    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_14, (MR_Integer) 464, &ml_backend__ml_optimize__OptTailCalls_15);
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__OptTailCalls_15 == (MR_Integer) 1);
    if (ml_backend__ml_optimize__succeeded)
    {
      ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
      ml_backend__ml_optimize__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
      ml_backend__ml_optimize__FunctionName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
      ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
      ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize___Signature_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
        ml_backend__ml_optimize__CalleeRval_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
        ml_backend__ml_optimize___CallArgRvals_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
        ml_backend__ml_optimize___Results_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
        ml_backend__ml_optimize__CallKind_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
        ml_backend__ml_optimize___Markers_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
        ml_backend__ml_optimize___Context_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
        switch (ml_backend__ml_optimize__CallKind_86) {
          default:
            ml_backend__ml_optimize__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ml_backend__ml_optimize__succeeded = MR_TRUE;
            break;
        }
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__CalleeRval_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CalleeRval_83, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CalleeRval_83, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_91)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__CodeAddr_90 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Var_91), (MR_Integer) 1);
              ml_backend__ml_optimize__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0(ml_backend__ml_optimize__CodeAddr_90, ml_backend__ml_optimize__ModuleName_16, ml_backend__ml_optimize__FunctionName_17);
            }
          }
        }
      }
    }
    if (ml_backend__ml_optimize__succeeded)
    {
      MR_Word ml_backend__ml_optimize__CommentStmt_18;
      MR_Word ml_backend__ml_optimize__GotoStmt_19;
      MR_Word ml_backend__ml_optimize__FuncArgs_20;
      MR_Word ml_backend__ml_optimize__InitStmts_22;
      MR_Word ml_backend__ml_optimize__AssignStmts_23;
      MR_Word ml_backend__ml_optimize__TempDefns_24;
      MR_Word ml_backend__ml_optimize__AssignVarsStmt_25;
      MR_Word ml_backend__ml_optimize__CallReplaceStmts_26;
      MR_Word ml_backend__ml_optimize__Var_48;
      MR_Word ml_backend__ml_optimize__Var_49;
      MR_Word ml_backend__ml_optimize__Var_51;
      MR_Word ml_backend__ml_optimize__Var_52;
      MR_Word ml_backend__ml_optimize__Var_53;
      MR_Word ml_backend__ml_optimize__SupportsBreakContinue_94;
      MR_Word ml_backend__ml_optimize__Var_71;
      MR_Word ml_backend__ml_optimize__Var_72;
      MR_Word ml_backend__ml_optimize__Var_73;
      MR_Word ml_backend__ml_optimize___RetTypes_21;

      {
        ml_backend__ml_optimize__CommentStmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[0])));
        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
      }
      ml_backend__ml_optimize__SupportsBreakContinue_94 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_14);
      switch (ml_backend__ml_optimize__SupportsBreakContinue_94) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[1]);
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      {
        ml_backend__ml_optimize__GotoStmt_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__GotoStmt_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__GotoStmt_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__GotoStmt_19, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
      }
      ml_backend__ml_optimize__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
      ml_backend__ml_optimize__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
      ml_backend__ml_optimize__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
      ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
      ml_backend__ml_optimize__FuncArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_49, (MR_Integer) 0)));
      ml_backend__ml_optimize___RetTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_49, (MR_Integer) 1)));
      ml_backend__ml_optimize__tail_rec_call_assign_input_args_7_p_0(ml_backend__ml_optimize__ModuleName_16, ml_backend__ml_optimize__Context_13, ml_backend__ml_optimize__FuncArgs_20, ml_backend__ml_optimize__CallArgRvals_9, &ml_backend__ml_optimize__InitStmts_22, &ml_backend__ml_optimize__AssignStmts_23, &ml_backend__ml_optimize__TempDefns_24);
      ml_backend__ml_optimize__Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_optimize__InitStmts_22, ml_backend__ml_optimize__AssignStmts_23);
      {
        ml_backend__ml_optimize__AssignVarsStmt_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 0) = ((MR_Box) (ml_backend__ml_optimize__TempDefns_24));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
        MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
      }
      {
        ml_backend__ml_optimize__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_53, 0) = ((MR_Box) (ml_backend__ml_optimize__GotoStmt_19));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__ml_optimize__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_52, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignVarsStmt_25));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_52, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_53));
      }
      {
        ml_backend__ml_optimize__CallReplaceStmts_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStmts_26, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_18));
        MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStmts_26, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_optimize__Stmt_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__CallReplaceStmts_26));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
      }
    }
    else
    {
      MR_Word ml_backend__ml_optimize__AtomicStmt_42;
      MR_Word ml_backend__ml_optimize__CodeAddr_27;
      MR_Word ml_backend__ml_optimize__QualFuncLabel_28;
      MR_Word ml_backend__ml_optimize__ModName_30;
      MR_Word ml_backend__ml_optimize__FuncLabel_31;
      MR_Word ml_backend__ml_optimize__ProcLabel_32;
      MR_Word ml_backend__ml_optimize__MaybeAux_33;
      MR_Word ml_backend__ml_optimize__PredLabel_34;
      MR_String ml_backend__ml_optimize__PredName_37;
      MR_Word ml_backend__ml_optimize__PrivateBuiltin_44;
      MR_Word ml_backend__ml_optimize__Var_57;
      MR_Word ml_backend__ml_optimize__Var_58;
      MR_Word ml_backend__ml_optimize__Var_75;
      MR_Word ml_backend__ml_optimize__Var_76;
      MR_Word ml_backend__ml_optimize__Var_77;
      MR_Word ml_backend__ml_optimize___CodeAddrSignature_29;
      MR_Integer ml_backend__ml_optimize___ProcId_35;
      MR_Word ml_backend__ml_optimize___DefnModName_36;
      MR_Integer ml_backend__ml_optimize___Arity_38;
      MR_Word ml_backend__ml_optimize___CodeModel_39;
      MR_Word ml_backend__ml_optimize___NonOutputFunc_40;

      ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__FuncRval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 1)));
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_57)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__CodeAddr_27 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Var_57), (MR_Integer) 1);
          ml_backend__ml_optimize__QualFuncLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CodeAddr_27, (MR_Integer) 0)));
          ml_backend__ml_optimize___CodeAddrSignature_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CodeAddr_27, (MR_Integer) 1)));
          ml_backend__ml_optimize__ModName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualFuncLabel_28, (MR_Integer) 0)));
          ml_backend__ml_optimize__FuncLabel_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualFuncLabel_28, (MR_Integer) 1)));
          ml_backend__ml_optimize__ProcLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncLabel_31, (MR_Integer) 0)));
          ml_backend__ml_optimize__MaybeAux_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FuncLabel_31, (MR_Integer) 1)));
          ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__MaybeAux_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__PredLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_32, (MR_Integer) 0)));
            ml_backend__ml_optimize___ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_32, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__PredLabel_34)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_34, (MR_Integer) 0)));
              ml_backend__ml_optimize___DefnModName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_34, (MR_Integer) 1)));
              ml_backend__ml_optimize__PredName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_34, (MR_Integer) 2)));
              ml_backend__ml_optimize___Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_34, (MR_Integer) 3)));
              ml_backend__ml_optimize___CodeModel_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_34, (MR_Integer) 4)));
              ml_backend__ml_optimize___NonOutputFunc_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_34, (MR_Integer) 5)));
              ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_58 == (MR_Integer) 0);
              if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__CallArgRvals_9)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_optimize__succeeded)
                {
                  ml_backend__ml_optimize__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgRvals_9, (MR_Integer) 0)));
                  ml_backend__ml_optimize__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgRvals_9, (MR_Integer) 1)));
                  ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (ml_backend__ml_optimize__succeeded)
                  {
                    if ((strcmp(ml_backend__ml_optimize__PredName_37, (MR_String) "mark_hp") == 0))
                    {
                      MR_Word ml_backend__ml_optimize__Lval_41;

                      ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_77, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Lval_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_77, (MR_Integer) 1)));
                        {
                          ml_backend__ml_optimize__AtomicStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_41));
                        }
                        ml_backend__ml_optimize__succeeded = MR_TRUE;
                      }
                    }
                    else
                    if ((strcmp(ml_backend__ml_optimize__PredName_37, (MR_String) "restore_hp") == 0))
                    {
                      {
                        ml_backend__ml_optimize__AtomicStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_77));
                      }
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
                    }
                    else
                      ml_backend__ml_optimize__succeeded = MR_FALSE;
                    if (ml_backend__ml_optimize__succeeded)
                    {
                      ml_backend__ml_optimize__PrivateBuiltin_44 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                      ml_backend__ml_optimize__Var_75 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__PrivateBuiltin_44);
                      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ModName_30, ml_backend__ml_optimize__Var_75);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (ml_backend__ml_optimize__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_42));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
        }
      else
        *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_Stmt_6;

    ml_backend__ml_optimize__optimize_in_stmt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Stmt_6);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Stmt_6));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_9)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_19_19;
    MR_Word ml_backend__ml_optimize__Globals_6;
    MR_Word ml_backend__ml_optimize__OptPeep_7;
    MR_Word ml_backend__ml_optimize__Var_10;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11;
    MR_Word ml_backend__ml_optimize__Var_14;
    MR_Word ml_backend__ml_optimize__Var_15;
    MR_Word ml_backend__ml_optimize__Var_16;

    {
      ml_backend__ml_optimize__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_19_19 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_19_19, ml_backend__ml_optimize__TypeCtorInfo_19_19, ml_backend__ml_optimize__Var_10, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_8, &ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11);
    ml_backend__ml_optimize__Globals_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_6, (MR_Integer) 472, &ml_backend__ml_optimize__OptPeep_7);
    switch (ml_backend__ml_optimize__OptPeep_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_9 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_9);
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_optimize__wrapper_arg_2;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Stmts_4;

    ml_backend__ml_optimize__conv1_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Stmts_4));
    return ml_backend__ml_optimize__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_optimize__wrapper_arg_2;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_Stmts_4;

    ml_backend__ml_optimize__conv0_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Stmts_4));
    return ml_backend__ml_optimize__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded;

      if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

        if ((ml_backend__ml_optimize__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          MR_Word ml_backend__ml_optimize__Stmt1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_14, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Stmts2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_14, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__ReplStmts_10;
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_41_52;
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_63;
          MR_Word ml_backend__ml_optimize__TypeInfo_10_64;
          MR_Word ml_backend__ml_optimize__TestRval_20;
          MR_Word ml_backend__ml_optimize__StmtThen0_21;
          MR_Word ml_backend__ml_optimize__MaybeStmtElse0_22;
          MR_Word ml_backend__ml_optimize__Context0_23;
          MR_Word ml_backend__ml_optimize__StmtThen1_24;
          MR_Word ml_backend__ml_optimize__MaybeStmtElse1_25;
          MR_Word ml_backend__ml_optimize__TestRvalComponents_27;
          MR_Word ml_backend__ml_optimize__ContextThen_29;
          MR_Word ml_backend__ml_optimize__ThenBlockStmts0_30;
          MR_Word ml_backend__ml_optimize__ThenBlockStmts_31;
          MR_Word ml_backend__ml_optimize__Then_32;
          MR_Word ml_backend__ml_optimize__MaybeElse_33;
          MR_Word ml_backend__ml_optimize__Stmt_40;
          MR_Word ml_backend__ml_optimize__Var_41;
          MR_Word ml_backend__ml_optimize__Var_42;
          MR_Word ml_backend__ml_optimize__Var_44;
          MR_Word ml_backend__ml_optimize__Var_45;
          MR_Word ml_backend__ml_optimize__Var_46;
          MR_Word ml_backend__ml_optimize__Var_47;
          MR_Word ml_backend__ml_optimize__Var_53;
          MR_Word ml_backend__ml_optimize__Var_54;
          MR_Word ml_backend__ml_optimize__Var_61;
          MR_Word ml_backend__ml_optimize__Var_62;
          MR_Word ml_backend__ml_optimize___Context1_26;

          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__TestRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_15, (MR_Integer) 0)));
            ml_backend__ml_optimize__StmtThen0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_15, (MR_Integer) 1)));
            ml_backend__ml_optimize__MaybeStmtElse0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_15, (MR_Integer) 2)));
            ml_backend__ml_optimize__Context0_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_15, (MR_Integer) 3)));
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt1_7)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 0)));
              ml_backend__ml_optimize__StmtThen1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 1)));
              ml_backend__ml_optimize__MaybeStmtElse1_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 2)));
              ml_backend__ml_optimize___Context1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 3)));
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__TestRval_20, ml_backend__ml_optimize__Var_53);
              if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__TypeCtorInfo_41_52 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
                ml_backend__ml_optimize__Var_41 = mercury__set__init_0_f_0(ml_backend__ml_optimize__TypeCtorInfo_41_52);
                ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__TestRval_20, ml_backend__ml_optimize__Var_41, &ml_backend__ml_optimize__TestRvalComponents_27);
                ml_backend__ml_optimize__Var_42 = (MR_Integer) 0;
                ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_27, ml_backend__ml_optimize__StmtThen0_21, &ml_backend__ml_optimize__Var_54);
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_42 == ml_backend__ml_optimize__Var_54);
                if (ml_backend__ml_optimize__succeeded)
                {
                  if ((ml_backend__ml_optimize__MaybeStmtElse0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ml_backend__ml_optimize__succeeded = MR_TRUE;
                  else
                  {
                    MR_Word ml_backend__ml_optimize__StmtElse0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_22, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__Var_55;

                    ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_27, ml_backend__ml_optimize__StmtElse0_28, &ml_backend__ml_optimize__Var_55);
                    ml_backend__ml_optimize__succeeded = ((MR_Integer) 0 == ml_backend__ml_optimize__Var_55);
                  }
                  if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__ContextThen_29 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(ml_backend__ml_optimize__StmtThen0_21);
                    ml_backend__ml_optimize__Var_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    ml_backend__ml_optimize__TypeCtorInfo_9_63 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
                    ml_backend__ml_optimize__TypeInfo_10_64 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0];
                    ml_backend__ml_optimize__Var_62 = (MR_Word) &ml_backend__ml_optimize_scalar_common_4[0];
                    {
                      ml_backend__ml_optimize__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_44, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen1_24));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_44, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
                    }
                    {
                      ml_backend__ml_optimize__ThenBlockStmts0_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ThenBlockStmts0_30, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen0_21));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ThenBlockStmts0_30, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_44));
                    }
                    ml_backend__ml_optimize__Var_61 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_63, ml_backend__ml_optimize__TypeInfo_10_64, ml_backend__ml_optimize__Var_62, ml_backend__ml_optimize__ThenBlockStmts0_30);
                    ml_backend__ml_optimize__ThenBlockStmts_31 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_63, ml_backend__ml_optimize__Var_61);
                    ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    ml_backend__ml_optimize__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      ml_backend__ml_optimize__Then_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_32, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_32, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_47));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_32, 2) = ((MR_Box) (ml_backend__ml_optimize__ThenBlockStmts_31));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_32, 3) = ((MR_Box) (ml_backend__ml_optimize__ContextThen_29));
                    }
                    if ((ml_backend__ml_optimize__MaybeStmtElse0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      if ((ml_backend__ml_optimize__MaybeStmtElse1_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        ml_backend__ml_optimize__MaybeElse_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        ml_backend__ml_optimize__MaybeElse_33 = ml_backend__ml_optimize__MaybeStmtElse1_25;
                    else
                    {
                      MR_Word ml_backend__ml_optimize__Else0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_22, (MR_Integer) 0)));

                      if ((ml_backend__ml_optimize__MaybeStmtElse1_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        ml_backend__ml_optimize__MaybeElse_33 = ml_backend__ml_optimize__MaybeStmtElse0_22;
                      else
                      {
                        MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_73;
                        MR_Word ml_backend__ml_optimize__Else1_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse1_25, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__ElseBlockStmts0_37;
                        MR_Word ml_backend__ml_optimize__ElseBlockStmts_38;
                        MR_Word ml_backend__ml_optimize__Else_39;
                        MR_Word ml_backend__ml_optimize__Var_48;
                        MR_Word ml_backend__ml_optimize__Var_71;

                        {
                          ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (ml_backend__ml_optimize__Else1_36));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ml_backend__ml_optimize__ElseBlockStmts0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ElseBlockStmts0_37, 0) = ((MR_Box) (ml_backend__ml_optimize__Else0_35));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ElseBlockStmts0_37, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
                        }
                        ml_backend__ml_optimize__TypeCtorInfo_9_73 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
                        ml_backend__ml_optimize__Var_71 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_73, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_4[1], ml_backend__ml_optimize__ElseBlockStmts0_37);
                        ml_backend__ml_optimize__ElseBlockStmts_38 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_73, ml_backend__ml_optimize__Var_71);
                        {
                          ml_backend__ml_optimize__Else_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Else_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Else_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Else_39, 2) = ((MR_Box) (ml_backend__ml_optimize__ElseBlockStmts_38));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Else_39, 3) = ((MR_Box) (ml_backend__ml_optimize__Context0_23));
                        }
                        {
                          ml_backend__ml_optimize__MaybeElse_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_33, 0) = ((MR_Box) (ml_backend__ml_optimize__Else_39));
                        }
                      }
                    }
                    {
                      ml_backend__ml_optimize__Stmt_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_40, 0) = ((MR_Box) (ml_backend__ml_optimize__TestRval_20));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_40, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_32));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_40, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_33));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_40, 3) = ((MR_Box) (ml_backend__ml_optimize__Context0_23));
                    }
                    {
                      ml_backend__ml_optimize__ReplStmts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ReplStmts_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_40));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ReplStmts_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Stmts2_8));
                    }
                    ml_backend__ml_optimize__succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          if (ml_backend__ml_optimize__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__1_1 = ml_backend__ml_optimize__ReplStmts_10;

              ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          else
          {
            MR_Word ml_backend__ml_optimize__StmtsTail_11;

            ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__Var_14, &ml_backend__ml_optimize__StmtsTail_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_optimize__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__StmtsTail_11));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__cases_affect_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lvals_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_optimize__Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 2)));
      MR_Word ml_backend__ml_optimize__HeadAffects_12;
      MR_Word ml_backend__ml_optimize__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 1)));

      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Stmt_11, &ml_backend__ml_optimize__HeadAffects_12);
      switch (ml_backend__ml_optimize__HeadAffects_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__2_2 = ml_backend__ml_optimize__Tail_7;

              ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__statements_affect_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lvals_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_optimize__Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_optimize__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__HeadAffects_9;

      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Head_6, &ml_backend__ml_optimize__HeadAffects_9);
      switch (ml_backend__ml_optimize__HeadAffects_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__2_2 = ml_backend__ml_optimize__Tail_7;

              ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__statement_affects_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lvals_4,
  MR_Word ml_backend__ml_optimize__Stmt_5,
  MR_Word * ml_backend__ml_optimize__Affects_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_optimize__succeeded;

      switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_optimize__SubStmts_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));

            ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__SubStmts_9, ml_backend__ml_optimize__Affects_6);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_optimize__SubStmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));

            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__next_value_of_Stmt_5 = ml_backend__ml_optimize__SubStmt_13;

              ml_backend__ml_optimize__Stmt_5 = ml_backend__ml_optimize__next_value_of_Stmt_5;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_optimize__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__MaybeElse_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__Stmts_19;
            MR_Word ml_backend__ml_optimize__Head_93;
            MR_Word ml_backend__ml_optimize__Tail_94;
            MR_Word ml_backend__ml_optimize__HeadAffects_96;
            MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));

            if ((ml_backend__ml_optimize__MaybeElse_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                ml_backend__ml_optimize__Stmts_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_16));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            else
            {
              MR_Word ml_backend__ml_optimize__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_17, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_75;

              {
                ml_backend__ml_optimize__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_75, 0) = ((MR_Box) (ml_backend__ml_optimize__Else_20));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__ml_optimize__Stmts_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_16));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_75));
              }
            }
            ml_backend__ml_optimize__Head_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_19, (MR_Integer) 0)));
            ml_backend__ml_optimize__Tail_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_19, (MR_Integer) 1)));
            ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Head_93, &ml_backend__ml_optimize__HeadAffects_96);
            switch (ml_backend__ml_optimize__HeadAffects_96) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Tail_94, ml_backend__ml_optimize__Affects_6);
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_optimize__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 4)));
                MR_Word ml_backend__ml_optimize__Default_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 5)));
                MR_Word ml_backend__ml_optimize__Affects0_27;
                MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));
                MR_Word ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 6)));

                ml_backend__ml_optimize__cases_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Cases_24, &ml_backend__ml_optimize__Affects0_27);
                switch (ml_backend__ml_optimize__Affects0_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Default_25)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ml_backend__ml_optimize__DefaultStmt_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Default_25, (MR_Integer) 0)));

                          /* direct tailcall eliminated */
                          {
                            MR_Word ml_backend__ml_optimize__next_value_of_Stmt_5 = ml_backend__ml_optimize__DefaultStmt_28;

                            ml_backend__ml_optimize__Stmt_5 = ml_backend__ml_optimize__next_value_of_Stmt_5;
                          }
                          continue;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              {
                MR_Word ml_backend__ml_optimize__AtomicStmt_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_51)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ml_backend__ml_optimize__Lval_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 1)));

                      ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_57)));
                      if (ml_backend__ml_optimize__succeeded)
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                      else
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ml_backend__ml_optimize__Lval_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 1)));
                          MR_Word ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 2)));

                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_81)));
                          if (ml_backend__ml_optimize__succeeded)
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                          else
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ml_backend__ml_optimize__Lval_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 1)));
                          MR_Word ml_backend__ml_optimize__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 2)));
                          MR_Word ml_backend__ml_optimize__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 3)));
                          MR_Word ml_backend__ml_optimize__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 4)));
                          MR_Word ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 5)));
                          MR_Word ml_backend__ml_optimize__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 6)));
                          MR_Word ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 7)));
                          MR_Word ml_backend__ml_optimize__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 8)));
                          MR_Word ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 9)));
                          MR_Word ml_backend__ml_optimize__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 10)));

                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_89)));
                          if (ml_backend__ml_optimize__succeeded)
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                          else
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ml_backend__ml_optimize__Lval_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 1)));

                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_85)));
                          if (ml_backend__ml_optimize__succeeded)
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                          else
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Rval_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19;
        break;
      case (MR_Integer) 1:
        *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;

          mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_6)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19, &ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27);
          switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_optimize__Rval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 3)));
                MR_Word ml_backend__ml_optimize__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 4)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_38;
                  MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;

                  ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                  ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_optimize__Rval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_6, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_6, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_50;
                  MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;

                  ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                  ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_6, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;
                  break;
                case (MR_Integer) 1:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
              MR_Integer ml_backend__ml_optimize__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__SubRval_8;

                ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__SubRvalA_10;

                ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_optimize__SubRvalB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_23_23;
              MR_Word ml_backend__ml_optimize__SubRvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__SubRvalA_29, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19, &ml_backend__ml_optimize__STATE_VARIABLE_Components_23_23);
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__SubRvalB_12;
                MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_23_23;

                ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
              }
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
              MR_Word ml_backend__ml_optimize__Lval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

              mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_30)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19, &ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21);
              switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_optimize__Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 4)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_56;
                      MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;

                      ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                      ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_optimize__Rval_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_30, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_30, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_68;
                      MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;

                      ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                      ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_30, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19;
            break;
          case (MR_Integer) 6:
            *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19;
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_optimize__tail_rec_call_assign_input_args_7_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_1,
  MR_Word ml_backend__ml_optimize__Context_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5,
  MR_Word * ml_backend__ml_optimize__HeadVar__6_6,
  MR_Word * ml_backend__ml_optimize__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__ml_optimize__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_optimize.tail_rec_call_assign_input_args\'/7", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word ml_backend__ml_optimize__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));

      if ((ml_backend__ml_optimize__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_optimize.tail_rec_call_assign_input_args\'/7", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ml_backend__ml_optimize__ArgRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__ArgRvals_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__VarName_31;
        MR_Word ml_backend__ml_optimize__Type_32;
        MR_Word ml_backend__ml_optimize__QualVarName_34;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_InitStmts_46_46;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_AssignStmts_47_47;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_TempDefns_48_48;
        MR_Word ml_backend__ml_optimize___ArgGCStmt_33;
        MR_Word ml_backend__ml_optimize__Var_50;
        MR_Word ml_backend__ml_optimize__Var_65;
        MR_Word ml_backend__ml_optimize___VarType_35;

        ml_backend__ml_optimize__tail_rec_call_assign_input_args_7_p_0(ml_backend__ml_optimize__ModuleName_1, ml_backend__ml_optimize__Context_2, ml_backend__ml_optimize__Var_66, ml_backend__ml_optimize__ArgRvals_27, &ml_backend__ml_optimize__STATE_VARIABLE_InitStmts_46_46, &ml_backend__ml_optimize__STATE_VARIABLE_AssignStmts_47_47, &ml_backend__ml_optimize__STATE_VARIABLE_TempDefns_48_48);
        ml_backend__ml_optimize__VarName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_67, (MR_Integer) 0)));
        ml_backend__ml_optimize__Type_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_67, (MR_Integer) 1)));
        ml_backend__ml_optimize___ArgGCStmt_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_67, (MR_Integer) 2)));
        {
          ml_backend__ml_optimize__QualVarName_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_34, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_34, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_34, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_31));
        }
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__ArgRval_26)) == (MR_mktag((MR_Integer) 2)));
        if (ml_backend__ml_optimize__succeeded)
        {
          ml_backend__ml_optimize__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__ArgRval_26, (MR_Integer) 0)));
          ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_50, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_50, (MR_Integer) 1)));
            ml_backend__ml_optimize___VarType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_50, (MR_Integer) 2)));
            ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____qual_local_var_name_0_0(ml_backend__ml_optimize__QualVarName_34, ml_backend__ml_optimize__Var_65);
          }
        }
        if (ml_backend__ml_optimize__succeeded)
        {
          *ml_backend__ml_optimize__HeadVar__7_7 = ml_backend__ml_optimize__STATE_VARIABLE_TempDefns_48_48;
          *ml_backend__ml_optimize__HeadVar__6_6 = ml_backend__ml_optimize__STATE_VARIABLE_AssignStmts_47_47;
          *ml_backend__ml_optimize__HeadVar__5_5 = ml_backend__ml_optimize__STATE_VARIABLE_InitStmts_46_46;
        }
        else
        {
          MR_Word ml_backend__ml_optimize__NextValueName_38;
          MR_Word ml_backend__ml_optimize__QualNextValueName_39;
          MR_Word ml_backend__ml_optimize__NextValueInitStmt_40;
          MR_Word ml_backend__ml_optimize__AssignStmt_41;
          MR_Word ml_backend__ml_optimize__TempDefn_42;
          MR_Word ml_backend__ml_optimize__Var_53;
          MR_Word ml_backend__ml_optimize__Var_54;
          MR_Word ml_backend__ml_optimize__Var_56;
          MR_Word ml_backend__ml_optimize__Var_57;
          MR_Word ml_backend__ml_optimize__Var_58;
          MR_String ml_backend__ml_optimize__VarNameStr_36;
          MR_Integer ml_backend__ml_optimize__VarNum_37;

          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__VarName_31)) == (MR_mktag((MR_Integer) 0)));
          if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__VarNameStr_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_31, (MR_Integer) 0)));
            ml_backend__ml_optimize__VarNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_31, (MR_Integer) 1)));
            {
              ml_backend__ml_optimize__NextValueName_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_38, 1) = ((MR_Box) (ml_backend__ml_optimize__VarNameStr_36));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_38, 2) = ((MR_Box) (ml_backend__ml_optimize__VarNum_37));
            }
          }
          else
          {
            MR_Word ml_backend__ml_optimize__Var_51;
            MR_String ml_backend__ml_optimize__VarNameStr_64;

            ml_backend__ml_optimize__VarNameStr_64 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__ml_optimize__VarName_31);
            {
              ml_backend__ml_optimize__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_51, 1) = ((MR_Box) (ml_backend__ml_optimize__VarNameStr_64));
            }
            {
              ml_backend__ml_optimize__NextValueName_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
            }
          }
          {
            ml_backend__ml_optimize__QualNextValueName_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_39, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_39, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_39, 2) = ((MR_Box) (ml_backend__ml_optimize__NextValueName_38));
          }
          {
            ml_backend__ml_optimize__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 1) = ((MR_Box) (ml_backend__ml_optimize__QualNextValueName_39));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 2) = ((MR_Box) (ml_backend__ml_optimize__Type_32));
          }
          {
            ml_backend__ml_optimize__Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_53, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_54));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_53, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_26));
          }
          {
            ml_backend__ml_optimize__NextValueInitStmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueInitStmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueInitStmt_40, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_53));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueInitStmt_40, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_2));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__NextValueInitStmt_40));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_InitStmts_46_46));
          }
          {
            ml_backend__ml_optimize__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_57, 1) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_34));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_57, 2) = ((MR_Box) (ml_backend__ml_optimize__Type_32));
          }
          {
            ml_backend__ml_optimize__Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_58, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_54));
          }
          {
            ml_backend__ml_optimize__Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_56, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_57));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_56, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_58));
          }
          {
            ml_backend__ml_optimize__AssignStmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_56));
            MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_41, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_2));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignStmt_41));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_AssignStmts_47_47));
          }
          ml_backend__ml_optimize__TempDefn_42 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_optimize__NextValueName_38, ml_backend__ml_optimize__Type_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_optimize__Context_2);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__TempDefn_42));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_TempDefns_48_48));
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_FuncDefn_8;

    ml_backend__ml_optimize__optimize_in_function_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_FuncDefn_8);
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_FuncDefn_8));
  }
}

void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0(
  MR_Word ml_backend__ml_optimize__Globals_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10)
{
  {
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_44_44;
    MR_Word ml_backend__ml_optimize__ModuleName_6;
    MR_Word ml_backend__ml_optimize__FuncDefns0_7;
    MR_Word ml_backend__ml_optimize__FuncDefns_8;
    MR_Word ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_12;
    MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 8)));
    MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 9)));
    MR_Word ml_backend__ml_optimize__Var_23;
    MR_Word ml_backend__ml_optimize__Var_24;
    MR_Word ml_backend__ml_optimize__Var_25;
    MR_Word ml_backend__ml_optimize__Var_26;
    MR_Word ml_backend__ml_optimize__Var_27;
    MR_Word ml_backend__ml_optimize__Var_28;
    MR_Word ml_backend__ml_optimize__Var_29;
    MR_Word ml_backend__ml_optimize__Var_30;
    MR_Word ml_backend__ml_optimize__Var_31;
    MR_Word ml_backend__ml_optimize__Var_32;
    MR_Word ml_backend__ml_optimize__Var_33;
    MR_Word ml_backend__ml_optimize__Var_34;
    MR_Word ml_backend__ml_optimize__Var_35;
    MR_Word ml_backend__ml_optimize__Var_36;
    MR_Word ml_backend__ml_optimize__Var_37;
    MR_Word ml_backend__ml_optimize__Var_39;
    MR_Word ml_backend__ml_optimize__Var_40;
    MR_Word ml_backend__ml_optimize__Var_41;
    MR_Word ml_backend__ml_optimize__Var_38;

    ml_backend__ml_optimize__ModuleName_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__Var_11);
    ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    ml_backend__ml_optimize__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    ml_backend__ml_optimize__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    ml_backend__ml_optimize__FuncDefns0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    ml_backend__ml_optimize__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    ml_backend__ml_optimize__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 8)));
    ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 9)));
    {
      ml_backend__ml_optimize__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_12, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_12, 1) = ((MR_Box) (ml_backend__ml_optimize__mlds_optimize_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_12, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_12, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_44_44 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_44_44, ml_backend__ml_optimize__TypeCtorInfo_44_44, ml_backend__ml_optimize__Var_12, ml_backend__ml_optimize__FuncDefns0_7, &ml_backend__ml_optimize__FuncDefns_8);
    ml_backend__ml_optimize__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    ml_backend__ml_optimize__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    ml_backend__ml_optimize__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    ml_backend__ml_optimize__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    ml_backend__ml_optimize__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    ml_backend__ml_optimize__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    ml_backend__ml_optimize__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    ml_backend__ml_optimize__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 8)));
    ml_backend__ml_optimize__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_optimize__FuncDefns_8));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Var_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_optimize__Var_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_optimize__Var_41));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize____Unify____opt_info_0_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2));
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0_10001(
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_optimize__conv0_HeadVar__1_1;

    ml_backend__ml_optimize____Compare____opt_info_0_0(&ml_backend__ml_optimize__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3));
    *ml_backend__ml_optimize__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_optimize__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001(
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize____Unify____var_elim_info_0_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2));
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001(
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_optimize__conv0_HeadVar__1_1;

    ml_backend__ml_optimize____Compare____var_elim_info_0_0(&ml_backend__ml_optimize__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3));
    *ml_backend__ml_optimize__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_optimize__conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_optimize__init(void)
{
}

void mercury__ml_backend__ml_optimize__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0);
}

void mercury__ml_backend__ml_optimize__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_optimize__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_optimize. */
