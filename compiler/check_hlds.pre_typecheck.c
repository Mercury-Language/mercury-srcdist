/*
** Automatically generated from `pre_typecheck.m'
** by the Mercury compiler,
** version rotd-2025-05-18
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

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
check_hlds__pre_typecheck__IntroducedFrom__pred__warn_about_nonupdated_statevar__426__1_2_p_0(
  MR_Word HeadVar__1_88,
  MR_Word HeadVar__2_89);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__pred__warn_about_nonupdated_statevar__424__1_2_p_0(
  MR_Integer NumUserArgs_31,
  MR_Integer HeadVar__2_82);

static MR_String MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_nonupdated_statevar__397__1_1_f_0(
  MR_String LambdaHeadVar__1_44);

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
check_hlds__pre_typecheck__warn_about_nonupdated_statevar_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadClauseContext_9,
  MR_Word TailClauses_10,
  MR_Unsigned _InitArgNum_11,
  MR_Word InitAndFinal_12,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadClauseContext_9,
  MR_Word TailClauses_10,
  MR_Word InitAndFinal_12,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_statevars_in_clause_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word AllClausesInitArgs_10,
  MR_Word InitAndFinalMap_11,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_117_115_101_100_95_115_116_97_116_101_118_97_114_115_95_105_110_95_99_108_97_117_115_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_117_115_101_100_95_115_116_97_116_101_118_97_114_115_95_95_91_51_44_32_52_93_95_48_8_p_0(
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
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word HeadVarNames_6,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
check_hlds__pre_typecheck__build_init_and_final_map_5_p_0(
  MR_Word IsFirst_6,
  MR_Word Clause_7,
  MR_Word * ClauseInitArgs_8,
  MR_Word STATE_VARIABLE_InitAndFinalMap_0_13,
  MR_Word * STATE_VARIABLE_InitAndFinalMap_14);

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


static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_1[44][2];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_4[1][4];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_5[2][10];

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_6[3][5];




static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_1[44][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: state variable"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "never updated"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "replaced with an ordinary variable."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this clause, so it should be"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "represented by the state variable"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "represented by one of the state variables"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in each clause,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in each clause"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the function return value,"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument,"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could be deleted,"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its value"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as its initial value."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_6[0])),
    ((MR_Box) (check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_is_first_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__pre_typecheck__type_ctor_info_init_and_final_0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_3[0])),
    ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_5[2][10] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__pre_typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_6[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__pre_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0) }
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
check_hlds__pre_typecheck__IntroducedFrom__pred__warn_about_nonupdated_statevar__426__1_2_p_0(
  MR_Word HeadVar__1_88,
  MR_Word HeadVar__2_89)
{
  MR_bool succeeded = (HeadVar__1_88 == HeadVar__2_89);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__pred__warn_about_nonupdated_statevar__424__1_2_p_0(
  MR_Integer NumUserArgs_31,
  MR_Integer HeadVar__2_82)
{
  MR_bool succeeded = (HeadVar__2_82 == NumUserArgs_31);

  return succeeded;
}

static MR_String MR_CALL 
check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_nonupdated_statevar__397__1_1_f_0(
  MR_String LambdaHeadVar__1_44)
{
  MR_String LambdaHeadVar__2_45;

  LambdaHeadVar__2_45 = mercury__string__f_43_43_2_f_0((MR_String) "!:", LambdaHeadVar__1_44);
  return LambdaHeadVar__2_45;
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
      TypeInfo_9_9 = (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_nonupdated_statevar_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadClauseContext_9,
  MR_Word TailClauses_10,
  MR_Unsigned _InitArgNum_11,
  MR_Word InitAndFinal_12,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0(PredInfo_8, HeadClauseContext_9, TailClauses_10, InitAndFinal_12, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__pre_typecheck__IntroducedFrom__pred__warn_about_nonupdated_statevar__426__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__pre_typecheck__IntroducedFrom__pred__warn_about_nonupdated_statevar__424__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_45;

  conv0_LambdaHeadVar__2_45 = check_hlds__pre_typecheck__IntroducedFrom__func__warn_about_nonupdated_statevar__397__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_45));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadClauseContext_9,
  MR_Word TailClauses_10,
  MR_Word InitAndFinal_12,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_bool succeeded;
  MR_Word PredNameColonPieces_14;
  MR_Unsigned FinalArgNum_15;
  MR_Word SVarNameSet_16;
  MR_Word SVarNames_17;
  MR_Word BangColonSVarNames_18;
  MR_Word BangColonSVarNameCommaPieces_21;
  MR_Word InEachClausePieces_25;
  MR_Word ClausesInfo_28;
  MR_Word ArgVector_29;
  MR_Word UserArgs_30;
  MR_Integer NumUserArgs_31;
  MR_Word FinalArgCommaPieces_32;
  MR_Word Pieces_33;
  MR_Word Spec_34;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_121;
  MR_Word Var_126;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Integer Var_78;

  PredNameColonPieces_14 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[5])), PredInfo_8);
  FinalArgNum_15 = ((MR_Unsigned) ((MR_hl_field(0, InitAndFinal_12, 0))));
  SVarNameSet_16 = ((MR_Word) ((MR_hl_field(0, InitAndFinal_12, 1))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SVarNameSet_16, &SVarNames_17);
  BangColonSVarNames_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[1]), SVarNames_17);
  if ((BangColonSVarNames_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_nonupdated_statevar\'/7", (MR_String) "BangColonSVarNames = []");
      return;
    }
  else
  {
    MR_Word Var_150 = ((MR_Word) ((MR_hl_field(1, BangColonSVarNames_18, 1))));
    MR_String Var_151 = ((MR_String) ((MR_hl_field(1, BangColonSVarNames_18, 0))));

    if ((Var_150 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_151));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[23])));
      }
      Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
      BangColonSVarNameCommaPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[21])), Var_54);
    }
    else
    {
      MR_Word Var_66;
      MR_Word Var_67;

      Var_67 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BangColonSVarNames_18);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[27])));
      BangColonSVarNameCommaPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[25])), Var_66);
    }
  }
  if ((TailClauses_10 == (MR_Word) ((MR_Unsigned) 0U)))
    InEachClausePieces_25 = (MR_Word) ((MR_Unsigned) 0U);
  else
    InEachClausePieces_25 = (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[29]));
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClausesInfo_28);
  hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo_28, &ArgVector_29);
  UserArgs_30 = hlds__hlds_args__proc_arg_vector_get_user_args_1_f_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), ArgVector_29);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), UserArgs_30, &NumUserArgs_31);
  Var_78 = mercury__uint__cast_to_int_1_f_0(FinalArgNum_15);
  succeeded = (Var_78 > NumUserArgs_31);
  if (succeeded)
  {
    MR_Word Var_79;
    MR_Integer Var_82;
    MR_Unsigned Var_83 = (FinalArgNum_15 + (MR_Unsigned) 1U);
    MR_Word Var_85;
    MR_Word Var_88;

    Var_82 = mercury__uint__cast_to_int_1_f_0(Var_83);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_6[1]));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_2));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_79, 3) = ((MR_Box) (NumUserArgs_31));
      MR_hl_field(0, Var_79, 4) = ((MR_Box) (Var_82));
    }
    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_nonupdated_statevar\'/7", (MR_String) "FinalArgNum is not numbered correctly for return value");
    Var_88 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_6[2]));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_110_111_110_117_112_100_97_116_101_100_95_115_116_97_116_101_118_97_114_95_95_91_52_93_95_48_7_p_0_3));
      MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_85, 3) = ((MR_Box) (Var_88));
      MR_hl_field(0, Var_85, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_nonupdated_statevar\'/7", (MR_String) "PredInfo is not a function");
    FinalArgCommaPieces_32 = (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[31]));
  }
  else
  {
    MR_Word Var_95;
    MR_Word Var_96;

    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (FinalArgNum_15));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[34])));
    }
    {
      FinalArgCommaPieces_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FinalArgCommaPieces_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__pre_typecheck_scalar_common_1[32])));
      MR_hl_field(1, FinalArgCommaPieces_32, 1) = ((MR_Box) (Var_95));
    }
  }
  Var_116 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[39])));
  Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InEachClausePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[43])));
  Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[41])), Var_126);
  Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, Var_121);
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BangColonSVarNameCommaPieces_21, Var_115);
  Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FinalArgCommaPieces_32, Var_114);
  Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[37])), Var_113);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_14, Var_106);
  Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[7])), Var_105);
  {
    Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_139, 0) = ((MR_Box) (HeadClauseContext_9));
    MR_hl_field(0, Var_139, 1) = ((MR_Box) (Pieces_33));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_nonupdated_statevar\'/7"));
    MR_hl_field(3, Spec_34, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 18) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Spec_34, 3) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(3, Spec_34, 4) = ((MR_Box) (Var_138));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_36 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_34));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
  }
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_statevars_in_clause_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word AllClausesInitArgs_10,
  MR_Word InitAndFinalMap_11,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_117_115_101_100_95_115_116_97_116_101_118_97_114_115_95_105_110_95_99_108_97_117_115_101_95_95_91_51_44_32_52_93_95_48_7_p_0(PredInfo_8, HeadVarNames_9, Clause_12, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
}

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_117_115_101_100_95_115_116_97_116_101_118_97_114_115_95_105_110_95_99_108_97_117_115_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word PredInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word Clause_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word ClauseContext_17 = ((MR_Word) ((MR_hl_field(0, Clause_12, 3))));
  MR_Word UnusedSVarArgMap_19 = ((MR_Word) ((MR_hl_field(0, Clause_12, 5))));
  MR_Word UnusedSVarArgAL_20;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), UnusedSVarArgMap_19, &UnusedSVarArgAL_20);
  check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_117_115_101_100_95_115_116_97_116_101_118_97_114_115_95_95_91_51_44_32_52_93_95_48_8_p_0(PredInfo_8, HeadVarNames_9, ClauseContext_17, UnusedSVarArgAL_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
}

static void MR_CALL 
check_hlds__pre_typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_97_98_111_117_116_95_97_110_121_95_117_110_117_115_101_100_95_115_116_97_116_101_118_97_114_115_95_95_91_51_44_32_52_93_95_48_8_p_0(
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
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, ArgDesc_22, 1))));
      MR_Word STATE_VARIABLE_Specs_1_91;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      InitOrFinal_26 = ((MR_Word) ((MR_hl_field(0, Var_37, 0))));
      SVarName_27 = ((MR_String) ((MR_hl_field(0, Var_37, 1))));
      switch (MR_tag((MR_Word) InitOrFinal_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(InitOrFinal_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgName_29;
                MR_Integer Var_38;
                MR_Box conv0_ArgName_29;
                MR_String Var_94;

                Var_38 = mercury__uint__cast_to_int_1_f_0(ArgNum_25);
                mercury__list__det_index1_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVars_2, Var_38, &conv0_ArgName_29);
                ArgName_29 = ((MR_String) (conv0_ArgName_29));
                Var_94 = hlds__make_hlds__state_var__initial_state_var_name_1_f_0(SVarName_27);
                succeeded = (strcmp(ArgName_29, Var_94) == 0);
                if (succeeded)
                {
                  MR_Word PredNameColonPieces_95;
                  MR_Word Pieces_96;
                  MR_Word Spec_97;
                  MR_Word Var_108;
                  MR_Word Var_109;
                  MR_Word Var_111;
                  MR_Word Var_112;
                  MR_Word Var_113;
                  MR_Word Var_114;
                  MR_String Var_115;
                  MR_Word Var_117;
                  MR_Word Var_122;
                  MR_Word Var_123;
                  MR_Word Var_134;
                  MR_Word Var_135;

                  PredNameColonPieces_95 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[5])), PredInfo_1);
                  Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "!.", SVarName_27);
                  {
                    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_114, 1) = ((MR_Box) (Var_115));
                  }
                  {
                    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
                    MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_112 = parse_tree__error_spec__color_as_subject_1_f_0(Var_113);
                  Var_123 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[14])));
                  Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[19])));
                  Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[12])), Var_122);
                  Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_117);
                  Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[10])), Var_111);
                  Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_95, Var_109);
                  Pieces_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[7])), Var_108);
                  {
                    Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_135, 0) = ((MR_Box) (ClauseContext_5));
                    MR_hl_field(0, Var_135, 1) = ((MR_Box) (Pieces_96));
                  }
                  {
                    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
                    MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Spec_97, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_any_unused_statevars\'/8"));
                    MR_hl_field(3, Spec_97, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 16) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                    MR_hl_field(3, Spec_97, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, Spec_97, 3) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(3, Spec_97, 4) = ((MR_Box) (Var_134));
                  }
                  {
                    STATE_VARIABLE_Specs_1_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_1_91, 0) = ((MR_Box) (Spec_97));
                    MR_hl_field(1, STATE_VARIABLE_Specs_1_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
                  }
                }
                else
                  STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredNameColonPieces_31;
                MR_Word Pieces_32;
                MR_Word Spec_33;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_String Var_61;
                MR_Word Var_63;
                MR_Word Var_68;
                MR_Word Var_69;
                MR_Word Var_88;
                MR_Word Var_89;

                PredNameColonPieces_31 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[5])), PredInfo_1);
                Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_27);
                {
                  Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_58 = parse_tree__error_spec__color_as_subject_1_f_0(Var_59);
                Var_69 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[14])));
                Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[19])));
                Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[12])), Var_68);
                Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_63);
                Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[10])), Var_57);
                Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_31, Var_50);
                Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__pre_typecheck_scalar_common_1[7])), Var_49);
                {
                  Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_89, 0) = ((MR_Box) (ClauseContext_5));
                  MR_hl_field(0, Var_89, 1) = ((MR_Box) (Pieces_32));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
                  MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.pre_typecheck.warn_about_any_unused_statevars\'/8"));
                  MR_hl_field(3, Spec_33, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 16) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, Spec_33, 3) = ((MR_Box) ((MR_Unsigned) 44U));
                  MR_hl_field(3, Spec_33, 4) = ((MR_Box) (Var_88));
                }
                {
                  STATE_VARIABLE_Specs_1_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_91, 0) = ((MR_Box) (Spec_33));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_7;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ArgDescs_23;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_91;
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
      MR_Word Var_64;
      MR_Word Var_65;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_1_29, &GoalIdClausesInfo0_21);
      hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(ModuleInfo_1, &_ContainingGoalMap_22, GoalIdClausesInfo0_21, &GoalIdClausesInfo_23);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(GoalIdClausesInfo_23, STATE_VARIABLE_PredInfo_1_29, &STATE_VARIABLE_PredInfo_2_30);
      hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_2_30, &PredStatus_35);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_2_30, &ClausesInfo0_36);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_36, &ClausesRep0_37, &_ItemNumbers0_38);
      succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_1, STATE_VARIABLE_PredInfo_2_30);
      if (succeeded)
      {
        Var_64 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_37);
        succeeded = (Var_64 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_65 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_35);
          succeeded = (Var_65 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word ArgVector_39;
        MR_Word FuncArgs_40;
        MR_Word FuncRetVal_41;
        MR_Word Context_42;
        MR_Word FuncModule_43;
        MR_String FuncName_44;
        MR_Word PredFormArity_45;
        MR_Word UserArity_46;
        MR_Integer UserArityInt_47;
        MR_Word FuncSymName_48;
        MR_Word FuncDuCtor_49;
        MR_Word FuncConsId_50;
        MR_Word FuncRHS_51;
        MR_Word Goal0_52;
        MR_Word GoalExpr_53;
        MR_Word GoalInfo0_54;
        MR_Word NonLocals_55;
        MR_Word GoalInfo_56;
        MR_Word Goal_57;
        MR_Word Clause_58;
        MR_Word ClausesRep_59;
        MR_Word ItemNumbers_60;
        MR_Word ClausesInfo_61;
        MR_Word Markers0_62;
        MR_Word Markers_63;
        MR_Word Var_67;
        MR_Word Var_71;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word STATE_VARIABLE_PredInfo_1_79;
        MR_Word STATE_VARIABLE_PredInfo_2_80;
        MR_Box conv0_FuncRetVal_41;

        hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo0_36, &ArgVector_39);
        hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), ArgVector_39, &FuncArgs_40, &conv0_FuncRetVal_41);
        FuncRetVal_41 = ((MR_Word) (conv0_FuncRetVal_41));
        hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_2_30, &Context_42);
        FuncModule_43 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_2_30);
        FuncName_44 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_2_30);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_2_30, &PredFormArity_45);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_46, PredFormArity_45);
        UserArityInt_47 = (MR_Integer) (UserArity_46);
        {
          FuncSymName_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncSymName_48, 0) = ((MR_Box) (FuncModule_43));
          MR_hl_field(1, FuncSymName_48, 1) = ((MR_Box) (FuncName_44));
        }
        Var_67 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          FuncDuCtor_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FuncDuCtor_49, 0) = ((MR_Box) (FuncSymName_48));
          MR_hl_field(0, FuncDuCtor_49, 1) = ((MR_Box) (UserArityInt_47));
          MR_hl_field(0, FuncDuCtor_49, 2) = ((MR_Box) (Var_67));
        }
        FuncConsId_50 = (MR_Word) (MR_mkword(1, (MR_Word) (FuncDuCtor_49)));
        {
          FuncRHS_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncRHS_51, 0) = ((MR_Box) (FuncConsId_50));
          MR_hl_field(1, FuncRHS_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, FuncRHS_51, 2) = ((MR_Box) (FuncArgs_40));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FuncRetVal_41, FuncRHS_51, Context_42, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal0_52);
        GoalExpr_53 = ((MR_Word) ((MR_hl_field(0, Goal0_52, 0))));
        GoalInfo0_54 = ((MR_Word) ((MR_hl_field(0, Goal0_52, 1))));
        Var_71 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), ArgVector_39);
        NonLocals_55 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_71);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_55, GoalInfo0_54, &GoalInfo_56);
        {
          Goal_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal_57, 0) = ((MR_Box) (GoalExpr_53));
          MR_hl_field(0, Goal_57, 1) = ((MR_Box) (GoalInfo_56));
        }
        Var_75 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
        {
          Clause_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Clause_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_58, 1) = ((MR_Box) (Goal_57));
          MR_hl_field(0, Clause_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_58, 3) = ((MR_Box) (Context_42));
          MR_hl_field(0, Clause_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_58, 5) = ((MR_Box) (Var_75));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Clause_58));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Var_76, &ClausesRep_59);
        ItemNumbers_60 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_59, ItemNumbers_60, ClausesInfo0_36, &ClausesInfo_61);
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 1, STATE_VARIABLE_PredInfo_2_30, &STATE_VARIABLE_PredInfo_1_79);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_61, STATE_VARIABLE_PredInfo_1_79, &STATE_VARIABLE_PredInfo_2_80);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_2_80, &Markers0_62);
        hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 22, Markers0_62, &Markers_63);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_63, STATE_VARIABLE_PredInfo_2_80, &STATE_VARIABLE_PredInfo_3_31);
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

        check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0(STATE_VARIABLE_PredInfo_4_32, HeadVarNames_26, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_33);
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
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Specs_36;

  check_hlds__pre_typecheck__warn_about_nonupdated_statevar_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_Specs_36);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_36));
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_22;

  check_hlds__pre_typecheck__warn_about_any_unused_statevars_in_clause_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_22);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ClauseInitArgs_8;
  MR_Word conv0_STATE_VARIABLE_InitAndFinalMap_14;

  check_hlds__pre_typecheck__build_init_and_final_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_ClauseInitArgs_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InitAndFinalMap_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_ClauseInitArgs_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InitAndFinalMap_14));
}

static void MR_CALL 
check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word HeadVarNames_6,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word ClausesInfo_8;
  MR_Word ClausesRep_9;
  MR_Word Clauses_11;
  MR_Word _ItemNumbers_10;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_5, &ClausesInfo_8);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_8, &ClausesRep_9, &_ItemNumbers_10);
  hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_9, &Clauses_11);
  if ((Clauses_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
  else
  {
    MR_Word HeadClause_12 = ((MR_Word) ((MR_hl_field(1, Clauses_11, 0))));
    MR_Word TailClauses_13 = ((MR_Word) ((MR_hl_field(1, Clauses_11, 1))));
    MR_Word InitAndFinalMap0_14;
    MR_Word HeadClauseInitArgs_15;
    MR_Word InitAndFinalMap1_16;
    MR_Word TailClausesInitArgs_17;
    MR_Word InitAndFinalMap_18;
    MR_Word AllClausesInitArgs_19;
    MR_Word HeadClauseContext_20;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_Specs_1_28;
    MR_Word Var_29;
    MR_Box conv2_InitAndFinalMap_18;
    MR_Box conv4_STATE_VARIABLE_Specs_1_28;
    MR_Box conv6_STATE_VARIABLE_Specs_22;

    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), &InitAndFinalMap0_14);
    check_hlds__pre_typecheck__build_init_and_final_map_5_p_0((MR_Integer) 0, HeadClause_12, &HeadClauseInitArgs_15, InitAndFinalMap0_14, &InitAndFinalMap1_16);
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[1]), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_2[0]), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_4[0]), TailClauses_13, &TailClausesInitArgs_17, ((MR_Box) (InitAndFinalMap1_16)), &conv2_InitAndFinalMap_18);
    InitAndFinalMap_18 = ((MR_Word) (conv2_InitAndFinalMap_18));
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (HeadClauseInitArgs_15));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (TailClausesInitArgs_17));
    }
    AllClausesInitArgs_19 = mercury__set__intersect_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_26);
    HeadClauseContext_20 = ((MR_Word) ((MR_hl_field(0, HeadClause_12, 3))));
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_5[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_2));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (PredInfo_5));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (HeadVarNames_6));
      MR_hl_field(0, Var_27, 5) = ((MR_Box) (AllClausesInitArgs_19));
      MR_hl_field(0, Var_27, 6) = ((MR_Box) (InitAndFinalMap_18));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[2]), Var_27, Clauses_11, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv4_STATE_VARIABLE_Specs_1_28);
    STATE_VARIABLE_Specs_1_28 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_28));
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__pre_typecheck_scalar_common_5[1]));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__pre_typecheck__warn_about_any_unused_or_nonupdated_statevars_4_p_0_3));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_29, 3) = ((MR_Box) (PredInfo_5));
      MR_hl_field(0, Var_29, 4) = ((MR_Box) (HeadClauseContext_20));
      MR_hl_field(0, Var_29, 5) = ((MR_Box) (TailClauses_13));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), (MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[2]), Var_29, InitAndFinalMap_18, ((MR_Box) (STATE_VARIABLE_Specs_1_28)), &conv6_STATE_VARIABLE_Specs_22);
    *STATE_VARIABLE_Specs_22 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
check_hlds__pre_typecheck__build_init_and_final_map_5_p_0(
  MR_Word IsFirst_6,
  MR_Word Clause_7,
  MR_Word * ClauseInitArgs_8,
  MR_Word STATE_VARIABLE_InitAndFinalMap_0_13,
  MR_Word * STATE_VARIABLE_InitAndFinalMap_14)
{
  MR_Word UnusedSVarArgMap_10 = ((MR_Word) ((MR_hl_field(0, Clause_7, 5))));
  MR_Word UnusedSVarArgAL_11;
  MR_Word KeepAliveSet_12;
  MR_Word Var_15;
  MR_Word STATE_VARIABLE_InitAndFinalMap_1_16;
  MR_Word Var_17;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), UnusedSVarArgMap_10, &UnusedSVarArgAL_11);
  Var_15 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0));
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0));
  check_hlds__pre_typecheck__collect_init_and_final_args_8_p_0(IsFirst_6, UnusedSVarArgAL_11, Var_15, ClauseInitArgs_8, STATE_VARIABLE_InitAndFinalMap_0_13, &STATE_VARIABLE_InitAndFinalMap_1_16, Var_17, &KeepAliveSet_12);
  mercury__map__select_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__pre_typecheck__check_hlds__pre_typecheck__type_ctor_info_init_and_final_0), STATE_VARIABLE_InitAndFinalMap_1_16, KeepAliveSet_12, STATE_VARIABLE_InitAndFinalMap_14);
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
