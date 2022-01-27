/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1096 "ml_optimize.m"
struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s {
#line 1100 "ml_optimize.m"
  MR_bool ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded;
#line 1100 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7;
#line 1118 "ml_optimize.m"
  jmp_buf ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__commit_0;
#line 1118 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17;
#line 1118 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26;
#line 1096 "ml_optimize.m"
};

#line 409 "ml_optimize.m"
struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s {
#line 409 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4;
#line 414 "ml_optimize.m"
  MR_bool ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded;
#line 417 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12;
#line 417 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14;
#line 432 "ml_optimize.m"
  jmp_buf ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0;
#line 432 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15;
#line 432 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallStmt_16;
#line 432 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_18;
#line 432 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__EntityName_19;
#line 432 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_27_27;
#line 432 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_28_28;
#line 409 "ml_optimize.m"
};


#line 188 "ml_backend.ml_optimize.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 191 "ml_backend.ml_optimize.c"
static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 194 "ml_backend.ml_optimize.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 197 "ml_backend.ml_optimize.c"
static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[5];

#line 200 "ml_backend.ml_optimize.c"
static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[5];

#line 203 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0;

#line 206 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1];

#line 209 "ml_backend.ml_optimize.c"
static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1];

#line 212 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1];

#line 215 "ml_backend.ml_optimize.c"
static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1];

#line 218 "ml_backend.ml_optimize.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0;

#line 221 "ml_backend.ml_optimize.c"
static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4];

#line 224 "ml_backend.ml_optimize.c"
static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4];

#line 227 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0;

#line 230 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1];

#line 233 "ml_backend.ml_optimize.c"
static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1];

#line 236 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1];

#line 239 "ml_backend.ml_optimize.c"
static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1];

#line 242 "ml_backend.ml_optimize.c"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
#line 245 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 247 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2);

#line 250 "ml_backend.ml_optimize.c"
static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0_10001(
#line 253 "ml_backend.ml_optimize.c"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
#line 255 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
#line 257 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3);

#line 260 "ml_backend.ml_optimize.c"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001(
#line 263 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 265 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2);

#line 268 "ml_backend.ml_optimize.c"
static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001(
#line 271 "ml_backend.ml_optimize.c"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
#line 273 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
#line 275 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3);

#line 878 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_p_0(
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__RHS_11,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Qualifier_15,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__QualKind_16,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__ThisData_18,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__5_44);

#line 876 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_p_0(
#line 876 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_43,
#line 876 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_57);

#line 969 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0(
#line 969 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3);

#line 969 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0(
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2);

#line 64 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0(
#line 64 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3);

#line 64 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0(
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2);

#line 1539 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
#line 1539 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Op0_5,
#line 1539 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Op_6,
#line 1539 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13,
#line 1539 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);

#line 1516 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
#line 1516 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Component0_5,
#line 1516 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Component_6,
#line 1516 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
#line 1516 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);

#line 1500 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
#line 1500 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Cond0_5,
#line 1500 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Cond_6,
#line 1500 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
#line 1500 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

#line 1299 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3(
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1238 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2(
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1491 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1(
#line 1491 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1491 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1491 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1491 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1491 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1444 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(
#line 1444 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 1444 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6,
#line 1444 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34,
#line 1444 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);

#line 1428 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
#line 1428 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Default0_5,
#line 1428 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Default_6,
#line 1428 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10,
#line 1428 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);

#line 1423 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1(
#line 1423 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1423 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1423 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1423 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1423 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1417 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(
#line 1417 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Case0_5,
#line 1417 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Case_6,
#line 1417 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
#line 1417 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

#line 1377 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1(
#line 1377 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1377 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1377 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1377 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1377 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1354 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(
#line 1354 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 1354 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6,
#line 1354 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52,
#line 1354 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);

#line 1346 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(
#line 1346 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement0_5,
#line 1346 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Statement_6,
#line 1346 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11,
#line 1346 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);

#line 1337 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(
#line 1337 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 1337 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
#line 1337 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
#line 1337 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

#line 1335 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0_1(
#line 1335 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1335 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1335 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1335 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1335 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1330 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(
#line 1330 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_7,
#line 1330 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_8,
#line 1330 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1330 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

#line 1301 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
#line 1301 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lval0_5,
#line 1301 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Lval_6,
#line 1301 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
#line 1301 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);

#line 1299 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1(
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1295 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(
#line 1295 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7,
#line 1295 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8,
#line 1295 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1295 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

#line 1248 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
#line 1248 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Rval0_5,
#line 1248 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Rval_6,
#line 1248 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
#line 1248 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);

#line 1238 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1(
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1234 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(
#line 1234 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7,
#line 1234 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8,
#line 1234 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1234 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

#line 1231 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2(
#line 1231 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1231 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1231 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1231 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1231 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1227 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1(
#line 1227 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1227 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1227 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1227 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1227 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1218 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
#line 1218 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 1218 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
#line 1218 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
#line 1218 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

#line 1209 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_body_4_p_0(
#line 1209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 1209 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
#line 1209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
#line 1209 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);

#line 1188 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
#line 1188 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn0_5,
#line 1188 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Defn_6,
#line 1188 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_24,
#line 1188 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_25);

#line 1186 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0_1(
#line 1186 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1186 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1186 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1186 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1186 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4);

#line 1182 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(
#line 1182 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_7,
#line 1182 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_8,
#line 1182 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1182 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10);

#line 1174 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(
#line 1174 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
#line 1174 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
#line 1174 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
#line 1174 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13,
#line 1174 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
#line 1174 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);

#line 1126 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statement_4_p_0(
#line 1126 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Var_5,
#line 1126 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Rval_6,
#line 1126 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement0_7,
#line 1126 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Statement_8);

#line 1118 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_1(
#line 1118 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg);

#line 1118 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_2(
#line 1118 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg);

#line 1118 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_3(
#line 1118 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg);

#line 1096 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(
#line 1096 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__VarName_5,
#line 1096 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Rval_6,
#line 1096 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
#line 1096 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Statements_9);

#line 1083 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
#line 1083 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1);

#line 1063 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
#line 1063 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1);

#line 997 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__try_to_eliminate_defn_6_p_0(
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_7,
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn0_8,
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defns0_9,
#line 997 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Defns_10,
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25,
#line 997 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_26);

#line 954 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
#line 954 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 954 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 954 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
#line 954 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4,
#line 954 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_5);

#line 911 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__set_initializer_4_p_0(
#line 911 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__VarName_1,
#line 911 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Rval_2,
#line 911 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
#line 911 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4);

#line 901 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__var_defn_2_p_0(
#line 901 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__VarName_3,
#line 901 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn_4);

#line 878 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3(
#line 878 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 878 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

#line 876 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2(
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

#line 876 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1(
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

#line 853 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(
#line 853 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_6,
#line 853 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_32,
#line 853 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_33,
#line 853 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34,
#line 853 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_35);

#line 740 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__cases_affect_lvals_3_p_0(
#line 740 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lvals_1,
#line 740 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 740 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3);

#line 726 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__statements_affect_lvals_3_p_0(
#line 726 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lvals_1,
#line 726 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 726 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3);

#line 642 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__statement_affects_lvals_3_p_0(
#line 642 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lvals_4,
#line 642 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement_5,
#line 642 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Affects_6);

#line 626 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(
#line 626 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lval_4,
#line 626 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15,
#line 626 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_16);

#line 596 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
#line 596 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Rval_4,
#line 596 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18,
#line 596 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_19);

#line 508 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
#line 508 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 508 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2);

#line 497 "ml_optimize.m"
static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
#line 497 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement_3);

#line 432 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_1(
#line 432 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg);

#line 432 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_2(
#line 432 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg);

#line 432 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_3(
#line 432 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg);

#line 409 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0(
#line 409 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 409 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Body0_5,
#line 409 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Body_6);

#line 336 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__generate_assign_args_5_p_0(
#line 336 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_1,
#line 336 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 336 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
#line 336 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4,
#line 336 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5);

#line 238 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(
#line 238 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 238 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 238 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6);

#line 217 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0(
#line 217 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 217 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Default0_5,
#line 217 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Default_6);

#line 209 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
#line 209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Case0_5,
#line 209 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Case_6);

#line 190 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2(
#line 190 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 190 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 190 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

#line 495 "ml_optimize.m"
static MR_Box MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
#line 495 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 495 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1);

#line 163 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
#line 163 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 163 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 163 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6);

#line 154 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statement_3_p_0(
#line 154 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9,
#line 154 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10,
#line 154 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statement_11);

#line 144 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0_1(
#line 144 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 144 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 144 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

#line 140 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0(
#line 140 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 140 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8,
#line 140 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_9);

#line 128 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(
#line 128 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 128 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8,
#line 128 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9);

#line 83 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0_1(
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 83 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2);

#line 85 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0(
#line 85 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__ModuleName_5,
#line 85 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Globals_6,
#line 85 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn0_7,
#line 85 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Defn_8);

#line 83 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 83 "ml_optimize.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1423 "ml_backend.ml_optimize.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 1431 "ml_backend.ml_optimize.c"
static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize____vpti_pred_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1440 "ml_backend.ml_optimize.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__pti_mlds_fully_qualified_name_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 1448 "ml_backend.ml_optimize.c"
static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[5] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

#line 1457 "ml_backend.ml_optimize.c"
static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[5] = {
  (MR_String) "oi_globals",
  (MR_String) "oi_module_name",
  (MR_String) "oi_entity_name",
  (MR_String) "oi_func_params",
  (MR_String) "oi_context"
};

#line 1466 "ml_backend.ml_optimize.c"
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
  NULL
};

#line 1481 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

#line 1486 "ml_backend.ml_optimize.c"
static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0
  }
};

#line 1495 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

#line 1500 "ml_backend.ml_optimize.c"
static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 1505 "ml_backend.ml_optimize.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_optimize____Unify____opt_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_optimize____Compare____opt_info_0_0_10001)),
  (MR_String) "ml_backend.ml_optimize",
  (MR_String) "opt_info",
  {
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0
  },
  {
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0
};

#line 1526 "ml_backend.ml_optimize.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_optimize__ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0 = {
  &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0
  }
};

#line 1534 "ml_backend.ml_optimize.c"
static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_optimize__ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1542 "ml_backend.ml_optimize.c"
static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4] = {
  (MR_String) "var_name",
  (MR_String) "var_value",
  (MR_String) "replace_count",
  (MR_String) "invalidated"
};

#line 1550 "ml_backend.ml_optimize.c"
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
  NULL
};

#line 1565 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

#line 1570 "ml_backend.ml_optimize.c"
static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0
  }
};

#line 1579 "ml_backend.ml_optimize.c"
static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

#line 1584 "ml_backend.ml_optimize.c"
static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1] = {
  (MR_Integer) 0
};

#line 1589 "ml_backend.ml_optimize.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001)),
  (MR_String) "ml_backend.ml_optimize",
  (MR_String) "var_elim_info",
  {
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0
  },
  {
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0
};

#line 1610 "ml_backend.ml_optimize.c"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
#line 1613 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1615 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2)
#line 1617 "ml_backend.ml_optimize.c"
{
#line 1619 "ml_backend.ml_optimize.c"
  {
#line 1621 "ml_backend.ml_optimize.c"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1624 "ml_backend.ml_optimize.c"
    {
#line 1626 "ml_backend.ml_optimize.c"
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize____Unify____opt_info_0_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2));
    }
#line 1629 "ml_backend.ml_optimize.c"
    return ml_backend__ml_optimize__succeeded;
#line 1631 "ml_backend.ml_optimize.c"
  }
#line 1633 "ml_backend.ml_optimize.c"
}

#line 1636 "ml_backend.ml_optimize.c"
static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0_10001(
#line 1639 "ml_backend.ml_optimize.c"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
#line 1641 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
#line 1643 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3)
#line 1645 "ml_backend.ml_optimize.c"
{
#line 1647 "ml_backend.ml_optimize.c"
  {
#line 1649 "ml_backend.ml_optimize.c"
    MR_Word ml_backend__ml_optimize__conv0_HeadVar__1_1;

#line 1652 "ml_backend.ml_optimize.c"
    {
#line 1654 "ml_backend.ml_optimize.c"
      ml_backend__ml_optimize____Compare____opt_info_0_0(&ml_backend__ml_optimize__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3));
    }
#line 1657 "ml_backend.ml_optimize.c"
    *ml_backend__ml_optimize__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_optimize__conv0_HeadVar__1_1));
#line 1659 "ml_backend.ml_optimize.c"
  }
#line 1661 "ml_backend.ml_optimize.c"
}

#line 1664 "ml_backend.ml_optimize.c"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001(
#line 1667 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1669 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2)
#line 1671 "ml_backend.ml_optimize.c"
{
#line 1673 "ml_backend.ml_optimize.c"
  {
#line 1675 "ml_backend.ml_optimize.c"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1678 "ml_backend.ml_optimize.c"
    {
#line 1680 "ml_backend.ml_optimize.c"
      ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize____Unify____var_elim_info_0_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2));
    }
#line 1683 "ml_backend.ml_optimize.c"
    return ml_backend__ml_optimize__succeeded;
#line 1685 "ml_backend.ml_optimize.c"
  }
#line 1687 "ml_backend.ml_optimize.c"
}

#line 1690 "ml_backend.ml_optimize.c"
static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001(
#line 1693 "ml_backend.ml_optimize.c"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_1,
#line 1695 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_2,
#line 1697 "ml_backend.ml_optimize.c"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3)
#line 1699 "ml_backend.ml_optimize.c"
{
#line 1701 "ml_backend.ml_optimize.c"
  {
#line 1703 "ml_backend.ml_optimize.c"
    MR_Word ml_backend__ml_optimize__conv0_HeadVar__1_1;

#line 1706 "ml_backend.ml_optimize.c"
    {
#line 1708 "ml_backend.ml_optimize.c"
      ml_backend__ml_optimize____Compare____var_elim_info_0_0(&ml_backend__ml_optimize__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_2), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3));
    }
#line 1711 "ml_backend.ml_optimize.c"
    *ml_backend__ml_optimize__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_optimize__conv0_HeadVar__1_1));
#line 1713 "ml_backend.ml_optimize.c"
  }
#line 1715 "ml_backend.ml_optimize.c"
}

#line 878 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_p_0(
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__RHS_11,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Qualifier_15,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__QualKind_16,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__ThisData_18,
#line 878 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__5_44)
#line 878 "ml_optimize.m"
{
#line 878 "ml_optimize.m"
  {
#line 878 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 878 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__OtherVarName_24;
#line 878 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__OtherInitializer_28;
#line 878 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__5_44, (MR_Integer) 0)));
#line 878 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__5_44, (MR_Integer) 3)));
#line 879 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__5_44, (MR_Integer) 1)));
#line 879 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__5_44, (MR_Integer) 2)));
#line 879 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___Type_27;
#line 879 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___GC_29;

#line 879 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 879 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 879 "ml_optimize.m"
      {
#line 879 "ml_optimize.m"
        ml_backend__ml_optimize__OtherVarName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, (MR_Integer) 0)));
#line 879 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 879 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 879 "ml_optimize.m"
          {
#line 879 "ml_optimize.m"
            ml_backend__ml_optimize___Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, (MR_Integer) 0)));
#line 879 "ml_optimize.m"
            ml_backend__ml_optimize__OtherInitializer_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, (MR_Integer) 1)));
#line 879 "ml_optimize.m"
            ml_backend__ml_optimize___GC_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, (MR_Integer) 2)));
#line 882 "ml_optimize.m"
            {
#line 882 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__QualOtherVar_30;
#line 882 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_48_48;

#line 882 "ml_optimize.m"
              {
#line 882 "ml_optimize.m"
                ml_backend__ml_optimize__QualOtherVar_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 882 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_30, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
#line 882 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_30, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
#line 882 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualOtherVar_30, 2) = ((MR_Box) (ml_backend__ml_optimize__OtherVarName_24));
#line 882 "ml_optimize.m"
              }
#line 883 "ml_optimize.m"
              {
#line 883 "ml_optimize.m"
                ml_backend__ml_optimize__V_48_48 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__QualOtherVar_30);
              }
#line 883 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_48_48 == (MR_Integer) 1);
#line 882 "ml_optimize.m"
            }
#line 884 "ml_optimize.m"
            if (!(ml_backend__ml_optimize__succeeded))
#line 885 "ml_optimize.m"
              {
#line 885 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_47_47;

#line 885 "ml_optimize.m"
                {
#line 885 "ml_optimize.m"
                  ml_backend__ml_optimize__V_47_47 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_optimize__OtherInitializer_28, ml_backend__ml_optimize__ThisData_18);
                }
#line 885 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_47_47 == (MR_Integer) 1);
#line 885 "ml_optimize.m"
              }
#line 879 "ml_optimize.m"
          }
#line 879 "ml_optimize.m"
      }
#line 878 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 878 "ml_optimize.m"
  }
#line 878 "ml_optimize.m"
}

#line 876 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_p_0(
#line 876 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_43,
#line 876 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_57)
#line 876 "ml_optimize.m"
{
#line 876 "ml_optimize.m"
  {
#line 876 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 876 "ml_optimize.m"
    {
#line 876 "ml_optimize.m"
      return ml_backend__ml_optimize__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_optimize__HeadVar__1_43, ((MR_Box) (ml_backend__ml_optimize__HeadVar__2_57)));
    }
#line 876 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 876 "ml_optimize.m"
  }
#line 876 "ml_optimize.m"
}

#line 969 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0(
#line 969 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3)
#line 969 "ml_optimize.m"
{
#line 969 "ml_optimize.m"
  {
#line 969 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 969 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastX_15 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;
#line 969 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastY_16 = (MR_Integer) ml_backend__ml_optimize__HeadVar__3_3;

#line 969 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_15 == ml_backend__ml_optimize__CastY_16);
#line 969 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 1879 "ml_backend.ml_optimize.c"
      *ml_backend__ml_optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 969 "ml_optimize.m"
    else
#line 969 "ml_optimize.m"
      {
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 969 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 969 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 2)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 3)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_12_12;

#line 969 "ml_optimize.m"
        {
#line 969 "ml_optimize.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], &ml_backend__ml_optimize__V_12_12, ((MR_Box) (ml_backend__ml_optimize__V_4_4)), ((MR_Box) (ml_backend__ml_optimize__V_8_8)));
        }
#line 1909 "ml_backend.ml_optimize.c"
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_12_12 == (MR_Integer) 0);
#line 969 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 969 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 969 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_12_12;
#line 969 "ml_optimize.m"
        else
#line 969 "ml_optimize.m"
          {
#line 969 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_13_13;

#line 969 "ml_optimize.m"
            {
#line 969 "ml_optimize.m"
              ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_optimize__V_13_13, ml_backend__ml_optimize__V_5_5, ml_backend__ml_optimize__V_9_9);
            }
#line 1929 "ml_backend.ml_optimize.c"
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_13_13 == (MR_Integer) 0);
#line 969 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 969 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 969 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_13_13;
#line 969 "ml_optimize.m"
            else
#line 969 "ml_optimize.m"
              {
#line 969 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_14_14;

#line 969 "ml_optimize.m"
                {
#line 969 "ml_optimize.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_optimize__V_14_14, ml_backend__ml_optimize__V_6_6, ml_backend__ml_optimize__V_10_10);
                }
#line 1949 "ml_backend.ml_optimize.c"
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_14_14 == (MR_Integer) 0);
#line 969 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 969 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 969 "ml_optimize.m"
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_14_14;
#line 969 "ml_optimize.m"
                else
#line 969 "ml_optimize.m"
                  {
#line 969 "ml_optimize.m"
                    MR_Integer ml_backend__ml_optimize__V_21_21 = (MR_Integer) ml_backend__ml_optimize__V_7_7;
#line 969 "ml_optimize.m"
                    MR_Integer ml_backend__ml_optimize__V_22_22 = (MR_Integer) ml_backend__ml_optimize__V_11_11;

#line 969 "ml_optimize.m"
                    {
#line 969 "ml_optimize.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__V_21_21, ml_backend__ml_optimize__V_22_22);
#line 969 "ml_optimize.m"
                      return;
                    }
#line 969 "ml_optimize.m"
                  }
#line 969 "ml_optimize.m"
              }
#line 969 "ml_optimize.m"
          }
#line 969 "ml_optimize.m"
      }
#line 969 "ml_optimize.m"
  }
#line 969 "ml_optimize.m"
}

#line 969 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0(
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 969 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2)
#line 969 "ml_optimize.m"
{
#line 969 "ml_optimize.m"
  {
#line 969 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 969 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastX_11 = (MR_Integer) ml_backend__ml_optimize__HeadVar__1_1;
#line 969 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastY_12 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;

#line 969 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_11 == ml_backend__ml_optimize__CastY_12);
#line 969 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 969 "ml_optimize.m"
      ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 969 "ml_optimize.m"
    else
#line 969 "ml_optimize.m"
      {
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 969 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 969 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 969 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));

#line 2031 "ml_backend.ml_optimize.c"
        {
#line 2033 "ml_backend.ml_optimize.c"
          ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], ((MR_Box) (ml_backend__ml_optimize__V_3_3)), ((MR_Box) (ml_backend__ml_optimize__V_7_7)));
        }
#line 969 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 969 "ml_optimize.m"
          {
#line 2040 "ml_backend.ml_optimize.c"
            {
#line 2042 "ml_backend.ml_optimize.c"
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__V_4_4, ml_backend__ml_optimize__V_8_8);
            }
#line 969 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 969 "ml_optimize.m"
              {
#line 2049 "ml_backend.ml_optimize.c"
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_5_5 == ml_backend__ml_optimize__V_9_9);
#line 969 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 2053 "ml_backend.ml_optimize.c"
                  ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_6_6 == ml_backend__ml_optimize__V_10_10);
#line 969 "ml_optimize.m"
              }
#line 969 "ml_optimize.m"
          }
#line 969 "ml_optimize.m"
      }
#line 969 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 969 "ml_optimize.m"
  }
#line 969 "ml_optimize.m"
}

#line 64 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0(
#line 64 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__1_1,
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3)
#line 64 "ml_optimize.m"
{
#line 64 "ml_optimize.m"
  {
#line 64 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 64 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastX_18 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;
#line 64 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastY_19 = (MR_Integer) ml_backend__ml_optimize__HeadVar__3_3;

#line 64 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_18 == ml_backend__ml_optimize__CastY_19);
#line 64 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 2092 "ml_backend.ml_optimize.c"
      *ml_backend__ml_optimize__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "ml_optimize.m"
    else
#line 64 "ml_optimize.m"
      {
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 4)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 2)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 3)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 4)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_14_14;

#line 64 "ml_optimize.m"
        {
#line 64 "ml_optimize.m"
          libs__globals____Compare____globals_0_0(&ml_backend__ml_optimize__V_14_14, ml_backend__ml_optimize__V_4_4, ml_backend__ml_optimize__V_9_9);
        }
#line 2126 "ml_backend.ml_optimize.c"
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_14_14 == (MR_Integer) 0);
#line 64 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 64 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_14_14;
#line 64 "ml_optimize.m"
        else
#line 64 "ml_optimize.m"
          {
#line 64 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_15_15;

#line 64 "ml_optimize.m"
            {
#line 64 "ml_optimize.m"
              ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_optimize__V_15_15, ml_backend__ml_optimize__V_5_5, ml_backend__ml_optimize__V_10_10);
            }
#line 2146 "ml_backend.ml_optimize.c"
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_15_15 == (MR_Integer) 0);
#line 64 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 64 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_15_15;
#line 64 "ml_optimize.m"
            else
#line 64 "ml_optimize.m"
              {
#line 64 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_16_16;

#line 64 "ml_optimize.m"
                {
#line 64 "ml_optimize.m"
                  ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_optimize__V_16_16, ml_backend__ml_optimize__V_6_6, ml_backend__ml_optimize__V_11_11);
                }
#line 2166 "ml_backend.ml_optimize.c"
                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_16_16 == (MR_Integer) 0);
#line 64 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 64 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
                  *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_16_16;
#line 64 "ml_optimize.m"
                else
#line 64 "ml_optimize.m"
                  {
#line 64 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_17_17;

#line 64 "ml_optimize.m"
                    {
#line 64 "ml_optimize.m"
                      ml_backend__mlds____Compare____mlds_func_params_0_0(&ml_backend__ml_optimize__V_17_17, ml_backend__ml_optimize__V_7_7, ml_backend__ml_optimize__V_12_12);
                    }
#line 2186 "ml_backend.ml_optimize.c"
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_17_17 == (MR_Integer) 0);
#line 64 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 64 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
                      *ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__V_17_17;
#line 64 "ml_optimize.m"
                    else
#line 64 "ml_optimize.m"
                      {
#line 64 "ml_optimize.m"
                        ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__V_8_8, ml_backend__ml_optimize__V_13_13);
#line 64 "ml_optimize.m"
                        return;
                      }
#line 64 "ml_optimize.m"
                  }
#line 64 "ml_optimize.m"
              }
#line 64 "ml_optimize.m"
          }
#line 64 "ml_optimize.m"
      }
#line 64 "ml_optimize.m"
  }
#line 64 "ml_optimize.m"
}

#line 64 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0(
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 64 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2)
#line 64 "ml_optimize.m"
{
#line 64 "ml_optimize.m"
  {
#line 64 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 64 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastX_13 = (MR_Integer) ml_backend__ml_optimize__HeadVar__1_1;
#line 64 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__CastY_14 = (MR_Integer) ml_backend__ml_optimize__HeadVar__2_2;

#line 64 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__CastX_13 == ml_backend__ml_optimize__CastY_14);
#line 64 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
      ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 64 "ml_optimize.m"
    else
#line 64 "ml_optimize.m"
      {
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 4)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 2)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 3)));
#line 64 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 4)));

#line 2265 "ml_backend.ml_optimize.c"
        {
#line 2267 "ml_backend.ml_optimize.c"
          ml_backend__ml_optimize__succeeded = libs__globals____Unify____globals_0_0(ml_backend__ml_optimize__V_3_3, ml_backend__ml_optimize__V_8_8);
        }
#line 64 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
          {
#line 2274 "ml_backend.ml_optimize.c"
            {
#line 2276 "ml_backend.ml_optimize.c"
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__V_4_4, ml_backend__ml_optimize__V_9_9);
            }
#line 64 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
              {
#line 2283 "ml_backend.ml_optimize.c"
                {
#line 2285 "ml_backend.ml_optimize.c"
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_optimize__V_5_5, ml_backend__ml_optimize__V_10_10);
                }
#line 64 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 64 "ml_optimize.m"
                  {
#line 2292 "ml_backend.ml_optimize.c"
                    {
#line 2294 "ml_backend.ml_optimize.c"
                      ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__ml_optimize__V_6_6, ml_backend__ml_optimize__V_11_11);
                    }
#line 64 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 2299 "ml_backend.ml_optimize.c"
                      {
#line 2301 "ml_backend.ml_optimize.c"
                        return ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_optimize__V_7_7, ml_backend__ml_optimize__V_12_12);
                      }
#line 64 "ml_optimize.m"
                  }
#line 64 "ml_optimize.m"
              }
#line 64 "ml_optimize.m"
          }
#line 64 "ml_optimize.m"
      }
#line 64 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 64 "ml_optimize.m"
  }
#line 64 "ml_optimize.m"
}

#line 1539 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
#line 1539 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Op0_5,
#line 1539 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Op_6,
#line 1539 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13,
#line 1539 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14)
#line 1539 "ml_optimize.m"
{
#line 1544 "ml_optimize.m"
  {
#line 1544 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1544 "ml_optimize.m"
    if ((((ml_backend__ml_optimize__Op0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((ml_backend__ml_optimize__Op0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 1554 "ml_optimize.m"
      {
#line 1555 "ml_optimize.m"
        *ml_backend__ml_optimize__Op_6 = ml_backend__ml_optimize__Op0_5;
#line 1555 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13;
#line 1554 "ml_optimize.m"
      }
#line 1544 "ml_optimize.m"
    else
#line 1544 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Op0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1548 "ml_optimize.m"
        {
#line 1548 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Op0_5, (MR_Integer) 0)));
#line 1548 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Op0_5, (MR_Integer) 1)));
#line 1548 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Rval_12;

#line 1549 "ml_optimize.m"
          {
#line 1549 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_10, &ml_backend__ml_optimize__Rval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
          }
#line 1550 "ml_optimize.m"
          {
#line 1550 "ml_optimize.m"
            MR_Word base;
#line 1550 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "ml_optimize.m"
            *ml_backend__ml_optimize__Op_6 = base;
#line 1550 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_12));
#line 1550 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Reason_11));
#line 1550 "ml_optimize.m"
          }
#line 1548 "ml_optimize.m"
        }
#line 1544 "ml_optimize.m"
      else
#line 1544 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Op0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1544 "ml_optimize.m"
          {
#line 1544 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Lval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Op0_5, (MR_Integer) 0)));
#line 1544 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Lval_9;

#line 1545 "ml_optimize.m"
            {
#line 1545 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
            }
#line 1546 "ml_optimize.m"
            {
#line 1546 "ml_optimize.m"
              MR_Word base;
#line 1546 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1546 "ml_optimize.m"
              *ml_backend__ml_optimize__Op_6 = base;
#line 1546 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_9));
#line 1546 "ml_optimize.m"
            }
#line 1544 "ml_optimize.m"
          }
#line 1544 "ml_optimize.m"
        else
#line 1544 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Op0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Op0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1557 "ml_optimize.m"
            {
#line 1557 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Lval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Op0_5, (MR_Integer) 1)));
#line 1557 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Lval_20;

#line 1558 "ml_optimize.m"
              {
#line 1558 "ml_optimize.m"
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_19, &ml_backend__ml_optimize__Lval_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
              }
#line 1559 "ml_optimize.m"
              {
#line 1559 "ml_optimize.m"
                MR_Word base;
#line 1559 "ml_optimize.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "ml_optimize.m"
                *ml_backend__ml_optimize__Op_6 = base;
#line 1559 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1559 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_20));
#line 1559 "ml_optimize.m"
              }
#line 1557 "ml_optimize.m"
            }
#line 1544 "ml_optimize.m"
          else
#line 1561 "ml_optimize.m"
            {
#line 1561 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Rval0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Op0_5, (MR_Integer) 1)));
#line 1561 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Rval_22;

#line 1562 "ml_optimize.m"
              {
#line 1562 "ml_optimize.m"
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_21, &ml_backend__ml_optimize__Rval_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_14);
              }
#line 1563 "ml_optimize.m"
              {
#line 1563 "ml_optimize.m"
                MR_Word base;
#line 1563 "ml_optimize.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1563 "ml_optimize.m"
                *ml_backend__ml_optimize__Op_6 = base;
#line 1563 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1563 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_22));
#line 1563 "ml_optimize.m"
              }
#line 1561 "ml_optimize.m"
            }
#line 1544 "ml_optimize.m"
  }
#line 1539 "ml_optimize.m"
}

#line 1516 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
#line 1516 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Component0_5,
#line 1516 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Component_6,
#line 1516 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
#line 1516 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19)
#line 1516 "ml_optimize.m"
{
#line 1527 "ml_optimize.m"
  {
#line 1527 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1527 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Component0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1530 "ml_optimize.m"
      {
#line 1530 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Component0_5, (MR_Integer) 0)));
#line 1530 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval_15;

#line 1531 "ml_optimize.m"
        {
#line 1531 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_14, &ml_backend__ml_optimize__Rval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);
        }
#line 1532 "ml_optimize.m"
        {
#line 1532 "ml_optimize.m"
          MR_Word base;
#line 1532 "ml_optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "ml_optimize.m"
          *ml_backend__ml_optimize__Component_6 = base;
#line 1532 "ml_optimize.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_15));
#line 1532 "ml_optimize.m"
        }
#line 1530 "ml_optimize.m"
      }
#line 1527 "ml_optimize.m"
    else
#line 1527 "ml_optimize.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Component0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1534 "ml_optimize.m"
        {
#line 1534 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Lval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Component0_5, (MR_Integer) 1)));
#line 1534 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Lval_17;

#line 1535 "ml_optimize.m"
          {
#line 1535 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_16, &ml_backend__ml_optimize__Lval_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);
          }
#line 1536 "ml_optimize.m"
          {
#line 1536 "ml_optimize.m"
            MR_Word base;
#line 1536 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "ml_optimize.m"
            *ml_backend__ml_optimize__Component_6 = base;
#line 1536 "ml_optimize.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1536 "ml_optimize.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_17));
#line 1536 "ml_optimize.m"
          }
#line 1534 "ml_optimize.m"
        }
#line 1527 "ml_optimize.m"
      else
#line 1527 "ml_optimize.m"
        {
#line 1528 "ml_optimize.m"
          *ml_backend__ml_optimize__Component_6 = ml_backend__ml_optimize__Component0_5;
#line 1528 "ml_optimize.m"
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18;
#line 1527 "ml_optimize.m"
        }
#line 1527 "ml_optimize.m"
  }
#line 1516 "ml_optimize.m"
}

#line 1500 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
#line 1500 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Cond0_5,
#line 1500 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Cond_6,
#line 1500 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
#line 1500 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
#line 1500 "ml_optimize.m"
{
#line 1506 "ml_optimize.m"
  {
#line 1506 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1506 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Cond0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1510 "ml_optimize.m"
      {
#line 1510 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Low0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 0)));
#line 1510 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__High0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 1)));
#line 1510 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Low_12;
#line 1510 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__High_13;
#line 1510 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16;

#line 1511 "ml_optimize.m"
        {
#line 1511 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Low0_10, &ml_backend__ml_optimize__Low_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
        }
#line 1512 "ml_optimize.m"
        {
#line 1512 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__High0_11, &ml_backend__ml_optimize__High_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
        }
#line 1513 "ml_optimize.m"
        {
#line 1513 "ml_optimize.m"
          MR_Word base;
#line 1513 "ml_optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "ml_optimize.m"
          *ml_backend__ml_optimize__Cond_6 = base;
#line 1513 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Low_12));
#line 1513 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__High_13));
#line 1513 "ml_optimize.m"
        }
#line 1510 "ml_optimize.m"
      }
#line 1506 "ml_optimize.m"
    else
#line 1506 "ml_optimize.m"
      {
#line 1506 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Cond0_5, (MR_Integer) 0)));
#line 1506 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval_9;

#line 1507 "ml_optimize.m"
        {
#line 1507 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
        }
#line 1508 "ml_optimize.m"
        {
#line 1508 "ml_optimize.m"
          MR_Word base;
#line 1508 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "ml_optimize.m"
          *ml_backend__ml_optimize__Cond_6 = base;
#line 1508 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_9));
#line 1508 "ml_optimize.m"
        }
#line 1506 "ml_optimize.m"
      }
#line 1506 "ml_optimize.m"
  }
#line 1500 "ml_optimize.m"
}

#line 1299 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_3(
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1299 "ml_optimize.m"
{
#line 1299 "ml_optimize.m"
  {
#line 1299 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1299 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv7_Lval_6;
#line 1299 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_19;

#line 1299 "ml_optimize.m"
    {
#line 1299 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv7_Lval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_19);
    }
#line 1299 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv7_Lval_6));
#line 1299 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv6_STATE_VARIABLE_VarElimInfo_19));
#line 1299 "ml_optimize.m"
  }
#line 1299 "ml_optimize.m"
}

#line 1238 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2(
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1238 "ml_optimize.m"
{
#line 1238 "ml_optimize.m"
  {
#line 1238 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1238 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv4_Rval_6;
#line 1238 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_28;

#line 1238 "ml_optimize.m"
    {
#line 1238 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_28);
    }
#line 1238 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_Rval_6));
#line 1238 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_28));
#line 1238 "ml_optimize.m"
  }
#line 1238 "ml_optimize.m"
}

#line 1491 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1(
#line 1491 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1491 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1491 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1491 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1491 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1491 "ml_optimize.m"
{
#line 1491 "ml_optimize.m"
  {
#line 1491 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1491 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Component_6;
#line 1491 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19;

#line 1491 "ml_optimize.m"
    {
#line 1491 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Component_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19);
    }
#line 1491 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Component_6));
#line 1491 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19));
#line 1491 "ml_optimize.m"
  }
#line 1491 "ml_optimize.m"
}

#line 1444 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(
#line 1444 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 1444 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6,
#line 1444 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34,
#line 1444 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35)
#line 1444 "ml_optimize.m"
{
#line 1452 "ml_optimize.m"
  {
#line 1452 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1452 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1455 "ml_optimize.m"
      {
#line 1455 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Lval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
#line 1455 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1455 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Lval_11;
#line 1455 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval_12;
#line 1455 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47;

#line 1456 "ml_optimize.m"
        {
#line 1456 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_9, &ml_backend__ml_optimize__Lval_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47);
        }
#line 1457 "ml_optimize.m"
        {
#line 1457 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_10, &ml_backend__ml_optimize__Rval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_47_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
        }
#line 1458 "ml_optimize.m"
        {
#line 1458 "ml_optimize.m"
          MR_Word base;
#line 1458 "ml_optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "ml_optimize.m"
          *ml_backend__ml_optimize__Stmt_6 = base;
#line 1458 "ml_optimize.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_11));
#line 1458 "ml_optimize.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_12));
#line 1458 "ml_optimize.m"
        }
#line 1455 "ml_optimize.m"
      }
#line 1452 "ml_optimize.m"
    else
#line 1452 "ml_optimize.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 1)))) || ((ml_backend__ml_optimize__Stmt0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 1452 "ml_optimize.m"
        {
#line 1453 "ml_optimize.m"
          *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
#line 1453 "ml_optimize.m"
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34;
#line 1452 "ml_optimize.m"
        }
#line 1452 "ml_optimize.m"
      else
#line 1452 "ml_optimize.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1460 "ml_optimize.m"
          {
#line 1460 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45;
#line 1460 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Lval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1460 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1460 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Lval_51;
#line 1460 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_52;

#line 1461 "ml_optimize.m"
            {
#line 1461 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_49, &ml_backend__ml_optimize__Lval_51, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45);
            }
#line 1462 "ml_optimize.m"
            {
#line 1462 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_50, &ml_backend__ml_optimize__Rval_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_45_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
            }
#line 1463 "ml_optimize.m"
            {
#line 1463 "ml_optimize.m"
              MR_Word base;
#line 1463 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "ml_optimize.m"
              *ml_backend__ml_optimize__Stmt_6 = base;
#line 1463 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1463 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_51));
#line 1463 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_52));
#line 1463 "ml_optimize.m"
            }
#line 1460 "ml_optimize.m"
          }
#line 1452 "ml_optimize.m"
        else
#line 1452 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1465 "ml_optimize.m"
            {
#line 1465 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Rval0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1465 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Rval_54;

#line 1466 "ml_optimize.m"
              {
#line 1466 "ml_optimize.m"
                ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_53, &ml_backend__ml_optimize__Rval_54, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
              }
#line 1467 "ml_optimize.m"
              {
#line 1467 "ml_optimize.m"
                MR_Word base;
#line 1467 "ml_optimize.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "ml_optimize.m"
                *ml_backend__ml_optimize__Stmt_6 = base;
#line 1467 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1467 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_54));
#line 1467 "ml_optimize.m"
              }
#line 1465 "ml_optimize.m"
            }
#line 1452 "ml_optimize.m"
          else
#line 1452 "ml_optimize.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1490 "ml_optimize.m"
              {
#line 1490 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__TypeCtorInfo_64_64 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
#line 1490 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Lang_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1490 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Components0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1490 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Components_29;
#line 1491 "ml_optimize.m"
                MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35;

#line 1491 "ml_optimize.m"
                {
#line 1491 "ml_optimize.m"
                  mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_64_64, ml_backend__ml_optimize__TypeCtorInfo_64_64, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[9], ml_backend__ml_optimize__Components0_28, &ml_backend__ml_optimize__Components_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
                }
#line 1491 "ml_optimize.m"
                *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_35);
#line 1493 "ml_optimize.m"
                {
#line 1493 "ml_optimize.m"
                  MR_Word base;
#line 1493 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "ml_optimize.m"
                  *ml_backend__ml_optimize__Stmt_6 = base;
#line 1493 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1493 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lang_27));
#line 1493 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Components_29));
#line 1493 "ml_optimize.m"
                }
#line 1490 "ml_optimize.m"
              }
#line 1452 "ml_optimize.m"
            else
#line 1452 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1478 "ml_optimize.m"
                {
#line 1478 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Lval0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1478 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Lval_56;

#line 1479 "ml_optimize.m"
                  {
#line 1479 "ml_optimize.m"
                    ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_55, &ml_backend__ml_optimize__Lval_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
                  }
#line 1480 "ml_optimize.m"
                  {
#line 1480 "ml_optimize.m"
                    MR_Word base;
#line 1480 "ml_optimize.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "ml_optimize.m"
                    *ml_backend__ml_optimize__Stmt_6 = base;
#line 1480 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1480 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_56));
#line 1480 "ml_optimize.m"
                  }
#line 1478 "ml_optimize.m"
                }
#line 1452 "ml_optimize.m"
              else
#line 1452 "ml_optimize.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1471 "ml_optimize.m"
                  {
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_79;
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Target0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__MaybeTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__ExplicitSecTag_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__MaybeSize_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__MaybeCtorName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 7)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 8)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__MayUseAtomic_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 9)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__MaybeAllocId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 10)));
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Target_23;
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Args_24;
#line 1471 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42;
#line 1238 "ml_optimize.m"
                    MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35;

#line 1472 "ml_optimize.m"
                    {
#line 1472 "ml_optimize.m"
                      ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Target0_13, &ml_backend__ml_optimize__Target_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42);
                    }
#line 3041 "ml_backend.ml_optimize.c"
                    ml_backend__ml_optimize__TypeCtorInfo_18_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 1238 "ml_optimize.m"
                    {
#line 1238 "ml_optimize.m"
                      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_79, ml_backend__ml_optimize__TypeCtorInfo_18_79, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[10], ml_backend__ml_optimize__Args0_19, &ml_backend__ml_optimize__Args_24, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_42_42)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
                    }
#line 1238 "ml_optimize.m"
                    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_35);
#line 1474 "ml_optimize.m"
                    {
#line 1474 "ml_optimize.m"
                      MR_Word base;
#line 1474 "ml_optimize.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "ml_optimize.m"
                      *ml_backend__ml_optimize__Stmt_6 = base;
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Target_23));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeTag_14));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__ExplicitSecTag_15));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Type_16));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__MaybeSize_17));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__MaybeCtorName_18));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_optimize__Args_24));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_optimize__ArgTypes_20));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ml_backend__ml_optimize__MayUseAtomic_21));
#line 1474 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ml_backend__ml_optimize__MaybeAllocId_22));
#line 1474 "ml_optimize.m"
                    }
#line 1471 "ml_optimize.m"
                  }
#line 1452 "ml_optimize.m"
                else
#line 1452 "ml_optimize.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1495 "ml_optimize.m"
                    {
#line 1495 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_94 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
#line 1495 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Vs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1495 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Lvals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 1495 "ml_optimize.m"
                      MR_String ml_backend__ml_optimize__Code_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
#line 1495 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Lvals_33;
#line 1495 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Lang_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1299 "ml_optimize.m"
                      MR_Box ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35;

#line 1299 "ml_optimize.m"
                      {
#line 1299 "ml_optimize.m"
                        mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_94, ml_backend__ml_optimize__TypeCtorInfo_18_94, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[11], ml_backend__ml_optimize__Lvals0_31, &ml_backend__ml_optimize__Lvals_33, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34)), &ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
                      }
#line 1299 "ml_optimize.m"
                      *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35 = ((MR_Word) ml_backend__ml_optimize__conv8_STATE_VARIABLE_VarElimInfo_35);
#line 1497 "ml_optimize.m"
                      {
#line 1497 "ml_optimize.m"
                        MR_Word base;
#line 1497 "ml_optimize.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "ml_optimize.m"
                        *ml_backend__ml_optimize__Stmt_6 = base;
#line 1497 "ml_optimize.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1497 "ml_optimize.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lang_59));
#line 1497 "ml_optimize.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Vs_30));
#line 1497 "ml_optimize.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Lvals_33));
#line 1497 "ml_optimize.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Code_32));
#line 1497 "ml_optimize.m"
                      }
#line 1495 "ml_optimize.m"
                    }
#line 1452 "ml_optimize.m"
                  else
#line 1452 "ml_optimize.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1482 "ml_optimize.m"
                      {
#line 1482 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Rval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1482 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Rval_58;

#line 1483 "ml_optimize.m"
                        {
#line 1483 "ml_optimize.m"
                          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_57, &ml_backend__ml_optimize__Rval_58, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
                        }
#line 1484 "ml_optimize.m"
                        {
#line 1484 "ml_optimize.m"
                          MR_Word base;
#line 1484 "ml_optimize.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "ml_optimize.m"
                          *ml_backend__ml_optimize__Stmt_6 = base;
#line 1484 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1484 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_58));
#line 1484 "ml_optimize.m"
                        }
#line 1482 "ml_optimize.m"
                      }
#line 1452 "ml_optimize.m"
                    else
#line 1486 "ml_optimize.m"
                      {
#line 1486 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__TrailOp0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1486 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__TrailOp_26;

#line 1487 "ml_optimize.m"
                        {
#line 1487 "ml_optimize.m"
                          ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(ml_backend__ml_optimize__TrailOp0_25, &ml_backend__ml_optimize__TrailOp_26, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_34, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_35);
                        }
#line 1488 "ml_optimize.m"
                        {
#line 1488 "ml_optimize.m"
                          MR_Word base;
#line 1488 "ml_optimize.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "ml_optimize.m"
                          *ml_backend__ml_optimize__Stmt_6 = base;
#line 1488 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1488 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TrailOp_26));
#line 1488 "ml_optimize.m"
                        }
#line 1486 "ml_optimize.m"
                      }
#line 1452 "ml_optimize.m"
  }
#line 1444 "ml_optimize.m"
}

#line 1428 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
#line 1428 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Default0_5,
#line 1428 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Default_6,
#line 1428 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10,
#line 1428 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11)
#line 1428 "ml_optimize.m"
{
#line 1436 "ml_optimize.m"
  {
#line 1436 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1436 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Default0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1439 "ml_optimize.m"
      {
#line 1439 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement0_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default0_5), (MR_Integer) 1);
#line 1439 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement_9;
#line 1439 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Stmt0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_8, (MR_Integer) 0)));
#line 1439 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_8, (MR_Integer) 1)));
#line 1439 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Stmt_20;

#line 1351 "ml_optimize.m"
        {
#line 1351 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_18, &ml_backend__ml_optimize__Stmt_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11);
        }
#line 1352 "ml_optimize.m"
        {
#line 1352 "ml_optimize.m"
          ml_backend__ml_optimize__Statement_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_9, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_20));
#line 1352 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_9, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_19));
#line 1352 "ml_optimize.m"
        }
#line 1441 "ml_optimize.m"
        *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_9);
#line 1439 "ml_optimize.m"
      }
#line 1436 "ml_optimize.m"
    else
#line 1436 "ml_optimize.m"
      {
#line 1437 "ml_optimize.m"
        *ml_backend__ml_optimize__Default_6 = ml_backend__ml_optimize__Default0_5;
#line 1437 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_11 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_10;
#line 1436 "ml_optimize.m"
      }
#line 1436 "ml_optimize.m"
  }
#line 1428 "ml_optimize.m"
}

#line 1423 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1(
#line 1423 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1423 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1423 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1423 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1423 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1423 "ml_optimize.m"
{
#line 1423 "ml_optimize.m"
  {
#line 1423 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1423 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Cond_6;
#line 1423 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15;

#line 1423 "ml_optimize.m"
    {
#line 1423 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Cond_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    }
#line 1423 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Cond_6));
#line 1423 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15));
#line 1423 "ml_optimize.m"
  }
#line 1423 "ml_optimize.m"
}

#line 1417 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(
#line 1417 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Case0_5,
#line 1417 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Case_6,
#line 1417 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
#line 1417 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
#line 1417 "ml_optimize.m"
{
#line 1420 "ml_optimize.m"
  {
#line 1420 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_24_24;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__FirstCond0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 0)));
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__LaterConds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 1)));
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Statement0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__FirstCond_11;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__LaterConds_12;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Statement_13;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt0_31;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_32;
#line 1420 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt_33;
#line 1423 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18;

#line 1422 "ml_optimize.m"
    {
#line 1422 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(ml_backend__ml_optimize__FirstCond0_8, &ml_backend__ml_optimize__FirstCond_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16);
    }
#line 3355 "ml_backend.ml_optimize.c"
    ml_backend__ml_optimize__TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
#line 1423 "ml_optimize.m"
    {
#line 1423 "ml_optimize.m"
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_24_24, ml_backend__ml_optimize__TypeCtorInfo_24_24, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[8], ml_backend__ml_optimize__LaterConds0_9, &ml_backend__ml_optimize__LaterConds_12, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_16_16)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
    }
#line 1423 "ml_optimize.m"
    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_18_18);
#line 1350 "ml_optimize.m"
    ml_backend__ml_optimize__Stmt0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_10, (MR_Integer) 0)));
#line 1350 "ml_optimize.m"
    ml_backend__ml_optimize__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_10, (MR_Integer) 1)));
#line 1351 "ml_optimize.m"
    {
#line 1351 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_31, &ml_backend__ml_optimize__Stmt_33, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_18_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
    }
#line 1352 "ml_optimize.m"
    {
#line 1352 "ml_optimize.m"
      ml_backend__ml_optimize__Statement_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_13, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_33));
#line 1352 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_13, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_32));
#line 1352 "ml_optimize.m"
    }
#line 1426 "ml_optimize.m"
    {
#line 1426 "ml_optimize.m"
      MR_Word base;
#line 1426 "ml_optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "ml_optimize.m"
      *ml_backend__ml_optimize__Case_6 = base;
#line 1426 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__FirstCond_11));
#line 1426 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterConds_12));
#line 1426 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_13));
#line 1426 "ml_optimize.m"
    }
#line 1420 "ml_optimize.m"
  }
#line 1417 "ml_optimize.m"
}

#line 1377 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1(
#line 1377 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1377 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1377 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1377 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1377 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1377 "ml_optimize.m"
{
#line 1377 "ml_optimize.m"
  {
#line 1377 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1377 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Case_6;
#line 1377 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15;

#line 1377 "ml_optimize.m"
    {
#line 1377 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Case_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15);
    }
#line 1377 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Case_6));
#line 1377 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_15));
#line 1377 "ml_optimize.m"
  }
#line 1377 "ml_optimize.m"
}

#line 1354 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(
#line 1354 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 1354 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6,
#line 1354 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52,
#line 1354 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53)
#line 1354 "ml_optimize.m"
{
#line 1359 "ml_optimize.m"
  {
#line 1359 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1359 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1359 "ml_optimize.m"
      {
#line 1359 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
#line 1359 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1359 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns_10;
#line 1359 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements_11;

#line 1360 "ml_optimize.m"
        {
#line 1360 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(ml_backend__ml_optimize__Defns0_8, &ml_backend__ml_optimize__Defns_10, ml_backend__ml_optimize__Statements0_9, &ml_backend__ml_optimize__Statements_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
        }
#line 1362 "ml_optimize.m"
        {
#line 1362 "ml_optimize.m"
          MR_Word base;
#line 1362 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "ml_optimize.m"
          *ml_backend__ml_optimize__Stmt_6 = base;
#line 1362 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_10));
#line 1362 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_11));
#line 1362 "ml_optimize.m"
        }
#line 1359 "ml_optimize.m"
      }
#line 1359 "ml_optimize.m"
    else
#line 1359 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1369 "ml_optimize.m"
        {
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Cond0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Then0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__MaybeElse0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Cond_20;
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Then_21;
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__MaybeElse_22;
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69;
#line 1369 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70;

#line 1370 "ml_optimize.m"
          {
#line 1370 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Cond0_17, &ml_backend__ml_optimize__Cond_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69);
          }
#line 1371 "ml_optimize.m"
          {
#line 1371 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Then0_18, &ml_backend__ml_optimize__Then_21, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_69_69, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70);
          }
#line 1372 "ml_optimize.m"
          {
#line 1372 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(ml_backend__ml_optimize__MaybeElse0_19, &ml_backend__ml_optimize__MaybeElse_22, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_70_70, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
          }
#line 1373 "ml_optimize.m"
          {
#line 1373 "ml_optimize.m"
            MR_Word base;
#line 1373 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "ml_optimize.m"
            *ml_backend__ml_optimize__Stmt_6 = base;
#line 1373 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Cond_20));
#line 1373 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_21));
#line 1373 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_22));
#line 1373 "ml_optimize.m"
          }
#line 1369 "ml_optimize.m"
        }
#line 1359 "ml_optimize.m"
      else
#line 1359 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1364 "ml_optimize.m"
          {
#line 1364 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
#line 1364 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1364 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Statement0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1364 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_15;
#line 1364 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Statement_16;
#line 1364 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72;

#line 1365 "ml_optimize.m"
            {
#line 1365 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_13, &ml_backend__ml_optimize__Rval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72);
            }
#line 1366 "ml_optimize.m"
            {
#line 1366 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_14, &ml_backend__ml_optimize__Statement_16, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_72_72, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
            }
#line 1367 "ml_optimize.m"
            {
#line 1367 "ml_optimize.m"
              MR_Word base;
#line 1367 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "ml_optimize.m"
              *ml_backend__ml_optimize__Stmt_6 = base;
#line 1367 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_12));
#line 1367 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_15));
#line 1367 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_16));
#line 1367 "ml_optimize.m"
            }
#line 1364 "ml_optimize.m"
          }
#line 1359 "ml_optimize.m"
        else
#line 1359 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1412 "ml_optimize.m"
            {
#line 1412 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__AtomicStmt0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1412 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__AtomicStmt_51;

#line 1413 "ml_optimize.m"
              {
#line 1413 "ml_optimize.m"
                ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(ml_backend__ml_optimize__AtomicStmt0_50, &ml_backend__ml_optimize__AtomicStmt_51, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
              }
#line 1414 "ml_optimize.m"
              {
#line 1414 "ml_optimize.m"
                MR_Word base;
#line 1414 "ml_optimize.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "ml_optimize.m"
                *ml_backend__ml_optimize__Stmt_6 = base;
#line 1414 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1414 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_51));
#line 1414 "ml_optimize.m"
              }
#line 1412 "ml_optimize.m"
            }
#line 1359 "ml_optimize.m"
          else
#line 1359 "ml_optimize.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1391 "ml_optimize.m"
              {
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Sig_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Func0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Obj0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__RetLvals0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__TailCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Func_40;
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Obj_41;
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Args_42;
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__RetLvals_43;
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60;
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61;
#line 1391 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62;

#line 1392 "ml_optimize.m"
                {
#line 1392 "ml_optimize.m"
                  ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Func0_35, &ml_backend__ml_optimize__Func_40, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60);
                }
#line 1244 "ml_optimize.m"
                if ((ml_backend__ml_optimize__Obj0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1244 "ml_optimize.m"
                  {
#line 1244 "ml_optimize.m"
                    ml_backend__ml_optimize__Obj_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1244 "ml_optimize.m"
                    ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60;
#line 1244 "ml_optimize.m"
                  }
#line 1244 "ml_optimize.m"
                else
#line 1245 "ml_optimize.m"
                  {
#line 1245 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Rval0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Obj0_36, (MR_Integer) 0)));
#line 1245 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Rval_91;

#line 1246 "ml_optimize.m"
                    {
#line 1246 "ml_optimize.m"
                      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_90, &ml_backend__ml_optimize__Rval_91, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_60_60, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61);
                    }
#line 1245 "ml_optimize.m"
                    {
#line 1245 "ml_optimize.m"
                      ml_backend__ml_optimize__Obj_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "ml_optimize.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Obj_41, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_91));
#line 1245 "ml_optimize.m"
                    }
#line 1245 "ml_optimize.m"
                  }
#line 1394 "ml_optimize.m"
                {
#line 1394 "ml_optimize.m"
                  ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Args0_37, &ml_backend__ml_optimize__Args_42, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_61_61, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62);
                }
#line 1395 "ml_optimize.m"
                {
#line 1395 "ml_optimize.m"
                  ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(ml_backend__ml_optimize__RetLvals0_38, &ml_backend__ml_optimize__RetLvals_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_62_62, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
                }
#line 1396 "ml_optimize.m"
                {
#line 1396 "ml_optimize.m"
                  MR_Word base;
#line 1396 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "ml_optimize.m"
                  *ml_backend__ml_optimize__Stmt_6 = base;
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Sig_34));
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Func_40));
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Obj_41));
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Args_42));
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__RetLvals_43));
#line 1396 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_optimize__TailCall_39));
#line 1396 "ml_optimize.m"
                }
#line 1391 "ml_optimize.m"
              }
#line 1359 "ml_optimize.m"
            else
#line 1359 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1387 "ml_optimize.m"
                {
#line 1387 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Labels_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1387 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Rval0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1387 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Rval_76;

#line 1388 "ml_optimize.m"
                  {
#line 1388 "ml_optimize.m"
                    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_75, &ml_backend__ml_optimize__Rval_76, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
                  }
#line 1389 "ml_optimize.m"
                  {
#line 1389 "ml_optimize.m"
                    MR_Word base;
#line 1389 "ml_optimize.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "ml_optimize.m"
                    *ml_backend__ml_optimize__Stmt_6 = base;
#line 1389 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1389 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_76));
#line 1389 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Labels_33));
#line 1389 "ml_optimize.m"
                  }
#line 1387 "ml_optimize.m"
                }
#line 1359 "ml_optimize.m"
              else
#line 1359 "ml_optimize.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1402 "ml_optimize.m"
                  {
#line 1402 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Ref0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1402 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Ref_47;

#line 1403 "ml_optimize.m"
                    {
#line 1403 "ml_optimize.m"
                      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Ref0_46, &ml_backend__ml_optimize__Ref_47, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
                    }
#line 1404 "ml_optimize.m"
                    {
#line 1404 "ml_optimize.m"
                      MR_Word base;
#line 1404 "ml_optimize.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "ml_optimize.m"
                      *ml_backend__ml_optimize__Stmt_6 = base;
#line 1404 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1404 "ml_optimize.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_47));
#line 1404 "ml_optimize.m"
                    }
#line 1402 "ml_optimize.m"
                  }
#line 1359 "ml_optimize.m"
                else
#line 1359 "ml_optimize.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1384 "ml_optimize.m"
                    {
#line 1385 "ml_optimize.m"
                      *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
#line 1385 "ml_optimize.m"
                      *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52;
#line 1384 "ml_optimize.m"
                    }
#line 1359 "ml_optimize.m"
                  else
#line 1359 "ml_optimize.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1381 "ml_optimize.m"
                      {
#line 1382 "ml_optimize.m"
                        *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
#line 1382 "ml_optimize.m"
                        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52;
#line 1381 "ml_optimize.m"
                      }
#line 1359 "ml_optimize.m"
                    else
#line 1359 "ml_optimize.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1398 "ml_optimize.m"
                        {
#line 1398 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__Rvals0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1398 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__Rvals_45;

#line 1399 "ml_optimize.m"
                          {
#line 1399 "ml_optimize.m"
                            ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(ml_backend__ml_optimize__Rvals0_44, &ml_backend__ml_optimize__Rvals_45, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
                          }
#line 1400 "ml_optimize.m"
                          {
#line 1400 "ml_optimize.m"
                            MR_Word base;
#line 1400 "ml_optimize.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "ml_optimize.m"
                            *ml_backend__ml_optimize__Stmt_6 = base;
#line 1400 "ml_optimize.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1400 "ml_optimize.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rvals_45));
#line 1400 "ml_optimize.m"
                          }
#line 1398 "ml_optimize.m"
                        }
#line 1359 "ml_optimize.m"
                      else
#line 1359 "ml_optimize.m"
                        if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1375 "ml_optimize.m"
                          {
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__TypeCtorInfo_85_85;
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Val0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Range_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Default0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Val_28;
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Cases_29;
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Default_30;
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65;
#line 1375 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_67_67;
#line 1377 "ml_optimize.m"
                            MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_67_67;

#line 1376 "ml_optimize.m"
                            {
#line 1376 "ml_optimize.m"
                              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Val0_24, &ml_backend__ml_optimize__Val_28, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65);
                            }
#line 3897 "ml_backend.ml_optimize.c"
                            ml_backend__ml_optimize__TypeCtorInfo_85_85 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 1377 "ml_optimize.m"
                            {
#line 1377 "ml_optimize.m"
                              mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_85_85, ml_backend__ml_optimize__TypeCtorInfo_85_85, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[7], ml_backend__ml_optimize__Cases0_26, &ml_backend__ml_optimize__Cases_29, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_65_65)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_67_67);
                            }
#line 1377 "ml_optimize.m"
                            ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_67_67 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_67_67);
#line 1378 "ml_optimize.m"
                            {
#line 1378 "ml_optimize.m"
                              ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(ml_backend__ml_optimize__Default0_27, &ml_backend__ml_optimize__Default_30, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_67_67, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
                            }
#line 1379 "ml_optimize.m"
                            {
#line 1379 "ml_optimize.m"
                              MR_Word base;
#line 1379 "ml_optimize.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "ml_optimize.m"
                              *ml_backend__ml_optimize__Stmt_6 = base;
#line 1379 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1379 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_23));
#line 1379 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Val_28));
#line 1379 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_25));
#line 1379 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_29));
#line 1379 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_30));
#line 1379 "ml_optimize.m"
                            }
#line 1375 "ml_optimize.m"
                          }
#line 1359 "ml_optimize.m"
                        else
#line 1406 "ml_optimize.m"
                          {
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Handler0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Handler_49;
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_55_55;
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56;
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Statement0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Statement_78;
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Ref0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 1406 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Ref_80;

#line 1407 "ml_optimize.m"
                            {
#line 1407 "ml_optimize.m"
                              ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Ref0_79, &ml_backend__ml_optimize__Ref_80, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_52, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_55_55);
                            }
#line 1408 "ml_optimize.m"
                            {
#line 1408 "ml_optimize.m"
                              ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_77, &ml_backend__ml_optimize__Statement_78, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_55_55, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56);
                            }
#line 1409 "ml_optimize.m"
                            {
#line 1409 "ml_optimize.m"
                              ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Handler0_48, &ml_backend__ml_optimize__Handler_49, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_56_56, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_53);
                            }
#line 1410 "ml_optimize.m"
                            {
#line 1410 "ml_optimize.m"
                              MR_Word base;
#line 1410 "ml_optimize.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "ml_optimize.m"
                              *ml_backend__ml_optimize__Stmt_6 = base;
#line 1410 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1410 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_80));
#line 1410 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_78));
#line 1410 "ml_optimize.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Handler_49));
#line 1410 "ml_optimize.m"
                            }
#line 1406 "ml_optimize.m"
                          }
#line 1359 "ml_optimize.m"
  }
#line 1354 "ml_optimize.m"
}

#line 1346 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(
#line 1346 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement0_5,
#line 1346 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Statement_6,
#line 1346 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11,
#line 1346 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12)
#line 1346 "ml_optimize.m"
{
#line 1349 "ml_optimize.m"
  {
#line 1349 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1349 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_5, (MR_Integer) 0)));
#line 1349 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_5, (MR_Integer) 1)));
#line 1349 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt_10;

#line 1351 "ml_optimize.m"
    {
#line 1351 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_10, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_12);
    }
#line 1352 "ml_optimize.m"
    {
#line 1352 "ml_optimize.m"
      MR_Word base;
#line 1352 "ml_optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "ml_optimize.m"
      *ml_backend__ml_optimize__Statement_6 = base;
#line 1352 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_10));
#line 1352 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_9));
#line 1352 "ml_optimize.m"
    }
#line 1349 "ml_optimize.m"
  }
#line 1346 "ml_optimize.m"
}

#line 1337 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_p_0(
#line 1337 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 1337 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
#line 1337 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
#line 1337 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
#line 1337 "ml_optimize.m"
{
#line 1341 "ml_optimize.m"
  {
#line 1341 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1341 "ml_optimize.m"
    if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "ml_optimize.m"
      {
#line 1341 "ml_optimize.m"
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1341 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
#line 1341 "ml_optimize.m"
      }
#line 1341 "ml_optimize.m"
    else
#line 1343 "ml_optimize.m"
      {
#line 1343 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 1343 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement_9;

#line 1344 "ml_optimize.m"
        {
#line 1344 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Statement0_8, &ml_backend__ml_optimize__Statement_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
        }
#line 1343 "ml_optimize.m"
        {
#line 1343 "ml_optimize.m"
          MR_Word base;
#line 1343 "ml_optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__2_2 = base;
#line 1343 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_9));
#line 1343 "ml_optimize.m"
        }
#line 1343 "ml_optimize.m"
      }
#line 1341 "ml_optimize.m"
  }
#line 1337 "ml_optimize.m"
}

#line 1335 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0_1(
#line 1335 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1335 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1335 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1335 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1335 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1335 "ml_optimize.m"
{
#line 1335 "ml_optimize.m"
  {
#line 1335 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1335 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Statement_6;
#line 1335 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_12;

#line 1335 "ml_optimize.m"
    {
#line 1335 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Statement_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_12);
    }
#line 1335 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Statement_6));
#line 1335 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_12));
#line 1335 "ml_optimize.m"
  }
#line 1335 "ml_optimize.m"
}

#line 1330 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(
#line 1330 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_7,
#line 1330 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_8,
#line 1330 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1330 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
#line 1330 "ml_optimize.m"
{
#line 1334 "ml_optimize.m"
  {
#line 1334 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1334 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 1335 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

#line 1335 "ml_optimize.m"
    {
#line 1335 "ml_optimize.m"
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[6], ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Statements_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
#line 1335 "ml_optimize.m"
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
#line 1334 "ml_optimize.m"
  }
#line 1330 "ml_optimize.m"
}

#line 1301 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
#line 1301 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lval0_5,
#line 1301 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Lval_6,
#line 1301 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18,
#line 1301 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19)
#line 1301 "ml_optimize.m"
{
#line 1306 "ml_optimize.m"
  {
#line 1306 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1306 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1306 "ml_optimize.m"
      {
#line 1306 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
#line 1306 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
#line 1306 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 2)));
#line 1306 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 3)));
#line 1306 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__PtrType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 4)));
#line 1306 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval_13;

#line 1307 "ml_optimize.m"
        {
#line 1307 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_9, &ml_backend__ml_optimize__Rval_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);
        }
#line 1308 "ml_optimize.m"
        {
#line 1308 "ml_optimize.m"
          MR_Word base;
#line 1308 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "ml_optimize.m"
          *ml_backend__ml_optimize__Lval_6 = base;
#line 1308 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__MaybeTag_8));
#line 1308 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_13));
#line 1308 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__FieldId_10));
#line 1308 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__FieldType_11));
#line 1308 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__PtrType_12));
#line 1308 "ml_optimize.m"
        }
#line 1306 "ml_optimize.m"
      }
#line 1306 "ml_optimize.m"
    else
#line 1306 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1314 "ml_optimize.m"
        {
#line 1315 "ml_optimize.m"
          *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
#line 1315 "ml_optimize.m"
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18;
#line 1314 "ml_optimize.m"
        }
#line 1306 "ml_optimize.m"
      else
#line 1306 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1310 "ml_optimize.m"
          {
#line 1310 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
#line 1310 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
#line 1310 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_25;

#line 1311 "ml_optimize.m"
            {
#line 1311 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_24, &ml_backend__ml_optimize__Rval_25, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19);
            }
#line 1312 "ml_optimize.m"
            {
#line 1312 "ml_optimize.m"
              MR_Word base;
#line 1312 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "ml_optimize.m"
              *ml_backend__ml_optimize__Lval_6 = base;
#line 1312 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_25));
#line 1312 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_14));
#line 1312 "ml_optimize.m"
            }
#line 1310 "ml_optimize.m"
          }
#line 1306 "ml_optimize.m"
        else
#line 1317 "ml_optimize.m"
          {
#line 1317 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__VarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 0)));
#line 1317 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_5, (MR_Integer) 1)));
#line 1318 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 0)));
#line 1318 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 1)));
#line 1318 "ml_optimize.m"
            MR_Integer ml_backend__ml_optimize__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 2)));
#line 1318 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 3)));

#line 1318 "ml_optimize.m"
            {
#line 1318 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_optimize_scalar_common_1[1], ((MR_Box) (ml_backend__ml_optimize__VarName_16)), ((MR_Box) (ml_backend__ml_optimize__V_33_33)));
            }
#line 1324 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 1323 "ml_optimize.m"
              {
#line 1323 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 0)));
#line 1323 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 1)));
#line 1323 "ml_optimize.m"
                MR_Integer ml_backend__ml_optimize__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 2)));
#line 1323 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18, (MR_Integer) 3)));

#line 1323 "ml_optimize.m"
                {
#line 1323 "ml_optimize.m"
                  MR_Word base;
#line 1323 "ml_optimize.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "ml_optimize.m"
                  *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = base;
#line 1323 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_29_29));
#line 1323 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__V_30_30));
#line 1323 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__V_31_31));
#line 1323 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1323 "ml_optimize.m"
                }
#line 1323 "ml_optimize.m"
              }
#line 1324 "ml_optimize.m"
            else
#line 1323 "ml_optimize.m"
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_19 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_18;
#line 1327 "ml_optimize.m"
            *ml_backend__ml_optimize__Lval_6 = ml_backend__ml_optimize__Lval0_5;
#line 1317 "ml_optimize.m"
          }
#line 1306 "ml_optimize.m"
  }
#line 1301 "ml_optimize.m"
}

#line 1299 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1(
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1299 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1299 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1299 "ml_optimize.m"
{
#line 1299 "ml_optimize.m"
  {
#line 1299 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1299 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Lval_6;
#line 1299 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19;

#line 1299 "ml_optimize.m"
    {
#line 1299 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Lval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19);
    }
#line 1299 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Lval_6));
#line 1299 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_19));
#line 1299 "ml_optimize.m"
  }
#line 1299 "ml_optimize.m"
}

#line 1295 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(
#line 1295 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7,
#line 1295 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8,
#line 1295 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1295 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
#line 1295 "ml_optimize.m"
{
#line 1298 "ml_optimize.m"
  {
#line 1298 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1298 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
#line 1299 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

#line 1299 "ml_optimize.m"
    {
#line 1299 "ml_optimize.m"
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[5], ml_backend__ml_optimize__STATE_VARIABLE_Lvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Lvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
#line 1299 "ml_optimize.m"
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
#line 1298 "ml_optimize.m"
  }
#line 1295 "ml_optimize.m"
}

#line 1248 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
#line 1248 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Rval0_5,
#line 1248 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Rval_6,
#line 1248 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27,
#line 1248 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28)
#line 1248 "ml_optimize.m"
{
#line 1253 "ml_optimize.m"
  {
#line 1253 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1253 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1253 "ml_optimize.m"
      {
#line 1253 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Lval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)));
#line 1253 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__VarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 0)));
#line 1254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 1)));
#line 1254 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 2)));
#line 1254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 3)));
#line 1255 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__TypeInfo_58_58;
#line 1255 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_57_57;
#line 1255 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_10_10;

#line 1255 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Lval0_8)) == (MR_mktag((MR_Integer) 3)));
#line 1255 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 1255 "ml_optimize.m"
          {
#line 1255 "ml_optimize.m"
            ml_backend__ml_optimize__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 0)));
#line 1255 "ml_optimize.m"
            ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Lval0_8, (MR_Integer) 1)));
#line 4474 "ml_backend.ml_optimize.c"
            ml_backend__ml_optimize__TypeInfo_58_58 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
#line 1255 "ml_optimize.m"
            {
#line 1255 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_58_58, ((MR_Box) (ml_backend__ml_optimize__VarName_9)), ((MR_Box) (ml_backend__ml_optimize__V_57_57)));
            }
#line 1255 "ml_optimize.m"
          }
#line 1262 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 1259 "ml_optimize.m"
          {
#line 1259 "ml_optimize.m"
            MR_Integer ml_backend__ml_optimize__Count0_11;
#line 1259 "ml_optimize.m"
            MR_Integer ml_backend__ml_optimize__V_36_36;
#line 1259 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 0)));
#line 1259 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_49_49;

#line 1259 "ml_optimize.m"
            *ml_backend__ml_optimize__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 1)));
#line 1259 "ml_optimize.m"
            ml_backend__ml_optimize__Count0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 2)));
#line 1259 "ml_optimize.m"
            ml_backend__ml_optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, (MR_Integer) 3)));
#line 1261 "ml_optimize.m"
            ml_backend__ml_optimize__V_36_36 = (ml_backend__ml_optimize__Count0_11 + (MR_Integer) 1);
#line 1261 "ml_optimize.m"
            {
#line 1261 "ml_optimize.m"
              MR_Word base;
#line 1261 "ml_optimize.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1261 "ml_optimize.m"
              *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = base;
#line 1261 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_47_47));
#line 1261 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*ml_backend__ml_optimize__Rval_6));
#line 1261 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__V_36_36));
#line 1261 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
#line 1261 "ml_optimize.m"
            }
#line 1259 "ml_optimize.m"
          }
#line 1262 "ml_optimize.m"
        else
#line 1263 "ml_optimize.m"
          {
#line 1263 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Lval_12;

#line 1263 "ml_optimize.m"
            {
#line 1263 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_8, &ml_backend__ml_optimize__Lval_12, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
            }
#line 1264 "ml_optimize.m"
            {
#line 1264 "ml_optimize.m"
              MR_Word base;
#line 1264 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "ml_optimize.m"
              *ml_backend__ml_optimize__Rval_6 = base;
#line 1264 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Lval_12));
#line 1264 "ml_optimize.m"
            }
#line 1263 "ml_optimize.m"
          }
#line 1253 "ml_optimize.m"
      }
#line 1253 "ml_optimize.m"
    else
#line 1253 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1267 "ml_optimize.m"
        {
#line 1267 "ml_optimize.m"
          MR_Integer ml_backend__ml_optimize__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)));
#line 1267 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__ArgRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
#line 1267 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__ArgRval_15;

#line 1268 "ml_optimize.m"
          {
#line 1268 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_14, &ml_backend__ml_optimize__ArgRval_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
          }
#line 1269 "ml_optimize.m"
          {
#line 1269 "ml_optimize.m"
            MR_Word base;
#line 1269 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "ml_optimize.m"
            *ml_backend__ml_optimize__Rval_6 = base;
#line 1269 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Tag_13));
#line 1269 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_15));
#line 1269 "ml_optimize.m"
          }
#line 1267 "ml_optimize.m"
        }
#line 1253 "ml_optimize.m"
      else
#line 1253 "ml_optimize.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1275 "ml_optimize.m"
          {
#line 1275 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Arg1Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
#line 1275 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Arg2Rval0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 3)));
#line 1275 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Arg1Rval_19;
#line 1275 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Arg2Rval_20;
#line 1275 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_31_31;
#line 1275 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Op_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));

#line 1276 "ml_optimize.m"
            {
#line 1276 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Arg1Rval0_17, &ml_backend__ml_optimize__Arg1Rval_19, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_31_31);
            }
#line 1277 "ml_optimize.m"
            {
#line 1277 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Arg2Rval0_18, &ml_backend__ml_optimize__Arg2Rval_20, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_31_31, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
            }
#line 1278 "ml_optimize.m"
            {
#line 1278 "ml_optimize.m"
              MR_Word base;
#line 1278 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "ml_optimize.m"
              *ml_backend__ml_optimize__Rval_6 = base;
#line 1278 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1278 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Op_41));
#line 1278 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Arg1Rval_19));
#line 1278 "ml_optimize.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Arg2Rval_20));
#line 1278 "ml_optimize.m"
            }
#line 1275 "ml_optimize.m"
          }
#line 1253 "ml_optimize.m"
        else
#line 1253 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1280 "ml_optimize.m"
            {
#line 1280 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Lval0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
#line 1280 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Lval_43;

#line 1281 "ml_optimize.m"
              {
#line 1281 "ml_optimize.m"
                ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(ml_backend__ml_optimize__Lval0_42, &ml_backend__ml_optimize__Lval_43, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
              }
#line 1282 "ml_optimize.m"
              {
#line 1282 "ml_optimize.m"
                MR_Word base;
#line 1282 "ml_optimize.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "ml_optimize.m"
                *ml_backend__ml_optimize__Rval_6 = base;
#line 1282 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1282 "ml_optimize.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_43));
#line 1282 "ml_optimize.m"
              }
#line 1280 "ml_optimize.m"
            }
#line 1253 "ml_optimize.m"
          else
#line 1253 "ml_optimize.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1271 "ml_optimize.m"
              {
#line 1271 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Op_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
#line 1271 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__ArgRval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
#line 1271 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__ArgRval_40;

#line 1272 "ml_optimize.m"
                {
#line 1272 "ml_optimize.m"
                  ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__ArgRval0_39, &ml_backend__ml_optimize__ArgRval_40, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
                }
#line 1273 "ml_optimize.m"
                {
#line 1273 "ml_optimize.m"
                  MR_Word base;
#line 1273 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "ml_optimize.m"
                  *ml_backend__ml_optimize__Rval_6 = base;
#line 1273 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1273 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Op_16));
#line 1273 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_40));
#line 1273 "ml_optimize.m"
                }
#line 1271 "ml_optimize.m"
              }
#line 1253 "ml_optimize.m"
            else
#line 1253 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1284 "ml_optimize.m"
                {
#line 1284 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__VectorCommon_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 1)));
#line 1284 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__RowRval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval0_5, (MR_Integer) 2)));
#line 1284 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__RowRval_23;

#line 1285 "ml_optimize.m"
                  {
#line 1285 "ml_optimize.m"
                    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__RowRval0_22, &ml_backend__ml_optimize__RowRval_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28);
                  }
#line 1286 "ml_optimize.m"
                  {
#line 1286 "ml_optimize.m"
                    MR_Word base;
#line 1286 "ml_optimize.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "ml_optimize.m"
                    *ml_backend__ml_optimize__Rval_6 = base;
#line 1286 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1286 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__VectorCommon_21));
#line 1286 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__RowRval_23));
#line 1286 "ml_optimize.m"
                  }
#line 1284 "ml_optimize.m"
                }
#line 1253 "ml_optimize.m"
              else
#line 1291 "ml_optimize.m"
                {
#line 1292 "ml_optimize.m"
                  *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_5;
#line 1292 "ml_optimize.m"
                  *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_28 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_27;
#line 1291 "ml_optimize.m"
                }
#line 1253 "ml_optimize.m"
  }
#line 1248 "ml_optimize.m"
}

#line 1238 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1(
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1238 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1238 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1238 "ml_optimize.m"
{
#line 1238 "ml_optimize.m"
  {
#line 1238 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1238 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Rval_6;
#line 1238 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28;

#line 1238 "ml_optimize.m"
    {
#line 1238 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Rval_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28);
    }
#line 1238 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Rval_6));
#line 1238 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_28));
#line 1238 "ml_optimize.m"
  }
#line 1238 "ml_optimize.m"
}

#line 1234 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(
#line 1234 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7,
#line 1234 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8,
#line 1234 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1234 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
#line 1234 "ml_optimize.m"
{
#line 1237 "ml_optimize.m"
  {
#line 1237 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1237 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 1238 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

#line 1238 "ml_optimize.m"
    {
#line 1238 "ml_optimize.m"
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[4], ml_backend__ml_optimize__STATE_VARIABLE_Rvals_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Rvals_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
#line 1238 "ml_optimize.m"
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
#line 1237 "ml_optimize.m"
  }
#line 1234 "ml_optimize.m"
}

#line 1231 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2(
#line 1231 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1231 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1231 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1231 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1231 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1231 "ml_optimize.m"
{
#line 1231 "ml_optimize.m"
  {
#line 1231 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1231 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv4_HeadVar__2_2;
#line 1231 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_4;

#line 1231 "ml_optimize.m"
    {
#line 1231 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv4_HeadVar__2_2, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_4);
    }
#line 1231 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv4_HeadVar__2_2));
#line 1231 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv3_STATE_VARIABLE_VarElimInfo_4));
#line 1231 "ml_optimize.m"
  }
#line 1231 "ml_optimize.m"
}

#line 1227 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1(
#line 1227 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1227 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1227 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1227 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1227 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1227 "ml_optimize.m"
{
#line 1227 "ml_optimize.m"
  {
#line 1227 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1227 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_HeadVar__2_2;
#line 1227 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_4;

#line 1227 "ml_optimize.m"
    {
#line 1227 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_HeadVar__2_2, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_4);
    }
#line 1227 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_HeadVar__2_2));
#line 1227 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_4));
#line 1227 "ml_optimize.m"
  }
#line 1227 "ml_optimize.m"
}

#line 1218 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
#line 1218 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 1218 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
#line 1218 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
#line 1218 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
#line 1218 "ml_optimize.m"
{
#line 1222 "ml_optimize.m"
  {
#line 1222 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1222 "ml_optimize.m"
    if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1222 "ml_optimize.m"
      {
#line 1222 "ml_optimize.m"
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1222 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
#line 1222 "ml_optimize.m"
      }
#line 1222 "ml_optimize.m"
    else
#line 1222 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1226 "ml_optimize.m"
        {
#line 1226 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__TypeCtorInfo_33_33 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 1226 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Elements0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 1226 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Elements_15;
#line 1227 "ml_optimize.m"
          MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_4;

#line 1227 "ml_optimize.m"
          {
#line 1227 "ml_optimize.m"
            mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_33_33, ml_backend__ml_optimize__TypeCtorInfo_33_33, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[2], ml_backend__ml_optimize__Elements0_14, &ml_backend__ml_optimize__Elements_15, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_4);
          }
#line 1227 "ml_optimize.m"
          *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_4);
#line 1226 "ml_optimize.m"
          {
#line 1226 "ml_optimize.m"
            MR_Word base;
#line 1226 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "ml_optimize.m"
            *ml_backend__ml_optimize__HeadVar__2_2 = base;
#line 1226 "ml_optimize.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Elements_15));
#line 1226 "ml_optimize.m"
          }
#line 1226 "ml_optimize.m"
        }
#line 1222 "ml_optimize.m"
      else
#line 1222 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1223 "ml_optimize.m"
          {
#line 1223 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 1223 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_9;

#line 1224 "ml_optimize.m"
            {
#line 1224 "ml_optimize.m"
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ml_backend__ml_optimize__Rval0_8, &ml_backend__ml_optimize__Rval_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
            }
#line 1223 "ml_optimize.m"
            {
#line 1223 "ml_optimize.m"
              MR_Word base;
#line 1223 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__2_2 = base;
#line 1223 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_9));
#line 1223 "ml_optimize.m"
            }
#line 1223 "ml_optimize.m"
          }
#line 1222 "ml_optimize.m"
        else
#line 1230 "ml_optimize.m"
          {
#line 1230 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__TypeCtorInfo_39_39 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 1230 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Members0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 1230 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Members_23;
#line 1231 "ml_optimize.m"
            MR_Box ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_4;

#line 1231 "ml_optimize.m"
            {
#line 1231 "ml_optimize.m"
              mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_39_39, ml_backend__ml_optimize__TypeCtorInfo_39_39, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[3], ml_backend__ml_optimize__Members0_22, &ml_backend__ml_optimize__Members_23, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3)), &ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_4);
            }
#line 1231 "ml_optimize.m"
            *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ((MR_Word) ml_backend__ml_optimize__conv5_STATE_VARIABLE_VarElimInfo_4);
#line 1230 "ml_optimize.m"
            {
#line 1230 "ml_optimize.m"
              MR_Word base;
#line 1230 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__2_2 = base;
#line 1230 "ml_optimize.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_21));
#line 1230 "ml_optimize.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Members_23));
#line 1230 "ml_optimize.m"
            }
#line 1230 "ml_optimize.m"
          }
#line 1222 "ml_optimize.m"
  }
#line 1218 "ml_optimize.m"
}

#line 1209 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_body_4_p_0(
#line 1209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 1209 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2,
#line 1209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3,
#line 1209 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4)
#line 1209 "ml_optimize.m"
{
#line 1213 "ml_optimize.m"
  {
#line 1213 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 1213 "ml_optimize.m"
    if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "ml_optimize.m"
      {
#line 1213 "ml_optimize.m"
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1213 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3;
#line 1213 "ml_optimize.m"
      }
#line 1213 "ml_optimize.m"
    else
#line 1215 "ml_optimize.m"
      {
#line 1215 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Stmt0_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__HeadVar__1_1), (MR_Integer) 1);
#line 1215 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Stmt_9;

#line 1216 "ml_optimize.m"
        {
#line 1216 "ml_optimize.m"
          ml_backend__ml_optimize__eliminate_var_in_statement_4_p_0(ml_backend__ml_optimize__Stmt0_8, &ml_backend__ml_optimize__Stmt_9, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_3, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_4);
        }
#line 1215 "ml_optimize.m"
        *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Stmt_9);
#line 1215 "ml_optimize.m"
      }
#line 1213 "ml_optimize.m"
  }
#line 1209 "ml_optimize.m"
}

#line 1188 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(
#line 1188 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn0_5,
#line 1188 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Defn_6,
#line 1188 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_24,
#line 1188 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_25)
#line 1188 "ml_optimize.m"
{
#line 1191 "ml_optimize.m"
  {
#line 1191 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1191 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 0)));
#line 1191 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 1)));
#line 1191 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 2)));
#line 1191 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__DefnBody0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_5, (MR_Integer) 3)));
#line 1191 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__DefnBody_16;

#line 1197 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_11)) == (MR_mktag((MR_Integer) 0))))
#line 1198 "ml_optimize.m"
      {
#line 1201 "ml_optimize.m"
        ml_backend__ml_optimize__DefnBody_16 = ml_backend__ml_optimize__DefnBody0_11;
#line 1201 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_25 = ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_24;
#line 1198 "ml_optimize.m"
      }
#line 1197 "ml_optimize.m"
    else
#line 1197 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_11)) == (MR_mktag((MR_Integer) 1))))
#line 1194 "ml_optimize.m"
        {
#line 1194 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 0)));
#line 1194 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Initializer0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 1)));
#line 1194 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__GCStatement_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 2)));
#line 1194 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Initializer_15;

#line 1195 "ml_optimize.m"
          {
#line 1195 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(ml_backend__ml_optimize__Initializer0_13, &ml_backend__ml_optimize__Initializer_15, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_24, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_25);
          }
#line 1196 "ml_optimize.m"
          {
#line 1196 "ml_optimize.m"
            ml_backend__ml_optimize__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "ml_optimize.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_12));
#line 1196 "ml_optimize.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Initializer_15));
#line 1196 "ml_optimize.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_16, 2) = ((MR_Box) (ml_backend__ml_optimize__GCStatement_14));
#line 1196 "ml_optimize.m"
          }
#line 1194 "ml_optimize.m"
        }
#line 1197 "ml_optimize.m"
      else
#line 1203 "ml_optimize.m"
        {
#line 1203 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Id_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 0)));
#line 1203 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Params_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 1)));
#line 1203 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Body0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 2)));
#line 1203 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 3)));
#line 1203 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__EnvVarNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_11, (MR_Integer) 4)));
#line 1203 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Body_23;

#line 1204 "ml_optimize.m"
          {
#line 1204 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_var_in_function_body_4_p_0(ml_backend__ml_optimize__Body0_20, &ml_backend__ml_optimize__Body_23, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_24, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_25);
          }
#line 1205 "ml_optimize.m"
          {
#line 1205 "ml_optimize.m"
            ml_backend__ml_optimize__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Id_18));
#line 1205 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 1) = ((MR_Box) (ml_backend__ml_optimize__Params_19));
#line 1205 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 2) = ((MR_Box) (ml_backend__ml_optimize__Body_23));
#line 1205 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 3) = ((MR_Box) (ml_backend__ml_optimize__Attributes_21));
#line 1205 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_16, 4) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_22));
#line 1205 "ml_optimize.m"
          }
#line 1203 "ml_optimize.m"
        }
#line 1207 "ml_optimize.m"
    {
#line 1207 "ml_optimize.m"
      MR_Word base;
#line 1207 "ml_optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "ml_optimize.m"
      *ml_backend__ml_optimize__Defn_6 = base;
#line 1207 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_8));
#line 1207 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_9));
#line 1207 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_10));
#line 1207 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_16));
#line 1207 "ml_optimize.m"
    }
#line 1191 "ml_optimize.m"
  }
#line 1188 "ml_optimize.m"
}

#line 1186 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0_1(
#line 1186 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 1186 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 1186 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2,
#line 1186 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_3,
#line 1186 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_4)
#line 1186 "ml_optimize.m"
{
#line 1186 "ml_optimize.m"
  {
#line 1186 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 1186 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Defn_6;
#line 1186 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_25;

#line 1186 "ml_optimize.m"
    {
#line 1186 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_defn_4_p_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Defn_6, ((MR_Word) ml_backend__ml_optimize__wrapper_arg_3), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_25);
    }
#line 1186 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Defn_6));
#line 1186 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_VarElimInfo_25));
#line 1186 "ml_optimize.m"
  }
#line 1186 "ml_optimize.m"
}

#line 1182 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(
#line 1182 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_7,
#line 1182 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_8,
#line 1182 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9,
#line 1182 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10)
#line 1182 "ml_optimize.m"
{
#line 1185 "ml_optimize.m"
  {
#line 1185 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1185 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 1186 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10;

#line 1186 "ml_optimize.m"
    {
#line 1186 "ml_optimize.m"
      mercury__list__map_foldl_5_p_0(ml_backend__ml_optimize__TypeCtorInfo_18_18, ml_backend__ml_optimize__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0, (MR_Word) &ml_backend__ml_optimize_scalar_common_5[1], ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_7, ml_backend__ml_optimize__STATE_VARIABLE_Defns_8, ((MR_Box) (ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_9)), &ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
    }
#line 1186 "ml_optimize.m"
    *ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) ml_backend__ml_optimize__conv2_STATE_VARIABLE_VarElimInfo_10);
#line 1185 "ml_optimize.m"
  }
#line 1182 "ml_optimize.m"
}

#line 1174 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_6_p_0(
#line 1174 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10,
#line 1174 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_11,
#line 1174 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12,
#line 1174 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_13,
#line 1174 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14,
#line 1174 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15)
#line 1174 "ml_optimize.m"
{
#line 1178 "ml_optimize.m"
  {
#line 1178 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1178 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17;

#line 1179 "ml_optimize.m"
    {
#line 1179 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_10, ml_backend__ml_optimize__STATE_VARIABLE_Defns_11, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_0_14, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17);
    }
#line 1180 "ml_optimize.m"
    {
#line 1180 "ml_optimize.m"
      ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_12, ml_backend__ml_optimize__STATE_VARIABLE_Statements_13, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_17, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_15);
#line 1180 "ml_optimize.m"
      return;
    }
#line 1178 "ml_optimize.m"
  }
#line 1174 "ml_optimize.m"
}

#line 1126 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statement_4_p_0(
#line 1126 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Var_5,
#line 1126 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Rval_6,
#line 1126 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement0_7,
#line 1126 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Statement_8)
#line 1126 "ml_optimize.m"
{
#line 1129 "ml_optimize.m"
  {
#line 1129 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1129 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
#line 1129 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
#line 1129 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt_11;
#line 1136 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Rval0_13;
#line 1132 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeInfo_28_28;
#line 1132 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_21_21;
#line 1132 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_22_22;
#line 1132 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_27_27;
#line 1132 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___Type_12;

#line 1132 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1132 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 1132 "ml_optimize.m"
      {
#line 1132 "ml_optimize.m"
        ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 1)));
#line 1132 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_21_21)) == (MR_mktag((MR_Integer) 2)));
#line 1132 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 1132 "ml_optimize.m"
          {
#line 1132 "ml_optimize.m"
            ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_21_21, (MR_Integer) 0)));
#line 1132 "ml_optimize.m"
            ml_backend__ml_optimize__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_21_21, (MR_Integer) 1)));
#line 1132 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_22_22)) == (MR_mktag((MR_Integer) 3)));
#line 1132 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 1132 "ml_optimize.m"
              {
#line 1132 "ml_optimize.m"
                ml_backend__ml_optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_22_22, (MR_Integer) 0)));
#line 1132 "ml_optimize.m"
                ml_backend__ml_optimize___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_22_22, (MR_Integer) 1)));
#line 5402 "ml_backend.ml_optimize.c"
                ml_backend__ml_optimize__TypeInfo_28_28 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
#line 1132 "ml_optimize.m"
                {
#line 1132 "ml_optimize.m"
                  ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_28_28, ((MR_Box) (ml_backend__ml_optimize__Var_5)), ((MR_Box) (ml_backend__ml_optimize__V_27_27)));
                }
#line 1132 "ml_optimize.m"
              }
#line 1132 "ml_optimize.m"
          }
#line 1132 "ml_optimize.m"
      }
#line 1136 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 1133 "ml_optimize.m"
      {
#line 1133 "ml_optimize.m"
        *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval0_13;
#line 1135 "ml_optimize.m"
        ml_backend__ml_optimize__Stmt_11 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[7];
#line 1133 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1133 "ml_optimize.m"
      }
#line 1136 "ml_optimize.m"
    else
#line 1143 "ml_optimize.m"
      {
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns0_14;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__SubStatements0_15;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Mod_16;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__QualKind_17;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__UnqualVarName_18;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Data_19;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__SubStatements_20;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_25_25;
#line 1143 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_26_26;

#line 1136 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_9)) == (MR_mktag((MR_Integer) 0)));
#line 1136 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 1136 "ml_optimize.m"
          {
#line 1136 "ml_optimize.m"
            ml_backend__ml_optimize__Defns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 0)));
#line 1136 "ml_optimize.m"
            ml_backend__ml_optimize__SubStatements0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_9, (MR_Integer) 1)));
#line 1137 "ml_optimize.m"
            ml_backend__ml_optimize__Mod_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_5, (MR_Integer) 0)));
#line 1137 "ml_optimize.m"
            ml_backend__ml_optimize__QualKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_5, (MR_Integer) 1)));
#line 1137 "ml_optimize.m"
            ml_backend__ml_optimize__UnqualVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Var_5, (MR_Integer) 2)));
#line 1138 "ml_optimize.m"
            ml_backend__ml_optimize__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__UnqualVarName_18);
#line 1138 "ml_optimize.m"
            {
#line 1138 "ml_optimize.m"
              ml_backend__ml_optimize__Data_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_19, 0) = ((MR_Box) (ml_backend__ml_optimize__Mod_16));
#line 1138 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_19, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_17));
#line 1138 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Data_19, 2) = ((MR_Box) (ml_backend__ml_optimize__V_25_25));
#line 1138 "ml_optimize.m"
            }
#line 1139 "ml_optimize.m"
            {
#line 1139 "ml_optimize.m"
              ml_backend__ml_optimize__V_26_26 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_optimize__Defns0_14, ml_backend__ml_optimize__Data_19);
            }
#line 1139 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_26_26 == (MR_Integer) 0);
#line 1143 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 1143 "ml_optimize.m"
              {
#line 1140 "ml_optimize.m"
                {
#line 1140 "ml_optimize.m"
                  ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__Var_5, ml_backend__ml_optimize__Rval_6, ml_backend__ml_optimize__SubStatements0_15, &ml_backend__ml_optimize__SubStatements_20);
                }
#line 1143 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 1143 "ml_optimize.m"
                  {
#line 1142 "ml_optimize.m"
                    {
#line 1142 "ml_optimize.m"
                      ml_backend__ml_optimize__Stmt_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_11, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns0_14));
#line 1142 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_11, 1) = ((MR_Box) (ml_backend__ml_optimize__SubStatements_20));
#line 1142 "ml_optimize.m"
                    }
#line 1142 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1143 "ml_optimize.m"
                  }
#line 1143 "ml_optimize.m"
              }
#line 1136 "ml_optimize.m"
          }
#line 1143 "ml_optimize.m"
      }
#line 1129 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 1129 "ml_optimize.m"
      {
#line 1131 "ml_optimize.m"
        {
#line 1131 "ml_optimize.m"
          MR_Word base;
#line 1131 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "ml_optimize.m"
          *ml_backend__ml_optimize__Statement_8 = base;
#line 1131 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_11));
#line 1131 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
#line 1131 "ml_optimize.m"
        }
#line 1131 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1129 "ml_optimize.m"
      }
#line 1129 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 1129 "ml_optimize.m"
  }
#line 1126 "ml_optimize.m"
}

#line 1118 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_1(
#line 1118 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg)
#line 1118 "ml_optimize.m"
{
#line 1118 "ml_optimize.m"
  {
#line 1118 "ml_optimize.m"
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

#line 1118 "ml_optimize.m"
    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__commit_0, 1);
#line 1118 "ml_optimize.m"
  }
#line 1118 "ml_optimize.m"
}

#line 1118 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_2(
#line 1118 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg)
#line 1118 "ml_optimize.m"
{
#line 1118 "ml_optimize.m"
  {
#line 1118 "ml_optimize.m"
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

#line 1118 "ml_optimize.m"
    {
#line 1119 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__V_19_19;
#line 1119 "ml_optimize.m"
      MR_String ml_backend__ml_optimize__V_18_18;

#line 1119 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, (MR_Integer) 0)));
#line 1119 "ml_optimize.m"
      ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, (MR_Integer) 1)));
#line 1119 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1119 "ml_optimize.m"
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1119 "ml_optimize.m"
        {
#line 1119 "ml_optimize.m"
          ml_backend__ml_optimize__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 1119 "ml_optimize.m"
          {
#line 1119 "ml_optimize.m"
            ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_1(ml_backend__ml_optimize__env_ptr);
#line 1119 "ml_optimize.m"
            return;
          }
#line 1119 "ml_optimize.m"
        }
#line 1118 "ml_optimize.m"
    }
#line 1118 "ml_optimize.m"
  }
#line 1118 "ml_optimize.m"
}

#line 1118 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_3(
#line 1118 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg)
#line 1118 "ml_optimize.m"
{
#line 1118 "ml_optimize.m"
  {
#line 1118 "ml_optimize.m"
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

#line 1118 "ml_optimize.m"
    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__commit_0) == 0)
#line 1118 "ml_optimize.m"
      {
#line 1118 "ml_optimize.m"
        {
#line 1118 "ml_optimize.m"
          ml_backend__ml_util__statement_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Label_17, ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_2, ml_backend__ml_optimize__env_ptr);
        }
#line 1118 "ml_optimize.m"
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_FALSE;
#line 1118 "ml_optimize.m"
      }
#line 1118 "ml_optimize.m"
    else
#line 1118 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
#line 1118 "ml_optimize.m"
  }
#line 1118 "ml_optimize.m"
}

#line 1096 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(
#line 1096 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__VarName_5,
#line 1096 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Rval_6,
#line 1096 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
#line 1096 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Statements_9)
#line 1096 "ml_optimize.m"
{
#line 1096 "ml_optimize.m"
  {
#line 1096 "ml_optimize.m"
    struct ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0_s ml_backend__ml_optimize__env;

#line 1100 "ml_optimize.m"
    {
#line 1100 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__Statements0_8;
#line 1108 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__Rval1_10;
#line 1108 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__Statement1_11;

#line 1100 "ml_optimize.m"
      (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1100 "ml_optimize.m"
      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1100 "ml_optimize.m"
        {
#line 1100 "ml_optimize.m"
          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 1100 "ml_optimize.m"
          ml_backend__ml_optimize__Statements0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 1101 "ml_optimize.m"
          {
#line 1101 "ml_optimize.m"
            (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_statement_4_p_0(ml_backend__ml_optimize__VarName_5, &ml_backend__ml_optimize__Rval1_10, (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, &ml_backend__ml_optimize__Statement1_11);
          }
#line 1108 "ml_optimize.m"
          if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1102 "ml_optimize.m"
            {
#line 1103 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_21_21;
#line 1103 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_22_22;
#line 1103 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_23_23;
#line 1103 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_12_12;

#line 1102 "ml_optimize.m"
              *ml_backend__ml_optimize__Rval_6 = ml_backend__ml_optimize__Rval1_10;
#line 1103 "ml_optimize.m"
              ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, (MR_Integer) 0)));
#line 1103 "ml_optimize.m"
              ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement1_11, (MR_Integer) 1)));
#line 1103 "ml_optimize.m"
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1103 "ml_optimize.m"
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1103 "ml_optimize.m"
                {
#line 1103 "ml_optimize.m"
                  ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_21_21, (MR_Integer) 0)));
#line 1103 "ml_optimize.m"
                  ml_backend__ml_optimize__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_21_21, (MR_Integer) 1)));
#line 1103 "ml_optimize.m"
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "ml_optimize.m"
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1103 "ml_optimize.m"
                    (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "ml_optimize.m"
                }
#line 1105 "ml_optimize.m"
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1104 "ml_optimize.m"
                *ml_backend__ml_optimize__Statements_9 = ml_backend__ml_optimize__Statements0_8;
#line 1105 "ml_optimize.m"
              else
#line 1106 "ml_optimize.m"
                {
#line 1106 "ml_optimize.m"
                  MR_Word base;
#line 1106 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "ml_optimize.m"
                  *ml_backend__ml_optimize__Statements_9 = base;
#line 1106 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement1_11));
#line 1106 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements0_8));
#line 1106 "ml_optimize.m"
                }
#line 1102 "ml_optimize.m"
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
#line 1102 "ml_optimize.m"
            }
#line 1108 "ml_optimize.m"
          else
#line 1114 "ml_optimize.m"
            {
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Mod_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 0)));
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 1)));
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__UnqualVarName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_5, (MR_Integer) 2)));
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__DataName_16;
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Statements1_20;
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__UnqualVarName_15);
#line 1114 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_25_25;

#line 1115 "ml_optimize.m"
              {
#line 1115 "ml_optimize.m"
                ml_backend__ml_optimize__DataName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 0) = ((MR_Box) (ml_backend__ml_optimize__Mod_13));
#line 1115 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_14));
#line 1115 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__DataName_16, 2) = ((MR_Box) (ml_backend__ml_optimize__V_24_24));
#line 1115 "ml_optimize.m"
              }
#line 1116 "ml_optimize.m"
              {
#line 1116 "ml_optimize.m"
                ml_backend__ml_optimize__V_25_25 = ml_backend__ml_util__statement_contains_var_2_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7, ml_backend__ml_optimize__DataName_16);
              }
#line 1116 "ml_optimize.m"
              (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = (ml_backend__ml_optimize__V_25_25 == (MR_Integer) 0);
#line 1114 "ml_optimize.m"
              if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1114 "ml_optimize.m"
                {
#line 1118 "ml_optimize.m"
                  {
#line 1118 "ml_optimize.m"
                    ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_3(&ml_backend__ml_optimize__env);
                  }
#line 1117 "ml_optimize.m"
                  (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = !((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded);
#line 1114 "ml_optimize.m"
                  if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1114 "ml_optimize.m"
                    {
#line 1121 "ml_optimize.m"
                      {
#line 1121 "ml_optimize.m"
                        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__VarName_5, ml_backend__ml_optimize__Rval_6, ml_backend__ml_optimize__Statements0_8, &ml_backend__ml_optimize__Statements1_20);
                      }
#line 1114 "ml_optimize.m"
                      if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded)
#line 1114 "ml_optimize.m"
                        {
#line 1123 "ml_optimize.m"
                          {
#line 1123 "ml_optimize.m"
                            MR_Word base;
#line 1123 "ml_optimize.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "ml_optimize.m"
                            *ml_backend__ml_optimize__Statements_9 = base;
#line 1123 "ml_optimize.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__Statement0_7));
#line 1123 "ml_optimize.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements1_20));
#line 1123 "ml_optimize.m"
                          }
#line 1123 "ml_optimize.m"
                          (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded = MR_TRUE;
#line 1114 "ml_optimize.m"
                        }
#line 1114 "ml_optimize.m"
                    }
#line 1114 "ml_optimize.m"
                }
#line 1114 "ml_optimize.m"
            }
#line 1100 "ml_optimize.m"
        }
#line 1100 "ml_optimize.m"
      return (ml_backend__ml_optimize__env).ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0_env_0__succeeded;
#line 1100 "ml_optimize.m"
    }
#line 1096 "ml_optimize.m"
  }
#line 1096 "ml_optimize.m"
}

#line 1083 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
#line 1083 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1)
#line 1083 "ml_optimize.m"
{
#line 1085 "ml_optimize.m"
  while (MR_TRUE)
#line 1085 "ml_optimize.m"
    {
#line 1085 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 1085 "ml_optimize.m"
      {
#line 1085 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 1085 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1086 "ml_optimize.m"
          {
#line 1086 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 1086 "ml_optimize.m"
            MR_Integer ml_backend__ml_optimize___Tag_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

#line 1087 "ml_optimize.m"
            /* direct tailcall eliminated */
#line 1087 "ml_optimize.m"
            {
#line 1087 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval_4;

#line 1087 "ml_optimize.m"
              ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 1087 "ml_optimize.m"
            }
#line 1087 "ml_optimize.m"
            continue;
#line 1086 "ml_optimize.m"
          }
#line 1085 "ml_optimize.m"
        else
#line 1085 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1085 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1085 "ml_optimize.m"
          else
#line 1085 "ml_optimize.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1088 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1085 "ml_optimize.m"
            else
#line 1085 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1089 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1085 "ml_optimize.m"
              else
#line 1085 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = MR_FALSE;
#line 1085 "ml_optimize.m"
        return ml_backend__ml_optimize__succeeded;
#line 1085 "ml_optimize.m"
      }
#line 1085 "ml_optimize.m"
      break;
#line 1085 "ml_optimize.m"
    }
#line 1083 "ml_optimize.m"
}

#line 1063 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
#line 1063 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1)
#line 1063 "ml_optimize.m"
{
#line 1065 "ml_optimize.m"
  while (MR_TRUE)
#line 1065 "ml_optimize.m"
    {
#line 1065 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 1065 "ml_optimize.m"
      {
#line 1065 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 1065 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1066 "ml_optimize.m"
          {
#line 1066 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 1066 "ml_optimize.m"
            MR_Integer ml_backend__ml_optimize___Tag_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

#line 1067 "ml_optimize.m"
            /* direct tailcall eliminated */
#line 1067 "ml_optimize.m"
            {
#line 1067 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval_4;

#line 1067 "ml_optimize.m"
              ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 1067 "ml_optimize.m"
            }
#line 1067 "ml_optimize.m"
            continue;
#line 1066 "ml_optimize.m"
          }
#line 1065 "ml_optimize.m"
        else
#line 1065 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1070 "ml_optimize.m"
            {
#line 1070 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Rval1_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
#line 1070 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Rval2_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 3)));
#line 1070 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize___Op_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));

#line 1071 "ml_optimize.m"
              {
#line 1071 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__Rval1_8);
              }
#line 1070 "ml_optimize.m"
              if (ml_backend__ml_optimize__succeeded)
#line 1072 "ml_optimize.m"
                {
#line 1072 "ml_optimize.m"
                  /* direct tailcall eliminated */
#line 1072 "ml_optimize.m"
                  {
#line 1072 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval2_9;

#line 1072 "ml_optimize.m"
                    ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 1072 "ml_optimize.m"
                  }
#line 1072 "ml_optimize.m"
                  continue;
#line 1072 "ml_optimize.m"
                }
#line 1070 "ml_optimize.m"
            }
#line 1065 "ml_optimize.m"
          else
#line 1065 "ml_optimize.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1065 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1065 "ml_optimize.m"
            else
#line 1065 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1065 "ml_optimize.m"
                {
#line 1065 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));

#line 1065 "ml_optimize.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_optimize__V_22_22)) == (MR_mktag((MR_Integer) 0))))
#line 1076 "ml_optimize.m"
                    {
#line 1076 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Address_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 1)));
#line 1076 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 0)));
#line 1076 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 2)));
#line 1076 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 3)));
#line 1076 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_22_22, (MR_Integer) 4)));

#line 1077 "ml_optimize.m"
                      /* direct tailcall eliminated */
#line 1077 "ml_optimize.m"
                      {
#line 1077 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Address_17;

#line 1077 "ml_optimize.m"
                        ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 1077 "ml_optimize.m"
                      }
#line 1077 "ml_optimize.m"
                      continue;
#line 1076 "ml_optimize.m"
                    }
#line 1065 "ml_optimize.m"
                  else
#line 1065 "ml_optimize.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_optimize__V_22_22)) == (MR_mktag((MR_Integer) 1))))
#line 1074 "ml_optimize.m"
                      {
#line 1074 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Address_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_22_22, (MR_Integer) 0)));
#line 1074 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_22_22, (MR_Integer) 1)));

#line 1075 "ml_optimize.m"
                        /* direct tailcall eliminated */
#line 1075 "ml_optimize.m"
                        {
#line 1075 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Address_13;

#line 1075 "ml_optimize.m"
                          ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 1075 "ml_optimize.m"
                        }
#line 1075 "ml_optimize.m"
                        continue;
#line 1074 "ml_optimize.m"
                      }
#line 1065 "ml_optimize.m"
                    else
#line 1065 "ml_optimize.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_optimize__V_22_22)) == (MR_mktag((MR_Integer) 3))))
#line 1073 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1065 "ml_optimize.m"
                      else
#line 1065 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = MR_FALSE;
#line 1065 "ml_optimize.m"
                }
#line 1065 "ml_optimize.m"
              else
#line 1065 "ml_optimize.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_optimize__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1068 "ml_optimize.m"
                  {
#line 1068 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 2)));
#line 1068 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize___Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));

#line 1069 "ml_optimize.m"
                    /* direct tailcall eliminated */
#line 1069 "ml_optimize.m"
                    {
#line 1069 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__Rval_6;

#line 1069 "ml_optimize.m"
                      ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 1069 "ml_optimize.m"
                    }
#line 1069 "ml_optimize.m"
                    continue;
#line 1068 "ml_optimize.m"
                  }
#line 1065 "ml_optimize.m"
                else
#line 1065 "ml_optimize.m"
                  ml_backend__ml_optimize__succeeded = MR_FALSE;
#line 1065 "ml_optimize.m"
        return ml_backend__ml_optimize__succeeded;
#line 1065 "ml_optimize.m"
      }
#line 1065 "ml_optimize.m"
      break;
#line 1065 "ml_optimize.m"
    }
#line 1063 "ml_optimize.m"
}

#line 997 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__try_to_eliminate_defn_6_p_0(
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_7,
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn0_8,
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defns0_9,
#line 997 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Defns_10,
#line 997 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25,
#line 997 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_26)
#line 997 "ml_optimize.m"
{
#line 1001 "ml_optimize.m"
  {
#line 1001 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 0)));
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 2)));
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__DefnBody_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 3)));
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__VarName_16;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Initializer_18;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__QualVarName_20;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Rval_21;
#line 1001 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__Count_23;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Invalidated_24;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_27_27;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_28_28;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_29_29;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_45_45;
#line 1001 "ml_optimize.m"
    MR_Integer ml_backend__ml_optimize__Count0_57;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Invalidated0_58;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__VarElimInfo0_59;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__VarElimInfo_60;
#line 1001 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_79;
#line 1002 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_8, (MR_Integer) 1)));
#line 1007 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___Type_17;
#line 1007 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___GCStatement_19;
#line 1010 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_37_37;
#line 1010 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_38_38;
#line 1010 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_39_39;
#line 1010 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_40_40;
#line 1164 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_63_63;
#line 1164 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_64_64;

#line 1005 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_12)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 1005 "ml_optimize.m"
      {
#line 1005 "ml_optimize.m"
        ml_backend__ml_optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Name_12, (MR_Integer) 0)));
#line 1005 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 1005 "ml_optimize.m"
          {
#line 1005 "ml_optimize.m"
            ml_backend__ml_optimize__VarName_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_27_27), (MR_Integer) 1);
#line 1006 "ml_optimize.m"
            {
#line 1006 "ml_optimize.m"
              ml_backend__ml_optimize__V_45_45 = ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_f_0();
            }
#line 1006 "ml_optimize.m"
            {
#line 1006 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_decl_flags_0_0(ml_backend__ml_optimize__Flags_14, ml_backend__ml_optimize__V_45_45);
            }
#line 1001 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 1001 "ml_optimize.m"
              {
#line 1007 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody_15)) == (MR_mktag((MR_Integer) 1)));
#line 1007 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 1007 "ml_optimize.m"
                  {
#line 1007 "ml_optimize.m"
                    ml_backend__ml_optimize___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_15, (MR_Integer) 0)));
#line 1007 "ml_optimize.m"
                    ml_backend__ml_optimize__Initializer_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_15, (MR_Integer) 1)));
#line 1007 "ml_optimize.m"
                    ml_backend__ml_optimize___GCStatement_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_15, (MR_Integer) 2)));
#line 1010 "ml_optimize.m"
                    ml_backend__ml_optimize__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 0)));
#line 1010 "ml_optimize.m"
                    ml_backend__ml_optimize__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 1)));
#line 1010 "ml_optimize.m"
                    ml_backend__ml_optimize__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 2)));
#line 1010 "ml_optimize.m"
                    ml_backend__ml_optimize__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 3)));
#line 1010 "ml_optimize.m"
                    ml_backend__ml_optimize__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 4)));
#line 1010 "ml_optimize.m"
                    ml_backend__ml_optimize__V_29_29 = (MR_Integer) 0;
#line 1010 "ml_optimize.m"
                    {
#line 1010 "ml_optimize.m"
                      ml_backend__ml_optimize__QualVarName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 0) = ((MR_Box) (ml_backend__ml_optimize__V_28_28));
#line 1010 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 1) = ((MR_Box) (ml_backend__ml_optimize__V_29_29));
#line 1010 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_20, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_16));
#line 1010 "ml_optimize.m"
                    }
#line 1013 "ml_optimize.m"
                    if ((ml_backend__ml_optimize__Initializer_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "ml_optimize.m"
                      {
#line 1015 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__find_initial_val_in_statements_4_p_0(ml_backend__ml_optimize__QualVarName_20, &ml_backend__ml_optimize__Rval_21, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30);
                      }
#line 1013 "ml_optimize.m"
                    else
#line 1013 "ml_optimize.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Initializer_18)) == (MR_mktag((MR_Integer) 1))))
#line 1012 "ml_optimize.m"
                        {
#line 1012 "ml_optimize.m"
                          ml_backend__ml_optimize__Rval_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Initializer_18, (MR_Integer) 0)));
#line 1012 "ml_optimize.m"
                          ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_25;
#line 1012 "ml_optimize.m"
                          ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1012 "ml_optimize.m"
                        }
#line 1013 "ml_optimize.m"
                      else
#line 1013 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = MR_FALSE;
#line 1001 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 1001 "ml_optimize.m"
                      {
#line 1021 "ml_optimize.m"
                        {
#line 1021 "ml_optimize.m"
                          ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(ml_backend__ml_optimize__Rval_21);
                        }
#line 1001 "ml_optimize.m"
                        if (ml_backend__ml_optimize__succeeded)
#line 1001 "ml_optimize.m"
                          {
#line 1031 "ml_optimize.m"
                            {
#line 1031 "ml_optimize.m"
                              ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__rval_cannot_throw_1_p_0(ml_backend__ml_optimize__Rval_21);
                            }
#line 1032 "ml_optimize.m"
                            if (!(ml_backend__ml_optimize__succeeded))
#line 1033 "ml_optimize.m"
                              {
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__Globals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 0)));
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__V_33_33;
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__V_34_34;
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 1)));
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 2)));
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 3)));
#line 1033 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_7, (MR_Integer) 4)));

#line 1034 "ml_optimize.m"
                                {
#line 1034 "ml_optimize.m"
                                  ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_22, (MR_Integer) 157, (MR_Integer) 1);
                                }
#line 1033 "ml_optimize.m"
                                if (ml_backend__ml_optimize__succeeded)
#line 1033 "ml_optimize.m"
                                  {
#line 1035 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_33_33 = (MR_Integer) 158;
#line 1035 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_34_34 = (MR_Integer) 1;
#line 1035 "ml_optimize.m"
                                    {
#line 1035 "ml_optimize.m"
                                      ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_22, ml_backend__ml_optimize__V_33_33, ml_backend__ml_optimize__V_34_34);
                                    }
#line 1033 "ml_optimize.m"
                                  }
#line 1033 "ml_optimize.m"
                              }
#line 1001 "ml_optimize.m"
                            if (ml_backend__ml_optimize__succeeded)
#line 1001 "ml_optimize.m"
                              {
#line 1160 "ml_optimize.m"
                                ml_backend__ml_optimize__Count0_57 = (MR_Integer) 0;
#line 1161 "ml_optimize.m"
                                ml_backend__ml_optimize__Invalidated0_58 = (MR_Integer) 0;
#line 1162 "ml_optimize.m"
                                {
#line 1162 "ml_optimize.m"
                                  ml_backend__ml_optimize__VarElimInfo0_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_20));
#line 1162 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_21));
#line 1162 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 2) = ((MR_Box) (ml_backend__ml_optimize__Count0_57));
#line 1162 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo0_59, 3) = ((MR_Box) (ml_backend__ml_optimize__Invalidated0_58));
#line 1162 "ml_optimize.m"
                                }
#line 1179 "ml_optimize.m"
                                {
#line 1179 "ml_optimize.m"
                                  ml_backend__ml_optimize__eliminate_var_in_defns_4_p_0(ml_backend__ml_optimize__Defns0_9, ml_backend__ml_optimize__Defns_10, ml_backend__ml_optimize__VarElimInfo0_59, &ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_79);
                                }
#line 1180 "ml_optimize.m"
                                {
#line 1180 "ml_optimize.m"
                                  ml_backend__ml_optimize__eliminate_var_in_statements_4_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Statements_30_30, ml_backend__ml_optimize__STATE_VARIABLE_Statements_26, ml_backend__ml_optimize__STATE_VARIABLE_VarElimInfo_17_79, &ml_backend__ml_optimize__VarElimInfo_60);
                                }
#line 1164 "ml_optimize.m"
                                ml_backend__ml_optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 0)));
#line 1164 "ml_optimize.m"
                                ml_backend__ml_optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 1)));
#line 1164 "ml_optimize.m"
                                ml_backend__ml_optimize__Count_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 2)));
#line 1164 "ml_optimize.m"
                                ml_backend__ml_optimize__Invalidated_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarElimInfo_60, (MR_Integer) 3)));
#line 1043 "ml_optimize.m"
                                ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Invalidated_24 == (MR_Integer) 0);
#line 1001 "ml_optimize.m"
                                if (ml_backend__ml_optimize__succeeded)
#line 1001 "ml_optimize.m"
                                  {
#line 1048 "ml_optimize.m"
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__Count_23 <= (MR_Integer) 1);
#line 1049 "ml_optimize.m"
                                    if (!(ml_backend__ml_optimize__succeeded))
#line 1055 "ml_optimize.m"
                                      {
#line 1055 "ml_optimize.m"
                                        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_21)) == (MR_mktag((MR_Integer) 1))))
#line 1056 "ml_optimize.m"
                                          {
#line 1056 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)));
#line 1056 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_84_84;
#line 1056 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_85_85;

#line 1056 "ml_optimize.m"
                                            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_88_88)) == (MR_mktag((MR_Integer) 3)));
#line 1056 "ml_optimize.m"
                                            if (ml_backend__ml_optimize__succeeded)
#line 1056 "ml_optimize.m"
                                              {
#line 1056 "ml_optimize.m"
                                                ml_backend__ml_optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_88_88, (MR_Integer) 0)));
#line 1056 "ml_optimize.m"
                                                ml_backend__ml_optimize__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_88_88, (MR_Integer) 1)));
#line 1056 "ml_optimize.m"
                                              }
#line 1056 "ml_optimize.m"
                                          }
#line 1055 "ml_optimize.m"
                                        else
#line 1055 "ml_optimize.m"
                                          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1055 "ml_optimize.m"
                                            ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1055 "ml_optimize.m"
                                          else
#line 1055 "ml_optimize.m"
                                            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1057 "ml_optimize.m"
                                              ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1055 "ml_optimize.m"
                                            else
#line 1055 "ml_optimize.m"
                                              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1058 "ml_optimize.m"
                                                ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 1055 "ml_optimize.m"
                                              else
#line 1055 "ml_optimize.m"
                                                ml_backend__ml_optimize__succeeded = MR_FALSE;
#line 1055 "ml_optimize.m"
                                      }
#line 1001 "ml_optimize.m"
                                  }
#line 1001 "ml_optimize.m"
                              }
#line 1001 "ml_optimize.m"
                          }
#line 1001 "ml_optimize.m"
                      }
#line 1007 "ml_optimize.m"
                  }
#line 1001 "ml_optimize.m"
              }
#line 1005 "ml_optimize.m"
          }
#line 1005 "ml_optimize.m"
      }
#line 1001 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 1001 "ml_optimize.m"
  }
#line 997 "ml_optimize.m"
}

#line 954 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_5_p_0(
#line 954 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 954 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 954 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3,
#line 954 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4,
#line 954 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_5)
#line 954 "ml_optimize.m"
{
#line 958 "ml_optimize.m"
  while (MR_TRUE)
#line 958 "ml_optimize.m"
    {
#line 958 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 958 "ml_optimize.m"
      {
#line 958 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 958 "ml_optimize.m"
        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "ml_optimize.m"
          {
#line 958 "ml_optimize.m"
            *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "ml_optimize.m"
            *ml_backend__ml_optimize__STATE_VARIABLE_Statements_5 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4;
#line 958 "ml_optimize.m"
          }
#line 958 "ml_optimize.m"
        else
#line 959 "ml_optimize.m"
          {
#line 959 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Defn0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 959 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Defns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 962 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Defns1_15;
#line 962 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19;

#line 960 "ml_optimize.m"
            {
#line 960 "ml_optimize.m"
              ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__try_to_eliminate_defn_6_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Defn0_11, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns1_15, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19);
            }
#line 962 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 961 "ml_optimize.m"
              {
#line 961 "ml_optimize.m"
                /* direct tailcall eliminated */
#line 961 "ml_optimize.m"
                {
#line 961 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__Defns1_15;
#line 961 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_4 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_19_19;

#line 961 "ml_optimize.m"
                  ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_4;
#line 961 "ml_optimize.m"
                  ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
#line 961 "ml_optimize.m"
                }
#line 961 "ml_optimize.m"
                continue;
#line 961 "ml_optimize.m"
              }
#line 962 "ml_optimize.m"
            else
#line 963 "ml_optimize.m"
              {
#line 963 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Defns2_16;

#line 963 "ml_optimize.m"
                {
#line 963 "ml_optimize.m"
                  ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__HeadVar__1_1, ml_backend__ml_optimize__Defns0_12, &ml_backend__ml_optimize__Defns2_16, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_4, ml_backend__ml_optimize__STATE_VARIABLE_Statements_5);
                }
#line 964 "ml_optimize.m"
                {
#line 964 "ml_optimize.m"
                  MR_Word base;
#line 964 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "ml_optimize.m"
                  *ml_backend__ml_optimize__HeadVar__3_3 = base;
#line 964 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defn0_11));
#line 964 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Defns2_16));
#line 964 "ml_optimize.m"
                }
#line 963 "ml_optimize.m"
              }
#line 959 "ml_optimize.m"
          }
#line 958 "ml_optimize.m"
      }
#line 958 "ml_optimize.m"
      break;
#line 958 "ml_optimize.m"
    }
#line 954 "ml_optimize.m"
}

#line 911 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__set_initializer_4_p_0(
#line 911 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__VarName_1,
#line 911 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Rval_2,
#line 911 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
#line 911 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4)
#line 911 "ml_optimize.m"
{
#line 914 "ml_optimize.m"
  {
#line 914 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 914 "ml_optimize.m"
    if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "ml_optimize.m"
      {
#line 915 "ml_optimize.m"
        {
#line 915 "ml_optimize.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.set_initializer\'/4", (MR_String) "var not found");
#line 915 "ml_optimize.m"
          return;
        }
#line 914 "ml_optimize.m"
      }
#line 914 "ml_optimize.m"
    else
#line 916 "ml_optimize.m"
      {
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defn0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defn_15;
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns_16;
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 0)));
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 1)));
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Flags_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 2)));
#line 916 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__DefnBody0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_13, (MR_Integer) 3)));
#line 925 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Type_21;
#line 925 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__GCStatement_23;
#line 919 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_25_25;
#line 919 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_27_27;
#line 920 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___OldInitializer_22;

#line 919 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_17)) == (MR_mktag((MR_Integer) 1)));
#line 919 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 919 "ml_optimize.m"
          {
#line 919 "ml_optimize.m"
            ml_backend__ml_optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Name_17, (MR_Integer) 0)));
#line 919 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 919 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 919 "ml_optimize.m"
              {
#line 919 "ml_optimize.m"
                ml_backend__ml_optimize__V_27_27 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_25_25), (MR_Integer) 1);
#line 919 "ml_optimize.m"
                {
#line 919 "ml_optimize.m"
                  ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__V_27_27);
                }
#line 919 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 919 "ml_optimize.m"
                  {
#line 920 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_20)) == (MR_mktag((MR_Integer) 1)));
#line 920 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 920 "ml_optimize.m"
                      {
#line 920 "ml_optimize.m"
                        ml_backend__ml_optimize__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_20, (MR_Integer) 0)));
#line 920 "ml_optimize.m"
                        ml_backend__ml_optimize___OldInitializer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_20, (MR_Integer) 1)));
#line 920 "ml_optimize.m"
                        ml_backend__ml_optimize__GCStatement_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody0_20, (MR_Integer) 2)));
#line 920 "ml_optimize.m"
                      }
#line 919 "ml_optimize.m"
                  }
#line 919 "ml_optimize.m"
              }
#line 919 "ml_optimize.m"
          }
#line 925 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 922 "ml_optimize.m"
          {
#line 922 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__DefnBody_24;
#line 922 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_26_26;

#line 922 "ml_optimize.m"
            {
#line 922 "ml_optimize.m"
              ml_backend__ml_optimize__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 922 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_26_26, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_2));
#line 922 "ml_optimize.m"
            }
#line 922 "ml_optimize.m"
            {
#line 922 "ml_optimize.m"
              ml_backend__ml_optimize__DefnBody_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 922 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_24, 0) = ((MR_Box) (ml_backend__ml_optimize__Type_21));
#line 922 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_24, 1) = ((MR_Box) (ml_backend__ml_optimize__V_26_26));
#line 922 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__DefnBody_24, 2) = ((MR_Box) (ml_backend__ml_optimize__GCStatement_23));
#line 922 "ml_optimize.m"
            }
#line 923 "ml_optimize.m"
            {
#line 923 "ml_optimize.m"
              ml_backend__ml_optimize__Defn_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 923 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_17));
#line 923 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_18));
#line 923 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_19));
#line 923 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_15, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_24));
#line 923 "ml_optimize.m"
            }
#line 924 "ml_optimize.m"
            ml_backend__ml_optimize__Defns_16 = ml_backend__ml_optimize__Defns0_14;
#line 922 "ml_optimize.m"
          }
#line 925 "ml_optimize.m"
        else
#line 926 "ml_optimize.m"
          {
#line 926 "ml_optimize.m"
            ml_backend__ml_optimize__Defn_15 = ml_backend__ml_optimize__Defn0_13;
#line 927 "ml_optimize.m"
            {
#line 927 "ml_optimize.m"
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_1, ml_backend__ml_optimize__Rval_2, ml_backend__ml_optimize__Defns0_14, &ml_backend__ml_optimize__Defns_16);
            }
#line 926 "ml_optimize.m"
          }
#line 916 "ml_optimize.m"
        {
#line 916 "ml_optimize.m"
          MR_Word base;
#line 916 "ml_optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__4_4 = base;
#line 916 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defn_15));
#line 916 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Defns_16));
#line 916 "ml_optimize.m"
        }
#line 916 "ml_optimize.m"
      }
#line 914 "ml_optimize.m"
  }
#line 911 "ml_optimize.m"
}

#line 901 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__var_defn_2_p_0(
#line 901 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__VarName_3,
#line 901 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn_4)
#line 901 "ml_optimize.m"
{
#line 903 "ml_optimize.m"
  {
#line 903 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 903 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 0)));
#line 903 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_9_9;
#line 903 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_10_10;
#line 904 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 1)));
#line 904 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 2)));
#line 904 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn_4, (MR_Integer) 3)));

#line 904 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 904 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 904 "ml_optimize.m"
      {
#line 904 "ml_optimize.m"
        ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_8_8, (MR_Integer) 0)));
#line 904 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 904 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 904 "ml_optimize.m"
          {
#line 904 "ml_optimize.m"
            ml_backend__ml_optimize__V_10_10 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_9_9), (MR_Integer) 1);
#line 904 "ml_optimize.m"
            {
#line 904 "ml_optimize.m"
              return ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_optimize__VarName_3, ml_backend__ml_optimize__V_10_10);
            }
#line 904 "ml_optimize.m"
          }
#line 904 "ml_optimize.m"
      }
#line 903 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 903 "ml_optimize.m"
  }
#line 901 "ml_optimize.m"
}

#line 878 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3(
#line 878 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 878 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
#line 878 "ml_optimize.m"
{
#line 878 "ml_optimize.m"
  {
#line 878 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 878 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;

#line 878 "ml_optimize.m"
    {
#line 878 "ml_optimize.m"
      return ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
#line 878 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 878 "ml_optimize.m"
  }
#line 878 "ml_optimize.m"
}

#line 876 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2(
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
#line 876 "ml_optimize.m"
{
#line 876 "ml_optimize.m"
  {
#line 876 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 876 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;

#line 876 "ml_optimize.m"
    {
#line 876 "ml_optimize.m"
      return ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
#line 876 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 876 "ml_optimize.m"
  }
#line 876 "ml_optimize.m"
}

#line 876 "ml_optimize.m"
static MR_bool MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1(
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 876 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
#line 876 "ml_optimize.m"
{
#line 876 "ml_optimize.m"
  {
#line 876 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 876 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;

#line 876 "ml_optimize.m"
    {
#line 876 "ml_optimize.m"
      return ml_backend__ml_optimize__succeeded = ml_backend__ml_optimize__var_defn_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
#line 876 "ml_optimize.m"
    return ml_backend__ml_optimize__succeeded;
#line 876 "ml_optimize.m"
  }
#line 876 "ml_optimize.m"
}

#line 853 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(
#line 853 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_6,
#line 853 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_32,
#line 853 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Defns_33,
#line 853 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34,
#line 853 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_35)
#line 853 "ml_optimize.m"
{
#line 896 "ml_optimize.m"
  while (MR_TRUE)
#line 896 "ml_optimize.m"
    {
#line 896 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 896 "ml_optimize.m"
      {
#line 896 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34)) == (MR_mktag((MR_Integer) 1)));
#line 896 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__RHS_11;
#line 896 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__VarName_17;
#line 896 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_36_36;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_60_60;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__AssignStatement_9;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__LHS_10;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__ThisVar_13;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Qualifier_15;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__QualKind_16;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__ThisData_18;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__FollowingDefns_21;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Filter_22;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_37_37;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_38_38;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_39_39;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_40_40;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_41_41;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_42_42;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_43_43;
#line 861 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_61_61;
#line 862 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_12_12;
#line 863 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___ThisType_14;
#line 875 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_53_53;
#line 875 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_54_54;
#line 875 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_55_55;
#line 875 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_56_56;
#line 876 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___PrecedingDefns_19;
#line 876 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___VarDefn_20;
#line 888 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_31_31;
#line 888 "ml_optimize.m"
        MR_Box ml_backend__ml_optimize__conv0_V_31_31;

#line 861 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 861 "ml_optimize.m"
          {
#line 861 "ml_optimize.m"
            ml_backend__ml_optimize__AssignStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34, (MR_Integer) 0)));
#line 861 "ml_optimize.m"
            ml_backend__ml_optimize__STATE_VARIABLE_Statements_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34, (MR_Integer) 1)));
#line 862 "ml_optimize.m"
            ml_backend__ml_optimize__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_9, (MR_Integer) 0)));
#line 862 "ml_optimize.m"
            ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_9, (MR_Integer) 1)));
#line 862 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 862 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 862 "ml_optimize.m"
              {
#line 862 "ml_optimize.m"
                ml_backend__ml_optimize__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_37_37, (MR_Integer) 1)));
#line 862 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_38_38)) == (MR_mktag((MR_Integer) 2)));
#line 862 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 862 "ml_optimize.m"
                  {
#line 862 "ml_optimize.m"
                    ml_backend__ml_optimize__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_38_38, (MR_Integer) 0)));
#line 862 "ml_optimize.m"
                    ml_backend__ml_optimize__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_38_38, (MR_Integer) 1)));
#line 863 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__LHS_10)) == (MR_mktag((MR_Integer) 3)));
#line 863 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 863 "ml_optimize.m"
                      {
#line 863 "ml_optimize.m"
                        ml_backend__ml_optimize__ThisVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 0)));
#line 863 "ml_optimize.m"
                        ml_backend__ml_optimize___ThisType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__LHS_10, (MR_Integer) 1)));
#line 864 "ml_optimize.m"
                        ml_backend__ml_optimize__Qualifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 0)));
#line 864 "ml_optimize.m"
                        ml_backend__ml_optimize__QualKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 1)));
#line 864 "ml_optimize.m"
                        ml_backend__ml_optimize__VarName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisVar_13, (MR_Integer) 2)));
#line 865 "ml_optimize.m"
                        ml_backend__ml_optimize__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__VarName_17);
#line 865 "ml_optimize.m"
                        {
#line 865 "ml_optimize.m"
                          ml_backend__ml_optimize__ThisData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 865 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
#line 865 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 1) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
#line 865 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ThisData_18, 2) = ((MR_Box) (ml_backend__ml_optimize__V_39_39));
#line 865 "ml_optimize.m"
                        }
#line 869 "ml_optimize.m"
                        {
#line 869 "ml_optimize.m"
                          ml_backend__ml_optimize__V_40_40 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__ThisData_18);
                        }
#line 869 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_40_40 == (MR_Integer) 0);
#line 861 "ml_optimize.m"
                        if (ml_backend__ml_optimize__succeeded)
#line 861 "ml_optimize.m"
                          {
#line 875 "ml_optimize.m"
                            ml_backend__ml_optimize__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 0)));
#line 875 "ml_optimize.m"
                            ml_backend__ml_optimize__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 1)));
#line 875 "ml_optimize.m"
                            ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 2)));
#line 875 "ml_optimize.m"
                            ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 3)));
#line 875 "ml_optimize.m"
                            ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_6, (MR_Integer) 4)));
#line 875 "ml_optimize.m"
                            {
#line 875 "ml_optimize.m"
                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__Qualifier_15, ml_backend__ml_optimize__V_61_61);
                            }
#line 861 "ml_optimize.m"
                            if (ml_backend__ml_optimize__succeeded)
#line 861 "ml_optimize.m"
                              {
#line 7103 "ml_backend.ml_optimize.c"
                                ml_backend__ml_optimize__TypeCtorInfo_60_60 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 876 "ml_optimize.m"
                                {
#line 876 "ml_optimize.m"
                                  ml_backend__ml_optimize__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[1]));
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_1));
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 3) = ((MR_Box) (ml_backend__ml_optimize__VarName_17));
#line 876 "ml_optimize.m"
                                }
#line 876 "ml_optimize.m"
                                {
#line 876 "ml_optimize.m"
                                  ml_backend__ml_optimize__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_4[2]));
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_2));
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 876 "ml_optimize.m"
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 3) = ((MR_Box) (ml_backend__ml_optimize__V_43_43));
#line 876 "ml_optimize.m"
                                }
#line 876 "ml_optimize.m"
                                {
#line 876 "ml_optimize.m"
                                  mercury__list__takewhile_4_p_0(ml_backend__ml_optimize__TypeCtorInfo_60_60, ml_backend__ml_optimize__V_41_41, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_32, &ml_backend__ml_optimize___PrecedingDefns_19, &ml_backend__ml_optimize__V_42_42);
                                }
#line 876 "ml_optimize.m"
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 876 "ml_optimize.m"
                                if (ml_backend__ml_optimize__succeeded)
#line 876 "ml_optimize.m"
                                  {
#line 876 "ml_optimize.m"
                                    ml_backend__ml_optimize___VarDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_42_42, (MR_Integer) 0)));
#line 876 "ml_optimize.m"
                                    ml_backend__ml_optimize__FollowingDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_42_42, (MR_Integer) 1)));
#line 878 "ml_optimize.m"
                                    {
#line 878 "ml_optimize.m"
                                      ml_backend__ml_optimize__Filter_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_7[0]));
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 1) = ((MR_Box) (ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0_3));
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 3) = ((MR_Box) (ml_backend__ml_optimize__RHS_11));
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 4) = ((MR_Box) (ml_backend__ml_optimize__Qualifier_15));
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 5) = ((MR_Box) (ml_backend__ml_optimize__QualKind_16));
#line 878 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Filter_22, 6) = ((MR_Box) (ml_backend__ml_optimize__ThisData_18));
#line 878 "ml_optimize.m"
                                    }
#line 888 "ml_optimize.m"
                                    {
#line 888 "ml_optimize.m"
                                      ml_backend__ml_optimize__succeeded = mercury__list__find_first_match_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_60_60, ml_backend__ml_optimize__Filter_22, ml_backend__ml_optimize__FollowingDefns_21, &ml_backend__ml_optimize__conv0_V_31_31);
                                    }
#line 888 "ml_optimize.m"
                                    if (ml_backend__ml_optimize__succeeded)
#line 888 "ml_optimize.m"
                                      {
#line 888 "ml_optimize.m"
                                        ml_backend__ml_optimize__V_31_31 = ((MR_Word) ml_backend__ml_optimize__conv0_V_31_31);
#line 888 "ml_optimize.m"
                                        ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 888 "ml_optimize.m"
                                      }
#line 888 "ml_optimize.m"
                                    ml_backend__ml_optimize__succeeded = !(ml_backend__ml_optimize__succeeded);
#line 876 "ml_optimize.m"
                                  }
#line 861 "ml_optimize.m"
                              }
#line 861 "ml_optimize.m"
                          }
#line 863 "ml_optimize.m"
                      }
#line 862 "ml_optimize.m"
                  }
#line 862 "ml_optimize.m"
              }
#line 861 "ml_optimize.m"
          }
#line 896 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 892 "ml_optimize.m"
          {
#line 892 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_49_49;

#line 892 "ml_optimize.m"
            {
#line 892 "ml_optimize.m"
              ml_backend__ml_optimize__set_initializer_4_p_0(ml_backend__ml_optimize__VarName_17, ml_backend__ml_optimize__RHS_11, ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_32, &ml_backend__ml_optimize__STATE_VARIABLE_Defns_49_49);
            }
#line 895 "ml_optimize.m"
            /* direct tailcall eliminated */
#line 895 "ml_optimize.m"
            {
#line 895 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Defns_0__tmp_copy_32 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_49_49;
#line 895 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_34 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_36_36;

#line 895 "ml_optimize.m"
              ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0__tmp_copy_34;
#line 895 "ml_optimize.m"
              ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_32 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0__tmp_copy_32;
#line 895 "ml_optimize.m"
            }
#line 895 "ml_optimize.m"
            continue;
#line 892 "ml_optimize.m"
          }
#line 896 "ml_optimize.m"
        else
#line 898 "ml_optimize.m"
          {
#line 898 "ml_optimize.m"
            *ml_backend__ml_optimize__STATE_VARIABLE_Statements_35 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_34;
#line 898 "ml_optimize.m"
            *ml_backend__ml_optimize__STATE_VARIABLE_Defns_33 = ml_backend__ml_optimize__STATE_VARIABLE_Defns_0_32;
#line 898 "ml_optimize.m"
          }
#line 896 "ml_optimize.m"
      }
#line 896 "ml_optimize.m"
      break;
#line 896 "ml_optimize.m"
    }
#line 853 "ml_optimize.m"
}

#line 740 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__cases_affect_lvals_3_p_0(
#line 740 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lvals_1,
#line 740 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 740 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3)
#line 740 "ml_optimize.m"
{
#line 743 "ml_optimize.m"
  while (MR_TRUE)
#line 743 "ml_optimize.m"
    {
#line 743 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 743 "ml_optimize.m"
      {
#line 743 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 743 "ml_optimize.m"
        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 743 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 0;
#line 743 "ml_optimize.m"
        else
#line 744 "ml_optimize.m"
          {
#line 744 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 744 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 744 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 2)));
#line 744 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__HeadAffects_12;
#line 745 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 0)));
#line 745 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Head_6, (MR_Integer) 1)));

#line 746 "ml_optimize.m"
            {
#line 746 "ml_optimize.m"
              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Statement_11, &ml_backend__ml_optimize__HeadAffects_12);
            }
#line 750 "ml_optimize.m"
            if ((ml_backend__ml_optimize__HeadAffects_12 == (MR_Integer) 0))
#line 752 "ml_optimize.m"
              {
#line 752 "ml_optimize.m"
                /* direct tailcall eliminated */
#line 752 "ml_optimize.m"
                {
#line 752 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__Tail_7;

#line 752 "ml_optimize.m"
                  ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
#line 752 "ml_optimize.m"
                }
#line 752 "ml_optimize.m"
                continue;
#line 752 "ml_optimize.m"
              }
#line 750 "ml_optimize.m"
            else
#line 749 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 1;
#line 744 "ml_optimize.m"
          }
#line 743 "ml_optimize.m"
      }
#line 743 "ml_optimize.m"
      break;
#line 743 "ml_optimize.m"
    }
#line 740 "ml_optimize.m"
}

#line 726 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__statements_affect_lvals_3_p_0(
#line 726 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lvals_1,
#line 726 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 726 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__3_3)
#line 726 "ml_optimize.m"
{
#line 729 "ml_optimize.m"
  while (MR_TRUE)
#line 729 "ml_optimize.m"
    {
#line 729 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 729 "ml_optimize.m"
      {
#line 729 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 729 "ml_optimize.m"
        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 0;
#line 729 "ml_optimize.m"
        else
#line 730 "ml_optimize.m"
          {
#line 730 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__HeadAffects_9;

#line 731 "ml_optimize.m"
            {
#line 731 "ml_optimize.m"
              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_1, ml_backend__ml_optimize__Head_6, &ml_backend__ml_optimize__HeadAffects_9);
            }
#line 735 "ml_optimize.m"
            if ((ml_backend__ml_optimize__HeadAffects_9 == (MR_Integer) 0))
#line 737 "ml_optimize.m"
              {
#line 737 "ml_optimize.m"
                /* direct tailcall eliminated */
#line 737 "ml_optimize.m"
                {
#line 737 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__Tail_7;

#line 737 "ml_optimize.m"
                  ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
#line 737 "ml_optimize.m"
                }
#line 737 "ml_optimize.m"
                continue;
#line 737 "ml_optimize.m"
              }
#line 735 "ml_optimize.m"
            else
#line 734 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__3_3 = (MR_Integer) 1;
#line 730 "ml_optimize.m"
          }
#line 729 "ml_optimize.m"
      }
#line 729 "ml_optimize.m"
      break;
#line 729 "ml_optimize.m"
    }
#line 726 "ml_optimize.m"
}

#line 642 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__statement_affects_lvals_3_p_0(
#line 642 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lvals_4,
#line 642 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement_5,
#line 642 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Affects_6)
#line 642 "ml_optimize.m"
{
#line 645 "ml_optimize.m"
  while (MR_TRUE)
#line 645 "ml_optimize.m"
    {
#line 645 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 645 "ml_optimize.m"
      {
#line 645 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;
#line 645 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_5, (MR_Integer) 0)));
#line 646 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_5, (MR_Integer) 1)));

#line 650 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 0))))
#line 648 "ml_optimize.m"
          {
#line 648 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Statements_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
#line 648 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));

#line 649 "ml_optimize.m"
            {
#line 649 "ml_optimize.m"
              ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Statements_10, ml_backend__ml_optimize__Affects_6);
#line 649 "ml_optimize.m"
              return;
            }
#line 648 "ml_optimize.m"
          }
#line 650 "ml_optimize.m"
        else
#line 650 "ml_optimize.m"
          if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 2))))
#line 654 "ml_optimize.m"
            {
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Statements_66;
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Head_82;
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Tail_83;
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__HeadAffects_85;
#line 654 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));

#line 658 "ml_optimize.m"
              if ((ml_backend__ml_optimize__MaybeElse_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "ml_optimize.m"
                {
#line 657 "ml_optimize.m"
                  {
#line 657 "ml_optimize.m"
                    ml_backend__ml_optimize__Statements_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "ml_optimize.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
#line 657 "ml_optimize.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "ml_optimize.m"
                  }
#line 656 "ml_optimize.m"
                }
#line 658 "ml_optimize.m"
              else
#line 659 "ml_optimize.m"
                {
#line 659 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_16, (MR_Integer) 0)));
#line 659 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__V_63_63;

#line 660 "ml_optimize.m"
                  {
#line 660 "ml_optimize.m"
                    ml_backend__ml_optimize__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "ml_optimize.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_63_63, 0) = ((MR_Box) (ml_backend__ml_optimize__Else_17));
#line 660 "ml_optimize.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "ml_optimize.m"
                  }
#line 660 "ml_optimize.m"
                  {
#line 660 "ml_optimize.m"
                    ml_backend__ml_optimize__Statements_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "ml_optimize.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 0) = ((MR_Box) (ml_backend__ml_optimize__Then_15));
#line 660 "ml_optimize.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, 1) = ((MR_Box) (ml_backend__ml_optimize__V_63_63));
#line 660 "ml_optimize.m"
                  }
#line 659 "ml_optimize.m"
                }
#line 730 "ml_optimize.m"
              ml_backend__ml_optimize__Head_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, (MR_Integer) 0)));
#line 730 "ml_optimize.m"
              ml_backend__ml_optimize__Tail_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_66, (MR_Integer) 1)));
#line 731 "ml_optimize.m"
              {
#line 731 "ml_optimize.m"
                ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Head_82, &ml_backend__ml_optimize__HeadAffects_85);
              }
#line 735 "ml_optimize.m"
              if ((ml_backend__ml_optimize__HeadAffects_85 == (MR_Integer) 0))
#line 737 "ml_optimize.m"
                {
#line 737 "ml_optimize.m"
                  ml_backend__ml_optimize__statements_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Tail_83, ml_backend__ml_optimize__Affects_6);
#line 737 "ml_optimize.m"
                  return;
                }
#line 735 "ml_optimize.m"
              else
#line 734 "ml_optimize.m"
                *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 654 "ml_optimize.m"
            }
#line 650 "ml_optimize.m"
          else
#line 650 "ml_optimize.m"
            if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 1))))
#line 651 "ml_optimize.m"
              {
#line 651 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__SubStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
#line 651 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)));
#line 651 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));

#line 652 "ml_optimize.m"
                /* direct tailcall eliminated */
#line 652 "ml_optimize.m"
                {
#line 652 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Statement__tmp_copy_5 = ml_backend__ml_optimize__SubStatement_13;

#line 652 "ml_optimize.m"
                  ml_backend__ml_optimize__Statement_5 = ml_backend__ml_optimize__Statement__tmp_copy_5;
#line 652 "ml_optimize.m"
                }
#line 652 "ml_optimize.m"
                continue;
#line 651 "ml_optimize.m"
              }
#line 650 "ml_optimize.m"
            else
#line 650 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 698 "ml_optimize.m"
                {
#line 698 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__AtomicStmt_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));

#line 707 "ml_optimize.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) == (MR_mktag((MR_Integer) 2))))
#line 712 "ml_optimize.m"
                    {
#line 712 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Lval_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)));
#line 708 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));

#line 713 "ml_optimize.m"
                      {
#line 713 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_45)));
                      }
#line 715 "ml_optimize.m"
                      if (ml_backend__ml_optimize__succeeded)
#line 714 "ml_optimize.m"
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 715 "ml_optimize.m"
                      else
#line 716 "ml_optimize.m"
                        *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 712 "ml_optimize.m"
                    }
#line 707 "ml_optimize.m"
                  else
#line 707 "ml_optimize.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 712 "ml_optimize.m"
                      {
#line 712 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Lval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));
#line 709 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 2)));

#line 713 "ml_optimize.m"
                        {
#line 713 "ml_optimize.m"
                          ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_70)));
                        }
#line 715 "ml_optimize.m"
                        if (ml_backend__ml_optimize__succeeded)
#line 714 "ml_optimize.m"
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 715 "ml_optimize.m"
                        else
#line 716 "ml_optimize.m"
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 712 "ml_optimize.m"
                      }
#line 707 "ml_optimize.m"
                    else
#line 707 "ml_optimize.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 712 "ml_optimize.m"
                        {
#line 712 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__Lval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));

#line 713 "ml_optimize.m"
                          {
#line 713 "ml_optimize.m"
                            ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_74)));
                          }
#line 715 "ml_optimize.m"
                          if (ml_backend__ml_optimize__succeeded)
#line 714 "ml_optimize.m"
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 715 "ml_optimize.m"
                          else
#line 716 "ml_optimize.m"
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 712 "ml_optimize.m"
                        }
#line 707 "ml_optimize.m"
                      else
#line 707 "ml_optimize.m"
                        if (((((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 712 "ml_optimize.m"
                          {
#line 712 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Lval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 1)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 2)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 3)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 4)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 5)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 6)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 7)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 8)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 9)));
#line 710 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 10)));

#line 713 "ml_optimize.m"
                            {
#line 713 "ml_optimize.m"
                              ml_backend__ml_optimize__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_optimize__Lvals_4, ((MR_Box) (ml_backend__ml_optimize__Lval_78)));
                            }
#line 715 "ml_optimize.m"
                            if (ml_backend__ml_optimize__succeeded)
#line 714 "ml_optimize.m"
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 715 "ml_optimize.m"
                            else
#line 716 "ml_optimize.m"
                              *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 712 "ml_optimize.m"
                          }
#line 707 "ml_optimize.m"
                        else
#line 707 "ml_optimize.m"
                          if (((((((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)))) == (MR_Integer) 6)))) || (((((MR_tag((MR_Word) ml_backend__ml_optimize__AtomicStmt_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_40, (MR_Integer) 0)))) == (MR_Integer) 7))))))
#line 722 "ml_optimize.m"
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 707 "ml_optimize.m"
                          else
#line 706 "ml_optimize.m"
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 698 "ml_optimize.m"
                }
#line 650 "ml_optimize.m"
              else
#line 650 "ml_optimize.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 696 "ml_optimize.m"
                  *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 650 "ml_optimize.m"
                else
#line 650 "ml_optimize.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 683 "ml_optimize.m"
                    *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 650 "ml_optimize.m"
                  else
#line 650 "ml_optimize.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 664 "ml_optimize.m"
                      {
#line 664 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 4)));
#line 664 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Default_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 5)));
#line 664 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Affects0_23;
#line 664 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 1)));
#line 664 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 2)));
#line 664 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt_7, (MR_Integer) 3)));

#line 665 "ml_optimize.m"
                        {
#line 665 "ml_optimize.m"
                          ml_backend__ml_optimize__cases_affect_lvals_3_p_0(ml_backend__ml_optimize__Lvals_4, ml_backend__ml_optimize__Cases_21, &ml_backend__ml_optimize__Affects0_23);
                        }
#line 669 "ml_optimize.m"
                        if ((ml_backend__ml_optimize__Affects0_23 == (MR_Integer) 0))
#line 676 "ml_optimize.m"
                          if (((MR_tag((MR_Word) ml_backend__ml_optimize__Default_22)) == (MR_mktag((MR_Integer) 1))))
#line 677 "ml_optimize.m"
                            {
#line 677 "ml_optimize.m"
                              MR_Word ml_backend__ml_optimize__DefaultStatement_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default_22), (MR_Integer) 1);

#line 678 "ml_optimize.m"
                              /* direct tailcall eliminated */
#line 678 "ml_optimize.m"
                              {
#line 678 "ml_optimize.m"
                                MR_Word ml_backend__ml_optimize__Statement__tmp_copy_5 = ml_backend__ml_optimize__DefaultStatement_24;

#line 678 "ml_optimize.m"
                                ml_backend__ml_optimize__Statement_5 = ml_backend__ml_optimize__Statement__tmp_copy_5;
#line 678 "ml_optimize.m"
                              }
#line 678 "ml_optimize.m"
                              continue;
#line 677 "ml_optimize.m"
                            }
#line 676 "ml_optimize.m"
                          else
#line 675 "ml_optimize.m"
                            *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 0;
#line 669 "ml_optimize.m"
                        else
#line 668 "ml_optimize.m"
                          *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 664 "ml_optimize.m"
                      }
#line 650 "ml_optimize.m"
                    else
#line 691 "ml_optimize.m"
                      *ml_backend__ml_optimize__Affects_6 = (MR_Integer) 1;
#line 645 "ml_optimize.m"
      }
#line 645 "ml_optimize.m"
      break;
#line 645 "ml_optimize.m"
    }
#line 642 "ml_optimize.m"
}

#line 626 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(
#line 626 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Lval_4,
#line 626 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15,
#line 626 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_16)
#line 626 "ml_optimize.m"
{
#line 631 "ml_optimize.m"
  {
#line 631 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 631 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_4)) == (MR_mktag((MR_Integer) 0))))
#line 631 "ml_optimize.m"
      {
#line 631 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 1)));
#line 631 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 0)));
#line 631 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 2)));
#line 631 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 3)));
#line 631 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Lval_4, (MR_Integer) 4)));

#line 632 "ml_optimize.m"
        {
#line 632 "ml_optimize.m"
          ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__Rval_7, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15, ml_backend__ml_optimize__STATE_VARIABLE_Components_16);
#line 632 "ml_optimize.m"
          return;
        }
#line 631 "ml_optimize.m"
      }
#line 631 "ml_optimize.m"
    else
#line 631 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_4)) == (MR_mktag((MR_Integer) 2))))
#line 637 "ml_optimize.m"
        *ml_backend__ml_optimize__STATE_VARIABLE_Components_16 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15;
#line 631 "ml_optimize.m"
      else
#line 631 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Lval_4)) == (MR_mktag((MR_Integer) 1))))
#line 634 "ml_optimize.m"
          {
#line 634 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_4, (MR_Integer) 0)));
#line 634 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Lval_4, (MR_Integer) 1)));

#line 635 "ml_optimize.m"
            {
#line 635 "ml_optimize.m"
              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__Rval_19, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15, ml_backend__ml_optimize__STATE_VARIABLE_Components_16);
#line 635 "ml_optimize.m"
              return;
            }
#line 634 "ml_optimize.m"
          }
#line 631 "ml_optimize.m"
        else
#line 639 "ml_optimize.m"
          *ml_backend__ml_optimize__STATE_VARIABLE_Components_16 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_15;
#line 631 "ml_optimize.m"
  }
#line 626 "ml_optimize.m"
}

#line 596 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
#line 596 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Rval_4,
#line 596 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18,
#line 596 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Components_19)
#line 596 "ml_optimize.m"
{
#line 601 "ml_optimize.m"
  while (MR_TRUE)
#line 601 "ml_optimize.m"
    {
#line 601 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 601 "ml_optimize.m"
      {
#line 601 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 601 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 601 "ml_optimize.m"
          {
#line 601 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)));
#line 601 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26;

#line 602 "ml_optimize.m"
            {
#line 602 "ml_optimize.m"
              mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_6)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26);
            }
#line 603 "ml_optimize.m"
            {
#line 603 "ml_optimize.m"
              ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(ml_backend__ml_optimize__Lval_6, ml_backend__ml_optimize__STATE_VARIABLE_Components_26_26, ml_backend__ml_optimize__STATE_VARIABLE_Components_19);
#line 603 "ml_optimize.m"
              return;
            }
#line 601 "ml_optimize.m"
          }
#line 601 "ml_optimize.m"
        else
#line 601 "ml_optimize.m"
          if (((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 2))))
#line 605 "ml_optimize.m"
            {
#line 605 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));
#line 605 "ml_optimize.m"
              MR_Integer ml_backend__ml_optimize__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)));

#line 606 "ml_optimize.m"
              /* direct tailcall eliminated */
#line 606 "ml_optimize.m"
              {
#line 606 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Rval__tmp_copy_4 = ml_backend__ml_optimize__SubRval_8;

#line 606 "ml_optimize.m"
                ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__Rval__tmp_copy_4;
#line 606 "ml_optimize.m"
              }
#line 606 "ml_optimize.m"
              continue;
#line 605 "ml_optimize.m"
            }
#line 601 "ml_optimize.m"
          else
#line 601 "ml_optimize.m"
            if (((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 0))))
#line 620 "ml_optimize.m"
              *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
#line 601 "ml_optimize.m"
            else
#line 601 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 611 "ml_optimize.m"
                {
#line 611 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__SubRvalB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 3)));
#line 611 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22;
#line 611 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__SubRvalA_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
#line 611 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

#line 612 "ml_optimize.m"
                  {
#line 612 "ml_optimize.m"
                    ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__SubRvalA_28, ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22);
                  }
#line 613 "ml_optimize.m"
                  /* direct tailcall eliminated */
#line 613 "ml_optimize.m"
                  {
#line 613 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__Rval__tmp_copy_4 = ml_backend__ml_optimize__SubRvalB_12;
#line 613 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_0__tmp_copy_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_22_22;

#line 613 "ml_optimize.m"
                    ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0__tmp_copy_18;
#line 613 "ml_optimize.m"
                    ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__Rval__tmp_copy_4;
#line 613 "ml_optimize.m"
                  }
#line 613 "ml_optimize.m"
                  continue;
#line 611 "ml_optimize.m"
                }
#line 601 "ml_optimize.m"
              else
#line 601 "ml_optimize.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 619 "ml_optimize.m"
                  *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
#line 601 "ml_optimize.m"
                else
#line 601 "ml_optimize.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 615 "ml_optimize.m"
                    {
#line 615 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20;
#line 615 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

#line 616 "ml_optimize.m"
                      {
#line 616 "ml_optimize.m"
                        mercury__set__insert_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_optimize__Lval_29)), ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18, &ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20);
                      }
#line 617 "ml_optimize.m"
                      {
#line 617 "ml_optimize.m"
                        ml_backend__ml_optimize__find_lval_component_lvals_3_p_0(ml_backend__ml_optimize__Lval_29, ml_backend__ml_optimize__STATE_VARIABLE_Components_20_20, ml_backend__ml_optimize__STATE_VARIABLE_Components_19);
#line 617 "ml_optimize.m"
                        return;
                      }
#line 615 "ml_optimize.m"
                    }
#line 601 "ml_optimize.m"
                  else
#line 601 "ml_optimize.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 622 "ml_optimize.m"
                      *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
#line 601 "ml_optimize.m"
                    else
#line 601 "ml_optimize.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 608 "ml_optimize.m"
                        {
#line 608 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 2)));
#line 608 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Rval_4, (MR_Integer) 1)));

#line 609 "ml_optimize.m"
                          /* direct tailcall eliminated */
#line 609 "ml_optimize.m"
                          {
#line 609 "ml_optimize.m"
                            MR_Word ml_backend__ml_optimize__Rval__tmp_copy_4 = ml_backend__ml_optimize__SubRvalA_10;

#line 609 "ml_optimize.m"
                            ml_backend__ml_optimize__Rval_4 = ml_backend__ml_optimize__Rval__tmp_copy_4;
#line 609 "ml_optimize.m"
                          }
#line 609 "ml_optimize.m"
                          continue;
#line 608 "ml_optimize.m"
                        }
#line 601 "ml_optimize.m"
                      else
#line 621 "ml_optimize.m"
                        *ml_backend__ml_optimize__STATE_VARIABLE_Components_19 = ml_backend__ml_optimize__STATE_VARIABLE_Components_0_18;
#line 601 "ml_optimize.m"
      }
#line 601 "ml_optimize.m"
      break;
#line 601 "ml_optimize.m"
    }
#line 596 "ml_optimize.m"
}

#line 508 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
#line 508 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__1_1,
#line 508 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__2_2)
#line 508 "ml_optimize.m"
{
#line 511 "ml_optimize.m"
  while (MR_TRUE)
#line 511 "ml_optimize.m"
    {
#line 511 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 511 "ml_optimize.m"
      {
#line 511 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 511 "ml_optimize.m"
        if ((ml_backend__ml_optimize__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "ml_optimize.m"
          *ml_backend__ml_optimize__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "ml_optimize.m"
        else
#line 511 "ml_optimize.m"
          {
#line 511 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__1_1, (MR_Integer) 0)));

#line 511 "ml_optimize.m"
            if ((ml_backend__ml_optimize__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "ml_optimize.m"
              {
#line 512 "ml_optimize.m"
                {
#line 512 "ml_optimize.m"
                  MR_Word base;
#line 512 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "ml_optimize.m"
                  *ml_backend__ml_optimize__HeadVar__2_2 = base;
#line 512 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_15_15));
#line 512 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "ml_optimize.m"
                }
#line 512 "ml_optimize.m"
              }
#line 511 "ml_optimize.m"
            else
#line 513 "ml_optimize.m"
              {
#line 513 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Stmt1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_14_14, (MR_Integer) 0)));
#line 513 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Stmts2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_14_14, (MR_Integer) 1)));
#line 516 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__ReplStmts_10;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__TypeCtorInfo_43_54;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Stmt0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_15_15, (MR_Integer) 0)));
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Context0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_15_15, (MR_Integer) 1)));
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Stmt1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 0)));
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__TestRval_24;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__StmtThen0_25;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__MaybeStmtElse0_26;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__StmtThen1_27;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__MaybeStmtElse1_28;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__TestRvalComponents_29;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__ContextT_32;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Then_33;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__MaybeElse_34;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Stmt_38;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Statement_39;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_40_40;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_41_41;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_43_43;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_44_44;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_45_45;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_46_46;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_47_47;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_55_55;
#line 524 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_56_56;
#line 526 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize___Context1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt1_7, (MR_Integer) 1)));
#line 567 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_31_31;

#line 556 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_20)) == (MR_mktag((MR_Integer) 2)));
#line 556 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 556 "ml_optimize.m"
                  {
#line 556 "ml_optimize.m"
                    ml_backend__ml_optimize__TestRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 0)));
#line 556 "ml_optimize.m"
                    ml_backend__ml_optimize__StmtThen0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 1)));
#line 556 "ml_optimize.m"
                    ml_backend__ml_optimize__MaybeStmtElse0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_20, (MR_Integer) 2)));
#line 557 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt1_22)) == (MR_mktag((MR_Integer) 2)));
#line 557 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 557 "ml_optimize.m"
                      {
#line 557 "ml_optimize.m"
                        ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 0)));
#line 557 "ml_optimize.m"
                        ml_backend__ml_optimize__StmtThen1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 1)));
#line 557 "ml_optimize.m"
                        ml_backend__ml_optimize__MaybeStmtElse1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt1_22, (MR_Integer) 2)));
#line 557 "ml_optimize.m"
                        {
#line 557 "ml_optimize.m"
                          ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_optimize__TestRval_24, ml_backend__ml_optimize__V_55_55);
                        }
#line 524 "ml_optimize.m"
                        if (ml_backend__ml_optimize__succeeded)
#line 524 "ml_optimize.m"
                          {
#line 8207 "ml_backend.ml_optimize.c"
                            ml_backend__ml_optimize__TypeCtorInfo_43_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
#line 558 "ml_optimize.m"
                            {
#line 558 "ml_optimize.m"
                              ml_backend__ml_optimize__V_40_40 = mercury__set__init_0_f_0(ml_backend__ml_optimize__TypeCtorInfo_43_54);
                            }
#line 558 "ml_optimize.m"
                            {
#line 558 "ml_optimize.m"
                              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(ml_backend__ml_optimize__TestRval_24, ml_backend__ml_optimize__V_40_40, &ml_backend__ml_optimize__TestRvalComponents_29);
                            }
#line 559 "ml_optimize.m"
                            ml_backend__ml_optimize__V_41_41 = (MR_Integer) 0;
#line 559 "ml_optimize.m"
                            {
#line 559 "ml_optimize.m"
                              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_29, ml_backend__ml_optimize__StmtThen0_25, &ml_backend__ml_optimize__V_56_56);
                            }
#line 559 "ml_optimize.m"
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_41_41 == ml_backend__ml_optimize__V_56_56);
#line 524 "ml_optimize.m"
                            if (ml_backend__ml_optimize__succeeded)
#line 524 "ml_optimize.m"
                              {
#line 562 "ml_optimize.m"
                                if ((ml_backend__ml_optimize__MaybeStmtElse0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "ml_optimize.m"
                                  ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 562 "ml_optimize.m"
                                else
#line 563 "ml_optimize.m"
                                  {
#line 563 "ml_optimize.m"
                                    MR_Word ml_backend__ml_optimize__StmtElse0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_26, (MR_Integer) 0)));
#line 563 "ml_optimize.m"
                                    MR_Word ml_backend__ml_optimize__V_57_57;

#line 564 "ml_optimize.m"
                                    {
#line 564 "ml_optimize.m"
                                      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(ml_backend__ml_optimize__TestRvalComponents_29, ml_backend__ml_optimize__StmtElse0_30, &ml_backend__ml_optimize__V_57_57);
                                    }
#line 564 "ml_optimize.m"
                                    ml_backend__ml_optimize__succeeded = ((MR_Integer) 0 == ml_backend__ml_optimize__V_57_57);
#line 563 "ml_optimize.m"
                                  }
#line 524 "ml_optimize.m"
                                if (ml_backend__ml_optimize__succeeded)
#line 524 "ml_optimize.m"
                                  {
#line 567 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__StmtThen0_25, (MR_Integer) 0)));
#line 567 "ml_optimize.m"
                                    ml_backend__ml_optimize__ContextT_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__StmtThen0_25, (MR_Integer) 1)));
#line 568 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "ml_optimize.m"
                                    {
#line 568 "ml_optimize.m"
                                      ml_backend__ml_optimize__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen1_27));
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 1) = ((MR_Box) (ml_backend__ml_optimize__V_47_47));
#line 568 "ml_optimize.m"
                                    }
#line 568 "ml_optimize.m"
                                    {
#line 568 "ml_optimize.m"
                                      ml_backend__ml_optimize__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 0) = ((MR_Box) (ml_backend__ml_optimize__StmtThen0_25));
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 1) = ((MR_Box) (ml_backend__ml_optimize__V_46_46));
#line 568 "ml_optimize.m"
                                    }
#line 568 "ml_optimize.m"
                                    {
#line 568 "ml_optimize.m"
                                      ml_backend__ml_optimize__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 0) = ((MR_Box) (ml_backend__ml_optimize__V_44_44));
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 1) = ((MR_Box) (ml_backend__ml_optimize__V_45_45));
#line 568 "ml_optimize.m"
                                    }
#line 568 "ml_optimize.m"
                                    {
#line 568 "ml_optimize.m"
                                      ml_backend__ml_optimize__Then_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_33, 0) = ((MR_Box) (ml_backend__ml_optimize__V_43_43));
#line 568 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Then_33, 1) = ((MR_Box) (ml_backend__ml_optimize__ContextT_32));
#line 568 "ml_optimize.m"
                                    }
#line 578 "ml_optimize.m"
                                    if ((ml_backend__ml_optimize__MaybeStmtElse0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "ml_optimize.m"
                                      if ((ml_backend__ml_optimize__MaybeStmtElse1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "ml_optimize.m"
                                        ml_backend__ml_optimize__MaybeElse_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "ml_optimize.m"
                                      else
#line 576 "ml_optimize.m"
                                        ml_backend__ml_optimize__MaybeElse_34 = ml_backend__ml_optimize__MaybeStmtElse1_28;
#line 578 "ml_optimize.m"
                                    else
#line 579 "ml_optimize.m"
                                      {
#line 579 "ml_optimize.m"
                                        MR_Word ml_backend__ml_optimize__Else0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse0_26, (MR_Integer) 0)));

#line 583 "ml_optimize.m"
                                        if ((ml_backend__ml_optimize__MaybeStmtElse1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "ml_optimize.m"
                                          ml_backend__ml_optimize__MaybeElse_34 = ml_backend__ml_optimize__MaybeStmtElse0_26;
#line 583 "ml_optimize.m"
                                        else
#line 584 "ml_optimize.m"
                                          {
#line 584 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__Else1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeStmtElse1_28, (MR_Integer) 0)));
#line 584 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_48_48;
#line 584 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_49_49;
#line 584 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_51_51;
#line 584 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__V_52_52;

#line 586 "ml_optimize.m"
                                            {
#line 586 "ml_optimize.m"
                                              ml_backend__ml_optimize__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_52_52, 0) = ((MR_Box) (ml_backend__ml_optimize__Else1_37));
#line 586 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "ml_optimize.m"
                                            }
#line 586 "ml_optimize.m"
                                            {
#line 586 "ml_optimize.m"
                                              ml_backend__ml_optimize__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 0) = ((MR_Box) (ml_backend__ml_optimize__Else0_36));
#line 586 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 1) = ((MR_Box) (ml_backend__ml_optimize__V_52_52));
#line 586 "ml_optimize.m"
                                            }
#line 585 "ml_optimize.m"
                                            {
#line 585 "ml_optimize.m"
                                              ml_backend__ml_optimize__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 1) = ((MR_Box) (ml_backend__ml_optimize__V_51_51));
#line 585 "ml_optimize.m"
                                            }
#line 585 "ml_optimize.m"
                                            {
#line 585 "ml_optimize.m"
                                              ml_backend__ml_optimize__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, 0) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
#line 585 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, 1) = ((MR_Box) (ml_backend__ml_optimize__Context0_21));
#line 585 "ml_optimize.m"
                                            }
#line 585 "ml_optimize.m"
                                            {
#line 585 "ml_optimize.m"
                                              ml_backend__ml_optimize__MaybeElse_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_optimize.m"
                                              MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__MaybeElse_34, 0) = ((MR_Box) (ml_backend__ml_optimize__V_48_48));
#line 585 "ml_optimize.m"
                                            }
#line 584 "ml_optimize.m"
                                          }
#line 579 "ml_optimize.m"
                                      }
#line 589 "ml_optimize.m"
                                    {
#line 589 "ml_optimize.m"
                                      ml_backend__ml_optimize__Stmt_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 589 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_38, 0) = ((MR_Box) (ml_backend__ml_optimize__TestRval_24));
#line 589 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_38, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_33));
#line 589 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt_38, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_34));
#line 589 "ml_optimize.m"
                                    }
#line 590 "ml_optimize.m"
                                    {
#line 590 "ml_optimize.m"
                                      ml_backend__ml_optimize__Statement_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_39, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_38));
#line 590 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_39, 1) = ((MR_Box) (ml_backend__ml_optimize__Context0_21));
#line 590 "ml_optimize.m"
                                    }
#line 591 "ml_optimize.m"
                                    {
#line 591 "ml_optimize.m"
                                      ml_backend__ml_optimize__ReplStmts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ReplStmts_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_39));
#line 591 "ml_optimize.m"
                                      MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ReplStmts_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Stmts2_8));
#line 591 "ml_optimize.m"
                                    }
#line 591 "ml_optimize.m"
                                    ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 524 "ml_optimize.m"
                                  }
#line 524 "ml_optimize.m"
                              }
#line 524 "ml_optimize.m"
                          }
#line 557 "ml_optimize.m"
                      }
#line 556 "ml_optimize.m"
                  }
#line 516 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 515 "ml_optimize.m"
                  {
#line 515 "ml_optimize.m"
                    /* direct tailcall eliminated */
#line 515 "ml_optimize.m"
                    {
#line 515 "ml_optimize.m"
                      MR_Word ml_backend__ml_optimize__HeadVar__1__tmp_copy_1 = ml_backend__ml_optimize__ReplStmts_10;

#line 515 "ml_optimize.m"
                      ml_backend__ml_optimize__HeadVar__1_1 = ml_backend__ml_optimize__HeadVar__1__tmp_copy_1;
#line 515 "ml_optimize.m"
                    }
#line 515 "ml_optimize.m"
                    continue;
#line 515 "ml_optimize.m"
                  }
#line 516 "ml_optimize.m"
                else
#line 517 "ml_optimize.m"
                  {
#line 517 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__StmtsTail_11;

#line 517 "ml_optimize.m"
                    {
#line 517 "ml_optimize.m"
                      ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__V_14_14, &ml_backend__ml_optimize__StmtsTail_11);
                    }
#line 518 "ml_optimize.m"
                    {
#line 518 "ml_optimize.m"
                      MR_Word base;
#line 518 "ml_optimize.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "ml_optimize.m"
                      *ml_backend__ml_optimize__HeadVar__2_2 = base;
#line 518 "ml_optimize.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_15_15));
#line 518 "ml_optimize.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__StmtsTail_11));
#line 518 "ml_optimize.m"
                    }
#line 517 "ml_optimize.m"
                  }
#line 513 "ml_optimize.m"
              }
#line 511 "ml_optimize.m"
          }
#line 511 "ml_optimize.m"
      }
#line 511 "ml_optimize.m"
      break;
#line 511 "ml_optimize.m"
    }
#line 508 "ml_optimize.m"
}

#line 497 "ml_optimize.m"
static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
#line 497 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Statement_3)
#line 497 "ml_optimize.m"
{
#line 502 "ml_optimize.m"
  {
#line 502 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 502 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Statements_4;
#line 502 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__BlockStatements_5;
#line 500 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_3, (MR_Integer) 0)));
#line 500 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_8_8;
#line 500 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_3, (MR_Integer) 1)));

#line 500 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_7_7)) == (MR_mktag((MR_Integer) 0)));
#line 500 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 500 "ml_optimize.m"
      {
#line 500 "ml_optimize.m"
        ml_backend__ml_optimize__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_7_7, (MR_Integer) 0)));
#line 500 "ml_optimize.m"
        ml_backend__ml_optimize__BlockStatements_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_7_7, (MR_Integer) 1)));
#line 500 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "ml_optimize.m"
      }
#line 502 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 501 "ml_optimize.m"
      ml_backend__ml_optimize__Statements_4 = ml_backend__ml_optimize__BlockStatements_5;
#line 502 "ml_optimize.m"
    else
#line 503 "ml_optimize.m"
      {
#line 503 "ml_optimize.m"
        {
#line 503 "ml_optimize.m"
          ml_backend__ml_optimize__Statements_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_4, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_3));
#line 503 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Statements_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "ml_optimize.m"
        }
#line 503 "ml_optimize.m"
      }
#line 502 "ml_optimize.m"
    return ml_backend__ml_optimize__Statements_4;
#line 502 "ml_optimize.m"
  }
#line 497 "ml_optimize.m"
}

#line 432 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_1(
#line 432 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg)
#line 432 "ml_optimize.m"
{
#line 432 "ml_optimize.m"
  {
#line 432 "ml_optimize.m"
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

#line 432 "ml_optimize.m"
    MR_builtin_longjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0, 1);
#line 432 "ml_optimize.m"
  }
#line 432 "ml_optimize.m"
}

#line 432 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_2(
#line 432 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg)
#line 432 "ml_optimize.m"
{
#line 432 "ml_optimize.m"
  {
#line 432 "ml_optimize.m"
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

#line 432 "ml_optimize.m"
    {
#line 434 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__V_17_17;
#line 435 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__V_57_57;
#line 435 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__V_59_59;
#line 435 "ml_optimize.m"
      MR_Word ml_backend__ml_optimize__V_60_60;

#line 434 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallStmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15, (MR_Integer) 0)));
#line 434 "ml_optimize.m"
      ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15, (MR_Integer) 1)));
#line 435 "ml_optimize.m"
      ml_backend__ml_optimize__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 0)));
#line 435 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 1)));
#line 435 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__EntityName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 2)));
#line 435 "ml_optimize.m"
      ml_backend__ml_optimize__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 3)));
#line 435 "ml_optimize.m"
      ml_backend__ml_optimize__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 4)));
#line 437 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_28_28 = (MR_Integer) 0;
#line 437 "ml_optimize.m"
      {
#line 437 "ml_optimize.m"
        MR_Word base;
#line 437 "ml_optimize.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 437 "ml_optimize.m"
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_27_27 = base;
#line 437 "ml_optimize.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__ModuleName_18));
#line 437 "ml_optimize.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_28_28));
#line 437 "ml_optimize.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__EntityName_19));
#line 437 "ml_optimize.m"
      }
#line 437 "ml_optimize.m"
      {
#line 437 "ml_optimize.m"
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = ml_backend__ml_util__can_optimize_tailcall_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__V_27_27, (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__CallStmt_16);
      }
#line 437 "ml_optimize.m"
      if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
#line 437 "ml_optimize.m"
        {
#line 437 "ml_optimize.m"
          ml_backend__ml_optimize__optimize_func_3_p_0_1(ml_backend__ml_optimize__env_ptr);
#line 437 "ml_optimize.m"
          return;
        }
#line 432 "ml_optimize.m"
    }
#line 432 "ml_optimize.m"
  }
#line 432 "ml_optimize.m"
}

#line 432 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0_3(
#line 432 "ml_optimize.m"
  void * ml_backend__ml_optimize__env_ptr_arg)
#line 432 "ml_optimize.m"
{
#line 432 "ml_optimize.m"
  {
#line 432 "ml_optimize.m"
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s * ml_backend__ml_optimize__env_ptr = (struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s *) ml_backend__ml_optimize__env_ptr_arg;

#line 432 "ml_optimize.m"
    if (MR_builtin_setjmp((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__commit_0) == 0)
#line 432 "ml_optimize.m"
      {
#line 432 "ml_optimize.m"
        {
#line 432 "ml_optimize.m"
          {
#line 432 "ml_optimize.m"
            (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14, (MR_Integer) 454, (MR_Integer) 1);
          }
#line 432 "ml_optimize.m"
          if ((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
#line 433 "ml_optimize.m"
            {
#line 433 "ml_optimize.m"
              ml_backend__ml_util__stmt_contains_statement_2_p_0((ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12, &(ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Call_15, ml_backend__ml_optimize__optimize_func_3_p_0_2, ml_backend__ml_optimize__env_ptr);
            }
#line 432 "ml_optimize.m"
        }
#line 432 "ml_optimize.m"
        (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = MR_FALSE;
#line 432 "ml_optimize.m"
      }
#line 432 "ml_optimize.m"
    else
#line 432 "ml_optimize.m"
      (ml_backend__ml_optimize__env_ptr)->ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded = MR_TRUE;
#line 432 "ml_optimize.m"
  }
#line 432 "ml_optimize.m"
}

#line 409 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_func_3_p_0(
#line 409 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 409 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Body0_5,
#line 409 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Body_6)
#line 409 "ml_optimize.m"
{
#line 409 "ml_optimize.m"
  {
#line 409 "ml_optimize.m"
    struct ml_backend__ml_optimize__optimize_func_3_p_0_env_0_s ml_backend__ml_optimize__env;

#line 409 "ml_optimize.m"
    (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4 = ml_backend__ml_optimize__OptInfo_4;
#line 414 "ml_optimize.m"
    if ((ml_backend__ml_optimize__Body0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "ml_optimize.m"
      *ml_backend__ml_optimize__Body_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "ml_optimize.m"
    else
#line 417 "ml_optimize.m"
      {
#line 417 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement0_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Body0_5), (MR_Integer) 1);
#line 417 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement_8;
#line 417 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Context_13;
#line 417 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Stmt_23;
#line 430 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_53_53;
#line 430 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_54_54;
#line 430 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_55_55;
#line 430 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_56_56;

#line 426 "ml_optimize.m"
        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
#line 426 "ml_optimize.m"
        ml_backend__ml_optimize__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
#line 430 "ml_optimize.m"
        (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 0)));
#line 430 "ml_optimize.m"
        ml_backend__ml_optimize__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 1)));
#line 430 "ml_optimize.m"
        ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 2)));
#line 430 "ml_optimize.m"
        ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 3)));
#line 430 "ml_optimize.m"
        ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__OptInfo_4, (MR_Integer) 4)));
#line 432 "ml_optimize.m"
        {
#line 432 "ml_optimize.m"
          ml_backend__ml_optimize__optimize_func_3_p_0_3(&ml_backend__ml_optimize__env);
        }
#line 480 "ml_optimize.m"
        if ((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__succeeded)
#line 440 "ml_optimize.m"
          {
#line 440 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__CommentStmt_21;
#line 440 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__SupportsBreakContinue_22;

#line 441 "ml_optimize.m"
            {
#line 441 "ml_optimize.m"
              ml_backend__ml_optimize__CommentStmt_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStmt_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[3])));
#line 441 "ml_optimize.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStmt_21, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
#line 441 "ml_optimize.m"
            }
#line 446 "ml_optimize.m"
            {
#line 446 "ml_optimize.m"
              ml_backend__ml_optimize__SupportsBreakContinue_22 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0((ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Globals_14);
            }
#line 464 "ml_optimize.m"
            if ((ml_backend__ml_optimize__SupportsBreakContinue_22 == (MR_Integer) 0))
#line 465 "ml_optimize.m"
              {
#line 465 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_33_33;
#line 465 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_34_34;
#line 465 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_35_35;
#line 465 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_36_36;

#line 477 "ml_optimize.m"
                {
#line 477 "ml_optimize.m"
                  ml_backend__ml_optimize__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[4])));
#line 477 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_35_35, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
#line 477 "ml_optimize.m"
                }
#line 477 "ml_optimize.m"
                {
#line 477 "ml_optimize.m"
                  ml_backend__ml_optimize__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_36_36, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement0_7));
#line 477 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "ml_optimize.m"
                }
#line 476 "ml_optimize.m"
                {
#line 476 "ml_optimize.m"
                  ml_backend__ml_optimize__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_34_34, 0) = ((MR_Box) (ml_backend__ml_optimize__V_35_35));
#line 476 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_34_34, 1) = ((MR_Box) (ml_backend__ml_optimize__V_36_36));
#line 476 "ml_optimize.m"
                }
#line 476 "ml_optimize.m"
                {
#line 476 "ml_optimize.m"
                  ml_backend__ml_optimize__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_33_33, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_21));
#line 476 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_33_33, 1) = ((MR_Box) (ml_backend__ml_optimize__V_34_34));
#line 476 "ml_optimize.m"
                }
#line 476 "ml_optimize.m"
                {
#line 476 "ml_optimize.m"
                  ml_backend__ml_optimize__Stmt_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt_23, 1) = ((MR_Box) (ml_backend__ml_optimize__V_33_33));
#line 476 "ml_optimize.m"
                }
#line 465 "ml_optimize.m"
              }
#line 464 "ml_optimize.m"
            else
#line 449 "ml_optimize.m"
              {
#line 449 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_42_42;
#line 449 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_43_43;
#line 449 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_45_45;
#line 449 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_46_46;
#line 449 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_48_48;
#line 449 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_49_49;

#line 462 "ml_optimize.m"
                {
#line 462 "ml_optimize.m"
                  ml_backend__ml_optimize__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[6])));
#line 462 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
#line 462 "ml_optimize.m"
                }
#line 461 "ml_optimize.m"
                {
#line 461 "ml_optimize.m"
                  ml_backend__ml_optimize__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_48_48, 0) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
#line 461 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "ml_optimize.m"
                }
#line 460 "ml_optimize.m"
                {
#line 460 "ml_optimize.m"
                  ml_backend__ml_optimize__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement0_7));
#line 460 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_46_46, 1) = ((MR_Box) (ml_backend__ml_optimize__V_48_48));
#line 460 "ml_optimize.m"
                }
#line 459 "ml_optimize.m"
                {
#line 459 "ml_optimize.m"
                  ml_backend__ml_optimize__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStmt_21));
#line 459 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_45_45, 1) = ((MR_Box) (ml_backend__ml_optimize__V_46_46));
#line 459 "ml_optimize.m"
                }
#line 459 "ml_optimize.m"
                {
#line 459 "ml_optimize.m"
                  ml_backend__ml_optimize__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_43_43, 1) = ((MR_Box) (ml_backend__ml_optimize__V_45_45));
#line 459 "ml_optimize.m"
                }
#line 458 "ml_optimize.m"
                {
#line 458 "ml_optimize.m"
                  ml_backend__ml_optimize__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 0) = ((MR_Box) (ml_backend__ml_optimize__V_43_43));
#line 458 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
#line 458 "ml_optimize.m"
                }
#line 458 "ml_optimize.m"
                {
#line 458 "ml_optimize.m"
                  ml_backend__ml_optimize__Stmt_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 458 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[5])));
#line 458 "ml_optimize.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt_23, 2) = ((MR_Box) (ml_backend__ml_optimize__V_42_42));
#line 458 "ml_optimize.m"
                }
#line 449 "ml_optimize.m"
              }
#line 440 "ml_optimize.m"
          }
#line 480 "ml_optimize.m"
        else
#line 481 "ml_optimize.m"
          ml_backend__ml_optimize__Stmt_23 = (ml_backend__ml_optimize__env).ml_backend__ml_optimize__optimize_func_3_p_0_env_0__Stmt0_12;
#line 483 "ml_optimize.m"
        {
#line 483 "ml_optimize.m"
          ml_backend__ml_optimize__Statement_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_23));
#line 483 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_13));
#line 483 "ml_optimize.m"
        }
#line 419 "ml_optimize.m"
        *ml_backend__ml_optimize__Body_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_8);
#line 417 "ml_optimize.m"
      }
#line 409 "ml_optimize.m"
  }
#line 409 "ml_optimize.m"
}

#line 336 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__generate_assign_args_5_p_0(
#line 336 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_1,
#line 336 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__2_2,
#line 336 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__HeadVar__3_3,
#line 336 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__4_4,
#line 336 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__HeadVar__5_5)
#line 336 "ml_optimize.m"
{
#line 339 "ml_optimize.m"
  while (MR_TRUE)
#line 339 "ml_optimize.m"
    {
#line 339 "ml_optimize.m"
      /* tailcall optimized into a loop */
#line 339 "ml_optimize.m"
      {
#line 339 "ml_optimize.m"
        MR_bool ml_backend__ml_optimize__succeeded;

#line 339 "ml_optimize.m"
        if ((ml_backend__ml_optimize__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "ml_optimize.m"
          if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "ml_optimize.m"
            {
#line 339 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "ml_optimize.m"
            }
#line 339 "ml_optimize.m"
          else
#line 342 "ml_optimize.m"
            {
#line 342 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "ml_optimize.m"
              *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "ml_optimize.m"
              {
#line 343 "ml_optimize.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", (MR_String) "length mismatch");
#line 343 "ml_optimize.m"
                return;
              }
#line 342 "ml_optimize.m"
            }
#line 339 "ml_optimize.m"
        else
#line 339 "ml_optimize.m"
          {
#line 339 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__2_2, (MR_Integer) 0)));

#line 339 "ml_optimize.m"
            if ((ml_backend__ml_optimize__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "ml_optimize.m"
              {
#line 340 "ml_optimize.m"
                *ml_backend__ml_optimize__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "ml_optimize.m"
                *ml_backend__ml_optimize__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "ml_optimize.m"
                {
#line 341 "ml_optimize.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", (MR_String) "length mismatch");
#line 341 "ml_optimize.m"
                  return;
                }
#line 340 "ml_optimize.m"
              }
#line 339 "ml_optimize.m"
            else
#line 345 "ml_optimize.m"
              {
#line 345 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__ArgRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 0)));
#line 345 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__ArgRvals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__HeadVar__3_3, (MR_Integer) 1)));
#line 345 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_77_77, (MR_Integer) 0)));
#line 345 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_77_77, (MR_Integer) 1)));
#line 346 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize___ArgGCStatement_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_77_77, (MR_Integer) 2)));
#line 403 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__VarName_29;
#line 349 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_45_45;

#line 349 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__Name_26)) == (MR_mktag((MR_Integer) 1)));
#line 349 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 349 "ml_optimize.m"
                  {
#line 349 "ml_optimize.m"
                    ml_backend__ml_optimize__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Name_26, (MR_Integer) 0)));
#line 349 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 349 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 349 "ml_optimize.m"
                      ml_backend__ml_optimize__VarName_29 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__V_45_45), (MR_Integer) 1);
#line 349 "ml_optimize.m"
                  }
#line 403 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 351 "ml_optimize.m"
                  {
#line 351 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__ModuleName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
#line 351 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__QualVarName_31;
#line 351 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
#line 351 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
#line 351 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
#line 351 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 4)));
#line 355 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__TypeInfo_78_78;
#line 355 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_47_47;
#line 355 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize__V_75_75;
#line 355 "ml_optimize.m"
                    MR_Word ml_backend__ml_optimize___VarType_32;

#line 352 "ml_optimize.m"
                    {
#line 352 "ml_optimize.m"
                      ml_backend__ml_optimize__QualVarName_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_31, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_30));
#line 352 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 352 "ml_optimize.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualVarName_31, 2) = ((MR_Box) (ml_backend__ml_optimize__VarName_29));
#line 352 "ml_optimize.m"
                    }
#line 355 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__ArgRval_22)) == (MR_mktag((MR_Integer) 1)));
#line 355 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 355 "ml_optimize.m"
                      {
#line 355 "ml_optimize.m"
                        ml_backend__ml_optimize__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__ArgRval_22, (MR_Integer) 0)));
#line 355 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_47_47)) == (MR_mktag((MR_Integer) 3)));
#line 355 "ml_optimize.m"
                        if (ml_backend__ml_optimize__succeeded)
#line 355 "ml_optimize.m"
                          {
#line 355 "ml_optimize.m"
                            ml_backend__ml_optimize__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_47_47, (MR_Integer) 0)));
#line 355 "ml_optimize.m"
                            ml_backend__ml_optimize___VarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_47_47, (MR_Integer) 1)));
#line 9139 "ml_backend.ml_optimize.c"
                            ml_backend__ml_optimize__TypeInfo_78_78 = (MR_Word) &ml_backend__ml_optimize_scalar_common_1[1];
#line 355 "ml_optimize.m"
                            {
#line 355 "ml_optimize.m"
                              ml_backend__ml_optimize__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_optimize__TypeInfo_78_78, ((MR_Box) (ml_backend__ml_optimize__QualVarName_31)), ((MR_Box) (ml_backend__ml_optimize__V_75_75)));
                            }
#line 355 "ml_optimize.m"
                          }
#line 355 "ml_optimize.m"
                      }
#line 359 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 357 "ml_optimize.m"
                      {
#line 357 "ml_optimize.m"
                        /* direct tailcall eliminated */
#line 357 "ml_optimize.m"
                        {
#line 357 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__HeadVar__2__tmp_copy_2 = ml_backend__ml_optimize__V_76_76;
#line 357 "ml_optimize.m"
                          MR_Word ml_backend__ml_optimize__HeadVar__3__tmp_copy_3 = ml_backend__ml_optimize__ArgRvals_23;

#line 357 "ml_optimize.m"
                          ml_backend__ml_optimize__HeadVar__3_3 = ml_backend__ml_optimize__HeadVar__3__tmp_copy_3;
#line 357 "ml_optimize.m"
                          ml_backend__ml_optimize__HeadVar__2_2 = ml_backend__ml_optimize__HeadVar__2__tmp_copy_2;
#line 357 "ml_optimize.m"
                        }
#line 357 "ml_optimize.m"
                        continue;
#line 357 "ml_optimize.m"
                      }
#line 359 "ml_optimize.m"
                    else
#line 379 "ml_optimize.m"
                      {
#line 379 "ml_optimize.m"
                        MR_String ml_backend__ml_optimize__VarNameStr_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_29, (MR_Integer) 0)));
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__MaybeNum_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__VarName_29, (MR_Integer) 1)));
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__TempName_35;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__QualTempName_36;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Context_39;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__TempDefn_40;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__TempInitStatement_41;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__AssignStatement_42;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__Statements0_43;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__TempDefns0_44;
#line 379 "ml_optimize.m"
                        MR_String ml_backend__ml_optimize__V_48_48;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_51_51;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_52_52;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_53_53;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_54_54;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_55_55;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_56_56;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_57_57;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_58_58;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_60_60;
#line 379 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_61_61;
#line 386 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_70_70;
#line 386 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_71_71;
#line 386 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_72_72;
#line 386 "ml_optimize.m"
                        MR_Word ml_backend__ml_optimize__V_73_73;

#line 380 "ml_optimize.m"
                        {
#line 380 "ml_optimize.m"
                          ml_backend__ml_optimize__V_48_48 = mercury__string__f_43_43_2_f_0(ml_backend__ml_optimize__VarNameStr_33, (MR_String) "__tmp_copy");
                        }
#line 380 "ml_optimize.m"
                        {
#line 380 "ml_optimize.m"
                          ml_backend__ml_optimize__TempName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempName_35, 0) = ((MR_Box) (ml_backend__ml_optimize__V_48_48));
#line 380 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempName_35, 1) = ((MR_Box) (ml_backend__ml_optimize__MaybeNum_34));
#line 380 "ml_optimize.m"
                        }
#line 381 "ml_optimize.m"
                        {
#line 381 "ml_optimize.m"
                          ml_backend__ml_optimize__QualTempName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 381 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualTempName_36, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_30));
#line 381 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualTempName_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 381 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__QualTempName_36, 2) = ((MR_Box) (ml_backend__ml_optimize__TempName_35));
#line 381 "ml_optimize.m"
                        }
#line 386 "ml_optimize.m"
                        ml_backend__ml_optimize__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 0)));
#line 386 "ml_optimize.m"
                        ml_backend__ml_optimize__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 1)));
#line 386 "ml_optimize.m"
                        ml_backend__ml_optimize__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 2)));
#line 386 "ml_optimize.m"
                        ml_backend__ml_optimize__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 3)));
#line 386 "ml_optimize.m"
                        ml_backend__ml_optimize__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_1, (MR_Integer) 4)));
#line 387 "ml_optimize.m"
                        ml_backend__ml_optimize__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__TempName_35);
#line 387 "ml_optimize.m"
                        {
#line 387 "ml_optimize.m"
                          ml_backend__ml_optimize__TempDefn_40 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_optimize__V_51_51, ml_backend__ml_optimize__Type_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_optimize__Context_39);
                        }
#line 390 "ml_optimize.m"
                        {
#line 390 "ml_optimize.m"
                          ml_backend__ml_optimize__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, 0) = ((MR_Box) (ml_backend__ml_optimize__QualTempName_36));
#line 390 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_27));
#line 390 "ml_optimize.m"
                        }
#line 390 "ml_optimize.m"
                        {
#line 390 "ml_optimize.m"
                          ml_backend__ml_optimize__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "ml_optimize.m"
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_53_53, 0) = ((MR_Box) (ml_backend__ml_optimize__V_54_54));
#line 390 "ml_optimize.m"
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_53_53, 1) = ((MR_Box) (ml_backend__ml_optimize__ArgRval_22));
#line 390 "ml_optimize.m"
                        }
#line 389 "ml_optimize.m"
                        {
#line 389 "ml_optimize.m"
                          ml_backend__ml_optimize__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 389 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_52_52, 1) = ((MR_Box) (ml_backend__ml_optimize__V_53_53));
#line 389 "ml_optimize.m"
                        }
#line 389 "ml_optimize.m"
                        {
#line 389 "ml_optimize.m"
                          ml_backend__ml_optimize__TempInitStatement_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempInitStatement_41, 0) = ((MR_Box) (ml_backend__ml_optimize__V_52_52));
#line 389 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__TempInitStatement_41, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_39));
#line 389 "ml_optimize.m"
                        }
#line 393 "ml_optimize.m"
                        {
#line 393 "ml_optimize.m"
                          ml_backend__ml_optimize__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_57_57, 0) = ((MR_Box) (ml_backend__ml_optimize__QualVarName_31));
#line 393 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_57_57, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_27));
#line 393 "ml_optimize.m"
                        }
#line 393 "ml_optimize.m"
                        {
#line 393 "ml_optimize.m"
                          ml_backend__ml_optimize__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_58_58, 0) = ((MR_Box) (ml_backend__ml_optimize__V_54_54));
#line 393 "ml_optimize.m"
                        }
#line 393 "ml_optimize.m"
                        {
#line 393 "ml_optimize.m"
                          ml_backend__ml_optimize__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "ml_optimize.m"
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_56_56, 0) = ((MR_Box) (ml_backend__ml_optimize__V_57_57));
#line 393 "ml_optimize.m"
                          MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__V_56_56, 1) = ((MR_Box) (ml_backend__ml_optimize__V_58_58));
#line 393 "ml_optimize.m"
                        }
#line 392 "ml_optimize.m"
                        {
#line 392 "ml_optimize.m"
                          ml_backend__ml_optimize__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 392 "ml_optimize.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_55_55, 1) = ((MR_Box) (ml_backend__ml_optimize__V_56_56));
#line 392 "ml_optimize.m"
                        }
#line 392 "ml_optimize.m"
                        {
#line 392 "ml_optimize.m"
                          ml_backend__ml_optimize__AssignStatement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_42, 0) = ((MR_Box) (ml_backend__ml_optimize__V_55_55));
#line 392 "ml_optimize.m"
                          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignStatement_42, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_39));
#line 392 "ml_optimize.m"
                        }
#line 397 "ml_optimize.m"
                        {
#line 397 "ml_optimize.m"
                          ml_backend__ml_optimize__generate_assign_args_5_p_0(ml_backend__ml_optimize__OptInfo_1, ml_backend__ml_optimize__V_76_76, ml_backend__ml_optimize__ArgRvals_23, &ml_backend__ml_optimize__Statements0_43, &ml_backend__ml_optimize__TempDefns0_44);
                        }
#line 399 "ml_optimize.m"
                        {
#line 399 "ml_optimize.m"
                          ml_backend__ml_optimize__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_60_60, 0) = ((MR_Box) (ml_backend__ml_optimize__TempInitStatement_41));
#line 399 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_60_60, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements0_43));
#line 399 "ml_optimize.m"
                        }
#line 399 "ml_optimize.m"
                        {
#line 399 "ml_optimize.m"
                          ml_backend__ml_optimize__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_61_61, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignStatement_42));
#line 399 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "ml_optimize.m"
                        }
#line 399 "ml_optimize.m"
                        {
#line 399 "ml_optimize.m"
                          *ml_backend__ml_optimize__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_optimize__V_60_60, ml_backend__ml_optimize__V_61_61);
                        }
#line 401 "ml_optimize.m"
                        {
#line 401 "ml_optimize.m"
                          MR_Word base;
#line 401 "ml_optimize.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "ml_optimize.m"
                          *ml_backend__ml_optimize__HeadVar__5_5 = base;
#line 401 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__TempDefn_40));
#line 401 "ml_optimize.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__TempDefns0_44));
#line 401 "ml_optimize.m"
                        }
#line 379 "ml_optimize.m"
                      }
#line 351 "ml_optimize.m"
                  }
#line 403 "ml_optimize.m"
                else
#line 404 "ml_optimize.m"
                  {
#line 404 "ml_optimize.m"
                    {
#line 404 "ml_optimize.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_optimize", (MR_String) "predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", (MR_String) "function param is not a var");
#line 404 "ml_optimize.m"
                      return;
                    }
#line 404 "ml_optimize.m"
                  }
#line 345 "ml_optimize.m"
              }
#line 339 "ml_optimize.m"
          }
#line 339 "ml_optimize.m"
      }
#line 339 "ml_optimize.m"
      break;
#line 339 "ml_optimize.m"
    }
#line 336 "ml_optimize.m"
}

#line 238 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(
#line 238 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 238 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 238 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6)
#line 238 "ml_optimize.m"
{
#line 241 "ml_optimize.m"
  {
#line 241 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 241 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__FuncRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 241 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__CallArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
#line 241 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Globals_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 241 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__OptTailCalls_14;
#line 242 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___Signature_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 242 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___MaybeObject_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 242 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___Results_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
#line 242 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize___IsTailCall_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 6)));
#line 246 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 246 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 246 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 246 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 249 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__ModuleName_15;
#line 249 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__EntityName_16;
#line 249 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_41_41;
#line 249 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_42_42;
#line 250 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_66_66;
#line 250 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_68_68;
#line 250 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_69_69;

#line 247 "ml_optimize.m"
    {
#line 247 "ml_optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_13, (MR_Integer) 454, &ml_backend__ml_optimize__OptTailCalls_14);
    }
#line 249 "ml_optimize.m"
    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__OptTailCalls_14 == (MR_Integer) 1);
#line 249 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 249 "ml_optimize.m"
      {
#line 250 "ml_optimize.m"
        ml_backend__ml_optimize__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 250 "ml_optimize.m"
        ml_backend__ml_optimize__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 250 "ml_optimize.m"
        ml_backend__ml_optimize__EntityName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 250 "ml_optimize.m"
        ml_backend__ml_optimize__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 250 "ml_optimize.m"
        ml_backend__ml_optimize__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 252 "ml_optimize.m"
        ml_backend__ml_optimize__V_42_42 = (MR_Integer) 0;
#line 252 "ml_optimize.m"
        {
#line 252 "ml_optimize.m"
          ml_backend__ml_optimize__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 0) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_15));
#line 252 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 1) = ((MR_Box) (ml_backend__ml_optimize__V_42_42));
#line 252 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_41_41, 2) = ((MR_Box) (ml_backend__ml_optimize__EntityName_16));
#line 252 "ml_optimize.m"
        }
#line 252 "ml_optimize.m"
        {
#line 252 "ml_optimize.m"
          ml_backend__ml_optimize__succeeded = ml_backend__ml_util__can_optimize_tailcall_2_p_0(ml_backend__ml_optimize__V_41_41, ml_backend__ml_optimize__Stmt0_5);
        }
#line 249 "ml_optimize.m"
      }
#line 269 "ml_optimize.m"
    if (ml_backend__ml_optimize__succeeded)
#line 254 "ml_optimize.m"
      {
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__CommentStatement_18;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__GotoStatement_19;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__FuncArgs_20;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__AssignStatements_22;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__AssignDefns_23;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__AssignVarsStatement_24;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__CallReplaceStatements_25;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_46_46;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_47_47;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_48_48;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_49_49;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_50_50;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_51_51;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__SupportsBreakContinue_88;
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 254 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 260 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_78_78;
#line 260 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_79_79;
#line 260 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_80_80;
#line 260 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_81_81;
#line 260 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___RetTypes_21;

#line 255 "ml_optimize.m"
        {
#line 255 "ml_optimize.m"
          ml_backend__ml_optimize__CommentStatement_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStatement_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[2])));
#line 255 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__CommentStatement_18, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
#line 255 "ml_optimize.m"
        }
#line 308 "ml_optimize.m"
        {
#line 308 "ml_optimize.m"
          ml_backend__ml_optimize__SupportsBreakContinue_88 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_optimize__Globals_13);
        }
#line 317 "ml_optimize.m"
        if ((ml_backend__ml_optimize__SupportsBreakContinue_88 == (MR_Integer) 0))
#line 318 "ml_optimize.m"
          {
#line 321 "ml_optimize.m"
            ml_backend__ml_optimize__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_optimize_scalar_common_6[1]);
#line 318 "ml_optimize.m"
          }
#line 317 "ml_optimize.m"
        else
#line 316 "ml_optimize.m"
          ml_backend__ml_optimize__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 258 "ml_optimize.m"
        {
#line 258 "ml_optimize.m"
          ml_backend__ml_optimize__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "ml_optimize.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 258 "ml_optimize.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_46_46, 1) = ((MR_Box) (ml_backend__ml_optimize__V_47_47));
#line 258 "ml_optimize.m"
        }
#line 258 "ml_optimize.m"
        {
#line 258 "ml_optimize.m"
          ml_backend__ml_optimize__GotoStatement_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__GotoStatement_19, 0) = ((MR_Box) (ml_backend__ml_optimize__V_46_46));
#line 258 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__GotoStatement_19, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
#line 258 "ml_optimize.m"
        }
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize__FuncArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, (MR_Integer) 0)));
#line 260 "ml_optimize.m"
        ml_backend__ml_optimize___RetTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_48_48, (MR_Integer) 1)));
#line 261 "ml_optimize.m"
        {
#line 261 "ml_optimize.m"
          ml_backend__ml_optimize__generate_assign_args_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__FuncArgs_20, ml_backend__ml_optimize__CallArgs_10, &ml_backend__ml_optimize__AssignStatements_22, &ml_backend__ml_optimize__AssignDefns_23);
        }
#line 263 "ml_optimize.m"
        {
#line 263 "ml_optimize.m"
          ml_backend__ml_optimize__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignDefns_23));
#line 263 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_49_49, 1) = ((MR_Box) (ml_backend__ml_optimize__AssignStatements_22));
#line 263 "ml_optimize.m"
        }
#line 263 "ml_optimize.m"
        {
#line 263 "ml_optimize.m"
          ml_backend__ml_optimize__AssignVarsStatement_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStatement_24, 0) = ((MR_Box) (ml_backend__ml_optimize__V_49_49));
#line 263 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__AssignVarsStatement_24, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
#line 263 "ml_optimize.m"
        }
#line 266 "ml_optimize.m"
        {
#line 266 "ml_optimize.m"
          ml_backend__ml_optimize__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 0) = ((MR_Box) (ml_backend__ml_optimize__GotoStatement_19));
#line 266 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "ml_optimize.m"
        }
#line 266 "ml_optimize.m"
        {
#line 266 "ml_optimize.m"
          ml_backend__ml_optimize__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_50_50, 0) = ((MR_Box) (ml_backend__ml_optimize__AssignVarsStatement_24));
#line 266 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__V_50_50, 1) = ((MR_Box) (ml_backend__ml_optimize__V_51_51));
#line 266 "ml_optimize.m"
        }
#line 266 "ml_optimize.m"
        {
#line 266 "ml_optimize.m"
          ml_backend__ml_optimize__CallReplaceStatements_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStatements_25, 0) = ((MR_Box) (ml_backend__ml_optimize__CommentStatement_18));
#line 266 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallReplaceStatements_25, 1) = ((MR_Box) (ml_backend__ml_optimize__V_50_50));
#line 266 "ml_optimize.m"
        }
#line 268 "ml_optimize.m"
        {
#line 268 "ml_optimize.m"
          MR_Word base;
#line 268 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "ml_optimize.m"
          *ml_backend__ml_optimize__Stmt_6 = base;
#line 268 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__CallReplaceStatements_25));
#line 268 "ml_optimize.m"
        }
#line 254 "ml_optimize.m"
      }
#line 269 "ml_optimize.m"
    else
#line 298 "ml_optimize.m"
      {
#line 298 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__AtomicStmt_37;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__ModName_26;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__ProcLabel_27;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__PredLabel_29;
#line 281 "ml_optimize.m"
        MR_String ml_backend__ml_optimize__PredName_32;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__PrivateBuiltin_39;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_54_54;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_55_55;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_56_56;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_57_57;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_58_58;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_82_82;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_83_83;
#line 281 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_84_84;
#line 279 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___FuncSignature_28;
#line 282 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize___ProcId_30;
#line 283 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___DefnModName_31;
#line 283 "ml_optimize.m"
        MR_Integer ml_backend__ml_optimize___Arity_33;
#line 283 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___CodeModel_34;
#line 283 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize___NonOutputFunc_35;

#line 279 "ml_optimize.m"
        ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__FuncRval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 279 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 279 "ml_optimize.m"
          {
#line 279 "ml_optimize.m"
            ml_backend__ml_optimize__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__FuncRval_8, (MR_Integer) 1)));
#line 279 "ml_optimize.m"
            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 279 "ml_optimize.m"
            if (ml_backend__ml_optimize__succeeded)
#line 279 "ml_optimize.m"
              {
#line 279 "ml_optimize.m"
                ml_backend__ml_optimize__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_54_54, (MR_Integer) 1)));
#line 279 "ml_optimize.m"
                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__V_55_55)) == (MR_mktag((MR_Integer) 0)));
#line 279 "ml_optimize.m"
                if (ml_backend__ml_optimize__succeeded)
#line 279 "ml_optimize.m"
                  {
#line 279 "ml_optimize.m"
                    ml_backend__ml_optimize__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_55_55, (MR_Integer) 0)));
#line 279 "ml_optimize.m"
                    ml_backend__ml_optimize___FuncSignature_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_55_55, (MR_Integer) 1)));
#line 280 "ml_optimize.m"
                    ml_backend__ml_optimize__ModName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_56_56, (MR_Integer) 0)));
#line 280 "ml_optimize.m"
                    ml_backend__ml_optimize__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_56_56, (MR_Integer) 1)));
#line 280 "ml_optimize.m"
                    ml_backend__ml_optimize__ProcLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_56_56, (MR_Integer) 2)));
#line 280 "ml_optimize.m"
                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_57_57 == (MR_Integer) 0);
#line 281 "ml_optimize.m"
                    if (ml_backend__ml_optimize__succeeded)
#line 281 "ml_optimize.m"
                      {
#line 282 "ml_optimize.m"
                        ml_backend__ml_optimize__PredLabel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_27, (MR_Integer) 0)));
#line 282 "ml_optimize.m"
                        ml_backend__ml_optimize___ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ProcLabel_27, (MR_Integer) 1)));
#line 283 "ml_optimize.m"
                        ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__PredLabel_29)) == (MR_mktag((MR_Integer) 0)));
#line 283 "ml_optimize.m"
                        if (ml_backend__ml_optimize__succeeded)
#line 283 "ml_optimize.m"
                          {
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 0)));
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize___DefnModName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 1)));
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize__PredName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 2)));
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize___Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 3)));
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize___CodeModel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 4)));
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize___NonOutputFunc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__PredLabel_29, (MR_Integer) 5)));
#line 283 "ml_optimize.m"
                            ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_58_58 == (MR_Integer) 0);
#line 281 "ml_optimize.m"
                            if (ml_backend__ml_optimize__succeeded)
#line 281 "ml_optimize.m"
                              {
#line 287 "ml_optimize.m"
                                ml_backend__ml_optimize__succeeded = ((MR_tag((MR_Word) ml_backend__ml_optimize__CallArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 287 "ml_optimize.m"
                                if (ml_backend__ml_optimize__succeeded)
#line 287 "ml_optimize.m"
                                  {
#line 287 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 0)));
#line 287 "ml_optimize.m"
                                    ml_backend__ml_optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__CallArgs_10, (MR_Integer) 1)));
#line 287 "ml_optimize.m"
                                    ml_backend__ml_optimize__succeeded = (ml_backend__ml_optimize__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "ml_optimize.m"
                                    if (ml_backend__ml_optimize__succeeded)
#line 281 "ml_optimize.m"
                                      {
#line 289 "ml_optimize.m"
                                        if ((strcmp(ml_backend__ml_optimize__PredName_32, (MR_String) "mark_hp") == 0))
#line 286 "ml_optimize.m"
                                          {
#line 286 "ml_optimize.m"
                                            MR_Word ml_backend__ml_optimize__Lval_36;

#line 287 "ml_optimize.m"
                                            ml_backend__ml_optimize__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_optimize__V_84_84)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_84_84, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 287 "ml_optimize.m"
                                            if (ml_backend__ml_optimize__succeeded)
#line 287 "ml_optimize.m"
                                              {
#line 287 "ml_optimize.m"
                                                ml_backend__ml_optimize__Lval_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__V_84_84, (MR_Integer) 1)));
#line 288 "ml_optimize.m"
                                                {
#line 288 "ml_optimize.m"
                                                  ml_backend__ml_optimize__AtomicStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "ml_optimize.m"
                                                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 288 "ml_optimize.m"
                                                  MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 1) = ((MR_Box) (ml_backend__ml_optimize__Lval_36));
#line 288 "ml_optimize.m"
                                                }
#line 288 "ml_optimize.m"
                                                ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 287 "ml_optimize.m"
                                              }
#line 286 "ml_optimize.m"
                                          }
#line 289 "ml_optimize.m"
                                        else
#line 289 "ml_optimize.m"
                                          if ((strcmp(ml_backend__ml_optimize__PredName_32, (MR_String) "restore_hp") == 0))
#line 292 "ml_optimize.m"
                                            {
#line 292 "ml_optimize.m"
                                              {
#line 292 "ml_optimize.m"
                                                ml_backend__ml_optimize__AtomicStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "ml_optimize.m"
                                                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 292 "ml_optimize.m"
                                                MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__AtomicStmt_37, 1) = ((MR_Box) (ml_backend__ml_optimize__V_84_84));
#line 292 "ml_optimize.m"
                                              }
#line 292 "ml_optimize.m"
                                              ml_backend__ml_optimize__succeeded = MR_TRUE;
#line 292 "ml_optimize.m"
                                            }
#line 289 "ml_optimize.m"
                                          else
#line 289 "ml_optimize.m"
                                            ml_backend__ml_optimize__succeeded = MR_FALSE;
#line 281 "ml_optimize.m"
                                        if (ml_backend__ml_optimize__succeeded)
#line 281 "ml_optimize.m"
                                          {
#line 294 "ml_optimize.m"
                                            {
#line 294 "ml_optimize.m"
                                              ml_backend__ml_optimize__PrivateBuiltin_39 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                                            }
#line 295 "ml_optimize.m"
                                            {
#line 295 "ml_optimize.m"
                                              ml_backend__ml_optimize__V_82_82 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__PrivateBuiltin_39);
                                            }
#line 295 "ml_optimize.m"
                                            {
#line 295 "ml_optimize.m"
                                              ml_backend__ml_optimize__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_optimize__ModName_26, ml_backend__ml_optimize__V_82_82);
                                            }
#line 281 "ml_optimize.m"
                                          }
#line 281 "ml_optimize.m"
                                      }
#line 287 "ml_optimize.m"
                                  }
#line 281 "ml_optimize.m"
                              }
#line 283 "ml_optimize.m"
                          }
#line 281 "ml_optimize.m"
                      }
#line 279 "ml_optimize.m"
                  }
#line 279 "ml_optimize.m"
              }
#line 279 "ml_optimize.m"
          }
#line 298 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 297 "ml_optimize.m"
          {
#line 297 "ml_optimize.m"
            MR_Word base;
#line 297 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "ml_optimize.m"
            *ml_backend__ml_optimize__Stmt_6 = base;
#line 297 "ml_optimize.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 297 "ml_optimize.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__AtomicStmt_37));
#line 297 "ml_optimize.m"
          }
#line 298 "ml_optimize.m"
        else
#line 299 "ml_optimize.m"
          *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
#line 298 "ml_optimize.m"
      }
#line 241 "ml_optimize.m"
  }
#line 238 "ml_optimize.m"
}

#line 217 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_default_3_p_0(
#line 217 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 217 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Default0_5,
#line 217 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Default_6)
#line 217 "ml_optimize.m"
{
#line 222 "ml_optimize.m"
  {
#line 222 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 222 "ml_optimize.m"
    if ((ml_backend__ml_optimize__Default0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 226 "ml_optimize.m"
      *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 222 "ml_optimize.m"
    else
#line 222 "ml_optimize.m"
      if ((ml_backend__ml_optimize__Default0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "ml_optimize.m"
        *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "ml_optimize.m"
      else
#line 228 "ml_optimize.m"
        {
#line 228 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Statement0_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__Default0_5), (MR_Integer) 1);
#line 228 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Statement_8;
#line 228 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Stmt0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 0)));
#line 228 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_7, (MR_Integer) 1)));
#line 228 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Stmt_16;
#line 228 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17;
#line 159 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 159 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 159 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 159 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 159 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

#line 159 "ml_optimize.m"
          {
#line 159 "ml_optimize.m"
            ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 159 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 0) = ((MR_Box) (ml_backend__ml_optimize__V_19_19));
#line 159 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 1) = ((MR_Box) (ml_backend__ml_optimize__V_20_20));
#line 159 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 2) = ((MR_Box) (ml_backend__ml_optimize__V_21_21));
#line 159 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 3) = ((MR_Box) (ml_backend__ml_optimize__V_22_22));
#line 159 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_15));
#line 159 "ml_optimize.m"
          }
#line 160 "ml_optimize.m"
          {
#line 160 "ml_optimize.m"
            ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_17, ml_backend__ml_optimize__Stmt0_14, &ml_backend__ml_optimize__Stmt_16);
          }
#line 161 "ml_optimize.m"
          {
#line 161 "ml_optimize.m"
            ml_backend__ml_optimize__Statement_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_16));
#line 161 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_8, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_15));
#line 161 "ml_optimize.m"
          }
#line 230 "ml_optimize.m"
          *ml_backend__ml_optimize__Default_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_8);
#line 228 "ml_optimize.m"
        }
#line 222 "ml_optimize.m"
  }
#line 217 "ml_optimize.m"
}

#line 209 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
#line 209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 209 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Case0_5,
#line 209 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Case_6)
#line 209 "ml_optimize.m"
{
#line 212 "ml_optimize.m"
  {
#line 212 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__FirstCond_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 0)));
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__LaterConds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 1)));
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Statement0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Case0_5, (MR_Integer) 2)));
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Statement_10;
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_9, (MR_Integer) 0)));
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_9, (MR_Integer) 1)));
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt_18;
#line 212 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19;
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));

#line 159 "ml_optimize.m"
    {
#line 159 "ml_optimize.m"
      ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 0) = ((MR_Box) (ml_backend__ml_optimize__V_21_21));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 1) = ((MR_Box) (ml_backend__ml_optimize__V_22_22));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 2) = ((MR_Box) (ml_backend__ml_optimize__V_23_23));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 3) = ((MR_Box) (ml_backend__ml_optimize__V_24_24));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
#line 159 "ml_optimize.m"
    }
#line 160 "ml_optimize.m"
    {
#line 160 "ml_optimize.m"
      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_19, ml_backend__ml_optimize__Stmt0_16, &ml_backend__ml_optimize__Stmt_18);
    }
#line 161 "ml_optimize.m"
    {
#line 161 "ml_optimize.m"
      ml_backend__ml_optimize__Statement_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_10, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_18));
#line 161 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_10, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_17));
#line 161 "ml_optimize.m"
    }
#line 215 "ml_optimize.m"
    {
#line 215 "ml_optimize.m"
      MR_Word base;
#line 215 "ml_optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 215 "ml_optimize.m"
      *ml_backend__ml_optimize__Case_6 = base;
#line 215 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__FirstCond_7));
#line 215 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__LaterConds_8));
#line 215 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_10));
#line 215 "ml_optimize.m"
    }
#line 212 "ml_optimize.m"
  }
#line 209 "ml_optimize.m"
}

#line 190 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2(
#line 190 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 190 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 190 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
#line 190 "ml_optimize.m"
{
#line 190 "ml_optimize.m"
  {
#line 190 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 190 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv1_Case_6;

#line 190 "ml_optimize.m"
    {
#line 190 "ml_optimize.m"
      ml_backend__ml_optimize__optimize_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv1_Case_6);
    }
#line 190 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv1_Case_6));
#line 190 "ml_optimize.m"
  }
#line 190 "ml_optimize.m"
}

#line 495 "ml_optimize.m"
static MR_Box MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
#line 495 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 495 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1)
#line 495 "ml_optimize.m"
{
#line 495 "ml_optimize.m"
  {
#line 495 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__wrapper_arg_2;
#line 495 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 495 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_Statements_4;

#line 495 "ml_optimize.m"
    {
#line 495 "ml_optimize.m"
      ml_backend__ml_optimize__conv0_Statements_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) ml_backend__ml_optimize__wrapper_arg_1));
    }
#line 495 "ml_optimize.m"
    ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Statements_4));
#line 495 "ml_optimize.m"
    return ml_backend__ml_optimize__wrapper_arg_2;
#line 495 "ml_optimize.m"
  }
#line 495 "ml_optimize.m"
}

#line 163 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
#line 163 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 163 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Stmt0_5,
#line 163 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Stmt_6)
#line 163 "ml_optimize.m"
{
#line 168 "ml_optimize.m"
  {
#line 168 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 168 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 0))))
#line 171 "ml_optimize.m"
      {
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_9_91;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns1_15;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements1_16;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Defns_17;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements2_18;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements3_19;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statements_20;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Globals_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__EliminateLocalVars_76;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_77_77;
#line 171 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_89_89;
#line 845 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 845 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 845 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 845 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 945 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_81_81;
#line 945 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_82_82;
#line 945 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_83_83;
#line 945 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_84_84;

#line 847 "ml_optimize.m"
        {
#line 847 "ml_optimize.m"
          ml_backend__ml_optimize__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_optimize__Globals_60, (MR_Integer) 455, (MR_Integer) 1);
        }
#line 849 "ml_optimize.m"
        if (ml_backend__ml_optimize__succeeded)
#line 848 "ml_optimize.m"
          {
#line 848 "ml_optimize.m"
            ml_backend__ml_optimize__convert_assignments_into_initializers_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns0_13, &ml_backend__ml_optimize__Defns1_15, ml_backend__ml_optimize__Statements0_14, &ml_backend__ml_optimize__Statements1_16);
          }
#line 849 "ml_optimize.m"
        else
#line 850 "ml_optimize.m"
          {
#line 850 "ml_optimize.m"
            ml_backend__ml_optimize__Statements1_16 = ml_backend__ml_optimize__Statements0_14;
#line 850 "ml_optimize.m"
            ml_backend__ml_optimize__Defns1_15 = ml_backend__ml_optimize__Defns0_13;
#line 850 "ml_optimize.m"
          }
#line 945 "ml_optimize.m"
        ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 945 "ml_optimize.m"
        ml_backend__ml_optimize__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 945 "ml_optimize.m"
        ml_backend__ml_optimize__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 945 "ml_optimize.m"
        ml_backend__ml_optimize__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 945 "ml_optimize.m"
        ml_backend__ml_optimize__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 945 "ml_optimize.m"
        {
#line 945 "ml_optimize.m"
          libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__V_77_77, (MR_Integer) 456, &ml_backend__ml_optimize__EliminateLocalVars_76);
        }
#line 950 "ml_optimize.m"
        if ((ml_backend__ml_optimize__EliminateLocalVars_76 == (MR_Integer) 0))
#line 951 "ml_optimize.m"
          {
#line 951 "ml_optimize.m"
            ml_backend__ml_optimize__Defns_17 = ml_backend__ml_optimize__Defns1_15;
#line 951 "ml_optimize.m"
            ml_backend__ml_optimize__Statements2_18 = ml_backend__ml_optimize__Statements1_16;
#line 951 "ml_optimize.m"
          }
#line 950 "ml_optimize.m"
        else
#line 949 "ml_optimize.m"
          {
#line 949 "ml_optimize.m"
            ml_backend__ml_optimize__eliminate_locals_5_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Defns1_15, &ml_backend__ml_optimize__Defns_17, ml_backend__ml_optimize__Statements1_16, &ml_backend__ml_optimize__Statements2_18);
          }
#line 10327 "ml_backend.ml_optimize.c"
        ml_backend__ml_optimize__TypeCtorInfo_9_91 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 495 "ml_optimize.m"
        {
#line 495 "ml_optimize.m"
          ml_backend__ml_optimize__V_89_89 = mercury__list__map_2_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_91, (MR_Word) &ml_backend__ml_optimize_scalar_common_1[0], (MR_Word) &ml_backend__ml_optimize_scalar_common_5[0], ml_backend__ml_optimize__Statements2_18);
        }
#line 495 "ml_optimize.m"
        {
#line 495 "ml_optimize.m"
          ml_backend__ml_optimize__Statements3_19 = mercury__list__condense_1_f_0(ml_backend__ml_optimize__TypeCtorInfo_9_91, ml_backend__ml_optimize__V_89_89);
        }
#line 177 "ml_optimize.m"
        {
#line 177 "ml_optimize.m"
          ml_backend__ml_optimize__optimize_in_statements_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statements3_19, &ml_backend__ml_optimize__Statements_20);
        }
#line 178 "ml_optimize.m"
        {
#line 178 "ml_optimize.m"
          MR_Word base;
#line 178 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 178 "ml_optimize.m"
          *ml_backend__ml_optimize__Stmt_6 = base;
#line 178 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Defns_17));
#line 178 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Statements_20));
#line 178 "ml_optimize.m"
        }
#line 171 "ml_optimize.m"
      }
#line 168 "ml_optimize.m"
    else
#line 168 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 2))))
#line 184 "ml_optimize.m"
        {
#line 184 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 184 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__MaybeElse0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 184 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Then_27;
#line 184 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__MaybeElse_28;
#line 184 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Rval_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));

#line 185 "ml_optimize.m"
          {
#line 185 "ml_optimize.m"
            ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Then0_25, &ml_backend__ml_optimize__Then_27);
          }
#line 186 "ml_optimize.m"
          {
#line 186 "ml_optimize.m"
            ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__MaybeElse0_26, &ml_backend__ml_optimize__MaybeElse_28);
          }
#line 187 "ml_optimize.m"
          {
#line 187 "ml_optimize.m"
            MR_Word base;
#line 187 "ml_optimize.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "ml_optimize.m"
            *ml_backend__ml_optimize__Stmt_6 = base;
#line 187 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Rval_46));
#line 187 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Then_27));
#line 187 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_optimize__MaybeElse_28));
#line 187 "ml_optimize.m"
          }
#line 184 "ml_optimize.m"
        }
#line 168 "ml_optimize.m"
      else
#line 168 "ml_optimize.m"
        if (((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 1))))
#line 180 "ml_optimize.m"
          {
#line 180 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Kind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)));
#line 180 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 180 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Statement0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 180 "ml_optimize.m"
            MR_Word ml_backend__ml_optimize__Statement_24;

#line 181 "ml_optimize.m"
            {
#line 181 "ml_optimize.m"
              ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statement0_23, &ml_backend__ml_optimize__Statement_24);
            }
#line 182 "ml_optimize.m"
            {
#line 182 "ml_optimize.m"
              MR_Word base;
#line 182 "ml_optimize.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 182 "ml_optimize.m"
              *ml_backend__ml_optimize__Stmt_6 = base;
#line 182 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_21));
#line 182 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Rval_22));
#line 182 "ml_optimize.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Statement_24));
#line 182 "ml_optimize.m"
            }
#line 180 "ml_optimize.m"
          }
#line 168 "ml_optimize.m"
        else
#line 168 "ml_optimize.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 169 "ml_optimize.m"
            {
#line 169 "ml_optimize.m"
              ml_backend__ml_optimize__optimize_in_call_stmt_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Stmt0_5, ml_backend__ml_optimize__Stmt_6);
#line 169 "ml_optimize.m"
              return;
            }
#line 168 "ml_optimize.m"
          else
#line 168 "ml_optimize.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 189 "ml_optimize.m"
              {
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__TypeCtorInfo_52_52;
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Range_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 4)));
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Default0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 5)));
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Cases_33;
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Default_34;
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__V_45_45;
#line 189 "ml_optimize.m"
                MR_Word ml_backend__ml_optimize__Rval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));

#line 190 "ml_optimize.m"
                {
#line 190 "ml_optimize.m"
                  ml_backend__ml_optimize__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 190 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[1]));
#line 190 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_2));
#line 190 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 190 "ml_optimize.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_45_45, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
#line 190 "ml_optimize.m"
                }
#line 10493 "ml_backend.ml_optimize.c"
                ml_backend__ml_optimize__TypeCtorInfo_52_52 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 190 "ml_optimize.m"
                {
#line 190 "ml_optimize.m"
                  mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_52_52, ml_backend__ml_optimize__TypeCtorInfo_52_52, ml_backend__ml_optimize__V_45_45, ml_backend__ml_optimize__Cases0_31, &ml_backend__ml_optimize__Cases_33);
                }
#line 191 "ml_optimize.m"
                {
#line 191 "ml_optimize.m"
                  ml_backend__ml_optimize__optimize_in_default_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Default0_32, &ml_backend__ml_optimize__Default_34);
                }
#line 192 "ml_optimize.m"
                {
#line 192 "ml_optimize.m"
                  MR_Word base;
#line 192 "ml_optimize.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 192 "ml_optimize.m"
                  *ml_backend__ml_optimize__Stmt_6 = base;
#line 192 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 192 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Type_29));
#line 192 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Rval_47));
#line 192 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__Range_30));
#line 192 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Cases_33));
#line 192 "ml_optimize.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_optimize__Default_34));
#line 192 "ml_optimize.m"
                }
#line 189 "ml_optimize.m"
              }
#line 168 "ml_optimize.m"
            else
#line 168 "ml_optimize.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_optimize__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 194 "ml_optimize.m"
                {
#line 194 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__Ref_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 1)));
#line 194 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__TryGoal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 2)));
#line 194 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__HandlerGoal0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_optimize__Stmt0_5, (MR_Integer) 3)));
#line 194 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__TryGoal_38;
#line 194 "ml_optimize.m"
                  MR_Word ml_backend__ml_optimize__HandlerGoal_39;

#line 195 "ml_optimize.m"
                  {
#line 195 "ml_optimize.m"
                    ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__TryGoal0_36, &ml_backend__ml_optimize__TryGoal_38);
                  }
#line 196 "ml_optimize.m"
                  {
#line 196 "ml_optimize.m"
                    ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__HandlerGoal0_37, &ml_backend__ml_optimize__HandlerGoal_39);
                  }
#line 197 "ml_optimize.m"
                  {
#line 197 "ml_optimize.m"
                    MR_Word base;
#line 197 "ml_optimize.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 197 "ml_optimize.m"
                    *ml_backend__ml_optimize__Stmt_6 = base;
#line 197 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 197 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Ref_35));
#line 197 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_optimize__TryGoal_38));
#line 197 "ml_optimize.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_optimize__HandlerGoal_39));
#line 197 "ml_optimize.m"
                  }
#line 194 "ml_optimize.m"
                }
#line 168 "ml_optimize.m"
              else
#line 206 "ml_optimize.m"
                *ml_backend__ml_optimize__Stmt_6 = ml_backend__ml_optimize__Stmt0_5;
#line 168 "ml_optimize.m"
  }
#line 163 "ml_optimize.m"
}

#line 154 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statement_3_p_0(
#line 154 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9,
#line 154 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10,
#line 154 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statement_11)
#line 154 "ml_optimize.m"
{
#line 157 "ml_optimize.m"
  {
#line 157 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 157 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10, (MR_Integer) 0)));
#line 157 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_Statement_0_10, (MR_Integer) 1)));
#line 157 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Stmt_8;
#line 157 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12;
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 0)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 1)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 2)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 3)));
#line 159 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_0_9, (MR_Integer) 4)));

#line 159 "ml_optimize.m"
    {
#line 159 "ml_optimize.m"
      ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 0) = ((MR_Box) (ml_backend__ml_optimize__V_14_14));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 1) = ((MR_Box) (ml_backend__ml_optimize__V_15_15));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 2) = ((MR_Box) (ml_backend__ml_optimize__V_16_16));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 3) = ((MR_Box) (ml_backend__ml_optimize__V_17_17));
#line 159 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_7));
#line 159 "ml_optimize.m"
    }
#line 160 "ml_optimize.m"
    {
#line 160 "ml_optimize.m"
      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_12, ml_backend__ml_optimize__Stmt0_6, &ml_backend__ml_optimize__Stmt_8);
    }
#line 161 "ml_optimize.m"
    {
#line 161 "ml_optimize.m"
      MR_Word base;
#line 161 "ml_optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "ml_optimize.m"
      *ml_backend__ml_optimize__STATE_VARIABLE_Statement_11 = base;
#line 161 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_8));
#line 161 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_7));
#line 161 "ml_optimize.m"
    }
#line 157 "ml_optimize.m"
  }
#line 154 "ml_optimize.m"
}

#line 144 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0_1(
#line 144 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 144 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 144 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
#line 144 "ml_optimize.m"
{
#line 144 "ml_optimize.m"
  {
#line 144 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 144 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_STATE_VARIABLE_Statement_11;

#line 144 "ml_optimize.m"
    {
#line 144 "ml_optimize.m"
      ml_backend__ml_optimize__optimize_in_statement_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_STATE_VARIABLE_Statement_11);
    }
#line 144 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_STATE_VARIABLE_Statement_11));
#line 144 "ml_optimize.m"
  }
#line 144 "ml_optimize.m"
}

#line 140 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_statements_3_p_0(
#line 140 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 140 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8,
#line 140 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_Statements_9)
#line 140 "ml_optimize.m"
{
#line 143 "ml_optimize.m"
  {
#line 143 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 143 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_20_20;
#line 143 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Globals_6;
#line 143 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__OptPeep_7;
#line 143 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_10_10;
#line 143 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11;
#line 145 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_14_14;
#line 145 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_15_15;
#line 145 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_16_16;
#line 145 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_17_17;

#line 144 "ml_optimize.m"
    {
#line 144 "ml_optimize.m"
      ml_backend__ml_optimize__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 144 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0]));
#line 144 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_statements_3_p_0_1));
#line 144 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 144 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_10_10, 3) = ((MR_Box) (ml_backend__ml_optimize__OptInfo_4));
#line 144 "ml_optimize.m"
    }
#line 10737 "ml_backend.ml_optimize.c"
    ml_backend__ml_optimize__TypeCtorInfo_20_20 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 144 "ml_optimize.m"
    {
#line 144 "ml_optimize.m"
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_20_20, ml_backend__ml_optimize__TypeCtorInfo_20_20, ml_backend__ml_optimize__V_10_10, ml_backend__ml_optimize__STATE_VARIABLE_Statements_0_8, &ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11);
    }
#line 145 "ml_optimize.m"
    ml_backend__ml_optimize__Globals_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 0)));
#line 145 "ml_optimize.m"
    ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 1)));
#line 145 "ml_optimize.m"
    ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 2)));
#line 145 "ml_optimize.m"
    ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 3)));
#line 145 "ml_optimize.m"
    ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_4, (MR_Integer) 4)));
#line 146 "ml_optimize.m"
    {
#line 146 "ml_optimize.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_optimize__Globals_6, (MR_Integer) 461, &ml_backend__ml_optimize__OptPeep_7);
    }
#line 149 "ml_optimize.m"
    if ((ml_backend__ml_optimize__OptPeep_7 == (MR_Integer) 0))
#line 148 "ml_optimize.m"
      *ml_backend__ml_optimize__STATE_VARIABLE_Statements_9 = ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11;
#line 149 "ml_optimize.m"
    else
#line 151 "ml_optimize.m"
      {
#line 151 "ml_optimize.m"
        ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ml_backend__ml_optimize__STATE_VARIABLE_Statements_11_11, ml_backend__ml_optimize__STATE_VARIABLE_Statements_9);
#line 151 "ml_optimize.m"
        return;
      }
#line 143 "ml_optimize.m"
  }
#line 140 "ml_optimize.m"
}

#line 128 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_statement_3_p_0(
#line 128 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__OptInfo_4,
#line 128 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8,
#line 128 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9)
#line 128 "ml_optimize.m"
{
#line 133 "ml_optimize.m"
  {
#line 133 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;

#line 133 "ml_optimize.m"
    if ((ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 133 "ml_optimize.m"
      *ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9 = ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8;
#line 133 "ml_optimize.m"
    else
#line 135 "ml_optimize.m"
      {
#line 135 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_0_8, (MR_Integer) 0)));
#line 135 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Statement_7;

#line 136 "ml_optimize.m"
        {
#line 136 "ml_optimize.m"
          ml_backend__ml_optimize__optimize_in_statement_3_p_0(ml_backend__ml_optimize__OptInfo_4, ml_backend__ml_optimize__Statement0_6, &ml_backend__ml_optimize__Statement_7);
        }
#line 137 "ml_optimize.m"
        {
#line 137 "ml_optimize.m"
          MR_Word base;
#line 137 "ml_optimize.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 137 "ml_optimize.m"
          *ml_backend__ml_optimize__STATE_VARIABLE_MaybeStatement_9 = base;
#line 137 "ml_optimize.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Statement_7));
#line 137 "ml_optimize.m"
        }
#line 135 "ml_optimize.m"
      }
#line 133 "ml_optimize.m"
  }
#line 128 "ml_optimize.m"
}

#line 83 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0_1(
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 83 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
#line 83 "ml_optimize.m"
{
#line 83 "ml_optimize.m"
  {
#line 83 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 83 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_Defn_8;

#line 83 "ml_optimize.m"
    {
#line 83 "ml_optimize.m"
      ml_backend__ml_optimize__optimize_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Defn_8);
    }
#line 83 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Defn_8));
#line 83 "ml_optimize.m"
  }
#line 83 "ml_optimize.m"
}

#line 85 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__optimize_in_defn_4_p_0(
#line 85 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__ModuleName_5,
#line 85 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Globals_6,
#line 85 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Defn0_7,
#line 85 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__Defn_8)
#line 85 "ml_optimize.m"
{
#line 88 "ml_optimize.m"
  {
#line 88 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 88 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 0)));
#line 88 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 1)));
#line 88 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Flags_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 2)));
#line 88 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__DefnBody0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Defn0_7, (MR_Integer) 3)));

#line 101 "ml_optimize.m"
    if (((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_12)) == (MR_mktag((MR_Integer) 0))))
#line 105 "ml_optimize.m"
      {
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_46;
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_56;
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__ClassDefn0_25 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__DefnBody0_12), (MR_Integer) 0);
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 0)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Imports_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 1)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__BaseClasses_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 2)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__Implements_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 3)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__TypeParams_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 4)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__CtorDefns0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 5)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__MemberDefns0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn0_25, (MR_Integer) 6)));
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__MemberDefns_33;
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__CtorDefns_34;
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__ClassDefn_35;
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__DefnBody_36;
#line 105 "ml_optimize.m"
        MR_Word ml_backend__ml_optimize__V_42_42;

#line 83 "ml_optimize.m"
        {
#line 83 "ml_optimize.m"
          ml_backend__ml_optimize__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 83 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
#line 83 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_defn_4_p_0_1));
#line 83 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 83 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
#line 83 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_42_42, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
#line 83 "ml_optimize.m"
        }
#line 10937 "ml_backend.ml_optimize.c"
        ml_backend__ml_optimize__TypeCtorInfo_14_46 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 83 "ml_optimize.m"
        {
#line 83 "ml_optimize.m"
          mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_46, ml_backend__ml_optimize__TypeCtorInfo_14_46, ml_backend__ml_optimize__V_42_42, ml_backend__ml_optimize__MemberDefns0_32, &ml_backend__ml_optimize__MemberDefns_33);
        }
#line 10944 "ml_backend.ml_optimize.c"
        ml_backend__ml_optimize__TypeCtorInfo_14_56 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 83 "ml_optimize.m"
        {
#line 83 "ml_optimize.m"
          mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_56, ml_backend__ml_optimize__TypeCtorInfo_14_56, ml_backend__ml_optimize__V_42_42, ml_backend__ml_optimize__CtorDefns0_31, &ml_backend__ml_optimize__CtorDefns_34);
        }
#line 110 "ml_optimize.m"
        {
#line 110 "ml_optimize.m"
          ml_backend__ml_optimize__ClassDefn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 0) = ((MR_Box) (ml_backend__ml_optimize__Kind_26));
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 1) = ((MR_Box) (ml_backend__ml_optimize__Imports_27));
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 2) = ((MR_Box) (ml_backend__ml_optimize__BaseClasses_28));
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 3) = ((MR_Box) (ml_backend__ml_optimize__Implements_29));
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 4) = ((MR_Box) (ml_backend__ml_optimize__TypeParams_30));
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 5) = ((MR_Box) (ml_backend__ml_optimize__CtorDefns_34));
#line 110 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__ClassDefn_35, 6) = ((MR_Box) (ml_backend__ml_optimize__MemberDefns_33));
#line 110 "ml_optimize.m"
        }
#line 112 "ml_optimize.m"
        ml_backend__ml_optimize__DefnBody_36 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_optimize__ClassDefn_35);
#line 113 "ml_optimize.m"
        {
#line 113 "ml_optimize.m"
          MR_Word base;
#line 113 "ml_optimize.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 113 "ml_optimize.m"
          *ml_backend__ml_optimize__Defn_8 = base;
#line 113 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
#line 113 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
#line 113 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_11));
#line 113 "ml_optimize.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_36));
#line 113 "ml_optimize.m"
        }
#line 105 "ml_optimize.m"
      }
#line 101 "ml_optimize.m"
    else
#line 101 "ml_optimize.m"
      if (((MR_tag((MR_Word) ml_backend__ml_optimize__DefnBody0_12)) == (MR_mktag((MR_Integer) 1))))
#line 103 "ml_optimize.m"
        *ml_backend__ml_optimize__Defn_8 = ml_backend__ml_optimize__Defn0_7;
#line 101 "ml_optimize.m"
      else
#line 92 "ml_optimize.m"
        {
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 0)));
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 1)));
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__FuncBody0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 2)));
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__Attributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 3)));
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody0_12, (MR_Integer) 4)));
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__OptInfo_18;
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__FuncBody1_19;
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__FuncBody_20;
#line 92 "ml_optimize.m"
          MR_Word ml_backend__ml_optimize__DefnBody_21;

#line 93 "ml_optimize.m"
          {
#line 93 "ml_optimize.m"
            ml_backend__ml_optimize__OptInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 93 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 0) = ((MR_Box) (ml_backend__ml_optimize__Globals_6));
#line 93 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 1) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_5));
#line 93 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 2) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
#line 93 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 3) = ((MR_Box) (ml_backend__ml_optimize__Params_14));
#line 93 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
#line 93 "ml_optimize.m"
          }
#line 95 "ml_optimize.m"
          {
#line 95 "ml_optimize.m"
            ml_backend__ml_optimize__optimize_func_3_p_0(ml_backend__ml_optimize__OptInfo_18, ml_backend__ml_optimize__FuncBody0_15, &ml_backend__ml_optimize__FuncBody1_19);
          }
#line 121 "ml_optimize.m"
          if ((ml_backend__ml_optimize__FuncBody1_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "ml_optimize.m"
            ml_backend__ml_optimize__FuncBody_20 = ml_backend__ml_optimize__FuncBody1_19;
#line 121 "ml_optimize.m"
          else
#line 123 "ml_optimize.m"
            {
#line 123 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Statement0_61 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_optimize__FuncBody1_19), (MR_Integer) 1);
#line 123 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Statement_62;
#line 123 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Stmt0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_61, (MR_Integer) 0)));
#line 123 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Context_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement0_61, (MR_Integer) 1)));
#line 123 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__Stmt_71;
#line 123 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72;
#line 159 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 0)));
#line 159 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 1)));
#line 159 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 2)));
#line 159 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 3)));
#line 159 "ml_optimize.m"
              MR_Word ml_backend__ml_optimize__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__OptInfo_18, (MR_Integer) 4)));

#line 159 "ml_optimize.m"
              {
#line 159 "ml_optimize.m"
                ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 159 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72, 0) = ((MR_Box) (ml_backend__ml_optimize__V_74_74));
#line 159 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72, 1) = ((MR_Box) (ml_backend__ml_optimize__V_75_75));
#line 159 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72, 2) = ((MR_Box) (ml_backend__ml_optimize__V_76_76));
#line 159 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72, 3) = ((MR_Box) (ml_backend__ml_optimize__V_77_77));
#line 159 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72, 4) = ((MR_Box) (ml_backend__ml_optimize__Context_70));
#line 159 "ml_optimize.m"
              }
#line 160 "ml_optimize.m"
              {
#line 160 "ml_optimize.m"
                ml_backend__ml_optimize__optimize_in_stmt_3_p_0(ml_backend__ml_optimize__STATE_VARIABLE_OptInfo_12_72, ml_backend__ml_optimize__Stmt0_69, &ml_backend__ml_optimize__Stmt_71);
              }
#line 161 "ml_optimize.m"
              {
#line 161 "ml_optimize.m"
                ml_backend__ml_optimize__Statement_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_62, 0) = ((MR_Box) (ml_backend__ml_optimize__Stmt_71));
#line 161 "ml_optimize.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__Statement_62, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_70));
#line 161 "ml_optimize.m"
              }
#line 125 "ml_optimize.m"
              ml_backend__ml_optimize__FuncBody_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_optimize__Statement_62);
#line 123 "ml_optimize.m"
            }
#line 98 "ml_optimize.m"
          {
#line 98 "ml_optimize.m"
            ml_backend__ml_optimize__DefnBody_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 98 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_21, 0) = ((MR_Box) (ml_backend__ml_optimize__PredProcId_13));
#line 98 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_21, 1) = ((MR_Box) (ml_backend__ml_optimize__Params_14));
#line 98 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_21, 2) = ((MR_Box) (ml_backend__ml_optimize__FuncBody_20));
#line 98 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_21, 3) = ((MR_Box) (ml_backend__ml_optimize__Attributes_16));
#line 98 "ml_optimize.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_optimize__DefnBody_21, 4) = ((MR_Box) (ml_backend__ml_optimize__EnvVarNames_17));
#line 98 "ml_optimize.m"
          }
#line 100 "ml_optimize.m"
          {
#line 100 "ml_optimize.m"
            MR_Word base;
#line 100 "ml_optimize.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 100 "ml_optimize.m"
            *ml_backend__ml_optimize__Defn_8 = base;
#line 100 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__Name_9));
#line 100 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__Context_10));
#line 100 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__Flags_11));
#line 100 "ml_optimize.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__DefnBody_21));
#line 100 "ml_optimize.m"
          }
#line 92 "ml_optimize.m"
        }
#line 88 "ml_optimize.m"
  }
#line 85 "ml_optimize.m"
}

#line 83 "ml_optimize.m"
static void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__closure_arg,
#line 83 "ml_optimize.m"
  MR_Box ml_backend__ml_optimize__wrapper_arg_1,
#line 83 "ml_optimize.m"
  MR_Box * ml_backend__ml_optimize__wrapper_arg_2)
#line 83 "ml_optimize.m"
{
#line 83 "ml_optimize.m"
  {
#line 83 "ml_optimize.m"
    MR_Box ml_backend__ml_optimize__closure = ml_backend__ml_optimize__closure_arg;
#line 83 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__conv0_Defn_8;

#line 83 "ml_optimize.m"
    {
#line 83 "ml_optimize.m"
      ml_backend__ml_optimize__optimize_in_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_optimize__wrapper_arg_1), &ml_backend__ml_optimize__conv0_Defn_8);
    }
#line 83 "ml_optimize.m"
    *ml_backend__ml_optimize__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_optimize__conv0_Defn_8));
#line 83 "ml_optimize.m"
  }
#line 83 "ml_optimize.m"
}

#line 40 "ml_optimize.m"
void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0(
#line 40 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__Globals_4,
#line 40 "ml_optimize.m"
  MR_Word ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9,
#line 40 "ml_optimize.m"
  MR_Word * ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10)
#line 40 "ml_optimize.m"
{
#line 73 "ml_optimize.m"
  {
#line 73 "ml_optimize.m"
    MR_bool ml_backend__ml_optimize__succeeded;
#line 73 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__TypeCtorInfo_14_44;
#line 73 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Defns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
#line 73 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__ModuleName_7;
#line 73 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__Defns_8;
#line 73 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
#line 73 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_40_40;
#line 74 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
#line 74 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
#line 74 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
#line 74 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
#line 74 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
#line 74 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_27_27;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_28_28;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_29_29;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_30_30;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_32_32;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_33_33;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_34_34;
#line 77 "ml_optimize.m"
    MR_Word ml_backend__ml_optimize__V_31_31;

#line 75 "ml_optimize.m"
    {
#line 75 "ml_optimize.m"
      ml_backend__ml_optimize__ModuleName_7 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_optimize__V_13_13);
    }
#line 83 "ml_optimize.m"
    {
#line 83 "ml_optimize.m"
      ml_backend__ml_optimize__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 83 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
#line 83 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 1) = ((MR_Box) (ml_backend__ml_optimize__mlds_optimize_3_p_0_1));
#line 83 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 83 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 3) = ((MR_Box) (ml_backend__ml_optimize__ModuleName_7));
#line 83 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__V_40_40, 4) = ((MR_Box) (ml_backend__ml_optimize__Globals_4));
#line 83 "ml_optimize.m"
    }
#line 11257 "ml_backend.ml_optimize.c"
    ml_backend__ml_optimize__TypeCtorInfo_14_44 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 83 "ml_optimize.m"
    {
#line 83 "ml_optimize.m"
      mercury__list__map_3_p_0(ml_backend__ml_optimize__TypeCtorInfo_14_44, ml_backend__ml_optimize__TypeCtorInfo_14_44, ml_backend__ml_optimize__V_40_40, ml_backend__ml_optimize__Defns0_6, &ml_backend__ml_optimize__Defns_8);
    }
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6)));
#line 77 "ml_optimize.m"
    ml_backend__ml_optimize__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_optimize__STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7)));
#line 77 "ml_optimize.m"
    {
#line 77 "ml_optimize.m"
      MR_Word base;
#line 77 "ml_optimize.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 77 "ml_optimize.m"
      *ml_backend__ml_optimize__STATE_VARIABLE_MLDS_10 = base;
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_optimize__V_27_27));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_optimize__V_28_28));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_optimize__V_29_29));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_optimize__V_30_30));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_optimize__Defns_8));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_optimize__V_32_32));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_optimize__V_33_33));
#line 77 "ml_optimize.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_optimize__V_34_34));
#line 77 "ml_optimize.m"
    }
#line 73 "ml_optimize.m"
  }
#line 40 "ml_optimize.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_optimize. */
