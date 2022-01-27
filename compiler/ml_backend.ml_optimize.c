/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26;
};

struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s {
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4;
  MR_bool ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14;
  jmp_buf ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallStmt_16;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_18;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__EntityName_19;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_27_27;
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_28_28;
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
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__883__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_11,
  MR_Word ml_backend__ml_optimize__Qualifier_15,
  MR_Word ml_backend__ml_optimize__QualKind_16,
  MR_Word ml_backend__ml_optimize__ThisData_18,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__881__1_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_42,
  MR_Word ml_backend__ml_optimize__HeadVar__2_56);

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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);

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
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

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
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_body_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__Defn0_5,
  MR_Word * ml_backend__ml_optimize__Defn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_25,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statement_4_p_0(
  MR_Word ml_backend__ml_optimize__Var_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__Statement0_7,
  MR_Word * ml_backend__ml_optimize__Statement_8);

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
  MR_Word ml_backend__ml_optimize__HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__ml_optimize__try_to_eliminate_defn_6_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_7,
  MR_Word ml_backend__ml_optimize__Defn0_8,
  MR_Word ml_backend__ml_optimize__Defns0_9,
  MR_Word * ml_backend__ml_optimize__Defns_10,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_26);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_5);

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
ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lval_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_16);

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

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Stmt0_5,
  MR_Word * ml_backend__ml_optimize__Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_4,
  MR_Word ml_backend__ml_optimize__Default0_5,
  MR_Word * ml_backend__ml_optimize__Default_6);

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

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[3][5];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[12][3];

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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
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

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[3][5] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[7])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[8])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
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
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[5] = {
  (MR_String) "oi_globals",
  (MR_String) "oi_module_name",
  (MR_String) "oi_entity_name",
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
  (MR_Integer) 16,
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
  (MR_Integer) 16,
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
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__883__1_5_p_0(
  MR_Word ml_backend__ml_optimize__RHS_11,
  MR_Word ml_backend__ml_optimize__Qualifier_15,
  MR_Word ml_backend__ml_optimize__QualKind_16,
  MR_Word ml_backend__ml_optimize__ThisData_18,
  MR_Word ml_backend__ml_optimize__LambdaHeadVar__1_43)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__OtherVarName_23;
    MR_Word ml_backend__ml_optimize__OtherInitializer_27;
    MR_Word ml_backend__ml_optimize__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__LambdaHeadVar__1_43, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize___Type_26;
    MR_Word ml_backend__ml_optimize___GC_28;

    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_44_44)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__OtherVarName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_44_44, (MR_Integer) 0)));
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_45_45)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize___Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, (MR_Integer) 0)));
            ml_backend__ml_optimize__OtherInitializer_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, (MR_Integer) 1)));
            ml_backend__ml_optimize___GC_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, (MR_Integer) 2)));
            {
              MR_Word ml_backend__ml_optimize__QualOtherVar_29;
              MR_Word ml_backend__ml_optimize__V_47_47;

              {
                ml_backend__ml_optimize__QualOtherVar_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_29, 2) = ((MR_Box) (ml_backend__ml_optimize__OtherVarName_23));
              }
              {
                ml_backend__ml_optimize__V_47_47 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__QualOtherVar_29);
              }
              ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_47_47 == (MR_Integer) 1);
            }
            if (!(ml_backend__ml_optimize__succeeded))
              {
                MR_Word ml_backend__ml_optimize__V_46_46;

                {
                  ml_backend__ml_optimize__V_46_46 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_optimize__OtherInitializer_27, ml_backend__ml_optimize__ThisData_18);
                }
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_46_46 == (MR_Integer) 1);
              }
          }
      }
    return ml_backend__ml_optimize__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__881__1_2_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_42,
  MR_Word ml_backend__ml_optimize__HeadVar__2_56)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    {
      ml_backend__ml_optimize__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_optimize__HeadVar__1_42, ((MR_Box) (ml_backend__ml_optimize__HeadVar__2_56)));
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
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_optimize__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_optimize__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_12_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], &ml_backend__ml_optimize__V_12_12, ((MR_Box) (ml_backend__ml_optimize__V_4_4)), ((MR_Box) (ml_backend__ml_optimize__V_8_8)));
        }
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_12_12 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_12_12;
        else
          {
            MR_Word ml_backend__ml_optimize__V_13_13;

            {
              ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_optimize__V_13_13, ml_backend__ml_optimize__V_5_5, ml_backend__ml_optimize__V_9_9);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_13_13 == (MR_Integer) 0);
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
            if (ml_backend__ml_optimize__succeeded)
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_13_13;
            else
              {
                MR_Word ml_backend__ml_optimize__V_14_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_optimize__V_14_14, ml_backend__ml_optimize__V_6_6, ml_backend__ml_optimize__V_10_10);
                }
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_14_14 == (MR_Integer) 0);
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                if (ml_backend__ml_optimize__succeeded)
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_14_14;
                else
                  {
                    MR_Integer ml_backend__ml_optimize__V_21_21 = (MR_Integer) ml_backend__ml_optimize__V_7_7;
                    MR_Integer ml_backend__ml_optimize__V_22_22 = (MR_Integer) ml_backend__ml_optimize__V_11_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__V_21_21, ml_backend__ml_optimize__V_22_22);
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
        MR_Word ml_backend__ml_optimize__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_optimize__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_optimize__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], ((MR_Box) (ml_backend__ml_optimize__V_3_3)), ((MR_Box) (ml_backend__ml_optimize__V_7_7)));
        }
        if (ml_backend__ml_optimize__succeeded)
          {
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__V_4_4, ml_backend__ml_optimize__V_8_8);
            }
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_5_5 == ml_backend__ml_optimize__V_9_9);
                if (ml_backend__ml_optimize__succeeded)
                  ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_6_6 == ml_backend__ml_optimize__V_10_10);
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
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__V_14_14;

        {
          libs__globals____Compare____globals_0_0(&ml_backend__ml_optimize__V_14_14, ml_backend__ml_optimize__V_4_4, ml_backend__ml_optimize__V_9_9);
        }
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_14_14 == (MR_Integer) 0);
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
        if (ml_backend__ml_optimize__succeeded)
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_14_14;
        else
          {
            MR_Word ml_backend__ml_optimize__V_15_15;

            {
              ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_optimize__V_15_15, ml_backend__ml_optimize__V_5_5, ml_backend__ml_optimize__V_10_10);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_15_15 == (MR_Integer) 0);
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
            if (ml_backend__ml_optimize__succeeded)
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_15_15;
            else
              {
                MR_Word ml_backend__ml_optimize__V_16_16;

                {
                  ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_optimize__V_16_16, ml_backend__ml_optimize__V_6_6, ml_backend__ml_optimize__V_11_11);
                }
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_16_16 == (MR_Integer) 0);
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                if (ml_backend__ml_optimize__succeeded)
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_16_16;
                else
                  {
                    MR_Word ml_backend__ml_optimize__V_17_17;

                    {
                      ml_backend__mlds____Compare____mlds_func_params_0_0(&ml_backend__ml_optimize__V_17_17, ml_backend__ml_optimize__V_7_7, ml_backend__ml_optimize__V_12_12);
                    }
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_17_17 == (MR_Integer) 0);
                    ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
                    if (ml_backend__ml_optimize__succeeded)
                      *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_17_17;
                    else
                      {
                        ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__V_8_8, ml_backend__ml_optimize__V_13_13);
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
        MR_Word ml_backend__ml_optimize__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 4)));

        {
          ml_backend__ml_optimize__succeeded = libs__globals____Unify____globals_0_0(ml_backend__ml_optimize__V_3_3, ml_backend__ml_optimize__V_8_8);
        }
        if (ml_backend__ml_optimize__succeeded)
          {
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__V_4_4, ml_backend__ml_optimize__V_9_9);
            }
            if (ml_backend__ml_optimize__succeeded)
              {
                {
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_optimize__V_5_5, ml_backend__ml_optimize__V_10_10);
                }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    {
                      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__ml_optimize__V_6_6, ml_backend__ml_optimize__V_11_11);
                    }
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_optimize__V_7_7, ml_backend__ml_optimize__V_12_12);
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
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_79, ml_backend__ml_optimize__TypeCtorInfo_18_79, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[10], ml_backend__ml_optimize__Args0_19, &ml_backend__ml_optimize__Args_24, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
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
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_64_64, ml_backend__ml_optimize__TypeCtorInfo_64_64, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[9], ml_backend__ml_optimize__Components0_28, &ml_backend__ml_optimize__Components_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
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
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_94, ml_backend__ml_optimize__TypeCtorInfo_18_94, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[11], ml_backend__ml_optimize__Lvals0_31, &ml_backend__ml_optimize__Lvals_33, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
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
          MR_Word ml_backend__ml_optimize__Stmt0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Stmt_20;

          {
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_18, &ml_backend__ml_optimize__Stmt_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);
          }
          {
            ml_backend__ml_optimize__Statement_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_9, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_20));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_9, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_19));
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
    MR_Word ml_backend__ml_optimize__Stmt0_31;
    MR_Word ml_backend__ml_optimize__Context_32;
    MR_Word ml_backend__ml_optimize__Stmt_33;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18;

    {
      ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(ml_backend__ml_optimize__FirstCond0_8, &ml_backend__ml_optimize__FirstCond_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
    }
    ml_backend__ml_optimize__TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_24_24, ml_backend__ml_optimize__TypeCtorInfo_24_24, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[8], ml_backend__ml_optimize__LaterConds0_9, &ml_backend__ml_optimize__LaterConds_12, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    }
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    ml_backend__ml_optimize__Stmt0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_10, (MR_Integer) 0)));
    ml_backend__ml_optimize__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_10, (MR_Integer) 1)));
    {
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_31, &ml_backend__ml_optimize__Stmt_33, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    }
    {
      ml_backend__ml_optimize__Statement_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_13, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_33));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_13, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_32));
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
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53)
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
            ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(ml_backend__ml_optimize__Defns0_8, &ml_backend__ml_optimize__Defns_10, ml_backend__ml_optimize__Statements0_9, &ml_backend__ml_optimize__Statements_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
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
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_13, &ml_backend__ml_optimize__Rval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_14, &ml_backend__ml_optimize__Statement_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
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
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70;

          {
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Cond0_17, &ml_backend__ml_optimize__Cond_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Then0_18, &ml_backend__ml_optimize__Then_21, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70);
          }
          {
            ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(ml_backend__ml_optimize__MaybeElse0_19, &ml_backend__ml_optimize__MaybeElse_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
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
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_85_85;
              MR_Word ml_backend__ml_optimize__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Val0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Val_28;
              MR_Word ml_backend__ml_optimize__Cases_29;
              MR_Word ml_backend__ml_optimize__Default_30;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_67_67;
              MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_67_67;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Val0_24, &ml_backend__ml_optimize__Val_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65);
              }
              ml_backend__ml_optimize__TypeCtorInfo_85_85 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_85_85, ml_backend__ml_optimize__TypeCtorInfo_85_85, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[7], ml_backend__ml_optimize__Cases0_26, &ml_backend__ml_optimize__Cases_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_67_67);
              }
              ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_67_67 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_67_67);
              {
                ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(ml_backend__ml_optimize__Default0_27, &ml_backend__ml_optimize__Default_30, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_67_67, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
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
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52;
            }
            break;
          case (MR_Integer) 2:
            {
              *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_optimize__Labels_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Rval0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rval_76;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_75, &ml_backend__ml_optimize__Rval_76, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_76));
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
              MR_Word ml_backend__ml_optimize__Func_40;
              MR_Word ml_backend__ml_optimize__Obj_41;
              MR_Word ml_backend__ml_optimize__Args_42;
              MR_Word ml_backend__ml_optimize__RetLvals_43;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Func0_35, &ml_backend__ml_optimize__Func_40, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60);
              }
              if ((ml_backend__ml_optimize__Obj0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ml_backend__ml_optimize__Obj_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60;
                }
              else
                {
                  MR_Word ml_backend__ml_optimize__Rval0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Obj0_36, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_optimize__Rval_91;

                  {
                    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_90, &ml_backend__ml_optimize__Rval_91, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61);
                  }
                  {
                    ml_backend__ml_optimize__Obj_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Obj_41, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_91));
                  }
                }
              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Args0_37, &ml_backend__ml_optimize__Args_42, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(ml_backend__ml_optimize__RetLvals0_38, &ml_backend__ml_optimize__RetLvals_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Sig_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Func_40));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Obj_41));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Args_42));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__RetLvals_43));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__TailCall_39));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_optimize__Rvals0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Rvals_45;

              {
                ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Rvals0_44, &ml_backend__ml_optimize__Rvals_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rvals_45));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_optimize__Handler0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Handler_49;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_55_55;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56;
              MR_Word ml_backend__ml_optimize__Statement0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Statement_78;
              MR_Word ml_backend__ml_optimize__Ref0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_80;

              {
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Ref0_79, &ml_backend__ml_optimize__Ref_80, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_55_55);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_77, &ml_backend__ml_optimize__Statement_78, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_55_55, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56);
              }
              {
                ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Handler0_48, &ml_backend__ml_optimize__Handler_49, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_80));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_78));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Handler_49));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_optimize__Ref0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Ref_47;

              {
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Ref0_46, &ml_backend__ml_optimize__Ref_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_47));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_optimize__AtomicStmt0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__AtomicStmt_51;

              {
                ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(ml_backend__ml_optimize__AtomicStmt0_50, &ml_backend__ml_optimize__AtomicStmt_51, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_51));
              }
            }
            break;
        }
        break;
    }
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

    {
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
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

        {
          ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_8, &ml_backend__ml_optimize__Statement_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
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
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Statement_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_12;

    {
      ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Statement_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_12);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Statement_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_12));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[6], ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Statements_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
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
          MR_Word ml_backend__ml_optimize__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_optimize__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 3)));

          {
            ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], ((MR_Box) (ml_backend__ml_optimize__VarName_16)), ((MR_Box) (ml_backend__ml_optimize__V_33_33)));
          }
          if (ml_backend__ml_optimize__succeeded)
            {
              MR_Word ml_backend__ml_optimize__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 3)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_29_29));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__V_30_30));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__V_31_31));
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
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[5], ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
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
          MR_Word ml_backend__ml_optimize__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_optimize__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__TypeInfo_58_58;
          MR_Word ml_backend__ml_optimize__V_57_57;
          MR_Word ml_backend__ml_optimize__V_10_10;

          ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_8)) == (MR_mktag((MR_Integer) 3)));
          if (ml_backend__ml_optimize__succeeded)
            {
              ml_backend__ml_optimize__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 0)));
              ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 1)));
              ml_backend__ml_optimize__TypeInfo_58_58 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
              {
                ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_58_58, ((MR_Box) (ml_backend__ml_optimize__VarName_9)), ((MR_Box) (ml_backend__ml_optimize__V_57_57)));
              }
            }
          if (ml_backend__ml_optimize__succeeded)
            {
              MR_Integer ml_backend__ml_optimize__Count0_11;
              MR_Integer ml_backend__ml_optimize__V_36_36;
              MR_Word ml_backend__ml_optimize__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__V_49_49;

              *ml_backend__ml_optimize__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 1)));
              ml_backend__ml_optimize__Count0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 2)));
              ml_backend__ml_optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 3)));
              ml_backend__ml_optimize__V_36_36 = (ml_backend__ml_optimize__Count0_11 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_47_47));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*ml_backend__ml_optimize__Rval_6));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__V_36_36));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
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
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[4], ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
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
    MR_Word ml_backend__ml_optimize__conv4_HeadVar__2_2;
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_4;

    {
      ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_HeadVar__2_2, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_4);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_HeadVar__2_2));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_4));
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
    MR_Word ml_backend__ml_optimize__conv1_HeadVar__2_2;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_4;

    {
      ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_HeadVar__2_2, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_4);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_HeadVar__2_2));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_4));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
        }
        break;
      case (MR_Integer) 1:
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
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_39_39 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
          MR_Word ml_backend__ml_optimize__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Members0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Members_23;
          MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_4;

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_39_39, ml_backend__ml_optimize__TypeCtorInfo_39_39, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[3], ml_backend__ml_optimize__Members0_22, &ml_backend__ml_optimize__Members_23, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_4);
          }
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_4);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_21));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Members_23));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_33_33 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
          MR_Word ml_backend__ml_optimize__Elements0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Elements_15;
          MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_4;

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_33_33, ml_backend__ml_optimize__TypeCtorInfo_33_33, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[2], ml_backend__ml_optimize__Elements0_14, &ml_backend__ml_optimize__Elements_15, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_4);
          }
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_4);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Elements_15));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_body_4_p_0(
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
        MR_Word ml_backend__ml_optimize__Stmt0_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__HeadVar__1_1), (MR_Integer) 1);
        MR_Word ml_backend__ml_optimize__Stmt_9;

        {
          ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
        }
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Stmt_9);
      }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
  MR_Word ml_backend__ml_optimize__Defn0_5,
  MR_Word * ml_backend__ml_optimize__Defn_6,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_25,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__DefnBody0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__DefnBody_16;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_optimize__DefnBody_16 = ml_backend__ml_optimize__DefnBody0_11;
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Initializer0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__GCStatement_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Initializer_15;

          {
            ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(ml_backend__ml_optimize__Initializer0_13, &ml_backend__ml_optimize__Initializer_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_25, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26);
          }
          {
            ml_backend__ml_optimize__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_12));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Initializer_15));
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_16, 2) = ((MR_Box) (ml_backend__ml_optimize__GCStatement_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Id_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Params_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Body0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__EnvVarNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__MaybeRequireTailrecInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__Body_24;

          {
            ml_backend__ml_optimize__eliminate_var_in_function_body_4_p_0(ml_backend__ml_optimize__Body0_20, &ml_backend__ml_optimize__Body_24, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_25, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_26);
          }
          {
            ml_backend__ml_optimize__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Id_18));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Params_19));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 2) = ((MR_Box) (ml_backend__ml_optimize__Body_24));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 3) = ((MR_Box) (ml_backend__ml_optimize__Attributes_21));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 4) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_22));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 5) = ((MR_Box) (ml_backend__ml_optimize__MaybeRequireTailrecInfo_23));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__Defn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_16));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0_1(
  MR_Box ml_backend__ml_optimize__closure_arg,
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
    MR_Word ml_backend__ml_optimize__conv1_Defn_6;
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_26;

    {
      ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Defn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_26);
    }
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Defn_6));
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_26));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_7,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_8,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[1], ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Defns_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
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
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17;

    {
      ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10, ml_backend__ml_optimize__STATE_VARIABLE_Defns_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17);
    }
    {
      ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12, ml_backend__ml_optimize__STATE_VARIABLE_Statements_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statement_4_p_0(
  MR_Word ml_backend__ml_optimize__Var_5,
  MR_Word * ml_backend__ml_optimize__Rval_6,
  MR_Word ml_backend__ml_optimize__Statement0_7,
  MR_Word * ml_backend__ml_optimize__Statement_8)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Stmt_13;
    MR_Word ml_backend__ml_optimize__Rval0_12;
    MR_Word ml_backend__ml_optimize__TypeInfo_28_28;
    MR_Word ml_backend__ml_optimize__V_21_21;
    MR_Word ml_backend__ml_optimize__V_22_22;
    MR_Word ml_backend__ml_optimize__V_27_27;
    MR_Word ml_backend__ml_optimize___Type_11;

    ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 1)));
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_21_21)) == (MR_mktag((MR_Integer) 2)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_21_21, (MR_Integer) 0)));
            ml_backend__ml_optimize__Rval0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_21_21, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_22_22)) == (MR_mktag((MR_Integer) 3)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_22_22, (MR_Integer) 0)));
                ml_backend__ml_optimize___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_22_22, (MR_Integer) 1)));
                ml_backend__ml_optimize__TypeInfo_28_28 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
                {
                  ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_28_28, ((MR_Box) (ml_backend__ml_optimize__Var_5)), ((MR_Box) (ml_backend__ml_optimize__V_27_27)));
                }
              }
          }
      }
    if (ml_backend__ml_optimize__succeeded)
      {
        *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_12;
        ml_backend__ml_optimize__Stmt_13 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[7];
        ml_backend__ml_optimize__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ml_backend__ml_optimize__Defns0_14;
        MR_Word ml_backend__ml_optimize__SubStatements0_15;
        MR_Word ml_backend__ml_optimize__Mod_16;
        MR_Word ml_backend__ml_optimize__QualKind_17;
        MR_Word ml_backend__ml_optimize__UnqualVarName_18;
        MR_Word ml_backend__ml_optimize__Data_19;
        MR_Word ml_backend__ml_optimize__SubStatements_20;
        MR_Word ml_backend__ml_optimize__V_25_25;
        MR_Word ml_backend__ml_optimize__V_26_26;

        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_9)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__Defns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 0)));
            ml_backend__ml_optimize__SubStatements0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 1)));
            ml_backend__ml_optimize__Mod_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_5, (MR_Integer) 0)));
            ml_backend__ml_optimize__QualKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_5, (MR_Integer) 1)));
            ml_backend__ml_optimize__UnqualVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_5, (MR_Integer) 2)));
            ml_backend__ml_optimize__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__UnqualVarName_18);
            {
              ml_backend__ml_optimize__Data_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Mod_16));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_19, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_17));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_19, 2) = ((MR_Box) (ml_backend__ml_optimize__V_25_25));
            }
            {
              ml_backend__ml_optimize__V_26_26 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_optimize__Defns0_14, ml_backend__ml_optimize__Data_19);
            }
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_26_26 == (MR_Integer) 0);
            if (ml_backend__ml_optimize__succeeded)
              {
                {
                  ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__Var_5, ml_backend__ml_optimize__Rval_6, ml_backend__ml_optimize__SubStatements0_15, &ml_backend__ml_optimize__SubStatements_20);
                }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    {
                      ml_backend__ml_optimize__Stmt_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_13, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns0_14));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_13, 1) = ((MR_Box) (ml_backend__ml_optimize__SubStatements_20));
                    }
                    ml_backend__ml_optimize__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (ml_backend__ml_optimize__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_optimize__Statement_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
        }
        ml_backend__ml_optimize__succeeded = MR_TRUE;
      }
    return ml_backend__ml_optimize__succeeded;
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
      MR_Word ml_backend__ml_optimize__V_19_19;
      MR_String ml_backend__ml_optimize__V_18_18;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, (MR_Integer) 0)));
      ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, (MR_Integer) 1)));
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
        {
          ml_backend__ml_optimize__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26, (MR_Integer) 1)));
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

      (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
        {
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
          ml_backend__ml_optimize__Statements0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
          {
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_statement_4_p_0(ml_backend__ml_optimize__VarName_5, &ml_backend__ml_optimize__Rval1_10, (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, &ml_backend__ml_optimize__Statement1_11);
          }
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
            {
              MR_Word ml_backend__ml_optimize__V_21_21;
              MR_Word ml_backend__ml_optimize__V_22_22;
              MR_Word ml_backend__ml_optimize__V_23_23;
              MR_Word ml_backend__ml_optimize__V_12_12;

              *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval1_10;
              ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, (MR_Integer) 0)));
              ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, (MR_Integer) 1)));
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_21_21)) == (MR_mktag((MR_Integer) 0)));
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                {
                  ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_21_21, (MR_Integer) 0)));
                  ml_backend__ml_optimize__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_21_21, (MR_Integer) 1)));
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
                    (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_Word ml_backend__ml_optimize__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__UnqualVarName_15);
              MR_Word ml_backend__ml_optimize__V_25_25;

              {
                ml_backend__ml_optimize__DataName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Mod_13));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_14));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 2) = ((MR_Box) (ml_backend__ml_optimize__V_24_24));
              }
              {
                ml_backend__ml_optimize__V_25_25 = ml_backend__ml_util__statement_contains_var_2_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, ml_backend__ml_optimize__DataName_16);
              }
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__V_25_25 == (MR_Integer) 0);
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
  MR_Word ml_backend__ml_optimize__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) {
          default:
            ml_backend__ml_optimize__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize___Tag_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval_4;

                ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) {
              default:
                ml_backend__ml_optimize__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                ml_backend__ml_optimize__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
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
  MR_Word ml_backend__ml_optimize__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_optimize__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) {
          default:
            ml_backend__ml_optimize__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize___Tag_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval_4;

                ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) {
              default:
                ml_backend__ml_optimize__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                ml_backend__ml_optimize__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_optimize__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize___Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval_6;

                    ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_optimize__Rval1_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__Rval2_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize___Op_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__Rval1_8);
                  }
                  if (ml_backend__ml_optimize__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval2_9;

                        ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_optimize__V_22_22)) {
                    default:
                      ml_backend__ml_optimize__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_optimize__Address_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_optimize__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 4)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Address_17;

                          ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_optimize__Address_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_22_22, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_22_22, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Address_13;

                          ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
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
            }
            break;
        }
        return ml_backend__ml_optimize__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__try_to_eliminate_defn_6_p_0(
  MR_Word ml_backend__ml_optimize__OptInfo_7,
  MR_Word ml_backend__ml_optimize__Defn0_8,
  MR_Word ml_backend__ml_optimize__Defns0_9,
  MR_Word * ml_backend__ml_optimize__Defns_10,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_26)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__DefnBody_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__VarName_16;
    MR_Word ml_backend__ml_optimize__Initializer_18;
    MR_Word ml_backend__ml_optimize__QualVarName_20;
    MR_Word ml_backend__ml_optimize__Rval_21;
    MR_Integer ml_backend__ml_optimize__Count_23;
    MR_Word ml_backend__ml_optimize__Invalidated_24;
    MR_Word ml_backend__ml_optimize__V_27_27;
    MR_Word ml_backend__ml_optimize__V_28_28;
    MR_Word ml_backend__ml_optimize__V_29_29;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30;
    MR_Word ml_backend__ml_optimize__V_45_45;
    MR_Integer ml_backend__ml_optimize__Count0_57;
    MR_Word ml_backend__ml_optimize__Invalidated0_58;
    MR_Word ml_backend__ml_optimize__VarElimInfo0_59;
    MR_Word ml_backend__ml_optimize__VarElimInfo_60;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_79;
    MR_Word ml_backend__ml_optimize___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___Type_17;
    MR_Word ml_backend__ml_optimize___GCStatement_19;
    MR_Word ml_backend__ml_optimize__V_37_37;
    MR_Word ml_backend__ml_optimize__V_38_38;
    MR_Word ml_backend__ml_optimize__V_39_39;
    MR_Word ml_backend__ml_optimize__V_40_40;
    MR_Word ml_backend__ml_optimize__V_63_63;
    MR_Word ml_backend__ml_optimize__V_64_64;

    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_12)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Name_12, (MR_Integer) 0)));
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_27_27)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__VarName_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_27_27), (MR_Integer) 1);
            {
              ml_backend__ml_optimize__V_45_45 = ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_f_0();
            }
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_decl_flags_0_0(ml_backend__ml_optimize__Flags_14, ml_backend__ml_optimize__V_45_45);
            }
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody_15)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_15, (MR_Integer) 0)));
                    ml_backend__ml_optimize__Initializer_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_15, (MR_Integer) 1)));
                    ml_backend__ml_optimize___GCStatement_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_15, (MR_Integer) 2)));
                    ml_backend__ml_optimize__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 0)));
                    ml_backend__ml_optimize__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 1)));
                    ml_backend__ml_optimize__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 2)));
                    ml_backend__ml_optimize__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 3)));
                    ml_backend__ml_optimize__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 4)));
                    ml_backend__ml_optimize__V_29_29 = (MR_Integer) 0;
                    {
                      ml_backend__ml_optimize__QualVarName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 0) = ((MR_Box) (ml_backend__ml_optimize__V_28_28));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 1) = ((MR_Box) (ml_backend__ml_optimize__V_29_29));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_16));
                    }
                    if ((ml_backend__ml_optimize__Initializer_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__QualVarName_20, &ml_backend__ml_optimize__Rval_21, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30);
                      }
                    else
                    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Initializer_18)) == (MR_mktag((MR_Integer) 1))))
                      {
                        ml_backend__ml_optimize__Rval_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Initializer_18, (MR_Integer) 0)));
                        ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25;
                        ml_backend__ml_optimize__succeeded = MR_TRUE;
                      }
                    else
                      ml_backend__ml_optimize__succeeded = MR_FALSE;
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        {
                          ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__Rval_21);
                        }
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            {
                              ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_cannot_throw_1_p_0(ml_backend__ml_optimize__Rval_21);
                            }
                            if (!(ml_backend__ml_optimize__succeeded))
                              {
                                MR_Word ml_backend__ml_optimize__Globals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 0)));
                                MR_Word ml_backend__ml_optimize__V_33_33;
                                MR_Word ml_backend__ml_optimize__V_34_34;
                                MR_Word ml_backend__ml_optimize__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 1)));
                                MR_Word ml_backend__ml_optimize__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 2)));
                                MR_Word ml_backend__ml_optimize__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 3)));
                                MR_Word ml_backend__ml_optimize__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 4)));

                                {
                                  ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_22, (MR_Integer) 165, (MR_Integer) 1);
                                }
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__V_33_33 = (MR_Integer) 166;
                                    ml_backend__ml_optimize__V_34_34 = (MR_Integer) 1;
                                    {
                                      ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_22, ml_backend__ml_optimize__V_33_33, ml_backend__ml_optimize__V_34_34);
                                    }
                                  }
                              }
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__Count0_57 = (MR_Integer) 0;
                                ml_backend__ml_optimize__Invalidated0_58 = (MR_Integer) 0;
                                {
                                  ml_backend__ml_optimize__VarElimInfo0_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_20));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_21));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 2) = ((MR_Box) (ml_backend__ml_optimize__Count0_57));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 3) = ((MR_Box) (ml_backend__ml_optimize__Invalidated0_58));
                                }
                                {
                                  ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(ml_backend__ml_optimize__Defns0_9, ml_backend__ml_optimize__Defns_10, ml_backend__ml_optimize__VarElimInfo0_59, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_79);
                                }
                                {
                                  ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30, ml_backend__ml_optimize__STATE_VARIABLE_Statements_26, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_79, &ml_backend__ml_optimize__VarElimInfo_60);
                                }
                                ml_backend__ml_optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 0)));
                                ml_backend__ml_optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 1)));
                                ml_backend__ml_optimize__Count_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 2)));
                                ml_backend__ml_optimize__Invalidated_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 3)));
                                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Invalidated_24 == (MR_Integer) 0);
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Count_23 <= (MR_Integer) 1);
                                    if (!(ml_backend__ml_optimize__succeeded))
                                      switch (MR_tag((MR_Word) ml_backend__ml_optimize__Rval_21)) {
                                        default:
                                          ml_backend__ml_optimize__succeeded = MR_FALSE;
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Word ml_backend__ml_optimize__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)));
                                            MR_Word ml_backend__ml_optimize__V_84_84;
                                            MR_Word ml_backend__ml_optimize__V_85_85;

                                            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_88_88)) == (MR_mktag((MR_Integer) 3)));
                                            if (ml_backend__ml_optimize__succeeded)
                                              {
                                                ml_backend__ml_optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_88_88, (MR_Integer) 0)));
                                                ml_backend__ml_optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_88_88, (MR_Integer) 1)));
                                              }
                                          }
                                          break;
                                        case (MR_Integer) 3:
                                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)))) {
                                            default:
                                              ml_backend__ml_optimize__succeeded = MR_FALSE;
                                              break;
                                            case (MR_Integer) 0:
                                              ml_backend__ml_optimize__succeeded = MR_TRUE;
                                              break;
                                            case (MR_Integer) 3:
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
      }
    return ml_backend__ml_optimize__succeeded;
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

            {
              ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__try_to_eliminate_defn_6_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Defn0_11, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns1_15, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19);
            }
            if (ml_backend__ml_optimize__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__Defns1_15;
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_4 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19;

                  ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_4;
                  ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
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
        MR_Word ml_backend__ml_optimize__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__Flags_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__DefnBody0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__Type_21;
        MR_Word ml_backend__ml_optimize__GCStatement_23;
        MR_Word ml_backend__ml_optimize__V_25_25;
        MR_Word ml_backend__ml_optimize__V_27_27;
        MR_Word ml_backend__ml_optimize___OldInitializer_22;

        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_17)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Name_17, (MR_Integer) 0)));
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_25_25)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__V_27_27 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_25_25), (MR_Integer) 1);
                {
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__V_27_27);
                }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_20)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_20, (MR_Integer) 0)));
                        ml_backend__ml_optimize___OldInitializer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_20, (MR_Integer) 1)));
                        ml_backend__ml_optimize__GCStatement_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_20, (MR_Integer) 2)));
                      }
                  }
              }
          }
        if (ml_backend__ml_optimize__succeeded)
          {
            MR_Word ml_backend__ml_optimize__DefnBody_24;
            MR_Word ml_backend__ml_optimize__V_26_26;

            {
              ml_backend__ml_optimize__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_26_26, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_2));
            }
            {
              ml_backend__ml_optimize__DefnBody_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_24, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_21));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_24, 1) = ((MR_Box) (ml_backend__ml_optimize__V_26_26));
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_24, 2) = ((MR_Box) (ml_backend__ml_optimize__GCStatement_23));
            }
            {
              ml_backend__ml_optimize__Defn_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_17));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_18));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_19));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_24));
            }
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
    MR_bool ml_backend__ml_optimize__succeeded;
    MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__V_9_9;
    MR_Word ml_backend__ml_optimize__V_10_10;
    MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 3)));

    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_8_8)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_8_8, (MR_Integer) 0)));
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_9_9)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__V_10_10 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_9_9), (MR_Integer) 1);
            {
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_3, ml_backend__ml_optimize__V_10_10);
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
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__883__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
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
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__881__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
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
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_59_59;
        MR_Word ml_backend__ml_optimize__AssignStatement_9;
        MR_Word ml_backend__ml_optimize__LHS_10;
        MR_Word ml_backend__ml_optimize__ThisVar_13;
        MR_Word ml_backend__ml_optimize__Qualifier_15;
        MR_Word ml_backend__ml_optimize__QualKind_16;
        MR_Word ml_backend__ml_optimize__ThisData_18;
        MR_Word ml_backend__ml_optimize__FollowingDefns_20;
        MR_Word ml_backend__ml_optimize__Filter_21;
        MR_Word ml_backend__ml_optimize__V_36_36;
        MR_Word ml_backend__ml_optimize__V_37_37;
        MR_Word ml_backend__ml_optimize__V_38_38;
        MR_Word ml_backend__ml_optimize__V_39_39;
        MR_Word ml_backend__ml_optimize__V_40_40;
        MR_Word ml_backend__ml_optimize__V_41_41;
        MR_Word ml_backend__ml_optimize__V_42_42;
        MR_Word ml_backend__ml_optimize__V_60_60;
        MR_Word ml_backend__ml_optimize__V_12_12;
        MR_Word ml_backend__ml_optimize___ThisType_14;
        MR_Word ml_backend__ml_optimize__V_52_52;
        MR_Word ml_backend__ml_optimize__V_53_53;
        MR_Word ml_backend__ml_optimize__V_54_54;
        MR_Word ml_backend__ml_optimize__V_55_55;
        MR_Word ml_backend__ml_optimize___VarDefn_19;
        MR_Word ml_backend__ml_optimize__V_30_30;
        MR_Box ml_backend__ml_optimize__conv0_V_30_30;

        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__AssignStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33, (MR_Integer) 0)));
            ml_backend__ml_optimize__STATE_VARIABLE_Statements_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33, (MR_Integer) 1)));
            ml_backend__ml_optimize__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_9, (MR_Integer) 0)));
            ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_9, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_36_36, (MR_Integer) 1)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_37_37)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_37_37, (MR_Integer) 0)));
                    ml_backend__ml_optimize__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_37_37, (MR_Integer) 1)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__LHS_10)) == (MR_mktag((MR_Integer) 3)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__ThisVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 0)));
                        ml_backend__ml_optimize___ThisType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 1)));
                        ml_backend__ml_optimize__Qualifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 0)));
                        ml_backend__ml_optimize__QualKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 1)));
                        ml_backend__ml_optimize__VarName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 2)));
                        ml_backend__ml_optimize__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__VarName_17);
                        {
                          ml_backend__ml_optimize__ThisData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 2) = ((MR_Box) (ml_backend__ml_optimize__V_38_38));
                        }
                        {
                          ml_backend__ml_optimize__V_39_39 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__ThisData_18);
                        }
                        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_39_39 == (MR_Integer) 0);
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 0)));
                            ml_backend__ml_optimize__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 1)));
                            ml_backend__ml_optimize__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 2)));
                            ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 3)));
                            ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 4)));
                            {
                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__Qualifier_15, ml_backend__ml_optimize__V_60_60);
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__TypeCtorInfo_59_59 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
                                {
                                  ml_backend__ml_optimize__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[1]));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 3) = ((MR_Box) (ml_backend__ml_optimize__VarName_17));
                                }
                                {
                                  ml_backend__ml_optimize__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[2]));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 3) = ((MR_Box) (ml_backend__ml_optimize__V_42_42));
                                }
                                {
                                  mercury__list__drop_while_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_59_59, ml_backend__ml_optimize__V_40_40, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31, &ml_backend__ml_optimize__V_41_41);
                                }
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_41_41)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize___VarDefn_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_41_41, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__FollowingDefns_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_41_41, (MR_Integer) 1)));
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
                                      ml_backend__ml_optimize__succeeded = mercury__list__find_first_match_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_59_59, ml_backend__ml_optimize__Filter_21, ml_backend__ml_optimize__FollowingDefns_20, &ml_backend__ml_optimize__conv0_V_30_30);
                                    }
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        ml_backend__ml_optimize__V_30_30 = ((MR_Word) ml_backend__ml_optimize__conv0_V_30_30);
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
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_48_48;

            {
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_17, ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31, &ml_backend__ml_optimize__STATE_VARIABLE_Defns_48_48);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0__tmp_copy_31 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_48_48;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_33 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_35_35;

              ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_33 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_33;
              ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_31 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0__tmp_copy_31;
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
            MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 0)));
            MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 1)));

            {
              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Statement_11, &ml_backend__ml_optimize__HeadAffects_12);
            }
            switch (ml_backend__ml_optimize__HeadAffects_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__Tail_7;

                    ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
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
                    MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__Tail_7;

                    ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
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
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__Statements_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));

              {
                ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Statements_10, ml_backend__ml_optimize__Affects_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_optimize__SubStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__Statement__tmp_copy_5 = ml_backend__ml_optimize__SubStatement_13;

                ml_backend__ml_optimize__Statement_5 = ml_backend__ml_optimize__Statement__tmp_copy_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__Statements_66;
              MR_Word ml_backend__ml_optimize__Head_82;
              MR_Word ml_backend__ml_optimize__Tail_83;
              MR_Word ml_backend__ml_optimize__HeadAffects_85;
              MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));

              if ((ml_backend__ml_optimize__MaybeElse_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ml_backend__ml_optimize__Statements_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_optimize__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_16, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_optimize__V_63_63;

                  {
                    ml_backend__ml_optimize__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_63_63, 0) = ((MR_Box) (ml_backend__ml_optimize__Else_17));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__Statements_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 1) = ((MR_Box) (ml_backend__ml_optimize__V_63_63));
                  }
                }
              ml_backend__ml_optimize__Head_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, (MR_Integer) 0)));
              ml_backend__ml_optimize__Tail_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, (MR_Integer) 1)));
              {
                ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Head_82, &ml_backend__ml_optimize__HeadAffects_85);
              }
              switch (ml_backend__ml_optimize__HeadAffects_85) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Tail_83, ml_backend__ml_optimize__Affects_6);
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
                  MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 3)));

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
                              MR_Word ml_backend__ml_optimize__Statement__tmp_copy_5 = ml_backend__ml_optimize__DefaultStatement_24;

                              ml_backend__ml_optimize__Statement_5 = ml_backend__ml_optimize__Statement__tmp_copy_5;
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
                  MR_Word ml_backend__ml_optimize__AtomicStmt_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ml_backend__ml_optimize__Lval_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));

                        {
                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_45)));
                        }
                        if (ml_backend__ml_optimize__succeeded)
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                        else
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_optimize__Lval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_optimize__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 2)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_70)));
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
                            MR_Word ml_backend__ml_optimize__Lval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 2)));
                            MR_Word ml_backend__ml_optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 3)));
                            MR_Word ml_backend__ml_optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 4)));
                            MR_Word ml_backend__ml_optimize__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 5)));
                            MR_Word ml_backend__ml_optimize__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 6)));
                            MR_Word ml_backend__ml_optimize__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 7)));
                            MR_Word ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 8)));
                            MR_Word ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 9)));
                            MR_Word ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 10)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_78)));
                            }
                            if (ml_backend__ml_optimize__succeeded)
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
                            else
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word ml_backend__ml_optimize__Lval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));

                            {
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_74)));
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
ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(
  MR_Word ml_backend__ml_optimize__Lval_4,
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15,
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_16)
{
  {
    MR_bool ml_backend__ml_optimize__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 4)));

          {
            ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__Rval_7, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15, ml_backend__ml_optimize__STATE_VARIABLE_Components_16);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_4, (MR_Integer) 1)));

          {
            ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__Rval_19, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15, ml_backend__ml_optimize__STATE_VARIABLE_Components_16);
          }
        }
        break;
      case (MR_Integer) 2:
        *ml_backend__ml_optimize__STATE_VARIABLE_Components_16 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15;
        break;
      case (MR_Integer) 3:
        *ml_backend__ml_optimize__STATE_VARIABLE_Components_16 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15;
        break;
    }
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
              {
                ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(ml_backend__ml_optimize__Lval_6, ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26, ml_backend__ml_optimize__STATE_VARIABLE_Components_19);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_optimize__SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_optimize__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_optimize__Rval__tmp_copy_4 = ml_backend__ml_optimize__SubRval_8;

                ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__Rval__tmp_copy_4;
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
                  MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__Rval__tmp_copy_4 = ml_backend__ml_optimize__SubRvalA_10;

                    ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_optimize__SubRvalB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22;
                  MR_Word ml_backend__ml_optimize__SubRvalA_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__SubRvalA_28, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_optimize__Rval__tmp_copy_4 = ml_backend__ml_optimize__SubRvalB_12;
                    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0__tmp_copy_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22;

                    ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0__tmp_copy_18;
                    ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__Rval__tmp_copy_4;
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
                  {
                    ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(ml_backend__ml_optimize__Lval_29, ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20, ml_backend__ml_optimize__STATE_VARIABLE_Components_19);
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
            MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

            if ((ml_backend__ml_optimize__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_optimize__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_15_15));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word ml_backend__ml_optimize__Stmt1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_14_14, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Stmts2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_14_14, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__ReplStmts_10;
                MR_Word ml_backend__ml_optimize__TypeCtorInfo_43_54;
                MR_Word ml_backend__ml_optimize__Stmt0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_15_15, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Context0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_15_15, (MR_Integer) 1)));
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
                MR_Word ml_backend__ml_optimize__V_40_40;
                MR_Word ml_backend__ml_optimize__V_41_41;
                MR_Word ml_backend__ml_optimize__V_43_43;
                MR_Word ml_backend__ml_optimize__V_44_44;
                MR_Word ml_backend__ml_optimize__V_45_45;
                MR_Word ml_backend__ml_optimize__V_46_46;
                MR_Word ml_backend__ml_optimize__V_47_47;
                MR_Word ml_backend__ml_optimize__V_55_55;
                MR_Word ml_backend__ml_optimize__V_56_56;
                MR_Word ml_backend__ml_optimize___Context1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize__V_31_31;

                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_20)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__TestRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 0)));
                    ml_backend__ml_optimize__StmtThen0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 1)));
                    ml_backend__ml_optimize__MaybeStmtElse0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 2)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt1_22)) == (MR_mktag((MR_Integer) 2)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 0)));
                        ml_backend__ml_optimize__StmtThen1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 1)));
                        ml_backend__ml_optimize__MaybeStmtElse1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 2)));
                        {
                          ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__TestRval_24, ml_backend__ml_optimize__V_55_55);
                        }
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__TypeCtorInfo_43_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
                            {
                              ml_backend__ml_optimize__V_40_40 = mercury__set__init_0_f_0(ml_backend__ml_optimize__TypeCtorInfo_43_54);
                            }
                            {
                              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__TestRval_24, ml_backend__ml_optimize__V_40_40, &ml_backend__ml_optimize__TestRvalComponents_29);
                            }
                            ml_backend__ml_optimize__V_41_41 = (MR_Integer) 0;
                            {
                              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_29, ml_backend__ml_optimize__StmtThen0_25, &ml_backend__ml_optimize__V_56_56);
                            }
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_41_41 == ml_backend__ml_optimize__V_56_56);
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                if ((ml_backend__ml_optimize__MaybeStmtElse0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word ml_backend__ml_optimize__StmtElse0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_26, (MR_Integer) 0)));
                                    MR_Word ml_backend__ml_optimize__V_57_57;

                                    {
                                      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_29, ml_backend__ml_optimize__StmtElse0_30, &ml_backend__ml_optimize__V_57_57);
                                    }
                                    ml_backend__ml_optimize__succeeded = ((MR_Integer) 0 == ml_backend__ml_optimize__V_57_57);
                                  }
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__StmtThen0_25, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__ContextT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__StmtThen0_25, (MR_Integer) 1)));
                                    ml_backend__ml_optimize__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    ml_backend__ml_optimize__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      ml_backend__ml_optimize__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen1_27));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 1) = ((MR_Box) (ml_backend__ml_optimize__V_47_47));
                                    }
                                    {
                                      ml_backend__ml_optimize__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen0_25));
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 1) = ((MR_Box) (ml_backend__ml_optimize__V_46_46));
                                    }
                                    {
                                      ml_backend__ml_optimize__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 0) = ((MR_Box) (ml_backend__ml_optimize__V_44_44));
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 1) = ((MR_Box) (ml_backend__ml_optimize__V_45_45));
                                    }
                                    {
                                      ml_backend__ml_optimize__Then_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_33, 0) = ((MR_Box) (ml_backend__ml_optimize__V_43_43));
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
                                            MR_Word ml_backend__ml_optimize__V_48_48;
                                            MR_Word ml_backend__ml_optimize__V_49_49;
                                            MR_Word ml_backend__ml_optimize__V_51_51;
                                            MR_Word ml_backend__ml_optimize__V_52_52;

                                            {
                                              ml_backend__ml_optimize__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_52_52, 0) = ((MR_Box) (ml_backend__ml_optimize__Else1_37));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            {
                                              ml_backend__ml_optimize__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 0) = ((MR_Box) (ml_backend__ml_optimize__Else0_36));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 1) = ((MR_Box) (ml_backend__ml_optimize__V_52_52));
                                            }
                                            {
                                              ml_backend__ml_optimize__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 1) = ((MR_Box) (ml_backend__ml_optimize__V_51_51));
                                            }
                                            {
                                              ml_backend__ml_optimize__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, 0) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, 1) = ((MR_Box) (ml_backend__ml_optimize__Context0_21));
                                            }
                                            {
                                              ml_backend__ml_optimize__MaybeElse_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_34, 0) = ((MR_Box) (ml_backend__ml_optimize__V_48_48));
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
                      MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__ReplStmts_10;

                      ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ml_backend__ml_optimize__StmtsTail_11;

                    {
                      ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__V_14_14, &ml_backend__ml_optimize__StmtsTail_11);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_optimize__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_15_15));
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
    MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__V_8_8;
    MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_3, (MR_Integer) 1)));

    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_7_7)) == (MR_mktag((MR_Integer) 0)));
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_7_7, (MR_Integer) 0)));
        ml_backend__ml_optimize__BlockStatements_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_7_7, (MR_Integer) 1)));
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word ml_backend__ml_optimize__V_17_17;
      MR_Word ml_backend__ml_optimize__V_57_57;
      MR_Word ml_backend__ml_optimize__V_59_59;
      MR_Word ml_backend__ml_optimize__V_60_60;

      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallStmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15, (MR_Integer) 0)));
      ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15, (MR_Integer) 1)));
      ml_backend__ml_optimize__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 0)));
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 1)));
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__EntityName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 2)));
      ml_backend__ml_optimize__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 3)));
      ml_backend__ml_optimize__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 4)));
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_28_28 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_27_27 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_28_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__EntityName_19));
      }
      {
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ml_backend__ml_util__can_optimize_tailcall_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_27_27, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallStmt_16);
      }
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
        {
          ml_backend__ml_optimize__optimize_func_3_p_0_1(ml_backend__ml_optimize__env_ptr);
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
          {
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14, (MR_Integer) 450, (MR_Integer) 1);
          }
          if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
            {
              ml_backend__ml_util__stmt_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15, ml_backend__ml_optimize__optimize_func_3_p_0_2, ml_backend__ml_optimize__env_ptr);
            }
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

    (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4 = ml_backend__ml_optimize__OptInfo_4;
    if ((ml_backend__ml_optimize__Body0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_optimize__Body_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_optimize__Statement0_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Body0_5), (MR_Integer) 1);
        MR_Word ml_backend__ml_optimize__Statement_8;
        MR_Word ml_backend__ml_optimize__Context_13;
        MR_Word ml_backend__ml_optimize__Stmt_23;
        MR_Word ml_backend__ml_optimize__V_53_53;
        MR_Word ml_backend__ml_optimize__V_54_54;
        MR_Word ml_backend__ml_optimize__V_55_55;
        MR_Word ml_backend__ml_optimize__V_56_56;

        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
        ml_backend__ml_optimize__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 4)));
        {
          ml_backend__ml_optimize__optimize_func_3_p_0_3(&ml_backend__ml_optimize__env);
        }
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
          {
            MR_Word ml_backend__ml_optimize__CommentStmt_21;
            MR_Word ml_backend__ml_optimize__SupportsBreakContinue_22;

            {
              ml_backend__ml_optimize__CommentStmt_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStmt_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[3])));
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStmt_21, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
            }
            {
              ml_backend__ml_optimize__SupportsBreakContinue_22 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14);
            }
            switch (ml_backend__ml_optimize__SupportsBreakContinue_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_optimize__V_33_33;
                  MR_Word ml_backend__ml_optimize__V_34_34;
                  MR_Word ml_backend__ml_optimize__V_35_35;
                  MR_Word ml_backend__ml_optimize__V_36_36;

                  {
                    ml_backend__ml_optimize__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[4])));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_35_35, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
                  }
                  {
                    ml_backend__ml_optimize__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_36_36, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement0_7));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_34_34, 0) = ((MR_Box) (ml_backend__ml_optimize__V_35_35));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_34_34, 1) = ((MR_Box) (ml_backend__ml_optimize__V_36_36));
                  }
                  {
                    ml_backend__ml_optimize__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_33_33, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_21));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_33_33, 1) = ((MR_Box) (ml_backend__ml_optimize__V_34_34));
                  }
                  {
                    ml_backend__ml_optimize__Stmt_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_23, 1) = ((MR_Box) (ml_backend__ml_optimize__V_33_33));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_optimize__V_42_42;
                  MR_Word ml_backend__ml_optimize__V_43_43;
                  MR_Word ml_backend__ml_optimize__V_45_45;
                  MR_Word ml_backend__ml_optimize__V_46_46;
                  MR_Word ml_backend__ml_optimize__V_48_48;
                  MR_Word ml_backend__ml_optimize__V_49_49;

                  {
                    ml_backend__ml_optimize__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[6])));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
                  }
                  {
                    ml_backend__ml_optimize__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_48_48, 0) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_optimize__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement0_7));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 1) = ((MR_Box) (ml_backend__ml_optimize__V_48_48));
                  }
                  {
                    ml_backend__ml_optimize__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_21));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 1) = ((MR_Box) (ml_backend__ml_optimize__V_46_46));
                  }
                  {
                    ml_backend__ml_optimize__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 1) = ((MR_Box) (ml_backend__ml_optimize__V_45_45));
                  }
                  {
                    ml_backend__ml_optimize__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 0) = ((MR_Box) (ml_backend__ml_optimize__V_43_43));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
                  }
                  {
                    ml_backend__ml_optimize__Stmt_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_23, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[5])));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_23, 2) = ((MR_Box) (ml_backend__ml_optimize__V_42_42));
                  }
                }
                break;
            }
          }
        else
          ml_backend__ml_optimize__Stmt_23 = (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12;
        {
          ml_backend__ml_optimize__Statement_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_23));
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
            MR_Word ml_backend__ml_optimize__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));

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
                MR_Word ml_backend__ml_optimize__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_77_77, (MR_Integer) 0)));
                MR_Word ml_backend__ml_optimize__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_77_77, (MR_Integer) 1)));
                MR_Word ml_backend__ml_optimize___ArgGCStatement_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_77_77, (MR_Integer) 2)));
                MR_Word ml_backend__ml_optimize__VarName_29;
                MR_Word ml_backend__ml_optimize__V_45_45;

                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_26)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Name_26, (MR_Integer) 0)));
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_45_45)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_optimize__succeeded)
                      ml_backend__ml_optimize__VarName_29 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_45_45), (MR_Integer) 1);
                  }
                if (ml_backend__ml_optimize__succeeded)
                  {
                    MR_Word ml_backend__ml_optimize__ModuleName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_optimize__QualVarName_31;
                    MR_Word ml_backend__ml_optimize__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_optimize__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_optimize__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_optimize__TypeInfo_78_78;
                    MR_Word ml_backend__ml_optimize__V_47_47;
                    MR_Word ml_backend__ml_optimize__V_75_75;
                    MR_Word ml_backend__ml_optimize___VarType_32;

                    {
                      ml_backend__ml_optimize__QualVarName_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_31, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_30));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_31, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_31, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_29));
                    }
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__ArgRval_22)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ArgRval_22, (MR_Integer) 0)));
                        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_47_47)) == (MR_mktag((MR_Integer) 3)));
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_47_47, (MR_Integer) 0)));
                            ml_backend__ml_optimize___VarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_47_47, (MR_Integer) 1)));
                            ml_backend__ml_optimize__TypeInfo_78_78 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
                            {
                              ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_78_78, ((MR_Box) (ml_backend__ml_optimize__QualVarName_31)), ((MR_Box) (ml_backend__ml_optimize__V_75_75)));
                            }
                          }
                      }
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__V_76_76;
                          MR_Word ml_backend__ml_optimize__HeadVar__3__tmp_copy_3 = ml_backend__ml_optimize__ArgRvals_23;

                          ml_backend__ml_optimize__HeadVar__3_3 = ml_backend__ml_optimize__HeadVar__3__tmp_copy_3;
                          ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                    else
                      {
                        MR_String ml_backend__ml_optimize__VarNameStr_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_29, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_optimize__MaybeNum_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_29, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_optimize__TempName_35;
                        MR_Word ml_backend__ml_optimize__QualTempName_36;
                        MR_Word ml_backend__ml_optimize__Context_39;
                        MR_Word ml_backend__ml_optimize__TempDefn_40;
                        MR_Word ml_backend__ml_optimize__TempInitStatement_41;
                        MR_Word ml_backend__ml_optimize__AssignStatement_42;
                        MR_Word ml_backend__ml_optimize__Statements0_43;
                        MR_Word ml_backend__ml_optimize__TempDefns0_44;
                        MR_String ml_backend__ml_optimize__V_48_48;
                        MR_Word ml_backend__ml_optimize__V_51_51;
                        MR_Word ml_backend__ml_optimize__V_52_52;
                        MR_Word ml_backend__ml_optimize__V_53_53;
                        MR_Word ml_backend__ml_optimize__V_54_54;
                        MR_Word ml_backend__ml_optimize__V_55_55;
                        MR_Word ml_backend__ml_optimize__V_56_56;
                        MR_Word ml_backend__ml_optimize__V_57_57;
                        MR_Word ml_backend__ml_optimize__V_58_58;
                        MR_Word ml_backend__ml_optimize__V_60_60;
                        MR_Word ml_backend__ml_optimize__V_61_61;
                        MR_Word ml_backend__ml_optimize__V_70_70;
                        MR_Word ml_backend__ml_optimize__V_71_71;
                        MR_Word ml_backend__ml_optimize__V_72_72;
                        MR_Word ml_backend__ml_optimize__V_73_73;

                        {
                          ml_backend__ml_optimize__V_48_48 = mercury__string__f_43_43_2_f_0(ml_backend__ml_optimize__VarNameStr_33, (MR_String) "__tmp_copy");
                        }
                        {
                          ml_backend__ml_optimize__TempName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempName_35, 0) = ((MR_Box) (ml_backend__ml_optimize__V_48_48));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempName_35, 1) = ((MR_Box) (ml_backend__ml_optimize__MaybeNum_34));
                        }
                        {
                          ml_backend__ml_optimize__QualTempName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualTempName_36, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_30));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualTempName_36, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualTempName_36, 2) = ((MR_Box) (ml_backend__ml_optimize__TempName_35));
                        }
                        ml_backend__ml_optimize__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
                        ml_backend__ml_optimize__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
                        ml_backend__ml_optimize__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
                        ml_backend__ml_optimize__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
                        ml_backend__ml_optimize__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 4)));
                        ml_backend__ml_optimize__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__TempName_35);
                        {
                          ml_backend__ml_optimize__TempDefn_40 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_optimize__V_51_51, ml_backend__ml_optimize__Type_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_optimize__Context_39);
                        }
                        {
                          ml_backend__ml_optimize__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, 0) = ((MR_Box) (ml_backend__ml_optimize__QualTempName_36));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_27));
                        }
                        {
                          ml_backend__ml_optimize__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_53_53, 0) = ((MR_Box) (ml_backend__ml_optimize__V_54_54));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_53_53, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_22));
                        }
                        {
                          ml_backend__ml_optimize__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_52_52, 1) = ((MR_Box) (ml_backend__ml_optimize__V_53_53));
                        }
                        {
                          ml_backend__ml_optimize__TempInitStatement_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempInitStatement_41, 0) = ((MR_Box) (ml_backend__ml_optimize__V_52_52));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempInitStatement_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_39));
                        }
                        {
                          ml_backend__ml_optimize__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_57_57, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_31));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_57_57, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_27));
                        }
                        {
                          ml_backend__ml_optimize__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_58_58, 0) = ((MR_Box) (ml_backend__ml_optimize__V_54_54));
                        }
                        {
                          ml_backend__ml_optimize__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_56_56, 0) = ((MR_Box) (ml_backend__ml_optimize__V_57_57));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_56_56, 1) = ((MR_Box) (ml_backend__ml_optimize__V_58_58));
                        }
                        {
                          ml_backend__ml_optimize__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_55_55, 1) = ((MR_Box) (ml_backend__ml_optimize__V_56_56));
                        }
                        {
                          ml_backend__ml_optimize__AssignStatement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_42, 0) = ((MR_Box) (ml_backend__ml_optimize__V_55_55));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_39));
                        }
                        {
                          ml_backend__ml_optimize__generate_assign_args_5_p_0(ml_backend__ml_optimize__OptInfo_1, ml_backend__ml_optimize__V_76_76, ml_backend__ml_optimize__ArgRvals_23, &ml_backend__ml_optimize__Statements0_43, &ml_backend__ml_optimize__TempDefns0_44);
                        }
                        {
                          ml_backend__ml_optimize__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_60_60, 0) = ((MR_Box) (ml_backend__ml_optimize__TempInitStatement_41));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_60_60, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements0_43));
                        }
                        {
                          ml_backend__ml_optimize__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_61_61, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignStatement_42));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          *ml_backend__ml_optimize__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_optimize__V_60_60, ml_backend__ml_optimize__V_61_61);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ml_backend__ml_optimize__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__TempDefn_40));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TempDefns0_44));
                        }
                      }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", (MR_String) "function param is not a var");
                      return;
                    }
                  }
              }
          }
      }
      break;
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
    MR_Word ml_backend__ml_optimize__Globals_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__OptTailCalls_14;
    MR_Word ml_backend__ml_optimize___Signature_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize___MaybeObject_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize___Results_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize___IsTailCall_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__ModuleName_15;
    MR_Word ml_backend__ml_optimize__EntityName_16;
    MR_Word ml_backend__ml_optimize__V_41_41;
    MR_Word ml_backend__ml_optimize__V_42_42;
    MR_Word ml_backend__ml_optimize__V_66_66;
    MR_Word ml_backend__ml_optimize__V_68_68;
    MR_Word ml_backend__ml_optimize__V_69_69;

    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_13, (MR_Integer) 450, &ml_backend__ml_optimize__OptTailCalls_14);
    }
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__OptTailCalls_14 == (MR_Integer) 1);
    if (ml_backend__ml_optimize__succeeded)
      {
        ml_backend__ml_optimize__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__EntityName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        ml_backend__ml_optimize__V_42_42 = (MR_Integer) 0;
        {
          ml_backend__ml_optimize__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_15));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 1) = ((MR_Box) (ml_backend__ml_optimize__V_42_42));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 2) = ((MR_Box) (ml_backend__ml_optimize__EntityName_16));
        }
        {
          ml_backend__ml_optimize__succeeded = ml_backend__ml_util__can_optimize_tailcall_2_p_0(ml_backend__ml_optimize__V_41_41, ml_backend__ml_optimize__Stmt0_5);
        }
      }
    if (ml_backend__ml_optimize__succeeded)
      {
        MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        MR_Word ml_backend__ml_optimize__CommentStatement_18;
        MR_Word ml_backend__ml_optimize__GotoStatement_19;
        MR_Word ml_backend__ml_optimize__FuncArgs_20;
        MR_Word ml_backend__ml_optimize__AssignStatements_22;
        MR_Word ml_backend__ml_optimize__AssignDefns_23;
        MR_Word ml_backend__ml_optimize__AssignVarsStatement_24;
        MR_Word ml_backend__ml_optimize__CallReplaceStatements_25;
        MR_Word ml_backend__ml_optimize__V_46_46;
        MR_Word ml_backend__ml_optimize__V_47_47;
        MR_Word ml_backend__ml_optimize__V_48_48;
        MR_Word ml_backend__ml_optimize__V_49_49;
        MR_Word ml_backend__ml_optimize__V_50_50;
        MR_Word ml_backend__ml_optimize__V_51_51;
        MR_Word ml_backend__ml_optimize__SupportsBreakContinue_88;
        MR_Word ml_backend__ml_optimize__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_optimize__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        MR_Word ml_backend__ml_optimize__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        MR_Word ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        MR_Word ml_backend__ml_optimize__V_78_78;
        MR_Word ml_backend__ml_optimize__V_79_79;
        MR_Word ml_backend__ml_optimize__V_80_80;
        MR_Word ml_backend__ml_optimize__V_81_81;
        MR_Word ml_backend__ml_optimize___RetTypes_21;

        {
          ml_backend__ml_optimize__CommentStatement_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStatement_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[2])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStatement_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        {
          ml_backend__ml_optimize__SupportsBreakContinue_88 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_13);
        }
        switch (ml_backend__ml_optimize__SupportsBreakContinue_88) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_optimize__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[1]);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_optimize__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        {
          ml_backend__ml_optimize__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_46_46, 1) = ((MR_Box) (ml_backend__ml_optimize__V_47_47));
        }
        {
          ml_backend__ml_optimize__GotoStatement_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__GotoStatement_19, 0) = ((MR_Box) (ml_backend__ml_optimize__V_46_46));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__GotoStatement_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        ml_backend__ml_optimize__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
        ml_backend__ml_optimize__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
        ml_backend__ml_optimize__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
        ml_backend__ml_optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
        ml_backend__ml_optimize__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
        ml_backend__ml_optimize__FuncArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, (MR_Integer) 0)));
        ml_backend__ml_optimize___RetTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, (MR_Integer) 1)));
        {
          ml_backend__ml_optimize__generate_assign_args_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__FuncArgs_20, ml_backend__ml_optimize__CallArgs_10, &ml_backend__ml_optimize__AssignStatements_22, &ml_backend__ml_optimize__AssignDefns_23);
        }
        {
          ml_backend__ml_optimize__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignDefns_23));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 1) = ((MR_Box) (ml_backend__ml_optimize__AssignStatements_22));
        }
        {
          ml_backend__ml_optimize__AssignVarsStatement_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStatement_24, 0) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStatement_24, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
        }
        {
          ml_backend__ml_optimize__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 0) = ((MR_Box) (ml_backend__ml_optimize__GotoStatement_19));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_optimize__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_50_50, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignVarsStatement_24));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_50_50, 1) = ((MR_Box) (ml_backend__ml_optimize__V_51_51));
        }
        {
          ml_backend__ml_optimize__CallReplaceStatements_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStatements_25, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStatement_18));
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStatements_25, 1) = ((MR_Box) (ml_backend__ml_optimize__V_50_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_optimize__Stmt_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__CallReplaceStatements_25));
        }
      }
    else
      {
        MR_Word ml_backend__ml_optimize__AtomicStmt_37;
        MR_Word ml_backend__ml_optimize__ModName_26;
        MR_Word ml_backend__ml_optimize__ProcLabel_27;
        MR_Word ml_backend__ml_optimize__PredLabel_29;
        MR_String ml_backend__ml_optimize__PredName_32;
        MR_Word ml_backend__ml_optimize__PrivateBuiltin_39;
        MR_Word ml_backend__ml_optimize__V_54_54;
        MR_Word ml_backend__ml_optimize__V_55_55;
        MR_Word ml_backend__ml_optimize__V_56_56;
        MR_Word ml_backend__ml_optimize__V_57_57;
        MR_Word ml_backend__ml_optimize__V_58_58;
        MR_Word ml_backend__ml_optimize__V_82_82;
        MR_Word ml_backend__ml_optimize__V_83_83;
        MR_Word ml_backend__ml_optimize__V_84_84;
        MR_Word ml_backend__ml_optimize___FuncSignature_28;
        MR_Integer ml_backend__ml_optimize___ProcId_30;
        MR_Word ml_backend__ml_optimize___DefnModName_31;
        MR_Integer ml_backend__ml_optimize___Arity_33;
        MR_Word ml_backend__ml_optimize___CodeModel_34;
        MR_Word ml_backend__ml_optimize___NonOutputFunc_35;

        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__FuncRval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_optimize__succeeded)
          {
            ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 1)));
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (ml_backend__ml_optimize__succeeded)
              {
                ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, (MR_Integer) 1)));
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_55_55)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_optimize__succeeded)
                  {
                    ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_55_55, (MR_Integer) 0)));
                    ml_backend__ml_optimize___FuncSignature_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_55_55, (MR_Integer) 1)));
                    ml_backend__ml_optimize__ModName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_56_56, (MR_Integer) 0)));
                    ml_backend__ml_optimize__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_56_56, (MR_Integer) 1)));
                    ml_backend__ml_optimize__ProcLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_56_56, (MR_Integer) 2)));
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_57_57 == (MR_Integer) 0);
                    if (ml_backend__ml_optimize__succeeded)
                      {
                        ml_backend__ml_optimize__PredLabel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_27, (MR_Integer) 0)));
                        ml_backend__ml_optimize___ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_27, (MR_Integer) 1)));
                        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__PredLabel_29)) == (MR_mktag((MR_Integer) 0)));
                        if (ml_backend__ml_optimize__succeeded)
                          {
                            ml_backend__ml_optimize__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 0)));
                            ml_backend__ml_optimize___DefnModName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 1)));
                            ml_backend__ml_optimize__PredName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 2)));
                            ml_backend__ml_optimize___Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 3)));
                            ml_backend__ml_optimize___CodeModel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 4)));
                            ml_backend__ml_optimize___NonOutputFunc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 5)));
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_58_58 == (MR_Integer) 0);
                            if (ml_backend__ml_optimize__succeeded)
                              {
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__CallArgs_10)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_optimize__succeeded)
                                  {
                                    ml_backend__ml_optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 0)));
                                    ml_backend__ml_optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 1)));
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (ml_backend__ml_optimize__succeeded)
                                      {
                                        if ((strcmp(ml_backend__ml_optimize__PredName_32, (MR_String) "mark_hp") == 0))
                                          {
                                            MR_Word ml_backend__ml_optimize__Lval_36;

                                            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__V_84_84)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_84_84, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                            if (ml_backend__ml_optimize__succeeded)
                                              {
                                                ml_backend__ml_optimize__Lval_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_84_84, (MR_Integer) 1)));
                                                {
                                                  ml_backend__ml_optimize__AtomicStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_36));
                                                }
                                                ml_backend__ml_optimize__succeeded = MR_TRUE;
                                              }
                                          }
                                        else
                                        if ((strcmp(ml_backend__ml_optimize__PredName_32, (MR_String) "restore_hp") == 0))
                                          {
                                            {
                                              ml_backend__ml_optimize__AtomicStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                              MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 1) = ((MR_Box) (ml_backend__ml_optimize__V_84_84));
                                            }
                                            ml_backend__ml_optimize__succeeded = MR_TRUE;
                                          }
                                        else
                                          ml_backend__ml_optimize__succeeded = MR_FALSE;
                                        if (ml_backend__ml_optimize__succeeded)
                                          {
                                            {
                                              ml_backend__ml_optimize__PrivateBuiltin_39 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                                            }
                                            {
                                              ml_backend__ml_optimize__V_82_82 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__PrivateBuiltin_39);
                                            }
                                            {
                                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ModName_26, ml_backend__ml_optimize__V_82_82);
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
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_37));
          }
        else
          *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
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
          MR_Word ml_backend__ml_optimize__Statement0_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default0_5), (MR_Integer) 1);
          MR_Word ml_backend__ml_optimize__Statement_8;
          MR_Word ml_backend__ml_optimize__Stmt0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Stmt_16;
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17;
          MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

          {
            ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 0) = ((MR_Box) (ml_backend__ml_optimize__V_19_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 1) = ((MR_Box) (ml_backend__ml_optimize__V_20_20));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 2) = ((MR_Box) (ml_backend__ml_optimize__V_21_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 3) = ((MR_Box) (ml_backend__ml_optimize__V_22_22));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_15));
          }
          {
            ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Stmt0_14, &ml_backend__ml_optimize__Stmt_16);
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
    MR_Word ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

    {
      ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 0) = ((MR_Box) (ml_backend__ml_optimize__V_21_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 1) = ((MR_Box) (ml_backend__ml_optimize__V_22_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 2) = ((MR_Box) (ml_backend__ml_optimize__V_23_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 3) = ((MR_Box) (ml_backend__ml_optimize__V_24_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
    }
    {
      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Stmt0_16, &ml_backend__ml_optimize__Stmt_18);
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
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_91;
          MR_Word ml_backend__ml_optimize__Defns0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Statements0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Defns1_15;
          MR_Word ml_backend__ml_optimize__Statements1_16;
          MR_Word ml_backend__ml_optimize__Defns_17;
          MR_Word ml_backend__ml_optimize__Statements2_18;
          MR_Word ml_backend__ml_optimize__Statements3_19;
          MR_Word ml_backend__ml_optimize__Statements_20;
          MR_Word ml_backend__ml_optimize__Globals_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__OptInit_61;
          MR_Word ml_backend__ml_optimize__EliminateLocalVars_76;
          MR_Word ml_backend__ml_optimize__V_77_77;
          MR_Word ml_backend__ml_optimize__V_89_89;
          MR_Word ml_backend__ml_optimize__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__V_81_81;
          MR_Word ml_backend__ml_optimize__V_82_82;
          MR_Word ml_backend__ml_optimize__V_83_83;
          MR_Word ml_backend__ml_optimize__V_84_84;

          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_60, (MR_Integer) 451, &ml_backend__ml_optimize__OptInit_61);
          }
          switch (ml_backend__ml_optimize__OptInit_61) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__Defns1_15 = ml_backend__ml_optimize__Defns0_13;
                ml_backend__ml_optimize__Statements1_16 = ml_backend__ml_optimize__Statements0_14;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns0_13, &ml_backend__ml_optimize__Defns1_15, ml_backend__ml_optimize__Statements0_14, &ml_backend__ml_optimize__Statements1_16);
              }
              break;
          }
          ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
          ml_backend__ml_optimize__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
          ml_backend__ml_optimize__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
          ml_backend__ml_optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
          ml_backend__ml_optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__V_77_77, (MR_Integer) 452, &ml_backend__ml_optimize__EliminateLocalVars_76);
          }
          switch (ml_backend__ml_optimize__EliminateLocalVars_76) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_optimize__Defns_17 = ml_backend__ml_optimize__Defns1_15;
                ml_backend__ml_optimize__Statements2_18 = ml_backend__ml_optimize__Statements1_16;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns1_15, &ml_backend__ml_optimize__Defns_17, ml_backend__ml_optimize__Statements1_16, &ml_backend__ml_optimize__Statements2_18);
              }
              break;
          }
          ml_backend__ml_optimize__TypeCtorInfo_9_91 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          {
            ml_backend__ml_optimize__V_89_89 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_91, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_5[0], ml_backend__ml_optimize__Statements2_18);
          }
          {
            ml_backend__ml_optimize__Statements3_19 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_91, ml_backend__ml_optimize__V_89_89);
          }
          {
            ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statements3_19, &ml_backend__ml_optimize__Statements_20);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_17));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_optimize__Kind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__Statement0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Statement_24;

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statement0_23, &ml_backend__ml_optimize__Statement_24);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_21));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_22));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_24));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__MaybeElse0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Then_27;
          MR_Word ml_backend__ml_optimize__MaybeElse_28;
          MR_Word ml_backend__ml_optimize__Rval_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));

          {
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Then0_25, &ml_backend__ml_optimize__Then_27);
          }
          {
            ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__MaybeElse0_26, &ml_backend__ml_optimize__MaybeElse_28);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_optimize__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_46));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_27));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_28));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_optimize__TypeCtorInfo_52_52;
              MR_Word ml_backend__ml_optimize__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Range_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_optimize__Default0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_optimize__Cases_33;
              MR_Word ml_backend__ml_optimize__Default_34;
              MR_Word ml_backend__ml_optimize__V_45_45;
              MR_Word ml_backend__ml_optimize__Rval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_optimize__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
              }
              ml_backend__ml_optimize__TypeCtorInfo_52_52 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              {
                mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_52_52, ml_backend__ml_optimize__TypeCtorInfo_52_52, ml_backend__ml_optimize__V_45_45, ml_backend__ml_optimize__Cases0_31, &ml_backend__ml_optimize__Cases_33);
              }
              {
                ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Default0_32, &ml_backend__ml_optimize__Default_34);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_29));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_47));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_30));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_33));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_34));
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
              MR_Word ml_backend__ml_optimize__Ref_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__TryGoal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__HandlerGoal0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__TryGoal_38;
              MR_Word ml_backend__ml_optimize__HandlerGoal_39;

              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__TryGoal0_36, &ml_backend__ml_optimize__TryGoal_38);
              }
              {
                ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__HandlerGoal0_37, &ml_backend__ml_optimize__HandlerGoal_39);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_optimize__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_38));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_39));
              }
            }
            break;
        }
        break;
    }
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
    MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 4)));

    {
      ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 0) = ((MR_Box) (ml_backend__ml_optimize__V_14_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 1) = ((MR_Box) (ml_backend__ml_optimize__V_15_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 2) = ((MR_Box) (ml_backend__ml_optimize__V_16_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 3) = ((MR_Box) (ml_backend__ml_optimize__V_17_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_7));
    }
    {
      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Stmt0_6, &ml_backend__ml_optimize__Stmt_8);
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
    MR_Word ml_backend__ml_optimize__V_10_10;
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11;
    MR_Word ml_backend__ml_optimize__V_14_14;
    MR_Word ml_backend__ml_optimize__V_15_15;
    MR_Word ml_backend__ml_optimize__V_16_16;
    MR_Word ml_backend__ml_optimize__V_17_17;

    {
      ml_backend__ml_optimize__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_statements_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_20_20 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    {
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_20_20, ml_backend__ml_optimize__TypeCtorInfo_20_20, ml_backend__ml_optimize__V_10_10, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11);
    }
    ml_backend__ml_optimize__Globals_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
    ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
    ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
    ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
    ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_6, (MR_Integer) 457, &ml_backend__ml_optimize__OptPeep_7);
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

        {
          ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statement0_6, &ml_backend__ml_optimize__Statement_7);
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
    MR_Word ml_backend__ml_optimize__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__Flags_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__DefnBody0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_47;
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_57;
          MR_Word ml_backend__ml_optimize__ClassDefn0_26 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__DefnBody0_12), (MR_Integer) 0);
          MR_Word ml_backend__ml_optimize__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Imports_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__BaseClasses_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Implements_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__TypeParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__CtorDefns0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__MemberDefns0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_26, (MR_Integer) 6)));
          MR_Word ml_backend__ml_optimize__MemberDefns_34;
          MR_Word ml_backend__ml_optimize__CtorDefns_35;
          MR_Word ml_backend__ml_optimize__ClassDefn_36;
          MR_Word ml_backend__ml_optimize__DefnBody_37;
          MR_Word ml_backend__ml_optimize__V_43_43;

          {
            ml_backend__ml_optimize__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_defn_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
          }
          ml_backend__ml_optimize__TypeCtorInfo_14_47 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_47, ml_backend__ml_optimize__TypeCtorInfo_14_47, ml_backend__ml_optimize__V_43_43, ml_backend__ml_optimize__MemberDefns0_33, &ml_backend__ml_optimize__MemberDefns_34);
          }
          ml_backend__ml_optimize__TypeCtorInfo_14_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_57, ml_backend__ml_optimize__TypeCtorInfo_14_57, ml_backend__ml_optimize__V_43_43, ml_backend__ml_optimize__CtorDefns0_32, &ml_backend__ml_optimize__CtorDefns_35);
          }
          {
            ml_backend__ml_optimize__ClassDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_27));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 1) = ((MR_Box) (ml_backend__ml_optimize__Imports_28));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 2) = ((MR_Box) (ml_backend__ml_optimize__BaseClasses_29));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 3) = ((MR_Box) (ml_backend__ml_optimize__Implements_30));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 4) = ((MR_Box) (ml_backend__ml_optimize__TypeParams_31));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 5) = ((MR_Box) (ml_backend__ml_optimize__CtorDefns_35));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_36, 6) = ((MR_Box) (ml_backend__ml_optimize__MemberDefns_34));
          }
          ml_backend__ml_optimize__DefnBody_37 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_optimize__ClassDefn_36);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Defn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_11));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_37));
          }
        }
        break;
      case (MR_Integer) 1:
        *ml_backend__ml_optimize__Defn_8 = ml_backend__ml_optimize__Defn0_7;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_optimize__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 0)));
          MR_Word ml_backend__ml_optimize__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 1)));
          MR_Word ml_backend__ml_optimize__FuncBody0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 2)));
          MR_Word ml_backend__ml_optimize__Attributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 3)));
          MR_Word ml_backend__ml_optimize__EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 4)));
          MR_Word ml_backend__ml_optimize__MaybeRequireTailrecInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 5)));
          MR_Word ml_backend__ml_optimize__OptInfo_19;
          MR_Word ml_backend__ml_optimize__FuncBody1_20;
          MR_Word ml_backend__ml_optimize__FuncBody_21;
          MR_Word ml_backend__ml_optimize__DefnBody_22;

          {
            ml_backend__ml_optimize__OptInfo_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, 1) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, 2) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, 3) = ((MR_Box) (ml_backend__ml_optimize__Params_14));
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
          }
          {
            ml_backend__ml_optimize__optimize_func_3_p_0(ml_backend__ml_optimize__OptInfo_19, ml_backend__ml_optimize__FuncBody0_15, &ml_backend__ml_optimize__FuncBody1_20);
          }
          if ((ml_backend__ml_optimize__FuncBody1_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__ml_optimize__FuncBody_21 = ml_backend__ml_optimize__FuncBody1_20;
          else
            {
              MR_Word ml_backend__ml_optimize__Statement0_62 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__FuncBody1_20), (MR_Integer) 1);
              MR_Word ml_backend__ml_optimize__Statement_63;
              MR_Word ml_backend__ml_optimize__Stmt0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_62, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__Context_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_62, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__Stmt_72;
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73;
              MR_Word ml_backend__ml_optimize__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, (MR_Integer) 0)));
              MR_Word ml_backend__ml_optimize__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, (MR_Integer) 2)));
              MR_Word ml_backend__ml_optimize__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, (MR_Integer) 3)));
              MR_Word ml_backend__ml_optimize__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_19, (MR_Integer) 4)));

              {
                ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73, 0) = ((MR_Box) (ml_backend__ml_optimize__V_75_75));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73, 1) = ((MR_Box) (ml_backend__ml_optimize__V_76_76));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73, 2) = ((MR_Box) (ml_backend__ml_optimize__V_77_77));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73, 3) = ((MR_Box) (ml_backend__ml_optimize__V_78_78));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_71));
              }
              {
                ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_73, ml_backend__ml_optimize__Stmt0_70, &ml_backend__ml_optimize__Stmt_72);
              }
              {
                ml_backend__ml_optimize__Statement_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_63, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_72));
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_63, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_71));
              }
              ml_backend__ml_optimize__FuncBody_21 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_63);
            }
          {
            ml_backend__ml_optimize__DefnBody_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_22, 0) = ((MR_Box) (ml_backend__ml_optimize__PredProcId_13));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_22, 1) = ((MR_Box) (ml_backend__ml_optimize__Params_14));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_22, 2) = ((MR_Box) (ml_backend__ml_optimize__FuncBody_21));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_22, 3) = ((MR_Box) (ml_backend__ml_optimize__Attributes_16));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_22, 4) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_17));
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_22, 5) = ((MR_Box) (ml_backend__ml_optimize__MaybeRequireTailrecInfo_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_optimize__Defn_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_11));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_22));
          }
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
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_44;
    MR_Word ml_backend__ml_optimize__Defns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    MR_Word ml_backend__ml_optimize__ModuleName_7;
    MR_Word ml_backend__ml_optimize__Defns_8;
    MR_Word ml_backend__ml_optimize__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_optimize__V_40_40;
    MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    MR_Word ml_backend__ml_optimize__V_27_27;
    MR_Word ml_backend__ml_optimize__V_28_28;
    MR_Word ml_backend__ml_optimize__V_29_29;
    MR_Word ml_backend__ml_optimize__V_30_30;
    MR_Word ml_backend__ml_optimize__V_32_32;
    MR_Word ml_backend__ml_optimize__V_33_33;
    MR_Word ml_backend__ml_optimize__V_34_34;
    MR_Word ml_backend__ml_optimize__V_31_31;

    {
      ml_backend__ml_optimize__ModuleName_7 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__V_13_13);
    }
    {
      ml_backend__ml_optimize__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 1) = ((MR_Box) (ml_backend__ml_optimize__mlds_optimize_3_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_4));
    }
    ml_backend__ml_optimize__TypeCtorInfo_14_44 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_44, ml_backend__ml_optimize__TypeCtorInfo_14_44, ml_backend__ml_optimize__V_40_40, ml_backend__ml_optimize__Defns0_6, &ml_backend__ml_optimize__Defns_8);
    }
    ml_backend__ml_optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
    ml_backend__ml_optimize__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
    ml_backend__ml_optimize__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
    ml_backend__ml_optimize__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
    ml_backend__ml_optimize__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
    ml_backend__ml_optimize__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
    ml_backend__ml_optimize__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
    ml_backend__ml_optimize__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_27_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__V_28_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__V_29_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__V_30_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Defns_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_optimize__V_32_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_optimize__V_33_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_optimize__V_34_34));
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
