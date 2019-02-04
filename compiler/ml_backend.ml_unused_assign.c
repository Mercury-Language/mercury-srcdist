/*
** Automatically generated from `ml_unused_assign.m'
** by the Mercury compiler,
** version DEV
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


// :- module ml_backend.ml_unused_assign.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unused_assign__init
ENDINIT
*/

#include "ml_backend.ml_unused_assign.mih"


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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "ml_backend.ml_global_data.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_value_ordered_original_or_optimized_code_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_name_ordered_original_or_optimized_code_0[2];

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_original_or_optimized_code_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unused_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_PseudoTypeInfo ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_types_ua_info_0_0[5];

static const MR_ConstString ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_names_ua_info_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_stag_ordered_ua_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_ptag_ordered_ua_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_name_ordered_ua_info_0[1];

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_ua_info_0[1];

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_switch_cases__350__1_1_p_0(
  MR_Word SeenInMatch_26);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_stmt_return_cord__195__1_2_p_0(
  MR_Word SeenBefore_10,
  MR_Word SeenAfterBody_25);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_typed_rval_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_7,
  MR_Word * STATE_VARIABLE_Seen_8);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_outline_arg_3_p_0(
  MR_Word OutlineArg_4,
  MR_Word STATE_VARIABLE_Seen_0_10,
  MR_Word * STATE_VARIABLE_Seen_11);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_target_component_3_p_0(
  MR_Word Component_4,
  MR_Word STATE_VARIABLE_Seen_0_13,
  MR_Word * STATE_VARIABLE_Seen_14);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_match_cond_3_p_0(
  MR_Word MatchCond_4,
  MR_Word STATE_VARIABLE_Seen_0_9,
  MR_Word * STATE_VARIABLE_Seen_10);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__defined_var_was_seen_2_p_0(
  MR_Word SeenBefore_3,
  MR_Word LocalVarDefn_4);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__optimize_away_unused_assigns_in_proc_body_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SeenBefore_0_3,
  MR_Word * STATE_VARIABLE_SeenBefore_4);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SeenBefore_0_4,
  MR_Word * STATE_VARIABLE_SeenBefore_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_default_6_p_0(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * StmtCord_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmts_6_p_0(
  MR_Word Stmts0_7,
  MR_Word * Stmts_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unused_assign__accumulate_label_seen_sets_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_2,
  MR_Word * STATE_VARIABLE_Seen_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_unused_assign__get_seen_set_at_label_4_p_0(
  MR_String Label_5,
  MR_Word * SeenSetAtLabel_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_3_p_0(
  MR_Word SeenBefore_4,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_6,
  MR_Word * STATE_VARIABLE_LocalVarDefns_7);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * StmtCord_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8);

static void MR_CALL 
ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_Seen_0_18,
  MR_Word * STATE_VARIABLE_Seen_19);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_lval_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_Seen_0_19,
  MR_Word * STATE_VARIABLE_Seen_20);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_Seen_0_19,
  MR_Word * STATE_VARIABLE_Seen_20);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_2[10][3];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_3[6][6];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_4[3][5];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_5[1][4];




static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[5])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_3[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0 = {
  (MR_String) "may_use_optimized_code",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1 = {
  (MR_String) "must_use_original_code",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_value_ordered_original_or_optimized_code_0[2] = {
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0,
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_name_ordered_original_or_optimized_code_0[2] = {
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0,
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1
};

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_original_or_optimized_code_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_original_or_optimized_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "original_or_optimized_code",
  {     ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_name_ordered_original_or_optimized_code_0 },
  {     ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_value_ordered_original_or_optimized_code_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_original_or_optimized_code_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unused_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_at_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "seen_at_label_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____seen_set_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____seen_set_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "seen_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_types_ua_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_original_or_optimized_code_0)
};

static const MR_ConstString ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_names_ua_info_0_0[5] = {
  (MR_String) "uai_seen_at_label_map",
  (MR_String) "uai_seen_at_break_switch",
  (MR_String) "uai_seen_at_break_loop",
  (MR_String) "uai_seen_at_continue_loop",
  (MR_String) "uai_orig_opt_code"
};

static const MR_DuFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0 = {
  (MR_String) "ua_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_types_ua_info_0_0,
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_names_ua_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_stag_ordered_ua_info_0_0[1] = {
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_ptag_ordered_ua_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_stag_ordered_ua_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_name_ordered_ua_info_0[1] = {
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0
};

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_ua_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_ua_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____ua_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____ua_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "ua_info",
  {     ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_name_ordered_ua_info_0 },
  {     ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_ptag_ordered_ua_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_ua_info_0
};

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_switch_cases__350__1_1_p_0(
  MR_Word SeenInMatch_26)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenInMatch_26);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_stmt_return_cord__195__1_2_p_0(
  MR_Word SeenBefore_10,
  MR_Word SeenAfterBody_25)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__subset_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBefore_10, SeenAfterBody_25);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]), &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]), &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]), &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              MR_Integer Var_25 = (MR_Integer) (ArgX5_12);
              MR_Integer Var_26 = (MR_Integer) (ArgY5_13);

              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_25, Var_26);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_typed_rval_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_7,
  MR_Word * STATE_VARIABLE_Seen_8)
{
  {
    MR_Word Rval_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word _Type_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_4, STATE_VARIABLE_Seen_0_7, STATE_VARIABLE_Seen_8);
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_outline_arg_3_p_0(
  MR_Word OutlineArg_4,
  MR_Word STATE_VARIABLE_Seen_0_10,
  MR_Word * STATE_VARIABLE_Seen_11)
{
  switch (MR_tag((MR_Word) OutlineArg_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Seen_11 = STATE_VARIABLE_Seen_0_10;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutlineArg_4, (MR_Integer) 2))));
        MR_Word _Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutlineArg_4, (MR_Integer) 0))));
        MR_String _Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), OutlineArg_4, (MR_Integer) 1))));

        ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_8, STATE_VARIABLE_Seen_0_10, STATE_VARIABLE_Seen_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OutlineArg_4, (MR_Integer) 2))));
        MR_Word _Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OutlineArg_4, (MR_Integer) 0))));
        MR_String _Name_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), OutlineArg_4, (MR_Integer) 1))));

        ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(Lval_9, STATE_VARIABLE_Seen_0_10, STATE_VARIABLE_Seen_11);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_target_component_3_p_0(
  MR_Word Component_4,
  MR_Word STATE_VARIABLE_Seen_0_13,
  MR_Word * STATE_VARIABLE_Seen_14)
{
  switch (MR_tag((MR_Word) Component_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Component_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_4, (MR_Integer) 1))));

            ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_11, STATE_VARIABLE_Seen_0_13, STATE_VARIABLE_Seen_14);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_4, (MR_Integer) 1))));

            ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(Lval_12, STATE_VARIABLE_Seen_0_13, STATE_VARIABLE_Seen_14);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_match_cond_3_p_0(
  MR_Word MatchCond_4,
  MR_Word STATE_VARIABLE_Seen_0_9,
  MR_Word * STATE_VARIABLE_Seen_10)
{
  if (((MR_tag((MR_Word) MatchCond_4)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word MatchMinRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchCond_4, (MR_Integer) 0))));
    MR_Word MatchMaxRval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchCond_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Seen_11_11;

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMinRval_7, STATE_VARIABLE_Seen_0_9, &STATE_VARIABLE_Seen_11_11);
    ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMaxRval_8, STATE_VARIABLE_Seen_11_11, STATE_VARIABLE_Seen_10);
  }
  else
  {
    MR_Word MatchRval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MatchCond_4, (MR_Integer) 0))));

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchRval_6, STATE_VARIABLE_Seen_0_9, STATE_VARIABLE_Seen_10);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__defined_var_was_seen_2_p_0(
  MR_Word SeenBefore_3,
  MR_Word LocalVarDefn_4)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 2))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 4))));

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBefore_3, ((MR_Box) (LocalVarName_5)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__optimize_away_unused_assigns_in_proc_body_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unused_assign__defined_var_was_seen_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unused_assign__optimize_away_unused_assigns_in_proc_body_8_p_0(
  MR_Word ParamLocalVars_9,
  MR_Word SeenAtLabelMap0_10,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_25,
  MR_Word * STATE_VARIABLE_LocalVarDefns_26,
  MR_Word STATE_VARIABLE_FuncDefns_0_27,
  MR_Word * STATE_VARIABLE_FuncDefns_28,
  MR_Word Stmts0_13,
  MR_Word * Stmts_14)
{
  {
    MR_bool succeeded;
    MR_Word Info0_18;
    MR_Word SeenAfter_19;
    MR_Word Stmts1_20;
    MR_Word SeenBefore0_21;
    MR_Word Info_22;
    MR_Word SeenBefore_23;
    MR_Word OrigOrOpt_24;
    MR_Word RevStmts0_44;
    MR_Word RevStmtsCord_45;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Info0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_18, 0) = ((MR_Box) (SeenAtLabelMap0_10));
      MR_hl_field(MR_mktag(0), Info0_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info0_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info0_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info0_18, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__set__list_to_set_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ParamLocalVars_9, &SeenAfter_19);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Stmts0_13, &RevStmts0_44);
    ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(RevStmts0_44, &RevStmtsCord_45, SeenAfter_19, &SeenBefore0_21, Info0_18, &Info_22);
    Stmts1_20 = mercury__cord__rev_cord_list_to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), RevStmtsCord_45);
    ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(STATE_VARIABLE_FuncDefns_0_27, STATE_VARIABLE_FuncDefns_28, SeenBefore0_21, &SeenBefore_23);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_22, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_22, (MR_Integer) 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_22, (MR_Integer) 2))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_22, (MR_Integer) 3))));
    OrigOrOpt_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_22, (MR_Integer) 4))));
    switch (OrigOrOpt_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_52;

          *Stmts_14 = Stmts1_20;
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_unused_assign__optimize_away_unused_assigns_in_proc_body_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (SeenBefore_23));
          }
          mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Var_52, STATE_VARIABLE_LocalVarDefns_0_25, STATE_VARIABLE_LocalVarDefns_26);
        }
        break;
      case (MR_Integer) 1:
        {
          *Stmts_14 = Stmts0_13;
          *STATE_VARIABLE_LocalVarDefns_26 = STATE_VARIABLE_LocalVarDefns_0_25;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_util__project_mlds_argument_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SeenBefore_0_3,
  MR_Word * STATE_VARIABLE_SeenBefore_4)
{
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_SeenBefore_4 = STATE_VARIABLE_SeenBefore_0_3;
  }
  else
  {
    MR_Word FuncDefn0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word FuncDefns0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word FuncDefn_10;
    MR_Word FuncDefns_11;
    MR_Word SeenBeforeFunc_13;
    MR_Word STATE_VARIABLE_SeenBefore_16_16;
    MR_Word FuncName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 0))));
    MR_Word Ctxt_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 1))));
    MR_Word Flags_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 2))));
    MR_Word MaybeOrigPredProcId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 3))));
    MR_Word Params_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 4))));
    MR_Word Body0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 5))));
    MR_Word EnvVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 6))));
    MR_Word MaybeTailRec_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_8, (MR_Integer) 7))));

    if ((Body0_27 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_func_defn\'/3", (MR_String) "body_external");
        return;
      }
    }
    else
    {
      MR_Word Stmt0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_27, (MR_Integer) 0))));
      MR_Word SeenAtLabelMap0_31;
      MR_Word Info0_35;
      MR_Word Args_36;
      MR_Word ArgLocalVars_38;
      MR_Word SeenAfter_39;
      MR_Word Stmt_40;
      MR_Word Info_41;
      MR_Word OrigOrOpt_42;
      MR_Word _ReturnTypes_37;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;

      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), &SeenAtLabelMap0_31);
      {
        Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info0_35, 0) = ((MR_Box) (SeenAtLabelMap0_31));
        MR_hl_field(MR_mktag(0), Info0_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Info0_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Info0_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Info0_35, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      Args_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_26, (MR_Integer) 0))));
      _ReturnTypes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_26, (MR_Integer) 1))));
      ArgLocalVars_38 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[9]), Args_36);
      mercury__set__list_to_set_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ArgLocalVars_38, &SeenAfter_39);
      ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(Stmt0_30, &Stmt_40, SeenAfter_39, &SeenBeforeFunc_13, Info0_35, &Info_41);
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 1))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 2))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 3))));
      OrigOrOpt_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_41, (MR_Integer) 4))));
      switch (OrigOrOpt_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Body_43;

            {
              Body_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Body_43, 0) = ((MR_Box) (Stmt_40));
            }
            {
              FuncDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FuncDefn_10, 0) = ((MR_Box) (FuncName_22));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 1) = ((MR_Box) (Ctxt_23));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 2) = ((MR_Box) (Flags_24));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 3) = ((MR_Box) (MaybeOrigPredProcId_25));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 4) = ((MR_Box) (Params_26));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 5) = ((MR_Box) (Body_43));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 6) = ((MR_Box) (EnvVars_28));
              MR_hl_field(MR_mktag(0), FuncDefn_10, 7) = ((MR_Box) (MaybeTailRec_29));
            }
          }
          break;
        case (MR_Integer) 1:
          FuncDefn_10 = FuncDefn0_8;
          break;
      }
    }
    mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeFunc_13, STATE_VARIABLE_SeenBefore_0_3, &STATE_VARIABLE_SeenBefore_16_16);
    ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(FuncDefns0_9, &FuncDefns_11, STATE_VARIABLE_SeenBefore_16_16, STATE_VARIABLE_SeenBefore_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncDefn_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FuncDefns_11));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_switch_cases__350__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Seen_10;

    ml_backend__ml_unused_assign__see_in_match_cond_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Seen_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Seen_10));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SeenBefore_0_4,
  MR_Word * STATE_VARIABLE_SeenBefore_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_SeenBefore_5 = STATE_VARIABLE_SeenBefore_0_4;
    }
    else
    {
      MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_17;
      MR_Word Cases_18;
      MR_Word FirstMatchCond_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 0))));
      MR_Word LaterMatchConds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 1))));
      MR_Word Stmt0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 2))));
      MR_Word SeenInMatch0_25;
      MR_Word SeenInMatch_26;
      MR_Word Stmt_27;
      MR_Word SeenBeforeStmt_28;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word STATE_VARIABLE_SeenBefore_39_39;
      MR_Word StmtCord_66;
      MR_Word Stmts_71;
      MR_Box conv1_SeenInMatch_26;

      Var_33 = mercury__set__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0));
      if (((MR_tag((MR_Word) FirstMatchCond_22)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word MatchMinRval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstMatchCond_22, (MR_Integer) 0))));
        MR_Word MatchMaxRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstMatchCond_22, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Seen_11_56;

        ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMinRval_54, Var_33, &STATE_VARIABLE_Seen_11_56);
        ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMaxRval_55, STATE_VARIABLE_Seen_11_56, &SeenInMatch0_25);
      }
      else
      {
        MR_Word MatchRval_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstMatchCond_22, (MR_Integer) 0))));

        ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchRval_53, Var_33, &SeenInMatch0_25);
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[8]), LaterMatchConds_23, ((MR_Box) (SeenInMatch0_25)), &conv1_SeenInMatch_26);
      SeenInMatch_26 = ((MR_Word) (conv1_SeenInMatch_26));
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (SeenInMatch_26));
      }
      mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_switch_cases\'/7", (MR_String) "a variable occurs in a supposedly-constant match condition");
      ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_24, &StmtCord_66, HeadVar__3_3, &SeenBeforeStmt_28, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_38_38);
      Stmts_71 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_66);
      if ((Stmts_71 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Context_75;

        Context_75 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_24);
        {
          Stmt_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Stmt_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Stmt_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Stmt_27, 2) = ((MR_Box) (Stmts_71));
          MR_hl_field(MR_mktag(0), Stmt_27, 3) = ((MR_Box) (Context_75));
        }
      }
      else
      {
        MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_71, (MR_Integer) 1))));
        MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_71, (MR_Integer) 0))));

        if ((Var_87 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Stmt_27 = Var_88;
        else
        {
          MR_Word Context_81;

          Context_81 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_24);
          {
            Stmt_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Stmt_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Stmt_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Stmt_27, 2) = ((MR_Box) (Stmts_71));
            MR_hl_field(MR_mktag(0), Stmt_27, 3) = ((MR_Box) (Context_81));
          }
        }
      }
      {
        Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_17, 0) = ((MR_Box) (FirstMatchCond_22));
        MR_hl_field(MR_mktag(0), Case_17, 1) = ((MR_Box) (LaterMatchConds_23));
        MR_hl_field(MR_mktag(0), Case_17, 2) = ((MR_Box) (Stmt_27));
      }
      mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeStmt_28, STATE_VARIABLE_SeenBefore_0_4, &STATE_VARIABLE_SeenBefore_39_39);
      ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(Cases0_16, &Cases_18, HeadVar__3_3, STATE_VARIABLE_SeenBefore_39_39, STATE_VARIABLE_SeenBefore_5, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_18));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_default_6_p_0(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  switch (MR_tag((MR_Word) Default0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Default_8 = Default0_7;
        *SeenBefore_10 = SeenAfter_9;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default0_7, (MR_Integer) 0))));
        MR_Word Stmt_13;
        MR_Word StmtCord_24;
        MR_Word Stmts_29;

        ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_12, &StmtCord_24, SeenAfter_9, SeenBefore_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
        Stmts_29 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_24);
        if ((Stmts_29 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Context_33;

          Context_33 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_12);
          {
            Stmt_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Stmt_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Stmt_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Stmt_13, 2) = ((MR_Box) (Stmts_29));
            MR_hl_field(MR_mktag(0), Stmt_13, 3) = ((MR_Box) (Context_33));
          }
        }
        else
        {
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_29, (MR_Integer) 1))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_29, (MR_Integer) 0))));

          if ((Var_45 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Stmt_13 = Var_46;
          else
          {
            MR_Word Context_39;

            Context_39 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_12);
            {
              Stmt_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Stmt_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Stmt_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Stmt_13, 2) = ((MR_Box) (Stmts_29));
              MR_hl_field(MR_mktag(0), Stmt_13, 3) = ((MR_Box) (Context_39));
            }
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Default_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_13));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_stmt_return_cord__195__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Seen_20;

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Seen_20);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Seen_20));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Seen_20;

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Seen_20);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Seen_20));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Seen_19;

    ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Seen_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Seen_19));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * StmtCord_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Stmt0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 0))));
          MR_Word FuncDefns0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 1))));
          MR_Word BlockStmts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 2))));
          MR_Word Ctxt_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 3))));
          MR_Word BlockStmts_16;
          MR_Word SeenBefore0_17;
          MR_Word FuncDefns_18;
          MR_Word LocalVarDefns_19;

          ml_backend__ml_unused_assign__delete_unused_in_stmts_6_p_0(BlockStmts0_14, &BlockStmts_16, SeenAfter_9, &SeenBefore0_17, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
          ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(FuncDefns0_13, &FuncDefns_18, SeenBefore0_17, SeenBefore_10);
          ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_3_p_0(*SeenBefore_10, LocalVarDefns0_12, &LocalVarDefns_19);
          succeeded = (LocalVarDefns_19 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (FuncDefns_18 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            *StmtCord_8 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), BlockStmts_16);
          }
          else
          {
            MR_Word Stmt_20;

            {
              Stmt_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Stmt_20, 0) = ((MR_Box) (LocalVarDefns_19));
              MR_hl_field(MR_mktag(0), Stmt_20, 1) = ((MR_Box) (FuncDefns_18));
              MR_hl_field(MR_mktag(0), Stmt_20, 2) = ((MR_Box) (BlockStmts_16));
              MR_hl_field(MR_mktag(0), Stmt_20, 3) = ((MR_Box) (Ctxt_15));
            }
            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_20)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LoopKind_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 0))));
          MR_Word CondRval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 1))));
          MR_Word BodyStmt0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 2))));
          MR_Word LoopLocalVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 3))));
          MR_Word SeenAfterBody_25;
          MR_Word SeenAtBreakLoop0_26;
          MR_Word SeenAtContinueLoop0_27;
          MR_Word BodyStmt_28;
          MR_Word SeenBeforeBody_29;
          MR_Word Var_102;
          MR_Word STATE_VARIABLE_Info_103_103;
          MR_Word Var_104;
          MR_Word STATE_VARIABLE_Info_105_105;
          MR_Word Var_106;
          MR_Word Ctxt_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 4))));
          MR_Word Stmt_113;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_141;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_150;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_160;
          MR_Word Var_158;
          MR_Word Var_159;

          mercury__set__insert_list_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), LoopLocalVars_24, SeenAfter_9, &SeenAfterBody_25);
          Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
          Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
          SeenAtBreakLoop0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
          SeenAtContinueLoop0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
          Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (SeenAfter_9));
          }
          Var_146 = Var_138;
          Var_147 = Var_139;
          Var_150 = Var_141;
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (SeenAfterBody_25));
          }
          {
            STATE_VARIABLE_Info_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, 0) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, 1) = ((MR_Box) (Var_147));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, 2) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, 3) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, 4) = ((MR_Box) (Var_150));
          }
          ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(BodyStmt0_23, &BodyStmt_28, SeenAfterBody_25, &SeenBeforeBody_29, STATE_VARIABLE_Info_103_103, &STATE_VARIABLE_Info_105_105);
          ml_backend__ml_unused_assign__see_in_rval_3_p_0(CondRval_22, SeenBeforeBody_29, SeenBefore_10);
          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_4));
            MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (*SeenBefore_10));
            MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (SeenAfterBody_25));
          }
          mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenBefore is not subset of SeenAfterBody");
          Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 0))));
          Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 1))));
          Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 2))));
          Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 3))));
          Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_77 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_156));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_157));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeenAtBreakLoop0_26));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SeenAtContinueLoop0_27));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_160));
          }
          {
            Stmt_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Stmt_113, 0) = ((MR_Box) (LoopKind_21));
            MR_hl_field(MR_mktag(1), Stmt_113, 1) = ((MR_Box) (CondRval_22));
            MR_hl_field(MR_mktag(1), Stmt_113, 2) = ((MR_Box) (BodyStmt_28));
            MR_hl_field(MR_mktag(1), Stmt_113, 3) = ((MR_Box) (LoopLocalVars_24));
            MR_hl_field(MR_mktag(1), Stmt_113, 4) = ((MR_Box) (Ctxt_112));
          }
          *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_113)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ThenStmt0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 1))));
          MR_Word MaybeElseStmt0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 2))));
          MR_Word ThenStmt_32;
          MR_Word SeenBeforeThen_33;
          MR_Word MaybeElseStmt_34;
          MR_Word SeenBeforeThenElse_35;
          MR_Word STATE_VARIABLE_Info_99_99;
          MR_Word Ctxt_114 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 3))));
          MR_Word Stmt_115;
          MR_Word CondRval_116 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 0))));

          ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(ThenStmt0_30, &ThenStmt_32, SeenAfter_9, &SeenBeforeThen_33, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_99_99);
          if ((MaybeElseStmt0_31 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybeElseStmt_34 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            SeenBeforeThenElse_35 = SeenBeforeThen_33;
            *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_99_99;
          }
          else
          {
            MR_Word ElseStmt0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseStmt0_31, (MR_Integer) 0))));
            MR_Word ElseStmt_37;
            MR_Word SeenBeforeElse_38;

            ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(ElseStmt0_36, &ElseStmt_37, SeenAfter_9, &SeenBeforeElse_38, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_77);
            {
              MaybeElseStmt_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeElseStmt_34, 0) = ((MR_Box) (ElseStmt_37));
            }
            mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeThen_33, SeenBeforeElse_38, &SeenBeforeThenElse_35);
          }
          ml_backend__ml_unused_assign__see_in_rval_3_p_0(CondRval_116, SeenBeforeThenElse_35, SeenBefore_10);
          {
            Stmt_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Stmt_115, 0) = ((MR_Box) (CondRval_116));
            MR_hl_field(MR_mktag(2), Stmt_115, 1) = ((MR_Box) (ThenStmt_32));
            MR_hl_field(MR_mktag(2), Stmt_115, 2) = ((MR_Box) (MaybeElseStmt_34));
            MR_hl_field(MR_mktag(2), Stmt_115, 3) = ((MR_Box) (Ctxt_114));
          }
          *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_115)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SwitchValueType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word SwitchRval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
              MR_Word Range_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
              MR_Word Cases0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
              MR_Word Default0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))));
              MR_Word SeenAtBreakSwitch0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
              MR_Word Default_45;
              MR_Word SeenBeforeDefault_46;
              MR_Word Cases_47;
              MR_Word SeenBeforeDefaultCases_48;
              MR_Word STATE_VARIABLE_Info_94_94;
              MR_Word Var_95;
              MR_Word STATE_VARIABLE_Info_96_96;
              MR_Word STATE_VARIABLE_Info_97_97;
              MR_Word Ctxt_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));
              MR_Word Stmt_118;
              MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
              MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
              MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
              MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));
              MR_Word Var_175;
              MR_Word Var_177;
              MR_Word Var_178;
              MR_Word Var_179;
              MR_Word Var_176;

              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (SeenAfter_9));
              }
              {
                STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_166));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (Var_167));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_168));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_169));
              }
              ml_backend__ml_unused_assign__delete_unused_in_switch_default_6_p_0(Default0_43, &Default_45, SeenAfter_9, &SeenBeforeDefault_46, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_96_96);
              ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(Cases0_42, &Cases_47, SeenAfter_9, SeenBeforeDefault_46, &SeenBeforeDefaultCases_48, STATE_VARIABLE_Info_96_96, &STATE_VARIABLE_Info_97_97);
              Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_97_97, (MR_Integer) 0))));
              Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_97_97, (MR_Integer) 1))));
              Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_97_97, (MR_Integer) 2))));
              Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_97_97, (MR_Integer) 3))));
              Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_97_97, (MR_Integer) 4))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_175));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SeenAtBreakSwitch0_44));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_177));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_178));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_179));
              }
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(SwitchRval_40, SeenBeforeDefaultCases_48, SeenBefore_10);
              {
                Stmt_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Stmt_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Stmt_118, 1) = ((MR_Box) (SwitchValueType_39));
                MR_hl_field(MR_mktag(3), Stmt_118, 2) = ((MR_Box) (SwitchRval_40));
                MR_hl_field(MR_mktag(3), Stmt_118, 3) = ((MR_Box) (Range_41));
                MR_hl_field(MR_mktag(3), Stmt_118, 4) = ((MR_Box) (Cases_47));
                MR_hl_field(MR_mktag(3), Stmt_118, 5) = ((MR_Box) (Default_45));
                MR_hl_field(MR_mktag(3), Stmt_118, 6) = ((MR_Box) (Ctxt_117));
              }
              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_118)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Label_49 = ((MR_String) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word SeenAtLabelMap0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
              MR_Word SeenAtLabelMap_52;
              MR_Word _Ctxt_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
              MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
              MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
              MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
              MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Word Var_187;
              MR_Word Var_188;
              MR_Word Var_184;

              mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), ((MR_Box) (Label_49)), ((MR_Box) (SeenAfter_9)), SeenAtLabelMap0_51, &SeenAtLabelMap_52);
              Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
              Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
              Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
              Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
              Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_77 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SeenAtLabelMap_52));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_185));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_186));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_187));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_188));
              }
              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
              *SeenBefore_10 = SeenAfter_9;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word _Ctxt_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
              switch (MR_tag((MR_Word) Target_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_53)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word SeenAtBreakSwitch_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
                        MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
                        MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
                        MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
                        MR_Word Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));

                        if ((SeenAtBreakSwitch_54 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenAtBreakSwitch = no");
                            return;
                          }
                        }
                        else
                          *SeenBefore_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeenAtBreakSwitch_54, (MR_Integer) 0))));
                        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word SeenAtBreakLoop_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
                        MR_Word Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
                        MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
                        MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
                        MR_Word Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));

                        if ((SeenAtBreakLoop_55 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenAtBreakLoop = no");
                            return;
                          }
                        }
                        else
                          *SeenBefore_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeenAtBreakLoop_55, (MR_Integer) 0))));
                        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word SeenAtContinueLoop_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 3))));
                        MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
                        MR_Word Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
                        MR_Word Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
                        MR_Word Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 4))));

                        if ((SeenAtContinueLoop_56 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenAtContinueLoop = no");
                            return;
                          }
                        }
                        else
                          *SeenBefore_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeenAtContinueLoop_56, (MR_Integer) 0))));
                        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Label_120 = ((MR_String) ((MR_hl_field(MR_mktag(1), Target_53, (MR_Integer) 0))));

                    ml_backend__ml_unused_assign__get_seen_set_at_label_4_p_0(Label_120, SeenBefore_10, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word Labels_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
              MR_Word Var_84;
              MR_Word SeenBefore0_125;
              MR_Word _Ctxt_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));

              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
              Var_84 = mercury__set__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0));
              ml_backend__ml_unused_assign__accumulate_label_seen_sets_5_p_0(Labels_58, Var_84, &SeenBefore0_125, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_57, SeenBefore0_125, SeenBefore_10);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word FuncRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
              MR_Word ArgRvals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
              MR_Word ReturnValueLvals_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
              MR_Word SeenBefore1_64;
              MR_Word SeenBefore0_128;
              MR_Word _Signature_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word _CallKind_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))));
              MR_Word _Ctxt_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));
              MR_Box conv1_SeenBefore0_128;
              MR_Box conv3_SeenBefore_10;

              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[5]), ReturnValueLvals_62, ((MR_Box) (SeenAfter_9)), &conv1_SeenBefore0_128);
              SeenBefore0_128 = ((MR_Word) (conv1_SeenBefore0_128));
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(FuncRval_60, SeenBefore0_128, &SeenBefore1_64);
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[6]), ArgRvals_61, ((MR_Box) (SeenBefore1_64)), &conv3_SeenBefore_10);
              *SeenBefore_10 = ((MR_Word) (conv3_SeenBefore_10));
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ReturnValueRvals_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word Var_81;
              MR_Word _Ctxt_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
              MR_Box conv5_SeenBefore_10;

              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
              Var_81 = mercury__set__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0));
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[7]), ReturnValueRvals_65, ((MR_Box) (Var_81)), &conv5_SeenBefore_10);
              *SeenBefore_10 = ((MR_Word) (conv5_SeenBefore_10));
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word RefLval_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word GoalStmt0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
              MR_Word CommitStmt0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
              MR_Word GoalStmt_69;
              MR_Word SeenBeforeGoal_70;
              MR_Word CommitStmt_71;
              MR_Word SeenBeforeCommit_72;
              MR_Word SeenBeforeGoalCommit_73;
              MR_Word STATE_VARIABLE_Info_78_78;
              MR_Word Ctxt_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
              MR_Word Stmt_133;

              ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(GoalStmt0_67, &GoalStmt_69, SeenAfter_9, &SeenBeforeGoal_70, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_78_78);
              ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(CommitStmt0_68, &CommitStmt_71, SeenAfter_9, &SeenBeforeCommit_72, STATE_VARIABLE_Info_78_78, STATE_VARIABLE_Info_77);
              {
                Stmt_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Stmt_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Stmt_133, 1) = ((MR_Box) (RefLval_66));
                MR_hl_field(MR_mktag(3), Stmt_133, 2) = ((MR_Box) (GoalStmt_69));
                MR_hl_field(MR_mktag(3), Stmt_133, 3) = ((MR_Box) (CommitStmt_71));
                MR_hl_field(MR_mktag(3), Stmt_133, 4) = ((MR_Box) (Ctxt_132));
              }
              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_133)));
              mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeGoal_70, SeenBeforeCommit_72, &SeenBeforeGoalCommit_73);
              ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(RefLval_66, SeenBeforeGoalCommit_73, SeenBefore_10);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word RefRval_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
              MR_Word _Ctxt_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

              *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(RefRval_74, SeenAfter_9, SeenBefore_10);
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            break;
          case (MR_Integer) 8:
            {
              ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0(Stmt0_7, StmtCord_8, SeenAfter_9, SeenBefore_10);
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word StmtCord_12;
    MR_Word Stmts_19;

    ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_7, &StmtCord_12, SeenAfter_9, SeenBefore_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    Stmts_19 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_12);
    if ((Stmts_19 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Context_23;

      Context_23 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_7);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *Stmt_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmts_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_23));
      }
    }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_19, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_19, (MR_Integer) 0))));

      if ((Var_35 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *Stmt_8 = Var_36;
      else
      {
        MR_Word Context_29;

        Context_29 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_7);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmts_19));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_29));
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *SeenBefore_4 = SeenAfter_3;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word RevStmt0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word RevStmts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RevStmtCord_14;
    MR_Word RevStmtsCord_15;
    MR_Word SeenBetween_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(RevStmt0_12, &RevStmtCord_14, SeenAfter_3, &SeenBetween_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_22_22);
    ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(RevStmts0_13, &RevStmtsCord_15, SeenBetween_19, SeenBefore_4, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RevStmtCord_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevStmtsCord_15));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmts_6_p_0(
  MR_Word Stmts0_7,
  MR_Word * Stmts_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word RevStmts0_12;
    MR_Word RevStmtsCord_13;

    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Stmts0_7, &RevStmts0_12);
    ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(RevStmts0_12, &RevStmtsCord_13, SeenAfter_9, SeenBefore_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
    *Stmts_8 = mercury__cord__rev_cord_list_to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), RevStmtsCord_13);
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__accumulate_label_seen_sets_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_2,
  MR_Word * STATE_VARIABLE_Seen_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      *STATE_VARIABLE_Seen_3 = STATE_VARIABLE_Seen_0_2;
    }
    else
    {
      MR_String Label_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SeenAtLabel_16;
      MR_Word STATE_VARIABLE_Info_21_21;
      MR_Word STATE_VARIABLE_Seen_22_22;
      MR_Word SeenAtLabelMap0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      MR_Word SeenSetAtLabelPrime_32;
      MR_Box conv0_SeenSetAtLabelPrime_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Seen_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), SeenAtLabelMap0_31, ((MR_Box) (Label_12)), &conv0_SeenSetAtLabelPrime_32);
      if (succeeded)
      {
        SeenSetAtLabelPrime_32 = ((MR_Word) (conv0_SeenSetAtLabelPrime_32));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        SeenAtLabel_16 = SeenSetAtLabelPrime_32;
        STATE_VARIABLE_Info_21_21 = STATE_VARIABLE_Info_0_4;
      }
      else
      {
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
        MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));

        {
          STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__set__init_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), &SeenAtLabel_16);
      }
      mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenAtLabel_16, STATE_VARIABLE_Seen_0_2, &STATE_VARIABLE_Seen_22_22);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Labels_13;
      next_value_of_STATE_VARIABLE_Seen_0_2 = STATE_VARIABLE_Seen_22_22;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Seen_0_2 = next_value_of_STATE_VARIABLE_Seen_0_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__get_seen_set_at_label_4_p_0(
  MR_String Label_5,
  MR_Word * SeenSetAtLabel_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;
    MR_Word SeenAtLabelMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    MR_Word SeenSetAtLabelPrime_9;
    MR_Box conv0_SeenSetAtLabelPrime_9;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), SeenAtLabelMap0_8, ((MR_Box) (Label_5)), &conv0_SeenSetAtLabelPrime_9);
    if (succeeded)
    {
      SeenSetAtLabelPrime_9 = ((MR_Word) (conv0_SeenSetAtLabelPrime_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *SeenSetAtLabel_6 = SeenSetAtLabelPrime_9;
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__set__init_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenSetAtLabel_6);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unused_assign__defined_var_was_seen_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_3_p_0(
  MR_Word SeenBefore_4,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_6,
  MR_Word * STATE_VARIABLE_LocalVarDefns_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (SeenBefore_4));
    }
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Var_8, STATE_VARIABLE_LocalVarDefns_0_6, STATE_VARIABLE_LocalVarDefns_7);
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Seen_11;

    ml_backend__ml_unused_assign__see_in_outline_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Seen_11);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Seen_11));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Seen_19;

    ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Seen_19);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Seen_19));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Seen_8;

    ml_backend__ml_unused_assign__see_in_typed_rval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Seen_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Seen_8));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Seen_14;

    ml_backend__ml_unused_assign__see_in_target_component_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Seen_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Seen_14));
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * StmtCord_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8)
{
  {
    MR_bool succeeded;
    MR_Word AtomicStmt0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
    MR_Word _Ctxt_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) AtomicStmt0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
          *SeenBefore_8 = SeenAfter_7;
        }
        break;
      case (MR_Integer) 1:
        {
          *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
          *SeenBefore_8 = SeenAfter_7;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetLval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt0_9, (MR_Integer) 0))));
          MR_Word SourceRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt0_9, (MR_Integer) 1))));
          MR_Word TargetLocalVarName_15;
          MR_Word _Type_16;
          MR_Word TypeCtorInfo_47_47;

          succeeded = ((((MR_tag((MR_Word) TargetLval_13)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetLval_13, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            TargetLocalVarName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetLval_13, (MR_Integer) 1))));
            _Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetLval_13, (MR_Integer) 2))));
            TypeCtorInfo_47_47 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_47_47, ((MR_Box) (TargetLocalVarName_15)), SeenAfter_7);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            *StmtCord_6 = mercury__cord__empty_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
            *SeenBefore_8 = SeenAfter_7;
          }
          else
          {
            MR_Word SeenBefore0_17;

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(TargetLval_13, SeenAfter_7, &SeenBefore0_17);
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(SourceRval_14, SeenBefore0_17, SeenBefore_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TargetLval_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));
              MR_Word SourceRval_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 2))));
              MR_Word TargetLocalVarName_78;
              MR_Word _Type_75;
              MR_Word TypeCtorInfo_47_76;

              succeeded = ((((MR_tag((MR_Word) TargetLval_90)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetLval_90, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                TargetLocalVarName_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetLval_90, (MR_Integer) 1))));
                _Type_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetLval_90, (MR_Integer) 2))));
                TypeCtorInfo_47_76 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_47_76, ((MR_Box) (TargetLocalVarName_78)), SeenAfter_7);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                *StmtCord_6 = mercury__cord__empty_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
                *SeenBefore_8 = SeenAfter_7;
              }
              else
              {
                MR_Word SeenBefore0_82;

                *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
                ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(TargetLval_90, SeenAfter_7, &SeenBefore0_82);
                ml_backend__ml_unused_assign__see_in_rval_3_p_0(SourceRval_91, SeenBefore0_82, SeenBefore_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_18, SeenAfter_7, SeenBefore_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeNumWordsRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 5))));
              MR_Word ArgRvals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 7))));
              MR_Word SeenBefore1_26;
              MR_Word TargetLval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));
              MR_Word SeenBefore0_40;
              MR_Integer _PTag_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 2))));
              MR_Word _HasSecTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 3))));
              MR_Word _MaybeCtorId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 6))));
              MR_Word _MayUseAtomicAlloc_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 8))));
              MR_Word _MaybeAllocId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 9))));
              MR_Word _Type_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 4))));
              MR_Box conv3_SeenBefore_8;

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(TargetLval_38, SeenAfter_7, &SeenBefore0_40);
              if ((MaybeNumWordsRval_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                SeenBefore1_26 = SeenBefore0_40;
              else
              {
                MR_Word NumWordsRval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNumWordsRval_21, (MR_Integer) 0))));

                ml_backend__ml_unused_assign__see_in_rval_3_p_0(NumWordsRval_27, SeenBefore0_40, &SeenBefore1_26);
              }
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[2]), ArgRvals_23, ((MR_Box) (SeenBefore1_26)), &conv3_SeenBefore_8);
              *SeenBefore_8 = ((MR_Word) (conv3_SeenBefore_8));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TargetLval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              ml_backend__ml_unused_assign__see_in_lval_3_p_0(TargetLval_41, SeenAfter_7, SeenBefore_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SourceRval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(SourceRval_42, SeenAfter_7, SeenBefore_8);
            }
            break;
          case (MR_Integer) 5:
            {
              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              *SeenBefore_8 = SeenAfter_7;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Components_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 2))));
              MR_Word _Lang_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));
              MR_Box conv1_SeenBefore_8;

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[1]), Components_29, ((MR_Box) (SeenAfter_7)), &conv1_SeenBefore_8);
              *SeenBefore_8 = ((MR_Word) (conv1_SeenBefore_8));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word OutlineArgs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 2))));
              MR_Word ResultLvals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 3))));
              MR_Word SeenBefore0_44;
              MR_String _Code_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 4))));
              MR_Word _Lang_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt0_9, (MR_Integer) 1))));
              MR_Box conv5_SeenBefore0_44;
              MR_Box conv7_SeenBefore_8;

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[3]), ResultLvals_31, ((MR_Box) (SeenAfter_7)), &conv5_SeenBefore0_44);
              SeenBefore0_44 = ((MR_Word) (conv5_SeenBefore0_44));
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[4]), OutlineArgs_30, ((MR_Box) (SeenBefore0_44)), &conv7_SeenBefore_8);
              *SeenBefore_8 = ((MR_Word) (conv7_SeenBefore_8));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__unsee_in_top_lval_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_Seen_0_18,
  MR_Word * STATE_VARIABLE_Seen_19)
{
  switch (MR_tag((MR_Word) Lval_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      switch (MR_tag((MR_Word) Lval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BaseRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 1))));
            MR_Word FieldId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Seen_23_42;
            MR_Word _MaybePtag_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 0))));
            MR_Word _Type_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 3))));
            MR_Word _PtrType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 4))));

            ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_28, STATE_VARIABLE_Seen_0_18, &STATE_VARIABLE_Seen_23_42);
            if (((MR_tag((MR_Word) FieldId_29)) == (MR_mktag((MR_Integer) 1))))
              *STATE_VARIABLE_Seen_19 = STATE_VARIABLE_Seen_23_42;
            else
            {
              MR_Word FieldRval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_29, (MR_Integer) 0))));

              ml_backend__ml_unused_assign__see_in_rval_3_p_0(FieldRval_32, STATE_VARIABLE_Seen_23_42, STATE_VARIABLE_Seen_19);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AddrRval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0))));
            MR_Word _Type_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1))));

            ml_backend__ml_unused_assign__see_in_rval_3_p_0(AddrRval_35, STATE_VARIABLE_Seen_0_18, STATE_VARIABLE_Seen_19);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Seen_19 = STATE_VARIABLE_Seen_0_18;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Seen_19 = STATE_VARIABLE_Seen_0_18;
          break;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LocalVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
            MR_Word _Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2))));

            mercury__set__delete_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_16)), STATE_VARIABLE_Seen_0_18, STATE_VARIABLE_Seen_19);
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) Lval_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BaseRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 1))));
                MR_Word FieldId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Seen_23_42;
                MR_Word _MaybePtag_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 0))));
                MR_Word _Type_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 3))));
                MR_Word _PtrType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 4))));

                ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_28, STATE_VARIABLE_Seen_0_18, &STATE_VARIABLE_Seen_23_42);
                if (((MR_tag((MR_Word) FieldId_29)) == (MR_mktag((MR_Integer) 1))))
                  *STATE_VARIABLE_Seen_19 = STATE_VARIABLE_Seen_23_42;
                else
                {
                  MR_Word FieldRval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_29, (MR_Integer) 0))));

                  ml_backend__ml_unused_assign__see_in_rval_3_p_0(FieldRval_32, STATE_VARIABLE_Seen_23_42, STATE_VARIABLE_Seen_19);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AddrRval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0))));
                MR_Word _Type_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1))));

                ml_backend__ml_unused_assign__see_in_rval_3_p_0(AddrRval_35, STATE_VARIABLE_Seen_0_18, STATE_VARIABLE_Seen_19);
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Seen_19 = STATE_VARIABLE_Seen_0_18;
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_Seen_19 = STATE_VARIABLE_Seen_0_18;
              break;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_lval_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_Seen_0_19,
  MR_Word * STATE_VARIABLE_Seen_20)
{
  switch (MR_tag((MR_Word) Lval_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word BaseRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 1))));
        MR_Word FieldId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_Seen_23_23;
        MR_Word _MaybePtag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 0))));
        MR_Word _Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 3))));
        MR_Word _PtrType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 4))));

        ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_7, STATE_VARIABLE_Seen_0_19, &STATE_VARIABLE_Seen_23_23);
        if (((MR_tag((MR_Word) FieldId_8)) == (MR_mktag((MR_Integer) 1))))
          *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_23_23;
        else
        {
          MR_Word FieldRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_8, (MR_Integer) 0))));

          ml_backend__ml_unused_assign__see_in_rval_3_p_0(FieldRval_11, STATE_VARIABLE_Seen_23_23, STATE_VARIABLE_Seen_20);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AddrRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0))));
        MR_Word _Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1))));

        ml_backend__ml_unused_assign__see_in_rval_3_p_0(AddrRval_14, STATE_VARIABLE_Seen_0_19, STATE_VARIABLE_Seen_20);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LocalVarName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
            MR_Word _Type_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2))));

            mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_15)), STATE_VARIABLE_Seen_0_19, STATE_VARIABLE_Seen_20);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_Seen_0_19,
  MR_Word * STATE_VARIABLE_Seen_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Lval_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BaseRval_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
                MR_Word FieldId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Seen_23_53;
                MR_Word _MaybePtag_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0))));
                MR_Word _Type_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
                MR_Word _PtrType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

                ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_39, STATE_VARIABLE_Seen_0_19, &STATE_VARIABLE_Seen_23_53);
                if (((MR_tag((MR_Word) FieldId_40)) == (MR_mktag((MR_Integer) 1))))
                  *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_23_53;
                else
                {
                  MR_Word FieldRval_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_40, (MR_Integer) 0))));
                  MR_Word next_value_of_Rval_4 = FieldRval_43;
                  MR_Word next_value_of_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_23_53;

                  // direct tailcall eliminated
                  Rval_4 = next_value_of_Rval_4;
                  STATE_VARIABLE_Seen_0_19 = next_value_of_STATE_VARIABLE_Seen_0_19;
                  continue;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AddrRval_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
                MR_Word _Type_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_Rval_4 = AddrRval_46;

                // direct tailcall eliminated
                Rval_4 = next_value_of_Rval_4;
                continue;
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LocalVarName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                    MR_Word _Type_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                    mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_47)), STATE_VARIABLE_Seen_0_19, STATE_VARIABLE_Seen_20);
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Integer _Ptag_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4 = SubRval_8;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
            break;
          case (MR_Integer) 2:
            {
              MR_Word BaseRvalA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word _Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4 = BaseRvalA_11;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseRvalA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word _Type_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4 = BaseRvalA_31;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word BaseRvalA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word _Type_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4 = BaseRvalA_29;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word BaseRvalA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word _Unop_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4 = BaseRvalA_32;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BaseRvalB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Seen_21_21;
              MR_Word BaseRvalA_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word _Binop_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4;
              MR_Word next_value_of_STATE_VARIABLE_Seen_0_19;

              ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRvalA_28, STATE_VARIABLE_Seen_0_19, &STATE_VARIABLE_Seen_21_21);
              // direct tailcall eliminated
              next_value_of_Rval_4 = BaseRvalB_14;
              next_value_of_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_21_21;
              Rval_4 = next_value_of_Rval_4;
              STATE_VARIABLE_Seen_0_19 = next_value_of_STATE_VARIABLE_Seen_0_19;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Lval_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word BaseRval_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_30, (MR_Integer) 1))));
                    MR_Word FieldId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_30, (MR_Integer) 2))));
                    MR_Word STATE_VARIABLE_Seen_23_79;
                    MR_Word _MaybePtag_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_30, (MR_Integer) 0))));
                    MR_Word _Type_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_30, (MR_Integer) 3))));
                    MR_Word _PtrType_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_30, (MR_Integer) 4))));

                    ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_65, STATE_VARIABLE_Seen_0_19, &STATE_VARIABLE_Seen_23_79);
                    if (((MR_tag((MR_Word) FieldId_66)) == (MR_mktag((MR_Integer) 1))))
                      *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_23_79;
                    else
                    {
                      MR_Word FieldRval_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_66, (MR_Integer) 0))));
                      MR_Word next_value_of_Rval_4 = FieldRval_69;
                      MR_Word next_value_of_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_23_79;

                      // direct tailcall eliminated
                      Rval_4 = next_value_of_Rval_4;
                      STATE_VARIABLE_Seen_0_19 = next_value_of_STATE_VARIABLE_Seen_0_19;
                      continue;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word AddrRval_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_30, (MR_Integer) 0))));
                    MR_Word _Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_30, (MR_Integer) 1))));
                    MR_Word next_value_of_Rval_4 = AddrRval_72;

                    // direct tailcall eliminated
                    Rval_4 = next_value_of_Rval_4;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_30, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word LocalVarName_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_30, (MR_Integer) 1))));
                        MR_Word _Type_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_30, (MR_Integer) 2))));

                        mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_73)), STATE_VARIABLE_Seen_0_19, STATE_VARIABLE_Seen_20);
                      }
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_4 = SubRval_33;

              // direct tailcall eliminated
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unused_assign____Unify____seen_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unused_assign____Compare____seen_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unused_assign____Unify____ua_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unused_assign____Compare____ua_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_unused_assign__init(void)
{
}

void mercury__ml_backend__ml_unused_assign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_original_or_optimized_code_0);
	MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_at_label_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_set_0);
	MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_ua_info_0);
}

void mercury__ml_backend__ml_unused_assign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unused_assign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unused_assign.
