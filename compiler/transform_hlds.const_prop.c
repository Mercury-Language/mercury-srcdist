/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2018-02-20
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


// :- module transform_hlds.const_prop.
// :- implementation.

/*
INIT mercury__transform_hlds__const_prop__init
ENDINIT
*/

#include "transform_hlds.const_prop.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.int_emu.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "libs.uint_emu.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3];

static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1];

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1];

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0;

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1];

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1;

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1];

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2];

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2];

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2];

static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__80__1_3_f_0(
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_Word LambdaHeadVar__1_27);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
  MR_Word Globals_9,
  MR_String ModuleName_10,
  MR_String Pred_11,
  MR_Integer ModeNum_12,
  MR_Word Args_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_21,
  MR_Word * STATE_VARIABLE_GoalInfo_22);

static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
  MR_Word OutputArg_6,
  MR_Word Cons_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14);

static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
  MR_Word OutputArg_6,
  MR_Word InputArg_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word Args_4,
  MR_Word * Result_5);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word Args_4,
  MR_Word * Result_5);

static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
  MR_Word X_4,
  MR_Word Y_5,
  MR_Word * Result_6);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
  MR_Word Globals_8,
  MR_String ModuleName_9,
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word Args_12,
  MR_Word * OutputArg_13,
  MR_Word * OutputArgVal_14);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * OutputArgVal_14);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_117_105_110_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_3_8_p_0(
  MR_Word Globals_9,
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
  MR_Word Globals_9,
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(
  MR_Word Globals_7,
  MR_String ProcName_8,
  MR_Integer ModeNum_9,
  MR_Word X_10,
  MR_Word * OutputArg_11,
  MR_Word * ConsId_12);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(
  MR_Word Globals_7,
  MR_String ProcName_8,
  MR_Integer ModeNum_9,
  MR_Word X_10,
  MR_Word * OutputArg_11,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_3[1][7];


/* sealed */ struct transform_hlds__const_prop__vector_common_type_2_0_s {
  const MR_String transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_2_0_s transform_hlds__const_prop_vector_common_2[64];



static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0))
  },
};


static /* final */ const struct transform_hlds__const_prop__vector_common_type_2_0_s transform_hlds__const_prop_vector_common_2[64] = {
  /* row 0 */
  {
    (MR_String) "+",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "-",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "\\",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "floor_to_multiple_of_bits_per_int",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "quot_bits_per_int",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "rem_bits_per_int",
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_String) "times_bits_per_int",
    (MR_Integer) 6
  },
  /* row 7 */
  {
    (MR_String) "unchecked_rem",
    (MR_Integer) -1
  },
  /* row 8 */
  {
    (MR_String) "unchecked_right_shift",
    (MR_Integer) -1
  },
  /* row 9 */
  {
    (MR_String) "xor",
    (MR_Integer) -1
  },
  /* row 10 */
  {
    (MR_String) "//",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    (MR_String) "\\/",
    (MR_Integer) -1
  },
  /* row 17 */
  {
    (MR_String) "+",
    (MR_Integer) 2
  },
  /* row 18 */
  {
    (MR_String) "*",
    (MR_Integer) -1
  },
  /* row 19 */
  {
    (MR_String) "-",
    (MR_Integer) 3
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    (MR_String) "mod",
    (MR_Integer) -1
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 28 */
  {
    (MR_String) "unchecked_left_shift",
    (MR_Integer) -1
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 30 */
  {
    (MR_String) "rem",
    (MR_Integer) -1
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 32 */
  {
    (MR_String) "/\\",
    (MR_Integer) -1
  },
  /* row 33 */
  {
    (MR_String) "<<",
    (MR_Integer) -1
  },
  /* row 34 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 35 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 36 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 37 */
  {
    (MR_String) ">>",
    (MR_Integer) -1
  },
  /* row 38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 39 */
  {
    (MR_String) "*",
    (MR_Integer) 0
  },
  /* row 40 */
  {
    (MR_String) "+",
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "-",
    (MR_Integer) 2
  },
  /* row 42 */
  {
    (MR_String) "/",
    (MR_Integer) 3
  },
  /* row 43 */
  {
    (MR_String) "unchecked_quotient",
    (MR_Integer) 4
  },
  /* row 44 */
  {
    (MR_String) "float",
    (MR_Integer) 0
  },
  /* row 45 */
  {
    (MR_String) "int",
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "string",
    (MR_Integer) 2
  },
  /* row 47 */
  {
    (MR_String) "uint",
    (MR_Integer) 3
  },
  /* row 48 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 49 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 50 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 51 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 52 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 53 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 54 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 55 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 56 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 57 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 58 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 59 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 60 */
  {
    (MR_String) "float",
    (MR_Integer) 0
  },
  /* row 61 */
  {
    (MR_String) "int",
    (MR_Integer) 1
  },
  /* row 62 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row 63 */
  {
    (MR_String) "uint",
    (MR_Integer) 3
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3] = {
  (MR_String) "arg_var",
  (MR_String) "arg_type",
  (MR_String) "arg_inst"
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0 = {
  (MR_String) "arg_hlds_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_hlds_info",
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0 },
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0 = {
  (MR_String) "const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1 = {
  (MR_String) "var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0
};

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1
  }
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0,
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_val_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_val_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_val",
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0 },
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0
};

static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__80__1_3_f_0(
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_Word LambdaHeadVar__1_27)
{
  {
    MR_Word LambdaHeadVar__2_28;
    MR_Word Type_22;
    MR_Word Inst_23;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_13, LambdaHeadVar__1_27, &Inst_23);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_12, LambdaHeadVar__1_27, &Type_22);
    {
      LambdaHeadVar__2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 0) = ((MR_Box) (LambdaHeadVar__1_27));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 1) = ((MR_Box) (Type_22));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, 2) = ((MR_Box) (Inst_23));
    }
    return LambdaHeadVar__2_28;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 0);

        transform_hlds__const_prop____Compare____arg_hlds_info_0_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
        succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        parse_tree__prog_data____Compare____mer_type_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_28;

    conv0_LambdaHeadVar__2_28 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__80__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
    return wrapper_arg_2;
  }
}

MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0(
  MR_Word Globals_11,
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_String ModuleName_14,
  MR_String ProcName_15,
  MR_Integer ModeNum_16,
  MR_Word Args_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_GoalInfo_0_25,
  MR_Word * STATE_VARIABLE_GoalInfo_26)
{
  {
    MR_bool succeeded;
    MR_Word LookupArgs_20;
    MR_Word ArgHldsInfos_24;

    {
      LookupArgs_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LookupArgs_20, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 3) = ((MR_Box) (VarTypes_12));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 4) = ((MR_Box) (InstMap_13));
    }
    ArgHldsInfos_24 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], (MR_Word) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0, LookupArgs_20, Args_17);
    succeeded = transform_hlds__const_prop__evaluate_call_2_8_p_0(Globals_11, ModuleName_14, ProcName_15, ModeNum_16, ArgHldsInfos_24, GoalExpr_18, STATE_VARIABLE_GoalInfo_0_25, STATE_VARIABLE_GoalInfo_26);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
  MR_Word Globals_9,
  MR_String ModuleName_10,
  MR_String Pred_11,
  MR_Integer ModeNum_12,
  MR_Word Args_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_21,
  MR_Word * STATE_VARIABLE_GoalInfo_22)
{
  {
    MR_bool succeeded;
    MR_Word OutputArg_16;
    MR_Word Cons_17;

    succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(Globals_9, ModuleName_10, Pred_11, ModeNum_12, Args_13, &OutputArg_16, &Cons_17);
    if (succeeded)
    {
      MR_Word Delta0_48;
      MR_Word Inst_49;
      MR_Word Delta_50;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_GoalInfo_22_58;
      MR_Word Goal_66;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_67;
      MR_Word Var_61;
      MR_Word Var_62;

      Var_68 = mercury__term__context_init_0_f_0();
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 0)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 1)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 2)));
      hlds__make_goal__make_const_construction_4_p_0(Var_68, Var_69, Cons_17, &Goal_66);
      *GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_66, (MR_Integer) 0)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_66, (MR_Integer) 1)));
      Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_21);
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Cons_17));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Inst_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Inst_49, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Inst_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), Inst_49, 3) = ((MR_Box) (Var_53));
      }
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 0)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 1)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 2)));
      hlds__instmap__instmap_delta_set_var_4_p_0(Var_57, Inst_49, Delta0_48, &Delta_50);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_50, STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22_58);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_GoalInfo_22_58, STATE_VARIABLE_GoalInfo_22);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Succeeded_18;

      succeeded = transform_hlds__const_prop__evaluate_test_5_p_0(ModuleName_10, Pred_11, ModeNum_12, Args_13, &Succeeded_18);
      if (succeeded)
      {
        switch (Succeeded_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
            break;
          case (MR_Integer) 1:
            *GoalExpr_14 = hlds__make_goal__true_goal_expr_0_f_0();
            break;
        }
        *STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_0_21;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Result_19;

        succeeded = transform_hlds__const_prop__evaluate_semidet_call_5_p_0(ModuleName_10, Pred_11, ModeNum_12, Args_13, &Result_19);
        if (succeeded)
        {
          if ((Result_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
            *STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_0_21;
          }
          else
          {
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_19, (MR_Integer) 0)));
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word Cons_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));

              transform_hlds__const_prop__make_construction_goal_5_p_0(Var_41, Cons_31, GoalExpr_14, STATE_VARIABLE_GoalInfo_0_21, STATE_VARIABLE_GoalInfo_22);
            }
            else
            {
              MR_Word InputArg_20 = (MR_Word) MR_body(((MR_Word) Var_40), (MR_Integer) 0);

              transform_hlds__const_prop__make_assignment_goal_5_p_0(Var_41, InputArg_20, GoalExpr_14, STATE_VARIABLE_GoalInfo_0_21, STATE_VARIABLE_GoalInfo_22);
            }
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
  MR_Word OutputArg_6,
  MR_Word Cons_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14)
{
  {
    MR_Word Delta0_10;
    MR_Word Inst_11;
    MR_Word Delta_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_GoalInfo_22_22;
    MR_Word Goal_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_31;
    MR_Word Var_25;
    MR_Word Var_26;

    Var_32 = mercury__term__context_init_0_f_0();
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 1)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 2)));
    hlds__make_goal__make_const_construction_4_p_0(Var_32, Var_33, Cons_7, &Goal_30);
    *GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_30, (MR_Integer) 0)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_30, (MR_Integer) 1)));
    Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Cons_7));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), Inst_11, 3) = ((MR_Box) (Var_17));
    }
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 2)));
    hlds__instmap__instmap_delta_set_var_4_p_0(Var_21, Inst_11, Delta0_10, &Delta_12);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_12, STATE_VARIABLE_GoalInfo_0_13, &STATE_VARIABLE_GoalInfo_22_22);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_GoalInfo_22_22, STATE_VARIABLE_GoalInfo_14);
  }
}

static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
  MR_Word OutputArg_6,
  MR_Word InputArg_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13)
{
  {
    MR_Word Delta0_10;
    MR_Word Delta_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_GoalInfo_16_16;
    MR_Word OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0)));
    MR_Word InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 0)));
    MR_Word Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 2)));
    MR_Word OutputArgMode_29;
    MR_Word InputArgMode_30;
    MR_Word UnifyMode_31;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 2)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 1)));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    {
      OutputArgMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutputArgMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), OutputArgMode_29, 1) = ((MR_Box) (Inst_28));
    }
    {
      InputArgMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InputArgMode_30, 0) = ((MR_Box) (Inst_28));
      MR_hl_field(MR_mktag(0), InputArgMode_30, 1) = ((MR_Box) (Inst_28));
    }
    {
      UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_31, 0) = ((MR_Box) (OutputArgMode_29));
      MR_hl_field(MR_mktag(0), UnifyMode_31, 1) = ((MR_Box) (InputArgMode_30));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (InVar_27));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (OutVar_26));
      MR_hl_field(MR_mktag(2), Var_38, 1) = ((MR_Box) (InVar_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *Goal_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OutVar_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_31));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
    }
    Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 1)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 2)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 0)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 1)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 2)));
    hlds__instmap__instmap_delta_set_var_4_p_0(Var_14, Var_15, Delta0_10, &Delta_11);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_11, STATE_VARIABLE_GoalInfo_0_12, &STATE_VARIABLE_GoalInfo_16_16);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_GoalInfo_16_16, STATE_VARIABLE_GoalInfo_13);
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word Args_4,
  MR_Word * Result_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((strcmp(HeadVar__1_1, (MR_String) "builtin") == 0))
    {
      MR_String Var_8;
      MR_String Var_9;
      MR_Integer Var_10;
      MR_String next_value_of_HeadVar__1_1;
      MR_String next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      succeeded = (strcmp(HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_8 = (MR_String) "private_builtin";
          Var_9 = (MR_String) "typed_unify";
          Var_10 = (MR_Integer) 1;
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Var_8;
          next_value_of_HeadVar__2_2 = Var_9;
          next_value_of_HeadVar__3_3 = Var_10;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "private_builtin") == 0))
    {
      MR_Word TypeOfX_14;
      MR_Word TypeOfY_15;
      MR_Word X_16;
      MR_Word Y_17;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word TypeInfo_36_57;
      MR_Word Var_36;
      MR_Word Var_55;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;

      succeeded = (strcmp(HeadVar__2_2, (MR_String) "typed_unify") == 0);
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_4)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            TypeOfX_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_4, (MR_Integer) 0)));
            Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_4, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
              Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
                Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
                  Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
                  succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                  {
                    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 0)));
                    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 1)));
                    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 2)));
                    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 0)));
                    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 1)));
                    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 2)));
                    TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_57, ((MR_Box) (Var_36)), ((MR_Box) (Var_55)));
                    if (succeeded)
                    {
                      MR_Word Var_23;
                      MR_Word Var_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) X_16);

                      {
                        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Y_17));
                        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Var_24));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *Result_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word XCtor_30;
                      MR_Word XArgVars_31;
                      MR_Word YCtor_34;
                      MR_Word YArgVars_35;
                      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 2)));
                      MR_Word Var_38;
                      MR_Word Var_39;
                      MR_Word Var_40;
                      MR_Word Var_41;
                      MR_Word Var_42;
                      MR_Word Var_43;
                      MR_Word Var_44;
                      MR_Word Result0_65;
                      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 0)));
                      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 1)));
                      MR_Word Var_28;
                      MR_Word Var_29;
                      MR_Word Var_52;
                      MR_Word Var_53;
                      MR_Word Var_32;
                      MR_Word Var_33;
                      MR_Word TypeInfo_38_59;

                      succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 1)));
                        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 2)));
                        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 3)));
                        succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1)));
                          succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));
                            XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1)));
                            Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 0)));
                            Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 1)));
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 1)));
                              Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 2)));
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
                                Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1)));
                                succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0)));
                                  YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1)));
                                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_30, YCtor_34);
                                  if (succeeded)
                                  {
                                    TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_59, ((MR_Box) (XArgVars_31)), ((MR_Box) (YArgVars_35)));
                                  }
                                  if (succeeded)
                                  {
                                    Result0_65 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_30, YCtor_34);
                                    succeeded = !(succeeded);
                                    if (!(succeeded))
                                    {
                                      MR_Word TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                                      MR_Integer Var_45;
                                      MR_Integer Var_56;

                                      Var_45 = mercury__list__length_1_f_0(TypeCtorInfo_33_54, XArgVars_31);
                                      Var_56 = mercury__list__length_1_f_0(TypeCtorInfo_33_54, YArgVars_35);
                                      succeeded = (Var_45 == Var_56);
                                      succeeded = !(succeeded);
                                    }
                                    if (succeeded)
                                    {
                                      Result0_65 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    switch (Result0_65) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        *Result_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word Var_61;
                                          MR_Word Var_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) X_16);

                                          {
                                            Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Y_17));
                                            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
                                          }
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                            *Result_5 = base;
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_61));
                                          }
                                        }
                                        break;
                                    }
                                    succeeded = MR_TRUE;
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
        }
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word Args_4,
  MR_Word * Result_5)
{
  {
    MR_bool succeeded = (HeadVar__3_3 == (MR_Integer) 0);
    MR_Word Var_360;
    MR_Word Var_361;
    MR_Word Var_368;
    MR_Word Var_369;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_4, (MR_Integer) 0)));
        Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_4, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_360)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_360, (MR_Integer) 0)));
          Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_360, (MR_Integer) 1)));
          // binary string jump switch
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(HeadVar__1_1, ((&transform_hlds__const_prop_vector_common_2[60 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              switch (((&transform_hlds__const_prop_vector_common_2[60 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    // case "float"
                    {
                      MR_Word Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 2)));
                      MR_Word Var_379;
                      MR_Word Var_388;
                      MR_Word Var_397;
                      MR_Word Var_406;
                      MR_Word Var_407;
                      MR_Word Var_412;
                      MR_Word Var_413;
                      MR_Word Var_418;
                      MR_Word Var_419;
                      MR_Word Var_424;
                      MR_Word Var_425;
                      MR_Float Var_430;
                      MR_Float Var_433;
                      MR_Word Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 1)));
                      MR_Word Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 0)));
                      MR_Word Var_380;
                      MR_Word Var_381;
                      MR_Word Var_389;
                      MR_Word Var_390;
                      MR_Word Var_398;
                      MR_Word Var_399;
                      MR_Integer lo_12;
                      MR_Integer hi_13;
                      MR_Integer mid_14;
                      MR_Integer result_15;

                      succeeded = (Var_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 0)));
                        Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 1)));
                        Var_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 2)));
                        succeeded = ((((MR_tag((MR_Word) Var_370)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_370, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_370, (MR_Integer) 1)));
                          Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_370, (MR_Integer) 2)));
                          Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_370, (MR_Integer) 3)));
                          succeeded = ((((MR_tag((MR_Word) Var_379)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_379, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_379, (MR_Integer) 1)));
                            Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_379, (MR_Integer) 2)));
                            Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_379, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_388)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_388, (MR_Integer) 0)));
                              Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_388, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_397)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_397, (MR_Integer) 0)));
                                Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_397, (MR_Integer) 1)));
                                succeeded = (Var_406 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_407, (MR_Integer) 0)));
                                  Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_407, (MR_Integer) 1)));
                                  succeeded = (Var_412 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_413, (MR_Integer) 0)));
                                    Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_413, (MR_Integer) 1)));
                                    succeeded = (Var_418 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_419)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_419, (MR_Integer) 0)))) == (MR_Integer) 15)));
                                      if (succeeded)
                                      {
                                        Var_430 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_419, (MR_Integer) 1)));
                                        succeeded = (Var_424 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (succeeded)
                                        {
                                          succeeded = ((((MR_tag((MR_Word) Var_425)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_425, (MR_Integer) 0)))) == (MR_Integer) 15)));
                                          if (succeeded)
                                          {
                                            Var_433 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_425, (MR_Integer) 1)));
                                            // binary string jump switch
                                            lo_12 = (MR_Integer) 0;
                                            hi_13 = (MR_Integer) 3;
                                            do
                                            {
                                              mid_14 = (((lo_12 + hi_13)) / (MR_Integer) 2);
                                              result_15 = MR_strcmp(HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_2[56 + mid_14]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                              if ((result_15 == (MR_Integer) 0))
                                              {
                                                switch (((&transform_hlds__const_prop_vector_common_2[56 + mid_14]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      // case "<"
                                                      succeeded = (Var_430 < Var_433);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      // case "=<"
                                                      succeeded = (Var_430 <= Var_433);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      // case ">"
                                                      succeeded = (Var_430 > Var_433);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      // case ">="
                                                      succeeded = (Var_430 >= Var_433);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                                // jump out of search loop
                                                goto label_2;
                                              }
                                              else
                                              if ((result_15 < (MR_Integer) 0))
                                                hi_13 = (mid_14 - (MR_Integer) 1);
                                              else
                                                lo_12 = (mid_14 + (MR_Integer) 1);
                                            }
                                            while ((lo_12 <= hi_13));
                                            succeeded = MR_FALSE;
                                          label_2:;
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
                  break;
                case (MR_Integer) 1:
                  {
                    // case "int"
                    {
                      MR_Word Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 2)));
                      MR_Word Var_382;
                      MR_Word Var_391;
                      MR_Word Var_400;
                      MR_Word Var_408;
                      MR_Word Var_409;
                      MR_Word Var_414;
                      MR_Word Var_415;
                      MR_Word Var_420;
                      MR_Word Var_421;
                      MR_Word Var_426;
                      MR_Word Var_427;
                      MR_Integer Var_431;
                      MR_Integer Var_434;
                      MR_Word Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 1)));
                      MR_Word Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 0)));
                      MR_Word Var_383;
                      MR_Word Var_384;
                      MR_Word Var_392;
                      MR_Word Var_393;
                      MR_Word Var_401;
                      MR_Word Var_402;
                      MR_Integer lo_8;
                      MR_Integer hi_9;
                      MR_Integer mid_10;
                      MR_Integer result_11;

                      succeeded = (Var_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 0)));
                        Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 1)));
                        Var_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 2)));
                        succeeded = ((((MR_tag((MR_Word) Var_373)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_373, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_373, (MR_Integer) 1)));
                          Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_373, (MR_Integer) 2)));
                          Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_373, (MR_Integer) 3)));
                          succeeded = ((((MR_tag((MR_Word) Var_382)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_382, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_382, (MR_Integer) 1)));
                            Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_382, (MR_Integer) 2)));
                            Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_382, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_391)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_391, (MR_Integer) 0)));
                              Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_391, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_400)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_400, (MR_Integer) 0)));
                                Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_400, (MR_Integer) 1)));
                                succeeded = (Var_408 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_409, (MR_Integer) 0)));
                                  Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_409, (MR_Integer) 1)));
                                  succeeded = (Var_414 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_415, (MR_Integer) 0)));
                                    Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_415, (MR_Integer) 1)));
                                    succeeded = (Var_420 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_421)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_421, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                      if (succeeded)
                                      {
                                        Var_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_421, (MR_Integer) 1)));
                                        succeeded = (Var_426 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (succeeded)
                                        {
                                          succeeded = ((((MR_tag((MR_Word) Var_427)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_427, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                          if (succeeded)
                                          {
                                            Var_434 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_427, (MR_Integer) 1)));
                                            // binary string jump switch
                                            lo_8 = (MR_Integer) 0;
                                            hi_9 = (MR_Integer) 3;
                                            do
                                            {
                                              mid_10 = (((lo_8 + hi_9)) / (MR_Integer) 2);
                                              result_11 = MR_strcmp(HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_2[52 + mid_10]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                              if ((result_11 == (MR_Integer) 0))
                                              {
                                                switch (((&transform_hlds__const_prop_vector_common_2[52 + mid_10]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      // case "<"
                                                      succeeded = (Var_431 < Var_434);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      // case "=<"
                                                      succeeded = (Var_431 <= Var_434);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      // case ">"
                                                      succeeded = (Var_431 > Var_434);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      // case ">="
                                                      succeeded = (Var_431 >= Var_434);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                                // jump out of search loop
                                                goto label_1;
                                              }
                                              else
                                              if ((result_11 < (MR_Integer) 0))
                                                hi_9 = (mid_10 - (MR_Integer) 1);
                                              else
                                                lo_8 = (mid_10 + (MR_Integer) 1);
                                            }
                                            while ((lo_8 <= hi_9));
                                            succeeded = MR_FALSE;
                                          label_1:;
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
                  break;
                case (MR_Integer) 2:
                  {
                    // case "private_builtin"
                    {
                      MR_Word X_299;
                      MR_Word Y_300;
                      MR_Word Result0_301;
                      MR_Word Var_304;
                      MR_Word Var_305;

                      succeeded = (strcmp(HeadVar__2_2, (MR_String) "typed_unify") == 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_368)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          X_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_368, (MR_Integer) 0)));
                          Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_368, (MR_Integer) 1)));
                          succeeded = ((MR_tag((MR_Word) Var_304)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Y_300 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_304, (MR_Integer) 0)));
                            Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_304, (MR_Integer) 1)));
                            succeeded = (Var_305 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__eval_unify_3_p_0(Var_361, Var_369, &Result0_301);
                              if (succeeded)
                                switch (Result0_301) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      *Result_5 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    succeeded = transform_hlds__const_prop__eval_unify_3_p_0(X_299, Y_300, Result_5);
                                    break;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    // case "uint"
                    {
                      MR_Word Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 2)));
                      MR_Word Var_385;
                      MR_Word Var_394;
                      MR_Word Var_403;
                      MR_Word Var_410;
                      MR_Word Var_411;
                      MR_Word Var_416;
                      MR_Word Var_417;
                      MR_Word Var_422;
                      MR_Word Var_423;
                      MR_Word Var_428;
                      MR_Word Var_429;
                      MR_Unsigned Var_432;
                      MR_Unsigned Var_435;
                      MR_Word Var_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 1)));
                      MR_Word Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_361, (MR_Integer) 0)));
                      MR_Word Var_386;
                      MR_Word Var_387;
                      MR_Word Var_395;
                      MR_Word Var_396;
                      MR_Word Var_404;
                      MR_Word Var_405;
                      MR_Integer lo_4;
                      MR_Integer hi_5;
                      MR_Integer mid_6;
                      MR_Integer result_7;

                      succeeded = (Var_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 0)));
                        Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 1)));
                        Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_369, (MR_Integer) 2)));
                        succeeded = ((((MR_tag((MR_Word) Var_376)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_376, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_376, (MR_Integer) 1)));
                          Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_376, (MR_Integer) 2)));
                          Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_376, (MR_Integer) 3)));
                          succeeded = ((((MR_tag((MR_Word) Var_385)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_385, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_385, (MR_Integer) 1)));
                            Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_385, (MR_Integer) 2)));
                            Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_385, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_394)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_394, (MR_Integer) 0)));
                              Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_394, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_403)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_403, (MR_Integer) 0)));
                                Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_403, (MR_Integer) 1)));
                                succeeded = (Var_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_411, (MR_Integer) 0)));
                                  Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_411, (MR_Integer) 1)));
                                  succeeded = (Var_416 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_417, (MR_Integer) 0)));
                                    Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_417, (MR_Integer) 1)));
                                    succeeded = (Var_422 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_423)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_423, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        Var_432 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_423, (MR_Integer) 1)));
                                        succeeded = (Var_428 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (succeeded)
                                        {
                                          succeeded = ((((MR_tag((MR_Word) Var_429)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_429, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                          if (succeeded)
                                          {
                                            Var_435 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_429, (MR_Integer) 1)));
                                            // binary string jump switch
                                            lo_4 = (MR_Integer) 0;
                                            hi_5 = (MR_Integer) 3;
                                            do
                                            {
                                              mid_6 = (((lo_4 + hi_5)) / (MR_Integer) 2);
                                              result_7 = MR_strcmp(HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_2[48 + mid_6]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                              if ((result_7 == (MR_Integer) 0))
                                              {
                                                switch (((&transform_hlds__const_prop_vector_common_2[48 + mid_6]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      // case "<"
                                                      succeeded = (Var_432 < Var_435);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      // case "=<"
                                                      succeeded = (Var_432 <= Var_435);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      // case ">"
                                                      succeeded = (Var_432 > Var_435);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      // case ">="
                                                      succeeded = (Var_432 >= Var_435);
                                                      if (succeeded)
                                                        *Result_5 = (MR_Integer) 1;
                                                      else
                                                        *Result_5 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                                // jump out of search loop
                                                goto label_0;
                                              }
                                              else
                                              if ((result_7 < (MR_Integer) 0))
                                                hi_5 = (mid_6 - (MR_Integer) 1);
                                              else
                                                lo_4 = (mid_6 + (MR_Integer) 1);
                                            }
                                            while ((lo_4 <= hi_5));
                                            succeeded = MR_FALSE;
                                          label_0:;
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
                  break;
              }
              // jump out of search loop
              goto label_3;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (mid_2 - (MR_Integer) 1);
            else
              lo_0 = (mid_2 + (MR_Integer) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_3:;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
  MR_Word X_4,
  MR_Word Y_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 2)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 2)));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (Var_15)), ((MR_Box) (Var_34)));
    if (succeeded)
    {
      *Result_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word XCtor_9;
      MR_Word XArgVars_10;
      MR_Word YCtor_13;
      MR_Word YArgVars_14;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 2)));
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 1)));
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word TypeInfo_38_38;

      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1)));
        Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 2)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 3)));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
            XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 0)));
            Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 1)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 2)));
            succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1)));
              Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2)));
              Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 3)));
              succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
                Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
                succeeded = (Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
                  YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_9, YCtor_13);
                  if (succeeded)
                  {
                    TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (XArgVars_10)), ((MR_Box) (YArgVars_14)));
                  }
                  if (succeeded)
                  {
                    *Result_6 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_9, YCtor_13);
                    succeeded = !(succeeded);
                    if (!(succeeded))
                    {
                      MR_Word TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      MR_Integer Var_24;
                      MR_Integer Var_35;

                      Var_24 = mercury__list__length_1_f_0(TypeCtorInfo_33_33, XArgVars_10);
                      Var_35 = mercury__list__length_1_f_0(TypeCtorInfo_33_33, YArgVars_14);
                      succeeded = (Var_24 == Var_35);
                      succeeded = !(succeeded);
                    }
                    if (succeeded)
                    {
                      *Result_6 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
  MR_Word Globals_8,
  MR_String ModuleName_9,
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word Args_12,
  MR_Word * OutputArg_13,
  MR_Word * OutputArgVal_14)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_12)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));
      Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
      // binary string jump switch
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(ModuleName_9, ((&transform_hlds__const_prop_vector_common_2[44 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&transform_hlds__const_prop_vector_common_2[44 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "float"
                {
                  MR_Word Var_101;
                  MR_Word Var_102;

                  succeeded = ((MR_tag((MR_Word) Var_99)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0)));
                    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1)));
                    if ((Var_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(ProcName_10, ModeNum_11, Var_100, Var_102, OutputArg_13, OutputArgVal_14);
                    else
                    {
                      MR_Word Z_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 0)));
                      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 1)));

                      succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                        succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(ProcName_10, ModeNum_11, Var_100, Var_102, Z_17, OutputArg_13, OutputArgVal_14);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "int"
                if ((Var_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  succeeded = transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, OutputArg_13, OutputArgVal_14);
                else
                {
                  MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1)));
                  MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0)));

                  if ((Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, Var_104, OutputArg_13, OutputArgVal_14);
                  else
                  {
                    MR_Word Z_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_103, (MR_Integer) 0)));
                    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_103, (MR_Integer) 1)));

                    succeeded = (Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, Var_104, Z_27, OutputArg_13, OutputArgVal_14);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "string"
                {
                  MR_Word Var_105;
                  MR_Word Var_106;

                  succeeded = ((MR_tag((MR_Word) Var_99)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0)));
                    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1)));
                    if ((Var_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(ProcName_10, ModeNum_11, Var_100, Var_106, OutputArg_13, OutputArgVal_14);
                    else
                    {
                      MR_Word Z_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_105, (MR_Integer) 0)));
                      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_105, (MR_Integer) 1)));

                      succeeded = (Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                        succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(ProcName_10, ModeNum_11, Var_100, Var_106, Z_47, OutputArg_13, OutputArgVal_14);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                // case "uint"
                if ((Var_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  succeeded = transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, OutputArg_13, OutputArgVal_14);
                else
                {
                  MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1)));
                  MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0)));

                  if ((Var_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_117_105_110_116_95_50_95_95_91_49_93_95_48_7_p_0(ProcName_10, ModeNum_11, Var_100, Var_108, OutputArg_13, OutputArgVal_14);
                  else
                  {
                    MR_Word Z_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_107, (MR_Integer) 0)));
                    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_107, (MR_Integer) 1)));

                    succeeded = (Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                      succeeded = transform_hlds__const_prop__evaluate_det_call_uint_3_8_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, Var_108, Z_67, OutputArg_13, OutputArgVal_14);
                  }
                }
              }
              break;
          }
          // jump out of search loop
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (mid_2 - (MR_Integer) 1);
        else
          lo_0 = (mid_2 + (MR_Integer) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;
    MR_String OutputArgVal_16;
    MR_String XVal_19;
    MR_String YVal_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_20;
    MR_Word Var_21;

    if ((strcmp(ProcName_10, (MR_String) "++") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(ProcName_10, (MR_String) "append") == 0))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = (ModeNum_11 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
        Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
        succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 1)));
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 2)));
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0)));
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
            succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 17)));
            if (succeeded)
            {
              XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1)));
              succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = (Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                  Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                  Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 1)));
                    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 2)));
                    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
                      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
                      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
                      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1)));
                      succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0)))) == (MR_Integer) 17)));
                      if (succeeded)
                      {
                        YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1)));
                        succeeded = (Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = (Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            *OutputArg_15 = Z_14;
                            OutputArgVal_16 = mercury__string__f_43_43_2_f_0(XVal_19, YVal_22);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_16));
                            }
                            succeeded = MR_TRUE;
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded = (ModeNum_11 == (MR_Integer) 0);
    MR_Float OutputArgVal_16;
    MR_Word Var_127;
    MR_Word Var_130;
    MR_Word Var_133;
    MR_Word Var_136;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Float Var_147;
    MR_Float Var_148;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
      Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
      Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
      Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
      Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
      Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
      succeeded = ((((MR_tag((MR_Word) Var_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 1)));
        Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 2)));
        Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 3)));
        succeeded = ((((MR_tag((MR_Word) Var_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 1)));
          Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 2)));
          Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) Var_133)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_133, (MR_Integer) 0)));
            Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_133, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_136)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_136, (MR_Integer) 0)));
              Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_136, (MR_Integer) 1)));
              succeeded = (Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_140, (MR_Integer) 0)));
                Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_140, (MR_Integer) 1)));
                succeeded = (Var_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 0)));
                  Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 1)));
                  succeeded = (Var_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Var_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_144, (MR_Integer) 0)))) == (MR_Integer) 15)));
                    if (succeeded)
                    {
                      Var_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_144, (MR_Integer) 1)));
                      succeeded = (Var_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_146, (MR_Integer) 0)))) == (MR_Integer) 15)));
                        if (succeeded)
                        {
                          Var_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_146, (MR_Integer) 1)));
                          // binary string jump switch
                          lo_0 = (MR_Integer) 0;
                          hi_1 = (MR_Integer) 4;
                          do
                          {
                            mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
                            result_3 = MR_strcmp(ProcName_10, ((&transform_hlds__const_prop_vector_common_2[39 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                            if ((result_3 == (MR_Integer) 0))
                            {
                              switch (((&transform_hlds__const_prop_vector_common_2[39 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    // case "*"
                                    *OutputArg_15 = Z_14;
                                    OutputArgVal_16 = (Var_147 * Var_148);
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    // case "+"
                                    *OutputArg_15 = Z_14;
                                    OutputArgVal_16 = (Var_147 + Var_148);
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    // case "-"
                                    *OutputArg_15 = Z_14;
                                    OutputArgVal_16 = (Var_147 - Var_148);
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 3:
                                  {
                                    // case "/"
                                    *OutputArg_15 = Z_14;
                                    succeeded = (Var_148 == ((MR_Float) 0.0000000000000000));
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      OutputArgVal_16 = mercury__float__f_slash_2_f_0(Var_147, Var_148);
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 4:
                                  {
                                    // case "unchecked_quotient"
                                    *OutputArg_15 = Z_14;
                                    succeeded = (Var_148 == ((MR_Float) 0.0000000000000000));
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      OutputArgVal_16 = (Var_147 / Var_148);
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                              }
                              // jump out of search loop
                              goto label_0;
                            }
                            else
                            if ((result_3 < (MR_Integer) 0))
                              hi_1 = (mid_2 - (MR_Integer) 1);
                            else
                              lo_0 = (mid_2 + (MR_Integer) 1);
                          }
                          while ((lo_0 <= hi_1));
                          succeeded = MR_FALSE;
                        label_0:;
                          if (succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                              MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(OutputArgVal_16);
                            }
                            succeeded = MR_TRUE;
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * OutputArgVal_14)
{
  {
    MR_bool succeeded = (strcmp(ProcName_9, (MR_String) "count_codepoints") == 0);
    MR_String XVal_17;
    MR_Integer CodePointCountX_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = (ModeNum_10 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2)));
        succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1)));
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 2)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1)));
            succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 17)));
            if (succeeded)
            {
              XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1)));
              succeeded = (Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  *OutputArg_13 = Y_12;
                  CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(XVal_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *OutputArgVal_14 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CodePointCountX_18));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded = (ModeNum_10 == (MR_Integer) 0);
    MR_Float OutputArgVal_14;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Float Var_47;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;

    if (succeeded)
    {
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2)));
      succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 1)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 2)));
        Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 3)));
        succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
          Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
          succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0)));
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1)));
            succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                Var_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1)));
                if ((strcmp(ProcName_9, (MR_String) "+") == 0))
                {
                  *OutputArg_13 = Y_12;
                  OutputArgVal_14 = Var_47;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(ProcName_9, (MR_String) "-") == 0))
                {
                  *OutputArg_13 = Y_12;
                  OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - Var_47);
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(OutputArgVal_14);
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_117_105_110_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded = (strcmp(ProcName_9, (MR_String) "\\") == 0);
    MR_Unsigned OutputArgVal_14;
    MR_Unsigned XVal_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = (ModeNum_10 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0)));
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2)));
        succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 1)));
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 2)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1)));
            succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              XVal_17 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = (Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  *OutputArg_13 = Y_12;
                  OutputArgVal_14 = ~(XVal_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_14));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_3_8_p_0(
  MR_Word Globals_9,
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;
    MR_Unsigned OutputArgVal_16;
    MR_Integer slot_0 = ((MR_hash_string6(ProcName_10)) & (MR_Integer) 31);
    MR_String str_1;

    // hashed string jump switch
    // compute the hash value of the input string
    // hash chain loop
    do
    {
      // lookup the string for this hash slot
      str_1 = ((&transform_hlds__const_prop_vector_common_2[7 + slot_0]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0;
      // did we find a match?
      if ((((str_1 != NULL)) && ((strcmp(str_1, ProcName_10) == 0))))
      {
        // we found a match; dispatch to the corresponding code
        switch (slot_0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // case "unchecked_rem"
              {
                MR_Word Var_185;
                MR_Word Var_186;
                MR_Word Var_187;
                MR_Word Var_188;
                MR_Word Var_189;
                MR_Word Var_190;
                MR_Word Var_191;
                MR_Word Var_192;
                MR_Word Var_193;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word Var_196;
                MR_Word Var_197;
                MR_Word Var_198;
                MR_Unsigned XVal_365;
                MR_Unsigned YVal_366;
                MR_Word BitsPerUInt_367;
                MR_Word Var_426;
                MR_Word Var_427;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_428;
                MR_Word Var_429;
                MR_Word Var_63;
                MR_Word Var_64;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_185)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_185, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_185, (MR_Integer) 1)));
                    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_185, (MR_Integer) 2)));
                    Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_185, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_186)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_186, (MR_Integer) 0)));
                      Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_186, (MR_Integer) 1)));
                      succeeded = (Var_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_187, (MR_Integer) 0)));
                        Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_187, (MR_Integer) 1)));
                        succeeded = (Var_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_188)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_188, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_365 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_188, (MR_Integer) 1)));
                            Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_191)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_191, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_191, (MR_Integer) 1)));
                              Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_191, (MR_Integer) 2)));
                              Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_191, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 0)));
                                Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 1)));
                                succeeded = (Var_196 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_193, (MR_Integer) 0)));
                                  Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_193, (MR_Integer) 1)));
                                  succeeded = (Var_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_194)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_194, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_366 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_194, (MR_Integer) 1)));
                                      succeeded = (YVal_366 == 0U);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        *OutputArg_15 = Z_14;
                                        Var_197 = (MR_Integer) 238;
                                        Var_198 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_197, Var_198);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_367);
                                          succeeded = libs__uint_emu__unchecked_rem_4_p_0(BitsPerUInt_367, XVal_365, YVal_366, &OutputArgVal_16);
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
              }
            }
            break;
          case (MR_Integer) 1:
            {
              // case "unchecked_right_shift"
              {
                MR_Word Var_143;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_146;
                MR_Word Var_147;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Word Var_154;
                MR_Word Var_155;
                MR_Word Var_156;
                MR_Unsigned XVal_374;
                MR_Integer YVal_375;
                MR_Word BitsPerUInt_376;
                MR_Word Var_438;
                MR_Word Var_439;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_440;
                MR_Word Var_441;
                MR_Word Var_75;
                MR_Word Var_76;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_143)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_143, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_143, (MR_Integer) 1)));
                    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_143, (MR_Integer) 2)));
                    Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_143, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_144)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_144, (MR_Integer) 0)));
                      Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_144, (MR_Integer) 1)));
                      succeeded = (Var_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 0)));
                        Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 1)));
                        succeeded = (Var_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_374 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_146, (MR_Integer) 1)));
                            Var_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_149)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_149, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_149, (MR_Integer) 1)));
                              Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_149, (MR_Integer) 2)));
                              Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_149, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_150)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_150, (MR_Integer) 0)));
                                Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_150, (MR_Integer) 1)));
                                succeeded = (Var_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_151, (MR_Integer) 0)));
                                  Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_151, (MR_Integer) 1)));
                                  succeeded = (Var_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_152)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_152, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_375 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_152, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_155 = (MR_Integer) 238;
                                      Var_156 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_155, Var_156);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_376);
                                        succeeded = libs__uint_emu__unchecked_right_shift_4_p_0(BitsPerUInt_376, XVal_374, YVal_375, &OutputArgVal_16);
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
            }
            break;
          case (MR_Integer) 2:
            {
              // case "xor"
              {
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Word Var_97;
                MR_Word Var_98;
                MR_Word Var_99;
                MR_Word Var_100;
                MR_Word Var_101;
                MR_Word Var_102;
                MR_Word Var_103;
                MR_Word Var_104;
                MR_Unsigned XVal_384;
                MR_Unsigned YVal_385;
                MR_Word Var_454;
                MR_Word Var_455;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_456;
                MR_Word Var_457;
                MR_Word Var_91;
                MR_Word Var_92;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_93, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_93, (MR_Integer) 1)));
                    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_93, (MR_Integer) 2)));
                    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_93, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_94)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0)));
                      Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 1)));
                      succeeded = (Var_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 0)));
                        Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 1)));
                        succeeded = (Var_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_384 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 1)));
                            Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_99, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_99, (MR_Integer) 1)));
                              Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_99, (MR_Integer) 2)));
                              Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_99, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_100, (MR_Integer) 0)));
                                Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_100, (MR_Integer) 1)));
                                succeeded = (Var_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 0)));
                                  Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 1)));
                                  succeeded = (Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_102)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_102, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_385 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_102, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      OutputArgVal_16 = (XVal_384 ^ YVal_385);
                                      succeeded = MR_TRUE;
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
            break;
          case (MR_Integer) 3:
            {
              // case "//"
              {
                MR_Word Var_227;
                MR_Word Var_228;
                MR_Word Var_229;
                MR_Word Var_230;
                MR_Word Var_231;
                MR_Word Var_232;
                MR_Word Var_233;
                MR_Word Var_234;
                MR_Word Var_235;
                MR_Word Var_236;
                MR_Word Var_237;
                MR_Word Var_238;
                MR_Word Var_239;
                MR_Word Var_240;
                MR_Unsigned XVal_356;
                MR_Unsigned YVal_357;
                MR_Word BitsPerUInt_358;
                MR_Word Var_414;
                MR_Word Var_415;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_416;
                MR_Word Var_417;
                MR_Word Var_51;
                MR_Word Var_52;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_227)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_227, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_227, (MR_Integer) 1)));
                    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_227, (MR_Integer) 2)));
                    Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_227, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_228)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_228, (MR_Integer) 0)));
                      Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_228, (MR_Integer) 1)));
                      succeeded = (Var_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_229, (MR_Integer) 0)));
                        Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_229, (MR_Integer) 1)));
                        succeeded = (Var_231 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_230)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_230, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_356 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_230, (MR_Integer) 1)));
                            Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_233)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_233, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_233, (MR_Integer) 1)));
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_233, (MR_Integer) 2)));
                              Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_233, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_234)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_234, (MR_Integer) 0)));
                                Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_234, (MR_Integer) 1)));
                                succeeded = (Var_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_235, (MR_Integer) 0)));
                                  Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_235, (MR_Integer) 1)));
                                  succeeded = (Var_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_236)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_236, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_357 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_236, (MR_Integer) 1)));
                                      succeeded = (YVal_357 == 0U);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        *OutputArg_15 = Z_14;
                                        Var_239 = (MR_Integer) 238;
                                        Var_240 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_239, Var_240);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_358);
                                          succeeded = libs__uint_emu__quotient_4_p_0(BitsPerUInt_358, XVal_356, YVal_357, &OutputArgVal_16);
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
              }
            }
            break;
          case (MR_Integer) 9:
            {
              // case "\/"
              {
                MR_Word Var_105;
                MR_Word Var_106;
                MR_Word Var_107;
                MR_Word Var_108;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Var_111;
                MR_Word Var_112;
                MR_Word Var_113;
                MR_Word Var_114;
                MR_Word Var_115;
                MR_Word Var_116;
                MR_Unsigned XVal_382;
                MR_Unsigned YVal_383;
                MR_Word Var_450;
                MR_Word Var_451;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_452;
                MR_Word Var_453;
                MR_Word Var_87;
                MR_Word Var_88;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_105)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_105, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_105, (MR_Integer) 1)));
                    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_105, (MR_Integer) 2)));
                    Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_105, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 0)));
                      Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 1)));
                      succeeded = (Var_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 0)));
                        Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 1)));
                        succeeded = (Var_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_108, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_382 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_108, (MR_Integer) 1)));
                            Var_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_111, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_111, (MR_Integer) 1)));
                              Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_111, (MR_Integer) 2)));
                              Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_111, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_112)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_112, (MR_Integer) 0)));
                                Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_112, (MR_Integer) 1)));
                                succeeded = (Var_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0)));
                                  Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1)));
                                  succeeded = (Var_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_114)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_114, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_383 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_114, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      OutputArgVal_16 = (XVal_382 | YVal_383);
                                      succeeded = MR_TRUE;
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
            break;
          case (MR_Integer) 10:
            {
              // case "+"
              switch (ModeNum_11) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Unsigned XVal_19;
                    MR_Unsigned YVal_22;
                    MR_Word BitsPerUInt_23;
                    MR_Word Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                    MR_Word Var_326;
                    MR_Word Var_327;
                    MR_Word Var_328;
                    MR_Word Var_329;
                    MR_Word Var_330;
                    MR_Word Var_331;
                    MR_Word Var_332;
                    MR_Word Var_333;
                    MR_Word Var_334;
                    MR_Word Var_335;
                    MR_Word Var_336;
                    MR_Word Var_337;
                    MR_Word Var_338;
                    MR_Word Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                    MR_Word Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                    MR_Word Var_17;
                    MR_Word Var_18;
                    MR_Word Var_388;
                    MR_Word Var_389;
                    MR_Word Var_20;
                    MR_Word Var_21;

                    succeeded = ((((MR_tag((MR_Word) Var_325)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_325, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_325, (MR_Integer) 1)));
                      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_325, (MR_Integer) 2)));
                      Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_325, (MR_Integer) 3)));
                      succeeded = ((MR_tag((MR_Word) Var_326)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_326, (MR_Integer) 0)));
                        Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_326, (MR_Integer) 1)));
                        succeeded = (Var_330 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_327, (MR_Integer) 0)));
                          Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_327, (MR_Integer) 1)));
                          succeeded = (Var_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_328)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_328, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              XVal_19 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_328, (MR_Integer) 1)));
                              Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                              Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                              Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                              succeeded = ((((MR_tag((MR_Word) Var_331)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_331, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_331, (MR_Integer) 1)));
                                Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_331, (MR_Integer) 2)));
                                Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_331, (MR_Integer) 3)));
                                succeeded = ((MR_tag((MR_Word) Var_332)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_332, (MR_Integer) 0)));
                                  Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_332, (MR_Integer) 1)));
                                  succeeded = (Var_336 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_333, (MR_Integer) 0)));
                                    Var_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_333, (MR_Integer) 1)));
                                    succeeded = (Var_335 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_334)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_334, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        YVal_22 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_334, (MR_Integer) 1)));
                                        *OutputArg_15 = Z_14;
                                        Var_337 = (MR_Integer) 238;
                                        Var_338 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_337, Var_338);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_23);
                                          succeeded = libs__uint_emu__plus_4_p_0(BitsPerUInt_23, XVal_19, YVal_22, &OutputArgVal_16);
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
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned ZVal_28;
                    MR_Word Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                    MR_Word Var_312;
                    MR_Word Var_313;
                    MR_Word Var_314;
                    MR_Word Var_315;
                    MR_Word Var_316;
                    MR_Word Var_317;
                    MR_Word Var_318;
                    MR_Word Var_319;
                    MR_Word Var_320;
                    MR_Word Var_321;
                    MR_Word Var_322;
                    MR_Word Var_323;
                    MR_Word Var_324;
                    MR_Unsigned YVal_339;
                    MR_Word BitsPerUInt_340;
                    MR_Word Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                    MR_Word Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                    MR_Word Var_24;
                    MR_Word Var_25;
                    MR_Word Var_392;
                    MR_Word Var_393;
                    MR_Word Var_26;
                    MR_Word Var_27;

                    succeeded = ((((MR_tag((MR_Word) Var_311)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_311, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_311, (MR_Integer) 1)));
                      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_311, (MR_Integer) 2)));
                      Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_311, (MR_Integer) 3)));
                      succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 0)));
                        Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1)));
                        succeeded = (Var_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_313, (MR_Integer) 0)));
                          Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_313, (MR_Integer) 1)));
                          succeeded = (Var_315 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_314)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_314, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              YVal_339 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_314, (MR_Integer) 1)));
                              Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                              Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                              Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                              succeeded = ((((MR_tag((MR_Word) Var_317)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_317, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_317, (MR_Integer) 1)));
                                Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_317, (MR_Integer) 2)));
                                Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_317, (MR_Integer) 3)));
                                succeeded = ((MR_tag((MR_Word) Var_318)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_318, (MR_Integer) 0)));
                                  Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_318, (MR_Integer) 1)));
                                  succeeded = (Var_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_319, (MR_Integer) 0)));
                                    Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_319, (MR_Integer) 1)));
                                    succeeded = (Var_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_320)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_320, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        ZVal_28 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_320, (MR_Integer) 1)));
                                        *OutputArg_15 = X_12;
                                        Var_323 = (MR_Integer) 238;
                                        Var_324 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_323, Var_324);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_340);
                                          succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_340, ZVal_28, YVal_339, &OutputArgVal_16);
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
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                    MR_Word Var_298;
                    MR_Word Var_299;
                    MR_Word Var_300;
                    MR_Word Var_301;
                    MR_Word Var_302;
                    MR_Word Var_303;
                    MR_Word Var_304;
                    MR_Word Var_305;
                    MR_Word Var_306;
                    MR_Word Var_307;
                    MR_Word Var_308;
                    MR_Word Var_309;
                    MR_Word Var_310;
                    MR_Unsigned XVal_341;
                    MR_Word BitsPerUInt_342;
                    MR_Unsigned ZVal_343;
                    MR_Word Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                    MR_Word Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                    MR_Word Var_29;
                    MR_Word Var_30;
                    MR_Word Var_396;
                    MR_Word Var_397;
                    MR_Word Var_31;
                    MR_Word Var_32;

                    succeeded = ((((MR_tag((MR_Word) Var_297)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_297, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_297, (MR_Integer) 1)));
                      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_297, (MR_Integer) 2)));
                      Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_297, (MR_Integer) 3)));
                      succeeded = ((MR_tag((MR_Word) Var_298)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_298, (MR_Integer) 0)));
                        Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_298, (MR_Integer) 1)));
                        succeeded = (Var_302 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_299, (MR_Integer) 0)));
                          Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_299, (MR_Integer) 1)));
                          succeeded = (Var_301 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_300)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_300, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              XVal_341 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_300, (MR_Integer) 1)));
                              Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                              Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                              Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                              succeeded = ((((MR_tag((MR_Word) Var_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_303, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_303, (MR_Integer) 1)));
                                Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_303, (MR_Integer) 2)));
                                Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_303, (MR_Integer) 3)));
                                succeeded = ((MR_tag((MR_Word) Var_304)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_304, (MR_Integer) 0)));
                                  Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_304, (MR_Integer) 1)));
                                  succeeded = (Var_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_305, (MR_Integer) 0)));
                                    Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_305, (MR_Integer) 1)));
                                    succeeded = (Var_307 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_306)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_306, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        ZVal_343 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_306, (MR_Integer) 1)));
                                        *OutputArg_15 = Y_13;
                                        Var_309 = (MR_Integer) 238;
                                        Var_310 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_309, Var_310);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_342);
                                          succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_342, ZVal_343, XVal_341, &OutputArgVal_16);
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
                  break;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              // case "*"
              {
                MR_Word Var_241;
                MR_Word Var_242;
                MR_Word Var_243;
                MR_Word Var_244;
                MR_Word Var_245;
                MR_Word Var_246;
                MR_Word Var_247;
                MR_Word Var_248;
                MR_Word Var_249;
                MR_Word Var_250;
                MR_Word Var_251;
                MR_Word Var_252;
                MR_Word Var_253;
                MR_Word Var_254;
                MR_Unsigned XVal_353;
                MR_Unsigned YVal_354;
                MR_Word BitsPerUInt_355;
                MR_Word Var_410;
                MR_Word Var_411;
                MR_Word Var_45;
                MR_Word Var_46;
                MR_Word Var_412;
                MR_Word Var_413;
                MR_Word Var_47;
                MR_Word Var_48;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_241)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_241, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_241, (MR_Integer) 1)));
                    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_241, (MR_Integer) 2)));
                    Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_241, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_242)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_242, (MR_Integer) 0)));
                      Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_242, (MR_Integer) 1)));
                      succeeded = (Var_246 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_243, (MR_Integer) 0)));
                        Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_243, (MR_Integer) 1)));
                        succeeded = (Var_245 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_244)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_244, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_353 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_244, (MR_Integer) 1)));
                            Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_247)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_247, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_247, (MR_Integer) 1)));
                              Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_247, (MR_Integer) 2)));
                              Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_247, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_248)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_248, (MR_Integer) 0)));
                                Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_248, (MR_Integer) 1)));
                                succeeded = (Var_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_249, (MR_Integer) 0)));
                                  Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_249, (MR_Integer) 1)));
                                  succeeded = (Var_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_250)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_250, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_354 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_250, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_253 = (MR_Integer) 238;
                                      Var_254 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_253, Var_254);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_355);
                                        succeeded = libs__uint_emu__times_4_p_0(BitsPerUInt_355, XVal_353, YVal_354, &OutputArgVal_16);
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
            }
            break;
          case (MR_Integer) 12:
            {
              // case "-"
              switch (ModeNum_11) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                    MR_Word Var_284;
                    MR_Word Var_285;
                    MR_Word Var_286;
                    MR_Word Var_287;
                    MR_Word Var_288;
                    MR_Word Var_289;
                    MR_Word Var_290;
                    MR_Word Var_291;
                    MR_Word Var_292;
                    MR_Word Var_293;
                    MR_Word Var_294;
                    MR_Word Var_295;
                    MR_Word Var_296;
                    MR_Unsigned XVal_344;
                    MR_Unsigned YVal_345;
                    MR_Word BitsPerUInt_346;
                    MR_Word Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                    MR_Word Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                    MR_Word Var_33;
                    MR_Word Var_34;
                    MR_Word Var_400;
                    MR_Word Var_401;
                    MR_Word Var_35;
                    MR_Word Var_36;

                    succeeded = ((((MR_tag((MR_Word) Var_283)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_283, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_283, (MR_Integer) 1)));
                      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_283, (MR_Integer) 2)));
                      Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_283, (MR_Integer) 3)));
                      succeeded = ((MR_tag((MR_Word) Var_284)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_284, (MR_Integer) 0)));
                        Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_284, (MR_Integer) 1)));
                        succeeded = (Var_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_285, (MR_Integer) 0)));
                          Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_285, (MR_Integer) 1)));
                          succeeded = (Var_287 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_286)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_286, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              XVal_344 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_286, (MR_Integer) 1)));
                              Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                              Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                              Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                              succeeded = ((((MR_tag((MR_Word) Var_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_289, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_289, (MR_Integer) 1)));
                                Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_289, (MR_Integer) 2)));
                                Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_289, (MR_Integer) 3)));
                                succeeded = ((MR_tag((MR_Word) Var_290)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_290, (MR_Integer) 0)));
                                  Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_290, (MR_Integer) 1)));
                                  succeeded = (Var_294 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_291, (MR_Integer) 0)));
                                    Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_291, (MR_Integer) 1)));
                                    succeeded = (Var_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_292)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_292, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        YVal_345 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_292, (MR_Integer) 1)));
                                        *OutputArg_15 = Z_14;
                                        Var_295 = (MR_Integer) 238;
                                        Var_296 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_295, Var_296);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_346);
                                          succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_346, XVal_344, YVal_345, &OutputArgVal_16);
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
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                    MR_Word Var_270;
                    MR_Word Var_271;
                    MR_Word Var_272;
                    MR_Word Var_273;
                    MR_Word Var_274;
                    MR_Word Var_275;
                    MR_Word Var_276;
                    MR_Word Var_277;
                    MR_Word Var_278;
                    MR_Word Var_279;
                    MR_Word Var_280;
                    MR_Word Var_281;
                    MR_Word Var_282;
                    MR_Unsigned YVal_347;
                    MR_Word BitsPerUInt_348;
                    MR_Unsigned ZVal_349;
                    MR_Word Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                    MR_Word Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                    MR_Word Var_37;
                    MR_Word Var_38;
                    MR_Word Var_404;
                    MR_Word Var_405;
                    MR_Word Var_39;
                    MR_Word Var_40;

                    succeeded = ((((MR_tag((MR_Word) Var_269)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_269, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_269, (MR_Integer) 1)));
                      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_269, (MR_Integer) 2)));
                      Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_269, (MR_Integer) 3)));
                      succeeded = ((MR_tag((MR_Word) Var_270)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_270, (MR_Integer) 0)));
                        Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_270, (MR_Integer) 1)));
                        succeeded = (Var_274 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_271, (MR_Integer) 0)));
                          Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_271, (MR_Integer) 1)));
                          succeeded = (Var_273 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_272)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_272, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              YVal_347 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_272, (MR_Integer) 1)));
                              Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                              Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                              Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                              succeeded = ((((MR_tag((MR_Word) Var_275)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_275, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_275, (MR_Integer) 1)));
                                Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_275, (MR_Integer) 2)));
                                Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_275, (MR_Integer) 3)));
                                succeeded = ((MR_tag((MR_Word) Var_276)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_276, (MR_Integer) 0)));
                                  Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_276, (MR_Integer) 1)));
                                  succeeded = (Var_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_277, (MR_Integer) 0)));
                                    Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_277, (MR_Integer) 1)));
                                    succeeded = (Var_279 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_278)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_278, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        ZVal_349 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_278, (MR_Integer) 1)));
                                        *OutputArg_15 = X_12;
                                        Var_281 = (MR_Integer) 238;
                                        Var_282 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_281, Var_282);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_348);
                                          succeeded = libs__uint_emu__plus_4_p_0(BitsPerUInt_348, YVal_347, ZVal_349, &OutputArgVal_16);
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
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                    MR_Word Var_256;
                    MR_Word Var_257;
                    MR_Word Var_258;
                    MR_Word Var_259;
                    MR_Word Var_260;
                    MR_Word Var_261;
                    MR_Word Var_262;
                    MR_Word Var_263;
                    MR_Word Var_264;
                    MR_Word Var_265;
                    MR_Word Var_266;
                    MR_Word Var_267;
                    MR_Word Var_268;
                    MR_Unsigned XVal_350;
                    MR_Word BitsPerUInt_351;
                    MR_Unsigned ZVal_352;
                    MR_Word Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                    MR_Word Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                    MR_Word Var_41;
                    MR_Word Var_42;
                    MR_Word Var_408;
                    MR_Word Var_409;
                    MR_Word Var_43;
                    MR_Word Var_44;

                    succeeded = ((((MR_tag((MR_Word) Var_255)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_255, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_255, (MR_Integer) 1)));
                      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_255, (MR_Integer) 2)));
                      Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_255, (MR_Integer) 3)));
                      succeeded = ((MR_tag((MR_Word) Var_256)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_256, (MR_Integer) 0)));
                        Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_256, (MR_Integer) 1)));
                        succeeded = (Var_260 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_257, (MR_Integer) 0)));
                          Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_257, (MR_Integer) 1)));
                          succeeded = (Var_259 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_258)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_258, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              XVal_350 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_258, (MR_Integer) 1)));
                              Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                              Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                              Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                              succeeded = ((((MR_tag((MR_Word) Var_261)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_261, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_261, (MR_Integer) 1)));
                                Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_261, (MR_Integer) 2)));
                                Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_261, (MR_Integer) 3)));
                                succeeded = ((MR_tag((MR_Word) Var_262)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 0)));
                                  Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 1)));
                                  succeeded = (Var_266 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_263, (MR_Integer) 0)));
                                    Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_263, (MR_Integer) 1)));
                                    succeeded = (Var_265 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_264)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_264, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        ZVal_352 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_264, (MR_Integer) 1)));
                                        *OutputArg_15 = Y_13;
                                        Var_267 = (MR_Integer) 238;
                                        Var_268 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_267, Var_268);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_351);
                                          succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_351, XVal_350, ZVal_352, &OutputArgVal_16);
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
                  break;
              }
            }
            break;
          case (MR_Integer) 19:
            {
              // case "mod"
              {
                MR_Word Var_213;
                MR_Word Var_214;
                MR_Word Var_215;
                MR_Word Var_216;
                MR_Word Var_217;
                MR_Word Var_218;
                MR_Word Var_219;
                MR_Word Var_220;
                MR_Word Var_221;
                MR_Word Var_222;
                MR_Word Var_223;
                MR_Word Var_224;
                MR_Word Var_225;
                MR_Word Var_226;
                MR_Unsigned XVal_359;
                MR_Unsigned YVal_360;
                MR_Word BitsPerUInt_361;
                MR_Word Var_418;
                MR_Word Var_419;
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word Var_420;
                MR_Word Var_421;
                MR_Word Var_55;
                MR_Word Var_56;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_213)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_213, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_213, (MR_Integer) 1)));
                    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_213, (MR_Integer) 2)));
                    Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_213, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_214)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_214, (MR_Integer) 0)));
                      Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_214, (MR_Integer) 1)));
                      succeeded = (Var_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_215, (MR_Integer) 0)));
                        Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_215, (MR_Integer) 1)));
                        succeeded = (Var_217 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_216)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_359 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 1)));
                            Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_219)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_219, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_219, (MR_Integer) 1)));
                              Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_219, (MR_Integer) 2)));
                              Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_219, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_220)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_220, (MR_Integer) 0)));
                                Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_220, (MR_Integer) 1)));
                                succeeded = (Var_224 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_221, (MR_Integer) 0)));
                                  Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_221, (MR_Integer) 1)));
                                  succeeded = (Var_223 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_222)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_222, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_360 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_222, (MR_Integer) 1)));
                                      succeeded = (YVal_360 == 0U);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        *OutputArg_15 = Z_14;
                                        Var_225 = (MR_Integer) 238;
                                        Var_226 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_225, Var_226);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_361);
                                          succeeded = libs__uint_emu__mod_4_p_0(BitsPerUInt_361, XVal_359, YVal_360, &OutputArgVal_16);
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
              }
            }
            break;
          case (MR_Integer) 21:
            {
              // case "unchecked_left_shift"
              {
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Var_173;
                MR_Word Var_174;
                MR_Word Var_175;
                MR_Word Var_176;
                MR_Word Var_177;
                MR_Word Var_178;
                MR_Word Var_179;
                MR_Word Var_180;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word Var_183;
                MR_Word Var_184;
                MR_Unsigned XVal_368;
                MR_Integer YVal_369;
                MR_Word BitsPerUInt_370;
                MR_Word Var_430;
                MR_Word Var_431;
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word Var_432;
                MR_Word Var_433;
                MR_Word Var_67;
                MR_Word Var_68;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_171)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_171, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_171, (MR_Integer) 1)));
                    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_171, (MR_Integer) 2)));
                    Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_171, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_172)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_172, (MR_Integer) 0)));
                      Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_172, (MR_Integer) 1)));
                      succeeded = (Var_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_173, (MR_Integer) 0)));
                        Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_173, (MR_Integer) 1)));
                        succeeded = (Var_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_174)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_174, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_368 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_174, (MR_Integer) 1)));
                            Var_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_177)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_177, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_177, (MR_Integer) 1)));
                              Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_177, (MR_Integer) 2)));
                              Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_177, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_178)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_178, (MR_Integer) 0)));
                                Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_178, (MR_Integer) 1)));
                                succeeded = (Var_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 0)));
                                  Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 1)));
                                  succeeded = (Var_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_180)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_180, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_369 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_180, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_183 = (MR_Integer) 238;
                                      Var_184 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_183, Var_184);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_370);
                                        succeeded = libs__uint_emu__unchecked_left_shift_4_p_0(BitsPerUInt_370, XVal_368, YVal_369, &OutputArgVal_16);
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
            }
            break;
          case (MR_Integer) 23:
            {
              // case "rem"
              {
                MR_Word Var_199;
                MR_Word Var_200;
                MR_Word Var_201;
                MR_Word Var_202;
                MR_Word Var_203;
                MR_Word Var_204;
                MR_Word Var_205;
                MR_Word Var_206;
                MR_Word Var_207;
                MR_Word Var_208;
                MR_Word Var_209;
                MR_Word Var_210;
                MR_Word Var_211;
                MR_Word Var_212;
                MR_Unsigned XVal_362;
                MR_Unsigned YVal_363;
                MR_Word BitsPerUInt_364;
                MR_Word Var_422;
                MR_Word Var_423;
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Word Var_424;
                MR_Word Var_425;
                MR_Word Var_59;
                MR_Word Var_60;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_199)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_199, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_199, (MR_Integer) 1)));
                    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_199, (MR_Integer) 2)));
                    Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_199, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_200)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_200, (MR_Integer) 0)));
                      Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_200, (MR_Integer) 1)));
                      succeeded = (Var_204 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_201, (MR_Integer) 0)));
                        Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_201, (MR_Integer) 1)));
                        succeeded = (Var_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_202)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_202, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_362 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_202, (MR_Integer) 1)));
                            Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_205)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_205, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_205, (MR_Integer) 1)));
                              Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_205, (MR_Integer) 2)));
                              Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_205, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_206)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_206, (MR_Integer) 0)));
                                Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_206, (MR_Integer) 1)));
                                succeeded = (Var_210 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_207, (MR_Integer) 0)));
                                  Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_207, (MR_Integer) 1)));
                                  succeeded = (Var_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_208)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_208, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_363 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_208, (MR_Integer) 1)));
                                      succeeded = (YVal_363 == 0U);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        *OutputArg_15 = Z_14;
                                        Var_211 = (MR_Integer) 238;
                                        Var_212 = (MR_Integer) 0;
                                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_211, Var_212);
                                        if (succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_364);
                                          succeeded = libs__uint_emu__rem_4_p_0(BitsPerUInt_364, XVal_362, YVal_363, &OutputArgVal_16);
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
              }
            }
            break;
          case (MR_Integer) 25:
            {
              // case "/\"
              {
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word Var_128;
                MR_Unsigned XVal_380;
                MR_Unsigned YVal_381;
                MR_Word Var_446;
                MR_Word Var_447;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_448;
                MR_Word Var_449;
                MR_Word Var_83;
                MR_Word Var_84;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_117, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_117, (MR_Integer) 1)));
                    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_117, (MR_Integer) 2)));
                    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_117, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_118)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_118, (MR_Integer) 0)));
                      Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_118, (MR_Integer) 1)));
                      succeeded = (Var_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 0)));
                        Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 1)));
                        succeeded = (Var_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_120, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_380 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_120, (MR_Integer) 1)));
                            Var_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_123)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_123, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_123, (MR_Integer) 1)));
                              Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_123, (MR_Integer) 2)));
                              Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_123, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_124)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_124, (MR_Integer) 0)));
                                Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_124, (MR_Integer) 1)));
                                succeeded = (Var_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_125, (MR_Integer) 0)));
                                  Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_125, (MR_Integer) 1)));
                                  succeeded = (Var_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_126)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_126, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      YVal_381 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_126, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      OutputArgVal_16 = (XVal_380 & YVal_381);
                                      succeeded = MR_TRUE;
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
            break;
          case (MR_Integer) 26:
            {
              // case "<<"
              {
                MR_Word Var_157;
                MR_Word Var_158;
                MR_Word Var_159;
                MR_Word Var_160;
                MR_Word Var_161;
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_164;
                MR_Word Var_165;
                MR_Word Var_166;
                MR_Word Var_167;
                MR_Word Var_168;
                MR_Word Var_169;
                MR_Word Var_170;
                MR_Unsigned XVal_371;
                MR_Integer YVal_372;
                MR_Word BitsPerUInt_373;
                MR_Word Var_434;
                MR_Word Var_435;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_436;
                MR_Word Var_437;
                MR_Word Var_71;
                MR_Word Var_72;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_157)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_157, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_157, (MR_Integer) 1)));
                    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_157, (MR_Integer) 2)));
                    Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_157, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_158)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_158, (MR_Integer) 0)));
                      Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_158, (MR_Integer) 1)));
                      succeeded = (Var_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_159, (MR_Integer) 0)));
                        Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_159, (MR_Integer) 1)));
                        succeeded = (Var_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_160)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_160, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_371 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_160, (MR_Integer) 1)));
                            Var_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_163)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_163, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_163, (MR_Integer) 1)));
                              Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_163, (MR_Integer) 2)));
                              Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_163, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_164)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_164, (MR_Integer) 0)));
                                Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_164, (MR_Integer) 1)));
                                succeeded = (Var_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_165, (MR_Integer) 0)));
                                  Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_165, (MR_Integer) 1)));
                                  succeeded = (Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_166)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_166, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_372 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_166, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_169 = (MR_Integer) 238;
                                      Var_170 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_169, Var_170);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_373);
                                        succeeded = libs__uint_emu__left_shift_4_p_0(BitsPerUInt_373, XVal_371, YVal_372, &OutputArgVal_16);
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
            }
            break;
          case (MR_Integer) 30:
            {
              // case ">>"
              {
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word Var_136;
                MR_Word Var_137;
                MR_Word Var_138;
                MR_Word Var_139;
                MR_Word Var_140;
                MR_Word Var_141;
                MR_Word Var_142;
                MR_Unsigned XVal_377;
                MR_Integer YVal_378;
                MR_Word BitsPerUInt_379;
                MR_Word Var_442;
                MR_Word Var_443;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_444;
                MR_Word Var_445;
                MR_Word Var_79;
                MR_Word Var_80;

                succeeded = (ModeNum_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  Var_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) Var_129)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_129, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_129, (MR_Integer) 1)));
                    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_129, (MR_Integer) 2)));
                    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_129, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_130)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_130, (MR_Integer) 0)));
                      Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_130, (MR_Integer) 1)));
                      succeeded = (Var_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_131, (MR_Integer) 0)));
                        Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_131, (MR_Integer) 1)));
                        succeeded = (Var_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_132, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            XVal_377 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_132, (MR_Integer) 1)));
                            Var_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_135)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 1)));
                              Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 2)));
                              Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_136)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_136, (MR_Integer) 0)));
                                Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_136, (MR_Integer) 1)));
                                succeeded = (Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 0)));
                                  Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 1)));
                                  succeeded = (Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_138, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_378 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_138, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_141 = (MR_Integer) 238;
                                      Var_142 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_141, Var_142);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_9, &BitsPerUInt_379);
                                        succeeded = libs__uint_emu__right_shift_4_p_0(BitsPerUInt_379, XVal_377, YVal_378, &OutputArgVal_16);
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
            }
            break;
        }
        // jump out of search loop
        goto label_0;
      }
      else
      {
        // no match yet, so get next slot in hash chain
        slot_0 = ((&transform_hlds__const_prop_vector_common_2[7 + slot_0]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1;
      }
    }
    while ((slot_0 >= (MR_Integer) 0));
    succeeded = MR_FALSE;
  label_0:;
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_16));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
  MR_Word Globals_9,
  MR_String ProcName_10,
  MR_Integer ModeNum_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;
    MR_Integer OutputArgVal_16;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(ProcName_10, 0)) {
        case (MR_Integer) 42:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "*"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 43:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "+"))
            case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 45:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "-"))
            case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 47:
          switch (MR_nth_code_unit(ProcName_10, 1)) {
            case (MR_Integer) 47:
              if (MR_offset_streq(2, ProcName_10, (MR_String) "//"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(2, ProcName_10, (MR_String) "/\\"))
                case_num_0 = (MR_Integer) 4;
              break;
          }
          break;
        case (MR_Integer) 60:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "<<"))
            case_num_0 = (MR_Integer) 5;
          break;
        case (MR_Integer) 62:
          if (MR_offset_streq(1, ProcName_10, (MR_String) ">>"))
            case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "\\/"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(ProcName_10, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, ProcName_10, (MR_String) "minus"))
                case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ProcName_10, (MR_String) "mod"))
                case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "plus"))
            case_num_0 = (MR_Integer) 10;
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "rem"))
            case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "times"))
            case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 117:
          if (((((((((((((((((((MR_nth_code_unit(ProcName_10, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ProcName_10, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(ProcName_10, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(ProcName_10, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(ProcName_10, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(ProcName_10, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(ProcName_10, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(ProcName_10, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(ProcName_10, 9)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(ProcName_10, 10)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(11, ProcName_10, (MR_String) "unchecked_left_shift"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 113:
                if (MR_offset_streq(11, ProcName_10, (MR_String) "unchecked_quotient"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(ProcName_10, 11)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(12, ProcName_10, (MR_String) "unchecked_rem"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_streq(12, ProcName_10, (MR_String) "unchecked_right_shift"))
                      case_num_0 = (MR_Integer) 16;
                    break;
                }
                break;
            }
          break;
        case (MR_Integer) 120:
          if (MR_offset_streq(1, ProcName_10, (MR_String) "xor"))
            case_num_0 = (MR_Integer) 17;
          break;
      }
      switch (case_num_0) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            // case "*"
            {
              MR_Word Var_271;
              MR_Word Var_272;
              MR_Word Var_273;
              MR_Word Var_274;
              MR_Word Var_275;
              MR_Word Var_276;
              MR_Word Var_277;
              MR_Word Var_278;
              MR_Word Var_279;
              MR_Word Var_280;
              MR_Word Var_281;
              MR_Word Var_282;
              MR_Word Var_283;
              MR_Word Var_284;
              MR_Integer XVal_434;
              MR_Integer YVal_435;
              MR_Word BitsPerInt_436;
              MR_Word Var_506;
              MR_Word Var_507;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_508;
              MR_Word Var_509;
              MR_Word Var_59;
              MR_Word Var_60;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_271)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_271, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_271, (MR_Integer) 1)));
                  Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_271, (MR_Integer) 2)));
                  Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_271, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_272)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_272, (MR_Integer) 0)));
                    Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_272, (MR_Integer) 1)));
                    succeeded = (Var_276 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_273, (MR_Integer) 0)));
                      Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_273, (MR_Integer) 1)));
                      succeeded = (Var_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_274)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_274, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_434 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_274, (MR_Integer) 1)));
                          Var_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_277)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_277, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_277, (MR_Integer) 1)));
                            Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_277, (MR_Integer) 2)));
                            Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_277, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_278)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_278, (MR_Integer) 0)));
                              Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_278, (MR_Integer) 1)));
                              succeeded = (Var_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_279, (MR_Integer) 0)));
                                Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_279, (MR_Integer) 1)));
                                succeeded = (Var_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_280)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_280, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_435 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_280, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_283 = (MR_Integer) 238;
                                    Var_284 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_283, Var_284);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_436);
                                      succeeded = libs__int_emu__times_4_p_0(BitsPerInt_436, XVal_434, YVal_435, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 1:
          {
            // case "+"
            switch (ModeNum_11) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  MR_Word Var_384;
                  MR_Word Var_385;
                  MR_Word Var_386;
                  MR_Word Var_387;
                  MR_Word Var_388;
                  MR_Word Var_389;
                  MR_Word Var_390;
                  MR_Word Var_391;
                  MR_Word Var_392;
                  MR_Word Var_393;
                  MR_Word Var_394;
                  MR_Word Var_395;
                  MR_Word Var_396;
                  MR_Integer XVal_411;
                  MR_Integer YVal_412;
                  MR_Word BitsPerInt_413;
                  MR_Word Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  MR_Word Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  MR_Word Var_24;
                  MR_Word Var_25;
                  MR_Word Var_476;
                  MR_Word Var_477;
                  MR_Word Var_26;
                  MR_Word Var_27;

                  succeeded = ((((MR_tag((MR_Word) Var_383)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_383, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_383, (MR_Integer) 1)));
                    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_383, (MR_Integer) 2)));
                    Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_383, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_384)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_384, (MR_Integer) 0)));
                      Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_384, (MR_Integer) 1)));
                      succeeded = (Var_388 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_385, (MR_Integer) 0)));
                        Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_385, (MR_Integer) 1)));
                        succeeded = (Var_387 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_386)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_386, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_386, (MR_Integer) 1)));
                            Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_389)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_389, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_389, (MR_Integer) 1)));
                              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_389, (MR_Integer) 2)));
                              Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_389, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_390)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_390, (MR_Integer) 0)));
                                Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_390, (MR_Integer) 1)));
                                succeeded = (Var_394 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_391, (MR_Integer) 0)));
                                  Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_391, (MR_Integer) 1)));
                                  succeeded = (Var_393 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_392)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_392, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_392, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_395 = (MR_Integer) 238;
                                      Var_396 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_395, Var_396);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_413);
                                        succeeded = libs__int_emu__plus_4_p_0(BitsPerInt_413, XVal_411, YVal_412, &OutputArgVal_16);
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
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ZVal_32;
                  MR_Word Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                  MR_Word Var_370;
                  MR_Word Var_371;
                  MR_Word Var_372;
                  MR_Word Var_373;
                  MR_Word Var_374;
                  MR_Word Var_375;
                  MR_Word Var_376;
                  MR_Word Var_377;
                  MR_Word Var_378;
                  MR_Word Var_379;
                  MR_Word Var_380;
                  MR_Word Var_381;
                  MR_Word Var_382;
                  MR_Integer YVal_414;
                  MR_Word BitsPerInt_415;
                  MR_Word Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                  MR_Word Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                  MR_Word Var_28;
                  MR_Word Var_29;
                  MR_Word Var_480;
                  MR_Word Var_481;
                  MR_Word Var_30;
                  MR_Word Var_31;

                  succeeded = ((((MR_tag((MR_Word) Var_369)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_369, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_369, (MR_Integer) 1)));
                    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_369, (MR_Integer) 2)));
                    Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_369, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_370)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_370, (MR_Integer) 0)));
                      Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_370, (MR_Integer) 1)));
                      succeeded = (Var_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_371, (MR_Integer) 0)));
                        Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_371, (MR_Integer) 1)));
                        succeeded = (Var_373 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_372)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_372, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            YVal_414 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_372, (MR_Integer) 1)));
                            Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                            Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                            Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_375)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_375, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_375, (MR_Integer) 1)));
                              Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_375, (MR_Integer) 2)));
                              Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_375, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_376)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_376, (MR_Integer) 0)));
                                Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_376, (MR_Integer) 1)));
                                succeeded = (Var_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_377, (MR_Integer) 0)));
                                  Var_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_377, (MR_Integer) 1)));
                                  succeeded = (Var_379 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_378)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_378, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      ZVal_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_378, (MR_Integer) 1)));
                                      *OutputArg_15 = X_12;
                                      Var_381 = (MR_Integer) 238;
                                      Var_382 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_381, Var_382);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_415);
                                        succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_415, ZVal_32, YVal_414, &OutputArgVal_16);
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
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  MR_Word Var_356;
                  MR_Word Var_357;
                  MR_Word Var_358;
                  MR_Word Var_359;
                  MR_Word Var_360;
                  MR_Word Var_361;
                  MR_Word Var_362;
                  MR_Word Var_363;
                  MR_Word Var_364;
                  MR_Word Var_365;
                  MR_Word Var_366;
                  MR_Word Var_367;
                  MR_Word Var_368;
                  MR_Integer XVal_416;
                  MR_Word BitsPerInt_417;
                  MR_Integer ZVal_418;
                  MR_Word Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  MR_Word Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  MR_Word Var_33;
                  MR_Word Var_34;
                  MR_Word Var_484;
                  MR_Word Var_485;
                  MR_Word Var_35;
                  MR_Word Var_36;

                  succeeded = ((((MR_tag((MR_Word) Var_355)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_355, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_355, (MR_Integer) 1)));
                    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_355, (MR_Integer) 2)));
                    Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_355, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_356)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_356, (MR_Integer) 0)));
                      Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_356, (MR_Integer) 1)));
                      succeeded = (Var_360 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_357, (MR_Integer) 0)));
                        Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_357, (MR_Integer) 1)));
                        succeeded = (Var_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_358)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_358, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            XVal_416 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_358, (MR_Integer) 1)));
                            Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                            Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                            Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_361)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_361, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_361, (MR_Integer) 1)));
                              Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_361, (MR_Integer) 2)));
                              Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_361, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_362)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_362, (MR_Integer) 0)));
                                Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_362, (MR_Integer) 1)));
                                succeeded = (Var_366 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_363, (MR_Integer) 0)));
                                  Var_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_363, (MR_Integer) 1)));
                                  succeeded = (Var_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_364)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_364, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      ZVal_418 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_364, (MR_Integer) 1)));
                                      *OutputArg_15 = Y_13;
                                      Var_367 = (MR_Integer) 238;
                                      Var_368 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_367, Var_368);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_417);
                                        succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_417, ZVal_418, XVal_416, &OutputArgVal_16);
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
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "-"
            switch (ModeNum_11) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  MR_Word Var_328;
                  MR_Word Var_329;
                  MR_Word Var_330;
                  MR_Word Var_331;
                  MR_Word Var_332;
                  MR_Word Var_333;
                  MR_Word Var_334;
                  MR_Word Var_335;
                  MR_Word Var_336;
                  MR_Word Var_337;
                  MR_Word Var_338;
                  MR_Word Var_339;
                  MR_Word Var_340;
                  MR_Integer XVal_422;
                  MR_Integer YVal_423;
                  MR_Word BitsPerInt_424;
                  MR_Word Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  MR_Word Var_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  MR_Word Var_41;
                  MR_Word Var_42;
                  MR_Word Var_492;
                  MR_Word Var_493;
                  MR_Word Var_43;
                  MR_Word Var_44;

                  succeeded = ((((MR_tag((MR_Word) Var_327)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_327, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_327, (MR_Integer) 1)));
                    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_327, (MR_Integer) 2)));
                    Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_327, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_328)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_328, (MR_Integer) 0)));
                      Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_328, (MR_Integer) 1)));
                      succeeded = (Var_332 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_329, (MR_Integer) 0)));
                        Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_329, (MR_Integer) 1)));
                        succeeded = (Var_331 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_330)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_330, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            XVal_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_330, (MR_Integer) 1)));
                            Var_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                            Var_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                            Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_333)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_333, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_333, (MR_Integer) 1)));
                              Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_333, (MR_Integer) 2)));
                              Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_333, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_334)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_334, (MR_Integer) 0)));
                                Var_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_334, (MR_Integer) 1)));
                                succeeded = (Var_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_335, (MR_Integer) 0)));
                                  Var_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_335, (MR_Integer) 1)));
                                  succeeded = (Var_337 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_336)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_336, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_336, (MR_Integer) 1)));
                                      *OutputArg_15 = Z_14;
                                      Var_339 = (MR_Integer) 238;
                                      Var_340 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_339, Var_340);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_424);
                                        succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_424, XVal_422, YVal_423, &OutputArgVal_16);
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
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                  MR_Word Var_314;
                  MR_Word Var_315;
                  MR_Word Var_316;
                  MR_Word Var_317;
                  MR_Word Var_318;
                  MR_Word Var_319;
                  MR_Word Var_320;
                  MR_Word Var_321;
                  MR_Word Var_322;
                  MR_Word Var_323;
                  MR_Word Var_324;
                  MR_Word Var_325;
                  MR_Word Var_326;
                  MR_Integer YVal_425;
                  MR_Word BitsPerInt_426;
                  MR_Integer ZVal_427;
                  MR_Word Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                  MR_Word Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_Word Var_496;
                  MR_Word Var_497;
                  MR_Word Var_47;
                  MR_Word Var_48;

                  succeeded = ((((MR_tag((MR_Word) Var_313)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_313, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_313, (MR_Integer) 1)));
                    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_313, (MR_Integer) 2)));
                    Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_313, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_314)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 0)));
                      Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 1)));
                      succeeded = (Var_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_315, (MR_Integer) 0)));
                        Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_315, (MR_Integer) 1)));
                        succeeded = (Var_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_316)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_316, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            YVal_425 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_316, (MR_Integer) 1)));
                            Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                            Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                            Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_319)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_319, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_319, (MR_Integer) 1)));
                              Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_319, (MR_Integer) 2)));
                              Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_319, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_320)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_320, (MR_Integer) 0)));
                                Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_320, (MR_Integer) 1)));
                                succeeded = (Var_324 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_321, (MR_Integer) 0)));
                                  Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_321, (MR_Integer) 1)));
                                  succeeded = (Var_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_322)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_322, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      ZVal_427 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_322, (MR_Integer) 1)));
                                      *OutputArg_15 = X_12;
                                      Var_325 = (MR_Integer) 238;
                                      Var_326 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_325, Var_326);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_426);
                                        succeeded = libs__int_emu__plus_4_p_0(BitsPerInt_426, YVal_425, ZVal_427, &OutputArgVal_16);
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
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                  MR_Word Var_300;
                  MR_Word Var_301;
                  MR_Word Var_302;
                  MR_Word Var_303;
                  MR_Word Var_304;
                  MR_Word Var_305;
                  MR_Word Var_306;
                  MR_Word Var_307;
                  MR_Word Var_308;
                  MR_Word Var_309;
                  MR_Word Var_310;
                  MR_Word Var_311;
                  MR_Word Var_312;
                  MR_Integer XVal_428;
                  MR_Word BitsPerInt_429;
                  MR_Integer ZVal_430;
                  MR_Word Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                  MR_Word Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                  MR_Word Var_49;
                  MR_Word Var_50;
                  MR_Word Var_500;
                  MR_Word Var_501;
                  MR_Word Var_51;
                  MR_Word Var_52;

                  succeeded = ((((MR_tag((MR_Word) Var_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_299, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_299, (MR_Integer) 1)));
                    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_299, (MR_Integer) 2)));
                    Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_299, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_300)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_300, (MR_Integer) 0)));
                      Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_300, (MR_Integer) 1)));
                      succeeded = (Var_304 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_301, (MR_Integer) 0)));
                        Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_301, (MR_Integer) 1)));
                        succeeded = (Var_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Var_302)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_302, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            XVal_428 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_302, (MR_Integer) 1)));
                            Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 0)));
                            Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 1)));
                            Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), Z_14, (MR_Integer) 2)));
                            succeeded = ((((MR_tag((MR_Word) Var_305)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_305, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_305, (MR_Integer) 1)));
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_305, (MR_Integer) 2)));
                              Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_305, (MR_Integer) 3)));
                              succeeded = ((MR_tag((MR_Word) Var_306)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_306, (MR_Integer) 0)));
                                Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_306, (MR_Integer) 1)));
                                succeeded = (Var_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_307, (MR_Integer) 0)));
                                  Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_307, (MR_Integer) 1)));
                                  succeeded = (Var_309 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) Var_308)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_308, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      ZVal_430 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_308, (MR_Integer) 1)));
                                      *OutputArg_15 = Y_13;
                                      Var_311 = (MR_Integer) 238;
                                      Var_312 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_311, Var_312);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_429);
                                        succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_429, XVal_428, ZVal_430, &OutputArgVal_16);
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
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "//"
            {
              MR_Word Var_243;
              MR_Word Var_244;
              MR_Word Var_245;
              MR_Word Var_246;
              MR_Word Var_247;
              MR_Word Var_248;
              MR_Word Var_249;
              MR_Word Var_250;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_254;
              MR_Word Var_255;
              MR_Word Var_256;
              MR_Integer XVal_440;
              MR_Integer YVal_441;
              MR_Word BitsPerInt_442;
              MR_Word Var_514;
              MR_Word Var_515;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_516;
              MR_Word Var_517;
              MR_Word Var_67;
              MR_Word Var_68;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_243, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_243, (MR_Integer) 1)));
                  Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_243, (MR_Integer) 2)));
                  Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_243, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_244)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_244, (MR_Integer) 0)));
                    Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_244, (MR_Integer) 1)));
                    succeeded = (Var_248 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_245, (MR_Integer) 0)));
                      Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_245, (MR_Integer) 1)));
                      succeeded = (Var_247 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_246)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_246, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_440 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_246, (MR_Integer) 1)));
                          Var_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_249)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_249, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_249, (MR_Integer) 1)));
                            Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_249, (MR_Integer) 2)));
                            Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_249, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_250)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_250, (MR_Integer) 0)));
                              Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_250, (MR_Integer) 1)));
                              succeeded = (Var_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_251, (MR_Integer) 0)));
                                Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_251, (MR_Integer) 1)));
                                succeeded = (Var_253 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_252)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_252, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_441 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_252, (MR_Integer) 1)));
                                    succeeded = (YVal_441 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      *OutputArg_15 = Z_14;
                                      Var_255 = (MR_Integer) 238;
                                      Var_256 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_255, Var_256);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_442);
                                        succeeded = libs__int_emu__quotient_4_p_0(BitsPerInt_442, XVal_440, YVal_441, &OutputArgVal_16);
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
            }
          }
          break;
        case (MR_Integer) 4:
          {
            // case "/\"
            {
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Integer XVal_464;
              MR_Integer YVal_465;
              MR_Word Var_546;
              MR_Word Var_547;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_548;
              MR_Word Var_549;
              MR_Word Var_99;
              MR_Word Var_100;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_546 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_547 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_133, (MR_Integer) 1)));
                  Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_133, (MR_Integer) 2)));
                  Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_133, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_134)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 0)));
                    Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 1)));
                    succeeded = (Var_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_135, (MR_Integer) 0)));
                      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_135, (MR_Integer) 1)));
                      succeeded = (Var_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_136)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_136, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_464 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_136, (MR_Integer) 1)));
                          Var_548 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 1)));
                            Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 2)));
                            Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_140)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_140, (MR_Integer) 0)));
                              Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_140, (MR_Integer) 1)));
                              succeeded = (Var_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_141, (MR_Integer) 0)));
                                Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_141, (MR_Integer) 1)));
                                succeeded = (Var_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_142)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_142, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_465 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_142, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    OutputArgVal_16 = (XVal_464 & YVal_465);
                                    succeeded = MR_TRUE;
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
          break;
        case (MR_Integer) 5:
          {
            // case "<<"
            {
              MR_Word Var_173;
              MR_Word Var_174;
              MR_Word Var_175;
              MR_Word Var_176;
              MR_Word Var_177;
              MR_Word Var_178;
              MR_Word Var_179;
              MR_Word Var_180;
              MR_Word Var_181;
              MR_Word Var_182;
              MR_Word Var_183;
              MR_Word Var_184;
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Integer XVal_455;
              MR_Integer YVal_456;
              MR_Word BitsPerInt_457;
              MR_Word Var_534;
              MR_Word Var_535;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_536;
              MR_Word Var_537;
              MR_Word Var_87;
              MR_Word Var_88;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_534 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_535 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_173, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_173, (MR_Integer) 1)));
                  Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_173, (MR_Integer) 2)));
                  Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_173, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_174)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_174, (MR_Integer) 0)));
                    Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_174, (MR_Integer) 1)));
                    succeeded = (Var_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 0)));
                      Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 1)));
                      succeeded = (Var_177 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_176)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_176, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_455 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_176, (MR_Integer) 1)));
                          Var_536 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_537 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_179, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_179, (MR_Integer) 1)));
                            Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_179, (MR_Integer) 2)));
                            Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_179, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_180)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_180, (MR_Integer) 0)));
                              Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_180, (MR_Integer) 1)));
                              succeeded = (Var_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_181, (MR_Integer) 0)));
                                Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_181, (MR_Integer) 1)));
                                succeeded = (Var_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_182)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_182, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_456 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_182, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_185 = (MR_Integer) 238;
                                    Var_186 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_185, Var_186);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_457);
                                      succeeded = libs__int_emu__left_shift_4_p_0(BitsPerInt_457, XVal_455, YVal_456, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 6:
          {
            // case ">>"
            {
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_149;
              MR_Word Var_150;
              MR_Word Var_151;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Integer XVal_461;
              MR_Integer YVal_462;
              MR_Word BitsPerInt_463;
              MR_Word Var_542;
              MR_Word Var_543;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_544;
              MR_Word Var_545;
              MR_Word Var_95;
              MR_Word Var_96;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_542 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_543 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_145, (MR_Integer) 1)));
                  Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_145, (MR_Integer) 2)));
                  Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_145, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_146)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_146, (MR_Integer) 0)));
                    Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_146, (MR_Integer) 1)));
                    succeeded = (Var_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_147, (MR_Integer) 0)));
                      Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_147, (MR_Integer) 1)));
                      succeeded = (Var_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_461 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_148, (MR_Integer) 1)));
                          Var_544 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_151)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_151, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_151, (MR_Integer) 1)));
                            Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_151, (MR_Integer) 2)));
                            Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_151, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_152)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 0)));
                              Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 1)));
                              succeeded = (Var_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_153, (MR_Integer) 0)));
                                Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_153, (MR_Integer) 1)));
                                succeeded = (Var_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_154)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_154, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_462 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_154, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_157 = (MR_Integer) 238;
                                    Var_158 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_157, Var_158);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_463);
                                      succeeded = libs__int_emu__right_shift_4_p_0(BitsPerInt_463, XVal_461, YVal_462, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 7:
          {
            // case "\/"
            {
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Integer XVal_466;
              MR_Integer YVal_467;
              MR_Word Var_550;
              MR_Word Var_551;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_552;
              MR_Word Var_553;
              MR_Word Var_103;
              MR_Word Var_104;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_551 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_121, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_121, (MR_Integer) 1)));
                  Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_121, (MR_Integer) 2)));
                  Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_121, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_122)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_122, (MR_Integer) 0)));
                    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_122, (MR_Integer) 1)));
                    succeeded = (Var_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_123, (MR_Integer) 0)));
                      Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_123, (MR_Integer) 1)));
                      succeeded = (Var_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_124, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_466 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_124, (MR_Integer) 1)));
                          Var_552 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_553 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 1)));
                            Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 2)));
                            Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_127, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_128)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_128, (MR_Integer) 0)));
                              Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_128, (MR_Integer) 1)));
                              succeeded = (Var_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 0)));
                                Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 1)));
                                succeeded = (Var_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_467 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_130, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    OutputArgVal_16 = (XVal_466 | YVal_467);
                                    succeeded = MR_TRUE;
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
          break;
        case (MR_Integer) 8:
          {
            // case "minus"
            {
              MR_Word Var_341;
              MR_Word Var_342;
              MR_Word Var_343;
              MR_Word Var_344;
              MR_Word Var_345;
              MR_Word Var_346;
              MR_Word Var_347;
              MR_Word Var_348;
              MR_Word Var_349;
              MR_Word Var_350;
              MR_Word Var_351;
              MR_Word Var_352;
              MR_Word Var_353;
              MR_Word Var_354;
              MR_Integer XVal_419;
              MR_Integer YVal_420;
              MR_Word BitsPerInt_421;
              MR_Word Var_486;
              MR_Word Var_487;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word Var_488;
              MR_Word Var_489;
              MR_Word Var_39;
              MR_Word Var_40;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_341)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_341, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_341, (MR_Integer) 1)));
                  Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_341, (MR_Integer) 2)));
                  Var_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_341, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_342)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_342, (MR_Integer) 0)));
                    Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_342, (MR_Integer) 1)));
                    succeeded = (Var_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_343, (MR_Integer) 0)));
                      Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_343, (MR_Integer) 1)));
                      succeeded = (Var_345 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_344)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_344, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_419 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_344, (MR_Integer) 1)));
                          Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_347)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_347, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_347, (MR_Integer) 1)));
                            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_347, (MR_Integer) 2)));
                            Var_348 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_347, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_348)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_348, (MR_Integer) 0)));
                              Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_348, (MR_Integer) 1)));
                              succeeded = (Var_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_349, (MR_Integer) 0)));
                                Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_349, (MR_Integer) 1)));
                                succeeded = (Var_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_350)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_350, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_350, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_353 = (MR_Integer) 238;
                                    Var_354 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_353, Var_354);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_421);
                                      succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_421, XVal_419, YVal_420, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 9:
          {
            // case "mod"
            {
              MR_Word Var_229;
              MR_Word Var_230;
              MR_Word Var_231;
              MR_Word Var_232;
              MR_Word Var_233;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Var_238;
              MR_Word Var_239;
              MR_Word Var_240;
              MR_Word Var_241;
              MR_Word Var_242;
              MR_Integer XVal_443;
              MR_Integer YVal_444;
              MR_Word BitsPerInt_445;
              MR_Word Var_518;
              MR_Word Var_519;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_520;
              MR_Word Var_521;
              MR_Word Var_71;
              MR_Word Var_72;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_229)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_229, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_229, (MR_Integer) 1)));
                  Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_229, (MR_Integer) 2)));
                  Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_229, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_230)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_230, (MR_Integer) 0)));
                    Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_230, (MR_Integer) 1)));
                    succeeded = (Var_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 0)));
                      Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 1)));
                      succeeded = (Var_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_232)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_232, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_443 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_232, (MR_Integer) 1)));
                          Var_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_235, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_235, (MR_Integer) 1)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_235, (MR_Integer) 2)));
                            Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_235, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_236)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_236, (MR_Integer) 0)));
                              Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_236, (MR_Integer) 1)));
                              succeeded = (Var_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_237, (MR_Integer) 0)));
                                Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_237, (MR_Integer) 1)));
                                succeeded = (Var_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_238)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_238, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_444 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_238, (MR_Integer) 1)));
                                    succeeded = (YVal_444 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      *OutputArg_15 = Z_14;
                                      Var_241 = (MR_Integer) 238;
                                      Var_242 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_241, Var_242);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_445);
                                        succeeded = libs__int_emu__mod_4_p_0(BitsPerInt_445, XVal_443, YVal_444, &OutputArgVal_16);
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
            }
          }
          break;
        case (MR_Integer) 10:
          {
            // case "plus"
            {
              MR_Integer XVal_19;
              MR_Integer YVal_22;
              MR_Word BitsPerInt_23;
              MR_Word Var_397;
              MR_Word Var_398;
              MR_Word Var_399;
              MR_Word Var_400;
              MR_Word Var_401;
              MR_Word Var_402;
              MR_Word Var_403;
              MR_Word Var_404;
              MR_Word Var_405;
              MR_Word Var_406;
              MR_Word Var_407;
              MR_Word Var_408;
              MR_Word Var_409;
              MR_Word Var_410;
              MR_Word Var_470;
              MR_Word Var_471;
              MR_Word Var_17;
              MR_Word Var_18;
              MR_Word Var_472;
              MR_Word Var_473;
              MR_Word Var_20;
              MR_Word Var_21;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_397)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_397, (MR_Integer) 1)));
                  Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_397, (MR_Integer) 2)));
                  Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_397, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_398)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_398, (MR_Integer) 0)));
                    Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_398, (MR_Integer) 1)));
                    succeeded = (Var_402 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_399, (MR_Integer) 0)));
                      Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_399, (MR_Integer) 1)));
                      succeeded = (Var_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_400)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_400, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_400, (MR_Integer) 1)));
                          Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_403)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_403, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_403, (MR_Integer) 1)));
                            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_403, (MR_Integer) 2)));
                            Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_403, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_404)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_404, (MR_Integer) 0)));
                              Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_404, (MR_Integer) 1)));
                              succeeded = (Var_408 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_405, (MR_Integer) 0)));
                                Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_405, (MR_Integer) 1)));
                                succeeded = (Var_407 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_406)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_406, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_406, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_409 = (MR_Integer) 238;
                                    Var_410 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_409, Var_410);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_23);
                                      succeeded = libs__int_emu__plus_4_p_0(BitsPerInt_23, XVal_19, YVal_22, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 11:
          {
            // case "rem"
            {
              MR_Word Var_215;
              MR_Word Var_216;
              MR_Word Var_217;
              MR_Word Var_218;
              MR_Word Var_219;
              MR_Word Var_220;
              MR_Word Var_221;
              MR_Word Var_222;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_225;
              MR_Word Var_226;
              MR_Word Var_227;
              MR_Word Var_228;
              MR_Integer XVal_446;
              MR_Integer YVal_447;
              MR_Word BitsPerInt_448;
              MR_Word Var_522;
              MR_Word Var_523;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_524;
              MR_Word Var_525;
              MR_Word Var_75;
              MR_Word Var_76;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_215)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_215, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_215, (MR_Integer) 1)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_215, (MR_Integer) 2)));
                  Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_215, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_216)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_216, (MR_Integer) 0)));
                    Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_216, (MR_Integer) 1)));
                    succeeded = (Var_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_217, (MR_Integer) 0)));
                      Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_217, (MR_Integer) 1)));
                      succeeded = (Var_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_218)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_218, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_446 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_218, (MR_Integer) 1)));
                          Var_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_525 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_221)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_221, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_221, (MR_Integer) 1)));
                            Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_221, (MR_Integer) 2)));
                            Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_221, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_222)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_222, (MR_Integer) 0)));
                              Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_222, (MR_Integer) 1)));
                              succeeded = (Var_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_223, (MR_Integer) 0)));
                                Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_223, (MR_Integer) 1)));
                                succeeded = (Var_225 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_224)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_224, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_447 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_224, (MR_Integer) 1)));
                                    succeeded = (YVal_447 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      *OutputArg_15 = Z_14;
                                      Var_227 = (MR_Integer) 238;
                                      Var_228 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_227, Var_228);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_448);
                                        succeeded = libs__int_emu__rem_4_p_0(BitsPerInt_448, XVal_446, YVal_447, &OutputArgVal_16);
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
            }
          }
          break;
        case (MR_Integer) 12:
          {
            // case "times"
            {
              MR_Word Var_285;
              MR_Word Var_286;
              MR_Word Var_287;
              MR_Word Var_288;
              MR_Word Var_289;
              MR_Word Var_290;
              MR_Word Var_291;
              MR_Word Var_292;
              MR_Word Var_293;
              MR_Word Var_294;
              MR_Word Var_295;
              MR_Word Var_296;
              MR_Word Var_297;
              MR_Word Var_298;
              MR_Integer XVal_431;
              MR_Integer YVal_432;
              MR_Word BitsPerInt_433;
              MR_Word Var_502;
              MR_Word Var_503;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_504;
              MR_Word Var_505;
              MR_Word Var_55;
              MR_Word Var_56;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_285, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_285, (MR_Integer) 1)));
                  Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_285, (MR_Integer) 2)));
                  Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_285, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_286)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_286, (MR_Integer) 0)));
                    Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_286, (MR_Integer) 1)));
                    succeeded = (Var_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_287, (MR_Integer) 0)));
                      Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_287, (MR_Integer) 1)));
                      succeeded = (Var_289 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_288)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_288, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_288, (MR_Integer) 1)));
                          Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_291, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_291, (MR_Integer) 1)));
                            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_291, (MR_Integer) 2)));
                            Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_291, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_292)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_292, (MR_Integer) 0)));
                              Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_292, (MR_Integer) 1)));
                              succeeded = (Var_296 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_293, (MR_Integer) 0)));
                                Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_293, (MR_Integer) 1)));
                                succeeded = (Var_295 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_294)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_294, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_432 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_294, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_297 = (MR_Integer) 238;
                                    Var_298 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_297, Var_298);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_433);
                                      succeeded = libs__int_emu__times_4_p_0(BitsPerInt_433, XVal_431, YVal_432, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 13:
          {
            // case "unchecked_left_shift"
            {
              MR_Word Var_187;
              MR_Word Var_188;
              MR_Word Var_189;
              MR_Word Var_190;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_193;
              MR_Word Var_194;
              MR_Word Var_195;
              MR_Word Var_196;
              MR_Word Var_197;
              MR_Word Var_198;
              MR_Word Var_199;
              MR_Word Var_200;
              MR_Integer XVal_452;
              MR_Integer YVal_453;
              MR_Word BitsPerInt_454;
              MR_Word Var_530;
              MR_Word Var_531;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_532;
              MR_Word Var_533;
              MR_Word Var_83;
              MR_Word Var_84;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_530 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_531 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_187)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_187, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_187, (MR_Integer) 1)));
                  Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_187, (MR_Integer) 2)));
                  Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_187, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_188)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_188, (MR_Integer) 0)));
                    Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_188, (MR_Integer) 1)));
                    succeeded = (Var_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_189, (MR_Integer) 0)));
                      Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_189, (MR_Integer) 1)));
                      succeeded = (Var_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_190)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_190, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_452 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_190, (MR_Integer) 1)));
                          Var_532 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_533 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_193, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_193, (MR_Integer) 1)));
                            Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_193, (MR_Integer) 2)));
                            Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_193, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_194)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_194, (MR_Integer) 0)));
                              Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_194, (MR_Integer) 1)));
                              succeeded = (Var_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_195, (MR_Integer) 0)));
                                Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_195, (MR_Integer) 1)));
                                succeeded = (Var_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_196)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_196, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_453 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_196, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_199 = (MR_Integer) 238;
                                    Var_200 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_199, Var_200);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_454);
                                      succeeded = libs__int_emu__unchecked_left_shift_4_p_0(BitsPerInt_454, XVal_452, YVal_453, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 14:
          {
            // case "unchecked_quotient"
            {
              MR_Word Var_257;
              MR_Word Var_258;
              MR_Word Var_259;
              MR_Word Var_260;
              MR_Word Var_261;
              MR_Word Var_262;
              MR_Word Var_263;
              MR_Word Var_264;
              MR_Word Var_265;
              MR_Word Var_266;
              MR_Word Var_267;
              MR_Word Var_268;
              MR_Word Var_269;
              MR_Word Var_270;
              MR_Integer XVal_437;
              MR_Integer YVal_438;
              MR_Word BitsPerInt_439;
              MR_Word Var_510;
              MR_Word Var_511;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_512;
              MR_Word Var_513;
              MR_Word Var_63;
              MR_Word Var_64;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_257, (MR_Integer) 1)));
                  Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_257, (MR_Integer) 2)));
                  Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_257, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_258)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 0)));
                    Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 1)));
                    succeeded = (Var_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_259, (MR_Integer) 0)));
                      Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_259, (MR_Integer) 1)));
                      succeeded = (Var_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_260, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_437 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_260, (MR_Integer) 1)));
                          Var_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_263, (MR_Integer) 1)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_263, (MR_Integer) 2)));
                            Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_263, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_264)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 0)));
                              Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 1)));
                              succeeded = (Var_268 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_265, (MR_Integer) 0)));
                                Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_265, (MR_Integer) 1)));
                                succeeded = (Var_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_266)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_266, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_438 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_266, (MR_Integer) 1)));
                                    succeeded = (YVal_438 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      *OutputArg_15 = Z_14;
                                      Var_269 = (MR_Integer) 238;
                                      Var_270 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_269, Var_270);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_439);
                                        succeeded = libs__int_emu__unchecked_quotient_4_p_0(BitsPerInt_439, XVal_437, YVal_438, &OutputArgVal_16);
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
            }
          }
          break;
        case (MR_Integer) 15:
          {
            // case "unchecked_rem"
            {
              MR_Word Var_201;
              MR_Word Var_202;
              MR_Word Var_203;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_206;
              MR_Word Var_207;
              MR_Word Var_208;
              MR_Word Var_209;
              MR_Word Var_210;
              MR_Word Var_211;
              MR_Word Var_212;
              MR_Word Var_213;
              MR_Word Var_214;
              MR_Integer XVal_449;
              MR_Integer YVal_450;
              MR_Word BitsPerInt_451;
              MR_Word Var_526;
              MR_Word Var_527;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_528;
              MR_Word Var_529;
              MR_Word Var_79;
              MR_Word Var_80;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_526 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_527 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_201)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_201, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_201, (MR_Integer) 1)));
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_201, (MR_Integer) 2)));
                  Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_201, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_202)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_202, (MR_Integer) 0)));
                    Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_202, (MR_Integer) 1)));
                    succeeded = (Var_206 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_203, (MR_Integer) 0)));
                      Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_203, (MR_Integer) 1)));
                      succeeded = (Var_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_204)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_204, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_449 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_204, (MR_Integer) 1)));
                          Var_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_529 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_207)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_207, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_207, (MR_Integer) 1)));
                            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_207, (MR_Integer) 2)));
                            Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_207, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_208)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_208, (MR_Integer) 0)));
                              Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_208, (MR_Integer) 1)));
                              succeeded = (Var_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_209, (MR_Integer) 0)));
                                Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_209, (MR_Integer) 1)));
                                succeeded = (Var_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_210)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_210, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_450 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_210, (MR_Integer) 1)));
                                    succeeded = (YVal_450 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      *OutputArg_15 = Z_14;
                                      Var_213 = (MR_Integer) 238;
                                      Var_214 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_213, Var_214);
                                      if (succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_451);
                                        succeeded = libs__int_emu__unchecked_rem_4_p_0(BitsPerInt_451, XVal_449, YVal_450, &OutputArgVal_16);
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
            }
          }
          break;
        case (MR_Integer) 16:
          {
            // case "unchecked_right_shift"
            {
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Integer XVal_458;
              MR_Integer YVal_459;
              MR_Word BitsPerInt_460;
              MR_Word Var_538;
              MR_Word Var_539;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_540;
              MR_Word Var_541;
              MR_Word Var_91;
              MR_Word Var_92;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_538 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_539 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_159)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_159, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_159, (MR_Integer) 1)));
                  Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_159, (MR_Integer) 2)));
                  Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_159, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_160)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_160, (MR_Integer) 0)));
                    Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_160, (MR_Integer) 1)));
                    succeeded = (Var_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_161, (MR_Integer) 0)));
                      Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_161, (MR_Integer) 1)));
                      succeeded = (Var_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_162)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_162, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_458 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_162, (MR_Integer) 1)));
                          Var_540 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_541 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_165, (MR_Integer) 1)));
                            Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_165, (MR_Integer) 2)));
                            Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_165, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_166)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_166, (MR_Integer) 0)));
                              Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_166, (MR_Integer) 1)));
                              succeeded = (Var_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_167, (MR_Integer) 0)));
                                Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_167, (MR_Integer) 1)));
                                succeeded = (Var_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_168, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_459 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_168, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    Var_171 = (MR_Integer) 238;
                                    Var_172 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_171, Var_172);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_9, &BitsPerInt_460);
                                      succeeded = libs__int_emu__unchecked_right_shift_4_p_0(BitsPerInt_460, XVal_458, YVal_459, &OutputArgVal_16);
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
          }
          break;
        case (MR_Integer) 17:
          {
            // case "xor"
            {
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Integer XVal_468;
              MR_Integer YVal_469;
              MR_Word Var_554;
              MR_Word Var_555;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_556;
              MR_Word Var_557;
              MR_Word Var_107;
              MR_Word Var_108;

              succeeded = (ModeNum_11 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_554 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
                Var_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
                Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
                succeeded = ((((MR_tag((MR_Word) Var_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 1)));
                  Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 2)));
                  Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_110)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0)));
                    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 1)));
                    succeeded = (Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0)));
                      Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 1)));
                      succeeded = (Var_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_112, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_468 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_112, (MR_Integer) 1)));
                          Var_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0)));
                          Var_557 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1)));
                          Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2)));
                          succeeded = ((((MR_tag((MR_Word) Var_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 1)));
                            Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 2)));
                            Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_116)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_116, (MR_Integer) 0)));
                              Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_116, (MR_Integer) 1)));
                              succeeded = (Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 0)));
                                Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 1)));
                                succeeded = (Var_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_118)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_118, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_469 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_118, (MR_Integer) 1)));
                                    *OutputArg_15 = Z_14;
                                    OutputArgVal_16 = (XVal_468 ^ YVal_469);
                                    succeeded = MR_TRUE;
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
          break;
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_16));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded = (ModeNum_10 == (MR_Integer) 0);
    MR_Integer OutputArgVal_14;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Integer Var_118;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0)));
      Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1)));
      Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2)));
      succeeded = ((((MR_tag((MR_Word) Var_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_108, (MR_Integer) 1)));
        Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_108, (MR_Integer) 2)));
        Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_108, (MR_Integer) 3)));
        succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 0)));
          Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 1)));
          succeeded = (Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 0)));
            Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 1)));
            succeeded = (Var_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_117, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_117, (MR_Integer) 1)));
                // binary string jump switch
                lo_0 = (MR_Integer) 0;
                hi_1 = (MR_Integer) 6;
                do
                {
                  mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
                  result_3 = MR_strcmp(ProcName_9, ((&transform_hlds__const_prop_vector_common_2[0 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                  if ((result_3 == (MR_Integer) 0))
                  {
                    switch (((&transform_hlds__const_prop_vector_common_2[0 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          // case "+"
                          *OutputArg_13 = Y_12;
                          OutputArgVal_14 = Var_118;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          // case "-"
                          {
                            MR_Word BitsPerInt_20;
                            MR_Integer Var_77;

                            *OutputArg_13 = Y_12;
                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 238, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_20);
                              Var_77 = (MR_Integer) 0;
                              succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_20, Var_77, Var_118, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          // case "\"
                          *OutputArg_13 = Y_12;
                          OutputArgVal_14 = ~(Var_118);
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          // case "floor_to_multiple_of_bits_per_int"
                          {
                            MR_Word BitsPerInt_87;

                            *OutputArg_13 = Y_12;
                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 238, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_87);
                              succeeded = libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(Var_118, BitsPerInt_87, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          // case "quot_bits_per_int"
                          {
                            MR_Word BitsPerInt_89;

                            *OutputArg_13 = Y_12;
                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 238, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_89);
                              succeeded = libs__int_emu__quot_bits_per_int_3_p_0(Var_118, BitsPerInt_89, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          // case "rem_bits_per_int"
                          {
                            MR_Word BitsPerInt_93;

                            *OutputArg_13 = Y_12;
                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 238, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_93);
                              succeeded = libs__int_emu__rem_bits_per_int_3_p_0(Var_118, BitsPerInt_93, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          // case "times_bits_per_int"
                          {
                            MR_Word BitsPerInt_91;

                            *OutputArg_13 = Y_12;
                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 238, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_91);
                              succeeded = libs__int_emu__times_bits_per_int_3_p_0(Var_118, BitsPerInt_91, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                    }
                    // jump out of search loop
                    goto label_0;
                  }
                  else
                  if ((result_3 < (MR_Integer) 0))
                    hi_1 = (mid_2 - (MR_Integer) 1);
                  else
                    lo_0 = (mid_2 + (MR_Integer) 1);
                }
                while ((lo_0 <= hi_1));
                succeeded = MR_FALSE;
              label_0:;
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_14));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(
  MR_Word Globals_7,
  MR_String ProcName_8,
  MR_Integer ModeNum_9,
  MR_Word X_10,
  MR_Word * OutputArg_11,
  MR_Word * ConsId_12)
{
  {
    MR_bool succeeded = (strcmp(ProcName_8, (MR_String) "bits_per_uint") == 0);
    MR_Integer OutputArgVal_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = (ModeNum_9 == (MR_Integer) 0);
      if (succeeded)
      {
        *OutputArg_11 = X_10;
        Var_14 = (MR_Integer) 238;
        Var_15 = (MR_Integer) 0;
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_7, Var_14, Var_15);
        if (succeeded)
        {
          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_7, &Var_16);
          OutputArgVal_13 = (MR_Integer) Var_16;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ConsId_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_13));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(
  MR_Word Globals_7,
  MR_String ProcName_8,
  MR_Integer ModeNum_9,
  MR_Word X_10,
  MR_Word * OutputArg_11,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded = (strcmp(ProcName_8, (MR_String) "bits_per_int") == 0);
    MR_Integer OutputArgVal_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      succeeded = (ModeNum_9 == (MR_Integer) 0);
      if (succeeded)
      {
        *OutputArg_11 = X_10;
        Var_13 = (MR_Integer) 238;
        Var_14 = (MR_Integer) 0;
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_7, Var_13, Var_14);
        if (succeeded)
        {
          libs__int_emu__target_bits_per_int_2_p_0(Globals_7, &Var_15);
          OutputArgVal_12 = (MR_Integer) Var_15;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__const_prop____Compare____arg_val_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__const_prop__init(void)
{
}

void mercury__transform_hlds__const_prop__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0);
	MR_register_type_ctor_info(&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_val_0);
}

void mercury__transform_hlds__const_prop__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__const_prop__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.const_prop.
