/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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
#include "check_hlds.unify_proc.mih"
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



struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7;
  jmp_buf ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Var_26;
};

struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_15;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__FunctionName_16;
  jmp_buf ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStatement_18;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeRval_68;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__MaybeObject_69;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallKind_72;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeCodeAddr_75;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Var_76;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[5];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[5];

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
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__943__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_11,
  MR_Word ml_backend__ml_optimize__Qualifier_15,
  MR_Word ml_backend__ml_optimize__QualKind_16,
  MR_Word ml_backend__ml_optimize__ThisData_18,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__941__1_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_42,
  MR_Word ml_backend__ml_optimize__HeadVar__2_55);

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
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
  MR_Word ml_backend__ml_optimize__Op0_5,
  MR_Word * ml_backend__ml_optimize__Op_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
  MR_Word ml_backend__ml_optimize__Component0_5,
  MR_Word * ml_backend__ml_optimize__Component_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_17,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
  MR_Word ml_backend__ml_optimize__Cond0_5,
  MR_Word * ml_backend__ml_optimize__Cond_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

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
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);

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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(
  MR_Word ml_backend__ml_optimize__Statement0_5,
  MR_Word * ml_backend__ml_optimize__Statement_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
  MR_Word ml_backend__ml_optimize__Lval0_5,
  MR_Word * ml_backend__ml_optimize__Lval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);

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
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__Rval0_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);

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
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__Defn0_5,
  MR_Word * ml_backend__ml_optimize__Defn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);

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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_21,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_22,
  MR_Integer * ml_backend__ml_optimize__Count_13,
  MR_Word * ml_backend__ml_optimize__Invalidated_14);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg);

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__Statements_9);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
  MR_Word ml_backend__ml_optimize__Rval_2);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
  MR_Word ml_backend__ml_optimize__Rval_2);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_5);

static void MR_CALL 
ml_backend__ml_optimize__maybe_eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13);

static void MR_CALL 
ml_backend__ml_optimize__set_initializer_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_1,
  MR_Word ml_backend__ml_optimize__Rval_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4);

static MR_bool MR_CALL 
ml_backend__ml_optimize__var_defn_2_p_0(
  MR_Word ml_backend__ml_optimize__VarName_3,
  MR_Word ml_backend__ml_optimize__Defn_4);

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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_34);

static void MR_CALL 
ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_11,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_12,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_14);

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
  MR_Word ml_backend__ml_optimize__Statement_5,
  MR_Word * ml_backend__ml_optimize__Affects_6);

static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Rval_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_19);

static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word ml_backend__ml_optimize__Statement_3);

static MR_Box MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5);

static MR_bool MR_CALL 
ml_backend__ml_optimize__stmt_is_self_recursive_call_replaceable_with_jump_to_top_3_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_4,
  MR_Word ml_backend__ml_optimize__FuncName_5,
  MR_Word ml_backend__ml_optimize__Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Body0_5,
  MR_Word * ml_backend__ml_optimize__Body_6);

static void MR_CALL 
ml_backend__ml_optimize__generate_assign_args_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5);

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
ml_backend__ml_optimize__optimize_in_default_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static MR_Box MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statement_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statement_3_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statement_11);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_9);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_body_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_body_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Body_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Body_9);

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
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);


static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[9][7];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[2][6];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[4][5];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[17][3];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_6[3][1];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_7[1][8];




static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "loop_top"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
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

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[7])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[8])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_6[3][1] = {
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

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_qual_kind_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[5] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[5] = {
  (MR_String) "oi_globals",
  (MR_String) "oi_module_name",
  (MR_String) "oi_func_name",
  (MR_String) "oi_func_params",
  (MR_String) "oi_context"
};

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0 = {
  (MR_String) "opt_info",
  (MR_Integer) 5,
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
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__943__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_11,
  MR_Word ml_backend__ml_optimize__Qualifier_15,
  MR_Word ml_backend__ml_optimize__QualKind_16,
  MR_Word ml_backend__ml_optimize__ThisData_18,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_43)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__LambdaHeadVar__1_43)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OtherVarName_23;
    MR_Word ml_backend__ml_optimize__OtherInitializer_27;
    MR_Word ml_backend__ml_optimize__Var_44;
    MR_Word ml_backend__ml_optimize__Var_24;
    MR_Word ml_backend__ml_optimize__Var_25;
    MR_Word ml_backend__ml_optimize___Type_26;
    MR_Word ml_backend__ml_optimize___GC_28;

    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_44 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__LambdaHeadVar__1_43), (MR_Integer) 0);
        ml_backend__ml_optimize__OtherVarName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_44, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_44, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_44, (MR_Integer) 2)));
        ml_backend__ml_optimize___Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_44, (MR_Integer) 3)));
        ml_backend__ml_optimize__OtherInitializer_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_44, (MR_Integer) 4)));
        ml_backend__ml_optimize___GC_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_44, (MR_Integer) 5)));
        {
          MR_Word ml_backend__ml_optimize__QualOtherVar_29;
          MR_Word ml_backend__ml_optimize__Var_46;

          {
            ml_backend__ml_optimize__QualOtherVar_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 2) = ((MR_Box) (ml_backend__ml_optimize__OtherVarName_23));
          }
          {
            ml_backend__ml_optimize__Var_46 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__QualOtherVar_29);
          }
          ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_46 == (MR_Integer) 1);
        }
        if (!(ml_backend__ml_optimize__succeeded))
          {
            MR_Word ml_backend__ml_optimize__Var_45;

            {
              ml_backend__ml_optimize__Var_45 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_optimize__OtherInitializer_27, ml_backend__ml_optimize__ThisData_18);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_45 == (MR_Integer) 1);
          }
      }
    return ml_backend__ml_optimize__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__941__1_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_42,
  MR_Word ml_backend__ml_optimize__HeadVar__2_55)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    {
      ml_backend__ml_optimize__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_optimize__HeadVar__1_42, ((MR_Box) (ml_backend__ml_optimize__HeadVar__2_55)));
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
    MR_Integer ml_backend__ml_optimize__CastX_18 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;
    MR_Integer ml_backend__ml_optimize__CastY_19 = (MR_Integer) ml_backend__ml_optimize__HeadVar__3_3;

    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_18 == ml_backend__ml_optimize__CastY_19);
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
        MR_Word ml_backend__ml_optimize__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__Var_14;

        {
          libs__globals____Compare____globals_0_0(&ml_backend__ml_optimize__Var_14, ml_backend__ml_optimize__ArgX1_4, ml_backend__ml_optimize__ArgY1_5);
        }
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_14 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_14;
        else
          {
            MR_Word ml_backend__ml_optimize__Var_15;

            {
              ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_optimize__Var_15, ml_backend__ml_optimize__ArgX2_6, ml_backend__ml_optimize__ArgY2_7);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_15 == (MR_Integer) 0);
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
            if (ml_backend__ml_optimize__succeeded)
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_15;
            else
              {
                MR_Word ml_backend__ml_optimize__Var_16;

                {
                  ml_backend__mlds____Compare____mlds_function_name_0_0(&ml_backend__ml_optimize__Var_16, ml_backend__ml_optimize__ArgX3_8, ml_backend__ml_optimize__ArgY3_9);
                }
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_16 == (MR_Integer) 0);
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                if (ml_backend__ml_optimize__succeeded)
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_16;
                else
                  {
                    MR_Word ml_backend__ml_optimize__Var_17;

                    {
                      ml_backend__mlds____Compare____mlds_func_params_0_0(&ml_backend__ml_optimize__Var_17, ml_backend__ml_optimize__ArgX4_10, ml_backend__ml_optimize__ArgY4_11);
                    }
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_17 == (MR_Integer) 0);
                    ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                    if (ml_backend__ml_optimize__succeeded)
                      *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__Var_17;
                    else
                      {
                        ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__ArgX5_12, ml_backend__ml_optimize__ArgY5_13);
                      }
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
    MR_Integer ml_backend__ml_optimize__CastX_13 = (MR_Integer) ml_backend__ml_optimize__HeadVar__1_1;
    MR_Integer ml_backend__ml_optimize__CastY_14 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;

    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_13 == ml_backend__ml_optimize__CastY_14);
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
        MR_Word ml_backend__ml_optimize__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 4)));

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
                    {
                      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__ml_optimize__ArgX4_9, ml_backend__ml_optimize__ArgY4_10);
                    }
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_optimize__ArgX5_11, ml_backend__ml_optimize__ArgY5_12);
                      }
                  }
              }
          }
      }
    return ml_backend__ml_optimize__succeeded;
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
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_28;

    {
      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_28);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Rval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_28));
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
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_79, ml_backend__ml_optimize__TypeCtorInfo_18_79, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[15], ml_backend__ml_optimize__Args0_19, &ml_backend__ml_optimize__Args_24, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
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
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_64_64, ml_backend__ml_optimize__TypeCtorInfo_64_64, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[14], ml_backend__ml_optimize__Components0_28, &ml_backend__ml_optimize__Components_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
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
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_94, ml_backend__ml_optimize__TypeCtorInfo_18_94, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[16], ml_backend__ml_optimize__Lvals0_31, &ml_backend__ml_optimize__Lvals_33, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
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
          MR_Word ml_backend__ml_optimize__Statement0_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default0_5), (MR_Integer) 1);
          MR_Word ml_backend__ml_optimize__Statement_9;

          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_8, &ml_backend__ml_optimize__Statement_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);
          }
          *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_9);
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
    MR_Word ml_backend__ml_optimize__Statement0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__FirstCond_11;
    MR_Word ml_backend__ml_optimize__LaterConds_12;
    MR_Word ml_backend__ml_optimize__Statement_13;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18;

    {
      ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(ml_backend__ml_optimize__FirstCond0_8, &ml_backend__ml_optimize__FirstCond_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
    }
    ml_backend__ml_optimize__TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_24_24, ml_backend__ml_optimize__TypeCtorInfo_24_24, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[13], ml_backend__ml_optimize__LaterConds0_9, &ml_backend__ml_optimize__LaterConds_12, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    {
      ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_10, &ml_backend__ml_optimize__Statement_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__FirstCond_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterConds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_13));
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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__Defns0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Statements0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Defns_10;
          MR_Word ml_backend__ml_optimize__Statements_11;

          {
            ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(ml_backend__ml_optimize__Defns0_8, &ml_backend__ml_optimize__Defns_10, ml_backend__ml_optimize__Statements0_9, &ml_backend__ml_optimize__Statements_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Statement0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Rval_15;
          MR_Word ml_backend__ml_optimize__Statement_16;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_13, &ml_backend__ml_optimize__Rval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_14, &ml_backend__ml_optimize__Statement_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_73, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_15));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_16));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Cond0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Then0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Cond_20;
          MR_Word ml_backend__ml_optimize__Then_21;
          MR_Word ml_backend__ml_optimize__MaybeElse_22;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_71;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Cond0_17, &ml_backend__ml_optimize__Cond_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Then0_18, &ml_backend__ml_optimize__Then_21, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_71);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(ml_backend__ml_optimize__MaybeElse0_19, &ml_backend__ml_optimize__MaybeElse_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_71, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Cond_20));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_21));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_22));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_86_86;
              MR_Word ml_backend__ml_optimize__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Val0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Val_28;
              MR_Word ml_backend__ml_optimize__Cases_29;
              MR_Word ml_backend__ml_optimize__Default_30;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_66;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_68;
              MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_68_68;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Val0_24, &ml_backend__ml_optimize__Val_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_66);
              }
              ml_backend__ml_optimize__TypeCtorInfo_86_86 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_86_86, ml_backend__ml_optimize__TypeCtorInfo_86_86, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[12], ml_backend__ml_optimize__Cases0_26, &ml_backend__ml_optimize__Cases_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_66)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_68_68);
              }
              ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_68 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_68_68);
              {
                ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(ml_backend__ml_optimize__Default0_27, &ml_backend__ml_optimize__Default_30, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_68, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_23));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Val_28));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_25));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_29));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_30));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53;
            }
            break;
          case (MR_Integer) 2:
            {
              *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_optimize__Labels_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Rval0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rval_77;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_76, &ml_backend__ml_optimize__Rval_77, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_77));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Labels_33));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_optimize__Sig_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Func0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Obj0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__RetLvals0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__TailCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
              MR_Word ml_backend__ml_optimize__Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
              MR_Word ml_backend__ml_optimize__Func_41;
              MR_Word ml_backend__ml_optimize__Obj_42;
              MR_Word ml_backend__ml_optimize__Args_43;
              MR_Word ml_backend__ml_optimize__RetLvals_44;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_63_63;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Func0_35, &ml_backend__ml_optimize__Func_41, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61);
              }
              if ((ml_backend__ml_optimize__Obj0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ml_backend__ml_optimize__Obj_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61;
                }
              else
                {
                  MR_Word ml_backend__ml_optimize__Rval0_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Obj0_36, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_optimize__Rval_92;

                  {
                    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_91, &ml_backend__ml_optimize__Rval_92, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62);
                  }
                  {
                    ml_backend__ml_optimize__Obj_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Obj_42, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_92));
                  }
                }
              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Args0_37, &ml_backend__ml_optimize__Args_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_63_63);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(ml_backend__ml_optimize__RetLvals0_38, &ml_backend__ml_optimize__RetLvals_44, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_63_63, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Sig_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Func_41));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Obj_42));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Args_43));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__RetLvals_44));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__TailCall_39));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Markers_40));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_optimize__Rvals0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rvals_46;

              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Rvals0_45, &ml_backend__ml_optimize__Rvals_46, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rvals_46));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Handler0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Handler_50;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57_57;
              MR_Word ml_backend__ml_optimize__Statement0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Statement_79;
              MR_Word ml_backend__ml_optimize__Ref0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_81;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Ref0_80, &ml_backend__ml_optimize__Ref_81, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_78, &ml_backend__ml_optimize__Statement_79, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57_57);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Handler0_49, &ml_backend__ml_optimize__Handler_50, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57_57, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_81));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_79));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Handler_50));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_optimize__Ref0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_48;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Ref0_47, &ml_backend__ml_optimize__Ref_48, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_48));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_optimize__AtomicStmt0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__AtomicStmt_52;

              {
                ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(ml_backend__ml_optimize__AtomicStmt0_51, &ml_backend__ml_optimize__AtomicStmt_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_54);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_52));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0_1(
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
ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(
  MR_Word ml_backend__ml_optimize__Statement0_5,
  MR_Word * ml_backend__ml_optimize__Statement_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt_10;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__Defns0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Statements0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Defns_21;
          MR_Word ml_backend__ml_optimize__Statements_22;

          {
            ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(ml_backend__ml_optimize__Defns0_19, &ml_backend__ml_optimize__Defns_21, ml_backend__ml_optimize__Statements0_20, &ml_backend__ml_optimize__Statements_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
          }
          {
            ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Statement0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Rval_26;
          MR_Word ml_backend__ml_optimize__Statement_27;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_82;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_24, &ml_backend__ml_optimize__Rval_26, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_82);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_25, &ml_backend__ml_optimize__Statement_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_73_82, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
          }
          {
            ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_23));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_27));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Cond0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Then0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Cond_31;
          MR_Word ml_backend__ml_optimize__Then_32;
          MR_Word ml_backend__ml_optimize__MaybeElse_33;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_79;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_80;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Cond0_28, &ml_backend__ml_optimize__Cond_31, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_79);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Then0_29, &ml_backend__ml_optimize__Then_32, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_79, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_80);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(ml_backend__ml_optimize__MaybeElse0_30, &ml_backend__ml_optimize__MaybeElse_33, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_71_80, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
          }
          {
            ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Cond_31));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_32));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_33));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_86_95;
              MR_Word ml_backend__ml_optimize__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Val0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Range_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Val_39;
              MR_Word ml_backend__ml_optimize__Cases_40;
              MR_Word ml_backend__ml_optimize__Default_41;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_75;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_77;
              MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_68_77;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Val0_35, &ml_backend__ml_optimize__Val_39, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_75);
              }
              ml_backend__ml_optimize__TypeCtorInfo_86_95 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_86_95, ml_backend__ml_optimize__TypeCtorInfo_86_95, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[11], ml_backend__ml_optimize__Cases0_37, &ml_backend__ml_optimize__Cases_40, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_66_75)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_68_77);
              }
              ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_77 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_68_77);
              {
                ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(ml_backend__ml_optimize__Default0_38, &ml_backend__ml_optimize__Default_41, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_68_77, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_34));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Val_39));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_36));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_40));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_41));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_optimize__Stmt_10 = ml_backend__ml_optimize__Stmt0_8;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              ml_backend__ml_optimize__Stmt_10 = ml_backend__ml_optimize__Stmt0_8;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_optimize__Labels_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Rval0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rval_86;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_85, &ml_backend__ml_optimize__Rval_86, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_86));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Labels_44));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_optimize__Sig_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Func0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Obj0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Args0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__RetLvals0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__TailCall_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 6)));
              MR_Word ml_backend__ml_optimize__Markers_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 7)));
              MR_Word ml_backend__ml_optimize__Func_52;
              MR_Word ml_backend__ml_optimize__Obj_53;
              MR_Word ml_backend__ml_optimize__Args_54;
              MR_Word ml_backend__ml_optimize__RetLvals_55;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_70;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_71;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_63_72;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Func0_46, &ml_backend__ml_optimize__Func_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_70);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_maybe_rval_4_p_0(ml_backend__ml_optimize__Obj0_47, &ml_backend__ml_optimize__Obj_53, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_70, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_71);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Args0_48, &ml_backend__ml_optimize__Args_54, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_71, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_63_72);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(ml_backend__ml_optimize__RetLvals0_49, &ml_backend__ml_optimize__RetLvals_55, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_63_72, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Sig_45));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Func_52));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 3) = ((MR_Box) (ml_backend__ml_optimize__Obj_53));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 4) = ((MR_Box) (ml_backend__ml_optimize__Args_54));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 5) = ((MR_Box) (ml_backend__ml_optimize__RetLvals_55));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 6) = ((MR_Box) (ml_backend__ml_optimize__TailCall_50));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 7) = ((MR_Box) (ml_backend__ml_optimize__Markers_51));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_optimize__Rvals0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rvals_57;

              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Rvals0_56, &ml_backend__ml_optimize__Rvals_57, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Rvals_57));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Handler0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Handler_61;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_65;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57_66;
              MR_Word ml_backend__ml_optimize__Statement0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Statement_88;
              MR_Word ml_backend__ml_optimize__Ref0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_90;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Ref0_89, &ml_backend__ml_optimize__Ref_90, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_65);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_87, &ml_backend__ml_optimize__Statement_88, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_65, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57_66);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Handler0_60, &ml_backend__ml_optimize__Handler_61, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_57_66, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_90));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_88));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 3) = ((MR_Box) (ml_backend__ml_optimize__Handler_61));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_optimize__Ref0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_59;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Ref0_58, &ml_backend__ml_optimize__Ref_59, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_59));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_optimize__AtomicStmt0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__AtomicStmt_63;

              {
                ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(ml_backend__ml_optimize__AtomicStmt0_62, &ml_backend__ml_optimize__AtomicStmt_63, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
              }
              {
                ml_backend__ml_optimize__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_63));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Statement_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(
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
        MR_Word ml_backend__ml_optimize__Statement0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Statement_9;
        MR_Word ml_backend__ml_optimize__Stmt0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_8, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Stmt_21;

        {
          ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_19, &ml_backend__ml_optimize__Stmt_21, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
        }
        {
          ml_backend__ml_optimize__Statement_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_9, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_21));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_9, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_9));
        }
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
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[10], ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word ml_backend__ml_optimize__Rval0_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_5;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Lval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__VarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_optimize__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__TypeInfo_58_58;
          MR_Word ml_backend__ml_optimize__Var_57;
          MR_Word ml_backend__ml_optimize__Var_10;

          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_8)) == (MR_mktag((MR_Integer) 3)));
          if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 0)));
              ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 1)));
              ml_backend__ml_optimize__TypeInfo_58_58 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
              {
                ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_58_58, ((MR_Box) (ml_backend__ml_optimize__VarName_9)), ((MR_Box) (ml_backend__ml_optimize__Var_57)));
              }
            }
          if (ml_backend__ml_optimize__succeeded)
            {
              MR_Integer ml_backend__ml_optimize__Count0_11;
              MR_Integer ml_backend__ml_optimize__Var_36;
              MR_Word ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_49;

              *ml_backend__ml_optimize__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 1)));
              ml_backend__ml_optimize__Count0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 2)));
              ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 3)));
              ml_backend__ml_optimize__Var_36 = (ml_backend__ml_optimize__Count0_11 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_47));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*ml_backend__ml_optimize__Rval_6));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_36));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_49));
              }
            }
          else
            {
              MR_Word ml_backend__ml_optimize__Lval_12;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_12));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ml_backend__ml_optimize__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__ArgRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__ArgRval_15;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_14, &ml_backend__ml_optimize__ArgRval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Rval_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Tag_13));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_15));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 5:
            {
              *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_5;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_optimize__Op_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__ArgRval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__ArgRval_40;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_39, &ml_backend__ml_optimize__ArgRval_40, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Op_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_40));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__ArgRvalA0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__ArgRvalB0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__ArgRvalA_19;
              MR_Word ml_backend__ml_optimize__ArgRvalB_20;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_31_31;
              MR_Word ml_backend__ml_optimize__Op_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRvalA0_17, &ml_backend__ml_optimize__ArgRvalA_19, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_31_31);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRvalB0_18, &ml_backend__ml_optimize__ArgRvalB_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_31_31, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Op_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__ArgRvalA_19));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__ArgRvalB_20));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_optimize__Lval0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Lval_43;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_42, &ml_backend__ml_optimize__Lval_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_43));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_optimize__VectorCommon_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__RowRval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__RowRval_23;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__RowRval0_22, &ml_backend__ml_optimize__RowRval_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28;

    {
      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Rval_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28));
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
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[9], ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
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
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_32_32, ml_backend__ml_optimize__TypeCtorInfo_32_32, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[8], ml_backend__ml_optimize__Members0_13, &ml_backend__ml_optimize__Members_14, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_16);
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
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_26_26, ml_backend__ml_optimize__TypeCtorInfo_26_26, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[7], ml_backend__ml_optimize__Elements0_10, &ml_backend__ml_optimize__Elements_11, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_15)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_16);
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
          MR_Word ml_backend__ml_optimize__GCStatement_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_8, (MR_Integer) 5)));
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
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_16, 5) = ((MR_Box) (ml_backend__ml_optimize__GCStatement_14));
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
              MR_Word ml_backend__ml_optimize__Stmt0_39 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Body0_21), (MR_Integer) 1);
              MR_Word ml_backend__ml_optimize__Stmt_40;

              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Stmt0_39, &ml_backend__ml_optimize__Stmt_40, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
              ml_backend__ml_optimize__Body_25 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Stmt_40);
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
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv4_Statement_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_12;

    {
      ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Statement_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_12);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Statement_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_12));
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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13,
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
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_33, ml_backend__ml_optimize__TypeCtorInfo_18_33, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[5], ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10, ml_backend__ml_optimize__STATE_VARIABLE_Defns_11, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_17);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_17);
    ml_backend__ml_optimize__TypeCtorInfo_18_48 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_48, ml_backend__ml_optimize__TypeCtorInfo_18_48, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[6], ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12, ml_backend__ml_optimize__STATE_VARIABLE_Statements_13, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_15);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_15);
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
    MR_Word ml_backend__ml_optimize__conv4_Statement_6;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_12;

    {
      ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Statement_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_12);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Statement_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_12));
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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_21,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_22,
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
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_57, ml_backend__ml_optimize__TypeCtorInfo_18_57, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[3], ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_19, ml_backend__ml_optimize__STATE_VARIABLE_Defns_20, ((MR_Box) (ml_backend__ml_optimize__VarElimInfo0_17)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_41);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_41 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_17_41);
    ml_backend__ml_optimize__TypeCtorInfo_18_72 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_72, ml_backend__ml_optimize__TypeCtorInfo_18_72, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[4], ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_21, ml_backend__ml_optimize__STATE_VARIABLE_Statements_22, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_41)), &ml_backend__ml_optimize__conv5_VarElimInfo_18);
    }
    ml_backend__ml_optimize__VarElimInfo_18 = ((MR_Word) ml_backend__ml_optimize__conv5_VarElimInfo_18);
    ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 1)));
    *ml_backend__ml_optimize__Count_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 2)));
    *ml_backend__ml_optimize__Invalidated_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_18, (MR_Integer) 3)));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    {
      MR_Word ml_backend__ml_optimize__Var_19;
      MR_String ml_backend__ml_optimize__Var_18;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, (MR_Integer) 0)));
      ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, (MR_Integer) 1)));
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Var_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
        {
          ml_backend__ml_optimize__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Var_26, (MR_Integer) 1)));
          {
            ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_1(ml_backend__ml_optimize__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__commit_0) == 0)
      {
        {
          ml_backend__ml_util__statement_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_2, ml_backend__ml_optimize__env_ptr);
        }
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(
  MR_Word ml_backend__ml_optimize__VarName_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__Statements_9)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s ml_backend__ml_optimize__env;

    {
      MR_Word ml_backend__ml_optimize__Statements0_8;
      MR_Word ml_backend__ml_optimize__Rval1_10;
      MR_Word ml_backend__ml_optimize__Statement1_11;
      MR_Word ml_backend__ml_optimize__Stmt0_31;
      MR_Word ml_backend__ml_optimize__Context_32;
      MR_Word ml_backend__ml_optimize__Stmt_35;
      MR_Word ml_backend__ml_optimize__Rval0_34;
      MR_Word ml_backend__ml_optimize__TypeInfo_28_50;
      MR_Word ml_backend__ml_optimize__Var_43;
      MR_Word ml_backend__ml_optimize__Var_44;
      MR_Word ml_backend__ml_optimize__Var_49;
      MR_Word ml_backend__ml_optimize___Type_33;

      (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
        {
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
          ml_backend__ml_optimize__Statements0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
          ml_backend__ml_optimize__Stmt0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, (MR_Integer) 0)));
          ml_backend__ml_optimize__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, (MR_Integer) 1)));
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_31, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
            {
              ml_backend__ml_optimize__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_31, (MR_Integer) 1)));
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_43)) == (MR_mktag((MR_Integer) 2)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_43, (MR_Integer) 0)));
                  ml_backend__ml_optimize__Rval0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_43, (MR_Integer) 1)));
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_44)) == (MR_mktag((MR_Integer) 3)));
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                    {
                      ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_44, (MR_Integer) 0)));
                      ml_backend__ml_optimize___Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_44, (MR_Integer) 1)));
                      ml_backend__ml_optimize__TypeInfo_28_50 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
                      {
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_28_50, ((MR_Box) (ml_backend__ml_optimize__VarName_5)), ((MR_Box) (ml_backend__ml_optimize__Var_49)));
                      }
                    }
                }
            }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
            {
              ml_backend__ml_optimize__Rval1_10 = ml_backend__ml_optimize__Rval0_34;
              ml_backend__ml_optimize__Stmt_35 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[7];
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word ml_backend__ml_optimize__Defns0_36;
              MR_Word ml_backend__ml_optimize__SubStatements0_37;
              MR_Word ml_backend__ml_optimize__Mod_38;
              MR_Word ml_backend__ml_optimize__QualKind_39;
              MR_Word ml_backend__ml_optimize__UnqualVarName_40;
              MR_Word ml_backend__ml_optimize__Data_41;
              MR_Word ml_backend__ml_optimize__SubStatements_42;
              MR_Word ml_backend__ml_optimize__Var_47;
              MR_Word ml_backend__ml_optimize__Var_48;

              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_31)) == (MR_mktag((MR_Integer) 0)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__Defns0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_31, (MR_Integer) 0)));
                  ml_backend__ml_optimize__SubStatements0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_31, (MR_Integer) 1)));
                  ml_backend__ml_optimize__Mod_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 0)));
                  ml_backend__ml_optimize__QualKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 1)));
                  ml_backend__ml_optimize__UnqualVarName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 2)));
                  {
                    ml_backend__ml_optimize__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_47, 1) = ((MR_Box) (ml_backend__ml_optimize__UnqualVarName_40));
                  }
                  {
                    ml_backend__ml_optimize__Data_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_41, 0) = ((MR_Box) (ml_backend__ml_optimize__Mod_38));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_41, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_39));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_41, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_47));
                  }
                  {
                    ml_backend__ml_optimize__Var_48 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_optimize__Defns0_36, ml_backend__ml_optimize__Data_41);
                  }
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_48 == (MR_Integer) 0);
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                    {
                      {
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__VarName_5, &ml_backend__ml_optimize__Rval1_10, ml_backend__ml_optimize__SubStatements0_37, &ml_backend__ml_optimize__SubStatements_42);
                      }
                      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                        {
                          {
                            ml_backend__ml_optimize__Stmt_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_35, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns0_36));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_35, 1) = ((MR_Box) (ml_backend__ml_optimize__SubStatements_42));
                          }
                          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
                        }
                    }
                }
            }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
            {
              {
                ml_backend__ml_optimize__Statement1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_35));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_32));
              }
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
            }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
            {
              MR_Word ml_backend__ml_optimize__Var_21;
              MR_Word ml_backend__ml_optimize__Var_22;
              MR_Word ml_backend__ml_optimize__Var_23;
              MR_Word ml_backend__ml_optimize__Var_12;

              *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval1_10;
              ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, (MR_Integer) 0)));
              ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, (MR_Integer) 1)));
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_21)) == (MR_mktag((MR_Integer) 0)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_21, (MR_Integer) 0)));
                  ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_21, (MR_Integer) 1)));
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                    (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                *ml_backend__ml_optimize__Statements_9 = ml_backend__ml_optimize__Statements0_8;
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_optimize__Statements_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement1_11));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements0_8));
                }
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word ml_backend__ml_optimize__Mod_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__UnqualVarName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__DataName_16;
              MR_Word ml_backend__ml_optimize__Statements1_20;
              MR_Word ml_backend__ml_optimize__Var_24;
              MR_Word ml_backend__ml_optimize__Var_25;

              {
                ml_backend__ml_optimize__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_24, 1) = ((MR_Box) (ml_backend__ml_optimize__UnqualVarName_15));
              }
              {
                ml_backend__ml_optimize__DataName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Mod_13));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_14));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_24));
              }
              {
                ml_backend__ml_optimize__Var_25 = ml_backend__ml_util__statement_contains_var_2_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, ml_backend__ml_optimize__DataName_16);
              }
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__Var_25 == (MR_Integer) 0);
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                {
                  {
                    ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_3(&ml_backend__ml_optimize__env);
                  }
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = !((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded);
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                    {
                      {
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__VarName_5, ml_backend__ml_optimize__Rval_6, ml_backend__ml_optimize__Statements0_8, &ml_backend__ml_optimize__Statements1_20);
                      }
                      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_optimize__Statements_9 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements1_20));
                          }
                          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
                        }
                    }
                }
            }
        }
      return (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded;
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
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__SubRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize___Tag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_2, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_10;

                ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 0)))) {
              default:
                ml_backend__ml_optimize__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                ml_backend__ml_optimize__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                ml_backend__ml_optimize__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                ml_backend__ml_optimize__succeeded = MR_TRUE;
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
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__SubRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize___Tag_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_2, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_18;

                ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 0)))) {
              default:
                ml_backend__ml_optimize__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                ml_backend__ml_optimize__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_optimize__SubRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize___Op_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRval_27;

                    ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_optimize__SubRvalA_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__SubRvalB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize___Op_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                  {
                    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__SubRvalA_20);
                  }
                  if (ml_backend__ml_optimize__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__SubRvalB_21;

                        ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_optimize__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_2, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_7)) {
                    default:
                      ml_backend__ml_optimize__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_optimize__Address_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_7, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_7, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_7, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_7, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_7, (MR_Integer) 4)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__Address_10;

                          ml_backend__ml_optimize__Rval_2 = ml_backend__ml_optimize__next_value_of_Rval_2;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_optimize__Address_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_7, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_7, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_2 = ml_backend__ml_optimize__Address_26;

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
              case (MR_Integer) 4:
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

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_optimize__STATE_VARIABLE_Statements_5 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4;
          }
        else
          {
            MR_Word ml_backend__ml_optimize__Defn0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Defns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Defns1_15;
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19;
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
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_32_47;
            MR_Word ml_backend__ml_optimize__Var_62;
            MR_Word ml_backend__ml_optimize___Context_31;
            MR_Word ml_backend__ml_optimize___Type_33;
            MR_Word ml_backend__ml_optimize___GCStatement_35;
            MR_Word ml_backend__ml_optimize__Var_54;
            MR_Word ml_backend__ml_optimize__Var_55;
            MR_Word ml_backend__ml_optimize__Var_56;
            MR_Word ml_backend__ml_optimize__Var_57;

            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Defn0_11)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__DataDefn0_29 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_11), (MR_Integer) 0);
                ml_backend__ml_optimize__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 0)));
                ml_backend__ml_optimize___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 1)));
                ml_backend__ml_optimize__Flags_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 2)));
                ml_backend__ml_optimize___Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 3)));
                ml_backend__ml_optimize__Initializer_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 4)));
                ml_backend__ml_optimize___GCStatement_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_29, (MR_Integer) 5)));
                ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Name_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Name_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__VarName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Name_30, (MR_Integer) 1)));
                    {
                      ml_backend__ml_optimize__Var_62 = ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_f_0();
                    }
                    {
                      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_data_decl_flags_0_0(ml_backend__ml_optimize__Flags_32, ml_backend__ml_optimize__Var_62);
                    }
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
                        ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
                        ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                        ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
                        ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 4)));
                        ml_backend__ml_optimize__Var_46 = (MR_Integer) 0;
                        {
                          ml_backend__ml_optimize__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_37, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_36));
                        }
                        if ((ml_backend__ml_optimize__Initializer_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__QualVarName_37, &ml_backend__ml_optimize__Rval_38, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_32_47);
                          }
                        else
                        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Initializer_34)) == (MR_mktag((MR_Integer) 1))))
                          {
                            ml_backend__ml_optimize__Rval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Initializer_34, (MR_Integer) 0)));
                            ml_backend__ml_optimize__STATE_VARIABLE_Statements_32_47 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4;
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
                                    MR_Word ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
                                    MR_Word ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                                    MR_Word ml_backend__ml_optimize__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
                                    MR_Word ml_backend__ml_optimize__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 4)));

                                    {
                                      ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_42, (MR_Integer) 174, (MR_Integer) 1);
                                    }
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        ml_backend__ml_optimize__Var_50 = (MR_Integer) 175;
                                        ml_backend__ml_optimize__Var_51 = (MR_Integer) 1;
                                        {
                                          ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_42, ml_backend__ml_optimize__Var_50, ml_backend__ml_optimize__Var_51);
                                        }
                                      }
                                  }
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    {
                                      ml_backend__ml_optimize__eliminate_var_8_p_0(ml_backend__ml_optimize__QualVarName_37, ml_backend__ml_optimize__Rval_38, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns1_15, ml_backend__ml_optimize__STATE_VARIABLE_Statements_32_47, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19, &ml_backend__ml_optimize__Count_43, &ml_backend__ml_optimize__Invalidated_44);
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
                                              {
                                                MR_Word ml_backend__ml_optimize__Lval_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval_38, (MR_Integer) 0)));
                                                MR_Word ml_backend__ml_optimize__Var_89;
                                                MR_Word ml_backend__ml_optimize__Var_90;

                                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_71)) == (MR_mktag((MR_Integer) 3)));
                                                if (ml_backend__ml_optimize__succeeded)
                                                  {
                                                    ml_backend__ml_optimize__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_71, (MR_Integer) 0)));
                                                    ml_backend__ml_optimize__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval_71, (MR_Integer) 1)));
                                                  }
                                              }
                                              break;
                                            case (MR_Integer) 3:
                                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_38, (MR_Integer) 0)))) {
                                                default:
                                                  ml_backend__ml_optimize__succeeded = MR_FALSE;
                                                  break;
                                                case (MR_Integer) 0:
                                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                                                  break;
                                                case (MR_Integer) 3:
                                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                                                  break;
                                                case (MR_Integer) 4:
                                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                                                  break;
                                                case (MR_Integer) 5:
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
                  MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Statements_0_4 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19;

                  ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Statements_0_4;
                  ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            else
              {
                MR_Word ml_backend__ml_optimize__Defns2_16;

                {
                  ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns2_16, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4, ml_backend__ml_optimize__STATE_VARIABLE_Statements_5);
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
ml_backend__ml_optimize__maybe_eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__EliminateLocalVars_9;
    MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 4)));

    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Var_14, (MR_Integer) 464, &ml_backend__ml_optimize__EliminateLocalVars_9);
    }
    switch (ml_backend__ml_optimize__EliminateLocalVars_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_optimize__STATE_VARIABLE_Defns_11 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10;
          *ml_backend__ml_optimize__STATE_VARIABLE_Statements_13 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12;
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__OptInfo_6, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10, ml_backend__ml_optimize__STATE_VARIABLE_Defns_11, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12, ml_backend__ml_optimize__STATE_VARIABLE_Statements_13);
        }
        break;
    }
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
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.set_initializer\'/4", (MR_String) "var not found");
          return;
        }
      }
    else
      {
        MR_Word ml_backend__ml_optimize__Defn0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Defns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Defn_15;
        MR_Word ml_backend__ml_optimize__Defns_16;
        MR_Word ml_backend__ml_optimize__Name_18;
        MR_Word ml_backend__ml_optimize__Context_19;
        MR_Word ml_backend__ml_optimize__Flags_20;
        MR_Word ml_backend__ml_optimize__Type_21;
        MR_Word ml_backend__ml_optimize__GCStatement_23;
        MR_Word ml_backend__ml_optimize__DataDefn0_17;
        MR_Word ml_backend__ml_optimize__Var_26;
        MR_Word ml_backend__ml_optimize___OldInitializer_22;

        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Defn0_13)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__DataDefn0_17 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Defn0_13), (MR_Integer) 0);
            ml_backend__ml_optimize__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_17, (MR_Integer) 0)));
            ml_backend__ml_optimize__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_17, (MR_Integer) 1)));
            ml_backend__ml_optimize__Flags_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_17, (MR_Integer) 2)));
            ml_backend__ml_optimize__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_17, (MR_Integer) 3)));
            ml_backend__ml_optimize___OldInitializer_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_17, (MR_Integer) 4)));
            ml_backend__ml_optimize__GCStatement_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn0_17, (MR_Integer) 5)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Name_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Name_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Name_18, (MR_Integer) 1)));
                {
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__Var_26);
                }
              }
          }
        if (ml_backend__ml_optimize__succeeded)
          {
            MR_Word ml_backend__ml_optimize__DataDefn_24;
            MR_Word ml_backend__ml_optimize__Var_25;

            {
              ml_backend__ml_optimize__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_25, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_2));
            }
            {
              ml_backend__ml_optimize__DataDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_24, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_18));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_24, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_19));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_24, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_20));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_24, 3) = ((MR_Box) (ml_backend__ml_optimize__Type_21));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_24, 4) = ((MR_Box) (ml_backend__ml_optimize__Var_25));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataDefn_24, 5) = ((MR_Box) (ml_backend__ml_optimize__GCStatement_23));
            }
            ml_backend__ml_optimize__Defn_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_optimize__DataDefn_24);
            ml_backend__ml_optimize__Defns_16 = ml_backend__ml_optimize__Defns0_14;
          }
        else
          {
            ml_backend__ml_optimize__Defn_15 = ml_backend__ml_optimize__Defn0_13;
            {
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__Rval_2, ml_backend__ml_optimize__Defns0_14, &ml_backend__ml_optimize__Defns_16);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defn_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Defns_16));
        }
      }
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
        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__DataName_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__DataName_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__DataName_6, (MR_Integer) 1)));
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_3, ml_backend__ml_optimize__Var_12);
            }
          }
      }
    return ml_backend__ml_optimize__succeeded;
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
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__943__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
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
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__941__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_34)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__RHS_11;
        MR_Word ml_backend__ml_optimize__VarName_17;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_35_35;
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_58_58;
        MR_Word ml_backend__ml_optimize__AssignStatement_9;
        MR_Word ml_backend__ml_optimize__LHS_10;
        MR_Word ml_backend__ml_optimize__ThisVar_13;
        MR_Word ml_backend__ml_optimize__Qualifier_15;
        MR_Word ml_backend__ml_optimize__QualKind_16;
        MR_Word ml_backend__ml_optimize__ThisData_18;
        MR_Word ml_backend__ml_optimize__FollowingDefns_20;
        MR_Word ml_backend__ml_optimize__Filter_21;
        MR_Word ml_backend__ml_optimize__Var_36;
        MR_Word ml_backend__ml_optimize__Var_37;
        MR_Word ml_backend__ml_optimize__Var_38;
        MR_Word ml_backend__ml_optimize__Var_39;
        MR_Word ml_backend__ml_optimize__Var_40;
        MR_Word ml_backend__ml_optimize__Var_41;
        MR_Word ml_backend__ml_optimize__Var_42;
        MR_Word ml_backend__ml_optimize__Var_59;
        MR_Word ml_backend__ml_optimize__Var_12;
        MR_Word ml_backend__ml_optimize___ThisType_14;
        MR_Word ml_backend__ml_optimize__Var_51;
        MR_Word ml_backend__ml_optimize__Var_52;
        MR_Word ml_backend__ml_optimize__Var_53;
        MR_Word ml_backend__ml_optimize__Var_54;
        MR_Word ml_backend__ml_optimize___VarDefn_19;
        MR_Word ml_backend__ml_optimize__Var_30;
        MR_Box ml_backend__ml_optimize__conv0_Var_30;

        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__AssignStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33, (MR_Integer) 0)));
            ml_backend__ml_optimize__STATE_VARIABLE_Statements_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33, (MR_Integer) 1)));
            ml_backend__ml_optimize__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_9, (MR_Integer) 0)));
            ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_9, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_36, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_36, (MR_Integer) 1)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_37)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_37, (MR_Integer) 0)));
                    ml_backend__ml_optimize__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_37, (MR_Integer) 1)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__LHS_10)) == (MR_mktag((MR_Integer) 3)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__ThisVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 0)));
                        ml_backend__ml_optimize___ThisType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 1)));
                        ml_backend__ml_optimize__Qualifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 0)));
                        ml_backend__ml_optimize__QualKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 1)));
                        ml_backend__ml_optimize__VarName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 2)));
                        {
                          ml_backend__ml_optimize__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_38, 1) = ((MR_Box) (ml_backend__ml_optimize__VarName_17));
                        }
                        {
                          ml_backend__ml_optimize__ThisData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_38));
                        }
                        {
                          ml_backend__ml_optimize__Var_39 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__ThisData_18);
                        }
                        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_39 == (MR_Integer) 0);
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 0)));
                            ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 1)));
                            ml_backend__ml_optimize__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 2)));
                            ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 3)));
                            ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 4)));
                            {
                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__Qualifier_15, ml_backend__ml_optimize__Var_59);
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__TypeCtorInfo_58_58 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
                                {
                                  ml_backend__ml_optimize__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[2]));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, 3) = ((MR_Box) (ml_backend__ml_optimize__VarName_17));
                                }
                                {
                                  ml_backend__ml_optimize__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[3]));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_40, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_42));
                                }
                                {
                                  mercury__list__drop_while_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_58_58, ml_backend__ml_optimize__Var_40, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31, &ml_backend__ml_optimize__Var_41);
                                }
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_41)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize___VarDefn_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_41, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__FollowingDefns_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_41, (MR_Integer) 1)));
                                    {
                                      ml_backend__ml_optimize__Filter_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_7[0]));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 3) = ((MR_Box) (ml_backend__ml_optimize__RHS_11));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 4) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 5) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_21, 6) = ((MR_Box) (ml_backend__ml_optimize__ThisData_18));
                                    }
                                    {
                                      ml_backend__ml_optimize__succeeded = mercury__list__find_first_match_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_58_58, ml_backend__ml_optimize__Filter_21, ml_backend__ml_optimize__FollowingDefns_20, &ml_backend__ml_optimize__conv0_Var_30);
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
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_47_47;

            {
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_17, ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31, &ml_backend__ml_optimize__STATE_VARIABLE_Defns_47_47);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Defns_0_31 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_47_47;
              MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Statements_0_33 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_35_35;

              ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Statements_0_33;
              ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Defns_0_31;
            }
            continue;
          }
        else
          {
            *ml_backend__ml_optimize__STATE_VARIABLE_Statements_34 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33;
            *ml_backend__ml_optimize__STATE_VARIABLE_Defns_32 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_11,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_12,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_13,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_14)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Globals_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OptInit_10;
    MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 4)));

    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_9, (MR_Integer) 463, &ml_backend__ml_optimize__OptInit_10);
    }
    switch (ml_backend__ml_optimize__OptInit_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_optimize__STATE_VARIABLE_Defns_12 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_11;
          *ml_backend__ml_optimize__STATE_VARIABLE_Statements_14 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__OptInfo_6, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_11, ml_backend__ml_optimize__STATE_VARIABLE_Defns_12, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_13, ml_backend__ml_optimize__STATE_VARIABLE_Statements_14);
        }
        break;
    }
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
            MR_Word ml_backend__ml_optimize__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 2)));
            MR_Word ml_backend__ml_optimize__HeadAffects_12;
            MR_Word ml_backend__ml_optimize__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 1)));

            {
              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Statement_11, &ml_backend__ml_optimize__HeadAffects_12);
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
  MR_Word ml_backend__ml_optimize__Statement_5,
  MR_Word * ml_backend__ml_optimize__Affects_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;
        MR_Word ml_backend__ml_optimize__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__Statements_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));

              {
                ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Statements_10, ml_backend__ml_optimize__Affects_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_optimize__SubStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Statement_5 = ml_backend__ml_optimize__SubStatement_13;

                ml_backend__ml_optimize__Statement_5 = ml_backend__ml_optimize__next_value_of_Statement_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Statements_67;
              MR_Word ml_backend__ml_optimize__Head_83;
              MR_Word ml_backend__ml_optimize__Tail_84;
              MR_Word ml_backend__ml_optimize__HeadAffects_86;
              MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));

              if ((ml_backend__ml_optimize__MaybeElse_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ml_backend__ml_optimize__Statements_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_67, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_optimize__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_16, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_optimize__Var_64;

                  {
                    ml_backend__ml_optimize__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_64, 0) = ((MR_Box) (ml_backend__ml_optimize__Else_17));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Statements_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_67, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_67, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_64));
                  }
                }
              ml_backend__ml_optimize__Head_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_67, (MR_Integer) 0)));
              ml_backend__ml_optimize__Tail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_67, (MR_Integer) 1)));
              {
                ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Head_83, &ml_backend__ml_optimize__HeadAffects_86);
              }
              switch (ml_backend__ml_optimize__HeadAffects_86) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Tail_84, ml_backend__ml_optimize__Affects_6);
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_optimize__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_optimize__Default_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_optimize__Affects0_23;
                  MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 3)));

                  {
                    ml_backend__ml_optimize__cases_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Cases_21, &ml_backend__ml_optimize__Affects0_23);
                  }
                  switch (ml_backend__ml_optimize__Affects0_23) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_tag((MR_Word) ml_backend__ml_optimize__Default_22)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ml_backend__ml_optimize__DefaultStatement_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default_22), (MR_Integer) 1);

                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_optimize__next_value_of_Statement_5 = ml_backend__ml_optimize__DefaultStatement_24;

                              ml_backend__ml_optimize__Statement_5 = ml_backend__ml_optimize__next_value_of_Statement_5;
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
                  MR_Word ml_backend__ml_optimize__AtomicStmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_41)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ml_backend__ml_optimize__Lval_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 1)));

                        {
                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_46)));
                        }
                        if (ml_backend__ml_optimize__succeeded)
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                        else
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_optimize__Lval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_optimize__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 2)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_71)));
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
                            MR_Word ml_backend__ml_optimize__Lval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_optimize__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 2)));
                            MR_Word ml_backend__ml_optimize__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 3)));
                            MR_Word ml_backend__ml_optimize__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 4)));
                            MR_Word ml_backend__ml_optimize__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 5)));
                            MR_Word ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 6)));
                            MR_Word ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 7)));
                            MR_Word ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 8)));
                            MR_Word ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 9)));
                            MR_Word ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 10)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_79)));
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                            else
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word ml_backend__ml_optimize__Lval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_41, (MR_Integer) 1)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_75)));
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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_optimize__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26;

              {
                mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_6)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26);
              }
              switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_6)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_optimize__Rval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_optimize__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_optimize__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_optimize__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_6, (MR_Integer) 4)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_37;
                      MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26;

                      ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18;
                      ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_optimize__Rval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_6, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_6, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_47;
                      MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26;

                      ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18;
                      ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26;
                  break;
                case (MR_Integer) 3:
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__SubRval_8;

                ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
                break;
              case (MR_Integer) 1:
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
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_optimize__SubRvalB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22;
                  MR_Word ml_backend__ml_optimize__SubRvalA_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__SubRvalA_28, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__SubRvalB_12;
                    MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22;

                    ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18;
                    ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20;
                  MR_Word ml_backend__ml_optimize__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

                  {
                    mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_29)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20);
                  }
                  switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_29)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_optimize__Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_29, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_optimize__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_29, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_29, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_29, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_29, (MR_Integer) 4)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_53;
                          MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20;

                          ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18;
                          ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_optimize__Rval_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_29, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_29, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__next_value_of_Rval_4 = ml_backend__ml_optimize__Rval_63;
                          MR_Word ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20;

                          ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__next_value_of_STATE_VARIABLE_Components_0_18;
                          ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20;
                      break;
                    case (MR_Integer) 3:
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20;
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
                break;
              case (MR_Integer) 5:
                *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
                break;
            }
            break;
        }
      }
      break;
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
                MR_Word ml_backend__ml_optimize__TypeCtorInfo_43_54;
                MR_Word ml_backend__ml_optimize__Stmt0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_15, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Context0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_15, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Stmt1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__TestRval_24;
                MR_Word ml_backend__ml_optimize__StmtThen0_25;
                MR_Word ml_backend__ml_optimize__MaybeStmtElse0_26;
                MR_Word ml_backend__ml_optimize__StmtThen1_27;
                MR_Word ml_backend__ml_optimize__MaybeStmtElse1_28;
                MR_Word ml_backend__ml_optimize__TestRvalComponents_29;
                MR_Word ml_backend__ml_optimize__ContextT_32;
                MR_Word ml_backend__ml_optimize__Then_33;
                MR_Word ml_backend__ml_optimize__MaybeElse_34;
                MR_Word ml_backend__ml_optimize__Stmt_38;
                MR_Word ml_backend__ml_optimize__Statement_39;
                MR_Word ml_backend__ml_optimize__Var_40;
                MR_Word ml_backend__ml_optimize__Var_41;
                MR_Word ml_backend__ml_optimize__Var_43;
                MR_Word ml_backend__ml_optimize__Var_44;
                MR_Word ml_backend__ml_optimize__Var_45;
                MR_Word ml_backend__ml_optimize__Var_46;
                MR_Word ml_backend__ml_optimize__Var_47;
                MR_Word ml_backend__ml_optimize__Var_55;
                MR_Word ml_backend__ml_optimize__Var_56;
                MR_Word ml_backend__ml_optimize___Context1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Var_31;

                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_20)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__TestRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 0)));
                    ml_backend__ml_optimize__StmtThen0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 1)));
                    ml_backend__ml_optimize__MaybeStmtElse0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 2)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt1_22)) == (MR_mktag((MR_Integer) 2)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 0)));
                        ml_backend__ml_optimize__StmtThen1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 1)));
                        ml_backend__ml_optimize__MaybeStmtElse1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 2)));
                        {
                          ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__TestRval_24, ml_backend__ml_optimize__Var_55);
                        }
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__TypeCtorInfo_43_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
                            {
                              ml_backend__ml_optimize__Var_40 = mercury__set__init_0_f_0(ml_backend__ml_optimize__TypeCtorInfo_43_54);
                            }
                            {
                              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__TestRval_24, ml_backend__ml_optimize__Var_40, &ml_backend__ml_optimize__TestRvalComponents_29);
                            }
                            ml_backend__ml_optimize__Var_41 = (MR_Integer) 0;
                            {
                              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_29, ml_backend__ml_optimize__StmtThen0_25, &ml_backend__ml_optimize__Var_56);
                            }
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_41 == ml_backend__ml_optimize__Var_56);
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                if ((ml_backend__ml_optimize__MaybeStmtElse0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word ml_backend__ml_optimize__StmtElse0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_26, (MR_Integer) 0)));
                                    MR_Word ml_backend__ml_optimize__Var_57;

                                    {
                                      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_29, ml_backend__ml_optimize__StmtElse0_30, &ml_backend__ml_optimize__Var_57);
                                    }
                                    ml_backend__ml_optimize__succeeded = ((MR_Integer) 0 == ml_backend__ml_optimize__Var_57);
                                  }
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__StmtThen0_25, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__ContextT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__StmtThen0_25, (MR_Integer) 1)));
                                    ml_backend__ml_optimize__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    ml_backend__ml_optimize__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen1_27));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_46, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_47));
                                    }
                                    {
                                      ml_backend__ml_optimize__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_45, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen0_25));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_45, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                                    }
                                    {
                                      ml_backend__ml_optimize__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_44));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_43, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
                                    }
                                    {
                                      ml_backend__ml_optimize__Then_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_33, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_43));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_33, 1) = ((MR_Box) (ml_backend__ml_optimize__ContextT_32));
                                    }
                                    if ((ml_backend__ml_optimize__MaybeStmtElse0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      if ((ml_backend__ml_optimize__MaybeStmtElse1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                        ml_backend__ml_optimize__MaybeElse_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      else
                                        ml_backend__ml_optimize__MaybeElse_34 = ml_backend__ml_optimize__MaybeStmtElse1_28;
                                    else
                                      {
                                        MR_Word ml_backend__ml_optimize__Else0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_26, (MR_Integer) 0)));

                                        if ((ml_backend__ml_optimize__MaybeStmtElse1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                          ml_backend__ml_optimize__MaybeElse_34 = ml_backend__ml_optimize__MaybeStmtElse0_26;
                                        else
                                          {
                                            MR_Word ml_backend__ml_optimize__Else1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse1_28, (MR_Integer) 0)));
                                            MR_Word ml_backend__ml_optimize__Var_48;
                                            MR_Word ml_backend__ml_optimize__Var_49;
                                            MR_Word ml_backend__ml_optimize__Var_51;
                                            MR_Word ml_backend__ml_optimize__Var_52;

                                            {
                                              ml_backend__ml_optimize__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_52, 0) = ((MR_Box) (ml_backend__ml_optimize__Else1_37));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            {
                                              ml_backend__ml_optimize__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_51, 0) = ((MR_Box) (ml_backend__ml_optimize__Else0_36));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_51, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_52));
                                            }
                                            {
                                              ml_backend__ml_optimize__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_49, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
                                            }
                                            {
                                              ml_backend__ml_optimize__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_49));
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (ml_backend__ml_optimize__Context0_21));
                                            }
                                            {
                                              ml_backend__ml_optimize__MaybeElse_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_34, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
                                            }
                                          }
                                      }
                                    {
                                      ml_backend__ml_optimize__Stmt_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_38, 0) = ((MR_Box) (ml_backend__ml_optimize__TestRval_24));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_33));
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_38, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_34));
                                    }
                                    {
                                      ml_backend__ml_optimize__Statement_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_39, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_38));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_39, 1) = ((MR_Box) (ml_backend__ml_optimize__Context0_21));
                                    }
                                    {
                                      ml_backend__ml_optimize__ReplStmts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ReplStmts_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_39));
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

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word ml_backend__ml_optimize__Statement_3)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Statements_4;
    MR_Word ml_backend__ml_optimize__BlockStatements_5;
    MR_Word ml_backend__ml_optimize__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_8;
    MR_Word ml_backend__ml_optimize__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_3, (MR_Integer) 1)));

    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_7)) == (MR_mktag((MR_Integer) 0)));
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_7, (MR_Integer) 0)));
        ml_backend__ml_optimize__BlockStatements_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_7, (MR_Integer) 1)));
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_optimize__succeeded)
      ml_backend__ml_optimize__Statements_4 = ml_backend__ml_optimize__BlockStatements_5;
    else
      {
        {
          ml_backend__ml_optimize__Statements_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_4, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_3));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    return ml_backend__ml_optimize__Statements_4;
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
    MR_Word ml_backend__ml_optimize__conv0_Statements_4;

    {
      ml_backend__ml_optimize__conv0_Statements_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Statements_4));
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
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_9 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    MR_Word ml_backend__ml_optimize__Var_7;

    {
      ml_backend__ml_optimize__Var_7 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_9, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_5[2], ml_backend__ml_optimize__STATE_VARIABLE_Stmts_0_4);
    }
    {
      *ml_backend__ml_optimize__STATE_VARIABLE_Stmts_5 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_9, ml_backend__ml_optimize__Var_7);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__stmt_is_self_recursive_call_replaceable_with_jump_to_top_3_p_0(
  MR_Word ml_backend__ml_optimize__ModuleName_4,
  MR_Word ml_backend__ml_optimize__FuncName_5,
  MR_Word ml_backend__ml_optimize__Stmt_6)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__CalleeRval_8;
    MR_Word ml_backend__ml_optimize__MaybeObject_9;
    MR_Word ml_backend__ml_optimize__CallKind_12;
    MR_Word ml_backend__ml_optimize__CalleeCodeAddr_15;
    MR_Word ml_backend__ml_optimize__Var_16;
    MR_Word ml_backend__ml_optimize___Signature_7;
    MR_Word ml_backend__ml_optimize___CallArgs_10;
    MR_Word ml_backend__ml_optimize___Results_11;
    MR_Word ml_backend__ml_optimize___Markers_13;

    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize___Signature_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 1)));
        ml_backend__ml_optimize__CalleeRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 2)));
        ml_backend__ml_optimize__MaybeObject_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 3)));
        ml_backend__ml_optimize___CallArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 4)));
        ml_backend__ml_optimize___Results_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 5)));
        ml_backend__ml_optimize__CallKind_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 6)));
        ml_backend__ml_optimize___Markers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_6, (MR_Integer) 7)));
        switch (ml_backend__ml_optimize__CallKind_12) {
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
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__MaybeObject_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__CalleeRval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CalleeRval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__CalleeRval_8, (MR_Integer) 1)));
                    ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_16, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__CalleeCodeAddr_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_16, (MR_Integer) 1)));
                        {
                          ml_backend__ml_optimize__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0(ml_backend__ml_optimize__CalleeCodeAddr_15, ml_backend__ml_optimize__ModuleName_4, ml_backend__ml_optimize__FuncName_5);
                        }
                      }
                  }
              }
          }
      }
    return ml_backend__ml_optimize__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_1(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_2(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    {
      MR_Word ml_backend__ml_optimize__Var_20;
      MR_Word ml_backend__ml_optimize___Signature_67;
      MR_Word ml_backend__ml_optimize___CallArgs_70;
      MR_Word ml_backend__ml_optimize___Results_71;
      MR_Word ml_backend__ml_optimize___Markers_73;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStatement_18, (MR_Integer) 0)));
      ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStatement_18, (MR_Integer) 1)));
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
        {
          {
            ml_backend__ml_optimize___Signature_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 1)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 2)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__MaybeObject_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 3)));
            ml_backend__ml_optimize___CallArgs_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 4)));
            ml_backend__ml_optimize___Results_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 5)));
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallKind_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 6)));
            ml_backend__ml_optimize___Markers_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStmt_19, (MR_Integer) 7)));
          }
          {
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__MaybeObject_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
              {
                switch ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallKind_72) {
                  default:
                    (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = MR_TRUE;
                    break;
                }
                if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
                  {
                    (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeRval_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeRval_68, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
                      {
                        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeRval_68, (MR_Integer) 1)));
                        {
                          (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Var_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Var_76, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
                            {
                              (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeCodeAddr_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Var_76, (MR_Integer) 1)));
                              {
                                {
                                  (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CalleeCodeAddr_75, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_15, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__FunctionName_16);
                                }
                                if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
                                  {
                                    ml_backend__ml_optimize__optimize_func_3_p_0_1(ml_backend__ml_optimize__env_ptr);
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
ml_backend__ml_optimize__optimize_func_3_p_0_3(
  void * ml_backend__ml_optimize__env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0) == 0)
      {
        {
          ml_backend__ml_util__stmt_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__SubStatement_18, ml_backend__ml_optimize__optimize_func_3_p_0_2, ml_backend__ml_optimize__env_ptr);
        }
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Body0_5,
  MR_Word * ml_backend__ml_optimize__Body_6)
{
  {
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s ml_backend__ml_optimize__env;

    if ((ml_backend__ml_optimize__Body0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__Body_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_optimize__Statement0_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Body0_5), (MR_Integer) 1);
        MR_Word ml_backend__ml_optimize__Statement_8;
        MR_Word ml_backend__ml_optimize__Context_13;
        MR_Word ml_backend__ml_optimize__Globals_14;
        MR_Word ml_backend__ml_optimize__Stmt_24;
        MR_Word ml_backend__ml_optimize__Var_52;
        MR_Word ml_backend__ml_optimize__Var_53;
        MR_Word ml_backend__ml_optimize__Var_54;
        MR_Word ml_backend__ml_optimize__Var_55;
        MR_Word ml_backend__ml_optimize__Var_56;
        MR_Word ml_backend__ml_optimize__Var_58;
        MR_Word ml_backend__ml_optimize__Var_59;

        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
        ml_backend__ml_optimize__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
        ml_backend__ml_optimize__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        {
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_14, (MR_Integer) 462, (MR_Integer) 1);
        }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__FunctionName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
            ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
            ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
            {
              ml_backend__ml_optimize__optimize_func_3_p_0_3(&ml_backend__ml_optimize__env);
            }
          }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
          {
            MR_Word ml_backend__ml_optimize__CommentStmt_22;
            MR_Word ml_backend__ml_optimize__SupportsBreakContinue_23;

            {
              ml_backend__ml_optimize__CommentStmt_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStmt_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[3])));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStmt_22, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
            }
            {
              ml_backend__ml_optimize__SupportsBreakContinue_23 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_14);
            }
            switch (ml_backend__ml_optimize__SupportsBreakContinue_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_optimize__Var_32;
                  MR_Word ml_backend__ml_optimize__Var_33;
                  MR_Word ml_backend__ml_optimize__Var_34;
                  MR_Word ml_backend__ml_optimize__Var_35;

                  {
                    ml_backend__ml_optimize__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[4])));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_34, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
                  }
                  {
                    ml_backend__ml_optimize__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_35, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement0_7));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_33, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_34));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_33, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_35));
                  }
                  {
                    ml_backend__ml_optimize__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_32, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_22));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_32, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_33));
                  }
                  {
                    ml_backend__ml_optimize__Stmt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_32));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_optimize__Var_41;
                  MR_Word ml_backend__ml_optimize__Var_42;
                  MR_Word ml_backend__ml_optimize__Var_44;
                  MR_Word ml_backend__ml_optimize__Var_45;
                  MR_Word ml_backend__ml_optimize__Var_47;
                  MR_Word ml_backend__ml_optimize__Var_48;

                  {
                    ml_backend__ml_optimize__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[6])));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
                  }
                  {
                    ml_backend__ml_optimize__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_47, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_45, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement0_7));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_45, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_47));
                  }
                  {
                    ml_backend__ml_optimize__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_44, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_22));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_44, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
                  }
                  {
                    ml_backend__ml_optimize__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_44));
                  }
                  {
                    ml_backend__ml_optimize__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_41, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_42));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
                  }
                  {
                    ml_backend__ml_optimize__Stmt_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_24, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[5])));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_24, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_41));
                  }
                }
                break;
            }
          }
        else
          ml_backend__ml_optimize__Stmt_24 = (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12;
        {
          ml_backend__ml_optimize__Statement_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_24));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
        }
        *ml_backend__ml_optimize__Body_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_8);
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__generate_assign_args_5_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4,
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *ml_backend__ml_optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              *ml_backend__ml_optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word ml_backend__ml_optimize__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));

            if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *ml_backend__ml_optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word ml_backend__ml_optimize__ArgRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__ArgRvals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__VarName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_72, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_72, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__ModuleName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__QualVarName_30;
                MR_Word ml_backend__ml_optimize___ArgGCStatement_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_72, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
                MR_Word ml_backend__ml_optimize__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 4)));
                MR_Word ml_backend__ml_optimize__TypeInfo_73_73;
                MR_Word ml_backend__ml_optimize__Var_45;
                MR_Word ml_backend__ml_optimize__Var_70;
                MR_Word ml_backend__ml_optimize___VarType_31;

                {
                  ml_backend__ml_optimize__QualVarName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_30, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_29));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_30, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_30, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_26));
                }
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__ArgRval_22)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ArgRval_22, (MR_Integer) 0)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_45)) == (MR_mktag((MR_Integer) 3)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_45, (MR_Integer) 0)));
                        ml_backend__ml_optimize___VarType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_45, (MR_Integer) 1)));
                        ml_backend__ml_optimize__TypeInfo_73_73 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
                        {
                          ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_73_73, ((MR_Box) (ml_backend__ml_optimize__QualVarName_30)), ((MR_Box) (ml_backend__ml_optimize__Var_70)));
                        }
                      }
                  }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__2_2 = ml_backend__ml_optimize__Var_71;
                      MR_Word ml_backend__ml_optimize__next_value_of_HeadVar__3_3 = ml_backend__ml_optimize__ArgRvals_23;

                      ml_backend__ml_optimize__HeadVar__3_3 = ml_backend__ml_optimize__next_value_of_HeadVar__3_3;
                      ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ml_backend__ml_optimize__NextValueName_34;
                    MR_Word ml_backend__ml_optimize__QualNextValueName_35;
                    MR_Word ml_backend__ml_optimize__Context_38;
                    MR_Word ml_backend__ml_optimize__TempDefn_39;
                    MR_Word ml_backend__ml_optimize__NextValueInitStatement_40;
                    MR_Word ml_backend__ml_optimize__AssignStatement_41;
                    MR_Word ml_backend__ml_optimize__Statements0_42;
                    MR_Word ml_backend__ml_optimize__TempDefns0_43;
                    MR_Word ml_backend__ml_optimize__Var_48;
                    MR_Word ml_backend__ml_optimize__Var_49;
                    MR_Word ml_backend__ml_optimize__Var_50;
                    MR_Word ml_backend__ml_optimize__Var_51;
                    MR_Word ml_backend__ml_optimize__Var_52;
                    MR_Word ml_backend__ml_optimize__Var_53;
                    MR_Word ml_backend__ml_optimize__Var_54;
                    MR_Word ml_backend__ml_optimize__Var_55;
                    MR_Word ml_backend__ml_optimize__Var_57;
                    MR_Word ml_backend__ml_optimize__Var_58;
                    MR_String ml_backend__ml_optimize__VarNameStr_32;
                    MR_Integer ml_backend__ml_optimize__VarNum_33;
                    MR_Word ml_backend__ml_optimize__Var_65;
                    MR_Word ml_backend__ml_optimize__Var_66;
                    MR_Word ml_backend__ml_optimize__Var_67;
                    MR_Word ml_backend__ml_optimize__Var_68;

                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__VarName_26)) == (MR_mktag((MR_Integer) 0)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__VarNameStr_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_26, (MR_Integer) 0)));
                        ml_backend__ml_optimize__VarNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_26, (MR_Integer) 1)));
                        {
                          ml_backend__ml_optimize__NextValueName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_34, 1) = ((MR_Box) (ml_backend__ml_optimize__VarNameStr_32));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_34, 2) = ((MR_Box) (ml_backend__ml_optimize__VarNum_33));
                        }
                      }
                    else
                      {
                        MR_Word ml_backend__ml_optimize__Var_46;
                        MR_String ml_backend__ml_optimize__VarNameStr_60;

                        {
                          ml_backend__ml_optimize__VarNameStr_60 = ml_backend__mlds__ml_var_name_to_string_1_f_0(ml_backend__ml_optimize__VarName_26);
                        }
                        {
                          ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_46, 1) = ((MR_Box) (ml_backend__ml_optimize__VarNameStr_60));
                        }
                        {
                          ml_backend__ml_optimize__NextValueName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__NextValueName_34, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
                        }
                      }
                    {
                      ml_backend__ml_optimize__QualNextValueName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_35, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_29));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_35, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualNextValueName_35, 2) = ((MR_Box) (ml_backend__ml_optimize__NextValueName_34));
                    }
                    ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
                    ml_backend__ml_optimize__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
                    ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
                    ml_backend__ml_optimize__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
                    ml_backend__ml_optimize__Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 4)));
                    {
                      ml_backend__ml_optimize__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (ml_backend__ml_optimize__NextValueName_34));
                    }
                    {
                      ml_backend__ml_optimize__TempDefn_39 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_optimize__Var_48, ml_backend__ml_optimize__Type_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_optimize__Context_38);
                    }
                    {
                      ml_backend__ml_optimize__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_51, 0) = ((MR_Box) (ml_backend__ml_optimize__QualNextValueName_35));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_51, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_27));
                    }
                    {
                      ml_backend__ml_optimize__Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_50, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_50, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_22));
                    }
                    {
                      ml_backend__ml_optimize__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_49, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_50));
                    }
                    {
                      ml_backend__ml_optimize__NextValueInitStatement_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__NextValueInitStatement_40, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_49));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__NextValueInitStatement_40, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_38));
                    }
                    {
                      ml_backend__ml_optimize__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_30));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_54, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_27));
                    }
                    {
                      ml_backend__ml_optimize__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_55, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
                    }
                    {
                      ml_backend__ml_optimize__Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_53, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_54));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Var_53, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_55));
                    }
                    {
                      ml_backend__ml_optimize__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_52, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_53));
                    }
                    {
                      ml_backend__ml_optimize__AssignStatement_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_41, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_52));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_38));
                    }
                    {
                      ml_backend__ml_optimize__generate_assign_args_5_p_0(ml_backend__ml_optimize__OptInfo_1, ml_backend__ml_optimize__Var_71, ml_backend__ml_optimize__ArgRvals_23, &ml_backend__ml_optimize__Statements0_42, &ml_backend__ml_optimize__TempDefns0_43);
                    }
                    {
                      ml_backend__ml_optimize__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_57, 0) = ((MR_Box) (ml_backend__ml_optimize__NextValueInitStatement_40));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_57, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements0_42));
                    }
                    {
                      ml_backend__ml_optimize__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_58, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignStatement_41));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      *ml_backend__ml_optimize__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_optimize__Var_57, ml_backend__ml_optimize__Var_58);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_optimize__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__TempDefn_39));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TempDefns0_43));
                    }
                  }
              }
          }
      }
      break;
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
    MR_Word ml_backend__ml_optimize__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OptTailCalls_15;
    MR_Word ml_backend__ml_optimize___Signature_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___MaybeObject_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize___Results_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize___IsTailCall_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize___Markers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__ModuleName_16;
    MR_Word ml_backend__ml_optimize__FunctionName_17;
    MR_Word ml_backend__ml_optimize__Var_67;
    MR_Word ml_backend__ml_optimize__Var_69;
    MR_Word ml_backend__ml_optimize__Var_70;

    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_14, (MR_Integer) 462, &ml_backend__ml_optimize__OptTailCalls_15);
    }
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__OptTailCalls_15 == (MR_Integer) 1);
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__FunctionName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        {
          ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__stmt_is_self_recursive_call_replaceable_with_jump_to_top_3_p_0(ml_backend__ml_optimize__ModuleName_16, ml_backend__ml_optimize__FunctionName_17, ml_backend__ml_optimize__Stmt0_5);
        }
      }
    if (ml_backend__ml_optimize__succeeded)
      {
        MR_Word ml_backend__ml_optimize__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__CommentStatement_19;
        MR_Word ml_backend__ml_optimize__GotoStatement_20;
        MR_Word ml_backend__ml_optimize__FuncArgs_21;
        MR_Word ml_backend__ml_optimize__AssignStatements_23;
        MR_Word ml_backend__ml_optimize__AssignDefns_24;
        MR_Word ml_backend__ml_optimize__AssignVarsStatement_25;
        MR_Word ml_backend__ml_optimize__CallReplaceStatements_26;
        MR_Word ml_backend__ml_optimize__Var_45;
        MR_Word ml_backend__ml_optimize__Var_46;
        MR_Word ml_backend__ml_optimize__Var_47;
        MR_Word ml_backend__ml_optimize__Var_48;
        MR_Word ml_backend__ml_optimize__Var_49;
        MR_Word ml_backend__ml_optimize__Var_51;
        MR_Word ml_backend__ml_optimize__Var_52;
        MR_Word ml_backend__ml_optimize__SupportsBreakContinue_93;
        MR_Word ml_backend__ml_optimize__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__Var_79;
        MR_Word ml_backend__ml_optimize__Var_80;
        MR_Word ml_backend__ml_optimize__Var_81;
        MR_Word ml_backend__ml_optimize__Var_82;
        MR_Word ml_backend__ml_optimize___RetTypes_22;

        {
          ml_backend__ml_optimize__CommentStatement_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStatement_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[2])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStatement_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_18));
        }
        {
          ml_backend__ml_optimize__SupportsBreakContinue_93 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_14);
        }
        switch (ml_backend__ml_optimize__SupportsBreakContinue_93) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[1]);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_optimize__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        {
          ml_backend__ml_optimize__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_45, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_46));
        }
        {
          ml_backend__ml_optimize__GotoStatement_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__GotoStatement_20, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_45));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__GotoStatement_20, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_18));
        }
        ml_backend__ml_optimize__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        ml_backend__ml_optimize__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_47, (MR_Integer) 0)));
        ml_backend__ml_optimize___RetTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_47, (MR_Integer) 1)));
        {
          ml_backend__ml_optimize__generate_assign_args_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__FuncArgs_21, ml_backend__ml_optimize__CallArgs_10, &ml_backend__ml_optimize__AssignStatements_23, &ml_backend__ml_optimize__AssignDefns_24);
        }
        {
          ml_backend__ml_optimize__Var_49 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[1], ml_backend__ml_optimize__AssignDefns_24);
        }
        {
          ml_backend__ml_optimize__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_48, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_49));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_48, 1) = ((MR_Box) (ml_backend__ml_optimize__AssignStatements_23));
        }
        {
          ml_backend__ml_optimize__AssignVarsStatement_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStatement_25, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_48));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStatement_25, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_18));
        }
        {
          ml_backend__ml_optimize__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_52, 0) = ((MR_Box) (ml_backend__ml_optimize__GotoStatement_20));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_optimize__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_51, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignVarsStatement_25));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Var_51, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_52));
        }
        {
          ml_backend__ml_optimize__CallReplaceStatements_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStatements_26, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStatement_19));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStatements_26, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__CallReplaceStatements_26));
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
        MR_Word ml_backend__ml_optimize__Var_55;
        MR_Word ml_backend__ml_optimize__Var_56;
        MR_Word ml_backend__ml_optimize__Var_57;
        MR_Word ml_backend__ml_optimize__Var_58;
        MR_Word ml_backend__ml_optimize__Var_59;
        MR_Word ml_backend__ml_optimize__Var_87;
        MR_Word ml_backend__ml_optimize__Var_88;
        MR_Word ml_backend__ml_optimize__Var_89;
        MR_Word ml_backend__ml_optimize___FuncSignature_29;
        MR_Integer ml_backend__ml_optimize___ProcId_31;
        MR_Word ml_backend__ml_optimize___DefnModName_32;
        MR_Integer ml_backend__ml_optimize___Arity_34;
        MR_Word ml_backend__ml_optimize___CodeModel_35;
        MR_Word ml_backend__ml_optimize___NonOutputFunc_36;

        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__FuncRval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_55, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_55, (MR_Integer) 1)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Var_56)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_56, (MR_Integer) 0)));
                    ml_backend__ml_optimize___FuncSignature_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_56, (MR_Integer) 1)));
                    ml_backend__ml_optimize__ModName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_57, (MR_Integer) 0)));
                    ml_backend__ml_optimize__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_57, (MR_Integer) 1)));
                    ml_backend__ml_optimize__ProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_57, (MR_Integer) 2)));
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_58 == (MR_Integer) 0);
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__PredLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_28, (MR_Integer) 0)));
                        ml_backend__ml_optimize___ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_28, (MR_Integer) 1)));
                        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__PredLabel_30)) == (MR_mktag((MR_Integer) 0)));
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 0)));
                            ml_backend__ml_optimize___DefnModName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 1)));
                            ml_backend__ml_optimize__PredName_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 2)));
                            ml_backend__ml_optimize___Arity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 3)));
                            ml_backend__ml_optimize___CodeModel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 4)));
                            ml_backend__ml_optimize___NonOutputFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_30, (MR_Integer) 5)));
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_59 == (MR_Integer) 0);
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__CallArgs_10)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 1)));
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        if ((strcmp(ml_backend__ml_optimize__PredName_33, (MR_String) "mark_hp") == 0))
                                          {
                                            MR_Word ml_backend__ml_optimize__Lval_37;

                                            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Var_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_89, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                            if (ml_backend__ml_optimize__succeeded)
                                              {
                                                ml_backend__ml_optimize__Lval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Var_89, (MR_Integer) 1)));
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
                                              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_89));
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
                                              ml_backend__ml_optimize__Var_87 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__PrivateBuiltin_40);
                                            }
                                            {
                                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ModName_27, ml_backend__ml_optimize__Var_87);
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
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_38));
          }
        else
          *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0_1(
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
          MR_Word ml_backend__ml_optimize__Statement0_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default0_5), (MR_Integer) 1);
          MR_Word ml_backend__ml_optimize__Statement_8;
          MR_Word ml_backend__ml_optimize__Stmt0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Stmt_16;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17;
          MR_Word ml_backend__ml_optimize__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

          {
            ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_20));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_22));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_15));
          }
          switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_optimize__Defns0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Statements0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Defns1_36;
                MR_Word ml_backend__ml_optimize__Statements1_37;
                MR_Word ml_backend__ml_optimize__Defns_38;
                MR_Word ml_backend__ml_optimize__Statements2_39;
                MR_Word ml_backend__ml_optimize__Statements3_40;
                MR_Word ml_backend__ml_optimize__Statements_41;

                {
                  ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Defns0_34, &ml_backend__ml_optimize__Defns1_36, ml_backend__ml_optimize__Statements0_35, &ml_backend__ml_optimize__Statements1_37);
                }
                {
                  ml_backend__ml_optimize__maybe_eliminate_locals_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Defns1_36, &ml_backend__ml_optimize__Defns_38, ml_backend__ml_optimize__Statements1_37, &ml_backend__ml_optimize__Statements2_39);
                }
                {
                  ml_backend__ml_optimize__maybe_flatten_block_2_p_0(ml_backend__ml_optimize__Statements2_39, &ml_backend__ml_optimize__Statements3_40);
                }
                {
                  ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Statements3_40, &ml_backend__ml_optimize__Statements_41);
                }
                {
                  ml_backend__ml_optimize__Stmt_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_38));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_41));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_optimize__Kind_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Rval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__Statement0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Statement_45;

                {
                  ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Statement0_44, &ml_backend__ml_optimize__Statement_45);
                }
                {
                  ml_backend__ml_optimize__Stmt_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_42));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_43));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_16, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_45));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_optimize__Then0_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__MaybeElse0_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__Then_48;
                MR_Word ml_backend__ml_optimize__MaybeElse_49;
                MR_Word ml_backend__ml_optimize__Rval_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 0)));

                {
                  ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Then0_46, &ml_backend__ml_optimize__Then_48);
                }
                {
                  ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__MaybeElse0_47, &ml_backend__ml_optimize__MaybeElse_49);
                }
                {
                  ml_backend__ml_optimize__Stmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_67));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_48));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_16, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_49));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_optimize__TypeCtorInfo_53_73;
                    MR_Word ml_backend__ml_optimize__Type_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_optimize__Range_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_optimize__Cases0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_optimize__Default0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 5)));
                    MR_Word ml_backend__ml_optimize__Cases_54;
                    MR_Word ml_backend__ml_optimize__Default_55;
                    MR_Word ml_backend__ml_optimize__Var_66;
                    MR_Word ml_backend__ml_optimize__Rval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 2)));

                    {
                      ml_backend__ml_optimize__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_66, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_66, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_default_3_p_0_1));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_66, 3) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17));
                    }
                    ml_backend__ml_optimize__TypeCtorInfo_53_73 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
                    {
                      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_53_73, ml_backend__ml_optimize__TypeCtorInfo_53_73, ml_backend__ml_optimize__Var_66, ml_backend__ml_optimize__Cases0_52, &ml_backend__ml_optimize__Cases_54);
                    }
                    {
                      ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Default0_53, &ml_backend__ml_optimize__Default_55);
                    }
                    {
                      ml_backend__ml_optimize__Stmt_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_50));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_68));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_51));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_54));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_55));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 8:
                  ml_backend__ml_optimize__Stmt_16 = ml_backend__ml_optimize__Stmt0_14;
                  break;
                case (MR_Integer) 4:
                  {
                    ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Stmt0_14, &ml_backend__ml_optimize__Stmt_16);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ml_backend__ml_optimize__Ref_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_optimize__TryGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_optimize__HandlerGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_14, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_optimize__TryGoal_59;
                    MR_Word ml_backend__ml_optimize__HandlerGoal_60;

                    {
                      ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__TryGoal0_57, &ml_backend__ml_optimize__TryGoal_59);
                    }
                    {
                      ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__HandlerGoal0_58, &ml_backend__ml_optimize__HandlerGoal_60);
                    }
                    {
                      ml_backend__ml_optimize__Stmt_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_56));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_59));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_16, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_60));
                    }
                  }
                  break;
              }
              break;
          }
          {
            ml_backend__ml_optimize__Statement_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_16));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_15));
          }
          *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_8);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0_1(
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
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Case0_5,
  MR_Word * ml_backend__ml_optimize__Case_6)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__FirstCond_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__LaterConds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Statement0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Statement_10;
    MR_Word ml_backend__ml_optimize__Stmt0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt_18;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19;
    MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

    {
      ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
    }
    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__Defns0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Statements0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Defns1_38;
          MR_Word ml_backend__ml_optimize__Statements1_39;
          MR_Word ml_backend__ml_optimize__Defns_40;
          MR_Word ml_backend__ml_optimize__Statements2_41;
          MR_Word ml_backend__ml_optimize__Statements3_42;
          MR_Word ml_backend__ml_optimize__Statements_43;

          {
            ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Defns0_36, &ml_backend__ml_optimize__Defns1_38, ml_backend__ml_optimize__Statements0_37, &ml_backend__ml_optimize__Statements1_39);
          }
          {
            ml_backend__ml_optimize__maybe_eliminate_locals_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Defns1_38, &ml_backend__ml_optimize__Defns_40, ml_backend__ml_optimize__Statements1_39, &ml_backend__ml_optimize__Statements2_41);
          }
          {
            ml_backend__ml_optimize__maybe_flatten_block_2_p_0(ml_backend__ml_optimize__Statements2_41, &ml_backend__ml_optimize__Statements3_42);
          }
          {
            ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Statements3_42, &ml_backend__ml_optimize__Statements_43);
          }
          {
            ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_40));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_43));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Statement0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Statement_47;

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Statement0_46, &ml_backend__ml_optimize__Statement_47);
          }
          {
            ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_44));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_45));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_47));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Then0_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Then_50;
          MR_Word ml_backend__ml_optimize__MaybeElse_51;
          MR_Word ml_backend__ml_optimize__Rval_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)));

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Then0_48, &ml_backend__ml_optimize__Then_50);
          }
          {
            ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__MaybeElse0_49, &ml_backend__ml_optimize__MaybeElse_51);
          }
          {
            ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_69));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_50));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_51));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_53_75;
              MR_Word ml_backend__ml_optimize__Type_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Range_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Cases_56;
              MR_Word ml_backend__ml_optimize__Default_57;
              MR_Word ml_backend__ml_optimize__Var_68;
              MR_Word ml_backend__ml_optimize__Rval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_case_3_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 3) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19));
              }
              ml_backend__ml_optimize__TypeCtorInfo_53_75 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_53_75, ml_backend__ml_optimize__TypeCtorInfo_53_75, ml_backend__ml_optimize__Var_68, ml_backend__ml_optimize__Cases0_54, &ml_backend__ml_optimize__Cases_56);
              }
              {
                ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Default0_55, &ml_backend__ml_optimize__Default_57);
              }
              {
                ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_52));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_70));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_53));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_56));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_57));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            ml_backend__ml_optimize__Stmt_18 = ml_backend__ml_optimize__Stmt0_16;
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Stmt0_16, &ml_backend__ml_optimize__Stmt_18);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Ref_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__TryGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__HandlerGoal0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__TryGoal_61;
              MR_Word ml_backend__ml_optimize__HandlerGoal_62;

              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__TryGoal0_59, &ml_backend__ml_optimize__TryGoal_61);
              }
              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__HandlerGoal0_60, &ml_backend__ml_optimize__HandlerGoal_62);
              }
              {
                ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_58));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_61));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_62));
              }
            }
            break;
        }
        break;
    }
    {
      ml_backend__ml_optimize__Statement_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__FirstCond_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterConds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Case_6;

    {
      ml_backend__ml_optimize__optimize_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Case_6);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Case_6));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_optimize__wrapper_arg_2;
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_Statements_4;

    {
      ml_backend__ml_optimize__conv0_Statements_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Statements_4));
    return ml_backend__ml_optimize__wrapper_arg_2;
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
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_92;
          MR_Word ml_backend__ml_optimize__Defns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Statements0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Defns1_16;
          MR_Word ml_backend__ml_optimize__Statements1_17;
          MR_Word ml_backend__ml_optimize__Defns_18;
          MR_Word ml_backend__ml_optimize__Statements2_19;
          MR_Word ml_backend__ml_optimize__Statements3_20;
          MR_Word ml_backend__ml_optimize__Statements_21;
          MR_Word ml_backend__ml_optimize__Globals_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__OptInit_62;
          MR_Word ml_backend__ml_optimize__EliminateLocalVars_77;
          MR_Word ml_backend__ml_optimize__Var_78;
          MR_Word ml_backend__ml_optimize__Var_90;
          MR_Word ml_backend__ml_optimize__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__Var_82;
          MR_Word ml_backend__ml_optimize__Var_83;
          MR_Word ml_backend__ml_optimize__Var_84;
          MR_Word ml_backend__ml_optimize__Var_85;

          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_61, (MR_Integer) 463, &ml_backend__ml_optimize__OptInit_62);
          }
          switch (ml_backend__ml_optimize__OptInit_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__Defns1_16 = ml_backend__ml_optimize__Defns0_14;
                ml_backend__ml_optimize__Statements1_17 = ml_backend__ml_optimize__Statements0_15;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns0_14, &ml_backend__ml_optimize__Defns1_16, ml_backend__ml_optimize__Statements0_15, &ml_backend__ml_optimize__Statements1_17);
              }
              break;
          }
          ml_backend__ml_optimize__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          ml_backend__ml_optimize__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          ml_backend__ml_optimize__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          ml_backend__ml_optimize__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          ml_backend__ml_optimize__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Var_78, (MR_Integer) 464, &ml_backend__ml_optimize__EliminateLocalVars_77);
          }
          switch (ml_backend__ml_optimize__EliminateLocalVars_77) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__Defns_18 = ml_backend__ml_optimize__Defns1_16;
                ml_backend__ml_optimize__Statements2_19 = ml_backend__ml_optimize__Statements1_17;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns1_16, &ml_backend__ml_optimize__Defns_18, ml_backend__ml_optimize__Statements1_17, &ml_backend__ml_optimize__Statements2_19);
              }
              break;
          }
          ml_backend__ml_optimize__TypeCtorInfo_9_92 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          {
            ml_backend__ml_optimize__Var_90 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_92, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_5[0], ml_backend__ml_optimize__Statements2_19);
          }
          {
            ml_backend__ml_optimize__Statements3_20 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_92, ml_backend__ml_optimize__Var_90);
          }
          {
            ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statements3_20, &ml_backend__ml_optimize__Statements_21);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_18));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_21));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Statement0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Statement_25;

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statement0_24, &ml_backend__ml_optimize__Statement_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_23));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_25));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Then_28;
          MR_Word ml_backend__ml_optimize__MaybeElse_29;
          MR_Word ml_backend__ml_optimize__Rval_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Then0_26, &ml_backend__ml_optimize__Then_28);
          }
          {
            ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__MaybeElse0_27, &ml_backend__ml_optimize__MaybeElse_29);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_47));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_28));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_29));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_53_53;
              MR_Word ml_backend__ml_optimize__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Range_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Cases_34;
              MR_Word ml_backend__ml_optimize__Default_35;
              MR_Word ml_backend__ml_optimize__Var_46;
              MR_Word ml_backend__ml_optimize__Rval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_46, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
              }
              ml_backend__ml_optimize__TypeCtorInfo_53_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_53_53, ml_backend__ml_optimize__TypeCtorInfo_53_53, ml_backend__ml_optimize__Var_46, ml_backend__ml_optimize__Cases0_32, &ml_backend__ml_optimize__Cases_34);
              }
              {
                ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Default0_33, &ml_backend__ml_optimize__Default_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_48));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_31));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_34));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_35));
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
              MR_Word ml_backend__ml_optimize__TryGoal0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__HandlerGoal0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__TryGoal_39;
              MR_Word ml_backend__ml_optimize__HandlerGoal_40;

              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__TryGoal0_37, &ml_backend__ml_optimize__TryGoal_39);
              }
              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__HandlerGoal0_38, &ml_backend__ml_optimize__HandlerGoal_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_36));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_39));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_40));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statement_3_p_0_1(
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
ml_backend__ml_optimize__optimize_in_statement_3_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statement_11)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Stmt0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt_8;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12;
    MR_Word ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 4)));

    {
      ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_7));
    }
    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__Defns0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Statements0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Defns1_31;
          MR_Word ml_backend__ml_optimize__Statements1_32;
          MR_Word ml_backend__ml_optimize__Defns_33;
          MR_Word ml_backend__ml_optimize__Statements2_34;
          MR_Word ml_backend__ml_optimize__Statements3_35;
          MR_Word ml_backend__ml_optimize__Statements_36;

          {
            ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Defns0_29, &ml_backend__ml_optimize__Defns1_31, ml_backend__ml_optimize__Statements0_30, &ml_backend__ml_optimize__Statements1_32);
          }
          {
            ml_backend__ml_optimize__maybe_eliminate_locals_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Defns1_31, &ml_backend__ml_optimize__Defns_33, ml_backend__ml_optimize__Statements1_32, &ml_backend__ml_optimize__Statements2_34);
          }
          {
            ml_backend__ml_optimize__maybe_flatten_block_2_p_0(ml_backend__ml_optimize__Statements2_34, &ml_backend__ml_optimize__Statements3_35);
          }
          {
            ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Statements3_35, &ml_backend__ml_optimize__Statements_36);
          }
          {
            ml_backend__ml_optimize__Stmt_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_33));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_36));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Statement0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Statement_40;

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Statement0_39, &ml_backend__ml_optimize__Statement_40);
          }
          {
            ml_backend__ml_optimize__Stmt_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_37));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_38));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_8, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_40));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Then_43;
          MR_Word ml_backend__ml_optimize__MaybeElse_44;
          MR_Word ml_backend__ml_optimize__Rval_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 0)));

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Then0_41, &ml_backend__ml_optimize__Then_43);
          }
          {
            ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__MaybeElse0_42, &ml_backend__ml_optimize__MaybeElse_44);
          }
          {
            ml_backend__ml_optimize__Stmt_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_62));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_43));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_8, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_44));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_53_68;
              MR_Word ml_backend__ml_optimize__Type_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Range_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Cases_49;
              MR_Word ml_backend__ml_optimize__Default_50;
              MR_Word ml_backend__ml_optimize__Var_61;
              MR_Word ml_backend__ml_optimize__Rval_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_61, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_61, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_statement_3_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_61, 3) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12));
              }
              ml_backend__ml_optimize__TypeCtorInfo_53_68 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_53_68, ml_backend__ml_optimize__TypeCtorInfo_53_68, ml_backend__ml_optimize__Var_61, ml_backend__ml_optimize__Cases0_47, &ml_backend__ml_optimize__Cases_49);
              }
              {
                ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Default0_48, &ml_backend__ml_optimize__Default_50);
              }
              {
                ml_backend__ml_optimize__Stmt_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_45));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_63));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_46));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_49));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_50));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            ml_backend__ml_optimize__Stmt_8 = ml_backend__ml_optimize__Stmt0_6;
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Stmt0_6, &ml_backend__ml_optimize__Stmt_8);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Ref_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__TryGoal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__HandlerGoal0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_6, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__TryGoal_54;
              MR_Word ml_backend__ml_optimize__HandlerGoal_55;

              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__TryGoal0_52, &ml_backend__ml_optimize__TryGoal_54);
              }
              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__HandlerGoal0_53, &ml_backend__ml_optimize__HandlerGoal_55);
              }
              {
                ml_backend__ml_optimize__Stmt_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_51));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_54));
                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_8, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_55));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__STATE_VARIABLE_Statement_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_7));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_Statement_11;

    {
      ml_backend__ml_optimize__optimize_in_statement_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_Statement_11);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_Statement_11));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_9)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_20_20;
    MR_Word ml_backend__ml_optimize__Globals_6;
    MR_Word ml_backend__ml_optimize__OptPeep_7;
    MR_Word ml_backend__ml_optimize__Var_10;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11;
    MR_Word ml_backend__ml_optimize__Var_14;
    MR_Word ml_backend__ml_optimize__Var_15;
    MR_Word ml_backend__ml_optimize__Var_16;
    MR_Word ml_backend__ml_optimize__Var_17;

    {
      ml_backend__ml_optimize__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_statements_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_10, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_20_20 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    {
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_20_20, ml_backend__ml_optimize__TypeCtorInfo_20_20, ml_backend__ml_optimize__Var_10, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11);
    }
    ml_backend__ml_optimize__Globals_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    ml_backend__ml_optimize__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    ml_backend__ml_optimize__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    ml_backend__ml_optimize__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    ml_backend__ml_optimize__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_6, (MR_Integer) 469, &ml_backend__ml_optimize__OptPeep_7);
    }
    switch (ml_backend__ml_optimize__OptPeep_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_optimize__STATE_VARIABLE_Statements_9 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11;
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11, ml_backend__ml_optimize__STATE_VARIABLE_Statements_9);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9 = ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8;
    else
      {
        MR_Word ml_backend__ml_optimize__Statement0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Statement_7;
        MR_Word ml_backend__ml_optimize__Stmt0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_6, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_6, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Stmt_18;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19;
        MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

        {
          ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_21));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_23));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_24));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        {
          ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Stmt0_16, &ml_backend__ml_optimize__Stmt_18);
        }
        {
          ml_backend__ml_optimize__Statement_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_7, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_18));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_7, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_7));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_body_3_p_0_1(
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
ml_backend__ml_optimize__optimize_in_function_body_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Body_0_8,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Body_9)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    if ((ml_backend__ml_optimize__STATE_VARIABLE_Body_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__STATE_VARIABLE_Body_9 = ml_backend__ml_optimize__STATE_VARIABLE_Body_0_8;
    else
      {
        MR_Word ml_backend__ml_optimize__Statement0_6 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__STATE_VARIABLE_Body_0_8), (MR_Integer) 1);
        MR_Word ml_backend__ml_optimize__Statement_7;
        MR_Word ml_backend__ml_optimize__Stmt0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_6, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_6, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Stmt_18;
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19;
        MR_Word ml_backend__ml_optimize__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

        {
          ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Var_21));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Var_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 2) = ((MR_Box) (ml_backend__ml_optimize__Var_23));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 3) = ((MR_Box) (ml_backend__ml_optimize__Var_24));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__Defns0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Statements0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Defns1_38;
              MR_Word ml_backend__ml_optimize__Statements1_39;
              MR_Word ml_backend__ml_optimize__Defns_40;
              MR_Word ml_backend__ml_optimize__Statements2_41;
              MR_Word ml_backend__ml_optimize__Statements3_42;
              MR_Word ml_backend__ml_optimize__Statements_43;

              {
                ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Defns0_36, &ml_backend__ml_optimize__Defns1_38, ml_backend__ml_optimize__Statements0_37, &ml_backend__ml_optimize__Statements1_39);
              }
              {
                ml_backend__ml_optimize__maybe_eliminate_locals_5_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Defns1_38, &ml_backend__ml_optimize__Defns_40, ml_backend__ml_optimize__Statements1_39, &ml_backend__ml_optimize__Statements2_41);
              }
              {
                ml_backend__ml_optimize__maybe_flatten_block_2_p_0(ml_backend__ml_optimize__Statements2_41, &ml_backend__ml_optimize__Statements3_42);
              }
              {
                ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Statements3_42, &ml_backend__ml_optimize__Statements_43);
              }
              {
                ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_40));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_43));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_optimize__Kind_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Rval_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Statement0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Statement_47;

              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Statement0_46, &ml_backend__ml_optimize__Statement_47);
              }
              {
                ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_44));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_45));
                MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_47));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Then0_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__MaybeElse0_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Then_50;
              MR_Word ml_backend__ml_optimize__MaybeElse_51;
              MR_Word ml_backend__ml_optimize__Rval_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)));

              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Then0_48, &ml_backend__ml_optimize__Then_50);
              }
              {
                ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__MaybeElse0_49, &ml_backend__ml_optimize__MaybeElse_51);
              }
              {
                ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_69));
                MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_50));
                MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_51));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_optimize__TypeCtorInfo_53_75;
                  MR_Word ml_backend__ml_optimize__Type_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_optimize__Range_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_optimize__Default0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_optimize__Cases_56;
                  MR_Word ml_backend__ml_optimize__Default_57;
                  MR_Word ml_backend__ml_optimize__Var_68;
                  MR_Word ml_backend__ml_optimize__Rval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));

                  {
                    ml_backend__ml_optimize__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_function_body_3_p_0_1));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_68, 3) = ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19));
                  }
                  ml_backend__ml_optimize__TypeCtorInfo_53_75 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
                  {
                    mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_53_75, ml_backend__ml_optimize__TypeCtorInfo_53_75, ml_backend__ml_optimize__Var_68, ml_backend__ml_optimize__Cases0_54, &ml_backend__ml_optimize__Cases_56);
                  }
                  {
                    ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Default0_55, &ml_backend__ml_optimize__Default_57);
                  }
                  {
                    ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_52));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_70));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_53));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_56));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_57));
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 5:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                ml_backend__ml_optimize__Stmt_18 = ml_backend__ml_optimize__Stmt0_16;
                break;
              case (MR_Integer) 4:
                {
                  ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Stmt0_16, &ml_backend__ml_optimize__Stmt_18);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_optimize__Ref_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_optimize__TryGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__HandlerGoal0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_16, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize__TryGoal_61;
                  MR_Word ml_backend__ml_optimize__HandlerGoal_62;

                  {
                    ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__TryGoal0_59, &ml_backend__ml_optimize__TryGoal_61);
                  }
                  {
                    ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__HandlerGoal0_60, &ml_backend__ml_optimize__HandlerGoal_62);
                  }
                  {
                    ml_backend__ml_optimize__Stmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_58));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_61));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_18, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_62));
                  }
                }
                break;
            }
            break;
        }
        {
          ml_backend__ml_optimize__Statement_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_7, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_18));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_7, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        *ml_backend__ml_optimize__STATE_VARIABLE_Body_9 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_7);
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
            ml_backend__ml_optimize__OptInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 0) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 1) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 2) = ((MR_Box) (ml_backend__ml_optimize__Name_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 3) = ((MR_Box) (ml_backend__ml_optimize__Params_15));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_20, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_12));
          }
          {
            ml_backend__ml_optimize__optimize_func_3_p_0(ml_backend__ml_optimize__OptInfo_20, ml_backend__ml_optimize__FuncBody0_16, &ml_backend__ml_optimize__FuncBody1_21);
          }
          {
            ml_backend__ml_optimize__optimize_in_function_body_3_p_0(ml_backend__ml_optimize__OptInfo_20, ml_backend__ml_optimize__FuncBody1_21, &ml_backend__ml_optimize__FuncBody_22);
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
