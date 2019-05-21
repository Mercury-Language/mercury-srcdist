/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module transform_hlds.const_prop. */
/* :- implementation. */

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
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__79__1_3_f_0(
  MR_Word transform_hlds__const_prop__VarTypes_12,
  MR_Word transform_hlds__const_prop__InstMap_13,
  MR_Word transform_hlds__const_prop__LambdaHeadVar__1_27);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
  MR_Box transform_hlds__const_prop__closure_arg,
  MR_Box transform_hlds__const_prop__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
  MR_Word transform_hlds__const_prop__Globals_9,
  MR_String transform_hlds__const_prop__ModuleName_10,
  MR_String transform_hlds__const_prop__Pred_11,
  MR_Integer transform_hlds__const_prop__ModeNum_12,
  MR_Word transform_hlds__const_prop__Args_13,
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);

static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
  MR_Word transform_hlds__const_prop__OutputArg_6,
  MR_Word transform_hlds__const_prop__Cons_7,
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);

static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
  MR_Word transform_hlds__const_prop__OutputArg_6,
  MR_Word transform_hlds__const_prop__InputArg_7,
  MR_Word * transform_hlds__const_prop__Goal_8,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
  MR_String transform_hlds__const_prop__HeadVar__1_1,
  MR_String transform_hlds__const_prop__HeadVar__2_2,
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
  MR_Word transform_hlds__const_prop__Args_4,
  MR_Word * transform_hlds__const_prop__Result_5);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
  MR_String transform_hlds__const_prop__HeadVar__1_1,
  MR_String transform_hlds__const_prop__HeadVar__2_2,
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
  MR_Word transform_hlds__const_prop__Args_4,
  MR_Word * transform_hlds__const_prop__Result_5);

static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
  MR_Word transform_hlds__const_prop__X_4,
  MR_Word transform_hlds__const_prop__Y_5,
  MR_Word * transform_hlds__const_prop__Result_6);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
  MR_Word transform_hlds__const_prop__Globals_8,
  MR_String transform_hlds__const_prop__ModuleName_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__Args_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_117_105_110_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_3_8_p_0(
  MR_Word transform_hlds__const_prop__Globals_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
  MR_Word transform_hlds__const_prop__Globals_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
  MR_Word transform_hlds__const_prop__Globals_8,
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(
  MR_Word transform_hlds__const_prop__Globals_7,
  MR_String transform_hlds__const_prop__ProcName_8,
  MR_Integer transform_hlds__const_prop__ModeNum_9,
  MR_Word transform_hlds__const_prop__X_10,
  MR_Word * transform_hlds__const_prop__OutputArg_11,
  MR_Word * transform_hlds__const_prop__ConsId_12);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(
  MR_Word transform_hlds__const_prop__Globals_7,
  MR_String transform_hlds__const_prop__ProcName_8,
  MR_Integer transform_hlds__const_prop__ModeNum_9,
  MR_Word transform_hlds__const_prop__X_10,
  MR_Word * transform_hlds__const_prop__OutputArg_11,
  MR_Word * transform_hlds__const_prop__HeadVar__6_6);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
  MR_Box transform_hlds__const_prop__wrapper_arg_3);


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
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__79__1_3_f_0(
  MR_Word transform_hlds__const_prop__VarTypes_12,
  MR_Word transform_hlds__const_prop__InstMap_13,
  MR_Word transform_hlds__const_prop__LambdaHeadVar__1_27)
{
  {
    MR_Word transform_hlds__const_prop__LambdaHeadVar__2_28;
    MR_Word transform_hlds__const_prop__Type_22;
    MR_Word transform_hlds__const_prop__Inst_23;

    hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__const_prop__InstMap_13, transform_hlds__const_prop__LambdaHeadVar__1_27, &transform_hlds__const_prop__Inst_23);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__const_prop__VarTypes_12, transform_hlds__const_prop__LambdaHeadVar__1_27, &transform_hlds__const_prop__Type_22);
    {
      transform_hlds__const_prop__LambdaHeadVar__2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LambdaHeadVar__2_28, 0) = ((MR_Box) (transform_hlds__const_prop__LambdaHeadVar__1_27));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LambdaHeadVar__2_28, 1) = ((MR_Box) (transform_hlds__const_prop__Type_22));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LambdaHeadVar__2_28, 2) = ((MR_Box) (transform_hlds__const_prop__Inst_23));
    }
    return transform_hlds__const_prop__LambdaHeadVar__2_28;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
    if (transform_hlds__const_prop__succeeded)
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word transform_hlds__const_prop__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__const_prop__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));

        parse_tree__prog_data____Compare____cons_id_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__Var_16, transform_hlds__const_prop__ArgY1_5);
      }
      else
        *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word transform_hlds__const_prop__Var_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);

      if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word transform_hlds__const_prop__ArgY1_11 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__3_3), (MR_Integer) 0);

        transform_hlds__const_prop____Compare____arg_hlds_info_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__Var_17, transform_hlds__const_prop__ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Integer transform_hlds__const_prop__CastX_7 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
    MR_Integer transform_hlds__const_prop__CastY_8 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_7 == transform_hlds__const_prop__CastY_8);
    if (transform_hlds__const_prop__succeeded)
      transform_hlds__const_prop__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word transform_hlds__const_prop__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__ArgY1_4;

      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__ArgX1_3, transform_hlds__const_prop__ArgY1_4);
      }
    }
    else
    {
      MR_Word transform_hlds__const_prop__ArgX1_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__1_1), (MR_Integer) 0);
      MR_Word transform_hlds__const_prop__ArgY1_6;

      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__ArgY1_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);
        transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(transform_hlds__const_prop__ArgX1_5, transform_hlds__const_prop__ArgY1_6);
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
    if (transform_hlds__const_prop__succeeded)
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__const_prop__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__const_prop__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__const_prop__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__const_prop__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__const_prop__Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], &transform_hlds__const_prop__Var_10, ((MR_Box) (transform_hlds__const_prop__ArgX1_4)), ((MR_Box) (transform_hlds__const_prop__ArgY1_5)));
      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_10 == (MR_Integer) 0);
      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
      if (transform_hlds__const_prop__succeeded)
        *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__Var_10;
      else
      {
        MR_Word transform_hlds__const_prop__Var_11;

        parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__const_prop__Var_11, transform_hlds__const_prop__ArgX2_6, transform_hlds__const_prop__ArgY2_7);
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_11 == (MR_Integer) 0);
        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
        if (transform_hlds__const_prop__succeeded)
          *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__Var_11;
        else
          parse_tree__prog_data____Compare____mer_inst_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__ArgX3_8, transform_hlds__const_prop__ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Integer transform_hlds__const_prop__CastX_9 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
    MR_Integer transform_hlds__const_prop__CastY_10 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_9 == transform_hlds__const_prop__CastY_10);
    if (transform_hlds__const_prop__succeeded)
      transform_hlds__const_prop__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__const_prop__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__const_prop__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__const_prop__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__const_prop__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));

      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__ArgX1_3)), ((MR_Box) (transform_hlds__const_prop__ArgY1_4)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__const_prop__ArgX2_5, transform_hlds__const_prop__ArgY2_6);
        if (transform_hlds__const_prop__succeeded)
          transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__const_prop__ArgX3_7, transform_hlds__const_prop__ArgY3_8);
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
  MR_Box transform_hlds__const_prop__closure_arg,
  MR_Box transform_hlds__const_prop__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__const_prop__wrapper_arg_2;
    MR_Box transform_hlds__const_prop__closure = transform_hlds__const_prop__closure_arg;
    MR_Word transform_hlds__const_prop__conv0_LambdaHeadVar__2_28;

    transform_hlds__const_prop__conv0_LambdaHeadVar__2_28 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__79__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__const_prop__wrapper_arg_1));
    transform_hlds__const_prop__wrapper_arg_2 = ((MR_Box) (transform_hlds__const_prop__conv0_LambdaHeadVar__2_28));
    return transform_hlds__const_prop__wrapper_arg_2;
  }
}

MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0(
  MR_Word transform_hlds__const_prop__Globals_11,
  MR_Word transform_hlds__const_prop__VarTypes_12,
  MR_Word transform_hlds__const_prop__InstMap_13,
  MR_String transform_hlds__const_prop__ModuleName_14,
  MR_String transform_hlds__const_prop__ProcName_15,
  MR_Integer transform_hlds__const_prop__ModeNum_16,
  MR_Word transform_hlds__const_prop__Args_17,
  MR_Word * transform_hlds__const_prop__GoalExpr_18,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Word transform_hlds__const_prop__LookupArgs_20;
    MR_Word transform_hlds__const_prop__ArgHldsInfos_24;

    {
      transform_hlds__const_prop__LookupArgs_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 3) = ((MR_Box) (transform_hlds__const_prop__VarTypes_12));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 4) = ((MR_Box) (transform_hlds__const_prop__InstMap_13));
    }
    transform_hlds__const_prop__ArgHldsInfos_24 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], (MR_Word) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0, transform_hlds__const_prop__LookupArgs_20, transform_hlds__const_prop__Args_17);
    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_call_2_8_p_0(transform_hlds__const_prop__Globals_11, transform_hlds__const_prop__ModuleName_14, transform_hlds__const_prop__ProcName_15, transform_hlds__const_prop__ModeNum_16, transform_hlds__const_prop__ArgHldsInfos_24, transform_hlds__const_prop__GoalExpr_18, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26);
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
  MR_Word transform_hlds__const_prop__Globals_9,
  MR_String transform_hlds__const_prop__ModuleName_10,
  MR_String transform_hlds__const_prop__Pred_11,
  MR_Integer transform_hlds__const_prop__ModeNum_12,
  MR_Word transform_hlds__const_prop__Args_13,
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Word transform_hlds__const_prop__OutputArg_16;
    MR_Word transform_hlds__const_prop__Cons_17;

    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__OutputArg_16, &transform_hlds__const_prop__Cons_17);
    if (transform_hlds__const_prop__succeeded)
    {
      MR_Word transform_hlds__const_prop__Delta0_48;
      MR_Word transform_hlds__const_prop__Inst_49;
      MR_Word transform_hlds__const_prop__Delta_50;
      MR_Word transform_hlds__const_prop__Var_53;
      MR_Word transform_hlds__const_prop__Var_54;
      MR_Word transform_hlds__const_prop__Var_57;
      MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58;
      MR_Word transform_hlds__const_prop__Goal_66;
      MR_Word transform_hlds__const_prop__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
      MR_Word transform_hlds__const_prop__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
      MR_Word transform_hlds__const_prop__Var_67;
      MR_Word transform_hlds__const_prop__Var_61;
      MR_Word transform_hlds__const_prop__Var_62;

      hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__Var_68, transform_hlds__const_prop__Cons_17, &transform_hlds__const_prop__Goal_66);
      *transform_hlds__const_prop__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 1)));
      transform_hlds__const_prop__Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21);
      {
        transform_hlds__const_prop__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_54, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_17));
        MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        transform_hlds__const_prop__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_53, 0) = ((MR_Box) (transform_hlds__const_prop__Var_54));
        MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        transform_hlds__const_prop__Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 3) = ((MR_Box) (transform_hlds__const_prop__Var_53));
      }
      transform_hlds__const_prop__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
      transform_hlds__const_prop__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__Var_57, transform_hlds__const_prop__Inst_49, transform_hlds__const_prop__Delta0_48, &transform_hlds__const_prop__Delta_50);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_50, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
      transform_hlds__const_prop__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word transform_hlds__const_prop__Succeeded_18;

      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_test_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Succeeded_18);
      if (transform_hlds__const_prop__succeeded)
      {
        switch (transform_hlds__const_prop__Succeeded_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
            break;
          case (MR_Integer) 1:
            *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__true_goal_expr_0_f_0();
            break;
        }
        *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
        transform_hlds__const_prop__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word transform_hlds__const_prop__Result_19;

        transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_semidet_call_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Result_19);
        if (transform_hlds__const_prop__succeeded)
        {
          if ((transform_hlds__const_prop__Result_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
            *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
          }
          else
          {
            MR_Word transform_hlds__const_prop__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Result_19, (MR_Integer) 0)));
            MR_Word transform_hlds__const_prop__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_39, (MR_Integer) 1)));
            MR_Word transform_hlds__const_prop__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_39, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) transform_hlds__const_prop__Var_40)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word transform_hlds__const_prop__Cons_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_40, (MR_Integer) 0)));

              transform_hlds__const_prop__make_construction_goal_5_p_0(transform_hlds__const_prop__Var_41, transform_hlds__const_prop__Cons_31, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
            }
            else
            {
              MR_Word transform_hlds__const_prop__InputArg_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__Var_40), (MR_Integer) 0);

              transform_hlds__const_prop__make_assignment_goal_5_p_0(transform_hlds__const_prop__Var_41, transform_hlds__const_prop__InputArg_20, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
            }
          }
          transform_hlds__const_prop__succeeded = MR_TRUE;
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
  MR_Word transform_hlds__const_prop__OutputArg_6,
  MR_Word transform_hlds__const_prop__Cons_7,
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14)
{
  {
    MR_Word transform_hlds__const_prop__Delta0_10;
    MR_Word transform_hlds__const_prop__Inst_11;
    MR_Word transform_hlds__const_prop__Delta_12;
    MR_Word transform_hlds__const_prop__Var_17;
    MR_Word transform_hlds__const_prop__Var_18;
    MR_Word transform_hlds__const_prop__Var_21;
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22;
    MR_Word transform_hlds__const_prop__Goal_30;
    MR_Word transform_hlds__const_prop__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__Var_31;
    MR_Word transform_hlds__const_prop__Var_25;
    MR_Word transform_hlds__const_prop__Var_26;

    hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__Var_32, transform_hlds__const_prop__Cons_7, &transform_hlds__const_prop__Goal_30);
    *transform_hlds__const_prop__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 0)));
    transform_hlds__const_prop__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 1)));
    transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13);
    {
      transform_hlds__const_prop__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_18, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_7));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__const_prop__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_17, 0) = ((MR_Box) (transform_hlds__const_prop__Var_18));
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__const_prop__Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 3) = ((MR_Box) (transform_hlds__const_prop__Var_17));
    }
    transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    transform_hlds__const_prop__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__Var_21, transform_hlds__const_prop__Inst_11, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_12);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_12, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);
  }
}

static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
  MR_Word transform_hlds__const_prop__OutputArg_6,
  MR_Word transform_hlds__const_prop__InputArg_7,
  MR_Word * transform_hlds__const_prop__Goal_8,
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13)
{
  {
    MR_Word transform_hlds__const_prop__Delta0_10;
    MR_Word transform_hlds__const_prop__Delta_11;
    MR_Word transform_hlds__const_prop__Var_14;
    MR_Word transform_hlds__const_prop__Var_15;
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16;
    MR_Word transform_hlds__const_prop__OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__OutputArgMode_29;
    MR_Word transform_hlds__const_prop__InputArgMode_30;
    MR_Word transform_hlds__const_prop__UnifyMode_31;
    MR_Word transform_hlds__const_prop__Var_37;
    MR_Word transform_hlds__const_prop__Var_38;
    MR_Word transform_hlds__const_prop__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__Var_19;
    MR_Word transform_hlds__const_prop__Var_20;
    MR_Word transform_hlds__const_prop__Var_21;
    MR_Word transform_hlds__const_prop__Var_22;

    {
      transform_hlds__const_prop__OutputArgMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
    }
    {
      transform_hlds__const_prop__InputArgMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 0) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
    }
    {
      transform_hlds__const_prop__UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UnifyMode_31, 0) = ((MR_Box) (transform_hlds__const_prop__OutputArgMode_29));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UnifyMode_31, 1) = ((MR_Box) (transform_hlds__const_prop__InputArgMode_30));
    }
    {
      transform_hlds__const_prop__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_37, 0) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
    }
    {
      transform_hlds__const_prop__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__Var_38, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__Var_38, 1) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__const_prop__Goal_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__const_prop__Var_37));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__const_prop__UnifyMode_31));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__const_prop__Var_38));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
    }
    transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12);
    transform_hlds__const_prop__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    transform_hlds__const_prop__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
    transform_hlds__const_prop__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
    transform_hlds__const_prop__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
    hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__Var_14, transform_hlds__const_prop__Var_15, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_11);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_11, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
  MR_String transform_hlds__const_prop__HeadVar__1_1,
  MR_String transform_hlds__const_prop__HeadVar__2_2,
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
  MR_Word transform_hlds__const_prop__Args_4,
  MR_Word * transform_hlds__const_prop__Result_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__const_prop__succeeded;

      if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "builtin") == 0))
      {
        MR_String transform_hlds__const_prop__Var_8;
        MR_String transform_hlds__const_prop__Var_9;
        MR_Integer transform_hlds__const_prop__Var_10;

        transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_8 = (MR_String) "private_builtin";
            transform_hlds__const_prop__Var_9 = (MR_String) "typed_unify";
            transform_hlds__const_prop__Var_10 = (MR_Integer) 1;
            /* direct tailcall eliminated */
            {
              MR_String transform_hlds__const_prop__next_value_of_HeadVar__1_1 = transform_hlds__const_prop__Var_8;
              MR_String transform_hlds__const_prop__next_value_of_HeadVar__2_2 = transform_hlds__const_prop__Var_9;
              MR_Integer transform_hlds__const_prop__next_value_of_HeadVar__3_3 = transform_hlds__const_prop__Var_10;

              transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__next_value_of_HeadVar__1_1;
              transform_hlds__const_prop__HeadVar__2_2 = transform_hlds__const_prop__next_value_of_HeadVar__2_2;
              transform_hlds__const_prop__HeadVar__3_3 = transform_hlds__const_prop__next_value_of_HeadVar__3_3;
            }
            continue;
          }
        }
      }
      else
      if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
      {
        MR_Word transform_hlds__const_prop__TypeOfX_14;
        MR_Word transform_hlds__const_prop__TypeOfY_15;
        MR_Word transform_hlds__const_prop__X_16;
        MR_Word transform_hlds__const_prop__Y_17;
        MR_Word transform_hlds__const_prop__Var_19;
        MR_Word transform_hlds__const_prop__Var_20;
        MR_Word transform_hlds__const_prop__Var_21;
        MR_Word transform_hlds__const_prop__Var_22;
        MR_Word transform_hlds__const_prop__TypeInfo_36_57;
        MR_Word transform_hlds__const_prop__Var_36;
        MR_Word transform_hlds__const_prop__Var_55;
        MR_Word transform_hlds__const_prop__Var_46;
        MR_Word transform_hlds__const_prop__Var_47;
        MR_Word transform_hlds__const_prop__Var_48;
        MR_Word transform_hlds__const_prop__Var_49;

        transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 1);
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__TypeOfX_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
              transform_hlds__const_prop__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_19, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_19, (MR_Integer) 1)));
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_20)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_20, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_20, (MR_Integer) 1)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_21)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_21, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_21, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
                      transform_hlds__const_prop__TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_36_57, ((MR_Box) (transform_hlds__const_prop__Var_36)), ((MR_Box) (transform_hlds__const_prop__Var_55)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        MR_Word transform_hlds__const_prop__Var_23;
                        MR_Word transform_hlds__const_prop__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

                        {
                          transform_hlds__const_prop__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_23, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
                          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_23, 1) = ((MR_Box) (transform_hlds__const_prop__Var_24));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *transform_hlds__const_prop__Result_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__Var_23));
                        }
                        transform_hlds__const_prop__succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word transform_hlds__const_prop__XCtor_30;
                        MR_Word transform_hlds__const_prop__XArgVars_31;
                        MR_Word transform_hlds__const_prop__YCtor_34;
                        MR_Word transform_hlds__const_prop__YArgVars_35;
                        MR_Word transform_hlds__const_prop__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
                        MR_Word transform_hlds__const_prop__Var_38;
                        MR_Word transform_hlds__const_prop__Var_39;
                        MR_Word transform_hlds__const_prop__Var_40;
                        MR_Word transform_hlds__const_prop__Var_41;
                        MR_Word transform_hlds__const_prop__Var_42;
                        MR_Word transform_hlds__const_prop__Var_43;
                        MR_Word transform_hlds__const_prop__Var_44;
                        MR_Word transform_hlds__const_prop__Result0_65;
                        MR_Word transform_hlds__const_prop__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
                        MR_Word transform_hlds__const_prop__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
                        MR_Word transform_hlds__const_prop__Var_28;
                        MR_Word transform_hlds__const_prop__Var_29;
                        MR_Word transform_hlds__const_prop__Var_52;
                        MR_Word transform_hlds__const_prop__Var_53;
                        MR_Word transform_hlds__const_prop__Var_32;
                        MR_Word transform_hlds__const_prop__Var_33;
                        MR_Word transform_hlds__const_prop__TypeInfo_38_59;

                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 2)));
                          transform_hlds__const_prop__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 3)));
                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_38)) == (MR_mktag((MR_Integer) 1)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_38, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_38, (MR_Integer) 1)));
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_39, (MR_Integer) 0)));
                              transform_hlds__const_prop__XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_39, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_41, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_41, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_41, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_42)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_42, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_42, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_43, (MR_Integer) 0)));
                                    transform_hlds__const_prop__YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_43, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
                                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_59, ((MR_Box) (transform_hlds__const_prop__XArgVars_31)), ((MR_Box) (transform_hlds__const_prop__YArgVars_35)));
                                    }
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__Result0_65 = (MR_Integer) 1;
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                      if (!(transform_hlds__const_prop__succeeded))
                                      {
                                        MR_Word transform_hlds__const_prop__TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                                        MR_Integer transform_hlds__const_prop__Var_45;
                                        MR_Integer transform_hlds__const_prop__Var_56;

                                        transform_hlds__const_prop__Var_45 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__XArgVars_31);
                                        transform_hlds__const_prop__Var_56 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__YArgVars_35);
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_45 == transform_hlds__const_prop__Var_56);
                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                      }
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__Result0_65 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = MR_TRUE;
                                      }
                                    }
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      switch (transform_hlds__const_prop__Result0_65) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *transform_hlds__const_prop__Result_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Word transform_hlds__const_prop__Var_61;
                                            MR_Word transform_hlds__const_prop__Var_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

                                            {
                                              transform_hlds__const_prop__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_61, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_61, 1) = ((MR_Box) (transform_hlds__const_prop__Var_62));
                                            }
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              *transform_hlds__const_prop__Result_5 = base;
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__Var_61));
                                            }
                                          }
                                          break;
                                      }
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
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
        transform_hlds__const_prop__succeeded = MR_FALSE;
      return transform_hlds__const_prop__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
  MR_String transform_hlds__const_prop__HeadVar__1_1,
  MR_String transform_hlds__const_prop__HeadVar__2_2,
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
  MR_Word transform_hlds__const_prop__Args_4,
  MR_Word * transform_hlds__const_prop__Result_5)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
    MR_Word transform_hlds__const_prop__Var_360;
    MR_Word transform_hlds__const_prop__Var_361;
    MR_Word transform_hlds__const_prop__Var_368;
    MR_Word transform_hlds__const_prop__Var_369;
    MR_Integer transform_hlds__const_prop__lo_0;
    MR_Integer transform_hlds__const_prop__hi_1;
    MR_Integer transform_hlds__const_prop__mid_2;
    MR_Integer transform_hlds__const_prop__result_3;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
        transform_hlds__const_prop__Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_360)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_360, (MR_Integer) 0)));
          transform_hlds__const_prop__Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_360, (MR_Integer) 1)));
          /* binary string jump switch */
          transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
          transform_hlds__const_prop__hi_1 = (MR_Integer) 3;
          do
          {
            transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
            transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__HeadVar__1_1, ((&transform_hlds__const_prop_vector_common_2[60 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
            if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
            {
              switch (((&transform_hlds__const_prop_vector_common_2[60 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    /* case "float" */
                    {
                      MR_Word transform_hlds__const_prop__Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 2)));
                      MR_Word transform_hlds__const_prop__Var_379;
                      MR_Word transform_hlds__const_prop__Var_388;
                      MR_Word transform_hlds__const_prop__Var_397;
                      MR_Word transform_hlds__const_prop__Var_406;
                      MR_Word transform_hlds__const_prop__Var_407;
                      MR_Word transform_hlds__const_prop__Var_412;
                      MR_Word transform_hlds__const_prop__Var_413;
                      MR_Word transform_hlds__const_prop__Var_418;
                      MR_Word transform_hlds__const_prop__Var_419;
                      MR_Word transform_hlds__const_prop__Var_424;
                      MR_Word transform_hlds__const_prop__Var_425;
                      MR_Float transform_hlds__const_prop__Var_430;
                      MR_Float transform_hlds__const_prop__Var_433;
                      MR_Word transform_hlds__const_prop__Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 1)));
                      MR_Word transform_hlds__const_prop__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 0)));
                      MR_Word transform_hlds__const_prop__Var_380;
                      MR_Word transform_hlds__const_prop__Var_381;
                      MR_Word transform_hlds__const_prop__Var_389;
                      MR_Word transform_hlds__const_prop__Var_390;
                      MR_Word transform_hlds__const_prop__Var_398;
                      MR_Word transform_hlds__const_prop__Var_399;
                      MR_Integer transform_hlds__const_prop__lo_12;
                      MR_Integer transform_hlds__const_prop__hi_13;
                      MR_Integer transform_hlds__const_prop__mid_14;
                      MR_Integer transform_hlds__const_prop__result_15;

                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 1)));
                        transform_hlds__const_prop__Var_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 2)));
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_370)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_370, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_370, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_370, (MR_Integer) 2)));
                          transform_hlds__const_prop__Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_370, (MR_Integer) 3)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_379)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_379, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_379, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_379, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_379, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_388)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_388, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_388, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_397)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_397, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_397, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_406 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_407, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_407, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_412 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_413, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_413, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_418 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_419)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_419, (MR_Integer) 0)))) == (MR_Integer) 13)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__Var_430 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_419, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_424 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_425)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_425, (MR_Integer) 0)))) == (MR_Integer) 13)));
                                          if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__Var_433 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_425, (MR_Integer) 1)));
                                            /* binary string jump switch */
                                            transform_hlds__const_prop__lo_12 = (MR_Integer) 0;
                                            transform_hlds__const_prop__hi_13 = (MR_Integer) 3;
                                            do
                                            {
                                              transform_hlds__const_prop__mid_14 = (((transform_hlds__const_prop__lo_12 + transform_hlds__const_prop__hi_13)) / (MR_Integer) 2);
                                              transform_hlds__const_prop__result_15 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_2[56 + transform_hlds__const_prop__mid_14]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                              if ((transform_hlds__const_prop__result_15 == (MR_Integer) 0))
                                              {
                                                switch (((&transform_hlds__const_prop_vector_common_2[56 + transform_hlds__const_prop__mid_14]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      /* case "<" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_430 < transform_hlds__const_prop__Var_433);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      /* case "=<" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_430 <= transform_hlds__const_prop__Var_433);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      /* case ">" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_430 > transform_hlds__const_prop__Var_433);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      /* case ">=" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_430 >= transform_hlds__const_prop__Var_433);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                                /* jump out of search loop */
                                                goto label_2;
                                              }
                                              else
                                              if ((transform_hlds__const_prop__result_15 < (MR_Integer) 0))
                                                transform_hlds__const_prop__hi_13 = (transform_hlds__const_prop__mid_14 - (MR_Integer) 1);
                                              else
                                                transform_hlds__const_prop__lo_12 = (transform_hlds__const_prop__mid_14 + (MR_Integer) 1);
                                            }
                                            while ((transform_hlds__const_prop__lo_12 <= transform_hlds__const_prop__hi_13));
                                            transform_hlds__const_prop__succeeded = MR_FALSE;
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
                    /* case "int" */
                    {
                      MR_Word transform_hlds__const_prop__Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 2)));
                      MR_Word transform_hlds__const_prop__Var_382;
                      MR_Word transform_hlds__const_prop__Var_391;
                      MR_Word transform_hlds__const_prop__Var_400;
                      MR_Word transform_hlds__const_prop__Var_408;
                      MR_Word transform_hlds__const_prop__Var_409;
                      MR_Word transform_hlds__const_prop__Var_414;
                      MR_Word transform_hlds__const_prop__Var_415;
                      MR_Word transform_hlds__const_prop__Var_420;
                      MR_Word transform_hlds__const_prop__Var_421;
                      MR_Word transform_hlds__const_prop__Var_426;
                      MR_Word transform_hlds__const_prop__Var_427;
                      MR_Integer transform_hlds__const_prop__Var_431;
                      MR_Integer transform_hlds__const_prop__Var_434;
                      MR_Word transform_hlds__const_prop__Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 1)));
                      MR_Word transform_hlds__const_prop__Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 0)));
                      MR_Word transform_hlds__const_prop__Var_383;
                      MR_Word transform_hlds__const_prop__Var_384;
                      MR_Word transform_hlds__const_prop__Var_392;
                      MR_Word transform_hlds__const_prop__Var_393;
                      MR_Word transform_hlds__const_prop__Var_401;
                      MR_Word transform_hlds__const_prop__Var_402;
                      MR_Integer transform_hlds__const_prop__lo_8;
                      MR_Integer transform_hlds__const_prop__hi_9;
                      MR_Integer transform_hlds__const_prop__mid_10;
                      MR_Integer transform_hlds__const_prop__result_11;

                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 1)));
                        transform_hlds__const_prop__Var_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 2)));
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_373)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_373, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_373, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_373, (MR_Integer) 2)));
                          transform_hlds__const_prop__Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_373, (MR_Integer) 3)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_382)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_382, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_382, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_382, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_382, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_391)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_391, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_391, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_400)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_400, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_400, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_408 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_409, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_409, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_414 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_415, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_415, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_420 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_421)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_421, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__Var_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_421, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_426 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_427)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_427, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                          if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__Var_434 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_427, (MR_Integer) 1)));
                                            /* binary string jump switch */
                                            transform_hlds__const_prop__lo_8 = (MR_Integer) 0;
                                            transform_hlds__const_prop__hi_9 = (MR_Integer) 3;
                                            do
                                            {
                                              transform_hlds__const_prop__mid_10 = (((transform_hlds__const_prop__lo_8 + transform_hlds__const_prop__hi_9)) / (MR_Integer) 2);
                                              transform_hlds__const_prop__result_11 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_2[52 + transform_hlds__const_prop__mid_10]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                              if ((transform_hlds__const_prop__result_11 == (MR_Integer) 0))
                                              {
                                                switch (((&transform_hlds__const_prop_vector_common_2[52 + transform_hlds__const_prop__mid_10]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      /* case "<" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_431 < transform_hlds__const_prop__Var_434);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      /* case "=<" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_431 <= transform_hlds__const_prop__Var_434);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      /* case ">" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_431 > transform_hlds__const_prop__Var_434);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      /* case ">=" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_431 >= transform_hlds__const_prop__Var_434);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                                /* jump out of search loop */
                                                goto label_1;
                                              }
                                              else
                                              if ((transform_hlds__const_prop__result_11 < (MR_Integer) 0))
                                                transform_hlds__const_prop__hi_9 = (transform_hlds__const_prop__mid_10 - (MR_Integer) 1);
                                              else
                                                transform_hlds__const_prop__lo_8 = (transform_hlds__const_prop__mid_10 + (MR_Integer) 1);
                                            }
                                            while ((transform_hlds__const_prop__lo_8 <= transform_hlds__const_prop__hi_9));
                                            transform_hlds__const_prop__succeeded = MR_FALSE;
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
                    /* case "private_builtin" */
                    {
                      MR_Word transform_hlds__const_prop__X_299;
                      MR_Word transform_hlds__const_prop__Y_300;
                      MR_Word transform_hlds__const_prop__Result0_301;
                      MR_Word transform_hlds__const_prop__Var_304;
                      MR_Word transform_hlds__const_prop__Var_305;

                      transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_368)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__X_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_368, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_368, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_304)) == (MR_mktag((MR_Integer) 1)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Y_300 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_304, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_304, (MR_Integer) 1)));
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_305 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__Var_361, transform_hlds__const_prop__Var_369, &transform_hlds__const_prop__Result0_301);
                              if (transform_hlds__const_prop__succeeded)
                                switch (transform_hlds__const_prop__Result0_301) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__X_299, transform_hlds__const_prop__Y_300, transform_hlds__const_prop__Result_5);
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
                    /* case "uint" */
                    {
                      MR_Word transform_hlds__const_prop__Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 2)));
                      MR_Word transform_hlds__const_prop__Var_385;
                      MR_Word transform_hlds__const_prop__Var_394;
                      MR_Word transform_hlds__const_prop__Var_403;
                      MR_Word transform_hlds__const_prop__Var_410;
                      MR_Word transform_hlds__const_prop__Var_411;
                      MR_Word transform_hlds__const_prop__Var_416;
                      MR_Word transform_hlds__const_prop__Var_417;
                      MR_Word transform_hlds__const_prop__Var_422;
                      MR_Word transform_hlds__const_prop__Var_423;
                      MR_Word transform_hlds__const_prop__Var_428;
                      MR_Word transform_hlds__const_prop__Var_429;
                      MR_Unsigned transform_hlds__const_prop__Var_432;
                      MR_Unsigned transform_hlds__const_prop__Var_435;
                      MR_Word transform_hlds__const_prop__Var_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 1)));
                      MR_Word transform_hlds__const_prop__Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_361, (MR_Integer) 0)));
                      MR_Word transform_hlds__const_prop__Var_386;
                      MR_Word transform_hlds__const_prop__Var_387;
                      MR_Word transform_hlds__const_prop__Var_395;
                      MR_Word transform_hlds__const_prop__Var_396;
                      MR_Word transform_hlds__const_prop__Var_404;
                      MR_Word transform_hlds__const_prop__Var_405;
                      MR_Integer transform_hlds__const_prop__lo_4;
                      MR_Integer transform_hlds__const_prop__hi_5;
                      MR_Integer transform_hlds__const_prop__mid_6;
                      MR_Integer transform_hlds__const_prop__result_7;

                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 1)));
                        transform_hlds__const_prop__Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_369, (MR_Integer) 2)));
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_376)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_376, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_376, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_376, (MR_Integer) 2)));
                          transform_hlds__const_prop__Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_376, (MR_Integer) 3)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_385)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_385, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_385, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_385, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_385, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_394)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_394, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_394, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_403)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_403, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_403, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_411, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_411, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_416 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_417, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_417, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_422 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_423)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_423, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__Var_432 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_423, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_428 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_429)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_429, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                          if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__Var_435 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_429, (MR_Integer) 1)));
                                            /* binary string jump switch */
                                            transform_hlds__const_prop__lo_4 = (MR_Integer) 0;
                                            transform_hlds__const_prop__hi_5 = (MR_Integer) 3;
                                            do
                                            {
                                              transform_hlds__const_prop__mid_6 = (((transform_hlds__const_prop__lo_4 + transform_hlds__const_prop__hi_5)) / (MR_Integer) 2);
                                              transform_hlds__const_prop__result_7 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_2[48 + transform_hlds__const_prop__mid_6]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                              if ((transform_hlds__const_prop__result_7 == (MR_Integer) 0))
                                              {
                                                switch (((&transform_hlds__const_prop_vector_common_2[48 + transform_hlds__const_prop__mid_6]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                  case (MR_Integer) 0:
                                                    {
                                                      /* case "<" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_432 < transform_hlds__const_prop__Var_435);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      /* case "=<" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_432 <= transform_hlds__const_prop__Var_435);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      /* case ">" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_432 > transform_hlds__const_prop__Var_435);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 3:
                                                    {
                                                      /* case ">=" */
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_432 >= transform_hlds__const_prop__Var_435);
                                                      if (transform_hlds__const_prop__succeeded)
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
                                                      else
                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                                /* jump out of search loop */
                                                goto label_0;
                                              }
                                              else
                                              if ((transform_hlds__const_prop__result_7 < (MR_Integer) 0))
                                                transform_hlds__const_prop__hi_5 = (transform_hlds__const_prop__mid_6 - (MR_Integer) 1);
                                              else
                                                transform_hlds__const_prop__lo_4 = (transform_hlds__const_prop__mid_6 + (MR_Integer) 1);
                                            }
                                            while ((transform_hlds__const_prop__lo_4 <= transform_hlds__const_prop__hi_5));
                                            transform_hlds__const_prop__succeeded = MR_FALSE;
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
              /* jump out of search loop */
              goto label_3;
            }
            else
            if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
              transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
            else
              transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
          }
          while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
          transform_hlds__const_prop__succeeded = MR_FALSE;
        label_3:;
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
  MR_Word transform_hlds__const_prop__X_4,
  MR_Word transform_hlds__const_prop__Y_5,
  MR_Word * transform_hlds__const_prop__Result_6)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Word transform_hlds__const_prop__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));

    transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__Var_15)), ((MR_Box) (transform_hlds__const_prop__Var_34)));
    if (transform_hlds__const_prop__succeeded)
    {
      *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
      transform_hlds__const_prop__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word transform_hlds__const_prop__XCtor_9;
      MR_Word transform_hlds__const_prop__XArgVars_10;
      MR_Word transform_hlds__const_prop__YCtor_13;
      MR_Word transform_hlds__const_prop__YArgVars_14;
      MR_Word transform_hlds__const_prop__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
      MR_Word transform_hlds__const_prop__Var_17;
      MR_Word transform_hlds__const_prop__Var_18;
      MR_Word transform_hlds__const_prop__Var_19;
      MR_Word transform_hlds__const_prop__Var_20;
      MR_Word transform_hlds__const_prop__Var_21;
      MR_Word transform_hlds__const_prop__Var_22;
      MR_Word transform_hlds__const_prop__Var_23;
      MR_Word transform_hlds__const_prop__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
      MR_Word transform_hlds__const_prop__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
      MR_Word transform_hlds__const_prop__Var_7;
      MR_Word transform_hlds__const_prop__Var_8;
      MR_Word transform_hlds__const_prop__Var_31;
      MR_Word transform_hlds__const_prop__Var_32;
      MR_Word transform_hlds__const_prop__Var_11;
      MR_Word transform_hlds__const_prop__Var_12;
      MR_Word transform_hlds__const_prop__TypeInfo_38_38;

      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_16, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_16, (MR_Integer) 2)));
        transform_hlds__const_prop__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_16, (MR_Integer) 3)));
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_17, (MR_Integer) 0)));
          transform_hlds__const_prop__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_17, (MR_Integer) 1)));
          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_18, (MR_Integer) 0)));
            transform_hlds__const_prop__XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_18, (MR_Integer) 1)));
            transform_hlds__const_prop__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
            transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_20, (MR_Integer) 1)));
              transform_hlds__const_prop__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_20, (MR_Integer) 2)));
              transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_20, (MR_Integer) 3)));
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_21)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_21, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_21, (MR_Integer) 1)));
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_22, (MR_Integer) 0)));
                  transform_hlds__const_prop__YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_22, (MR_Integer) 1)));
                  transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
                    transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_38, ((MR_Box) (transform_hlds__const_prop__XArgVars_10)), ((MR_Box) (transform_hlds__const_prop__YArgVars_14)));
                  }
                  if (transform_hlds__const_prop__succeeded)
                  {
                    *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
                    transform_hlds__const_prop__succeeded = MR_TRUE;
                  }
                  else
                  {
                    transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                    if (!(transform_hlds__const_prop__succeeded))
                    {
                      MR_Word transform_hlds__const_prop__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      MR_Integer transform_hlds__const_prop__Var_24;
                      MR_Integer transform_hlds__const_prop__Var_35;

                      transform_hlds__const_prop__Var_24 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__XArgVars_10);
                      transform_hlds__const_prop__Var_35 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__YArgVars_14);
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_24 == transform_hlds__const_prop__Var_35);
                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                    }
                    if (transform_hlds__const_prop__succeeded)
                    {
                      *transform_hlds__const_prop__Result_6 = (MR_Integer) 0;
                      transform_hlds__const_prop__succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
  MR_Word transform_hlds__const_prop__Globals_8,
  MR_String transform_hlds__const_prop__ModuleName_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__Args_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_12)) == (MR_mktag((MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__Var_99;
    MR_Word transform_hlds__const_prop__Var_100;
    MR_Integer transform_hlds__const_prop__lo_0;
    MR_Integer transform_hlds__const_prop__hi_1;
    MR_Integer transform_hlds__const_prop__mid_2;
    MR_Integer transform_hlds__const_prop__result_3;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 1)));
      /* binary string jump switch */
      transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
      transform_hlds__const_prop__hi_1 = (MR_Integer) 3;
      do
      {
        transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
        transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ModuleName_9, ((&transform_hlds__const_prop_vector_common_2[44 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
        if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
        {
          switch (((&transform_hlds__const_prop_vector_common_2[44 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                /* case "float" */
                {
                  MR_Word transform_hlds__const_prop__Var_101;
                  MR_Word transform_hlds__const_prop__Var_102;

                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_99)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 1)));
                    if ((transform_hlds__const_prop__Var_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_102, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    else
                    {
                      MR_Word transform_hlds__const_prop__Z_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_101, (MR_Integer) 0)));
                      MR_Word transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_101, (MR_Integer) 1)));

                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                        transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_102, transform_hlds__const_prop__Z_17, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                /* case "int" */
                if ((transform_hlds__const_prop__Var_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                else
                {
                  MR_Word transform_hlds__const_prop__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 0)));

                  if ((transform_hlds__const_prop__Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_104, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  else
                  {
                    MR_Word transform_hlds__const_prop__Z_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_103, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_103, (MR_Integer) 1)));

                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_104, transform_hlds__const_prop__Z_27, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                /* case "string" */
                {
                  MR_Word transform_hlds__const_prop__Var_105;
                  MR_Word transform_hlds__const_prop__Var_106;

                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_99)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 1)));
                    if ((transform_hlds__const_prop__Var_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_106, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    else
                    {
                      MR_Word transform_hlds__const_prop__Z_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_105, (MR_Integer) 0)));
                      MR_Word transform_hlds__const_prop__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_105, (MR_Integer) 1)));

                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                        transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_106, transform_hlds__const_prop__Z_47, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                /* case "uint" */
                if ((transform_hlds__const_prop__Var_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                else
                {
                  MR_Word transform_hlds__const_prop__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_99, (MR_Integer) 0)));

                  if ((transform_hlds__const_prop__Var_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_117_105_110_116_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_108, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  else
                  {
                    MR_Word transform_hlds__const_prop__Z_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_107, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_107, (MR_Integer) 1)));

                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_uint_3_8_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Var_100, transform_hlds__const_prop__Var_108, transform_hlds__const_prop__Z_67, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
                }
              }
              break;
          }
          /* jump out of search loop */
          goto label_0;
        }
        else
        if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
          transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
        else
          transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
      }
      while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
      transform_hlds__const_prop__succeeded = MR_FALSE;
    label_0:;
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_String transform_hlds__const_prop__OutputArgVal_16;
    MR_String transform_hlds__const_prop__XVal_19;
    MR_String transform_hlds__const_prop__YVal_22;
    MR_Word transform_hlds__const_prop__Var_23;
    MR_Word transform_hlds__const_prop__Var_24;
    MR_Word transform_hlds__const_prop__Var_25;
    MR_Word transform_hlds__const_prop__Var_26;
    MR_Word transform_hlds__const_prop__Var_27;
    MR_Word transform_hlds__const_prop__Var_28;
    MR_Word transform_hlds__const_prop__Var_29;
    MR_Word transform_hlds__const_prop__Var_30;
    MR_Word transform_hlds__const_prop__Var_31;
    MR_Word transform_hlds__const_prop__Var_32;
    MR_Word transform_hlds__const_prop__Var_33;
    MR_Word transform_hlds__const_prop__Var_34;
    MR_Word transform_hlds__const_prop__Var_35;
    MR_Word transform_hlds__const_prop__Var_36;
    MR_Word transform_hlds__const_prop__Var_17;
    MR_Word transform_hlds__const_prop__Var_18;
    MR_Word transform_hlds__const_prop__Var_37;
    MR_Word transform_hlds__const_prop__Var_38;
    MR_Word transform_hlds__const_prop__Var_20;
    MR_Word transform_hlds__const_prop__Var_21;

    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "++") == 0))
      transform_hlds__const_prop__succeeded = MR_TRUE;
    else
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "append") == 0))
      transform_hlds__const_prop__succeeded = MR_TRUE;
    else
      transform_hlds__const_prop__succeeded = MR_FALSE;
    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
        transform_hlds__const_prop__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_23, (MR_Integer) 1)));
          transform_hlds__const_prop__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_23, (MR_Integer) 2)));
          transform_hlds__const_prop__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_23, (MR_Integer) 3)));
          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_24)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_24, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_24, (MR_Integer) 1)));
            transform_hlds__const_prop__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_25, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_25, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_26, (MR_Integer) 0)))) == (MR_Integer) 15)));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_26, (MR_Integer) 1)));
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_29, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_29, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_29, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_30)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_30, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_30, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_31, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_31, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_32, (MR_Integer) 0)))) == (MR_Integer) 15)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_32, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                            transform_hlds__const_prop__OutputArgVal_16 = mercury__string__f_43_43_2_f_0(transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *transform_hlds__const_prop__HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
                            }
                            transform_hlds__const_prop__succeeded = MR_TRUE;
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
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
    MR_Float transform_hlds__const_prop__OutputArgVal_16;
    MR_Word transform_hlds__const_prop__Var_127;
    MR_Word transform_hlds__const_prop__Var_130;
    MR_Word transform_hlds__const_prop__Var_133;
    MR_Word transform_hlds__const_prop__Var_136;
    MR_Word transform_hlds__const_prop__Var_139;
    MR_Word transform_hlds__const_prop__Var_140;
    MR_Word transform_hlds__const_prop__Var_141;
    MR_Word transform_hlds__const_prop__Var_142;
    MR_Word transform_hlds__const_prop__Var_143;
    MR_Word transform_hlds__const_prop__Var_144;
    MR_Word transform_hlds__const_prop__Var_145;
    MR_Word transform_hlds__const_prop__Var_146;
    MR_Float transform_hlds__const_prop__Var_147;
    MR_Float transform_hlds__const_prop__Var_148;
    MR_Word transform_hlds__const_prop__Var_128;
    MR_Word transform_hlds__const_prop__Var_129;
    MR_Word transform_hlds__const_prop__Var_131;
    MR_Word transform_hlds__const_prop__Var_132;
    MR_Word transform_hlds__const_prop__Var_134;
    MR_Word transform_hlds__const_prop__Var_135;
    MR_Word transform_hlds__const_prop__Var_137;
    MR_Word transform_hlds__const_prop__Var_138;
    MR_Integer transform_hlds__const_prop__lo_0;
    MR_Integer transform_hlds__const_prop__hi_1;
    MR_Integer transform_hlds__const_prop__mid_2;
    MR_Integer transform_hlds__const_prop__result_3;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
      transform_hlds__const_prop__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
      transform_hlds__const_prop__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
      transform_hlds__const_prop__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 2)));
        transform_hlds__const_prop__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 3)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_130, (MR_Integer) 1)));
          transform_hlds__const_prop__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_130, (MR_Integer) 2)));
          transform_hlds__const_prop__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_130, (MR_Integer) 3)));
          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_133)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_133, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_133, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_136)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_136, (MR_Integer) 0)));
              transform_hlds__const_prop__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_136, (MR_Integer) 1)));
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_140, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_140, (MR_Integer) 1)));
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_142, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_142, (MR_Integer) 1)));
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_144, (MR_Integer) 0)))) == (MR_Integer) 13)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_144, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_146, (MR_Integer) 0)))) == (MR_Integer) 13)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_146, (MR_Integer) 1)));
                          /* binary string jump switch */
                          transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
                          transform_hlds__const_prop__hi_1 = (MR_Integer) 4;
                          do
                          {
                            transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
                            transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ProcName_10, ((&transform_hlds__const_prop_vector_common_2[39 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                            if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
                            {
                              switch (((&transform_hlds__const_prop_vector_common_2[39 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    /* case "*" */
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__Var_147 * transform_hlds__const_prop__Var_148);
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    /* case "+" */
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__Var_147 + transform_hlds__const_prop__Var_148);
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    /* case "-" */
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__Var_147 - transform_hlds__const_prop__Var_148);
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 3:
                                  {
                                    /* case "/" */
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_148 == ((MR_Float) 0.0000000000000000));
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__float__f_slash_2_f_0(transform_hlds__const_prop__Var_147, transform_hlds__const_prop__Var_148);
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 4:
                                  {
                                    /* case "unchecked_quotient" */
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_148 == ((MR_Float) 0.0000000000000000));
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__Var_147 / transform_hlds__const_prop__Var_148);
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                              }
                              /* jump out of search loop */
                              goto label_0;
                            }
                            else
                            if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
                              transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
                            else
                              transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
                          }
                          while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
                          transform_hlds__const_prop__succeeded = MR_FALSE;
                        label_0:;
                          if (transform_hlds__const_prop__succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *transform_hlds__const_prop__HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                              MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_16);
                            }
                            transform_hlds__const_prop__succeeded = MR_TRUE;
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
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "count_codepoints") == 0);
    MR_String transform_hlds__const_prop__XVal_17;
    MR_Integer transform_hlds__const_prop__CodePointCountX_18;
    MR_Word transform_hlds__const_prop__Var_19;
    MR_Word transform_hlds__const_prop__Var_20;
    MR_Word transform_hlds__const_prop__Var_21;
    MR_Word transform_hlds__const_prop__Var_22;
    MR_Word transform_hlds__const_prop__Var_23;
    MR_Word transform_hlds__const_prop__Var_24;
    MR_Word transform_hlds__const_prop__Var_25;
    MR_Word transform_hlds__const_prop__Var_26;
    MR_Word transform_hlds__const_prop__Var_15;
    MR_Word transform_hlds__const_prop__Var_16;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
        transform_hlds__const_prop__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_19, (MR_Integer) 1)));
          transform_hlds__const_prop__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_19, (MR_Integer) 2)));
          transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_19, (MR_Integer) 3)));
          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_20, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_20, (MR_Integer) 1)));
            transform_hlds__const_prop__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_21, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_21, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_22, (MR_Integer) 0)))) == (MR_Integer) 15)));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_22, (MR_Integer) 1)));
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                {
                  *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                  transform_hlds__const_prop__CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(transform_hlds__const_prop__XVal_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__const_prop__OutputArgVal_14 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__CodePointCountX_18));
                  }
                  transform_hlds__const_prop__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
    MR_Float transform_hlds__const_prop__OutputArgVal_14;
    MR_Word transform_hlds__const_prop__Var_37;
    MR_Word transform_hlds__const_prop__Var_40;
    MR_Word transform_hlds__const_prop__Var_43;
    MR_Word transform_hlds__const_prop__Var_44;
    MR_Word transform_hlds__const_prop__Var_45;
    MR_Word transform_hlds__const_prop__Var_46;
    MR_Float transform_hlds__const_prop__Var_47;
    MR_Word transform_hlds__const_prop__Var_38;
    MR_Word transform_hlds__const_prop__Var_39;
    MR_Word transform_hlds__const_prop__Var_41;
    MR_Word transform_hlds__const_prop__Var_42;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
      transform_hlds__const_prop__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 2)));
        transform_hlds__const_prop__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_37, (MR_Integer) 3)));
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_40)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_40, (MR_Integer) 0)));
          transform_hlds__const_prop__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_40, (MR_Integer) 1)));
          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_44, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_44, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_46, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_46, (MR_Integer) 1)));
                if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
                {
                  *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                  transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__Var_47;
                  transform_hlds__const_prop__succeeded = MR_TRUE;
                }
                else
                if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
                {
                  *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                  transform_hlds__const_prop__OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - transform_hlds__const_prop__Var_47);
                  transform_hlds__const_prop__succeeded = MR_TRUE;
                }
                else
                  transform_hlds__const_prop__succeeded = MR_FALSE;
                if (transform_hlds__const_prop__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__const_prop__HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                    MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_14);
                  }
                  transform_hlds__const_prop__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_117_105_110_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "\\") == 0);
    MR_Unsigned transform_hlds__const_prop__OutputArgVal_14;
    MR_Unsigned transform_hlds__const_prop__XVal_17;
    MR_Word transform_hlds__const_prop__Var_18;
    MR_Word transform_hlds__const_prop__Var_19;
    MR_Word transform_hlds__const_prop__Var_20;
    MR_Word transform_hlds__const_prop__Var_21;
    MR_Word transform_hlds__const_prop__Var_22;
    MR_Word transform_hlds__const_prop__Var_23;
    MR_Word transform_hlds__const_prop__Var_24;
    MR_Word transform_hlds__const_prop__Var_25;
    MR_Word transform_hlds__const_prop__Var_15;
    MR_Word transform_hlds__const_prop__Var_16;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
        transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_18, (MR_Integer) 1)));
          transform_hlds__const_prop__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_18, (MR_Integer) 2)));
          transform_hlds__const_prop__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_18, (MR_Integer) 3)));
          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_19)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_19, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_19, (MR_Integer) 1)));
            transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_20, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_20, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__XVal_17 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_21, (MR_Integer) 1)));
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                {
                  *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                  transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__XVal_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__const_prop__HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_14));
                  }
                  transform_hlds__const_prop__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_3_8_p_0(
  MR_Word transform_hlds__const_prop__Globals_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Unsigned transform_hlds__const_prop__OutputArgVal_16;
    MR_Integer transform_hlds__const_prop__slot_0;
    MR_String transform_hlds__const_prop__str_1;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    transform_hlds__const_prop__slot_0 = ((MR_hash_string6(transform_hlds__const_prop__ProcName_10)) & (MR_Integer) 31);
    /* hash chain loop */
    do
    {
      /* lookup the string for this hash slot */
      transform_hlds__const_prop__str_1 = ((&transform_hlds__const_prop_vector_common_2[7 + transform_hlds__const_prop__slot_0]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0;
      /* did we find a match? */
      if ((((transform_hlds__const_prop__str_1 != NULL)) && ((strcmp(transform_hlds__const_prop__str_1, transform_hlds__const_prop__ProcName_10) == 0))))
      {
        /* we found a match; dispatch to the corresponding code */
        switch (transform_hlds__const_prop__slot_0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* case "unchecked_rem" */
              {
                MR_Word transform_hlds__const_prop__Var_185;
                MR_Word transform_hlds__const_prop__Var_186;
                MR_Word transform_hlds__const_prop__Var_187;
                MR_Word transform_hlds__const_prop__Var_188;
                MR_Word transform_hlds__const_prop__Var_189;
                MR_Word transform_hlds__const_prop__Var_190;
                MR_Word transform_hlds__const_prop__Var_191;
                MR_Word transform_hlds__const_prop__Var_192;
                MR_Word transform_hlds__const_prop__Var_193;
                MR_Word transform_hlds__const_prop__Var_194;
                MR_Word transform_hlds__const_prop__Var_195;
                MR_Word transform_hlds__const_prop__Var_196;
                MR_Word transform_hlds__const_prop__Var_197;
                MR_Word transform_hlds__const_prop__Var_198;
                MR_Unsigned transform_hlds__const_prop__XVal_365;
                MR_Unsigned transform_hlds__const_prop__YVal_366;
                MR_Word transform_hlds__const_prop__BitsPerUInt_367;
                MR_Word transform_hlds__const_prop__Var_426;
                MR_Word transform_hlds__const_prop__Var_427;
                MR_Word transform_hlds__const_prop__Var_61;
                MR_Word transform_hlds__const_prop__Var_62;
                MR_Word transform_hlds__const_prop__Var_428;
                MR_Word transform_hlds__const_prop__Var_429;
                MR_Word transform_hlds__const_prop__Var_63;
                MR_Word transform_hlds__const_prop__Var_64;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_185)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_185, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_185, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_185, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_185, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_186)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_186, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_186, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_187, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_187, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_188)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_188, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_365 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_188, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_191)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_191, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_191, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_191, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_191, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_192)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_192, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_192, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_196 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_193, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_193, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_194)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_194, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_366 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_194, (MR_Integer) 1)));
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_366 == 0U);
                                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                        transform_hlds__const_prop__Var_197 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_198 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_197, transform_hlds__const_prop__Var_198);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_367);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__unchecked_rem_4_p_0(transform_hlds__const_prop__BitsPerUInt_367, transform_hlds__const_prop__XVal_365, transform_hlds__const_prop__YVal_366, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "unchecked_right_shift" */
              {
                MR_Word transform_hlds__const_prop__Var_143;
                MR_Word transform_hlds__const_prop__Var_144;
                MR_Word transform_hlds__const_prop__Var_145;
                MR_Word transform_hlds__const_prop__Var_146;
                MR_Word transform_hlds__const_prop__Var_147;
                MR_Word transform_hlds__const_prop__Var_148;
                MR_Word transform_hlds__const_prop__Var_149;
                MR_Word transform_hlds__const_prop__Var_150;
                MR_Word transform_hlds__const_prop__Var_151;
                MR_Word transform_hlds__const_prop__Var_152;
                MR_Word transform_hlds__const_prop__Var_153;
                MR_Word transform_hlds__const_prop__Var_154;
                MR_Word transform_hlds__const_prop__Var_155;
                MR_Word transform_hlds__const_prop__Var_156;
                MR_Unsigned transform_hlds__const_prop__XVal_374;
                MR_Integer transform_hlds__const_prop__YVal_375;
                MR_Word transform_hlds__const_prop__BitsPerUInt_376;
                MR_Word transform_hlds__const_prop__Var_438;
                MR_Word transform_hlds__const_prop__Var_439;
                MR_Word transform_hlds__const_prop__Var_73;
                MR_Word transform_hlds__const_prop__Var_74;
                MR_Word transform_hlds__const_prop__Var_440;
                MR_Word transform_hlds__const_prop__Var_441;
                MR_Word transform_hlds__const_prop__Var_75;
                MR_Word transform_hlds__const_prop__Var_76;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_143)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_143, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_143, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_143, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_143, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_144)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_144, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_144, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_145, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_145, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_374 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_146, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_149)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_149, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_149, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_149, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_149, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_150)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_150, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_150, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_151, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_151, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_152)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_152, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_375 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_152, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_155 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_156 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_155, transform_hlds__const_prop__Var_156);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_376);
                                        transform_hlds__const_prop__succeeded = libs__uint_emu__unchecked_right_shift_4_p_0(transform_hlds__const_prop__BitsPerUInt_376, transform_hlds__const_prop__XVal_374, transform_hlds__const_prop__YVal_375, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "xor" */
              {
                MR_Word transform_hlds__const_prop__Var_93;
                MR_Word transform_hlds__const_prop__Var_94;
                MR_Word transform_hlds__const_prop__Var_95;
                MR_Word transform_hlds__const_prop__Var_96;
                MR_Word transform_hlds__const_prop__Var_97;
                MR_Word transform_hlds__const_prop__Var_98;
                MR_Word transform_hlds__const_prop__Var_99;
                MR_Word transform_hlds__const_prop__Var_100;
                MR_Word transform_hlds__const_prop__Var_101;
                MR_Word transform_hlds__const_prop__Var_102;
                MR_Word transform_hlds__const_prop__Var_103;
                MR_Word transform_hlds__const_prop__Var_104;
                MR_Unsigned transform_hlds__const_prop__XVal_384;
                MR_Unsigned transform_hlds__const_prop__YVal_385;
                MR_Word transform_hlds__const_prop__Var_454;
                MR_Word transform_hlds__const_prop__Var_455;
                MR_Word transform_hlds__const_prop__Var_89;
                MR_Word transform_hlds__const_prop__Var_90;
                MR_Word transform_hlds__const_prop__Var_456;
                MR_Word transform_hlds__const_prop__Var_457;
                MR_Word transform_hlds__const_prop__Var_91;
                MR_Word transform_hlds__const_prop__Var_92;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_93, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_93, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_93, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_93, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_94)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_94, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_94, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_95, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_95, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_96, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_384 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_96, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_99, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_99, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_99, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_99, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_100)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_100, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_100, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_101, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_101, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_102)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_102, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_385 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_102, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_384 ^ transform_hlds__const_prop__YVal_385);
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
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
              /* case "//" */
              {
                MR_Word transform_hlds__const_prop__Var_227;
                MR_Word transform_hlds__const_prop__Var_228;
                MR_Word transform_hlds__const_prop__Var_229;
                MR_Word transform_hlds__const_prop__Var_230;
                MR_Word transform_hlds__const_prop__Var_231;
                MR_Word transform_hlds__const_prop__Var_232;
                MR_Word transform_hlds__const_prop__Var_233;
                MR_Word transform_hlds__const_prop__Var_234;
                MR_Word transform_hlds__const_prop__Var_235;
                MR_Word transform_hlds__const_prop__Var_236;
                MR_Word transform_hlds__const_prop__Var_237;
                MR_Word transform_hlds__const_prop__Var_238;
                MR_Word transform_hlds__const_prop__Var_239;
                MR_Word transform_hlds__const_prop__Var_240;
                MR_Unsigned transform_hlds__const_prop__XVal_356;
                MR_Unsigned transform_hlds__const_prop__YVal_357;
                MR_Word transform_hlds__const_prop__BitsPerUInt_358;
                MR_Word transform_hlds__const_prop__Var_414;
                MR_Word transform_hlds__const_prop__Var_415;
                MR_Word transform_hlds__const_prop__Var_49;
                MR_Word transform_hlds__const_prop__Var_50;
                MR_Word transform_hlds__const_prop__Var_416;
                MR_Word transform_hlds__const_prop__Var_417;
                MR_Word transform_hlds__const_prop__Var_51;
                MR_Word transform_hlds__const_prop__Var_52;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_227)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_227, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_227, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_227, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_227, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_228)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_228, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_228, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_229, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_229, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_231 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_230)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_230, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_356 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_230, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_233)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_233, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_233, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_233, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_233, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_234)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_234, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_234, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_235, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_235, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_236)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_236, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_357 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_236, (MR_Integer) 1)));
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_357 == 0U);
                                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                        transform_hlds__const_prop__Var_239 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_240 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_239, transform_hlds__const_prop__Var_240);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_358);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__quotient_4_p_0(transform_hlds__const_prop__BitsPerUInt_358, transform_hlds__const_prop__XVal_356, transform_hlds__const_prop__YVal_357, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "\/" */
              {
                MR_Word transform_hlds__const_prop__Var_105;
                MR_Word transform_hlds__const_prop__Var_106;
                MR_Word transform_hlds__const_prop__Var_107;
                MR_Word transform_hlds__const_prop__Var_108;
                MR_Word transform_hlds__const_prop__Var_109;
                MR_Word transform_hlds__const_prop__Var_110;
                MR_Word transform_hlds__const_prop__Var_111;
                MR_Word transform_hlds__const_prop__Var_112;
                MR_Word transform_hlds__const_prop__Var_113;
                MR_Word transform_hlds__const_prop__Var_114;
                MR_Word transform_hlds__const_prop__Var_115;
                MR_Word transform_hlds__const_prop__Var_116;
                MR_Unsigned transform_hlds__const_prop__XVal_382;
                MR_Unsigned transform_hlds__const_prop__YVal_383;
                MR_Word transform_hlds__const_prop__Var_450;
                MR_Word transform_hlds__const_prop__Var_451;
                MR_Word transform_hlds__const_prop__Var_85;
                MR_Word transform_hlds__const_prop__Var_86;
                MR_Word transform_hlds__const_prop__Var_452;
                MR_Word transform_hlds__const_prop__Var_453;
                MR_Word transform_hlds__const_prop__Var_87;
                MR_Word transform_hlds__const_prop__Var_88;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_105)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_105, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_105, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_105, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_105, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_106)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_106, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_106, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_107, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_107, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_108, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_382 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_108, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_111, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_111, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_111, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_111, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_112)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_112, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_112, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_113, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_113, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_114)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_114, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_383 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_114, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_382 | transform_hlds__const_prop__YVal_383);
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
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
              /* case "+" */
              switch (transform_hlds__const_prop__ModeNum_11) {
                default:
                  transform_hlds__const_prop__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Unsigned transform_hlds__const_prop__XVal_19;
                    MR_Unsigned transform_hlds__const_prop__YVal_22;
                    MR_Word transform_hlds__const_prop__BitsPerUInt_23;
                    MR_Word transform_hlds__const_prop__Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__Var_326;
                    MR_Word transform_hlds__const_prop__Var_327;
                    MR_Word transform_hlds__const_prop__Var_328;
                    MR_Word transform_hlds__const_prop__Var_329;
                    MR_Word transform_hlds__const_prop__Var_330;
                    MR_Word transform_hlds__const_prop__Var_331;
                    MR_Word transform_hlds__const_prop__Var_332;
                    MR_Word transform_hlds__const_prop__Var_333;
                    MR_Word transform_hlds__const_prop__Var_334;
                    MR_Word transform_hlds__const_prop__Var_335;
                    MR_Word transform_hlds__const_prop__Var_336;
                    MR_Word transform_hlds__const_prop__Var_337;
                    MR_Word transform_hlds__const_prop__Var_338;
                    MR_Word transform_hlds__const_prop__Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__Var_17;
                    MR_Word transform_hlds__const_prop__Var_18;
                    MR_Word transform_hlds__const_prop__Var_388;
                    MR_Word transform_hlds__const_prop__Var_389;
                    MR_Word transform_hlds__const_prop__Var_20;
                    MR_Word transform_hlds__const_prop__Var_21;

                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_325)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_325, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_325, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_325, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_325, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_326)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_326, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_326, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_330 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_327, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_327, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_328)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_328, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__XVal_19 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_328, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_331)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_331, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_331, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_331, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_331, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_332)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_332, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_332, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_336 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_333, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_333, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_335 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_334)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_334, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__YVal_22 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_334, (MR_Integer) 1)));
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                        transform_hlds__const_prop__Var_337 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_338 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_337, transform_hlds__const_prop__Var_338);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_23);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerUInt_23, transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22, &transform_hlds__const_prop__OutputArgVal_16);
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
                    MR_Unsigned transform_hlds__const_prop__ZVal_28;
                    MR_Word transform_hlds__const_prop__Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__Var_312;
                    MR_Word transform_hlds__const_prop__Var_313;
                    MR_Word transform_hlds__const_prop__Var_314;
                    MR_Word transform_hlds__const_prop__Var_315;
                    MR_Word transform_hlds__const_prop__Var_316;
                    MR_Word transform_hlds__const_prop__Var_317;
                    MR_Word transform_hlds__const_prop__Var_318;
                    MR_Word transform_hlds__const_prop__Var_319;
                    MR_Word transform_hlds__const_prop__Var_320;
                    MR_Word transform_hlds__const_prop__Var_321;
                    MR_Word transform_hlds__const_prop__Var_322;
                    MR_Word transform_hlds__const_prop__Var_323;
                    MR_Word transform_hlds__const_prop__Var_324;
                    MR_Unsigned transform_hlds__const_prop__YVal_339;
                    MR_Word transform_hlds__const_prop__BitsPerUInt_340;
                    MR_Word transform_hlds__const_prop__Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__Var_24;
                    MR_Word transform_hlds__const_prop__Var_25;
                    MR_Word transform_hlds__const_prop__Var_392;
                    MR_Word transform_hlds__const_prop__Var_393;
                    MR_Word transform_hlds__const_prop__Var_26;
                    MR_Word transform_hlds__const_prop__Var_27;

                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_311)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_311, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_311, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_311, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_311, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_312)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_312, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_312, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_313, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_313, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_315 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_314)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_314, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__YVal_339 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_314, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_317)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_317, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_317, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_317, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_317, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_318)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_318, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_318, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_319, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_319, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_320)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_320, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__ZVal_28 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_320, (MR_Integer) 1)));
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
                                        transform_hlds__const_prop__Var_323 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_324 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_323, transform_hlds__const_prop__Var_324);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_340);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerUInt_340, transform_hlds__const_prop__ZVal_28, transform_hlds__const_prop__YVal_339, &transform_hlds__const_prop__OutputArgVal_16);
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
                    MR_Word transform_hlds__const_prop__Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__Var_298;
                    MR_Word transform_hlds__const_prop__Var_299;
                    MR_Word transform_hlds__const_prop__Var_300;
                    MR_Word transform_hlds__const_prop__Var_301;
                    MR_Word transform_hlds__const_prop__Var_302;
                    MR_Word transform_hlds__const_prop__Var_303;
                    MR_Word transform_hlds__const_prop__Var_304;
                    MR_Word transform_hlds__const_prop__Var_305;
                    MR_Word transform_hlds__const_prop__Var_306;
                    MR_Word transform_hlds__const_prop__Var_307;
                    MR_Word transform_hlds__const_prop__Var_308;
                    MR_Word transform_hlds__const_prop__Var_309;
                    MR_Word transform_hlds__const_prop__Var_310;
                    MR_Unsigned transform_hlds__const_prop__XVal_341;
                    MR_Word transform_hlds__const_prop__BitsPerUInt_342;
                    MR_Unsigned transform_hlds__const_prop__ZVal_343;
                    MR_Word transform_hlds__const_prop__Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__Var_29;
                    MR_Word transform_hlds__const_prop__Var_30;
                    MR_Word transform_hlds__const_prop__Var_396;
                    MR_Word transform_hlds__const_prop__Var_397;
                    MR_Word transform_hlds__const_prop__Var_31;
                    MR_Word transform_hlds__const_prop__Var_32;

                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_297)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_297, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_297, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_297, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_297, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_298)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_298, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_298, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_302 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_299, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_299, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_301 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_300)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_300, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__XVal_341 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_300, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_303, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_303, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_303, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_303, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_304)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_304, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_304, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_305, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_305, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_307 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_306)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_306, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__ZVal_343 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_306, (MR_Integer) 1)));
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
                                        transform_hlds__const_prop__Var_309 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_310 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_309, transform_hlds__const_prop__Var_310);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_342);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerUInt_342, transform_hlds__const_prop__ZVal_343, transform_hlds__const_prop__XVal_341, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "*" */
              {
                MR_Word transform_hlds__const_prop__Var_241;
                MR_Word transform_hlds__const_prop__Var_242;
                MR_Word transform_hlds__const_prop__Var_243;
                MR_Word transform_hlds__const_prop__Var_244;
                MR_Word transform_hlds__const_prop__Var_245;
                MR_Word transform_hlds__const_prop__Var_246;
                MR_Word transform_hlds__const_prop__Var_247;
                MR_Word transform_hlds__const_prop__Var_248;
                MR_Word transform_hlds__const_prop__Var_249;
                MR_Word transform_hlds__const_prop__Var_250;
                MR_Word transform_hlds__const_prop__Var_251;
                MR_Word transform_hlds__const_prop__Var_252;
                MR_Word transform_hlds__const_prop__Var_253;
                MR_Word transform_hlds__const_prop__Var_254;
                MR_Unsigned transform_hlds__const_prop__XVal_353;
                MR_Unsigned transform_hlds__const_prop__YVal_354;
                MR_Word transform_hlds__const_prop__BitsPerUInt_355;
                MR_Word transform_hlds__const_prop__Var_410;
                MR_Word transform_hlds__const_prop__Var_411;
                MR_Word transform_hlds__const_prop__Var_45;
                MR_Word transform_hlds__const_prop__Var_46;
                MR_Word transform_hlds__const_prop__Var_412;
                MR_Word transform_hlds__const_prop__Var_413;
                MR_Word transform_hlds__const_prop__Var_47;
                MR_Word transform_hlds__const_prop__Var_48;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_241)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_241, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_241, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_241, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_241, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_242)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_242, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_242, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_246 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_243, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_243, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_245 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_244)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_244, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_353 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_244, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_247)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_247, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_247, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_247, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_247, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_248)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_248, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_248, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_249, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_249, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_250)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_250, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_354 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_250, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_253 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_254 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_253, transform_hlds__const_prop__Var_254);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_355);
                                        transform_hlds__const_prop__succeeded = libs__uint_emu__times_4_p_0(transform_hlds__const_prop__BitsPerUInt_355, transform_hlds__const_prop__XVal_353, transform_hlds__const_prop__YVal_354, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "-" */
              switch (transform_hlds__const_prop__ModeNum_11) {
                default:
                  transform_hlds__const_prop__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__const_prop__Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__Var_284;
                    MR_Word transform_hlds__const_prop__Var_285;
                    MR_Word transform_hlds__const_prop__Var_286;
                    MR_Word transform_hlds__const_prop__Var_287;
                    MR_Word transform_hlds__const_prop__Var_288;
                    MR_Word transform_hlds__const_prop__Var_289;
                    MR_Word transform_hlds__const_prop__Var_290;
                    MR_Word transform_hlds__const_prop__Var_291;
                    MR_Word transform_hlds__const_prop__Var_292;
                    MR_Word transform_hlds__const_prop__Var_293;
                    MR_Word transform_hlds__const_prop__Var_294;
                    MR_Word transform_hlds__const_prop__Var_295;
                    MR_Word transform_hlds__const_prop__Var_296;
                    MR_Unsigned transform_hlds__const_prop__XVal_344;
                    MR_Unsigned transform_hlds__const_prop__YVal_345;
                    MR_Word transform_hlds__const_prop__BitsPerUInt_346;
                    MR_Word transform_hlds__const_prop__Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__Var_33;
                    MR_Word transform_hlds__const_prop__Var_34;
                    MR_Word transform_hlds__const_prop__Var_400;
                    MR_Word transform_hlds__const_prop__Var_401;
                    MR_Word transform_hlds__const_prop__Var_35;
                    MR_Word transform_hlds__const_prop__Var_36;

                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_283)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_283, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_283, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_283, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_283, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_284)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_284, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_284, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_285, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_285, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_287 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_286)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_286, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__XVal_344 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_286, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_289, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_289, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_289, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_289, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_290)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_290, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_290, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_294 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_291, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_291, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_292)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_292, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__YVal_345 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_292, (MR_Integer) 1)));
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                        transform_hlds__const_prop__Var_295 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_296 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_295, transform_hlds__const_prop__Var_296);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_346);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerUInt_346, transform_hlds__const_prop__XVal_344, transform_hlds__const_prop__YVal_345, &transform_hlds__const_prop__OutputArgVal_16);
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
                    MR_Word transform_hlds__const_prop__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__Var_270;
                    MR_Word transform_hlds__const_prop__Var_271;
                    MR_Word transform_hlds__const_prop__Var_272;
                    MR_Word transform_hlds__const_prop__Var_273;
                    MR_Word transform_hlds__const_prop__Var_274;
                    MR_Word transform_hlds__const_prop__Var_275;
                    MR_Word transform_hlds__const_prop__Var_276;
                    MR_Word transform_hlds__const_prop__Var_277;
                    MR_Word transform_hlds__const_prop__Var_278;
                    MR_Word transform_hlds__const_prop__Var_279;
                    MR_Word transform_hlds__const_prop__Var_280;
                    MR_Word transform_hlds__const_prop__Var_281;
                    MR_Word transform_hlds__const_prop__Var_282;
                    MR_Unsigned transform_hlds__const_prop__YVal_347;
                    MR_Word transform_hlds__const_prop__BitsPerUInt_348;
                    MR_Unsigned transform_hlds__const_prop__ZVal_349;
                    MR_Word transform_hlds__const_prop__Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__Var_37;
                    MR_Word transform_hlds__const_prop__Var_38;
                    MR_Word transform_hlds__const_prop__Var_404;
                    MR_Word transform_hlds__const_prop__Var_405;
                    MR_Word transform_hlds__const_prop__Var_39;
                    MR_Word transform_hlds__const_prop__Var_40;

                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_269)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_269, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_269, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_269, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_269, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_270)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_270, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_270, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_274 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_271, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_271, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_273 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_272)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_272, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__YVal_347 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_272, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_275)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_275, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_275, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_275, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_275, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_276)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_276, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_276, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_277, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_277, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_279 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_278)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_278, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__ZVal_349 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_278, (MR_Integer) 1)));
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
                                        transform_hlds__const_prop__Var_281 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_282 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_281, transform_hlds__const_prop__Var_282);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_348);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerUInt_348, transform_hlds__const_prop__YVal_347, transform_hlds__const_prop__ZVal_349, &transform_hlds__const_prop__OutputArgVal_16);
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
                    MR_Word transform_hlds__const_prop__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__Var_256;
                    MR_Word transform_hlds__const_prop__Var_257;
                    MR_Word transform_hlds__const_prop__Var_258;
                    MR_Word transform_hlds__const_prop__Var_259;
                    MR_Word transform_hlds__const_prop__Var_260;
                    MR_Word transform_hlds__const_prop__Var_261;
                    MR_Word transform_hlds__const_prop__Var_262;
                    MR_Word transform_hlds__const_prop__Var_263;
                    MR_Word transform_hlds__const_prop__Var_264;
                    MR_Word transform_hlds__const_prop__Var_265;
                    MR_Word transform_hlds__const_prop__Var_266;
                    MR_Word transform_hlds__const_prop__Var_267;
                    MR_Word transform_hlds__const_prop__Var_268;
                    MR_Unsigned transform_hlds__const_prop__XVal_350;
                    MR_Word transform_hlds__const_prop__BitsPerUInt_351;
                    MR_Unsigned transform_hlds__const_prop__ZVal_352;
                    MR_Word transform_hlds__const_prop__Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__Var_41;
                    MR_Word transform_hlds__const_prop__Var_42;
                    MR_Word transform_hlds__const_prop__Var_408;
                    MR_Word transform_hlds__const_prop__Var_409;
                    MR_Word transform_hlds__const_prop__Var_43;
                    MR_Word transform_hlds__const_prop__Var_44;

                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_255)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_255, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_255, (MR_Integer) 1)));
                      transform_hlds__const_prop__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_255, (MR_Integer) 2)));
                      transform_hlds__const_prop__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_255, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_256)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_256, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_256, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_260 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_257, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_257, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_259 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_258)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_258, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__XVal_350 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_258, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_261)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_261, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_261, (MR_Integer) 1)));
                                transform_hlds__const_prop__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_261, (MR_Integer) 2)));
                                transform_hlds__const_prop__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_261, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_262)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_262, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_262, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_266 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_263, (MR_Integer) 0)));
                                    transform_hlds__const_prop__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_263, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_265 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_264)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_264, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__ZVal_352 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_264, (MR_Integer) 1)));
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
                                        transform_hlds__const_prop__Var_267 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_268 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_267, transform_hlds__const_prop__Var_268);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_351);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerUInt_351, transform_hlds__const_prop__XVal_350, transform_hlds__const_prop__ZVal_352, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "mod" */
              {
                MR_Word transform_hlds__const_prop__Var_213;
                MR_Word transform_hlds__const_prop__Var_214;
                MR_Word transform_hlds__const_prop__Var_215;
                MR_Word transform_hlds__const_prop__Var_216;
                MR_Word transform_hlds__const_prop__Var_217;
                MR_Word transform_hlds__const_prop__Var_218;
                MR_Word transform_hlds__const_prop__Var_219;
                MR_Word transform_hlds__const_prop__Var_220;
                MR_Word transform_hlds__const_prop__Var_221;
                MR_Word transform_hlds__const_prop__Var_222;
                MR_Word transform_hlds__const_prop__Var_223;
                MR_Word transform_hlds__const_prop__Var_224;
                MR_Word transform_hlds__const_prop__Var_225;
                MR_Word transform_hlds__const_prop__Var_226;
                MR_Unsigned transform_hlds__const_prop__XVal_359;
                MR_Unsigned transform_hlds__const_prop__YVal_360;
                MR_Word transform_hlds__const_prop__BitsPerUInt_361;
                MR_Word transform_hlds__const_prop__Var_418;
                MR_Word transform_hlds__const_prop__Var_419;
                MR_Word transform_hlds__const_prop__Var_53;
                MR_Word transform_hlds__const_prop__Var_54;
                MR_Word transform_hlds__const_prop__Var_420;
                MR_Word transform_hlds__const_prop__Var_421;
                MR_Word transform_hlds__const_prop__Var_55;
                MR_Word transform_hlds__const_prop__Var_56;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_213)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_213, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_213, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_213, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_213, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_214)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_214, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_214, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_215, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_215, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_217 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_216)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_216, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_359 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_216, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_219)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_219, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_219, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_219, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_219, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_220)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_220, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_220, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_224 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_221, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_221, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_223 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_222)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_222, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_360 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_222, (MR_Integer) 1)));
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_360 == 0U);
                                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                        transform_hlds__const_prop__Var_225 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_226 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_225, transform_hlds__const_prop__Var_226);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_361);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__mod_4_p_0(transform_hlds__const_prop__BitsPerUInt_361, transform_hlds__const_prop__XVal_359, transform_hlds__const_prop__YVal_360, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "unchecked_left_shift" */
              {
                MR_Word transform_hlds__const_prop__Var_171;
                MR_Word transform_hlds__const_prop__Var_172;
                MR_Word transform_hlds__const_prop__Var_173;
                MR_Word transform_hlds__const_prop__Var_174;
                MR_Word transform_hlds__const_prop__Var_175;
                MR_Word transform_hlds__const_prop__Var_176;
                MR_Word transform_hlds__const_prop__Var_177;
                MR_Word transform_hlds__const_prop__Var_178;
                MR_Word transform_hlds__const_prop__Var_179;
                MR_Word transform_hlds__const_prop__Var_180;
                MR_Word transform_hlds__const_prop__Var_181;
                MR_Word transform_hlds__const_prop__Var_182;
                MR_Word transform_hlds__const_prop__Var_183;
                MR_Word transform_hlds__const_prop__Var_184;
                MR_Unsigned transform_hlds__const_prop__XVal_368;
                MR_Integer transform_hlds__const_prop__YVal_369;
                MR_Word transform_hlds__const_prop__BitsPerUInt_370;
                MR_Word transform_hlds__const_prop__Var_430;
                MR_Word transform_hlds__const_prop__Var_431;
                MR_Word transform_hlds__const_prop__Var_65;
                MR_Word transform_hlds__const_prop__Var_66;
                MR_Word transform_hlds__const_prop__Var_432;
                MR_Word transform_hlds__const_prop__Var_433;
                MR_Word transform_hlds__const_prop__Var_67;
                MR_Word transform_hlds__const_prop__Var_68;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_171)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_171, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_171, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_171, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_171, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_172)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_172, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_172, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_173, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_173, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_174)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_174, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_368 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_174, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_177)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_177, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_177, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_177, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_177, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_178)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_178, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_178, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_179, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_179, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_180)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_180, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_369 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_180, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_183 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_184 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_183, transform_hlds__const_prop__Var_184);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_370);
                                        transform_hlds__const_prop__succeeded = libs__uint_emu__unchecked_left_shift_4_p_0(transform_hlds__const_prop__BitsPerUInt_370, transform_hlds__const_prop__XVal_368, transform_hlds__const_prop__YVal_369, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "rem" */
              {
                MR_Word transform_hlds__const_prop__Var_199;
                MR_Word transform_hlds__const_prop__Var_200;
                MR_Word transform_hlds__const_prop__Var_201;
                MR_Word transform_hlds__const_prop__Var_202;
                MR_Word transform_hlds__const_prop__Var_203;
                MR_Word transform_hlds__const_prop__Var_204;
                MR_Word transform_hlds__const_prop__Var_205;
                MR_Word transform_hlds__const_prop__Var_206;
                MR_Word transform_hlds__const_prop__Var_207;
                MR_Word transform_hlds__const_prop__Var_208;
                MR_Word transform_hlds__const_prop__Var_209;
                MR_Word transform_hlds__const_prop__Var_210;
                MR_Word transform_hlds__const_prop__Var_211;
                MR_Word transform_hlds__const_prop__Var_212;
                MR_Unsigned transform_hlds__const_prop__XVal_362;
                MR_Unsigned transform_hlds__const_prop__YVal_363;
                MR_Word transform_hlds__const_prop__BitsPerUInt_364;
                MR_Word transform_hlds__const_prop__Var_422;
                MR_Word transform_hlds__const_prop__Var_423;
                MR_Word transform_hlds__const_prop__Var_57;
                MR_Word transform_hlds__const_prop__Var_58;
                MR_Word transform_hlds__const_prop__Var_424;
                MR_Word transform_hlds__const_prop__Var_425;
                MR_Word transform_hlds__const_prop__Var_59;
                MR_Word transform_hlds__const_prop__Var_60;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_199)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_199, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_199, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_199, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_199, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_200)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_200, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_200, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_204 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_201, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_201, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_202)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_202, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_362 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_202, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_205)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_205, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_205, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_205, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_205, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_206)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_206, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_206, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_210 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_207, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_207, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_208)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_208, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_363 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_208, (MR_Integer) 1)));
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_363 == 0U);
                                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                        transform_hlds__const_prop__Var_211 = (MR_Integer) 234;
                                        transform_hlds__const_prop__Var_212 = (MR_Integer) 0;
                                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_211, transform_hlds__const_prop__Var_212);
                                        if (transform_hlds__const_prop__succeeded)
                                        {
                                          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_364);
                                          transform_hlds__const_prop__succeeded = libs__uint_emu__rem_4_p_0(transform_hlds__const_prop__BitsPerUInt_364, transform_hlds__const_prop__XVal_362, transform_hlds__const_prop__YVal_363, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case "/\" */
              {
                MR_Word transform_hlds__const_prop__Var_117;
                MR_Word transform_hlds__const_prop__Var_118;
                MR_Word transform_hlds__const_prop__Var_119;
                MR_Word transform_hlds__const_prop__Var_120;
                MR_Word transform_hlds__const_prop__Var_121;
                MR_Word transform_hlds__const_prop__Var_122;
                MR_Word transform_hlds__const_prop__Var_123;
                MR_Word transform_hlds__const_prop__Var_124;
                MR_Word transform_hlds__const_prop__Var_125;
                MR_Word transform_hlds__const_prop__Var_126;
                MR_Word transform_hlds__const_prop__Var_127;
                MR_Word transform_hlds__const_prop__Var_128;
                MR_Unsigned transform_hlds__const_prop__XVal_380;
                MR_Unsigned transform_hlds__const_prop__YVal_381;
                MR_Word transform_hlds__const_prop__Var_446;
                MR_Word transform_hlds__const_prop__Var_447;
                MR_Word transform_hlds__const_prop__Var_81;
                MR_Word transform_hlds__const_prop__Var_82;
                MR_Word transform_hlds__const_prop__Var_448;
                MR_Word transform_hlds__const_prop__Var_449;
                MR_Word transform_hlds__const_prop__Var_83;
                MR_Word transform_hlds__const_prop__Var_84;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_117, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_117, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_117, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_117, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_118)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_118, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_118, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_119, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_119, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_120, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_380 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_120, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_123)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_123, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_123, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_123, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_123, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_124)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_124, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_124, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_125, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_125, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_126)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_126, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_381 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_126, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_380 & transform_hlds__const_prop__YVal_381);
                                      transform_hlds__const_prop__succeeded = MR_TRUE;
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
              /* case "<<" */
              {
                MR_Word transform_hlds__const_prop__Var_157;
                MR_Word transform_hlds__const_prop__Var_158;
                MR_Word transform_hlds__const_prop__Var_159;
                MR_Word transform_hlds__const_prop__Var_160;
                MR_Word transform_hlds__const_prop__Var_161;
                MR_Word transform_hlds__const_prop__Var_162;
                MR_Word transform_hlds__const_prop__Var_163;
                MR_Word transform_hlds__const_prop__Var_164;
                MR_Word transform_hlds__const_prop__Var_165;
                MR_Word transform_hlds__const_prop__Var_166;
                MR_Word transform_hlds__const_prop__Var_167;
                MR_Word transform_hlds__const_prop__Var_168;
                MR_Word transform_hlds__const_prop__Var_169;
                MR_Word transform_hlds__const_prop__Var_170;
                MR_Unsigned transform_hlds__const_prop__XVal_371;
                MR_Integer transform_hlds__const_prop__YVal_372;
                MR_Word transform_hlds__const_prop__BitsPerUInt_373;
                MR_Word transform_hlds__const_prop__Var_434;
                MR_Word transform_hlds__const_prop__Var_435;
                MR_Word transform_hlds__const_prop__Var_69;
                MR_Word transform_hlds__const_prop__Var_70;
                MR_Word transform_hlds__const_prop__Var_436;
                MR_Word transform_hlds__const_prop__Var_437;
                MR_Word transform_hlds__const_prop__Var_71;
                MR_Word transform_hlds__const_prop__Var_72;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_157)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_157, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_157, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_157, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_157, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_158)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_158, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_158, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_159, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_159, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_160)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_160, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_371 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_160, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_163)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_163, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_163, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_163, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_163, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_164)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_164, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_164, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_165, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_165, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_166)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_166, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_372 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_166, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_169 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_170 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_169, transform_hlds__const_prop__Var_170);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_373);
                                        transform_hlds__const_prop__succeeded = libs__uint_emu__left_shift_4_p_0(transform_hlds__const_prop__BitsPerUInt_373, transform_hlds__const_prop__XVal_371, transform_hlds__const_prop__YVal_372, &transform_hlds__const_prop__OutputArgVal_16);
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
              /* case ">>" */
              {
                MR_Word transform_hlds__const_prop__Var_129;
                MR_Word transform_hlds__const_prop__Var_130;
                MR_Word transform_hlds__const_prop__Var_131;
                MR_Word transform_hlds__const_prop__Var_132;
                MR_Word transform_hlds__const_prop__Var_133;
                MR_Word transform_hlds__const_prop__Var_134;
                MR_Word transform_hlds__const_prop__Var_135;
                MR_Word transform_hlds__const_prop__Var_136;
                MR_Word transform_hlds__const_prop__Var_137;
                MR_Word transform_hlds__const_prop__Var_138;
                MR_Word transform_hlds__const_prop__Var_139;
                MR_Word transform_hlds__const_prop__Var_140;
                MR_Word transform_hlds__const_prop__Var_141;
                MR_Word transform_hlds__const_prop__Var_142;
                MR_Unsigned transform_hlds__const_prop__XVal_377;
                MR_Integer transform_hlds__const_prop__YVal_378;
                MR_Word transform_hlds__const_prop__BitsPerUInt_379;
                MR_Word transform_hlds__const_prop__Var_442;
                MR_Word transform_hlds__const_prop__Var_443;
                MR_Word transform_hlds__const_prop__Var_77;
                MR_Word transform_hlds__const_prop__Var_78;
                MR_Word transform_hlds__const_prop__Var_444;
                MR_Word transform_hlds__const_prop__Var_445;
                MR_Word transform_hlds__const_prop__Var_79;
                MR_Word transform_hlds__const_prop__Var_80;

                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__Var_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_129)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_129, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_129, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_129, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_129, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_130)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_130, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_130, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_131, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_131, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_132, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_377 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_132, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_135)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_135, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_135, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_135, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_135, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_136)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_136, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_136, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_137, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_137, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_138, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_378 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_138, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_141 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_142 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_141, transform_hlds__const_prop__Var_142);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerUInt_379);
                                        transform_hlds__const_prop__succeeded = libs__uint_emu__right_shift_4_p_0(transform_hlds__const_prop__BitsPerUInt_379, transform_hlds__const_prop__XVal_377, transform_hlds__const_prop__YVal_378, &transform_hlds__const_prop__OutputArgVal_16);
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
        /* jump out of search loop */
        goto label_0;
      }
      else
      {
        /* no match yet, so get next slot in hash chain */
        transform_hlds__const_prop__slot_0 = ((&transform_hlds__const_prop_vector_common_2[7 + transform_hlds__const_prop__slot_0]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1;
      }
    }
    while ((transform_hlds__const_prop__slot_0 >= (MR_Integer) 0));
    transform_hlds__const_prop__succeeded = MR_FALSE;
  label_0:;
    if (transform_hlds__const_prop__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__const_prop__HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
      }
      transform_hlds__const_prop__succeeded = MR_TRUE;
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
  MR_Word transform_hlds__const_prop__Globals_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__X_12,
  MR_Word transform_hlds__const_prop__Y_13,
  MR_Word transform_hlds__const_prop__Z_14,
  MR_Word * transform_hlds__const_prop__OutputArg_15,
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Integer transform_hlds__const_prop__OutputArgVal_16;

    {
      MR_Integer transform_hlds__const_prop__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 0)) {
        case (MR_Integer) 42:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "*"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 43:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "+"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 45:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "-"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 47:
          switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 1)) {
            case (MR_Integer) 47:
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "//"))
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "/\\"))
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 4;
              break;
          }
          break;
        case (MR_Integer) 60:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "<<"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 5;
          break;
        case (MR_Integer) 62:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) ">>"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "\\/"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "minus"))
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "mod"))
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "plus"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 10;
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "rem"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "times"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 117:
          if (((((((((((((((((((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 9)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 10)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(11, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_left_shift"))
                  transform_hlds__const_prop__case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 113:
                if (MR_offset_streq(11, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_quotient"))
                  transform_hlds__const_prop__case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 11)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(12, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_rem"))
                      transform_hlds__const_prop__case_num_0 = (MR_Integer) 15;
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_streq(12, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_right_shift"))
                      transform_hlds__const_prop__case_num_0 = (MR_Integer) 16;
                    break;
                }
                break;
            }
          break;
        case (MR_Integer) 120:
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "xor"))
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 17;
          break;
      }
      switch (transform_hlds__const_prop__case_num_0) {
        default:
          transform_hlds__const_prop__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "*" */
            {
              MR_Word transform_hlds__const_prop__Var_271;
              MR_Word transform_hlds__const_prop__Var_272;
              MR_Word transform_hlds__const_prop__Var_273;
              MR_Word transform_hlds__const_prop__Var_274;
              MR_Word transform_hlds__const_prop__Var_275;
              MR_Word transform_hlds__const_prop__Var_276;
              MR_Word transform_hlds__const_prop__Var_277;
              MR_Word transform_hlds__const_prop__Var_278;
              MR_Word transform_hlds__const_prop__Var_279;
              MR_Word transform_hlds__const_prop__Var_280;
              MR_Word transform_hlds__const_prop__Var_281;
              MR_Word transform_hlds__const_prop__Var_282;
              MR_Word transform_hlds__const_prop__Var_283;
              MR_Word transform_hlds__const_prop__Var_284;
              MR_Integer transform_hlds__const_prop__XVal_434;
              MR_Integer transform_hlds__const_prop__YVal_435;
              MR_Word transform_hlds__const_prop__BitsPerInt_436;
              MR_Word transform_hlds__const_prop__Var_506;
              MR_Word transform_hlds__const_prop__Var_507;
              MR_Word transform_hlds__const_prop__Var_57;
              MR_Word transform_hlds__const_prop__Var_58;
              MR_Word transform_hlds__const_prop__Var_508;
              MR_Word transform_hlds__const_prop__Var_509;
              MR_Word transform_hlds__const_prop__Var_59;
              MR_Word transform_hlds__const_prop__Var_60;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_271)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_271, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_271, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_271, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_271, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_272)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_272, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_272, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_276 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_273, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_273, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_274)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_274, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_434 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_274, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_277)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_277, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_277, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_277, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_277, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_278)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_278, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_278, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_279, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_279, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_280)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_280, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_435 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_280, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_283 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_284 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_283, transform_hlds__const_prop__Var_284);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_436);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__times_4_p_0(transform_hlds__const_prop__BitsPerInt_436, transform_hlds__const_prop__XVal_434, transform_hlds__const_prop__YVal_435, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "+" */
            switch (transform_hlds__const_prop__ModeNum_11) {
              default:
                transform_hlds__const_prop__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__const_prop__Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__Var_384;
                  MR_Word transform_hlds__const_prop__Var_385;
                  MR_Word transform_hlds__const_prop__Var_386;
                  MR_Word transform_hlds__const_prop__Var_387;
                  MR_Word transform_hlds__const_prop__Var_388;
                  MR_Word transform_hlds__const_prop__Var_389;
                  MR_Word transform_hlds__const_prop__Var_390;
                  MR_Word transform_hlds__const_prop__Var_391;
                  MR_Word transform_hlds__const_prop__Var_392;
                  MR_Word transform_hlds__const_prop__Var_393;
                  MR_Word transform_hlds__const_prop__Var_394;
                  MR_Word transform_hlds__const_prop__Var_395;
                  MR_Word transform_hlds__const_prop__Var_396;
                  MR_Integer transform_hlds__const_prop__XVal_411;
                  MR_Integer transform_hlds__const_prop__YVal_412;
                  MR_Word transform_hlds__const_prop__BitsPerInt_413;
                  MR_Word transform_hlds__const_prop__Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_24;
                  MR_Word transform_hlds__const_prop__Var_25;
                  MR_Word transform_hlds__const_prop__Var_476;
                  MR_Word transform_hlds__const_prop__Var_477;
                  MR_Word transform_hlds__const_prop__Var_26;
                  MR_Word transform_hlds__const_prop__Var_27;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_383)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_383, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_383, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_383, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_383, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_384)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_384, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_384, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_388 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_385, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_385, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_387 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_386)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_386, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_386, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_389)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_389, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_389, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_389, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_389, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_390)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_390, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_390, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_394 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_391, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_391, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_393 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_392)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_392, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_392, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_395 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_396 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_395, transform_hlds__const_prop__Var_396);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_413);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_413, transform_hlds__const_prop__XVal_411, transform_hlds__const_prop__YVal_412, &transform_hlds__const_prop__OutputArgVal_16);
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
                  MR_Integer transform_hlds__const_prop__ZVal_32;
                  MR_Word transform_hlds__const_prop__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__Var_370;
                  MR_Word transform_hlds__const_prop__Var_371;
                  MR_Word transform_hlds__const_prop__Var_372;
                  MR_Word transform_hlds__const_prop__Var_373;
                  MR_Word transform_hlds__const_prop__Var_374;
                  MR_Word transform_hlds__const_prop__Var_375;
                  MR_Word transform_hlds__const_prop__Var_376;
                  MR_Word transform_hlds__const_prop__Var_377;
                  MR_Word transform_hlds__const_prop__Var_378;
                  MR_Word transform_hlds__const_prop__Var_379;
                  MR_Word transform_hlds__const_prop__Var_380;
                  MR_Word transform_hlds__const_prop__Var_381;
                  MR_Word transform_hlds__const_prop__Var_382;
                  MR_Integer transform_hlds__const_prop__YVal_414;
                  MR_Word transform_hlds__const_prop__BitsPerInt_415;
                  MR_Word transform_hlds__const_prop__Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_28;
                  MR_Word transform_hlds__const_prop__Var_29;
                  MR_Word transform_hlds__const_prop__Var_480;
                  MR_Word transform_hlds__const_prop__Var_481;
                  MR_Word transform_hlds__const_prop__Var_30;
                  MR_Word transform_hlds__const_prop__Var_31;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_369)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_369, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_369, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_369, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_369, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_370)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_370, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_370, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_371, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_371, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_373 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_372)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_372, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__YVal_414 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_372, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_375)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_375, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_375, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_375, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_375, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_376)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_376, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_376, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_377, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_377, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_379 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_378)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_378, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__ZVal_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_378, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
                                      transform_hlds__const_prop__Var_381 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_382 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_381, transform_hlds__const_prop__Var_382);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_415);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_415, transform_hlds__const_prop__ZVal_32, transform_hlds__const_prop__YVal_414, &transform_hlds__const_prop__OutputArgVal_16);
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
                  MR_Word transform_hlds__const_prop__Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__Var_356;
                  MR_Word transform_hlds__const_prop__Var_357;
                  MR_Word transform_hlds__const_prop__Var_358;
                  MR_Word transform_hlds__const_prop__Var_359;
                  MR_Word transform_hlds__const_prop__Var_360;
                  MR_Word transform_hlds__const_prop__Var_361;
                  MR_Word transform_hlds__const_prop__Var_362;
                  MR_Word transform_hlds__const_prop__Var_363;
                  MR_Word transform_hlds__const_prop__Var_364;
                  MR_Word transform_hlds__const_prop__Var_365;
                  MR_Word transform_hlds__const_prop__Var_366;
                  MR_Word transform_hlds__const_prop__Var_367;
                  MR_Word transform_hlds__const_prop__Var_368;
                  MR_Integer transform_hlds__const_prop__XVal_416;
                  MR_Word transform_hlds__const_prop__BitsPerInt_417;
                  MR_Integer transform_hlds__const_prop__ZVal_418;
                  MR_Word transform_hlds__const_prop__Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_33;
                  MR_Word transform_hlds__const_prop__Var_34;
                  MR_Word transform_hlds__const_prop__Var_484;
                  MR_Word transform_hlds__const_prop__Var_485;
                  MR_Word transform_hlds__const_prop__Var_35;
                  MR_Word transform_hlds__const_prop__Var_36;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_355)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_355, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_355, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_355, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_355, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_356)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_356, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_356, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_360 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_357, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_357, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_358)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_358, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_416 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_358, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_361)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_361, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_361, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_361, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_361, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_362)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_362, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_362, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_366 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_363, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_363, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_364)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_364, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__ZVal_418 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_364, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
                                      transform_hlds__const_prop__Var_367 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_368 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_367, transform_hlds__const_prop__Var_368);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_417);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_417, transform_hlds__const_prop__ZVal_418, transform_hlds__const_prop__XVal_416, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "-" */
            switch (transform_hlds__const_prop__ModeNum_11) {
              default:
                transform_hlds__const_prop__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__const_prop__Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__Var_328;
                  MR_Word transform_hlds__const_prop__Var_329;
                  MR_Word transform_hlds__const_prop__Var_330;
                  MR_Word transform_hlds__const_prop__Var_331;
                  MR_Word transform_hlds__const_prop__Var_332;
                  MR_Word transform_hlds__const_prop__Var_333;
                  MR_Word transform_hlds__const_prop__Var_334;
                  MR_Word transform_hlds__const_prop__Var_335;
                  MR_Word transform_hlds__const_prop__Var_336;
                  MR_Word transform_hlds__const_prop__Var_337;
                  MR_Word transform_hlds__const_prop__Var_338;
                  MR_Word transform_hlds__const_prop__Var_339;
                  MR_Word transform_hlds__const_prop__Var_340;
                  MR_Integer transform_hlds__const_prop__XVal_422;
                  MR_Integer transform_hlds__const_prop__YVal_423;
                  MR_Word transform_hlds__const_prop__BitsPerInt_424;
                  MR_Word transform_hlds__const_prop__Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__Var_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_41;
                  MR_Word transform_hlds__const_prop__Var_42;
                  MR_Word transform_hlds__const_prop__Var_492;
                  MR_Word transform_hlds__const_prop__Var_493;
                  MR_Word transform_hlds__const_prop__Var_43;
                  MR_Word transform_hlds__const_prop__Var_44;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_327)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_327, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_327, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_327, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_327, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_328)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_328, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_328, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_332 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_329, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_329, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_331 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_330)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_330, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_330, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_333)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_333, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_333, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_333, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_333, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_334)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_334, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_334, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_335, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_335, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_337 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_336)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_336, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_336, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_339 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_340 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_339, transform_hlds__const_prop__Var_340);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_424);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_424, transform_hlds__const_prop__XVal_422, transform_hlds__const_prop__YVal_423, &transform_hlds__const_prop__OutputArgVal_16);
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
                  MR_Word transform_hlds__const_prop__Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__Var_314;
                  MR_Word transform_hlds__const_prop__Var_315;
                  MR_Word transform_hlds__const_prop__Var_316;
                  MR_Word transform_hlds__const_prop__Var_317;
                  MR_Word transform_hlds__const_prop__Var_318;
                  MR_Word transform_hlds__const_prop__Var_319;
                  MR_Word transform_hlds__const_prop__Var_320;
                  MR_Word transform_hlds__const_prop__Var_321;
                  MR_Word transform_hlds__const_prop__Var_322;
                  MR_Word transform_hlds__const_prop__Var_323;
                  MR_Word transform_hlds__const_prop__Var_324;
                  MR_Word transform_hlds__const_prop__Var_325;
                  MR_Word transform_hlds__const_prop__Var_326;
                  MR_Integer transform_hlds__const_prop__YVal_425;
                  MR_Word transform_hlds__const_prop__BitsPerInt_426;
                  MR_Integer transform_hlds__const_prop__ZVal_427;
                  MR_Word transform_hlds__const_prop__Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_45;
                  MR_Word transform_hlds__const_prop__Var_46;
                  MR_Word transform_hlds__const_prop__Var_496;
                  MR_Word transform_hlds__const_prop__Var_497;
                  MR_Word transform_hlds__const_prop__Var_47;
                  MR_Word transform_hlds__const_prop__Var_48;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_313)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_313, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_313, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_313, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_313, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_314)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_314, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_314, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_315, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_315, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_316)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_316, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__YVal_425 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_316, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_319)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_319, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_319, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_319, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_319, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_320)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_320, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_320, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_324 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_321, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_321, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_322)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_322, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__ZVal_427 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_322, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
                                      transform_hlds__const_prop__Var_325 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_326 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_325, transform_hlds__const_prop__Var_326);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_426);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_426, transform_hlds__const_prop__YVal_425, transform_hlds__const_prop__ZVal_427, &transform_hlds__const_prop__OutputArgVal_16);
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
                  MR_Word transform_hlds__const_prop__Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__Var_300;
                  MR_Word transform_hlds__const_prop__Var_301;
                  MR_Word transform_hlds__const_prop__Var_302;
                  MR_Word transform_hlds__const_prop__Var_303;
                  MR_Word transform_hlds__const_prop__Var_304;
                  MR_Word transform_hlds__const_prop__Var_305;
                  MR_Word transform_hlds__const_prop__Var_306;
                  MR_Word transform_hlds__const_prop__Var_307;
                  MR_Word transform_hlds__const_prop__Var_308;
                  MR_Word transform_hlds__const_prop__Var_309;
                  MR_Word transform_hlds__const_prop__Var_310;
                  MR_Word transform_hlds__const_prop__Var_311;
                  MR_Word transform_hlds__const_prop__Var_312;
                  MR_Integer transform_hlds__const_prop__XVal_428;
                  MR_Word transform_hlds__const_prop__BitsPerInt_429;
                  MR_Integer transform_hlds__const_prop__ZVal_430;
                  MR_Word transform_hlds__const_prop__Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__Var_49;
                  MR_Word transform_hlds__const_prop__Var_50;
                  MR_Word transform_hlds__const_prop__Var_500;
                  MR_Word transform_hlds__const_prop__Var_501;
                  MR_Word transform_hlds__const_prop__Var_51;
                  MR_Word transform_hlds__const_prop__Var_52;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_299, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_299, (MR_Integer) 1)));
                    transform_hlds__const_prop__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_299, (MR_Integer) 2)));
                    transform_hlds__const_prop__Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_299, (MR_Integer) 3)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_300)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_300, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_300, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_304 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_301, (MR_Integer) 0)));
                        transform_hlds__const_prop__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_301, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_302)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_302, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__XVal_428 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_302, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                            transform_hlds__const_prop__Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_305)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_305, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_305, (MR_Integer) 1)));
                              transform_hlds__const_prop__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_305, (MR_Integer) 2)));
                              transform_hlds__const_prop__Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_305, (MR_Integer) 3)));
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_306)) == (MR_mktag((MR_Integer) 1)));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_306, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_306, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_307, (MR_Integer) 0)));
                                  transform_hlds__const_prop__Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_307, (MR_Integer) 1)));
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_309 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_308)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_308, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__ZVal_430 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_308, (MR_Integer) 1)));
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
                                      transform_hlds__const_prop__Var_311 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_312 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_311, transform_hlds__const_prop__Var_312);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_429);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_429, transform_hlds__const_prop__XVal_428, transform_hlds__const_prop__ZVal_430, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "//" */
            {
              MR_Word transform_hlds__const_prop__Var_243;
              MR_Word transform_hlds__const_prop__Var_244;
              MR_Word transform_hlds__const_prop__Var_245;
              MR_Word transform_hlds__const_prop__Var_246;
              MR_Word transform_hlds__const_prop__Var_247;
              MR_Word transform_hlds__const_prop__Var_248;
              MR_Word transform_hlds__const_prop__Var_249;
              MR_Word transform_hlds__const_prop__Var_250;
              MR_Word transform_hlds__const_prop__Var_251;
              MR_Word transform_hlds__const_prop__Var_252;
              MR_Word transform_hlds__const_prop__Var_253;
              MR_Word transform_hlds__const_prop__Var_254;
              MR_Word transform_hlds__const_prop__Var_255;
              MR_Word transform_hlds__const_prop__Var_256;
              MR_Integer transform_hlds__const_prop__XVal_440;
              MR_Integer transform_hlds__const_prop__YVal_441;
              MR_Word transform_hlds__const_prop__BitsPerInt_442;
              MR_Word transform_hlds__const_prop__Var_514;
              MR_Word transform_hlds__const_prop__Var_515;
              MR_Word transform_hlds__const_prop__Var_65;
              MR_Word transform_hlds__const_prop__Var_66;
              MR_Word transform_hlds__const_prop__Var_516;
              MR_Word transform_hlds__const_prop__Var_517;
              MR_Word transform_hlds__const_prop__Var_67;
              MR_Word transform_hlds__const_prop__Var_68;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_243, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_243, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_243, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_243, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_244)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_244, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_244, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_248 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_245, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_245, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_247 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_246)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_246, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_440 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_246, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_249)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_249, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_249, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_249, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_249, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_250)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_250, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_250, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_251, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_251, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_253 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_252)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_252, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_441 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_252, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_441 == (MR_Integer) 0);
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_255 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_256 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_255, transform_hlds__const_prop__Var_256);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_442);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__quotient_4_p_0(transform_hlds__const_prop__BitsPerInt_442, transform_hlds__const_prop__XVal_440, transform_hlds__const_prop__YVal_441, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "/\" */
            {
              MR_Word transform_hlds__const_prop__Var_133;
              MR_Word transform_hlds__const_prop__Var_134;
              MR_Word transform_hlds__const_prop__Var_135;
              MR_Word transform_hlds__const_prop__Var_136;
              MR_Word transform_hlds__const_prop__Var_137;
              MR_Word transform_hlds__const_prop__Var_138;
              MR_Word transform_hlds__const_prop__Var_139;
              MR_Word transform_hlds__const_prop__Var_140;
              MR_Word transform_hlds__const_prop__Var_141;
              MR_Word transform_hlds__const_prop__Var_142;
              MR_Word transform_hlds__const_prop__Var_143;
              MR_Word transform_hlds__const_prop__Var_144;
              MR_Integer transform_hlds__const_prop__XVal_464;
              MR_Integer transform_hlds__const_prop__YVal_465;
              MR_Word transform_hlds__const_prop__Var_546;
              MR_Word transform_hlds__const_prop__Var_547;
              MR_Word transform_hlds__const_prop__Var_97;
              MR_Word transform_hlds__const_prop__Var_98;
              MR_Word transform_hlds__const_prop__Var_548;
              MR_Word transform_hlds__const_prop__Var_549;
              MR_Word transform_hlds__const_prop__Var_99;
              MR_Word transform_hlds__const_prop__Var_100;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_546 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_547 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_133, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_133, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_133, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_134)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_134, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_134, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_135, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_135, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_136)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_136, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_464 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_136, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_548 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_139, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_139, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_139, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_139, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_140)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_140, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_140, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_141, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_141, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_142)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_142, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_465 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_142, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_464 & transform_hlds__const_prop__YVal_465);
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
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
            /* case "<<" */
            {
              MR_Word transform_hlds__const_prop__Var_173;
              MR_Word transform_hlds__const_prop__Var_174;
              MR_Word transform_hlds__const_prop__Var_175;
              MR_Word transform_hlds__const_prop__Var_176;
              MR_Word transform_hlds__const_prop__Var_177;
              MR_Word transform_hlds__const_prop__Var_178;
              MR_Word transform_hlds__const_prop__Var_179;
              MR_Word transform_hlds__const_prop__Var_180;
              MR_Word transform_hlds__const_prop__Var_181;
              MR_Word transform_hlds__const_prop__Var_182;
              MR_Word transform_hlds__const_prop__Var_183;
              MR_Word transform_hlds__const_prop__Var_184;
              MR_Word transform_hlds__const_prop__Var_185;
              MR_Word transform_hlds__const_prop__Var_186;
              MR_Integer transform_hlds__const_prop__XVal_455;
              MR_Integer transform_hlds__const_prop__YVal_456;
              MR_Word transform_hlds__const_prop__BitsPerInt_457;
              MR_Word transform_hlds__const_prop__Var_534;
              MR_Word transform_hlds__const_prop__Var_535;
              MR_Word transform_hlds__const_prop__Var_85;
              MR_Word transform_hlds__const_prop__Var_86;
              MR_Word transform_hlds__const_prop__Var_536;
              MR_Word transform_hlds__const_prop__Var_537;
              MR_Word transform_hlds__const_prop__Var_87;
              MR_Word transform_hlds__const_prop__Var_88;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_534 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_535 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_173, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_173, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_173, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_173, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_174)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_174, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_174, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_175, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_175, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_177 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_176)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_176, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_455 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_176, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_536 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_537 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_179, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_179, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_179, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_179, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_180)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_180, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_180, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_181, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_181, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_182)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_182, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_456 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_182, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_185 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_186 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_185, transform_hlds__const_prop__Var_186);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_457);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__left_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_457, transform_hlds__const_prop__XVal_455, transform_hlds__const_prop__YVal_456, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case ">>" */
            {
              MR_Word transform_hlds__const_prop__Var_145;
              MR_Word transform_hlds__const_prop__Var_146;
              MR_Word transform_hlds__const_prop__Var_147;
              MR_Word transform_hlds__const_prop__Var_148;
              MR_Word transform_hlds__const_prop__Var_149;
              MR_Word transform_hlds__const_prop__Var_150;
              MR_Word transform_hlds__const_prop__Var_151;
              MR_Word transform_hlds__const_prop__Var_152;
              MR_Word transform_hlds__const_prop__Var_153;
              MR_Word transform_hlds__const_prop__Var_154;
              MR_Word transform_hlds__const_prop__Var_155;
              MR_Word transform_hlds__const_prop__Var_156;
              MR_Word transform_hlds__const_prop__Var_157;
              MR_Word transform_hlds__const_prop__Var_158;
              MR_Integer transform_hlds__const_prop__XVal_461;
              MR_Integer transform_hlds__const_prop__YVal_462;
              MR_Word transform_hlds__const_prop__BitsPerInt_463;
              MR_Word transform_hlds__const_prop__Var_542;
              MR_Word transform_hlds__const_prop__Var_543;
              MR_Word transform_hlds__const_prop__Var_93;
              MR_Word transform_hlds__const_prop__Var_94;
              MR_Word transform_hlds__const_prop__Var_544;
              MR_Word transform_hlds__const_prop__Var_545;
              MR_Word transform_hlds__const_prop__Var_95;
              MR_Word transform_hlds__const_prop__Var_96;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_542 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_543 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_145, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_145, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_145, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_146)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_146, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_146, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_147, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_147, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_461 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_148, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_544 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_151)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_151, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_151, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_151, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_151, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_152)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_152, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_152, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_153, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_153, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_154)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_154, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_462 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_154, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_157 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_158 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_157, transform_hlds__const_prop__Var_158);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_463);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__right_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_463, transform_hlds__const_prop__XVal_461, transform_hlds__const_prop__YVal_462, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "\/" */
            {
              MR_Word transform_hlds__const_prop__Var_121;
              MR_Word transform_hlds__const_prop__Var_122;
              MR_Word transform_hlds__const_prop__Var_123;
              MR_Word transform_hlds__const_prop__Var_124;
              MR_Word transform_hlds__const_prop__Var_125;
              MR_Word transform_hlds__const_prop__Var_126;
              MR_Word transform_hlds__const_prop__Var_127;
              MR_Word transform_hlds__const_prop__Var_128;
              MR_Word transform_hlds__const_prop__Var_129;
              MR_Word transform_hlds__const_prop__Var_130;
              MR_Word transform_hlds__const_prop__Var_131;
              MR_Word transform_hlds__const_prop__Var_132;
              MR_Integer transform_hlds__const_prop__XVal_466;
              MR_Integer transform_hlds__const_prop__YVal_467;
              MR_Word transform_hlds__const_prop__Var_550;
              MR_Word transform_hlds__const_prop__Var_551;
              MR_Word transform_hlds__const_prop__Var_101;
              MR_Word transform_hlds__const_prop__Var_102;
              MR_Word transform_hlds__const_prop__Var_552;
              MR_Word transform_hlds__const_prop__Var_553;
              MR_Word transform_hlds__const_prop__Var_103;
              MR_Word transform_hlds__const_prop__Var_104;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_551 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_121, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_121, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_121, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_121, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_122)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_122, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_122, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_123, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_123, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_124, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_466 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_124, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_552 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_553 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_127, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_128)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_128, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_128, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_129, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_129, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_130, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_467 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_130, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_466 | transform_hlds__const_prop__YVal_467);
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
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
            /* case "minus" */
            {
              MR_Word transform_hlds__const_prop__Var_341;
              MR_Word transform_hlds__const_prop__Var_342;
              MR_Word transform_hlds__const_prop__Var_343;
              MR_Word transform_hlds__const_prop__Var_344;
              MR_Word transform_hlds__const_prop__Var_345;
              MR_Word transform_hlds__const_prop__Var_346;
              MR_Word transform_hlds__const_prop__Var_347;
              MR_Word transform_hlds__const_prop__Var_348;
              MR_Word transform_hlds__const_prop__Var_349;
              MR_Word transform_hlds__const_prop__Var_350;
              MR_Word transform_hlds__const_prop__Var_351;
              MR_Word transform_hlds__const_prop__Var_352;
              MR_Word transform_hlds__const_prop__Var_353;
              MR_Word transform_hlds__const_prop__Var_354;
              MR_Integer transform_hlds__const_prop__XVal_419;
              MR_Integer transform_hlds__const_prop__YVal_420;
              MR_Word transform_hlds__const_prop__BitsPerInt_421;
              MR_Word transform_hlds__const_prop__Var_486;
              MR_Word transform_hlds__const_prop__Var_487;
              MR_Word transform_hlds__const_prop__Var_37;
              MR_Word transform_hlds__const_prop__Var_38;
              MR_Word transform_hlds__const_prop__Var_488;
              MR_Word transform_hlds__const_prop__Var_489;
              MR_Word transform_hlds__const_prop__Var_39;
              MR_Word transform_hlds__const_prop__Var_40;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_341)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_341, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_341, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_341, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_341, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_342)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_342, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_342, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_343, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_343, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_345 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_344)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_344, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_419 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_344, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_347)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_347, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_347, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_347, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_348 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_347, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_348)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_348, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_348, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_349, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_349, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_350)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_350, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_350, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_353 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_354 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_353, transform_hlds__const_prop__Var_354);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_421);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_421, transform_hlds__const_prop__XVal_419, transform_hlds__const_prop__YVal_420, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "mod" */
            {
              MR_Word transform_hlds__const_prop__Var_229;
              MR_Word transform_hlds__const_prop__Var_230;
              MR_Word transform_hlds__const_prop__Var_231;
              MR_Word transform_hlds__const_prop__Var_232;
              MR_Word transform_hlds__const_prop__Var_233;
              MR_Word transform_hlds__const_prop__Var_234;
              MR_Word transform_hlds__const_prop__Var_235;
              MR_Word transform_hlds__const_prop__Var_236;
              MR_Word transform_hlds__const_prop__Var_237;
              MR_Word transform_hlds__const_prop__Var_238;
              MR_Word transform_hlds__const_prop__Var_239;
              MR_Word transform_hlds__const_prop__Var_240;
              MR_Word transform_hlds__const_prop__Var_241;
              MR_Word transform_hlds__const_prop__Var_242;
              MR_Integer transform_hlds__const_prop__XVal_443;
              MR_Integer transform_hlds__const_prop__YVal_444;
              MR_Word transform_hlds__const_prop__BitsPerInt_445;
              MR_Word transform_hlds__const_prop__Var_518;
              MR_Word transform_hlds__const_prop__Var_519;
              MR_Word transform_hlds__const_prop__Var_69;
              MR_Word transform_hlds__const_prop__Var_70;
              MR_Word transform_hlds__const_prop__Var_520;
              MR_Word transform_hlds__const_prop__Var_521;
              MR_Word transform_hlds__const_prop__Var_71;
              MR_Word transform_hlds__const_prop__Var_72;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_229)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_229, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_229, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_229, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_229, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_230)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_230, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_230, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_231, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_231, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_232)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_232, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_443 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_232, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_235, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_235, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_235, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_235, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_236)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_236, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_236, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_237, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_237, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_238)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_238, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_444 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_238, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_444 == (MR_Integer) 0);
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_241 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_242 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_241, transform_hlds__const_prop__Var_242);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_445);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__mod_4_p_0(transform_hlds__const_prop__BitsPerInt_445, transform_hlds__const_prop__XVal_443, transform_hlds__const_prop__YVal_444, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "plus" */
            {
              MR_Integer transform_hlds__const_prop__XVal_19;
              MR_Integer transform_hlds__const_prop__YVal_22;
              MR_Word transform_hlds__const_prop__BitsPerInt_23;
              MR_Word transform_hlds__const_prop__Var_397;
              MR_Word transform_hlds__const_prop__Var_398;
              MR_Word transform_hlds__const_prop__Var_399;
              MR_Word transform_hlds__const_prop__Var_400;
              MR_Word transform_hlds__const_prop__Var_401;
              MR_Word transform_hlds__const_prop__Var_402;
              MR_Word transform_hlds__const_prop__Var_403;
              MR_Word transform_hlds__const_prop__Var_404;
              MR_Word transform_hlds__const_prop__Var_405;
              MR_Word transform_hlds__const_prop__Var_406;
              MR_Word transform_hlds__const_prop__Var_407;
              MR_Word transform_hlds__const_prop__Var_408;
              MR_Word transform_hlds__const_prop__Var_409;
              MR_Word transform_hlds__const_prop__Var_410;
              MR_Word transform_hlds__const_prop__Var_470;
              MR_Word transform_hlds__const_prop__Var_471;
              MR_Word transform_hlds__const_prop__Var_17;
              MR_Word transform_hlds__const_prop__Var_18;
              MR_Word transform_hlds__const_prop__Var_472;
              MR_Word transform_hlds__const_prop__Var_473;
              MR_Word transform_hlds__const_prop__Var_20;
              MR_Word transform_hlds__const_prop__Var_21;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_397)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_397, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_397, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_397, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_398)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_398, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_398, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_402 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_399, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_399, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_400)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_400, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_400, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_403)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_403, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_403, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_403, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_403, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_404)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_404, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_404, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_408 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_405, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_405, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_407 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_406)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_406, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_406, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_409 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_410 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_409, transform_hlds__const_prop__Var_410);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_23);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_23, transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "rem" */
            {
              MR_Word transform_hlds__const_prop__Var_215;
              MR_Word transform_hlds__const_prop__Var_216;
              MR_Word transform_hlds__const_prop__Var_217;
              MR_Word transform_hlds__const_prop__Var_218;
              MR_Word transform_hlds__const_prop__Var_219;
              MR_Word transform_hlds__const_prop__Var_220;
              MR_Word transform_hlds__const_prop__Var_221;
              MR_Word transform_hlds__const_prop__Var_222;
              MR_Word transform_hlds__const_prop__Var_223;
              MR_Word transform_hlds__const_prop__Var_224;
              MR_Word transform_hlds__const_prop__Var_225;
              MR_Word transform_hlds__const_prop__Var_226;
              MR_Word transform_hlds__const_prop__Var_227;
              MR_Word transform_hlds__const_prop__Var_228;
              MR_Integer transform_hlds__const_prop__XVal_446;
              MR_Integer transform_hlds__const_prop__YVal_447;
              MR_Word transform_hlds__const_prop__BitsPerInt_448;
              MR_Word transform_hlds__const_prop__Var_522;
              MR_Word transform_hlds__const_prop__Var_523;
              MR_Word transform_hlds__const_prop__Var_73;
              MR_Word transform_hlds__const_prop__Var_74;
              MR_Word transform_hlds__const_prop__Var_524;
              MR_Word transform_hlds__const_prop__Var_525;
              MR_Word transform_hlds__const_prop__Var_75;
              MR_Word transform_hlds__const_prop__Var_76;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_215)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_215, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_215, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_215, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_215, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_216)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_216, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_216, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_217, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_217, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_218)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_218, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_446 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_218, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_525 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_221)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_221, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_221, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_221, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_221, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_222)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_222, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_222, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_223, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_223, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_225 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_224)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_224, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_447 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_224, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_447 == (MR_Integer) 0);
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_227 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_228 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_227, transform_hlds__const_prop__Var_228);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_448);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__rem_4_p_0(transform_hlds__const_prop__BitsPerInt_448, transform_hlds__const_prop__XVal_446, transform_hlds__const_prop__YVal_447, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "times" */
            {
              MR_Word transform_hlds__const_prop__Var_285;
              MR_Word transform_hlds__const_prop__Var_286;
              MR_Word transform_hlds__const_prop__Var_287;
              MR_Word transform_hlds__const_prop__Var_288;
              MR_Word transform_hlds__const_prop__Var_289;
              MR_Word transform_hlds__const_prop__Var_290;
              MR_Word transform_hlds__const_prop__Var_291;
              MR_Word transform_hlds__const_prop__Var_292;
              MR_Word transform_hlds__const_prop__Var_293;
              MR_Word transform_hlds__const_prop__Var_294;
              MR_Word transform_hlds__const_prop__Var_295;
              MR_Word transform_hlds__const_prop__Var_296;
              MR_Word transform_hlds__const_prop__Var_297;
              MR_Word transform_hlds__const_prop__Var_298;
              MR_Integer transform_hlds__const_prop__XVal_431;
              MR_Integer transform_hlds__const_prop__YVal_432;
              MR_Word transform_hlds__const_prop__BitsPerInt_433;
              MR_Word transform_hlds__const_prop__Var_502;
              MR_Word transform_hlds__const_prop__Var_503;
              MR_Word transform_hlds__const_prop__Var_53;
              MR_Word transform_hlds__const_prop__Var_54;
              MR_Word transform_hlds__const_prop__Var_504;
              MR_Word transform_hlds__const_prop__Var_505;
              MR_Word transform_hlds__const_prop__Var_55;
              MR_Word transform_hlds__const_prop__Var_56;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_285, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_285, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_285, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_285, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_286)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_286, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_286, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_287, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_287, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_289 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_288)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_288, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_288, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_291, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_291, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_291, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_291, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_292)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_292, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_292, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_296 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_293, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_293, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_295 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_294)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_294, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_432 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_294, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_297 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_298 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_297, transform_hlds__const_prop__Var_298);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_433);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__times_4_p_0(transform_hlds__const_prop__BitsPerInt_433, transform_hlds__const_prop__XVal_431, transform_hlds__const_prop__YVal_432, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "unchecked_left_shift" */
            {
              MR_Word transform_hlds__const_prop__Var_187;
              MR_Word transform_hlds__const_prop__Var_188;
              MR_Word transform_hlds__const_prop__Var_189;
              MR_Word transform_hlds__const_prop__Var_190;
              MR_Word transform_hlds__const_prop__Var_191;
              MR_Word transform_hlds__const_prop__Var_192;
              MR_Word transform_hlds__const_prop__Var_193;
              MR_Word transform_hlds__const_prop__Var_194;
              MR_Word transform_hlds__const_prop__Var_195;
              MR_Word transform_hlds__const_prop__Var_196;
              MR_Word transform_hlds__const_prop__Var_197;
              MR_Word transform_hlds__const_prop__Var_198;
              MR_Word transform_hlds__const_prop__Var_199;
              MR_Word transform_hlds__const_prop__Var_200;
              MR_Integer transform_hlds__const_prop__XVal_452;
              MR_Integer transform_hlds__const_prop__YVal_453;
              MR_Word transform_hlds__const_prop__BitsPerInt_454;
              MR_Word transform_hlds__const_prop__Var_530;
              MR_Word transform_hlds__const_prop__Var_531;
              MR_Word transform_hlds__const_prop__Var_81;
              MR_Word transform_hlds__const_prop__Var_82;
              MR_Word transform_hlds__const_prop__Var_532;
              MR_Word transform_hlds__const_prop__Var_533;
              MR_Word transform_hlds__const_prop__Var_83;
              MR_Word transform_hlds__const_prop__Var_84;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_530 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_531 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_187)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_187, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_187, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_187, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_187, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_188)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_188, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_188, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_189, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_189, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_190)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_190, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_452 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_190, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_532 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_533 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_193, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_193, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_193, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_193, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_194)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_194, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_194, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_195, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_195, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_196)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_196, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_453 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_196, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_199 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_200 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_199, transform_hlds__const_prop__Var_200);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_454);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_left_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_454, transform_hlds__const_prop__XVal_452, transform_hlds__const_prop__YVal_453, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "unchecked_quotient" */
            {
              MR_Word transform_hlds__const_prop__Var_257;
              MR_Word transform_hlds__const_prop__Var_258;
              MR_Word transform_hlds__const_prop__Var_259;
              MR_Word transform_hlds__const_prop__Var_260;
              MR_Word transform_hlds__const_prop__Var_261;
              MR_Word transform_hlds__const_prop__Var_262;
              MR_Word transform_hlds__const_prop__Var_263;
              MR_Word transform_hlds__const_prop__Var_264;
              MR_Word transform_hlds__const_prop__Var_265;
              MR_Word transform_hlds__const_prop__Var_266;
              MR_Word transform_hlds__const_prop__Var_267;
              MR_Word transform_hlds__const_prop__Var_268;
              MR_Word transform_hlds__const_prop__Var_269;
              MR_Word transform_hlds__const_prop__Var_270;
              MR_Integer transform_hlds__const_prop__XVal_437;
              MR_Integer transform_hlds__const_prop__YVal_438;
              MR_Word transform_hlds__const_prop__BitsPerInt_439;
              MR_Word transform_hlds__const_prop__Var_510;
              MR_Word transform_hlds__const_prop__Var_511;
              MR_Word transform_hlds__const_prop__Var_61;
              MR_Word transform_hlds__const_prop__Var_62;
              MR_Word transform_hlds__const_prop__Var_512;
              MR_Word transform_hlds__const_prop__Var_513;
              MR_Word transform_hlds__const_prop__Var_63;
              MR_Word transform_hlds__const_prop__Var_64;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_257, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_257, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_257, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_258)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_258, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_258, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_259, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_259, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_260, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_437 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_260, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_263, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_263, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_263, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_264)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_264, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_264, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_268 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_265, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_265, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_266)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_266, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_438 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_266, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_438 == (MR_Integer) 0);
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_269 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_270 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_269, transform_hlds__const_prop__Var_270);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_439);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_quotient_4_p_0(transform_hlds__const_prop__BitsPerInt_439, transform_hlds__const_prop__XVal_437, transform_hlds__const_prop__YVal_438, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "unchecked_rem" */
            {
              MR_Word transform_hlds__const_prop__Var_201;
              MR_Word transform_hlds__const_prop__Var_202;
              MR_Word transform_hlds__const_prop__Var_203;
              MR_Word transform_hlds__const_prop__Var_204;
              MR_Word transform_hlds__const_prop__Var_205;
              MR_Word transform_hlds__const_prop__Var_206;
              MR_Word transform_hlds__const_prop__Var_207;
              MR_Word transform_hlds__const_prop__Var_208;
              MR_Word transform_hlds__const_prop__Var_209;
              MR_Word transform_hlds__const_prop__Var_210;
              MR_Word transform_hlds__const_prop__Var_211;
              MR_Word transform_hlds__const_prop__Var_212;
              MR_Word transform_hlds__const_prop__Var_213;
              MR_Word transform_hlds__const_prop__Var_214;
              MR_Integer transform_hlds__const_prop__XVal_449;
              MR_Integer transform_hlds__const_prop__YVal_450;
              MR_Word transform_hlds__const_prop__BitsPerInt_451;
              MR_Word transform_hlds__const_prop__Var_526;
              MR_Word transform_hlds__const_prop__Var_527;
              MR_Word transform_hlds__const_prop__Var_77;
              MR_Word transform_hlds__const_prop__Var_78;
              MR_Word transform_hlds__const_prop__Var_528;
              MR_Word transform_hlds__const_prop__Var_529;
              MR_Word transform_hlds__const_prop__Var_79;
              MR_Word transform_hlds__const_prop__Var_80;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_526 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_527 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_201)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_201, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_201, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_201, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_201, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_202)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_202, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_202, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_206 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_203, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_203, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_204)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_204, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_449 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_204, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_529 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_207)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_207, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_207, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_207, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_207, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_208)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_208, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_208, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_209, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_209, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_210)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_210, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_450 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_210, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_450 == (MR_Integer) 0);
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                      transform_hlds__const_prop__Var_213 = (MR_Integer) 234;
                                      transform_hlds__const_prop__Var_214 = (MR_Integer) 0;
                                      transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_213, transform_hlds__const_prop__Var_214);
                                      if (transform_hlds__const_prop__succeeded)
                                      {
                                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_451);
                                        transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_rem_4_p_0(transform_hlds__const_prop__BitsPerInt_451, transform_hlds__const_prop__XVal_449, transform_hlds__const_prop__YVal_450, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "unchecked_right_shift" */
            {
              MR_Word transform_hlds__const_prop__Var_159;
              MR_Word transform_hlds__const_prop__Var_160;
              MR_Word transform_hlds__const_prop__Var_161;
              MR_Word transform_hlds__const_prop__Var_162;
              MR_Word transform_hlds__const_prop__Var_163;
              MR_Word transform_hlds__const_prop__Var_164;
              MR_Word transform_hlds__const_prop__Var_165;
              MR_Word transform_hlds__const_prop__Var_166;
              MR_Word transform_hlds__const_prop__Var_167;
              MR_Word transform_hlds__const_prop__Var_168;
              MR_Word transform_hlds__const_prop__Var_169;
              MR_Word transform_hlds__const_prop__Var_170;
              MR_Word transform_hlds__const_prop__Var_171;
              MR_Word transform_hlds__const_prop__Var_172;
              MR_Integer transform_hlds__const_prop__XVal_458;
              MR_Integer transform_hlds__const_prop__YVal_459;
              MR_Word transform_hlds__const_prop__BitsPerInt_460;
              MR_Word transform_hlds__const_prop__Var_538;
              MR_Word transform_hlds__const_prop__Var_539;
              MR_Word transform_hlds__const_prop__Var_89;
              MR_Word transform_hlds__const_prop__Var_90;
              MR_Word transform_hlds__const_prop__Var_540;
              MR_Word transform_hlds__const_prop__Var_541;
              MR_Word transform_hlds__const_prop__Var_91;
              MR_Word transform_hlds__const_prop__Var_92;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_538 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_539 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_159)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_159, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_159, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_159, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_159, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_160)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_160, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_160, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_161, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_161, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_162)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_162, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_458 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_162, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_540 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_541 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_165, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_165, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_165, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_166)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_166, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_166, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_167, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_167, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_168, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_459 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_168, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__Var_171 = (MR_Integer) 234;
                                    transform_hlds__const_prop__Var_172 = (MR_Integer) 0;
                                    transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__Var_171, transform_hlds__const_prop__Var_172);
                                    if (transform_hlds__const_prop__succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_460);
                                      transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_right_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_460, transform_hlds__const_prop__XVal_458, transform_hlds__const_prop__YVal_459, &transform_hlds__const_prop__OutputArgVal_16);
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
            /* case "xor" */
            {
              MR_Word transform_hlds__const_prop__Var_109;
              MR_Word transform_hlds__const_prop__Var_110;
              MR_Word transform_hlds__const_prop__Var_111;
              MR_Word transform_hlds__const_prop__Var_112;
              MR_Word transform_hlds__const_prop__Var_113;
              MR_Word transform_hlds__const_prop__Var_114;
              MR_Word transform_hlds__const_prop__Var_115;
              MR_Word transform_hlds__const_prop__Var_116;
              MR_Word transform_hlds__const_prop__Var_117;
              MR_Word transform_hlds__const_prop__Var_118;
              MR_Word transform_hlds__const_prop__Var_119;
              MR_Word transform_hlds__const_prop__Var_120;
              MR_Integer transform_hlds__const_prop__XVal_468;
              MR_Integer transform_hlds__const_prop__YVal_469;
              MR_Word transform_hlds__const_prop__Var_554;
              MR_Word transform_hlds__const_prop__Var_555;
              MR_Word transform_hlds__const_prop__Var_105;
              MR_Word transform_hlds__const_prop__Var_106;
              MR_Word transform_hlds__const_prop__Var_556;
              MR_Word transform_hlds__const_prop__Var_557;
              MR_Word transform_hlds__const_prop__Var_107;
              MR_Word transform_hlds__const_prop__Var_108;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_554 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                transform_hlds__const_prop__Var_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                transform_hlds__const_prop__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_109, (MR_Integer) 1)));
                  transform_hlds__const_prop__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_109, (MR_Integer) 2)));
                  transform_hlds__const_prop__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_109, (MR_Integer) 3)));
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_110)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_110, (MR_Integer) 0)));
                    transform_hlds__const_prop__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_110, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_111, (MR_Integer) 0)));
                      transform_hlds__const_prop__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_111, (MR_Integer) 1)));
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_112, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__XVal_468 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_112, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                          transform_hlds__const_prop__Var_557 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                          transform_hlds__const_prop__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_115, (MR_Integer) 1)));
                            transform_hlds__const_prop__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_115, (MR_Integer) 2)));
                            transform_hlds__const_prop__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_115, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_116)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_116, (MR_Integer) 0)));
                              transform_hlds__const_prop__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_116, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_117, (MR_Integer) 0)));
                                transform_hlds__const_prop__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_117, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_118)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_118, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__YVal_469 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_118, (MR_Integer) 1)));
                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_468 ^ transform_hlds__const_prop__YVal_469);
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
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
    if (transform_hlds__const_prop__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__const_prop__HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
      }
      transform_hlds__const_prop__succeeded = MR_TRUE;
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
  MR_Word transform_hlds__const_prop__Globals_8,
  MR_String transform_hlds__const_prop__ProcName_9,
  MR_Integer transform_hlds__const_prop__ModeNum_10,
  MR_Word transform_hlds__const_prop__X_11,
  MR_Word transform_hlds__const_prop__Y_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
    MR_Integer transform_hlds__const_prop__OutputArgVal_14;
    MR_Word transform_hlds__const_prop__Var_108;
    MR_Word transform_hlds__const_prop__Var_111;
    MR_Word transform_hlds__const_prop__Var_114;
    MR_Word transform_hlds__const_prop__Var_115;
    MR_Word transform_hlds__const_prop__Var_116;
    MR_Word transform_hlds__const_prop__Var_117;
    MR_Integer transform_hlds__const_prop__Var_118;
    MR_Word transform_hlds__const_prop__Var_109;
    MR_Word transform_hlds__const_prop__Var_110;
    MR_Word transform_hlds__const_prop__Var_112;
    MR_Word transform_hlds__const_prop__Var_113;
    MR_Integer transform_hlds__const_prop__lo_0;
    MR_Integer transform_hlds__const_prop__hi_1;
    MR_Integer transform_hlds__const_prop__mid_2;
    MR_Integer transform_hlds__const_prop__result_3;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
      transform_hlds__const_prop__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
      transform_hlds__const_prop__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_108, (MR_Integer) 1)));
        transform_hlds__const_prop__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_108, (MR_Integer) 2)));
        transform_hlds__const_prop__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_108, (MR_Integer) 3)));
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Var_111)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__const_prop__succeeded)
        {
          transform_hlds__const_prop__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_111, (MR_Integer) 0)));
          transform_hlds__const_prop__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Var_111, (MR_Integer) 1)));
          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_115, (MR_Integer) 0)));
            transform_hlds__const_prop__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Var_115, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__Var_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (transform_hlds__const_prop__succeeded)
            {
              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__Var_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_117, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Var_117, (MR_Integer) 1)));
                /* binary string jump switch */
                transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
                transform_hlds__const_prop__hi_1 = (MR_Integer) 6;
                do
                {
                  transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
                  transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ProcName_9, ((&transform_hlds__const_prop_vector_common_2[0 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                  if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
                  {
                    switch (((&transform_hlds__const_prop_vector_common_2[0 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "+" */
                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                          transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__Var_118;
                          transform_hlds__const_prop__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          /* case "-" */
                          {
                            MR_Word transform_hlds__const_prop__BitsPerInt_20;
                            MR_Integer transform_hlds__const_prop__Var_77;

                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 234, (MR_Integer) 0);
                            if (transform_hlds__const_prop__succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_20);
                              transform_hlds__const_prop__Var_77 = (MR_Integer) 0;
                              transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_20, transform_hlds__const_prop__Var_77, transform_hlds__const_prop__Var_118, &transform_hlds__const_prop__OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "\" */
                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                          transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__Var_118);
                          transform_hlds__const_prop__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          /* case "floor_to_multiple_of_bits_per_int" */
                          {
                            MR_Word transform_hlds__const_prop__BitsPerInt_87;

                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 234, (MR_Integer) 0);
                            if (transform_hlds__const_prop__succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_87);
                              transform_hlds__const_prop__succeeded = libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(transform_hlds__const_prop__Var_118, transform_hlds__const_prop__BitsPerInt_87, &transform_hlds__const_prop__OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          /* case "quot_bits_per_int" */
                          {
                            MR_Word transform_hlds__const_prop__BitsPerInt_89;

                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 234, (MR_Integer) 0);
                            if (transform_hlds__const_prop__succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_89);
                              transform_hlds__const_prop__succeeded = libs__int_emu__quot_bits_per_int_3_p_0(transform_hlds__const_prop__Var_118, transform_hlds__const_prop__BitsPerInt_89, &transform_hlds__const_prop__OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          /* case "rem_bits_per_int" */
                          {
                            MR_Word transform_hlds__const_prop__BitsPerInt_93;

                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 234, (MR_Integer) 0);
                            if (transform_hlds__const_prop__succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_93);
                              transform_hlds__const_prop__succeeded = libs__int_emu__rem_bits_per_int_3_p_0(transform_hlds__const_prop__Var_118, transform_hlds__const_prop__BitsPerInt_93, &transform_hlds__const_prop__OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          /* case "times_bits_per_int" */
                          {
                            MR_Word transform_hlds__const_prop__BitsPerInt_91;

                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 234, (MR_Integer) 0);
                            if (transform_hlds__const_prop__succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_91);
                              transform_hlds__const_prop__succeeded = libs__int_emu__times_bits_per_int_3_p_0(transform_hlds__const_prop__Var_118, transform_hlds__const_prop__BitsPerInt_91, &transform_hlds__const_prop__OutputArgVal_14);
                            }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_0;
                  }
                  else
                  if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
                    transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
                  else
                    transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
                }
                while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
                transform_hlds__const_prop__succeeded = MR_FALSE;
              label_0:;
                if (transform_hlds__const_prop__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__const_prop__HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_14));
                  }
                  transform_hlds__const_prop__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(
  MR_Word transform_hlds__const_prop__Globals_7,
  MR_String transform_hlds__const_prop__ProcName_8,
  MR_Integer transform_hlds__const_prop__ModeNum_9,
  MR_Word transform_hlds__const_prop__X_10,
  MR_Word * transform_hlds__const_prop__OutputArg_11,
  MR_Word * transform_hlds__const_prop__ConsId_12)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "bits_per_uint") == 0);
    MR_Integer transform_hlds__const_prop__OutputArgVal_13;
    MR_Word transform_hlds__const_prop__Var_14;
    MR_Word transform_hlds__const_prop__Var_15;
    MR_Word transform_hlds__const_prop__Var_16;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_9 == (MR_Integer) 0);
      if (transform_hlds__const_prop__succeeded)
      {
        *transform_hlds__const_prop__OutputArg_11 = transform_hlds__const_prop__X_10;
        transform_hlds__const_prop__Var_14 = (MR_Integer) 234;
        transform_hlds__const_prop__Var_15 = (MR_Integer) 0;
        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_7, transform_hlds__const_prop__Var_14, transform_hlds__const_prop__Var_15);
        if (transform_hlds__const_prop__succeeded)
        {
          libs__uint_emu__target_bits_per_uint_2_p_0(transform_hlds__const_prop__Globals_7, &transform_hlds__const_prop__Var_16);
          transform_hlds__const_prop__OutputArgVal_13 = (MR_Integer) transform_hlds__const_prop__Var_16;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__const_prop__ConsId_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_13));
          }
          transform_hlds__const_prop__succeeded = MR_TRUE;
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(
  MR_Word transform_hlds__const_prop__Globals_7,
  MR_String transform_hlds__const_prop__ProcName_8,
  MR_Integer transform_hlds__const_prop__ModeNum_9,
  MR_Word transform_hlds__const_prop__X_10,
  MR_Word * transform_hlds__const_prop__OutputArg_11,
  MR_Word * transform_hlds__const_prop__HeadVar__6_6)
{
  {
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "bits_per_int") == 0);
    MR_Integer transform_hlds__const_prop__OutputArgVal_12;
    MR_Word transform_hlds__const_prop__Var_13;
    MR_Word transform_hlds__const_prop__Var_14;
    MR_Word transform_hlds__const_prop__Var_15;

    if (transform_hlds__const_prop__succeeded)
    {
      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_9 == (MR_Integer) 0);
      if (transform_hlds__const_prop__succeeded)
      {
        *transform_hlds__const_prop__OutputArg_11 = transform_hlds__const_prop__X_10;
        transform_hlds__const_prop__Var_13 = (MR_Integer) 234;
        transform_hlds__const_prop__Var_14 = (MR_Integer) 0;
        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_7, transform_hlds__const_prop__Var_13, transform_hlds__const_prop__Var_14);
        if (transform_hlds__const_prop__succeeded)
        {
          libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_7, &transform_hlds__const_prop__Var_15);
          transform_hlds__const_prop__OutputArgVal_12 = (MR_Integer) transform_hlds__const_prop__Var_15;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__const_prop__HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_12));
          }
          transform_hlds__const_prop__succeeded = MR_TRUE;
        }
      }
    }
    return transform_hlds__const_prop__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;

    transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    return transform_hlds__const_prop__succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

    transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;

    transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    return transform_hlds__const_prop__succeeded;
  }
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

    transform_hlds__const_prop____Compare____arg_val_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
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

/* :- end_module transform_hlds.const_prop. */
