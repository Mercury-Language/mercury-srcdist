/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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
#include "std_util.mih"
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



struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Stmt0_9;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__ModuleName_16;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__FunctionName_17;
  jmp_buf ml_backend__ml_optimize__optimize_func_4_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeRval_57;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__MaybeObject_58;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CallKind_61;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeCodeAddr_65;
  MR_Word ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Var_66;
};

struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7;
  jmp_buf ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_var_name_0;

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[4];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1];

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0;

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1];

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1];

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

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__920__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_11,
  MR_Word ml_backend__ml_optimize__ThisVar_13,
  MR_Word ml_backend__ml_optimize__Qualifier_15,
  MR_Word ml_backend__ml_optimize__QualKind_16,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_41);

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__918__1_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_40,
  MR_Word ml_backend__ml_optimize__HeadVar__2_52);

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
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__Defn0_5,
  MR_Word * ml_backend__ml_optimize__Defn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);

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
ml_backend__ml_optimize__eliminate_var_in_maybe_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__Rval0_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_13,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

static MR_bool MR_CALL 
ml_backend__ml_optimize__var_defn_2_p_0(
  MR_Word ml_backend__ml_optimize__VarName_3,
  MR_Word ml_backend__ml_optimize__Defn_4);

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word ml_backend__ml_optimize__Stmt_3);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_5,
  MR_Word ml_backend__ml_optimize__Globals_6,
  MR_Word ml_backend__ml_optimize__Defn0_7,
  MR_Word * ml_backend__ml_optimize__Defn_8);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_5,
  MR_Word ml_backend__ml_optimize__Context_6,
  MR_Word ml_backend__ml_optimize__Body0_7,
  MR_Word * ml_backend__ml_optimize__Body_8);

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
ml_backend__ml_optimize__optimize_in_maybe_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_9);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_8_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_8_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_8_p_0(
  MR_Word ml_backend__ml_optimize__QualVarName_9,
  MR_Word ml_backend__ml_optimize__VarRval_10,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_19,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_20,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_21,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_22,
  MR_Integer * ml_backend__ml_optimize__Count_13,
  MR_Word * ml_backend__ml_optimize__Invalidated_14);

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
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_32,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34);

static void MR_CALL 
ml_backend__ml_optimize__set_initializer_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_1,
  MR_Word ml_backend__ml_optimize__Rval_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4);

static MR_Box MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5);

static MR_Box MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__generate_assign_args_6_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_1,
  MR_Word ml_backend__ml_optimize__Context_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5,
  MR_Word * ml_backend__ml_optimize__HeadVar__6_6);

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


static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[9][7];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[2][6];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[3][1];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[4][5];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_6[15][3];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_7[1][8];




static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[9][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 8 */
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

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[2][6] = {
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

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[3][1] = {
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
    ((MR_Box) ((MR_String) "tailcall optimized into a loop"))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_6[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[7])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[8])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_qual_kind_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
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

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_var_name_0 = {
  &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0 = {
  &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_optimize__ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    {
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize____Unify____opt_info_0_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_optimize____Compare____opt_info_0_0(&ml_backend__ml_optimize__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize____Unify____var_elim_info_0_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_optimize____Compare____var_elim_info_0_0(&ml_backend__ml_optimize__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3));
    }
    *ml_backend__ml_optimize__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_optimize__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__920__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_11,
  MR_Word ml_backend__ml_optimize__ThisVar_13,
  MR_Word ml_backend__ml_optimize__Qualifier_15,
  MR_Word ml_backend__ml_optimize__QualKind_16,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_41)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__LambdaHeadVar__1_41)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OtherDataName_22;
    MR_Word ml_backend__ml_optimize__OtherInitializer_26;
    MR_Word ml_backend__ml_optimize__Var_42;
    MR_Word ml_backend__ml_optimize__Var_23;
    MR_Word ml_backend__ml_optimize__Var_24;
    MR_Word ml_backend__ml_optimize___Type_25;
    MR_Word ml_backend__ml_optimize___GC_27;

    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_42 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__LambdaHeadVar__1_41), (MR_Integer) 0);
        ml_backend__ml_optimize__OtherDataName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, (MR_Integer) 2)));
        ml_backend__ml_optimize___Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, (MR_Integer) 3)));
        ml_backend__ml_optimize__OtherInitializer_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, (MR_Integer) 4)));
        ml_backend__ml_optimize___GC_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, (MR_Integer) 5)));
        {
          MR_Word ml_backend__ml_optimize__OtherVarName_28;
          MR_Word ml_backend__ml_optimize__QualOtherVar_29;
          MR_Word ml_backend__ml_optimize__Var_44;

          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__OtherDataName_22)) == (MR_mktag((MR_Integer) 0)));
          if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__OtherVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OtherDataName_22, (MR_Integer) 0)));
              {
                ml_backend__ml_optimize__QualOtherVar_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 2) = ((MR_Box) (ml_backend__ml_optimize__OtherVarName_28));
              }
              {
                ml_backend__ml_optimize__Var_44 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__QualOtherVar_29);
              }
              ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_44 == (MR_Integer) 1);
            }
        }
        if (!(ml_backend__ml_optimize__succeeded))
          {
            MR_Word ml_backend__ml_optimize__Var_43;

            {
              ml_backend__ml_optimize__Var_43 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_optimize__OtherInitializer_26, ml_backend__ml_optimize__ThisVar_13);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_43 == (MR_Integer) 1);
          }
      }
    return ml_backend__ml_optimize__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__918__1_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_40,
  MR_Word ml_backend__ml_optimize__HeadVar__2_52)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    {
      ml_backend__ml_optimize__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_optimize__HeadVar__1_40, ((MR_Box) (ml_backend__ml_optimize__HeadVar__2_52)));
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

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], &ml_backend__ml_optimize__Var_12, ((MR_Box) (ml_backend__ml_optimize__ArgX1_4)), ((MR_Box) (ml_backend__ml_optimize__ArgY1_5)));
        }
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_12 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_12;
        else
          {
            MR_Word ml_backend__ml_optimize__Var_13;

            {
              ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_optimize__Var_13, ml_backend__ml_optimize__ArgX2_6, ml_backend__ml_optimize__ArgY2_7);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_13 == (MR_Integer) 0);
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
            if (ml_backend__ml_optimize__succeeded)
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_13;
            else
              {
                MR_Word ml_backend__ml_optimize__Var_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_optimize__Var_14, ml_backend__ml_optimize__ArgX3_8, ml_backend__ml_optimize__ArgY3_9);
                }
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_14 == (MR_Integer) 0);
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                if (ml_backend__ml_optimize__succeeded)
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_14;
                else
                  {
                    MR_Integer ml_backend__ml_optimize__Var_21 = (MR_Integer) ml_backend__ml_optimize__ArgX4_10;
                    MR_Integer ml_backend__ml_optimize__Var_22 = (MR_Integer) ml_backend__ml_optimize__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Var_21, ml_backend__ml_optimize__Var_22);
                    }
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

        {
          ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], ((MR_Box) (ml_backend__ml_optimize__ArgX1_3)), ((MR_Box) (ml_backend__ml_optimize__ArgY1_4)));
        }
        if (ml_backend__ml_optimize__succeeded)
          {
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__ArgX2_5, ml_backend__ml_optimize__ArgY2_6);
            }
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

        {
          libs__globals____Compare____globals_0_0(&ml_backend__ml_optimize__Var_12, ml_backend__ml_optimize__ArgX1_4, ml_backend__ml_optimize__ArgY1_5);
        }
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_12 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_12;
        else
          {
            MR_Word ml_backend__ml_optimize__Var_13;

            {
              ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_optimize__Var_13, ml_backend__ml_optimize__ArgX2_6, ml_backend__ml_optimize__ArgY2_7);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_13 == (MR_Integer) 0);
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
            if (ml_backend__ml_optimize__succeeded)
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_13;
            else
              {
                MR_Word ml_backend__ml_optimize__Var_14;

                {
                  ml_backend__mlds____Compare____mlds_function_name_0_0(&ml_backend__ml_optimize__Var_14, ml_backend__ml_optimize__ArgX3_8, ml_backend__ml_optimize__ArgY3_9);
                }
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_14 == (MR_Integer) 0);
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                if (ml_backend__ml_optimize__succeeded)
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_14;
                else
                  {
                    ml_backend__mlds____Compare____mlds_func_params_0_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__ArgX4_10, ml_backend__ml_optimize__ArgY4_11);
                  }
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

        {
          ml_backend__ml_optimize__succeeded = libs__globals____Unify____globals_0_0(ml_backend__ml_optimize__ArgX1_3, ml_backend__ml_optimize__ArgY1_4);
        }
        if (ml_backend__ml_optimize__succeeded)
          {
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ArgX2_5, ml_backend__ml_optimize__ArgY2_6);
            }
            if (ml_backend__ml_optimize__succeeded)
              {
                {
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ml_backend__ml_optimize__ArgX3_7, ml_backend__ml_optimize__ArgY3_8);
                }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__ml_optimize__ArgX4_9, ml_backend__ml_optimize__ArgY4_10);
                  }
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Component0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *ml_backend__ml_optimize__Component_6 = ml_backend__ml_optimize__Component0_5;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Component0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_14;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_13, &ml_backend__ml_optimize__Rval_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Component_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_14));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__Lval0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Lval_16;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_15, &ml_backend__ml_optimize__Lval_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Component_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_16));
              }
            }
            break;
          case (MR_Integer) 1:
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

    {
      ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Cond_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    }
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
    MR_bool ml_backend__ml_optimize__succeeded;
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

    {
      ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(ml_backend__ml_optimize__FirstCond0_8, &ml_backend__ml_optimize__FirstCond_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
    }
    ml_backend__ml_optimize__TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_24_24, ml_backend__ml_optimize__TypeCtorInfo_24_24, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[14], ml_backend__ml_optimize__LaterConds0_9, &ml_backend__ml_optimize__LaterConds_12, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    {
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_10, &ml_backend__ml_optimize__Stmt_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    }
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Cond0_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_optimize__Low0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__High0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Low_12;
        MR_Word ml_backend__ml_optimize__High_13;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16;

        {
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Low0_10, &ml_backend__ml_optimize__Low_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
        }
        {
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__High0_11, &ml_backend__ml_optimize__High_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
        }
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

        {
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_optimize__Cond_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_9));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__Defn0_5,
  MR_Word * ml_backend__ml_optimize__Defn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Defn0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__DataDefn0_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_5), (MR_Integer) 0);
          MR_Word ml_backend__ml_optimize__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Flags_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Initializer0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__GCStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__Initializer_15;
          MR_Word ml_backend__ml_optimize__DataDefn_16;

          {
            ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(ml_backend__ml_optimize__Initializer0_13, &ml_backend__ml_optimize__Initializer_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
          }
          {
            ml_backend__ml_optimize__DataDefn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 3) = ((MR_Box) (ml_backend__ml_optimize__Type_12));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 4) = ((MR_Box) (ml_backend__ml_optimize__Initializer_15));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 5) = ((MR_Box) (ml_backend__ml_optimize__GCStmt_14));
          }
          *ml_backend__ml_optimize__Defn_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_optimize__DataDefn_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__FunctionDefn0_18 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_5), (MR_Integer) 1);
          MR_Word ml_backend__ml_optimize__Id_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__Body0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__Attributes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 6)));
          MR_Word ml_backend__ml_optimize__EnvVarNames_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 7)));
          MR_Word ml_backend__ml_optimize__MaybeRequireTailrecInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 8)));
          MR_Word ml_backend__ml_optimize__Body_25;
          MR_Word ml_backend__ml_optimize__FunctionDefn_26;
          MR_Word ml_backend__ml_optimize__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Flags_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_18, (MR_Integer) 2)));

          if ((ml_backend__ml_optimize__Body0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ml_backend__ml_optimize__Body_25 = ml_backend__ml_optimize__Body0_21;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27;
            }
          else
            {
              MR_Word ml_backend__ml_optimize__Stmt0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Body0_21, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Stmt_40;

              {
                ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_39, &ml_backend__ml_optimize__Stmt_40, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              {
                ml_backend__ml_optimize__Body_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Body_25, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_40));
              }
            }
          {
            ml_backend__ml_optimize__FunctionDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_31));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_32));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_33));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 3) = ((MR_Box) (ml_backend__ml_optimize__Id_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 4) = ((MR_Box) (ml_backend__ml_optimize__Params_20));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 5) = ((MR_Box) (ml_backend__ml_optimize__Body_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 6) = ((MR_Box) (ml_backend__ml_optimize__Attributes_22));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 7) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_23));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_26, 8) = ((MR_Box) (ml_backend__ml_optimize__MaybeRequireTailrecInfo_24));
          }
          *ml_backend__ml_optimize__Defn_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__FunctionDefn_26);
        }
        break;
      case (MR_Integer) 2:
        {
          *ml_backend__ml_optimize__Defn_6 = ml_backend__ml_optimize__Defn0_5;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27;
        }
        break;
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

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

          {
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);
          }
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

    {
      ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Case_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    }
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__Defns0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__SubStmts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Defns_11;
          MR_Word ml_backend__ml_optimize__SubStmts_12;

          {
            ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(ml_backend__ml_optimize__Defns0_8, &ml_backend__ml_optimize__Defns_11, ml_backend__ml_optimize__SubStmts0_9, &ml_backend__ml_optimize__SubStmts_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_11));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_12));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Rval_15;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_76_76;
          MR_Word ml_backend__ml_optimize__SubStmts0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__SubStmts_81;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_14, &ml_backend__ml_optimize__Rval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_76_76);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__SubStmts0_79, &ml_backend__ml_optimize__SubStmts_81, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_76_76, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_15));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_81));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_80));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Cond0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Then0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Cond_19;
          MR_Word ml_backend__ml_optimize__Then_20;
          MR_Word ml_backend__ml_optimize__MaybeElse_21;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_74_74;
          MR_Word ml_backend__ml_optimize__Context_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Cond0_16, &ml_backend__ml_optimize__Cond_19, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Then0_17, &ml_backend__ml_optimize__Then_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_74_74);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(ml_backend__ml_optimize__MaybeElse0_18, &ml_backend__ml_optimize__MaybeElse_21, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_74_74, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Cond_19));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_20));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_21));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_82));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_98_98;
              MR_Word ml_backend__ml_optimize__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Val0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Range_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Val_27;
              MR_Word ml_backend__ml_optimize__Cases_28;
              MR_Word ml_backend__ml_optimize__Default_29;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_71;
              MR_Word ml_backend__ml_optimize__Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
              MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_71_71;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Val0_23, &ml_backend__ml_optimize__Val_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69);
              }
              ml_backend__ml_optimize__TypeCtorInfo_98_98 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_98_98, ml_backend__ml_optimize__TypeCtorInfo_98_98, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[13], ml_backend__ml_optimize__Cases0_25, &ml_backend__ml_optimize__Cases_28, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_71_71);
              }
              ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_71 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_71_71);
              {
                ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(ml_backend__ml_optimize__Default0_26, &ml_backend__ml_optimize__Default_29, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_71, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Val_27));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_24));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_28));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_29));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Context_83));
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
              MR_Word ml_backend__ml_optimize__Labels_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Context_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Rval0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rval_86;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_85, &ml_backend__ml_optimize__Rval_86, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_86));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Labels_34));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_84));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_optimize__Sig_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Func0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Obj0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Args0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__RetLvals0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__TailCall_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
              MR_Word ml_backend__ml_optimize__Markers_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
              MR_Word ml_backend__ml_optimize__Func_42;
              MR_Word ml_backend__ml_optimize__Obj_43;
              MR_Word ml_backend__ml_optimize__Args_44;
              MR_Word ml_backend__ml_optimize__RetLvals_45;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_64_64;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_66;
              MR_Word ml_backend__ml_optimize__Context_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 8)));

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Func0_36, &ml_backend__ml_optimize__Func_42, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_64_64);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_maybe_rval_4_p_0(ml_backend__ml_optimize__Obj0_37, &ml_backend__ml_optimize__Obj_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_64_64, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Args0_38, &ml_backend__ml_optimize__Args_44, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_66);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(ml_backend__ml_optimize__RetLvals0_39, &ml_backend__ml_optimize__RetLvals_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_66, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Sig_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Func_42));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Obj_43));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Args_44));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__RetLvals_45));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__TailCall_40));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Markers_41));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_optimize__Context_87));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_optimize__Rvals0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rvals_47;
              MR_Word ml_backend__ml_optimize__Context_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Rvals0_46, &ml_backend__ml_optimize__Rvals_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rvals_47));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_88));
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
              MR_Word ml_backend__ml_optimize__Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Ref0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_92;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Ref0_91, &ml_backend__ml_optimize__Ref_92, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_59_59);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__BodyStmt0_50, &ml_backend__ml_optimize__BodyStmt_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_59_59, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__HandlerStmt0_51, &ml_backend__ml_optimize__HandlerStmt_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_92));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__BodyStmt_52));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerStmt_53));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_90));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_optimize__Ref0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_49;
              MR_Word ml_backend__ml_optimize__Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Ref0_48, &ml_backend__ml_optimize__Ref_49, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_89));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_optimize__AtomicStmt0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__AtomicStmt_55;
              MR_Word ml_backend__ml_optimize__Context_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(ml_backend__ml_optimize__AtomicStmt0_54, &ml_backend__ml_optimize__AtomicStmt_55, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_93));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_optimize__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Stmt_9;

        {
          ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_9));
        }
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
    MR_Word ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_19;

    {
      ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv7_Lval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_19);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv7_Lval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_19));
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

    {
      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_29);
    }
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

    {
      ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Component_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_18);
    }
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

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

          {
            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_9, &ml_backend__ml_optimize__Lval_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_10, &ml_backend__ml_optimize__Rval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
          }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_49, &ml_backend__ml_optimize__Lval_51, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_50, &ml_backend__ml_optimize__Rval_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_53, &ml_backend__ml_optimize__Rval_54, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Target0_13, &ml_backend__ml_optimize__Target_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42);
              }
              ml_backend__ml_optimize__TypeCtorInfo_18_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_79, ml_backend__ml_optimize__TypeCtorInfo_18_79, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[11], ml_backend__ml_optimize__Args0_19, &ml_backend__ml_optimize__Args_24, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_55, &ml_backend__ml_optimize__Lval_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_57, &ml_backend__ml_optimize__Rval_58, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(ml_backend__ml_optimize__TrailOp0_25, &ml_backend__ml_optimize__TrailOp_26, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_64_64, ml_backend__ml_optimize__TypeCtorInfo_64_64, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[10], ml_backend__ml_optimize__Components0_28, &ml_backend__ml_optimize__Components_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
              }
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

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_94, ml_backend__ml_optimize__TypeCtorInfo_18_94, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[12], ml_backend__ml_optimize__Lvals0_31, &ml_backend__ml_optimize__Lvals_33, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
              }
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
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
  MR_Word ml_backend__ml_optimize__Op0_5,
  MR_Word * ml_backend__ml_optimize__Op_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

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

          {
            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
          }
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

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_10, &ml_backend__ml_optimize__Rval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
          }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_19, &ml_backend__ml_optimize__Lval_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_21, &ml_backend__ml_optimize__Rval_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
              }
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
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19;

    {
      ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Lval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Lval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19));
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
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[9], ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_optimize__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Rval_9;

        {
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_9));
        }
      }
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

    {
      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_29);
    }
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
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[8], ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
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

    {
      ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Init_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_16);
    }
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

    {
      ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Init_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_16);
    }
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

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

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16);
          }
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

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_32_32, ml_backend__ml_optimize__TypeCtorInfo_32_32, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[7], ml_backend__ml_optimize__Members0_13, &ml_backend__ml_optimize__Members_14, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_16);
          }
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

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_26_26, ml_backend__ml_optimize__TypeCtorInfo_26_26, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[6], ml_backend__ml_optimize__Elements0_10, &ml_backend__ml_optimize__Elements_11, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_16);
          }
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
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
  MR_Word ml_backend__ml_optimize__Lval0_5,
  MR_Word * ml_backend__ml_optimize__Lval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19)
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

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_9, &ml_backend__ml_optimize__Rval_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);
          }
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
          MR_Word ml_backend__ml_optimize__Rval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_25;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_24, &ml_backend__ml_optimize__Rval_25, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Lval_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_optimize__VarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_optimize__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 3)));

          {
            ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], ((MR_Box) (ml_backend__ml_optimize__VarName_16)), ((MR_Box) (ml_backend__ml_optimize__Var_33)));
          }
          if (ml_backend__ml_optimize__succeeded)
            {
              MR_Word ml_backend__ml_optimize__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 3)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_29));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_30));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_31));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
              }
            }
          else
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18;
          *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
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
          MR_Word ml_backend__ml_optimize__TypeInfo_59_59;
          MR_Word ml_backend__ml_optimize__Var_58;
          MR_Word ml_backend__ml_optimize__Var_10;

          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_8)) == (MR_mktag((MR_Integer) 3)));
          if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 0)));
              ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 1)));
              ml_backend__ml_optimize__TypeInfo_59_59 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
              {
                ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_59_59, ((MR_Box) (ml_backend__ml_optimize__VarName_9)), ((MR_Box) (ml_backend__ml_optimize__Var_58)));
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_14, &ml_backend__ml_optimize__ArgRval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_40, &ml_backend__ml_optimize__ArgRval_41, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRvalA0_17, &ml_backend__ml_optimize__ArgRvalA_19, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_32_32);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRvalB0_18, &ml_backend__ml_optimize__ArgRvalB_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_32_32, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_43, &ml_backend__ml_optimize__Lval_44, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              }
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

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__RowRval0_22, &ml_backend__ml_optimize__RowRval_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_29);
              }
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
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_Stmt_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_57;

    {
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Stmt_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_57);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Stmt_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_57));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Defn_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28;

    {
      ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Defn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Defn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_13,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_33 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_48;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_17;
    MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_15;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_33, ml_backend__ml_optimize__TypeCtorInfo_18_33, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[4], ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10, ml_backend__ml_optimize__STATE_VARIABLE_Defns_11, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_17);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_17);
    ml_backend__ml_optimize__TypeCtorInfo_18_48 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_48, ml_backend__ml_optimize__TypeCtorInfo_18_48, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[5], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_12, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_13, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_15);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_15);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__var_defn_2_p_0(
  MR_Word ml_backend__ml_optimize__VarName_3,
  MR_Word ml_backend__ml_optimize__Defn_4)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Defn_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__DataDefn_5;
    MR_Word ml_backend__ml_optimize__DataName_6;
    MR_Word ml_backend__ml_optimize__Var_12;
    MR_Word ml_backend__ml_optimize__Var_7;
    MR_Word ml_backend__ml_optimize__Var_8;
    MR_Word ml_backend__ml_optimize__Var_9;
    MR_Word ml_backend__ml_optimize__Var_10;
    MR_Word ml_backend__ml_optimize__Var_11;

    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__DataDefn_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn_4), (MR_Integer) 0);
        ml_backend__ml_optimize__DataName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_5, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_5, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_5, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_5, (MR_Integer) 3)));
        ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_5, (MR_Integer) 4)));
        ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_5, (MR_Integer) 5)));
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__DataName_6)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_6, (MR_Integer) 0)));
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_3, ml_backend__ml_optimize__Var_12);
            }
          }
      }
    return ml_backend__ml_optimize__succeeded;
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
    MR_Word ml_backend__ml_optimize__Var_6;

    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 0)));
        ml_backend__ml_optimize__BlockStmts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_3, (MR_Integer) 2)));
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__FirstCond_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__LaterConds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Stmt_10;

    {
      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_9, &ml_backend__ml_optimize__Stmt_10);
    }
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
ml_backend__ml_optimize__optimize_in_defn_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_Defn_8;

    {
      ml_backend__ml_optimize__optimize_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Defn_8);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Defn_8));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_5,
  MR_Word ml_backend__ml_optimize__Globals_6,
  MR_Word ml_backend__ml_optimize__Defn0_7,
  MR_Word * ml_backend__ml_optimize__Defn_8)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Defn0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_optimize__Defn_8 = ml_backend__ml_optimize__Defn0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__FunctionDefn0_10 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_7), (MR_Integer) 1);
          MR_Word ml_backend__ml_optimize__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Flags_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__PredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Params_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__FuncBody0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__Attributes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 6)));
          MR_Word ml_backend__ml_optimize__EnvVarNames_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 7)));
          MR_Word ml_backend__ml_optimize__MaybeRequireTailrecInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn0_10, (MR_Integer) 8)));
          MR_Word ml_backend__ml_optimize__OptInfo_20;
          MR_Word ml_backend__ml_optimize__FuncBody1_21;
          MR_Word ml_backend__ml_optimize__FuncBody_22;
          MR_Word ml_backend__ml_optimize__FunctionDefn_23;

          {
            ml_backend__ml_optimize__OptInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 0) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 1) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 2) = ((MR_Box) (ml_backend__ml_optimize__Name_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 3) = ((MR_Box) (ml_backend__ml_optimize__Params_15));
          }
          {
            ml_backend__ml_optimize__optimize_func_4_p_0(ml_backend__ml_optimize__OptInfo_20, ml_backend__ml_optimize__Context_12, ml_backend__ml_optimize__FuncBody0_16, &ml_backend__ml_optimize__FuncBody1_21);
          }
          if ((ml_backend__ml_optimize__FuncBody1_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__ml_optimize__FuncBody_22 = ml_backend__ml_optimize__FuncBody1_21;
          else
            {
              MR_Word ml_backend__ml_optimize__Stmt0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__FuncBody1_21, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Stmt_63;

              {
                ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_20, ml_backend__ml_optimize__Stmt0_62, &ml_backend__ml_optimize__Stmt_63);
              }
              {
                ml_backend__ml_optimize__FuncBody_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__FuncBody_22, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_63));
              }
            }
          {
            ml_backend__ml_optimize__FunctionDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_12));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_13));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 3) = ((MR_Box) (ml_backend__ml_optimize__PredProcId_14));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 4) = ((MR_Box) (ml_backend__ml_optimize__Params_15));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 5) = ((MR_Box) (ml_backend__ml_optimize__FuncBody_22));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 6) = ((MR_Box) (ml_backend__ml_optimize__Attributes_17));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 7) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_18));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__FunctionDefn_23, 8) = ((MR_Box) (ml_backend__ml_optimize__MaybeRequireTailrecInfo_19));
          }
          *ml_backend__ml_optimize__Defn_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__FunctionDefn_23);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_47;
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_57;
          MR_Word ml_backend__ml_optimize__ClassDefn0_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_7), (MR_Integer) 2);
          MR_Word ml_backend__ml_optimize__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Imports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__BaseClasses_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__Implements_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 6)));
          MR_Word ml_backend__ml_optimize__TypeParams_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 7)));
          MR_Word ml_backend__ml_optimize__CtorDefns0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 8)));
          MR_Word ml_backend__ml_optimize__MemberDefns0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 9)));
          MR_Word ml_backend__ml_optimize__MemberDefns_32;
          MR_Word ml_backend__ml_optimize__CtorDefns_33;
          MR_Word ml_backend__ml_optimize__ClassDefn_34;
          MR_Word ml_backend__ml_optimize__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Flags_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_24, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_43;

          {
            ml_backend__ml_optimize__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_defn_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
          }
          ml_backend__ml_optimize__TypeCtorInfo_14_47 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_47, ml_backend__ml_optimize__TypeCtorInfo_14_47, ml_backend__ml_optimize__Var_43, ml_backend__ml_optimize__MemberDefns0_31, &ml_backend__ml_optimize__MemberDefns_32);
          }
          ml_backend__ml_optimize__TypeCtorInfo_14_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_57, ml_backend__ml_optimize__TypeCtorInfo_14_57, ml_backend__ml_optimize__Var_43, ml_backend__ml_optimize__CtorDefns0_30, &ml_backend__ml_optimize__CtorDefns_33);
          }
          {
            ml_backend__ml_optimize__ClassDefn_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_35));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_36));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_37));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 3) = ((MR_Box) (ml_backend__ml_optimize__Kind_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 4) = ((MR_Box) (ml_backend__ml_optimize__Imports_26));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 5) = ((MR_Box) (ml_backend__ml_optimize__BaseClasses_27));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 6) = ((MR_Box) (ml_backend__ml_optimize__Implements_28));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 7) = ((MR_Box) (ml_backend__ml_optimize__TypeParams_29));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 8) = ((MR_Box) (ml_backend__ml_optimize__CtorDefns_33));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_34, 9) = ((MR_Box) (ml_backend__ml_optimize__MemberDefns_32));
          }
          *ml_backend__ml_optimize__Defn_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ml_backend__ml_optimize__ClassDefn_34);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    {
      MR_Word ml_backend__ml_optimize___Signature_56;
      MR_Word ml_backend__ml_optimize___CallArgs_59;
      MR_Word ml_backend__ml_optimize___Results_60;
      MR_Word ml_backend__ml_optimize___Markers_62;
      MR_Word ml_backend__ml_optimize___Context_63;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
        {
          {
            ml_backend__ml_optimize___Signature_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 1)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeRval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 2)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__MaybeObject_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 3)));
            ml_backend__ml_optimize___CallArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 4)));
            ml_backend__ml_optimize___Results_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 5)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CallKind_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 6)));
            ml_backend__ml_optimize___Markers_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 7)));
            ml_backend__ml_optimize___Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, (MR_Integer) 8)));
          }
          {
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__MaybeObject_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
              {
                switch ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CallKind_61) {
                  default:
                    (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = MR_TRUE;
                    break;
                }
                if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
                  {
                    (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeRval_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeRval_57, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
                      {
                        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeRval_57, (MR_Integer) 1)));
                        {
                          (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Var_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Var_66, (MR_Integer) 0)))) == (MR_Integer) 13)));
                          if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
                            {
                              (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeCodeAddr_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Var_66, (MR_Integer) 1)));
                              {
                                {
                                  (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__CalleeCodeAddr_65, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__ModuleName_16, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__FunctionName_17);
                                }
                                if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
                                  {
                                    ml_backend__ml_optimize__optimize_func_4_p_0_1(ml_backend__ml_optimize__env_ptr);
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

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__commit_0) == 0)
      {
        {
          ml_backend__ml_util__stmt_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Stmt0_9, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__SubStmt_19, ml_backend__ml_optimize__optimize_func_4_p_0_2, ml_backend__ml_optimize__env_ptr);
        }
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_4_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_5,
  MR_Word ml_backend__ml_optimize__Context_6,
  MR_Word ml_backend__ml_optimize__Body0_7,
  MR_Word * ml_backend__ml_optimize__Body_8)
{
  {
    struct ml_backend__ml_optimize__optimize_func_4_p_0_env_0_s ml_backend__ml_optimize__env;

    if ((ml_backend__ml_optimize__Body0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__Body_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_optimize__Stmt_10;
        MR_Word ml_backend__ml_optimize__Globals_15;
        MR_Word ml_backend__ml_optimize__Var_44;
        MR_Word ml_backend__ml_optimize__Var_45;
        MR_Word ml_backend__ml_optimize__Var_46;
        MR_Word ml_backend__ml_optimize__Var_47;
        MR_Word ml_backend__ml_optimize__Var_49;

        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Body0_7, (MR_Integer) 0)));
        ml_backend__ml_optimize__Globals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 3)));
        {
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_15, (MR_Integer) 463, (MR_Integer) 1);
        }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 0)));
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 1)));
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__FunctionName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 2)));
            ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_5, (MR_Integer) 3)));
            {
              ml_backend__ml_optimize__optimize_func_4_p_0_3(&ml_backend__ml_optimize__env);
            }
          }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__succeeded)
          {
            MR_Word ml_backend__ml_optimize__CommentStmt_20;
            MR_Word ml_backend__ml_optimize__SupportsBreakContinue_21;

            {
              ml_backend__ml_optimize__CommentStmt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_4[2])));
              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_20, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_6));
            }
            {
              ml_backend__ml_optimize__SupportsBreakContinue_21 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_15);
            }
            switch (ml_backend__ml_optimize__SupportsBreakContinue_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_optimize__LoopTopStmt_23;
                  MR_Word ml_backend__ml_optimize__Var_30;
                  MR_Word ml_backend__ml_optimize__Var_31;
                  MR_Word ml_backend__ml_optimize__Var_32;

                  {
                    ml_backend__ml_optimize__LoopTopStmt_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LoopTopStmt_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LoopTopStmt_23, 1) = ((MR_Box) ((MR_String) "loop_top"));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LoopTopStmt_23, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_6));
                  }
                  {
                    ml_backend__ml_optimize__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_32, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Stmt0_9));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_31, 0) = ((MR_Box) (ml_backend__ml_optimize__LoopTopStmt_23));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_31, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_32));
                  }
                  {
                    ml_backend__ml_optimize__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_30, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_20));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_30, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_31));
                  }
                  {
                    ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_30));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_6));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_optimize__BreakStmt_22;
                  MR_Word ml_backend__ml_optimize__Var_38;
                  MR_Word ml_backend__ml_optimize__Var_40;
                  MR_Word ml_backend__ml_optimize__Var_41;
                  MR_Word ml_backend__ml_optimize__Var_42;

                  {
                    ml_backend__ml_optimize__BreakStmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__BreakStmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__BreakStmt_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__BreakStmt_22, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_6));
                  }
                  {
                    ml_backend__ml_optimize__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_42, 0) = ((MR_Box) (ml_backend__ml_optimize__BreakStmt_22));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_41, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Stmt0_9));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_42));
                  }
                  {
                    ml_backend__ml_optimize__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_40, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_20));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_40, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_41));
                  }
                  {
                    ml_backend__ml_optimize__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_40));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_6));
                  }
                  {
                    ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[2])));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_38));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_6));
                  }
                }
                break;
            }
          }
        else
          ml_backend__ml_optimize__Stmt_10 = (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_4_p_0_env_0__Stmt0_9;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__Body_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_10));
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
  {
    MR_bool ml_backend__ml_optimize__succeeded;

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

          {
            ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_7, &ml_backend__ml_optimize__Stmt_8);
          }
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

    {
      ml_backend__ml_optimize__optimize_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Case_6);
    }
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
          MR_Word ml_backend__ml_optimize__Defns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__SubStmts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Defns1_18;
          MR_Word ml_backend__ml_optimize__SubStmts1_19;
          MR_Word ml_backend__ml_optimize__Defns_20;
          MR_Word ml_backend__ml_optimize__SubStmts2_21;
          MR_Word ml_backend__ml_optimize__SubStmts3_22;
          MR_Word ml_backend__ml_optimize__SubStmts_23;
          MR_Word ml_backend__ml_optimize__Globals_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__OptInit_74;
          MR_Word ml_backend__ml_optimize__EliminateLocalVars_88;
          MR_Word ml_backend__ml_optimize__Var_89;
          MR_Word ml_backend__ml_optimize__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Var_93;
          MR_Word ml_backend__ml_optimize__Var_94;
          MR_Word ml_backend__ml_optimize__Var_95;

          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_73, (MR_Integer) 464, &ml_backend__ml_optimize__OptInit_74);
          }
          switch (ml_backend__ml_optimize__OptInit_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__Defns1_18 = ml_backend__ml_optimize__Defns0_15;
                ml_backend__ml_optimize__SubStmts1_19 = ml_backend__ml_optimize__SubStmts0_16;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns0_15, &ml_backend__ml_optimize__Defns1_18, ml_backend__ml_optimize__SubStmts0_16, &ml_backend__ml_optimize__SubStmts1_19);
              }
              break;
          }
          ml_backend__ml_optimize__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          ml_backend__ml_optimize__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          ml_backend__ml_optimize__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          ml_backend__ml_optimize__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Var_89, (MR_Integer) 465, &ml_backend__ml_optimize__EliminateLocalVars_88);
          }
          switch (ml_backend__ml_optimize__EliminateLocalVars_88) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__Defns_20 = ml_backend__ml_optimize__Defns1_18;
                ml_backend__ml_optimize__SubStmts2_21 = ml_backend__ml_optimize__SubStmts1_19;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns1_18, &ml_backend__ml_optimize__Defns_20, ml_backend__ml_optimize__SubStmts1_19, &ml_backend__ml_optimize__SubStmts2_21);
              }
              break;
          }
          {
            ml_backend__ml_optimize__maybe_flatten_block_2_p_0(ml_backend__ml_optimize__SubStmts2_21, &ml_backend__ml_optimize__SubStmts3_22);
          }
          {
            ml_backend__ml_optimize__optimize_in_stmts_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__SubStmts3_22, &ml_backend__ml_optimize__SubStmts_23);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_20));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_23));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__SubStmts0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__SubStmts_55;

          {
            ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__SubStmts0_53, &ml_backend__ml_optimize__SubStmts_55);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_25));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_55));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_54));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Then_28;
          MR_Word ml_backend__ml_optimize__MaybeElse_29;
          MR_Word ml_backend__ml_optimize__Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Rval_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));

          {
            ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Then0_26, &ml_backend__ml_optimize__Then_28);
          }
          {
            ml_backend__ml_optimize__optimize_in_maybe_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__MaybeElse0_27, &ml_backend__ml_optimize__MaybeElse_29);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_57));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_28));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_29));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Context_56));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_65_65;
              MR_Word ml_backend__ml_optimize__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Range_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Cases_34;
              MR_Word ml_backend__ml_optimize__Default_35;
              MR_Word ml_backend__ml_optimize__Var_52;
              MR_Word ml_backend__ml_optimize__Context_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
              MR_Word ml_backend__ml_optimize__Rval_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_52, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_52, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_52, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
              }
              ml_backend__ml_optimize__TypeCtorInfo_65_65 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_65_65, ml_backend__ml_optimize__TypeCtorInfo_65_65, ml_backend__ml_optimize__Var_52, ml_backend__ml_optimize__Cases0_32, &ml_backend__ml_optimize__Cases_34);
              }
              {
                ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Default0_33, &ml_backend__ml_optimize__Default_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_59));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_31));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_34));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_35));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Context_58));
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
            {
              ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_5, ml_backend__ml_optimize__Stmt_6);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Ref_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__BodyStmt0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__HandlerStmt0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__BodyStmt_39;
              MR_Word ml_backend__ml_optimize__HandlerStmt_40;
              MR_Word ml_backend__ml_optimize__Context_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));

              {
                ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__BodyStmt0_37, &ml_backend__ml_optimize__BodyStmt_39);
              }
              {
                ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__HandlerStmt0_38, &ml_backend__ml_optimize__HandlerStmt_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_36));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__BodyStmt_39));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerStmt_40));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_60));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_9)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_9 = ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_0_8;
    else
      {
        MR_Word ml_backend__ml_optimize__Stmt0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_0_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Stmt_7;

        {
          ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_6, &ml_backend__ml_optimize__Stmt_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__STATE_VARIABLE_MaybeStmt_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_7));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4;
          }
        else
          {
            MR_Word ml_backend__ml_optimize__Defn0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Defns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Defns1_15;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_19_19;
            MR_Word ml_backend__ml_optimize__DataDefn0_29;
            MR_Word ml_backend__ml_optimize__Name_30;
            MR_Word ml_backend__ml_optimize__Flags_32;
            MR_Word ml_backend__ml_optimize__Initializer_34;
            MR_Word ml_backend__ml_optimize__VarName_36;
            MR_Word ml_backend__ml_optimize__QualVarName_37;
            MR_Word ml_backend__ml_optimize__Rval_38;
            MR_Integer ml_backend__ml_optimize__Count_43;
            MR_Word ml_backend__ml_optimize__Invalidated_44;
            MR_Word ml_backend__ml_optimize__Var_45;
            MR_Word ml_backend__ml_optimize__Var_46;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_32_47;
            MR_Word ml_backend__ml_optimize__Var_60;
            MR_Word ml_backend__ml_optimize___Context_31;
            MR_Word ml_backend__ml_optimize___Type_33;
            MR_Word ml_backend__ml_optimize___GCStmt_35;
            MR_Word ml_backend__ml_optimize__Var_54;
            MR_Word ml_backend__ml_optimize__Var_55;
            MR_Word ml_backend__ml_optimize__Var_56;

            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Defn0_11)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__DataDefn0_29 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_11), (MR_Integer) 0);
                ml_backend__ml_optimize__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 0)));
                ml_backend__ml_optimize___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 1)));
                ml_backend__ml_optimize__Flags_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 2)));
                ml_backend__ml_optimize___Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 3)));
                ml_backend__ml_optimize__Initializer_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 4)));
                ml_backend__ml_optimize___GCStmt_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 5)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_30)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__VarName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Name_30, (MR_Integer) 0)));
                    {
                      ml_backend__ml_optimize__Var_60 = ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_f_0();
                    }
                    {
                      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_data_decl_flags_0_0(ml_backend__ml_optimize__Flags_32, ml_backend__ml_optimize__Var_60);
                    }
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
                        ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
                        ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                        ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
                        ml_backend__ml_optimize__Var_46 = (MR_Integer) 0;
                        {
                          ml_backend__ml_optimize__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_37, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_36));
                        }
                        if ((ml_backend__ml_optimize__Initializer_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(ml_backend__ml_optimize__QualVarName_37, &ml_backend__ml_optimize__Rval_38, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4, &ml_backend__ml_optimize__STATE_VARIABLE_Stmts_32_47);
                          }
                        else
                        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Initializer_34)) == (MR_mktag((MR_Integer) 1))))
                          {
                            ml_backend__ml_optimize__Rval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Initializer_34, (MR_Integer) 0)));
                            ml_backend__ml_optimize__STATE_VARIABLE_Stmts_32_47 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4;
                            ml_backend__ml_optimize__succeeded = MR_TRUE;
                          }
                        else
                          ml_backend__ml_optimize__succeeded = MR_FALSE;
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            {
                              ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__Rval_38);
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                {
                                  ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_cannot_throw_1_p_0(ml_backend__ml_optimize__Rval_38);
                                }
                                if (!(ml_backend__ml_optimize__succeeded))
                                  {
                                    MR_Word ml_backend__ml_optimize__Globals_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
                                    MR_Word ml_backend__ml_optimize__Var_50;
                                    MR_Word ml_backend__ml_optimize__Var_51;
                                    MR_Word ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
                                    MR_Word ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                                    MR_Word ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));

                                    {
                                      ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_42, (MR_Integer) 175, (MR_Integer) 1);
                                    }
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        ml_backend__ml_optimize__Var_50 = (MR_Integer) 176;
                                        ml_backend__ml_optimize__Var_51 = (MR_Integer) 1;
                                        {
                                          ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_42, ml_backend__ml_optimize__Var_50, ml_backend__ml_optimize__Var_51);
                                        }
                                      }
                                  }
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    {
                                      ml_backend__ml_optimize__eliminate_var_8_p_0(ml_backend__ml_optimize__QualVarName_37, ml_backend__ml_optimize__Rval_38, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns1_15, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_32_47, &ml_backend__ml_optimize__STATE_VARIABLE_Stmts_19_19, &ml_backend__ml_optimize__Count_43, &ml_backend__ml_optimize__Invalidated_44);
                                    }
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Invalidated_44 == (MR_Integer) 0);
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Count_43 <= (MR_Integer) 1);
                                        if (!(ml_backend__ml_optimize__succeeded))
                                          switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_38)) {
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
                                                MR_Word ml_backend__ml_optimize__Lval_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_38, (MR_Integer) 0)));
                                                MR_Word ml_backend__ml_optimize__Var_88;
                                                MR_Word ml_backend__ml_optimize__Var_89;

                                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_70)) == (MR_mktag((MR_Integer) 3)));
                                                if (ml_backend__ml_optimize__succeeded)
                                                  {
                                                    ml_backend__ml_optimize__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_70, (MR_Integer) 0)));
                                                    ml_backend__ml_optimize__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_70, (MR_Integer) 1)));
                                                  }
                                              }
                                              break;
                                            case (MR_Integer) 3:
                                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_38, (MR_Integer) 0)))) {
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
                      }
                  }
              }
            if (ml_backend__ml_optimize__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__2_2 = ml_backend__ml_optimize__Defns1_15;
                  MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Stmts_0_4 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_19_19;

                  ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Stmts_0_4;
                  ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            else
              {
                MR_Word ml_backend__ml_optimize__Defns2_16;

                {
                  ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns2_16, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_optimize__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defn0_11));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Defns2_16));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_8_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_Stmt_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_57;

    {
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Stmt_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_57);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Stmt_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_57));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_8_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Defn_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28;

    {
      ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Defn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Defn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_8_p_0(
  MR_Word ml_backend__ml_optimize__QualVarName_9,
  MR_Word ml_backend__ml_optimize__VarRval_10,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_19,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_20,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_21,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_22,
  MR_Integer * ml_backend__ml_optimize__Count_13,
  MR_Word * ml_backend__ml_optimize__Invalidated_14)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_57;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_72;
    MR_Word ml_backend__ml_optimize__VarElimInfo0_17;
    MR_Word ml_backend__ml_optimize__VarElimInfo_18;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_41;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_41;
    MR_Box ml_backend__ml_optimize__conv5_VarElimInfo_18;
    MR_Word ml_backend__ml_optimize__Var_25;
    MR_Word ml_backend__ml_optimize__Var_26;

    {
      ml_backend__ml_optimize__VarElimInfo0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_17, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_17, 1) = ((MR_Box) (ml_backend__ml_optimize__VarRval_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_17, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_17, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    ml_backend__ml_optimize__TypeCtorInfo_18_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_57, ml_backend__ml_optimize__TypeCtorInfo_18_57, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[2], ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_19, ml_backend__ml_optimize__STATE_VARIABLE_Defns_20, ((MR_Box) (ml_backend__ml_optimize__VarElimInfo0_17)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_41);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_41 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_41);
    ml_backend__ml_optimize__TypeCtorInfo_18_72 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_72, ml_backend__ml_optimize__TypeCtorInfo_18_72, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[3], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_21, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_22, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_41)), &ml_backend__ml_optimize__conv5_VarElimInfo_18);
    }
    ml_backend__ml_optimize__VarElimInfo_18 = ((MR_Word) ml_backend__ml_optimize__conv5_VarElimInfo_18);
    ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 1)));
    *ml_backend__ml_optimize__Count_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 2)));
    *ml_backend__ml_optimize__Invalidated_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 3)));
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
          {
            ml_backend__ml_optimize__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 1)));
            ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 2)));
          }
          {
            ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(ml_backend__ml_optimize__env_ptr);
          }
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
        {
          ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2, ml_backend__ml_optimize__env_ptr);
        }
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
      MR_Word ml_backend__ml_optimize__Rval0_25;
      MR_Word ml_backend__ml_optimize__Context_26;
      MR_Word ml_backend__ml_optimize__TypeInfo_22_37;
      MR_Word ml_backend__ml_optimize__Var_30;
      MR_Word ml_backend__ml_optimize__Var_31;
      MR_Word ml_backend__ml_optimize__Var_36;
      MR_Word ml_backend__ml_optimize___Type_24;

      (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
          ml_backend__ml_optimize__Stmts0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              ml_backend__ml_optimize__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 1)));
              ml_backend__ml_optimize__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 2)));
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_30)) == (MR_mktag((MR_Integer) 2)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_30, (MR_Integer) 0)));
                  ml_backend__ml_optimize__Rval0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_30, (MR_Integer) 1)));
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_31)) == (MR_mktag((MR_Integer) 3)));
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                    {
                      ml_backend__ml_optimize__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_31, (MR_Integer) 0)));
                      ml_backend__ml_optimize___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_31, (MR_Integer) 1)));
                      ml_backend__ml_optimize__TypeInfo_22_37 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
                      {
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_22_37, ((MR_Box) (ml_backend__ml_optimize__VarName_5)), ((MR_Box) (ml_backend__ml_optimize__Var_36)));
                      }
                    }
                }
            }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              ml_backend__ml_optimize__Rval1_10 = ml_backend__ml_optimize__Rval0_25;
              {
                ml_backend__ml_optimize__Stmt1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_26));
              }
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word ml_backend__ml_optimize__Defns0_27;
              MR_Word ml_backend__ml_optimize__SubStmts0_28;
              MR_Word ml_backend__ml_optimize__SubStmts_29;
              MR_Word ml_backend__ml_optimize__Var_34;
              MR_Word ml_backend__ml_optimize__Context_35;

              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7)) == (MR_mktag((MR_Integer) 0)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__Defns0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 0)));
                  ml_backend__ml_optimize__SubStmts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 1)));
                  ml_backend__ml_optimize__Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 2)));
                  {
                    ml_backend__ml_optimize__Var_34 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_optimize__Defns0_27, ml_backend__ml_optimize__VarName_5);
                  }
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_34 == (MR_Integer) 0);
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                    {
                      {
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(ml_backend__ml_optimize__VarName_5, &ml_backend__ml_optimize__Rval1_10, ml_backend__ml_optimize__SubStmts0_28, &ml_backend__ml_optimize__SubStmts_29);
                      }
                      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                        {
                          {
                            ml_backend__ml_optimize__Stmt1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns0_27));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 1) = ((MR_Box) (ml_backend__ml_optimize__SubStmts_29));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_35));
                          }
                          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
                        }
                    }
                }
            }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              MR_Word ml_backend__ml_optimize__Var_17;
              MR_Word ml_backend__ml_optimize__Var_18;
              MR_Word ml_backend__ml_optimize__Var_12;

              *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval1_10;
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt1_11)) == (MR_mktag((MR_Integer) 0)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 0)));
                  ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 1)));
                  ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_11, (MR_Integer) 2)));
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                    (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_Word ml_backend__ml_optimize__Var_19;

              {
                ml_backend__ml_optimize__Var_19 = ml_backend__ml_util__statement_contains_var_2_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, ml_backend__ml_optimize__VarName_5);
              }
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_19 == (MR_Integer) 0);
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                {
                  {
                    ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(&ml_backend__ml_optimize__env);
                  }
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = !((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded);
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                    {
                      {
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(ml_backend__ml_optimize__VarName_5, ml_backend__ml_optimize__Rval_6, ml_backend__ml_optimize__Stmts0_8, &ml_backend__ml_optimize__Stmts1_16);
                      }
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
                  MR_Word ml_backend__ml_optimize__SubRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_optimize___Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_19;

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
                  MR_Word ml_backend__ml_optimize__SubRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize___Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_28;

                    ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_optimize__SubRvalA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__SubRvalB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize___Op_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                  {
                    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__SubRvalA_21);
                  }
                  if (ml_backend__ml_optimize__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRvalB_22;

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
                        MR_Word ml_backend__ml_optimize__Address_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_optimize__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_8, (MR_Integer) 4)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__Address_11;

                          ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_optimize__Address_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_8, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_8, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__Address_27;

                          ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      ml_backend__ml_optimize__succeeded = MR_TRUE;
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
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;

    {
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__920__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
    return ml_backend__ml_optimize__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;

    {
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__918__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
    return ml_backend__ml_optimize__succeeded;
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

    {
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__var_defn_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_32,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__RHS_11;
        MR_Word ml_backend__ml_optimize__VarName_17;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_35_35;
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_55_55;
        MR_Word ml_backend__ml_optimize__AssignStmt_9;
        MR_Word ml_backend__ml_optimize__LHS_10;
        MR_Word ml_backend__ml_optimize__ThisVar_13;
        MR_Word ml_backend__ml_optimize__Qualifier_15;
        MR_Word ml_backend__ml_optimize__QualKind_16;
        MR_Word ml_backend__ml_optimize__FollowingDefns_19;
        MR_Word ml_backend__ml_optimize__Filter_20;
        MR_Word ml_backend__ml_optimize__Var_36;
        MR_Word ml_backend__ml_optimize__Var_37;
        MR_Word ml_backend__ml_optimize__Var_38;
        MR_Word ml_backend__ml_optimize__Var_39;
        MR_Word ml_backend__ml_optimize__Var_40;
        MR_Word ml_backend__ml_optimize__Var_56;
        MR_Word ml_backend__ml_optimize__Var_12;
        MR_Word ml_backend__ml_optimize___ThisType_14;
        MR_Word ml_backend__ml_optimize__Var_49;
        MR_Word ml_backend__ml_optimize__Var_50;
        MR_Word ml_backend__ml_optimize__Var_51;
        MR_Word ml_backend__ml_optimize___VarDefn_18;
        MR_Word ml_backend__ml_optimize__Var_30;
        MR_Box ml_backend__ml_optimize__conv0_Var_30;

        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__AssignStmt_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33, (MR_Integer) 0)));
            ml_backend__ml_optimize__STATE_VARIABLE_Stmts_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__AssignStmt_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_9, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_9, (MR_Integer) 1)));
                ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_9, (MR_Integer) 2)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_36)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_36, (MR_Integer) 0)));
                    ml_backend__ml_optimize__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_36, (MR_Integer) 1)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__LHS_10)) == (MR_mktag((MR_Integer) 3)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__ThisVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 0)));
                        ml_backend__ml_optimize___ThisType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 1)));
                        ml_backend__ml_optimize__Qualifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 0)));
                        ml_backend__ml_optimize__QualKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 1)));
                        ml_backend__ml_optimize__VarName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 2)));
                        {
                          ml_backend__ml_optimize__Var_37 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__ThisVar_13);
                        }
                        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_37 == (MR_Integer) 0);
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 0)));
                            ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 1)));
                            ml_backend__ml_optimize__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 2)));
                            ml_backend__ml_optimize__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 3)));
                            {
                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__Qualifier_15, ml_backend__ml_optimize__Var_56);
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__TypeCtorInfo_55_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
                                {
                                  ml_backend__ml_optimize__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[2]));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 3) = ((MR_Box) (ml_backend__ml_optimize__VarName_17));
                                }
                                {
                                  ml_backend__ml_optimize__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[3]));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_38, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_40));
                                }
                                {
                                  mercury__list__drop_while_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_55_55, ml_backend__ml_optimize__Var_38, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31, &ml_backend__ml_optimize__Var_39);
                                }
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_39)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize___VarDefn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_39, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__FollowingDefns_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_39, (MR_Integer) 1)));
                                    {
                                      ml_backend__ml_optimize__Filter_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_7[0]));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 3) = ((MR_Box) (ml_backend__ml_optimize__RHS_11));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 4) = ((MR_Box) (ml_backend__ml_optimize__ThisVar_13));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 5) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_20, 6) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
                                    }
                                    {
                                      ml_backend__ml_optimize__succeeded = mercury__list__find_first_match_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_55_55, ml_backend__ml_optimize__Filter_20, ml_backend__ml_optimize__FollowingDefns_19, &ml_backend__ml_optimize__conv0_Var_30);
                                    }
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        ml_backend__ml_optimize__Var_30 = ((MR_Word) ml_backend__ml_optimize__conv0_Var_30);
                                        ml_backend__ml_optimize__succeeded = MR_TRUE;
                                      }
                                    ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (ml_backend__ml_optimize__succeeded)
          {
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_45_45;

            {
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_17, ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31, &ml_backend__ml_optimize__STATE_VARIABLE_Defns_45_45);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Defns_0_31 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_45_45;
              MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Stmts_0_33 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_35_35;

              ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Stmts_0_33;
              ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Defns_0_31;
            }
            continue;
          }
        else
          {
            *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_34 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_33;
            *ml_backend__ml_optimize__STATE_VARIABLE_Defns_32 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_optimize__set_initializer_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_1,
  MR_Word ml_backend__ml_optimize__Rval_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_optimize.set_initializer\'/4", (MR_String) "var not found");
          return;
        }
      }
    else
      {
        MR_Word ml_backend__ml_optimize__Defn0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Defns0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Defn_14;
        MR_Word ml_backend__ml_optimize__Defns_15;
        MR_Word ml_backend__ml_optimize__Name_17;
        MR_Word ml_backend__ml_optimize__Context_18;
        MR_Word ml_backend__ml_optimize__Flags_19;
        MR_Word ml_backend__ml_optimize__Type_20;
        MR_Word ml_backend__ml_optimize__GCStmt_22;
        MR_Word ml_backend__ml_optimize__DataDefn0_16;
        MR_Word ml_backend__ml_optimize__Var_25;
        MR_Word ml_backend__ml_optimize___OldInitializer_21;

        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Defn0_12)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__DataDefn0_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_12), (MR_Integer) 0);
            ml_backend__ml_optimize__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_16, (MR_Integer) 0)));
            ml_backend__ml_optimize__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_16, (MR_Integer) 1)));
            ml_backend__ml_optimize__Flags_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_16, (MR_Integer) 2)));
            ml_backend__ml_optimize__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_16, (MR_Integer) 3)));
            ml_backend__ml_optimize___OldInitializer_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_16, (MR_Integer) 4)));
            ml_backend__ml_optimize__GCStmt_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_16, (MR_Integer) 5)));
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_17)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Name_17, (MR_Integer) 0)));
                {
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__Var_25);
                }
              }
          }
        if (ml_backend__ml_optimize__succeeded)
          {
            MR_Word ml_backend__ml_optimize__DataDefn_23;
            MR_Word ml_backend__ml_optimize__Var_24;

            {
              ml_backend__ml_optimize__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_24, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_2));
            }
            {
              ml_backend__ml_optimize__DataDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_23, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_17));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_23, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_18));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_23, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_19));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_23, 3) = ((MR_Box) (ml_backend__ml_optimize__Type_20));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_23, 4) = ((MR_Box) (ml_backend__ml_optimize__Var_24));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_23, 5) = ((MR_Box) (ml_backend__ml_optimize__GCStmt_22));
            }
            ml_backend__ml_optimize__Defn_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_optimize__DataDefn_23);
            ml_backend__ml_optimize__Defns_15 = ml_backend__ml_optimize__Defns0_13;
          }
        else
          {
            ml_backend__ml_optimize__Defn_14 = ml_backend__ml_optimize__Defn0_12;
            {
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__Rval_2, ml_backend__ml_optimize__Defns0_13, &ml_backend__ml_optimize__Defns_15);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defn_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Defns_15));
        }
      }
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

    {
      ml_backend__ml_optimize__conv0_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
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
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_9 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    MR_Word ml_backend__ml_optimize__Var_7;

    {
      ml_backend__ml_optimize__Var_7 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_9, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_6[1], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4);
    }
    {
      *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_9, ml_backend__ml_optimize__Var_7);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_optimize__wrapper_arg_2;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_HeadVar__2_2;

    {
      ml_backend__ml_optimize__conv0_HeadVar__2_2 = ml_backend__mlds__wrap_data_defn_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_HeadVar__2_2));
    return ml_backend__ml_optimize__wrapper_arg_2;
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
    MR_Word ml_backend__ml_optimize__CallArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 8)));
    MR_Word ml_backend__ml_optimize__Globals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OptTailCalls_16;
    MR_Word ml_backend__ml_optimize___Signature_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___MaybeObject_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize___Results_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize___IsTailCall_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize___Markers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__ModuleName_17;
    MR_Word ml_backend__ml_optimize__FunctionName_18;
    MR_Word ml_backend__ml_optimize__CalleeRval_84;
    MR_Word ml_backend__ml_optimize__MaybeObject_85;
    MR_Word ml_backend__ml_optimize__CallKind_88;
    MR_Word ml_backend__ml_optimize__CalleeCodeAddr_92;
    MR_Word ml_backend__ml_optimize__Var_93;
    MR_Word ml_backend__ml_optimize__Var_63;
    MR_Word ml_backend__ml_optimize__Var_65;
    MR_Word ml_backend__ml_optimize___Signature_83;
    MR_Word ml_backend__ml_optimize___CallArgs_86;
    MR_Word ml_backend__ml_optimize___Results_87;
    MR_Word ml_backend__ml_optimize___Markers_89;
    MR_Word ml_backend__ml_optimize___Context_90;

    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_15, (MR_Integer) 463, &ml_backend__ml_optimize__OptTailCalls_16);
    }
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__OptTailCalls_16 == (MR_Integer) 1);
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__FunctionName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize___Signature_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
            ml_backend__ml_optimize__CalleeRval_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
            ml_backend__ml_optimize__MaybeObject_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
            ml_backend__ml_optimize___CallArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
            ml_backend__ml_optimize___Results_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
            ml_backend__ml_optimize__CallKind_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
            ml_backend__ml_optimize___Markers_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
            ml_backend__ml_optimize___Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 8)));
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__MaybeObject_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_optimize__succeeded)
              {
                switch (ml_backend__ml_optimize__CallKind_88) {
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
                    ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__CalleeRval_84)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CalleeRval_84, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CalleeRval_84, (MR_Integer) 1)));
                        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_93, (MR_Integer) 0)))) == (MR_Integer) 13)));
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__CalleeCodeAddr_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_93, (MR_Integer) 1)));
                            {
                              ml_backend__ml_optimize__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0(ml_backend__ml_optimize__CalleeCodeAddr_92, ml_backend__ml_optimize__ModuleName_17, ml_backend__ml_optimize__FunctionName_18);
                            }
                          }
                      }
                  }
              }
          }
      }
    if (ml_backend__ml_optimize__succeeded)
      {
        MR_Word ml_backend__ml_optimize__CommentStmt_19;
        MR_Word ml_backend__ml_optimize__GotoStmt_20;
        MR_Word ml_backend__ml_optimize__FuncArgs_21;
        MR_Word ml_backend__ml_optimize__AssignStmts_23;
        MR_Word ml_backend__ml_optimize__AssignDefns_24;
        MR_Word ml_backend__ml_optimize__AssignVarsStmt_25;
        MR_Word ml_backend__ml_optimize__CallReplaceStmts_26;
        MR_Word ml_backend__ml_optimize__Var_44;
        MR_Word ml_backend__ml_optimize__Var_45;
        MR_Word ml_backend__ml_optimize__Var_46;
        MR_Word ml_backend__ml_optimize__Var_48;
        MR_Word ml_backend__ml_optimize__Var_49;
        MR_Word ml_backend__ml_optimize__SupportsBreakContinue_96;
        MR_Word ml_backend__ml_optimize__Var_69;
        MR_Word ml_backend__ml_optimize__Var_70;
        MR_Word ml_backend__ml_optimize__Var_71;
        MR_Word ml_backend__ml_optimize___RetTypes_22;

        {
          ml_backend__ml_optimize__CommentStmt_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_4[0])));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CommentStmt_19, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_14));
        }
        {
          ml_backend__ml_optimize__SupportsBreakContinue_96 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_15);
        }
        switch (ml_backend__ml_optimize__SupportsBreakContinue_96) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_optimize__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_4[1]);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_optimize__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        {
          ml_backend__ml_optimize__GotoStmt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__GotoStmt_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__GotoStmt_20, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_44));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__GotoStmt_20, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_14));
        }
        ml_backend__ml_optimize__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_45, (MR_Integer) 0)));
        ml_backend__ml_optimize___RetTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_45, (MR_Integer) 1)));
        {
          ml_backend__ml_optimize__generate_assign_args_6_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Context_14, ml_backend__ml_optimize__FuncArgs_21, ml_backend__ml_optimize__CallArgs_10, &ml_backend__ml_optimize__AssignStmts_23, &ml_backend__ml_optimize__AssignDefns_24);
        }
        {
          ml_backend__ml_optimize__Var_46 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_6[0], ml_backend__ml_optimize__AssignDefns_24);
        }
        {
          ml_backend__ml_optimize__AssignVarsStmt_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 1) = ((MR_Box) (ml_backend__ml_optimize__AssignStmts_23));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStmt_25, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_14));
        }
        {
          ml_backend__ml_optimize__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_49, 0) = ((MR_Box) (ml_backend__ml_optimize__GotoStmt_20));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignVarsStmt_25));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_49));
        }
        {
          ml_backend__ml_optimize__CallReplaceStmts_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStmts_26, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_19));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStmts_26, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__CallReplaceStmts_26));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_14));
        }
      }
    else
      {
        MR_Word ml_backend__ml_optimize__AtomicStmt_38;
        MR_Word ml_backend__ml_optimize__ModName_27;
        MR_Word ml_backend__ml_optimize__ProcLabel_28;
        MR_Word ml_backend__ml_optimize__PredLabel_30;
        MR_String ml_backend__ml_optimize__PredName_33;
        MR_Word ml_backend__ml_optimize__PrivateBuiltin_40;
        MR_Word ml_backend__ml_optimize__Var_52;
        MR_Word ml_backend__ml_optimize__Var_53;
        MR_Word ml_backend__ml_optimize__Var_54;
        MR_Word ml_backend__ml_optimize__Var_55;
        MR_Word ml_backend__ml_optimize__Var_56;
        MR_Word ml_backend__ml_optimize__Var_76;
        MR_Word ml_backend__ml_optimize__Var_77;
        MR_Word ml_backend__ml_optimize__Var_78;
        MR_Word ml_backend__ml_optimize___FuncSignature_29;
        MR_Integer ml_backend__ml_optimize___ProcId_31;
        MR_Word ml_backend__ml_optimize___DefnModName_32;
        MR_Integer ml_backend__ml_optimize___Arity_34;
        MR_Word ml_backend__ml_optimize___CodeModel_35;
        MR_Word ml_backend__ml_optimize___NonOutputFunc_36;

        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__FuncRval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_52, (MR_Integer) 0)))) == (MR_Integer) 13)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_52, (MR_Integer) 1)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_53)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_53, (MR_Integer) 0)));
                    ml_backend__ml_optimize___FuncSignature_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_53, (MR_Integer) 1)));
                    ml_backend__ml_optimize__ModName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, (MR_Integer) 0)));
                    ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, (MR_Integer) 1)));
                    ml_backend__ml_optimize__ProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_54, (MR_Integer) 2)));
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_55 == (MR_Integer) 0);
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__PredLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_28, (MR_Integer) 0)));
                        ml_backend__ml_optimize___ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_28, (MR_Integer) 1)));
                        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__PredLabel_30)) == (MR_mktag((MR_Integer) 0)));
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 0)));
                            ml_backend__ml_optimize___DefnModName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 1)));
                            ml_backend__ml_optimize__PredName_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 2)));
                            ml_backend__ml_optimize___Arity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 3)));
                            ml_backend__ml_optimize___CodeModel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 4)));
                            ml_backend__ml_optimize___NonOutputFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 5)));
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_56 == (MR_Integer) 0);
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__CallArgs_10)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 1)));
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        if ((strcmp(ml_backend__ml_optimize__PredName_33, (MR_String) "mark_hp") == 0))
                                          {
                                            MR_Word ml_backend__ml_optimize__Lval_37;

                                            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_78, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                            if (ml_backend__ml_optimize__succeeded)
                                              {
                                                ml_backend__ml_optimize__Lval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_78, (MR_Integer) 1)));
                                                {
                                                  ml_backend__ml_optimize__AtomicStmt_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_37));
                                                }
                                                ml_backend__ml_optimize__succeeded = MR_TRUE;
                                              }
                                          }
                                        else
                                        if ((strcmp(ml_backend__ml_optimize__PredName_33, (MR_String) "restore_hp") == 0))
                                          {
                                            {
                                              ml_backend__ml_optimize__AtomicStmt_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_78));
                                            }
                                            ml_backend__ml_optimize__succeeded = MR_TRUE;
                                          }
                                        else
                                          ml_backend__ml_optimize__succeeded = MR_FALSE;
                                        if (ml_backend__ml_optimize__succeeded)
                                          {
                                            {
                                              ml_backend__ml_optimize__PrivateBuiltin_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                                            }
                                            {
                                              ml_backend__ml_optimize__Var_76 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__PrivateBuiltin_40);
                                            }
                                            {
                                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ModName_27, ml_backend__ml_optimize__Var_76);
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
        if (ml_backend__ml_optimize__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_38));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_14));
          }
        else
          *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__generate_assign_args_6_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_1,
  MR_Word ml_backend__ml_optimize__Context_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5,
  MR_Word * ml_backend__ml_optimize__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ml_backend__ml_optimize__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_optimize__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_optimize__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/6", (MR_String) "length mismatch");
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
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/6", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word ml_backend__ml_optimize__ArgRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__4_4, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__ArgRvals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__VarName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_67, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_67, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__QualVarName_33;
                MR_Word ml_backend__ml_optimize___ArgGCStmt_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_67, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
                MR_Word ml_backend__ml_optimize__TypeInfo_68_68;
                MR_Word ml_backend__ml_optimize__Var_47;
                MR_Word ml_backend__ml_optimize__Var_65;
                MR_Word ml_backend__ml_optimize___VarType_34;

                {
                  ml_backend__ml_optimize__QualVarName_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_33, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_32));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_33, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_33, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_29));
                }
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__ArgRval_25)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__ArgRval_25, (MR_Integer) 0)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_47)) == (MR_mktag((MR_Integer) 3)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_47, (MR_Integer) 0)));
                        ml_backend__ml_optimize___VarType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_47, (MR_Integer) 1)));
                        ml_backend__ml_optimize__TypeInfo_68_68 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
                        {
                          ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_68_68, ((MR_Box) (ml_backend__ml_optimize__QualVarName_33)), ((MR_Box) (ml_backend__ml_optimize__Var_65)));
                        }
                      }
                  }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__3_3 = ml_backend__ml_optimize__Var_66;
                      MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__4_4 = ml_backend__ml_optimize__ArgRvals_26;

                      ml_backend__ml_optimize__HeadVar__4_4 = ml_backend__ml_optimize__next_value_of_HeadVar__4_4;
                      ml_backend__ml_optimize__HeadVar__3_3 = ml_backend__ml_optimize__next_value_of_HeadVar__3_3;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ml_backend__ml_optimize__NextValueName_37;
                    MR_Word ml_backend__ml_optimize__QualNextValueName_38;
                    MR_Word ml_backend__ml_optimize__TempDefn_41;
                    MR_Word ml_backend__ml_optimize__NextValueInitStmt_42;
                    MR_Word ml_backend__ml_optimize__AssignStmt_43;
                    MR_Word ml_backend__ml_optimize__Stmts0_44;
                    MR_Word ml_backend__ml_optimize__TempDefns0_45;
                    MR_Word ml_backend__ml_optimize__Var_50;
                    MR_Word ml_backend__ml_optimize__Var_51;
                    MR_Word ml_backend__ml_optimize__Var_52;
                    MR_Word ml_backend__ml_optimize__Var_53;
                    MR_Word ml_backend__ml_optimize__Var_54;
                    MR_Word ml_backend__ml_optimize__Var_55;
                    MR_Word ml_backend__ml_optimize__Var_57;
                    MR_Word ml_backend__ml_optimize__Var_58;
                    MR_String ml_backend__ml_optimize__VarNameStr_35;
                    MR_Integer ml_backend__ml_optimize__VarNum_36;

                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__VarName_29)) == (MR_mktag((MR_Integer) 0)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__VarNameStr_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_29, (MR_Integer) 0)));
                        ml_backend__ml_optimize__VarNum_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_29, (MR_Integer) 1)));
                        {
                          ml_backend__ml_optimize__NextValueName_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_37, 1) = ((MR_Box) (ml_backend__ml_optimize__VarNameStr_35));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_37, 2) = ((MR_Box) (ml_backend__ml_optimize__VarNum_36));
                        }
                      }
                    else
                      {
                        MR_Word ml_backend__ml_optimize__Var_48;
                        MR_String ml_backend__ml_optimize__VarNameStr_60;

                        {
                          ml_backend__ml_optimize__VarNameStr_60 = ml_backend__mlds__ml_var_name_to_string_1_f_0(ml_backend__ml_optimize__VarName_29);
                        }
                        {
                          ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (ml_backend__ml_optimize__VarNameStr_60));
                        }
                        {
                          ml_backend__ml_optimize__NextValueName_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_37, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
                        }
                      }
                    {
                      ml_backend__ml_optimize__QualNextValueName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_38, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_32));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_38, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_38, 2) = ((MR_Box) (ml_backend__ml_optimize__NextValueName_37));
                    }
                    {
                      ml_backend__ml_optimize__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_50, 0) = ((MR_Box) (ml_backend__ml_optimize__NextValueName_37));
                    }
                    {
                      ml_backend__ml_optimize__TempDefn_41 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_optimize__Var_50, ml_backend__ml_optimize__Type_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_optimize__Context_2);
                    }
                    {
                      ml_backend__ml_optimize__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_52, 0) = ((MR_Box) (ml_backend__ml_optimize__QualNextValueName_38));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_52, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_30));
                    }
                    {
                      ml_backend__ml_optimize__Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_51, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_52));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_51, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_25));
                    }
                    {
                      ml_backend__ml_optimize__NextValueInitStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueInitStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueInitStmt_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueInitStmt_42, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_2));
                    }
                    {
                      ml_backend__ml_optimize__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_33));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_30));
                    }
                    {
                      ml_backend__ml_optimize__Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_55, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_52));
                    }
                    {
                      ml_backend__ml_optimize__Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_53, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_54));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_53, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_55));
                    }
                    {
                      ml_backend__ml_optimize__AssignStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_43, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_53));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AssignStmt_43, 2) = ((MR_Box) (ml_backend__ml_optimize__Context_2));
                    }
                    {
                      ml_backend__ml_optimize__generate_assign_args_6_p_0(ml_backend__ml_optimize__OptInfo_1, ml_backend__ml_optimize__Context_2, ml_backend__ml_optimize__Var_66, ml_backend__ml_optimize__ArgRvals_26, &ml_backend__ml_optimize__Stmts0_44, &ml_backend__ml_optimize__TempDefns0_45);
                    }
                    {
                      ml_backend__ml_optimize__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_57, 0) = ((MR_Box) (ml_backend__ml_optimize__NextValueInitStmt_42));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_57, 1) = ((MR_Box) (ml_backend__ml_optimize__Stmts0_44));
                    }
                    {
                      ml_backend__ml_optimize__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_58, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignStmt_43));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      *ml_backend__ml_optimize__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_optimize__Var_57, ml_backend__ml_optimize__Var_58);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_optimize__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__TempDefn_41));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TempDefns0_45));
                    }
                  }
              }
          }
      }
      break;
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

    {
      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Stmt_6);
    }
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
    MR_bool ml_backend__ml_optimize__succeeded;
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
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_19_19 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    {
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_19_19, ml_backend__ml_optimize__TypeCtorInfo_19_19, ml_backend__ml_optimize__Var_10, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_8, &ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11);
    }
    ml_backend__ml_optimize__Globals_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_6, (MR_Integer) 470, &ml_backend__ml_optimize__OptPeep_7);
    }
    switch (ml_backend__ml_optimize__OptPeep_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_9 = ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11;
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Stmts_11_11, ml_backend__ml_optimize__STATE_VARIABLE_Stmts_9);
        }
        break;
    }
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
                MR_Word ml_backend__ml_optimize__TypeCtorInfo_37_48;
                MR_Word ml_backend__ml_optimize__TestRval_20;
                MR_Word ml_backend__ml_optimize__StmtThen0_21;
                MR_Word ml_backend__ml_optimize__MaybeStmtElse0_22;
                MR_Word ml_backend__ml_optimize__Context0_23;
                MR_Word ml_backend__ml_optimize__StmtThen1_24;
                MR_Word ml_backend__ml_optimize__MaybeStmtElse1_25;
                MR_Word ml_backend__ml_optimize__TestRvalComponents_27;
                MR_Word ml_backend__ml_optimize__ContextThen_29;
                MR_Word ml_backend__ml_optimize__Then_30;
                MR_Word ml_backend__ml_optimize__MaybeElse_31;
                MR_Word ml_backend__ml_optimize__Stmt_35;
                MR_Word ml_backend__ml_optimize__Var_36;
                MR_Word ml_backend__ml_optimize__Var_37;
                MR_Word ml_backend__ml_optimize__Var_39;
                MR_Word ml_backend__ml_optimize__Var_40;
                MR_Word ml_backend__ml_optimize__Var_41;
                MR_Word ml_backend__ml_optimize__Var_42;
                MR_Word ml_backend__ml_optimize__Var_49;
                MR_Word ml_backend__ml_optimize__Var_50;
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
                        ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 0)));
                        ml_backend__ml_optimize__StmtThen1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 1)));
                        ml_backend__ml_optimize__MaybeStmtElse1_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 2)));
                        ml_backend__ml_optimize___Context1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 3)));
                        {
                          ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__TestRval_20, ml_backend__ml_optimize__Var_49);
                        }
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__TypeCtorInfo_37_48 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
                            {
                              ml_backend__ml_optimize__Var_36 = mercury__set__init_0_f_0(ml_backend__ml_optimize__TypeCtorInfo_37_48);
                            }
                            {
                              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__TestRval_20, ml_backend__ml_optimize__Var_36, &ml_backend__ml_optimize__TestRvalComponents_27);
                            }
                            ml_backend__ml_optimize__Var_37 = (MR_Integer) 0;
                            {
                              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_27, ml_backend__ml_optimize__StmtThen0_21, &ml_backend__ml_optimize__Var_50);
                            }
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_37 == ml_backend__ml_optimize__Var_50);
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                if ((ml_backend__ml_optimize__MaybeStmtElse0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word ml_backend__ml_optimize__StmtElse0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_22, (MR_Integer) 0)));
                                    MR_Word ml_backend__ml_optimize__Var_51;

                                    {
                                      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_27, ml_backend__ml_optimize__StmtElse0_28, &ml_backend__ml_optimize__Var_51);
                                    }
                                    ml_backend__ml_optimize__succeeded = ((MR_Integer) 0 == ml_backend__ml_optimize__Var_51);
                                  }
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    {
                                      ml_backend__ml_optimize__ContextThen_29 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(ml_backend__ml_optimize__StmtThen0_21);
                                    }
                                    ml_backend__ml_optimize__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    ml_backend__ml_optimize__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      ml_backend__ml_optimize__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_41, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen1_24));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_42));
                                    }
                                    {
                                      ml_backend__ml_optimize__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_40, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen0_21));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_40, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_41));
                                    }
                                    {
                                      ml_backend__ml_optimize__Then_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_30, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_39));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_30, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_40));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_30, 2) = ((MR_Box) (ml_backend__ml_optimize__ContextThen_29));
                                    }
                                    if ((ml_backend__ml_optimize__MaybeStmtElse0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      if ((ml_backend__ml_optimize__MaybeStmtElse1_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                        ml_backend__ml_optimize__MaybeElse_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      else
                                        ml_backend__ml_optimize__MaybeElse_31 = ml_backend__ml_optimize__MaybeStmtElse1_25;
                                    else
                                      {
                                        MR_Word ml_backend__ml_optimize__Else0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_22, (MR_Integer) 0)));

                                        if ((ml_backend__ml_optimize__MaybeStmtElse1_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                          ml_backend__ml_optimize__MaybeElse_31 = ml_backend__ml_optimize__MaybeStmtElse0_22;
                                        else
                                          {
                                            MR_Word ml_backend__ml_optimize__Else1_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse1_25, (MR_Integer) 0)));
                                            MR_Word ml_backend__ml_optimize__Var_43;
                                            MR_Word ml_backend__ml_optimize__Var_45;
                                            MR_Word ml_backend__ml_optimize__Var_46;

                                            {
                                              ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (ml_backend__ml_optimize__Else1_34));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            {
                                              ml_backend__ml_optimize__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_45, 0) = ((MR_Box) (ml_backend__ml_optimize__Else0_33));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_45, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                                            }
                                            {
                                              ml_backend__ml_optimize__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 2) = ((MR_Box) (ml_backend__ml_optimize__Context0_23));
                                            }
                                            {
                                              ml_backend__ml_optimize__MaybeElse_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_31, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_43));
                                            }
                                          }
                                      }
                                    {
                                      ml_backend__ml_optimize__Stmt_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_35, 0) = ((MR_Box) (ml_backend__ml_optimize__TestRval_20));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_35, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_30));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_35, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_31));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_35, 3) = ((MR_Box) (ml_backend__ml_optimize__Context0_23));
                                    }
                                    {
                                      ml_backend__ml_optimize__ReplStmts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ReplStmts_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_35));
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

                    {
                      ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__Var_14, &ml_backend__ml_optimize__StmtsTail_11);
                    }
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
      {
        MR_bool ml_backend__ml_optimize__succeeded;

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

            {
              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Stmt_11, &ml_backend__ml_optimize__HeadAffects_12);
            }
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
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_optimize__Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__HeadAffects_9;

            {
              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Head_6, &ml_backend__ml_optimize__HeadAffects_9);
            }
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
              MR_Word ml_backend__ml_optimize__SubStmts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__SubStmts_8, ml_backend__ml_optimize__Affects_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_optimize__SubStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Stmt_5 = ml_backend__ml_optimize__SubStmt_12;

                ml_backend__ml_optimize__Stmt_5 = ml_backend__ml_optimize__next_value_of_Stmt_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Stmts_18;
              MR_Word ml_backend__ml_optimize__Head_93;
              MR_Word ml_backend__ml_optimize__Tail_94;
              MR_Word ml_backend__ml_optimize__HeadAffects_96;
              MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));

              if ((ml_backend__ml_optimize__MaybeElse_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ml_backend__ml_optimize__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_optimize__Else_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_16, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_optimize__Var_75;

                  {
                    ml_backend__ml_optimize__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_75, 0) = ((MR_Box) (ml_backend__ml_optimize__Else_19));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_75));
                  }
                }
              ml_backend__ml_optimize__Head_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_18, (MR_Integer) 0)));
              ml_backend__ml_optimize__Tail_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmts_18, (MR_Integer) 1)));
              {
                ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Head_93, &ml_backend__ml_optimize__HeadAffects_96);
              }
              switch (ml_backend__ml_optimize__HeadAffects_96) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Tail_94, ml_backend__ml_optimize__Affects_6);
                  }
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
                  MR_Word ml_backend__ml_optimize__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_optimize__Default_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_optimize__Affects0_26;
                  MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_5, (MR_Integer) 6)));

                  {
                    ml_backend__ml_optimize__cases_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Cases_23, &ml_backend__ml_optimize__Affects0_26);
                  }
                  switch (ml_backend__ml_optimize__Affects0_26) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_tag((MR_Word) ml_backend__ml_optimize__Default_24)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ml_backend__ml_optimize__DefaultStmt_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Default_24, (MR_Integer) 0)));

                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_optimize__next_value_of_Stmt_5 = ml_backend__ml_optimize__DefaultStmt_27;

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

                        {
                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_57)));
                        }
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

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_81)));
                            }
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

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_89)));
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                            else
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word ml_backend__ml_optimize__Lval_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_51, (MR_Integer) 1)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_85)));
                            }
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
      {
        MR_bool ml_backend__ml_optimize__succeeded;

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

              {
                mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_6)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19, &ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27);
              }
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

                      ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                      ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_optimize__Rval_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_6, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_6, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_48;
                      MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;

                      ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                      ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;
                  break;
                case (MR_Integer) 3:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_27_27;
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

                  {
                    ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__SubRvalA_29, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19, &ml_backend__ml_optimize__STATE_VARIABLE_Components_23_23);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__SubRvalB_12;
                    MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_23_23;

                    ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                    ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
                  MR_Word ml_backend__ml_optimize__Lval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

                  {
                    mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_30)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19, &ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21);
                  }
                  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_30)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_optimize__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_30, (MR_Integer) 4)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_54;
                          MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;

                          ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                          ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_optimize__Rval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_30, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_30, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_64;
                          MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;

                          ml_backend__ml_optimize__STATE_VARIABLE_Components_0_19 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_19;
                          ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
                      break;
                    case (MR_Integer) 3:
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_20 = ml_backend__ml_optimize__STATE_VARIABLE_Components_21_21;
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
      }
      break;
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
    MR_Word ml_backend__ml_optimize__conv0_Defn_8;

    {
      ml_backend__ml_optimize__optimize_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Defn_8);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Defn_8));
  }
}

void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0(
  MR_Word ml_backend__ml_optimize__Globals_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_50;
    MR_Word ml_backend__ml_optimize__Defns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize__ModuleName_7;
    MR_Word ml_backend__ml_optimize__Defns_8;
    MR_Word ml_backend__ml_optimize__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_46;
    MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 8)));
    MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 9)));
    MR_Word ml_backend__ml_optimize__Var_31;
    MR_Word ml_backend__ml_optimize__Var_32;
    MR_Word ml_backend__ml_optimize__Var_33;
    MR_Word ml_backend__ml_optimize__Var_34;
    MR_Word ml_backend__ml_optimize__Var_35;
    MR_Word ml_backend__ml_optimize__Var_36;
    MR_Word ml_backend__ml_optimize__Var_38;
    MR_Word ml_backend__ml_optimize__Var_39;
    MR_Word ml_backend__ml_optimize__Var_40;
    MR_Word ml_backend__ml_optimize__Var_37;

    {
      ml_backend__ml_optimize__ModuleName_7 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__Var_13);
    }
    {
      ml_backend__ml_optimize__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 1) = ((MR_Box) (ml_backend__ml_optimize__mlds_optimize_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_14_50 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_50, ml_backend__ml_optimize__TypeCtorInfo_14_50, ml_backend__ml_optimize__Var_46, ml_backend__ml_optimize__Defns0_6, &ml_backend__ml_optimize__Defns_8);
    }
    ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    ml_backend__ml_optimize__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    ml_backend__ml_optimize__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    ml_backend__ml_optimize__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    ml_backend__ml_optimize__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    ml_backend__ml_optimize__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    ml_backend__ml_optimize__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    ml_backend__ml_optimize__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 8)));
    ml_backend__ml_optimize__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Var_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_optimize__Defns_8));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Var_38));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_optimize__Var_39));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_optimize__Var_40));
    }
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
