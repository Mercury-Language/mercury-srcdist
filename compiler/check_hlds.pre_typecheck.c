/*
** Automatically generated from `pre_typecheck.m'
** by the Mercury compiler,
** version rotd-2026-03-20
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


// :- module check_hlds.pre_typecheck.
// :- implementation.

/*
INIT mercury__check_hlds__pre_typecheck__init
ENDINIT
*/

#include "check_hlds.pre_typecheck.mih"


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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_vars.mih"
#include "hlds.headvar_names.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__pre_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_EnumFunctorDesc check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_0;

static const MR_EnumFunctorDesc check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_1;

static const MR_EnumFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_ordinal_ordered_are_all_clauses_facts_0[2];

static const MR_EnumFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_name_ordered_are_all_clauses_facts_0[2];

static const MR_Integer check_hlds__pre_typecheck__check_hlds__pre_typecheck__functor_number_map_are_all_clauses_facts_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo check_hlds__pre_typecheck__check_hlds__pre_typecheck__field_types_init_and_final_0_0[2];

static const MR_ConstString check_hlds__pre_typecheck__check_hlds__pre_typecheck__field_names_init_and_final_0_0[2];

static const MR_DuFunctorDesc check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_functor_desc_init_and_final_0_0;

static const MR_DuFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_stag_ordered_init_and_final_0_0[1];

static const MR_DuPtagLayout check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_ptag_ordered_init_and_final_0[1];

static const MR_DuFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_name_ordered_init_and_final_0[1];

static const MR_Integer check_hlds__pre_typecheck__check_hlds__pre_typecheck__functor_number_map_init_and_final_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__pre_typecheck__tree234__ti_tree234_2builtin__type_ctor_info_uint_0check_hlds__pre_typecheck__type_ctor_info_init_and_final_0;

static MR_bool MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__pred__arg_num_pieces__645__1_2_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__pred__arg_num_pieces__643__1_2_p_0(
  MR_Integer HeadVar__1_15,
  MR_Integer HeadVar__2_17);

static MR_String MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_unneeded_initial_final_statevar__578__1_1_f_0(
  MR_String LambdaHeadVar__1_35);

static MR_String MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_unneeded_final_statevar__552__1_1_f_0(
  MR_String LambdaHeadVar__1_32);

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__pre_typecheck____Compare____are_all_clauses_facts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____are_all_clauses_facts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__proc_args_are_free_of_declared_uniqueness_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Unsigned InitArgNum_6,
  MR_Unsigned FinalArgNum_7,
  MR_Word ProcInfo_8);

static void MR_CALL 
check_hlds__pre_typecheck__gather_clause_body_non_svar_copy_vars_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_BodyVars_0_8,
  MR_Word * STATE_VARIABLE_BodyVars_9);

static MR_Box MR_CALL 
check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word BodyVarSVarNameSet_12,
  MR_Word HeadClauseContext_13,
  MR_Word TailClauses_14,
  MR_Unsigned InitArgNum_15,
  MR_Word InitAndFinal_16,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static MR_Box MR_CALL 
check_hlds__pre_typecheck__warn_about_unneeded_initial_final_statevar_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_unneeded_initial_final_statevar_8_p_0(
  MR_Word PredInfo_9,
  MR_Word HeadClauseContext_10,
  MR_Word TailClauses_11,
  MR_Unsigned InitArgNum_12,
  MR_Unsigned FinalArgNum_13,
  MR_Word SVarNameSet_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__arg_num_pieces_2_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__arg_num_pieces_2_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
check_hlds__pre_typecheck__arg_num_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Unsigned ArgNum_5);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_initial_statevars_in_clause_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word AllClausesInitArgs_10,
  MR_Word InitAndFinalMap_11,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_110_101_101_100_101_100_95_105_110_105_116_105_97_108_95_115_116_97_116_101_118_97_114_115_95_105_110_95_99_108_97_117_115_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_110_101_101_100_101_100_95_105_110_105_116_105_97_108_95_115_116_97_116_101_118_97_114_115_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word PredInfo_1,
  MR_Word HeadVars_2,
  MR_Word ClauseContext_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__pre_typecheck__prepare_for_typecheck_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadVarNames_8,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
check_hlds__pre_typecheck__build_init_and_final_map_7_p_0(
  MR_Word IsFirst_8,
  MR_Word Clause_9,
  MR_Word * ClauseInitArgs_10,
  MR_Word STATE_VARIABLE_InitAndFinalMap_0_17,
  MR_Word * STATE_VARIABLE_InitAndFinalMap_18,
  MR_Word STATE_VARIABLE_MaybeAllFacts_0_19,
  MR_Word * STATE_VARIABLE_MaybeAllFacts_20);

static void MR_CALL 
check_hlds__pre_typecheck__collect_init_and_final_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ClauseInitArgs_0_3,
  MR_Word * STATE_VARIABLE_ClauseInitArgs_4,
  MR_Word STATE_VARIABLE_InitAndFinalMap_0_5,
  MR_Word * STATE_VARIABLE_InitAndFinalMap_6,
  MR_Word STATE_VARIABLE_KeepAliveSet_0_7,
  MR_Word * STATE_VARIABLE_KeepAliveSet_8);

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____are_all_clauses_facts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__pre_typecheck____Compare____are_all_clauses_facts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_1[56][2];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_4[2][10];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_5[1][4];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_6[2][6];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_7[1][12];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_8[3][5];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_9[1][7];




static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_1[56][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: state variable"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "never updated"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[14]))),
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
    ((MR_Box) ((MR_String) "replaced with an ordinary variable."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this clause, so it should be"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could be deleted,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its value"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as its initial value."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[16])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they are not used"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as the initial value."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[16])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and because the final value"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "represented by the state variable"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "represented by one of the state variables"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in each clause,"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in each clause"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in any clause"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the function return value"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_6[0])),
    ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_8[2])),
    ((MR_Box) (check_hlds__pre_typecheck__warn_about_unneeded_initial_final_statevar_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_8[2])),
    ((MR_Box) (check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 232U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 210U) },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_4[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_is_first_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_are_all_clauses_facts_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_are_all_clauses_facts_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_5[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_4[0])),
    ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__pre_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_8[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__pre_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__pre_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0) }
};

static const MR_EnumFunctorDesc check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_0 = {
  (MR_String) "some_clause_is_not_a_fact",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_1 = {
  (MR_String) "all_clauses_are_facts",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_ordinal_ordered_are_all_clauses_facts_0[2] = {
  &check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_0,
  &check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_name_ordered_are_all_clauses_facts_0[2] = {
  &check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_1,
  &check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_functor_desc_are_all_clauses_facts_0_0
};

static const MR_Integer check_hlds__pre_typecheck__check_hlds__pre_typecheck__functor_number_map_are_all_clauses_facts_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_are_all_clauses_facts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__pre_typecheck____Unify____are_all_clauses_facts_0_0_10001)),
  ((MR_Box) (check_hlds__pre_typecheck____Compare____are_all_clauses_facts_0_0_10001)),
  (MR_String) "check_hlds.pre_typecheck",
  (MR_String) "are_all_clauses_facts",
  { check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_name_ordered_are_all_clauses_facts_0 },
  { check_hlds__pre_typecheck__check_hlds__pre_typecheck__enum_ordinal_ordered_are_all_clauses_facts_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__pre_typecheck__check_hlds__pre_typecheck__functor_number_map_are_all_clauses_facts_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo check_hlds__pre_typecheck__check_hlds__pre_typecheck__field_types_init_and_final_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&check_hlds__pre_typecheck__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString check_hlds__pre_typecheck__check_hlds__pre_typecheck__field_names_init_and_final_0_0[2] = {
  (MR_String) "iaf_final_arg_num",
  (MR_String) "iaf_names"
};

static const MR_DuFunctorDesc check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_functor_desc_init_and_final_0_0 = {
  (MR_String) "init_and_final",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__pre_typecheck__check_hlds__pre_typecheck__field_types_init_and_final_0_0,
  check_hlds__pre_typecheck__check_hlds__pre_typecheck__field_names_init_and_final_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_stag_ordered_init_and_final_0_0[1] = { &check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_functor_desc_init_and_final_0_0 };

static const MR_DuPtagLayout check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_ptag_ordered_init_and_final_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_stag_ordered_init_and_final_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_name_ordered_init_and_final_0[1] = { &check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_functor_desc_init_and_final_0_0 };

static const MR_Integer check_hlds__pre_typecheck__check_hlds__pre_typecheck__functor_number_map_init_and_final_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__pre_typecheck____Unify____init_and_final_0_0_10001)),
  ((MR_Box) (check_hlds__pre_typecheck____Compare____init_and_final_0_0_10001)),
  (MR_String) "check_hlds.pre_typecheck",
  (MR_String) "init_and_final",
  { check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_name_ordered_init_and_final_0 },
  { check_hlds__pre_typecheck__check_hlds__pre_typecheck__du_ptag_ordered_init_and_final_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__pre_typecheck__check_hlds__pre_typecheck__functor_number_map_init_and_final_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__pre_typecheck__tree234__ti_tree234_2builtin__type_ctor_info_uint_0check_hlds__pre_typecheck__type_ctor_info_init_and_final_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_TypeInfo) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__pre_typecheck____Unify____init_and_final_map_0_0_10001)),
  ((MR_Box) (check_hlds__pre_typecheck____Compare____init_and_final_map_0_0_10001)),
  (MR_String) "check_hlds.pre_typecheck",
  (MR_String) "init_and_final_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__pre_typecheck__tree234__ti_tree234_2builtin__type_ctor_info_uint_0check_hlds__pre_typecheck__type_ctor_info_init_and_final_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__pred__arg_num_pieces__645__1_2_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded = (HeadVar__1_21 == HeadVar__2_22);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__pred__arg_num_pieces__643__1_2_p_0(
  MR_Integer HeadVar__1_15,
  MR_Integer HeadVar__2_17)
{
  MR_bool succeeded = (HeadVar__1_15 == HeadVar__2_17);

  return succeeded;
}

static MR_String MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_unneeded_initial_final_statevar__578__1_1_f_0(
  MR_String LambdaHeadVar__1_35)
{
  MR_String LambdaHeadVar__2_36;

  LambdaHeadVar__2_36 = mercury__string__f_43_43_2_f_0((MR_String) "!", LambdaHeadVar__1_35);
  return LambdaHeadVar__2_36;
}

static MR_String MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_unneeded_final_statevar__552__1_1_f_0(
  MR_String LambdaHeadVar__1_32)
{
  MR_String LambdaHeadVar__2_33;

  LambdaHeadVar__2_33 = mercury__string__f_43_43_2_f_0((MR_String) "!:", LambdaHeadVar__1_32);
  return LambdaHeadVar__2_33;
}

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_0_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck____Compare____are_all_clauses_facts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____are_all_clauses_facts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__proc_args_are_free_of_declared_uniqueness_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Unsigned InitArgNum_6,
  MR_Unsigned FinalArgNum_7,
  MR_Word ProcInfo_8)
{
  MR_bool succeeded;
  MR_Word MaybeDeclArgModes_9;

  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_8, &MaybeDeclArgModes_9);
  if ((MaybeDeclArgModes_9 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgModes_10 = ((MR_Word) ((MR_hl_field(1, MaybeDeclArgModes_9, 0))));
    MR_Word InitArgMode_11;
    MR_Word FinalArgMode_12;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Box conv0_InitArgMode_11;
    MR_Box conv1_FinalArgMode_12;

    Var_13 = mercury__uint__cast_to_int_1_f_0(InitArgNum_6);
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_10, Var_13, &conv0_InitArgMode_11);
    InitArgMode_11 = ((MR_Word) (conv0_InitArgMode_11));
    Var_14 = mercury__uint__cast_to_int_1_f_0(FinalArgNum_7);
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_10, Var_14, &conv1_FinalArgMode_12);
    FinalArgMode_12 = ((MR_Word) (conv1_FinalArgMode_12));
    succeeded = hlds__mode_util__mode_is_free_of_uniqueness_2_p_0(ModuleInfo_5, InitArgMode_11);
    if (succeeded)
      succeeded = hlds__mode_util__mode_is_free_of_uniqueness_2_p_0(ModuleInfo_5, FinalArgMode_12);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck__gather_clause_body_non_svar_copy_vars_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_BodyVars_0_8,
  MR_Word * STATE_VARIABLE_BodyVars_9)
{
  MR_Word BodyGoal_6;
  MR_Word BodyGoalVars_7;

  BodyGoal_6 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
  hlds__goal_vars__non_svar_copy_vars_in_goal_2_p_0(BodyGoal_6, &BodyGoalVars_7);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BodyGoalVars_7, STATE_VARIABLE_BodyVars_0_8, STATE_VARIABLE_BodyVars_9);
}

static MR_Box MR_CALL 
check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_33;

  conv0_LambdaHeadVar__2_33 = check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_unneeded_final_statevar__552__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__pre_typecheck__proc_args_are_free_of_declared_uniqueness_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word BodyVarSVarNameSet_12,
  MR_Word HeadClauseContext_13,
  MR_Word TailClauses_14,
  MR_Unsigned InitArgNum_15,
  MR_Word InitAndFinal_16,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_Unsigned FinalArgNum_18 = ((MR_Unsigned) ((MR_hl_field(0, InitAndFinal_16, 0))));
  MR_Word SVarNameSet_19 = ((MR_Word) ((MR_hl_field(0, InitAndFinal_16, 1))));
  MR_Word SVarNameSetInBody_20;

  mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BodyVarSVarNameSet_12, SVarNameSet_19, &SVarNameSetInBody_20);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SVarNameSetInBody_20);
  if (succeeded)
  {
    MR_Word ProcTable_24;
    MR_Word ProcInfos_25;
    MR_Word Var_26;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_24);
    mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_24, &ProcInfos_25);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_9[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) (InitArgNum_15));
      MR_hl_field(0, Var_26, 5) = ((MR_Box) (FinalArgNum_18));
    }
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_26, ProcInfos_25);
    if (succeeded)
    {
      MR_Word PredNameColonPieces_29;
      MR_Word SVarNames_30;
      MR_Word BangColonSVarNames_31;
      MR_Word RepresentedByCommaPieces_32;
      MR_Word InEachClausePieces_33;
      MR_Word FinalArgPieces_34;
      MR_Word Pieces_35;
      MR_Word Spec_36;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_54;

      PredNameColonPieces_29 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[6])), PredInfo_11);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SVarNameSet_19, &SVarNames_30);
      BangColonSVarNames_31 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[3]), SVarNames_30);
      if ((BangColonSVarNames_31 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.pre_typecheck.represented_by_svar_names_pieces\'/1", (MR_String) "BangSVarNames = []");
          return;
        }
      else
      {
        MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, BangColonSVarNames_31, 1))));
        MR_String Var_96 = ((MR_String) ((MR_hl_field(1, BangColonSVarNames_31, 0))));

        if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;

          {
            Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_74, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[25])));
          }
          Var_72 = parse_tree__error_spec__color_as_subject_1_f_0(Var_73);
          RepresentedByCommaPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[42])), Var_72);
        }
        else
        {
          MR_Word Var_84;
          MR_Word Var_85;

          Var_85 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BangColonSVarNames_31);
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[46])));
          RepresentedByCommaPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[44])), Var_84);
        }
      }
      if ((TailClauses_14 == (MR_Word) ((MR_Unsigned) 0U)))
        InEachClausePieces_33 = (MR_Word) ((MR_Unsigned) 0U);
      else
        InEachClausePieces_33 = (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[48]));
      FinalArgPieces_34 = check_hlds__pre_typecheck__arg_num_pieces_2_f_0(PredInfo_11, FinalArgNum_18);
      Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[27])));
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InEachClausePieces_33, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[31])));
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[29])), Var_54);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_52);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), RepresentedByCommaPieces_32, Var_49);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[25])), Var_48);
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FinalArgPieces_34, Var_46);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[23])), Var_45);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_29, Var_43);
      Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[8])), Var_42);
      {
        Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_unneeded_final_statevar\'/7"));
        MR_hl_field(0, Spec_36, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__pre_typecheck_scalar_common_3[1])));
        MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_36, 3) = ((MR_Box) (HeadClauseContext_13));
        MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_35));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
      }
    }
    else
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
  }
  else
    check_hlds__pre_typecheck__warn_about_unneeded_initial_final_statevar_8_p_0(PredInfo_11, HeadClauseContext_13, TailClauses_14, InitArgNum_15, FinalArgNum_18, SVarNameSet_19, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
}

static MR_Box MR_CALL 
check_hlds__pre_typecheck__warn_about_unneeded_initial_final_statevar_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_36;

  conv0_LambdaHeadVar__2_36 = check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_unneeded_initial_final_statevar__578__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_36));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_unneeded_initial_final_statevar_8_p_0(
  MR_Word PredInfo_9,
  MR_Word HeadClauseContext_10,
  MR_Word TailClauses_11,
  MR_Unsigned InitArgNum_12,
  MR_Unsigned FinalArgNum_13,
  MR_Word SVarNameSet_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameColonPieces_16;
  MR_Word SVarNames_17;
  MR_Word BangSVarNames_18;
  MR_Word RepresentedByCommaPieces_20;
  MR_Word InAnyClausePieces_21;
  MR_Word InitArgPieces_22;
  MR_Word FinalArgPieces_23;
  MR_Word Pieces_24;
  MR_Word Spec_25;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_69;
  MR_Word Var_74;

  PredNameColonPieces_16 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[6])), PredInfo_9);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SVarNameSet_14, &SVarNames_17);
  BangSVarNames_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[2]), SVarNames_17);
  if ((BangSVarNames_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.pre_typecheck.represented_by_svar_names_pieces\'/1", (MR_String) "BangSVarNames = []");
      return;
    }
  else
  {
    MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, BangSVarNames_18, 1))));
    MR_String Var_130 = ((MR_String) ((MR_hl_field(1, BangSVarNames_18, 0))));

    if ((Var_129 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;

      {
        Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[25])));
      }
      Var_106 = parse_tree__error_spec__color_as_subject_1_f_0(Var_107);
      RepresentedByCommaPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[42])), Var_106);
    }
    else
    {
      MR_Word Var_118;
      MR_Word Var_119;

      Var_119 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BangSVarNames_18);
      Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_119, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[46])));
      RepresentedByCommaPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[44])), Var_118);
    }
  }
  if ((TailClauses_11 == (MR_Word) ((MR_Unsigned) 0U)))
    InAnyClausePieces_21 = (MR_Word) ((MR_Unsigned) 0U);
  else
    InAnyClausePieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[50]));
  InitArgPieces_22 = check_hlds__pre_typecheck__arg_num_pieces_2_f_0(PredInfo_9, InitArgNum_12);
  FinalArgPieces_23 = check_hlds__pre_typecheck__arg_num_pieces_2_f_0(PredInfo_9, FinalArgNum_13);
  Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[27])));
  Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InAnyClausePieces_21, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[40])));
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[35])), Var_74);
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_69);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), RepresentedByCommaPieces_20, Var_63);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[25])), Var_62);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FinalArgPieces_23, Var_57);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[33])), Var_56);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitArgPieces_22, Var_51);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[23])), Var_50);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_16, Var_43);
  Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[8])), Var_42);
  {
    Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_unneeded_initial_final_statevar\'/8"));
    MR_hl_field(0, Spec_25, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__pre_typecheck_scalar_common_3[1])));
    MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_25, 3) = ((MR_Box) (HeadClauseContext_10));
    MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Pieces_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_27 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
  }
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__arg_num_pieces_2_f_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__pre_typecheck__IntroducedFrom__pred__arg_num_pieces__645__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__arg_num_pieces_2_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__pre_typecheck__IntroducedFrom__pred__arg_num_pieces__643__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__pre_typecheck__arg_num_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Unsigned ArgNum_5)
{
  MR_bool succeeded;
  MR_Word ArgPieces_6;
  MR_Word ClausesInfo_7;
  MR_Word ArgVector_8;
  MR_Word UserArgs_9;
  MR_Integer NumUserArgs_10;
  MR_Integer Var_11;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_4, &ClausesInfo_7);
  hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo_7, &ArgVector_8);
  UserArgs_9 = hlds__hlds_args__proc_arg_vector_get_user_args_1_f_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), ArgVector_8);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), UserArgs_9, &NumUserArgs_10);
  Var_11 = mercury__uint__cast_to_int_1_f_0(ArgNum_5);
  succeeded = (Var_11 > NumUserArgs_10);
  if (succeeded)
  {
    MR_Word Var_12;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) NumUserArgs_10 + (MR_Unsigned) 1);
    MR_Integer Var_17;
    MR_Word Var_18;
    MR_Word Var_21;

    Var_17 = mercury__uint__cast_to_int_1_f_0(ArgNum_5);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_8[0]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__pre_typecheck__arg_num_pieces_2_f_0_1));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_15));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_17));
    }
    mercury__require__expect_3_p_0(Var_12, (MR_String) "function \140check_hlds.pre_typecheck.arg_num_pieces\'/2", (MR_String) "ArgNum is not numbered correctly for return value");
    Var_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_4);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_8[1]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__pre_typecheck__arg_num_pieces_2_f_0_2));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (Var_21));
      MR_hl_field(0, Var_18, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_18, (MR_String) "function \140check_hlds.pre_typecheck.arg_num_pieces\'/2", (MR_String) "PredInfo is not a function");
    ArgPieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[52]));
  }
  else
  {
    MR_Word Var_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (ArgNum_5));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[55])));
    }
    {
      ArgPieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgPieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[53])));
      MR_hl_field(1, ArgPieces_6, 1) = ((MR_Box) (Var_28));
    }
  }
  return ArgPieces_6;
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_initial_statevars_in_clause_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word AllClausesInitArgs_10,
  MR_Word InitAndFinalMap_11,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_110_101_101_100_101_100_95_105_110_105_116_105_97_108_95_115_116_97_116_101_118_97_114_115_95_105_110_95_99_108_97_117_115_101_95_95_91_51_44_32_52_93_95_48_7_p_0(PredInfo_8, HeadVarNames_9, Clause_12, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
}

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_110_101_101_100_101_100_95_105_110_105_116_105_97_108_95_115_116_97_116_101_118_97_114_115_95_105_110_95_99_108_97_117_115_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word ClauseContext_17 = ((MR_Word) ((MR_hl_field(0, Clause_12, 3))));
  MR_Word UnusedSVarArgMap_19 = ((MR_Word) ((MR_hl_field(0, Clause_12, 5))));
  MR_Word UnusedSVarArgAL_21;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), UnusedSVarArgMap_19, &UnusedSVarArgAL_21);
  check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_110_101_101_100_101_100_95_105_110_105_116_105_97_108_95_115_116_97_116_101_118_97_114_115_95_95_91_51_44_32_52_93_95_48_8_p_0(PredInfo_8, HeadVarNames_9, ClauseContext_17, UnusedSVarArgAL_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
}

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_110_101_101_100_101_100_95_105_110_105_116_105_97_108_95_115_116_97_116_101_118_97_114_115_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word PredInfo_1,
  MR_Word HeadVars_2,
  MR_Word ClauseContext_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word ArgDesc_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word ArgDescs_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Unsigned ArgNum_25 = ((MR_Unsigned) ((MR_hl_field(0, ArgDesc_22, 0))));
      MR_Word InitOrFinal_26;
      MR_String SVarName_27;
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, ArgDesc_22, 1))));
      MR_Word STATE_VARIABLE_Specs_1_87;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      InitOrFinal_26 = ((MR_Word) ((MR_hl_field(0, Var_38, 0))));
      SVarName_27 = ((MR_String) ((MR_hl_field(0, Var_38, 1))));
      switch (MR_tag((MR_Word) InitOrFinal_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(InitOrFinal_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgName_29;
                MR_Integer Var_39;
                MR_Box conv0_ArgName_29;
                MR_String Var_90;

                Var_39 = mercury__uint__cast_to_int_1_f_0(ArgNum_25);
                mercury__list__det_index1_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVars_2, Var_39, &conv0_ArgName_29);
                ArgName_29 = ((MR_String) (conv0_ArgName_29));
                Var_90 = hlds__make_hlds__state_var__initial_state_var_name_1_f_0(SVarName_27);
                succeeded = (strcmp(ArgName_29, Var_90) == 0);
                if (succeeded)
                {
                  MR_Word PredNameColonPieces_91;
                  MR_Word Pieces_92;
                  MR_Word Spec_94;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_102;
                  MR_Word Var_103;
                  MR_Word Var_104;
                  MR_Word Var_105;
                  MR_String Var_106;
                  MR_Word Var_108;
                  MR_Word Var_110;
                  MR_Word Var_111;

                  PredNameColonPieces_91 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[6])), PredInfo_1);
                  Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "!.", SVarName_27);
                  {
                    Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
                  }
                  {
                    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
                    MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_103 = parse_tree__error_spec__color_as_subject_1_f_0(Var_104);
                  Var_111 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[15])));
                  Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[20])));
                  Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[13])), Var_110);
                  Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, Var_108);
                  Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[11])), Var_102);
                  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_91, Var_100);
                  Pieces_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[8])), Var_99);
                  {
                    Spec_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_94, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_any_unneeded_initial_statevars\'/8"));
                    MR_hl_field(0, Spec_94, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__pre_typecheck_scalar_common_3[0])));
                    MR_hl_field(0, Spec_94, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_94, 3) = ((MR_Box) (ClauseContext_5));
                    MR_hl_field(0, Spec_94, 4) = ((MR_Box) (Pieces_92));
                  }
                  {
                    STATE_VARIABLE_Specs_1_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_1_87, 0) = ((MR_Box) (Spec_94));
                    MR_hl_field(1, STATE_VARIABLE_Specs_1_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
                  }
                }
                else
                  STATE_VARIABLE_Specs_1_87 = STATE_VARIABLE_Specs_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredNameColonPieces_31;
                MR_Word Pieces_32;
                MR_Word Spec_34;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_String Var_62;
                MR_Word Var_64;
                MR_Word Var_69;
                MR_Word Var_70;

                PredNameColonPieces_31 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[6])), PredInfo_1);
                Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_27);
                {
                  Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_61, 1) = ((MR_Box) (Var_62));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_59 = parse_tree__error_spec__color_as_subject_1_f_0(Var_60);
                Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[15])));
                Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[20])));
                Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[13])), Var_69);
                Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
                Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[11])), Var_58);
                Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_31, Var_51);
                Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[8])), Var_50);
                {
                  Spec_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_any_unneeded_initial_statevars\'/8"));
                  MR_hl_field(0, Spec_34, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__pre_typecheck_scalar_common_3[0])));
                  MR_hl_field(0, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                  MR_hl_field(0, Spec_34, 3) = ((MR_Box) (ClauseContext_5));
                  MR_hl_field(0, Spec_34, 4) = ((MR_Box) (Pieces_32));
                }
                {
                  STATE_VARIABLE_Specs_1_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_87, 0) = ((MR_Box) (Spec_34));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1_87 = STATE_VARIABLE_Specs_0_7;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ArgDescs_23;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_87;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__pre_typecheck__prepare_for_typecheck_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word OrigValidPredIdSet_7;
  MR_Word PredIdTable0_8;
  MR_Word PredIdsInfos0_9;
  MR_Word PredIdsInfos_10;
  MR_Word PredIdTable_11;

  hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &OrigValidPredIdSet_7);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &PredIdTable0_8);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_8, &PredIdsInfos0_9);
  check_hlds__pre_typecheck__prepare_for_typecheck_6_p_0(STATE_VARIABLE_ModuleInfo_0_12, OrigValidPredIdSet_7, PredIdsInfos0_9, &PredIdsInfos_10, STATE_VARIABLE_Specs_0_14, STATE_VARIABLE_Specs_15);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_10, &PredIdTable_11);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

static void MR_CALL 
check_hlds__pre_typecheck__prepare_for_typecheck_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
  }
  else
  {
    MR_Word PredIdInfo0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word PredIdsInfos0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word PredIdInfo_16;
    MR_Word PredIdsInfos_17;
    MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_14, 0))));
    MR_Word STATE_VARIABLE_PredInfo_1_29 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_14, 1))));
    MR_Word STATE_VARIABLE_Specs_1_33;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_2, ((MR_Box) (PredId_20)));
    if (succeeded)
    {
      MR_Word GoalIdClausesInfo0_21;
      MR_Word GoalIdClausesInfo_23;
      MR_Word Globals_24;
      MR_Word MaybeLookForUnusedSVars_25;
      MR_Word STATE_VARIABLE_PredInfo_2_30;
      MR_Word STATE_VARIABLE_PredInfo_3_31;
      MR_Word STATE_VARIABLE_PredInfo_4_32;
      MR_Word PredStatus_35;
      MR_Word ClausesInfo0_36;
      MR_Word ClausesRep0_37;
      MR_Word _ContainingGoalMap_22;
      MR_Word _ItemNumbers0_38;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_1_29, &GoalIdClausesInfo0_21);
      hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(ModuleInfo_1, &_ContainingGoalMap_22, GoalIdClausesInfo0_21, &GoalIdClausesInfo_23);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(GoalIdClausesInfo_23, STATE_VARIABLE_PredInfo_1_29, &STATE_VARIABLE_PredInfo_2_30);
      hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_2_30, &PredStatus_35);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_2_30, &ClausesInfo0_36);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_36, &ClausesRep0_37, &_ItemNumbers0_38);
      succeeded = hlds__hlds_pred__pred_info_is_field_access_function_5_p_0(ModuleInfo_1, STATE_VARIABLE_PredInfo_2_30, &Var_39, &Var_40, &Var_41);
      if (succeeded)
      {
        Var_67 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_37);
        succeeded = (Var_67 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_35);
          succeeded = (Var_68 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word ArgVector_42;
        MR_Word FuncArgs_43;
        MR_Word FuncRetVal_44;
        MR_Word Context_45;
        MR_Word FuncModule_46;
        MR_String FuncName_47;
        MR_Word PredFormArity_48;
        MR_Word UserArity_49;
        MR_Integer UserArityInt_50;
        MR_Word FuncSymName_51;
        MR_Word FuncDuCtor_52;
        MR_Word FuncConsId_53;
        MR_Word FuncRHS_54;
        MR_Word Goal0_55;
        MR_Word GoalExpr_56;
        MR_Word GoalInfo0_57;
        MR_Word NonLocals_58;
        MR_Word GoalInfo_59;
        MR_Word Goal_60;
        MR_Word Clause_61;
        MR_Word ClausesRep_62;
        MR_Word ItemNumbers_63;
        MR_Word ClausesInfo_64;
        MR_Word Markers0_65;
        MR_Word Markers_66;
        MR_Word Var_70;
        MR_Word Var_74;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word STATE_VARIABLE_PredInfo_1_83;
        MR_Word STATE_VARIABLE_PredInfo_2_84;
        MR_Box conv0_FuncRetVal_44;

        hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo0_36, &ArgVector_42);
        hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), ArgVector_42, &FuncArgs_43, &conv0_FuncRetVal_44);
        FuncRetVal_44 = ((MR_Word) (conv0_FuncRetVal_44));
        hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_2_30, &Context_45);
        FuncModule_46 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_2_30);
        FuncName_47 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_2_30);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_2_30, &PredFormArity_48);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_49, PredFormArity_48);
        UserArityInt_50 = (MR_Integer) (UserArity_49);
        {
          FuncSymName_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncSymName_51, 0) = ((MR_Box) (FuncModule_46));
          MR_hl_field(1, FuncSymName_51, 1) = ((MR_Box) (FuncName_47));
        }
        Var_70 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          FuncDuCtor_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FuncDuCtor_52, 0) = ((MR_Box) (FuncSymName_51));
          MR_hl_field(0, FuncDuCtor_52, 1) = ((MR_Box) (UserArityInt_50));
          MR_hl_field(0, FuncDuCtor_52, 2) = ((MR_Box) (Var_70));
        }
        FuncConsId_53 = (MR_Word) (MR_mkword(1, (MR_Word) (FuncDuCtor_52)));
        {
          FuncRHS_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncRHS_54, 0) = ((MR_Box) (FuncConsId_53));
          MR_hl_field(1, FuncRHS_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, FuncRHS_54, 2) = ((MR_Box) (FuncArgs_43));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FuncRetVal_44, FuncRHS_54, Context_45, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal0_55);
        GoalExpr_56 = ((MR_Word) ((MR_hl_field(0, Goal0_55, 0))));
        GoalInfo0_57 = ((MR_Word) ((MR_hl_field(0, Goal0_55, 1))));
        Var_74 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), ArgVector_42);
        NonLocals_58 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_74);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_58, GoalInfo0_57, &GoalInfo_59);
        {
          Goal_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal_60, 0) = ((MR_Box) (GoalExpr_56));
          MR_hl_field(0, Goal_60, 1) = ((MR_Box) (GoalInfo_59));
        }
        Var_78 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
        {
          Clause_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Clause_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_61, 1) = ((MR_Box) (Goal_60));
          MR_hl_field(0, Clause_61, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_61, 3) = ((MR_Box) (Context_45));
          MR_hl_field(0, Clause_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_61, 5) = ((MR_Box) (Var_78));
          MR_hl_field(0, Clause_61, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Clause_61));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Var_80, &ClausesRep_62);
        ItemNumbers_63 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_62, ItemNumbers_63, ClausesInfo0_36, &ClausesInfo_64);
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 1, STATE_VARIABLE_PredInfo_2_30, &STATE_VARIABLE_PredInfo_1_83);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_64, STATE_VARIABLE_PredInfo_1_83, &STATE_VARIABLE_PredInfo_2_84);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_2_84, &Markers0_65);
        hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 23, Markers0_65, &Markers_66);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_66, STATE_VARIABLE_PredInfo_2_84, &STATE_VARIABLE_PredInfo_3_31);
      }
      else
        STATE_VARIABLE_PredInfo_3_31 = STATE_VARIABLE_PredInfo_2_30;
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_24);
      hlds__headvar_names__maybe_improve_headvar_names_4_p_0(Globals_24, &MaybeLookForUnusedSVars_25, STATE_VARIABLE_PredInfo_3_31, &STATE_VARIABLE_PredInfo_4_32);
      if ((MaybeLookForUnusedSVars_25 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_1_33 = STATE_VARIABLE_Specs_0_5;
      else
      {
        MR_Word HeadVarNames_26 = ((MR_Word) ((MR_hl_field(1, MaybeLookForUnusedSVars_25, 0))));

        check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0(ModuleInfo_1, STATE_VARIABLE_PredInfo_4_32, HeadVarNames_26, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_33);
      }
      {
        PredIdInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredIdInfo_16, 0) = ((MR_Box) (PredId_20));
        MR_hl_field(0, PredIdInfo_16, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_4_32));
      }
    }
    else
    {
      PredIdInfo_16 = PredIdInfo0_14;
      STATE_VARIABLE_Specs_1_33 = STATE_VARIABLE_Specs_0_5;
    }
    check_hlds__pre_typecheck__prepare_for_typecheck_6_p_0(ModuleInfo_1, ValidPredIdSet_2, PredIdsInfos0_15, &PredIdsInfos_17, STATE_VARIABLE_Specs_1_33, STATE_VARIABLE_Specs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredIdInfo_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (PredIdsInfos_17));
    }
  }
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Specs_22;

  check_hlds__pre_typecheck__maybe_warn_about_unneeded_final_statevar_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Specs_22);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_22));
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv9_HeadVar__3_3;

  succeeded = hlds__make_hlds__state_var__is_prog_var_for_some_state_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_BodyVars_9;

  check_hlds__pre_typecheck__gather_clause_body_non_svar_copy_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_BodyVars_9);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_BodyVars_9));
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Specs_23;

  check_hlds__pre_typecheck__warn_about_any_unneeded_initial_statevars_in_clause_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_ClauseInitArgs_10;
  MR_Word conv1_STATE_VARIABLE_InitAndFinalMap_18;
  MR_Word conv0_STATE_VARIABLE_MaybeAllFacts_20;

  check_hlds__pre_typecheck__build_init_and_final_map_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_ClauseInitArgs_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InitAndFinalMap_18, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_MaybeAllFacts_20);
  *wrapper_arg_2 = ((MR_Box) (conv2_ClauseInitArgs_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InitAndFinalMap_18));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_MaybeAllFacts_20));
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadVarNames_8,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_bool succeeded;
  MR_Word ClausesInfo_10;
  MR_Word ClausesRep_11;
  MR_Word Clauses_13;
  MR_Word _ItemNumbers_12;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_7, &ClausesInfo_10);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_10, &ClausesRep_11, &_ItemNumbers_12);
  hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_11, &Clauses_13);
  if ((Clauses_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
  else
  {
    MR_Word HeadClause_14 = ((MR_Word) ((MR_hl_field(1, Clauses_13, 0))));
    MR_Word TailClauses_15 = ((MR_Word) ((MR_hl_field(1, Clauses_13, 1))));
    MR_Word InitAndFinalMap0_16;
    MR_Word HeadClauseInitArgs_18;
    MR_Word InitAndFinalMap1_19;
    MR_Word MaybeAllFacts1_20;
    MR_Word TailClausesInitArgs_21;
    MR_Word InitAndFinalMap_22;
    MR_Word MaybeAllFacts_23;
    MR_Word AllClausesInitArgs_24;
    MR_Word HeadClauseContext_25;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_Specs_1_40;
    MR_Box conv4_InitAndFinalMap_22;
    MR_Box conv3_MaybeAllFacts_23;
    MR_Box conv6_STATE_VARIABLE_Specs_1_40;

    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), &InitAndFinalMap0_16);
    check_hlds__pre_typecheck__build_init_and_final_map_7_p_0((MR_Integer) 0, HeadClause_14, &HeadClauseInitArgs_18, InitAndFinalMap0_16, &InitAndFinalMap1_19, (MR_Integer) 1, &MaybeAllFacts1_20);
    mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[1]), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[0]), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_are_all_clauses_facts_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_5[0]), TailClauses_15, &TailClausesInitArgs_21, ((MR_Box) (InitAndFinalMap1_19)), &conv4_InitAndFinalMap_22, ((MR_Box) (MaybeAllFacts1_20)), &conv3_MaybeAllFacts_23);
    InitAndFinalMap_22 = ((MR_Word) (conv4_InitAndFinalMap_22));
    MaybeAllFacts_23 = ((MR_Word) (conv3_MaybeAllFacts_23));
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (HeadClauseInitArgs_18));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (TailClausesInitArgs_21));
    }
    AllClausesInitArgs_24 = mercury__set__intersect_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_38);
    HeadClauseContext_25 = ((MR_Word) ((MR_hl_field(0, HeadClause_14, 3))));
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_4[1]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_2));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (PredInfo_7));
      MR_hl_field(0, Var_39, 4) = ((MR_Box) (HeadVarNames_8));
      MR_hl_field(0, Var_39, 5) = ((MR_Box) (AllClausesInitArgs_24));
      MR_hl_field(0, Var_39, 6) = ((MR_Box) (InitAndFinalMap_22));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[2]), Var_39, Clauses_13, ((MR_Box) (STATE_VARIABLE_Specs_0_33)), &conv6_STATE_VARIABLE_Specs_1_40);
    STATE_VARIABLE_Specs_1_40 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_1_40));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), InitAndFinalMap_22);
    if (!(succeeded))
      succeeded = (MaybeAllFacts_23 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_1_40;
    else
    {
      MR_Word VarSet_26 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_10, 0))));
      MR_Word BodyVarsSet0_27;
      MR_Word BodyVarsSet1_28;
      MR_Word BodyVarsSet_29;
      MR_Word BodyVars_30;
      MR_Word BodyVarSVarNames_31;
      MR_Word BodyVarSVarNameSet_32;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word BodyGoal_84;
      MR_Word BodyGoalVars_85;
      MR_Box conv8_BodyVarsSet_29;
      MR_Box conv11_STATE_VARIABLE_Specs_34;

      BodyVarsSet0_27 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      BodyGoal_84 = hlds__hlds_clauses__clause_body_1_f_0(HeadClause_14);
      hlds__goal_vars__non_svar_copy_vars_in_goal_2_p_0(BodyGoal_84, &BodyGoalVars_85);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BodyGoalVars_85, BodyVarsSet0_27, &BodyVarsSet1_28);
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[3]), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[1]), TailClauses_15, ((MR_Box) (BodyVarsSet1_28)), &conv8_BodyVarsSet_29);
      BodyVarsSet_29 = ((MR_Word) (conv8_BodyVarsSet_29));
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BodyVarsSet_29, &BodyVars_30);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_6[1]));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_4));
        MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_42, 3) = ((MR_Box) (VarSet_26));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, BodyVars_30, &BodyVarSVarNames_31);
      mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BodyVarSVarNames_31, &BodyVarSVarNameSet_32);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_7[0]));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unneeded_statevars_5_p_0_5));
        MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_43, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(0, Var_43, 4) = ((MR_Box) (PredInfo_7));
        MR_hl_field(0, Var_43, 5) = ((MR_Box) (BodyVarSVarNameSet_32));
        MR_hl_field(0, Var_43, 6) = ((MR_Box) (HeadClauseContext_25));
        MR_hl_field(0, Var_43, 7) = ((MR_Box) (TailClauses_15));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[2]), Var_43, InitAndFinalMap_22, ((MR_Box) (STATE_VARIABLE_Specs_1_40)), &conv11_STATE_VARIABLE_Specs_34);
      *STATE_VARIABLE_Specs_34 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_34));
    }
  }
}

static void MR_CALL 
check_hlds__pre_typecheck__build_init_and_final_map_7_p_0(
  MR_Word IsFirst_8,
  MR_Word Clause_9,
  MR_Word * ClauseInitArgs_10,
  MR_Word STATE_VARIABLE_InitAndFinalMap_0_17,
  MR_Word * STATE_VARIABLE_InitAndFinalMap_18,
  MR_Word STATE_VARIABLE_MaybeAllFacts_0_19,
  MR_Word * STATE_VARIABLE_MaybeAllFacts_20)
{
  MR_Word UnusedSVarArgMap_13 = ((MR_Word) ((MR_hl_field(0, Clause_9, 5))));
  MR_Word UnusedSVarArgAL_14;
  MR_Word KeepAliveSet_15;
  MR_Word MaybeFact_16;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_InitAndFinalMap_1_22;
  MR_Word Var_23;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), UnusedSVarArgMap_13, &UnusedSVarArgAL_14);
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0));
  Var_23 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0));
  check_hlds__pre_typecheck__collect_init_and_final_args_8_p_0(IsFirst_8, UnusedSVarArgAL_14, Var_21, ClauseInitArgs_10, STATE_VARIABLE_InitAndFinalMap_0_17, &STATE_VARIABLE_InitAndFinalMap_1_22, Var_23, &KeepAliveSet_15);
  mercury__map__select_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), STATE_VARIABLE_InitAndFinalMap_1_22, KeepAliveSet_15, STATE_VARIABLE_InitAndFinalMap_18);
  MaybeFact_16 = ((MR_Unsigned) ((MR_hl_field(0, Clause_9, 6))) & (MR_Integer) 1);
  switch (MaybeFact_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_MaybeAllFacts_20 = STATE_VARIABLE_MaybeAllFacts_0_19;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_MaybeAllFacts_20 = (MR_Integer) 0;
      break;
  }
}

static void MR_CALL 
check_hlds__pre_typecheck__collect_init_and_final_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ClauseInitArgs_0_3,
  MR_Word * STATE_VARIABLE_ClauseInitArgs_4,
  MR_Word STATE_VARIABLE_InitAndFinalMap_0_5,
  MR_Word * STATE_VARIABLE_InitAndFinalMap_6,
  MR_Word STATE_VARIABLE_KeepAliveSet_0_7,
  MR_Word * STATE_VARIABLE_KeepAliveSet_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_KeepAliveSet_8 = STATE_VARIABLE_KeepAliveSet_0_7;
      *STATE_VARIABLE_InitAndFinalMap_6 = STATE_VARIABLE_InitAndFinalMap_0_5;
      *STATE_VARIABLE_ClauseInitArgs_4 = STATE_VARIABLE_ClauseInitArgs_0_3;
    }
    else
    {
      MR_Word ArgDesc_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgDescs_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Unsigned ArgNum_25 = ((MR_Unsigned) ((MR_hl_field(0, ArgDesc_20, 0))));
      MR_Word InitOrFinal_26;
      MR_String SVarName_27;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, ArgDesc_20, 1))));
      MR_Word STATE_VARIABLE_ClauseInitArgs_1_42;
      MR_Word STATE_VARIABLE_InitAndFinalMap_1_45;
      MR_Word STATE_VARIABLE_KeepAliveSet_1_46;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ClauseInitArgs_0_3;
      MR_Word next_value_of_STATE_VARIABLE_InitAndFinalMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_KeepAliveSet_0_7;

      InitOrFinal_26 = ((MR_Word) ((MR_hl_field(0, Var_41, 0))));
      SVarName_27 = ((MR_String) ((MR_hl_field(0, Var_41, 1))));
      switch (MR_tag((MR_Word) InitOrFinal_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(InitOrFinal_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ArgNum_25)), STATE_VARIABLE_ClauseInitArgs_0_3, &STATE_VARIABLE_ClauseInitArgs_1_42);
                STATE_VARIABLE_InitAndFinalMap_1_45 = STATE_VARIABLE_InitAndFinalMap_0_5;
                STATE_VARIABLE_KeepAliveSet_1_46 = STATE_VARIABLE_KeepAliveSet_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ClauseInitArgs_1_42 = STATE_VARIABLE_ClauseInitArgs_0_3;
                STATE_VARIABLE_InitAndFinalMap_1_45 = STATE_VARIABLE_InitAndFinalMap_0_5;
                STATE_VARIABLE_KeepAliveSet_1_46 = STATE_VARIABLE_KeepAliveSet_0_7;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned FinalArgNum_29 = ((MR_Unsigned) ((MR_hl_field(1, InitOrFinal_26, 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ArgNum_25)), STATE_VARIABLE_ClauseInitArgs_0_3, &STATE_VARIABLE_ClauseInitArgs_1_42);
            switch (HeadVar__1_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word InitAndFinal_30;
                  MR_Word Var_44;

                  Var_44 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SVarName_27)));
                  {
                    InitAndFinal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, InitAndFinal_30, 0) = ((MR_Box) (FinalArgNum_29));
                    MR_hl_field(0, InitAndFinal_30, 1) = ((MR_Box) (Var_44));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), ((MR_Box) (ArgNum_25)), ((MR_Box) (InitAndFinal_30)), STATE_VARIABLE_InitAndFinalMap_0_5, &STATE_VARIABLE_InitAndFinalMap_1_45);
                  mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ArgNum_25)), STATE_VARIABLE_KeepAliveSet_0_7, &STATE_VARIABLE_KeepAliveSet_1_46);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word InitAndFinal0_31;
                  MR_Box conv0_InitAndFinal0_31;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), STATE_VARIABLE_InitAndFinalMap_0_5, ((MR_Box) (ArgNum_25)), &conv0_InitAndFinal0_31);
                  if (succeeded)
                  {
                    InitAndFinal0_31 = ((MR_Word) (conv0_InitAndFinal0_31));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Unsigned FinalArgNum0_32 = ((MR_Unsigned) ((MR_hl_field(0, InitAndFinal0_31, 0))));
                    MR_Word SVarNames0_33 = ((MR_Word) ((MR_hl_field(0, InitAndFinal0_31, 1))));

                    succeeded = (FinalArgNum_29 == FinalArgNum0_32);
                    if (succeeded)
                    {
                      MR_Word SVarNames_34;
                      MR_Word InitAndFinal_53;

                      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SVarName_27)), SVarNames0_33, &SVarNames_34);
                      {
                        InitAndFinal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, InitAndFinal_53, 0) = ((MR_Box) (FinalArgNum_29));
                        MR_hl_field(0, InitAndFinal_53, 1) = ((MR_Box) (SVarNames_34));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), ((MR_Box) (ArgNum_25)), ((MR_Box) (InitAndFinal_53)), STATE_VARIABLE_InitAndFinalMap_0_5, &STATE_VARIABLE_InitAndFinalMap_1_45);
                      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ArgNum_25)), STATE_VARIABLE_KeepAliveSet_0_7, &STATE_VARIABLE_KeepAliveSet_1_46);
                    }
                    else
                    {
                      mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), ((MR_Box) (ArgNum_25)), STATE_VARIABLE_InitAndFinalMap_0_5, &STATE_VARIABLE_InitAndFinalMap_1_45);
                      STATE_VARIABLE_KeepAliveSet_1_46 = STATE_VARIABLE_KeepAliveSet_0_7;
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_KeepAliveSet_1_46 = STATE_VARIABLE_KeepAliveSet_0_7;
                    STATE_VARIABLE_InitAndFinalMap_1_45 = STATE_VARIABLE_InitAndFinalMap_0_5;
                  }
                }
                break;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArgDescs_21;
      next_value_of_STATE_VARIABLE_ClauseInitArgs_0_3 = STATE_VARIABLE_ClauseInitArgs_1_42;
      next_value_of_STATE_VARIABLE_InitAndFinalMap_0_5 = STATE_VARIABLE_InitAndFinalMap_1_45;
      next_value_of_STATE_VARIABLE_KeepAliveSet_0_7 = STATE_VARIABLE_KeepAliveSet_1_46;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ClauseInitArgs_0_3 = next_value_of_STATE_VARIABLE_ClauseInitArgs_0_3;
      STATE_VARIABLE_InitAndFinalMap_0_5 = next_value_of_STATE_VARIABLE_InitAndFinalMap_0_5;
      STATE_VARIABLE_KeepAliveSet_0_7 = next_value_of_STATE_VARIABLE_KeepAliveSet_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____are_all_clauses_facts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__pre_typecheck____Unify____are_all_clauses_facts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck____Compare____are_all_clauses_facts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__pre_typecheck____Compare____are_all_clauses_facts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__pre_typecheck____Unify____init_and_final_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__pre_typecheck____Compare____init_and_final_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck____Unify____init_and_final_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__pre_typecheck____Unify____init_and_final_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck____Compare____init_and_final_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__pre_typecheck____Compare____init_and_final_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__pre_typecheck__init(void)
{
}

void mercury__check_hlds__pre_typecheck__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_are_all_clauses_facts_0);
  MR_register_type_ctor_info(&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0);
  MR_register_type_ctor_info(&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_map_0);
}

void mercury__check_hlds__pre_typecheck__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__pre_typecheck__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.pre_typecheck.
