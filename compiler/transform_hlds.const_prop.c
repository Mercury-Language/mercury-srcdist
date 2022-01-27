/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.int_emu.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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

static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__77__1_3_f_0(
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
transform_hlds__const_prop__eval_unify_3_p_0(
  MR_Word transform_hlds__const_prop__X_4,
  MR_Word transform_hlds__const_prop__Y_5,
  MR_Word * transform_hlds__const_prop__Result_6);

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
transform_hlds__const_prop__evaluate_det_call_7_p_0(
  MR_Word transform_hlds__const_prop__Globals_8,
  MR_String transform_hlds__const_prop__ModuleName_9,
  MR_String transform_hlds__const_prop__ProcName_10,
  MR_Integer transform_hlds__const_prop__ModeNum_11,
  MR_Word transform_hlds__const_prop__Args_12,
  MR_Word * transform_hlds__const_prop__OutputArg_13,
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

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

static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
  MR_Box transform_hlds__const_prop__closure_arg,
  MR_Box transform_hlds__const_prop__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[1][7];


/* sealed */ struct transform_hlds__const_prop__vector_common_type_3_0_s {
  const MR_String transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[20];



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

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[1][7] = {
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


static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[20] = {
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
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 10 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 11 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 14 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 15 */
  {
    (MR_String) "*",
    (MR_Integer) 0
  },
  /* row 16 */
  {
    (MR_String) "+",
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "-",
    (MR_Integer) 2
  },
  /* row 18 */
  {
    (MR_String) "/",
    (MR_Integer) 3
  },
  /* row 19 */
  {
    (MR_String) "unchecked_quotient",
    (MR_Integer) 4
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1 = {
  (MR_String) "var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1,
  NULL,
  NULL,
  NULL
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
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;

    {
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
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

    {
      transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
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

    {
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
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

    {
      transform_hlds__const_prop____Compare____arg_val_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
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
    MR_Word transform_hlds__const_prop__V_23_23;
    MR_Word transform_hlds__const_prop__V_24_24;
    MR_Word transform_hlds__const_prop__V_25_25;
    MR_Word transform_hlds__const_prop__V_26_26;
    MR_Word transform_hlds__const_prop__V_27_27;
    MR_Word transform_hlds__const_prop__V_28_28;
    MR_Word transform_hlds__const_prop__V_29_29;
    MR_Word transform_hlds__const_prop__V_30_30;
    MR_Word transform_hlds__const_prop__V_31_31;
    MR_Word transform_hlds__const_prop__V_32_32;
    MR_Word transform_hlds__const_prop__V_33_33;
    MR_Word transform_hlds__const_prop__V_34_34;
    MR_Word transform_hlds__const_prop__V_35_35;
    MR_Word transform_hlds__const_prop__V_36_36;
    MR_Word transform_hlds__const_prop__V_17_17;
    MR_Word transform_hlds__const_prop__V_18_18;
    MR_Word transform_hlds__const_prop__V_37_37;
    MR_Word transform_hlds__const_prop__V_38_38;
    MR_Word transform_hlds__const_prop__V_20_20;
    MR_Word transform_hlds__const_prop__V_21_21;

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
            transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
            transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 1)));
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 2)));
                transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 3)));
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 1)));
                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 1)));
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 2)));
                                    transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 3)));
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                                    if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 0)));
                                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 1)));
                                        transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 0)));
                                        transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                        if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (transform_hlds__const_prop__succeeded)
                                                  {
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                    {
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__string__f_43_43_2_f_0(transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22);
                                                    }
                                                    {
                                                      MR_Word base;
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
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
    MR_Word transform_hlds__const_prop__V_127_127;
    MR_Word transform_hlds__const_prop__V_130_130;
    MR_Word transform_hlds__const_prop__V_133_133;
    MR_Word transform_hlds__const_prop__V_136_136;
    MR_Word transform_hlds__const_prop__V_139_139;
    MR_Word transform_hlds__const_prop__V_140_140;
    MR_Word transform_hlds__const_prop__V_141_141;
    MR_Word transform_hlds__const_prop__V_142_142;
    MR_Word transform_hlds__const_prop__V_143_143;
    MR_Word transform_hlds__const_prop__V_144_144;
    MR_Word transform_hlds__const_prop__V_145_145;
    MR_Word transform_hlds__const_prop__V_146_146;
    MR_Float transform_hlds__const_prop__V_147_147;
    MR_Float transform_hlds__const_prop__V_148_148;
    MR_Word transform_hlds__const_prop__V_128_128;
    MR_Word transform_hlds__const_prop__V_129_129;
    MR_Word transform_hlds__const_prop__V_131_131;
    MR_Word transform_hlds__const_prop__V_132_132;
    MR_Word transform_hlds__const_prop__V_134_134;
    MR_Word transform_hlds__const_prop__V_135_135;
    MR_Word transform_hlds__const_prop__V_137_137;
    MR_Word transform_hlds__const_prop__V_138_138;
    MR_Integer transform_hlds__const_prop__lo_0;
    MR_Integer transform_hlds__const_prop__hi_1;
    MR_Integer transform_hlds__const_prop__mid_2;
    MR_Integer transform_hlds__const_prop__result_3;

    if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
        transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
        transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
        transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
            transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
            transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
                transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 2)));
                transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 3)));
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)));
                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
                            transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)));
                                transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_145_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                transform_hlds__const_prop__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
                                                /* binary string jump switch */
                                                transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
                                                transform_hlds__const_prop__hi_1 = (MR_Integer) 4;
                                                do
                                                  {
                                                    transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
                                                    transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ProcName_10, ((&transform_hlds__const_prop_vector_common_3[15 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                                    if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
                                                      {
                                                        switch (((&transform_hlds__const_prop_vector_common_3[15 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                                          default: /*NOTREACHED*/ MR_assert(0);
                                                          case (MR_Integer) 0:
                                                            {
                                                              /* case "*" */
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 * transform_hlds__const_prop__V_148_148);
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
                                                            }
                                                            break;
                                                          case (MR_Integer) 1:
                                                            {
                                                              /* case "+" */
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 + transform_hlds__const_prop__V_148_148);
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
                                                            }
                                                            break;
                                                          case (MR_Integer) 2:
                                                            {
                                                              /* case "-" */
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 - transform_hlds__const_prop__V_148_148);
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
                                                            }
                                                            break;
                                                          case (MR_Integer) 3:
                                                            {
                                                              /* case "/" */
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
                                                              transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  {
                                                                    transform_hlds__const_prop__OutputArgVal_16 = mercury__float__f_slash_2_f_0(transform_hlds__const_prop__V_147_147, transform_hlds__const_prop__V_148_148);
                                                                  }
                                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
                                                                }
                                                            }
                                                            break;
                                                          case (MR_Integer) 4:
                                                            {
                                                              /* case "unchecked_quotient" */
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
                                                              transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 / transform_hlds__const_prop__V_148_148);
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
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
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
    MR_Word transform_hlds__const_prop__V_19_19;
    MR_Word transform_hlds__const_prop__V_20_20;
    MR_Word transform_hlds__const_prop__V_21_21;
    MR_Word transform_hlds__const_prop__V_22_22;
    MR_Word transform_hlds__const_prop__V_23_23;
    MR_Word transform_hlds__const_prop__V_24_24;
    MR_Word transform_hlds__const_prop__V_25_25;
    MR_Word transform_hlds__const_prop__V_26_26;
    MR_Word transform_hlds__const_prop__V_15_15;
    MR_Word transform_hlds__const_prop__V_16_16;

    if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
            transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
            transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
                transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 2)));
                transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 3)));
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                {
                                  transform_hlds__const_prop__CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(transform_hlds__const_prop__XVal_17);
                                }
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
    MR_Word transform_hlds__const_prop__V_37_37;
    MR_Word transform_hlds__const_prop__V_40_40;
    MR_Word transform_hlds__const_prop__V_43_43;
    MR_Word transform_hlds__const_prop__V_44_44;
    MR_Word transform_hlds__const_prop__V_45_45;
    MR_Word transform_hlds__const_prop__V_46_46;
    MR_Float transform_hlds__const_prop__V_47_47;
    MR_Word transform_hlds__const_prop__V_38_38;
    MR_Word transform_hlds__const_prop__V_39_39;
    MR_Word transform_hlds__const_prop__V_41_41;
    MR_Word transform_hlds__const_prop__V_42_42;

    if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
        transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
            transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
            transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));
                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 1)));
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
                              {
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_47_47;
                                transform_hlds__const_prop__succeeded = MR_TRUE;
                              }
                            else
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
                              {
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                transform_hlds__const_prop__OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - transform_hlds__const_prop__V_47_47);
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
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
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

static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__77__1_3_f_0(
  MR_Word transform_hlds__const_prop__VarTypes_12,
  MR_Word transform_hlds__const_prop__InstMap_13,
  MR_Word transform_hlds__const_prop__LambdaHeadVar__1_27)
{
  {
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Word transform_hlds__const_prop__LambdaHeadVar__2_28;
    MR_Word transform_hlds__const_prop__Type_22;
    MR_Word transform_hlds__const_prop__Inst_23;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__const_prop__InstMap_13, transform_hlds__const_prop__LambdaHeadVar__1_27, &transform_hlds__const_prop__Inst_23);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__const_prop__VarTypes_12, transform_hlds__const_prop__LambdaHeadVar__1_27, &transform_hlds__const_prop__Type_22);
    }
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
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));

            {
              parse_tree__prog_data____Compare____cons_id_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_16_16, transform_hlds__const_prop__V_5_5);
            }
          }
        else
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word transform_hlds__const_prop__V_17_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);

        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word transform_hlds__const_prop__V_11_11 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__3_3), (MR_Integer) 0);

            {
              transform_hlds__const_prop____Compare____arg_hlds_info_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_17_17, transform_hlds__const_prop__V_11_11);
            }
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
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_4_4;

        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
            {
              transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__V_3_3, transform_hlds__const_prop__V_4_4);
            }
          }
      }
    else
      {
        MR_Word transform_hlds__const_prop__V_5_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__1_1), (MR_Integer) 0);
        MR_Word transform_hlds__const_prop__V_6_6;

        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_6_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);
            {
              transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_6_6);
            }
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
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__const_prop__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__const_prop__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], &transform_hlds__const_prop__V_10_10, ((MR_Box) (transform_hlds__const_prop__V_4_4)), ((MR_Box) (transform_hlds__const_prop__V_7_7)));
        }
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_10_10 == (MR_Integer) 0);
        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
        if (transform_hlds__const_prop__succeeded)
          *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_10_10;
        else
          {
            MR_Word transform_hlds__const_prop__V_11_11;

            {
              parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__const_prop__V_11_11, transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
            }
            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_11_11 == (MR_Integer) 0);
            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
            if (transform_hlds__const_prop__succeeded)
              *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_11_11;
            else
              {
                parse_tree__prog_data____Compare____mer_inst_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_6_6, transform_hlds__const_prop__V_9_9);
              }
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
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_3_3)), ((MR_Box) (transform_hlds__const_prop__V_6_6)));
        }
        if (transform_hlds__const_prop__succeeded)
          {
            {
              transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__const_prop__V_4_4, transform_hlds__const_prop__V_7_7);
            }
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
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
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Word transform_hlds__const_prop__Delta0_10;
    MR_Word transform_hlds__const_prop__Inst_11;
    MR_Word transform_hlds__const_prop__Delta_12;
    MR_Word transform_hlds__const_prop__V_17_17;
    MR_Word transform_hlds__const_prop__V_18_18;
    MR_Word transform_hlds__const_prop__V_21_21;
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22;
    MR_Word transform_hlds__const_prop__Goal_30;
    MR_Word transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__V_31_31;
    MR_Word transform_hlds__const_prop__V_25_25;
    MR_Word transform_hlds__const_prop__V_26_26;

    {
      hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_32_32, transform_hlds__const_prop__Cons_7, &transform_hlds__const_prop__Goal_30);
    }
    *transform_hlds__const_prop__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 0)));
    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 1)));
    {
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13);
    }
    {
      transform_hlds__const_prop__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_7));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__const_prop__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 0) = ((MR_Box) (transform_hlds__const_prop__V_18_18));
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__const_prop__Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 3) = ((MR_Box) (transform_hlds__const_prop__V_17_17));
    }
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    {
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_21_21, transform_hlds__const_prop__Inst_11, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_12);
    }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_12, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);
    }
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
    MR_bool transform_hlds__const_prop__succeeded;
    MR_Word transform_hlds__const_prop__Delta0_10;
    MR_Word transform_hlds__const_prop__Delta_11;
    MR_Word transform_hlds__const_prop__V_14_14;
    MR_Word transform_hlds__const_prop__V_15_15;
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16;
    MR_Word transform_hlds__const_prop__OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__OutputArgMode_29;
    MR_Word transform_hlds__const_prop__InputArgMode_30;
    MR_Word transform_hlds__const_prop__UniMode_31;
    MR_Word transform_hlds__const_prop__V_37_37;
    MR_Word transform_hlds__const_prop__V_38_38;
    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__V_19_19;
    MR_Word transform_hlds__const_prop__V_20_20;
    MR_Word transform_hlds__const_prop__V_21_21;
    MR_Word transform_hlds__const_prop__V_22_22;

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
      transform_hlds__const_prop__UniMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 0) = ((MR_Box) (transform_hlds__const_prop__OutputArgMode_29));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 1) = ((MR_Box) (transform_hlds__const_prop__InputArgMode_30));
    }
    {
      transform_hlds__const_prop__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_37_37, 0) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
    }
    {
      transform_hlds__const_prop__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 1) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__const_prop__Goal_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__const_prop__V_37_37));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__const_prop__UniMode_31));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__const_prop__V_38_38));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
    }
    {
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12);
    }
    transform_hlds__const_prop__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
    transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
    transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
    {
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_14_14, transform_hlds__const_prop__V_15_15, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_11);
    }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_11, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);
    }
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
    MR_Word transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
    MR_Word transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
    MR_Word transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
    MR_Word transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));

    {
      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_15_15)), ((MR_Box) (transform_hlds__const_prop__V_34_34)));
    }
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
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
        MR_Word transform_hlds__const_prop__V_17_17;
        MR_Word transform_hlds__const_prop__V_18_18;
        MR_Word transform_hlds__const_prop__V_19_19;
        MR_Word transform_hlds__const_prop__V_20_20;
        MR_Word transform_hlds__const_prop__V_21_21;
        MR_Word transform_hlds__const_prop__V_22_22;
        MR_Word transform_hlds__const_prop__V_23_23;
        MR_Word transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
        MR_Word transform_hlds__const_prop__V_7_7;
        MR_Word transform_hlds__const_prop__V_8_8;
        MR_Word transform_hlds__const_prop__V_31_31;
        MR_Word transform_hlds__const_prop__V_32_32;
        MR_Word transform_hlds__const_prop__V_11_11;
        MR_Word transform_hlds__const_prop__V_12_12;
        MR_Word transform_hlds__const_prop__TypeInfo_38_38;

        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 1)));
            transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 2)));
            transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 3)));
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_17_17)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 0)));
                transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 1)));
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 0)));
                    transform_hlds__const_prop__XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 1)));
                    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
                        transform_hlds__const_prop__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 2)));
                        transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 3)));
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
                            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)));
                                transform_hlds__const_prop__YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
                                {
                                  transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                }
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
                                    {
                                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_38, ((MR_Box) (transform_hlds__const_prop__XArgVars_10)), ((MR_Box) (transform_hlds__const_prop__YArgVars_14)));
                                    }
                                  }
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    {
                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                    }
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                    if (!(transform_hlds__const_prop__succeeded))
                                      {
                                        MR_Word transform_hlds__const_prop__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                                        MR_Integer transform_hlds__const_prop__V_24_24;
                                        MR_Integer transform_hlds__const_prop__V_35_35;

                                        {
                                          transform_hlds__const_prop__V_24_24 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__XArgVars_10);
                                        }
                                        {
                                          transform_hlds__const_prop__V_35_35 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__YArgVars_14);
                                        }
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == transform_hlds__const_prop__V_35_35);
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
            MR_String transform_hlds__const_prop__V_8_8;
            MR_String transform_hlds__const_prop__V_9_9;
            MR_Integer transform_hlds__const_prop__V_10_10;

            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__V_8_8 = (MR_String) "private_builtin";
                    transform_hlds__const_prop__V_9_9 = (MR_String) "typed_unify";
                    transform_hlds__const_prop__V_10_10 = (MR_Integer) 1;
                    /* direct tailcall eliminated */
                    {
                      MR_String transform_hlds__const_prop__HeadVar__1__tmp_copy_1 = transform_hlds__const_prop__V_8_8;
                      MR_String transform_hlds__const_prop__HeadVar__2__tmp_copy_2 = transform_hlds__const_prop__V_9_9;
                      MR_Integer transform_hlds__const_prop__HeadVar__3__tmp_copy_3 = transform_hlds__const_prop__V_10_10;

                      transform_hlds__const_prop__HeadVar__3_3 = transform_hlds__const_prop__HeadVar__3__tmp_copy_3;
                      transform_hlds__const_prop__HeadVar__2_2 = transform_hlds__const_prop__HeadVar__2__tmp_copy_2;
                      transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__HeadVar__1__tmp_copy_1;
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
            MR_Word transform_hlds__const_prop__V_19_19;
            MR_Word transform_hlds__const_prop__V_20_20;
            MR_Word transform_hlds__const_prop__V_21_21;
            MR_Word transform_hlds__const_prop__V_22_22;
            MR_Word transform_hlds__const_prop__TypeInfo_36_57;
            MR_Word transform_hlds__const_prop__V_36_36;
            MR_Word transform_hlds__const_prop__V_55_55;
            MR_Word transform_hlds__const_prop__V_46_46;
            MR_Word transform_hlds__const_prop__V_47_47;
            MR_Word transform_hlds__const_prop__V_48_48;
            MR_Word transform_hlds__const_prop__V_49_49;

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
                        transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)));
                            transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
                                transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
                                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
                                        transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
                                        transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
                                        transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
                                        transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
                                        transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
                                        transform_hlds__const_prop__TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
                                        {
                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_36_57, ((MR_Box) (transform_hlds__const_prop__V_36_36)), ((MR_Box) (transform_hlds__const_prop__V_55_55)));
                                        }
                                        if (transform_hlds__const_prop__succeeded)
                                          {
                                            MR_Word transform_hlds__const_prop__V_23_23;
                                            MR_Word transform_hlds__const_prop__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

                                            {
                                              transform_hlds__const_prop__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 1) = ((MR_Box) (transform_hlds__const_prop__V_24_24));
                                            }
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              *transform_hlds__const_prop__Result_5 = base;
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_23_23));
                                            }
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
                                          }
                                        else
                                          {
                                            MR_Word transform_hlds__const_prop__XCtor_30;
                                            MR_Word transform_hlds__const_prop__XArgVars_31;
                                            MR_Word transform_hlds__const_prop__YCtor_34;
                                            MR_Word transform_hlds__const_prop__YArgVars_35;
                                            MR_Word transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
                                            MR_Word transform_hlds__const_prop__V_38_38;
                                            MR_Word transform_hlds__const_prop__V_39_39;
                                            MR_Word transform_hlds__const_prop__V_40_40;
                                            MR_Word transform_hlds__const_prop__V_41_41;
                                            MR_Word transform_hlds__const_prop__V_42_42;
                                            MR_Word transform_hlds__const_prop__V_43_43;
                                            MR_Word transform_hlds__const_prop__V_44_44;
                                            MR_Word transform_hlds__const_prop__Result0_65;
                                            MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
                                            MR_Word transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
                                            MR_Word transform_hlds__const_prop__V_28_28;
                                            MR_Word transform_hlds__const_prop__V_29_29;
                                            MR_Word transform_hlds__const_prop__V_52_52;
                                            MR_Word transform_hlds__const_prop__V_53_53;
                                            MR_Word transform_hlds__const_prop__V_32_32;
                                            MR_Word transform_hlds__const_prop__V_33_33;
                                            MR_Word transform_hlds__const_prop__TypeInfo_38_59;

                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
                                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
                                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_38_38)) == (MR_mktag((MR_Integer) 1)));
                                                if (transform_hlds__const_prop__succeeded)
                                                  {
                                                    transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 0)));
                                                    transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 1)));
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (transform_hlds__const_prop__succeeded)
                                                      {
                                                        transform_hlds__const_prop__XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));
                                                        transform_hlds__const_prop__XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
                                                        transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
                                                        transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
                                                        transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                        if (transform_hlds__const_prop__succeeded)
                                                          {
                                                            transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 1)));
                                                            transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 2)));
                                                            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 3)));
                                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_42_42)) == (MR_mktag((MR_Integer) 1)));
                                                            if (transform_hlds__const_prop__succeeded)
                                                              {
                                                                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 0)));
                                                                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 1)));
                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                if (transform_hlds__const_prop__succeeded)
                                                                  {
                                                                    transform_hlds__const_prop__YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 0)));
                                                                    transform_hlds__const_prop__YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 1)));
                                                                    {
                                                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                    }
                                                                    if (transform_hlds__const_prop__succeeded)
                                                                      {
                                                                        transform_hlds__const_prop__TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
                                                                        {
                                                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_59, ((MR_Box) (transform_hlds__const_prop__XArgVars_31)), ((MR_Box) (transform_hlds__const_prop__YArgVars_35)));
                                                                        }
                                                                      }
                                                                    if (transform_hlds__const_prop__succeeded)
                                                                      {
                                                                        transform_hlds__const_prop__Result0_65 = (MR_Integer) 1;
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
                                                                      }
                                                                    else
                                                                      {
                                                                        {
                                                                          transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                        }
                                                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                                        if (!(transform_hlds__const_prop__succeeded))
                                                                          {
                                                                            MR_Word transform_hlds__const_prop__TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                                                                            MR_Integer transform_hlds__const_prop__V_45_45;
                                                                            MR_Integer transform_hlds__const_prop__V_56_56;

                                                                            {
                                                                              transform_hlds__const_prop__V_45_45 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__XArgVars_31);
                                                                            }
                                                                            {
                                                                              transform_hlds__const_prop__V_56_56 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__YArgVars_35);
                                                                            }
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == transform_hlds__const_prop__V_56_56);
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
                                                                              MR_Word transform_hlds__const_prop__V_61_61;
                                                                              MR_Word transform_hlds__const_prop__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

                                                                              {
                                                                                transform_hlds__const_prop__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
                                                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 1) = ((MR_Box) (transform_hlds__const_prop__V_62_62));
                                                                              }
                                                                              {
                                                                                MR_Word base;
                                                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                *transform_hlds__const_prop__Result_5 = base;
                                                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_61_61));
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
    MR_Word transform_hlds__const_prop__V_246_246;
    MR_Word transform_hlds__const_prop__V_247_247;
    MR_Word transform_hlds__const_prop__V_252_252;
    MR_Word transform_hlds__const_prop__V_253_253;

    if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
            transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)));
                transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "int") == 0))
                  {
                    MR_Word transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__V_263_263;
                    MR_Word transform_hlds__const_prop__V_269_269;
                    MR_Word transform_hlds__const_prop__V_275_275;
                    MR_Word transform_hlds__const_prop__V_280_280;
                    MR_Word transform_hlds__const_prop__V_281_281;
                    MR_Word transform_hlds__const_prop__V_284_284;
                    MR_Word transform_hlds__const_prop__V_285_285;
                    MR_Word transform_hlds__const_prop__V_288_288;
                    MR_Word transform_hlds__const_prop__V_289_289;
                    MR_Word transform_hlds__const_prop__V_292_292;
                    MR_Word transform_hlds__const_prop__V_293_293;
                    MR_Integer transform_hlds__const_prop__V_295_295;
                    MR_Integer transform_hlds__const_prop__V_297_297;
                    MR_Word transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__V_264_264;
                    MR_Word transform_hlds__const_prop__V_265_265;
                    MR_Word transform_hlds__const_prop__V_270_270;
                    MR_Word transform_hlds__const_prop__V_271_271;
                    MR_Word transform_hlds__const_prop__V_276_276;
                    MR_Word transform_hlds__const_prop__V_277_277;
                    MR_Integer transform_hlds__const_prop__lo_0;
                    MR_Integer transform_hlds__const_prop__hi_1;
                    MR_Integer transform_hlds__const_prop__mid_2;
                    MR_Integer transform_hlds__const_prop__result_3;

                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
                        transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
                            transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
                            transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
                                transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
                                transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_269_269)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 0)));
                                    transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_275_275)) == (MR_mktag((MR_Integer) 1)));
                                    if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 0)));
                                        transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 0)));
                                            transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 1)));
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)));
                                                transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_288_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (transform_hlds__const_prop__succeeded)
                                                  {
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (transform_hlds__const_prop__succeeded)
                                                      {
                                                        transform_hlds__const_prop__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (transform_hlds__const_prop__succeeded)
                                                          {
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_293_293)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                            if (transform_hlds__const_prop__succeeded)
                                                              {
                                                                transform_hlds__const_prop__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
                                                                /* binary string jump switch */
                                                                transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
                                                                transform_hlds__const_prop__hi_1 = (MR_Integer) 3;
                                                                do
                                                                  {
                                                                    transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
                                                                    transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_3[7 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                                                    if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
                                                                      {
                                                                        switch (((&transform_hlds__const_prop_vector_common_3[7 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                                                          default: /*NOTREACHED*/ MR_assert(0);
                                                                          case (MR_Integer) 0:
                                                                            {
                                                                              /* case "<" */
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 < transform_hlds__const_prop__V_297_297);
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
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 <= transform_hlds__const_prop__V_297_297);
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
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 > transform_hlds__const_prop__V_297_297);
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
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 >= transform_hlds__const_prop__V_297_297);
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
                                                                    if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
                                                                      transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
                                                                    else
                                                                      transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
                                                                  }
                                                                while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
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
                else
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "float") == 0))
                  {
                    MR_Word transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
                    MR_Word transform_hlds__const_prop__V_260_260;
                    MR_Word transform_hlds__const_prop__V_266_266;
                    MR_Word transform_hlds__const_prop__V_272_272;
                    MR_Word transform_hlds__const_prop__V_278_278;
                    MR_Word transform_hlds__const_prop__V_279_279;
                    MR_Word transform_hlds__const_prop__V_282_282;
                    MR_Word transform_hlds__const_prop__V_283_283;
                    MR_Word transform_hlds__const_prop__V_286_286;
                    MR_Word transform_hlds__const_prop__V_287_287;
                    MR_Word transform_hlds__const_prop__V_290_290;
                    MR_Word transform_hlds__const_prop__V_291_291;
                    MR_Float transform_hlds__const_prop__V_294_294;
                    MR_Float transform_hlds__const_prop__V_296_296;
                    MR_Word transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__V_261_261;
                    MR_Word transform_hlds__const_prop__V_262_262;
                    MR_Word transform_hlds__const_prop__V_267_267;
                    MR_Word transform_hlds__const_prop__V_268_268;
                    MR_Word transform_hlds__const_prop__V_273_273;
                    MR_Word transform_hlds__const_prop__V_274_274;
                    MR_Integer transform_hlds__const_prop__lo_4;
                    MR_Integer transform_hlds__const_prop__hi_5;
                    MR_Integer transform_hlds__const_prop__mid_6;
                    MR_Integer transform_hlds__const_prop__result_7;

                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
                        transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_254_254)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
                            transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 2)));
                            transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 3)));
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
                                transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 2)));
                                transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 3)));
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
                                    transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
                                    if (transform_hlds__const_prop__succeeded)
                                      {
                                        transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
                                        transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_278_278 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__const_prop__succeeded)
                                          {
                                            transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
                                            transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
                                                transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (transform_hlds__const_prop__succeeded)
                                                  {
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_287_287)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                    if (transform_hlds__const_prop__succeeded)
                                                      {
                                                        transform_hlds__const_prop__V_294_294 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (transform_hlds__const_prop__succeeded)
                                                          {
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                            if (transform_hlds__const_prop__succeeded)
                                                              {
                                                                transform_hlds__const_prop__V_296_296 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
                                                                /* binary string jump switch */
                                                                transform_hlds__const_prop__lo_4 = (MR_Integer) 0;
                                                                transform_hlds__const_prop__hi_5 = (MR_Integer) 3;
                                                                do
                                                                  {
                                                                    transform_hlds__const_prop__mid_6 = (((transform_hlds__const_prop__lo_4 + transform_hlds__const_prop__hi_5)) / (MR_Integer) 2);
                                                                    transform_hlds__const_prop__result_7 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_3[11 + transform_hlds__const_prop__mid_6]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                                                    if ((transform_hlds__const_prop__result_7 == (MR_Integer) 0))
                                                                      {
                                                                        switch (((&transform_hlds__const_prop_vector_common_3[11 + transform_hlds__const_prop__mid_6]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                                                          default: /*NOTREACHED*/ MR_assert(0);
                                                                          case (MR_Integer) 0:
                                                                            {
                                                                              /* case "<" */
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 < transform_hlds__const_prop__V_296_296);
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
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 <= transform_hlds__const_prop__V_296_296);
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
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 > transform_hlds__const_prop__V_296_296);
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
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 >= transform_hlds__const_prop__V_296_296);
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
                                                                    if ((transform_hlds__const_prop__result_7 < (MR_Integer) 0))
                                                                      transform_hlds__const_prop__hi_5 = (transform_hlds__const_prop__mid_6 - (MR_Integer) 1);
                                                                    else
                                                                      transform_hlds__const_prop__lo_4 = (transform_hlds__const_prop__mid_6 + (MR_Integer) 1);
                                                                  }
                                                                while ((transform_hlds__const_prop__lo_4 <= transform_hlds__const_prop__hi_5));
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
                else
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
                  {
                    MR_Word transform_hlds__const_prop__X_203;
                    MR_Word transform_hlds__const_prop__Y_204;
                    MR_Word transform_hlds__const_prop__Result0_205;
                    MR_Word transform_hlds__const_prop__V_208_208;
                    MR_Word transform_hlds__const_prop__V_209_209;

                    transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__X_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)));
                            transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__const_prop__succeeded)
                              {
                                transform_hlds__const_prop__Y_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
                                transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__const_prop__succeeded)
                                  {
                                    {
                                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__V_247_247, transform_hlds__const_prop__V_253_253, &transform_hlds__const_prop__Result0_205);
                                    }
                                    if (transform_hlds__const_prop__succeeded)
                                      switch (transform_hlds__const_prop__Result0_205) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          {
                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
                                          }
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__X_203, transform_hlds__const_prop__Y_204, transform_hlds__const_prop__Result_5);
                                          }
                                          break;
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  transform_hlds__const_prop__succeeded = MR_FALSE;
              }
          }
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
              MR_Word transform_hlds__const_prop__V_271_271;
              MR_Word transform_hlds__const_prop__V_272_272;
              MR_Word transform_hlds__const_prop__V_273_273;
              MR_Word transform_hlds__const_prop__V_274_274;
              MR_Word transform_hlds__const_prop__V_275_275;
              MR_Word transform_hlds__const_prop__V_276_276;
              MR_Word transform_hlds__const_prop__V_277_277;
              MR_Word transform_hlds__const_prop__V_278_278;
              MR_Word transform_hlds__const_prop__V_279_279;
              MR_Word transform_hlds__const_prop__V_280_280;
              MR_Word transform_hlds__const_prop__V_281_281;
              MR_Word transform_hlds__const_prop__V_282_282;
              MR_Word transform_hlds__const_prop__V_283_283;
              MR_Word transform_hlds__const_prop__V_284_284;
              MR_Integer transform_hlds__const_prop__XVal_434;
              MR_Integer transform_hlds__const_prop__YVal_435;
              MR_Word transform_hlds__const_prop__BitsPerInt_436;
              MR_Word transform_hlds__const_prop__V_506_506;
              MR_Word transform_hlds__const_prop__V_507_507;
              MR_Word transform_hlds__const_prop__V_57_57;
              MR_Word transform_hlds__const_prop__V_58_58;
              MR_Word transform_hlds__const_prop__V_508_508;
              MR_Word transform_hlds__const_prop__V_509_509;
              MR_Word transform_hlds__const_prop__V_59_59;
              MR_Word transform_hlds__const_prop__V_60_60;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_507_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_271_271)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_276_276 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_273_273, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_273_273, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_275_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_274_274)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_274_274, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_434 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_274_274, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_509_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_277_277)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_278_278)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_278_278, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_278_278, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_280_280)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_280_280, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_435 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_280_280, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_283_283 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_284_284 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_283_283, transform_hlds__const_prop__V_284_284);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_436);
                                                              }
                                                              {
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
                  MR_Word transform_hlds__const_prop__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__V_384_384;
                  MR_Word transform_hlds__const_prop__V_385_385;
                  MR_Word transform_hlds__const_prop__V_386_386;
                  MR_Word transform_hlds__const_prop__V_387_387;
                  MR_Word transform_hlds__const_prop__V_388_388;
                  MR_Word transform_hlds__const_prop__V_389_389;
                  MR_Word transform_hlds__const_prop__V_390_390;
                  MR_Word transform_hlds__const_prop__V_391_391;
                  MR_Word transform_hlds__const_prop__V_392_392;
                  MR_Word transform_hlds__const_prop__V_393_393;
                  MR_Word transform_hlds__const_prop__V_394_394;
                  MR_Word transform_hlds__const_prop__V_395_395;
                  MR_Word transform_hlds__const_prop__V_396_396;
                  MR_Integer transform_hlds__const_prop__XVal_411;
                  MR_Integer transform_hlds__const_prop__YVal_412;
                  MR_Word transform_hlds__const_prop__BitsPerInt_413;
                  MR_Word transform_hlds__const_prop__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__V_24_24;
                  MR_Word transform_hlds__const_prop__V_25_25;
                  MR_Word transform_hlds__const_prop__V_476_476;
                  MR_Word transform_hlds__const_prop__V_477_477;
                  MR_Word transform_hlds__const_prop__V_26_26;
                  MR_Word transform_hlds__const_prop__V_27_27;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_383_383)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_384_384)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_384_384, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_384_384, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_388_388 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_385_385, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_385_385, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_387_387 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_386_386)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_386_386, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_386_386, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_389_389)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_390_390)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_390_390, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_390_390, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_394_394 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_391_391, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_391_391, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_393_393 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_392_392)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_392_392, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_392_392, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_395_395 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_396_396 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_395_395, transform_hlds__const_prop__V_396_396);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_413);
                                                              }
                                                              {
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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer transform_hlds__const_prop__ZVal_32;
                  MR_Word transform_hlds__const_prop__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__V_370_370;
                  MR_Word transform_hlds__const_prop__V_371_371;
                  MR_Word transform_hlds__const_prop__V_372_372;
                  MR_Word transform_hlds__const_prop__V_373_373;
                  MR_Word transform_hlds__const_prop__V_374_374;
                  MR_Word transform_hlds__const_prop__V_375_375;
                  MR_Word transform_hlds__const_prop__V_376_376;
                  MR_Word transform_hlds__const_prop__V_377_377;
                  MR_Word transform_hlds__const_prop__V_378_378;
                  MR_Word transform_hlds__const_prop__V_379_379;
                  MR_Word transform_hlds__const_prop__V_380_380;
                  MR_Word transform_hlds__const_prop__V_381_381;
                  MR_Word transform_hlds__const_prop__V_382_382;
                  MR_Integer transform_hlds__const_prop__YVal_414;
                  MR_Word transform_hlds__const_prop__BitsPerInt_415;
                  MR_Word transform_hlds__const_prop__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__V_28_28;
                  MR_Word transform_hlds__const_prop__V_29_29;
                  MR_Word transform_hlds__const_prop__V_480_480;
                  MR_Word transform_hlds__const_prop__V_481_481;
                  MR_Word transform_hlds__const_prop__V_30_30;
                  MR_Word transform_hlds__const_prop__V_31_31;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_369_369)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_370_370)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_370_370, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_370_370, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_374_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_371_371, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_371_371, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_373_373 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_372_372)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_372_372, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_414 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_372_372, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_375_375)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_376_376)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_376_376, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_376_376, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_380_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_377_377, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_377_377, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_379_379 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_378_378)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_378_378, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__ZVal_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_378_378, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
                                                          transform_hlds__const_prop__V_381_381 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_382_382 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_381_381, transform_hlds__const_prop__V_382_382);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_415);
                                                              }
                                                              {
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
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__const_prop__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__V_356_356;
                  MR_Word transform_hlds__const_prop__V_357_357;
                  MR_Word transform_hlds__const_prop__V_358_358;
                  MR_Word transform_hlds__const_prop__V_359_359;
                  MR_Word transform_hlds__const_prop__V_360_360;
                  MR_Word transform_hlds__const_prop__V_361_361;
                  MR_Word transform_hlds__const_prop__V_362_362;
                  MR_Word transform_hlds__const_prop__V_363_363;
                  MR_Word transform_hlds__const_prop__V_364_364;
                  MR_Word transform_hlds__const_prop__V_365_365;
                  MR_Word transform_hlds__const_prop__V_366_366;
                  MR_Word transform_hlds__const_prop__V_367_367;
                  MR_Word transform_hlds__const_prop__V_368_368;
                  MR_Integer transform_hlds__const_prop__XVal_416;
                  MR_Word transform_hlds__const_prop__BitsPerInt_417;
                  MR_Integer transform_hlds__const_prop__ZVal_418;
                  MR_Word transform_hlds__const_prop__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__V_33_33;
                  MR_Word transform_hlds__const_prop__V_34_34;
                  MR_Word transform_hlds__const_prop__V_484_484;
                  MR_Word transform_hlds__const_prop__V_485_485;
                  MR_Word transform_hlds__const_prop__V_35_35;
                  MR_Word transform_hlds__const_prop__V_36_36;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_355_355)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_356_356)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_356_356, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_356_356, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_360_360 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_357_357, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_357_357, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_359_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_358_358)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_358_358, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_416 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_358_358, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_361_361)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_362_362)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_362_362, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_362_362, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_366_366 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_363_363, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_363_363, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_365_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_364_364)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_364_364, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__ZVal_418 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_364_364, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
                                                          transform_hlds__const_prop__V_367_367 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_368_368 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_367_367, transform_hlds__const_prop__V_368_368);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_417);
                                                              }
                                                              {
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
                  MR_Word transform_hlds__const_prop__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__V_328_328;
                  MR_Word transform_hlds__const_prop__V_329_329;
                  MR_Word transform_hlds__const_prop__V_330_330;
                  MR_Word transform_hlds__const_prop__V_331_331;
                  MR_Word transform_hlds__const_prop__V_332_332;
                  MR_Word transform_hlds__const_prop__V_333_333;
                  MR_Word transform_hlds__const_prop__V_334_334;
                  MR_Word transform_hlds__const_prop__V_335_335;
                  MR_Word transform_hlds__const_prop__V_336_336;
                  MR_Word transform_hlds__const_prop__V_337_337;
                  MR_Word transform_hlds__const_prop__V_338_338;
                  MR_Word transform_hlds__const_prop__V_339_339;
                  MR_Word transform_hlds__const_prop__V_340_340;
                  MR_Integer transform_hlds__const_prop__XVal_422;
                  MR_Integer transform_hlds__const_prop__YVal_423;
                  MR_Word transform_hlds__const_prop__BitsPerInt_424;
                  MR_Word transform_hlds__const_prop__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__V_41_41;
                  MR_Word transform_hlds__const_prop__V_42_42;
                  MR_Word transform_hlds__const_prop__V_492_492;
                  MR_Word transform_hlds__const_prop__V_493_493;
                  MR_Word transform_hlds__const_prop__V_43_43;
                  MR_Word transform_hlds__const_prop__V_44_44;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_327_327)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_328_328)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_328_328, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_328_328, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_332_332 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_329_329, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_329_329, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_331_331 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_330_330)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_333_333)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_334_334)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_334_334, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_334_334, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_338_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_335_335, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_335_335, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_337_337 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_336_336)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_339_339 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_340_340 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_339_339, transform_hlds__const_prop__V_340_340);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_424);
                                                              }
                                                              {
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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__const_prop__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__V_314_314;
                  MR_Word transform_hlds__const_prop__V_315_315;
                  MR_Word transform_hlds__const_prop__V_316_316;
                  MR_Word transform_hlds__const_prop__V_317_317;
                  MR_Word transform_hlds__const_prop__V_318_318;
                  MR_Word transform_hlds__const_prop__V_319_319;
                  MR_Word transform_hlds__const_prop__V_320_320;
                  MR_Word transform_hlds__const_prop__V_321_321;
                  MR_Word transform_hlds__const_prop__V_322_322;
                  MR_Word transform_hlds__const_prop__V_323_323;
                  MR_Word transform_hlds__const_prop__V_324_324;
                  MR_Word transform_hlds__const_prop__V_325_325;
                  MR_Word transform_hlds__const_prop__V_326_326;
                  MR_Integer transform_hlds__const_prop__YVal_425;
                  MR_Word transform_hlds__const_prop__BitsPerInt_426;
                  MR_Integer transform_hlds__const_prop__ZVal_427;
                  MR_Word transform_hlds__const_prop__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__V_45_45;
                  MR_Word transform_hlds__const_prop__V_46_46;
                  MR_Word transform_hlds__const_prop__V_496_496;
                  MR_Word transform_hlds__const_prop__V_497_497;
                  MR_Word transform_hlds__const_prop__V_47_47;
                  MR_Word transform_hlds__const_prop__V_48_48;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_313_313)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_314_314)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_314_314, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_314_314, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_318_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_315_315, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_315_315, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_317_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_316_316)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_316_316, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__YVal_425 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_316_316, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_319_319)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_320_320)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_320_320, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_320_320, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_324_324 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_321_321, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_321_321, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_323_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_322_322)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_322_322, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__ZVal_427 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_322_322, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
                                                          transform_hlds__const_prop__V_325_325 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_326_326 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_325_325, transform_hlds__const_prop__V_326_326);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_426);
                                                              }
                                                              {
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
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__const_prop__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__const_prop__V_300_300;
                  MR_Word transform_hlds__const_prop__V_301_301;
                  MR_Word transform_hlds__const_prop__V_302_302;
                  MR_Word transform_hlds__const_prop__V_303_303;
                  MR_Word transform_hlds__const_prop__V_304_304;
                  MR_Word transform_hlds__const_prop__V_305_305;
                  MR_Word transform_hlds__const_prop__V_306_306;
                  MR_Word transform_hlds__const_prop__V_307_307;
                  MR_Word transform_hlds__const_prop__V_308_308;
                  MR_Word transform_hlds__const_prop__V_309_309;
                  MR_Word transform_hlds__const_prop__V_310_310;
                  MR_Word transform_hlds__const_prop__V_311_311;
                  MR_Word transform_hlds__const_prop__V_312_312;
                  MR_Integer transform_hlds__const_prop__XVal_428;
                  MR_Word transform_hlds__const_prop__BitsPerInt_429;
                  MR_Integer transform_hlds__const_prop__ZVal_430;
                  MR_Word transform_hlds__const_prop__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__const_prop__V_49_49;
                  MR_Word transform_hlds__const_prop__V_50_50;
                  MR_Word transform_hlds__const_prop__V_500_500;
                  MR_Word transform_hlds__const_prop__V_501_501;
                  MR_Word transform_hlds__const_prop__V_51_51;
                  MR_Word transform_hlds__const_prop__V_52_52;

                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_299_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_300_300)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_300_300, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_300_300, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_304_304 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_301_301, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_301_301, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_303_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_302_302)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_302_302, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_428 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_302_302, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_305_305)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_306_306)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_306_306, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_306_306, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_310_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_307_307, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_307_307, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_309_309 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_308_308)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_308_308, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__ZVal_430 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_308_308, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
                                                          transform_hlds__const_prop__V_311_311 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_312_312 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_311_311, transform_hlds__const_prop__V_312_312);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_429);
                                                              }
                                                              {
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            /* case "//" */
            {
              MR_Word transform_hlds__const_prop__V_243_243;
              MR_Word transform_hlds__const_prop__V_244_244;
              MR_Word transform_hlds__const_prop__V_245_245;
              MR_Word transform_hlds__const_prop__V_246_246;
              MR_Word transform_hlds__const_prop__V_247_247;
              MR_Word transform_hlds__const_prop__V_248_248;
              MR_Word transform_hlds__const_prop__V_249_249;
              MR_Word transform_hlds__const_prop__V_250_250;
              MR_Word transform_hlds__const_prop__V_251_251;
              MR_Word transform_hlds__const_prop__V_252_252;
              MR_Word transform_hlds__const_prop__V_253_253;
              MR_Word transform_hlds__const_prop__V_254_254;
              MR_Word transform_hlds__const_prop__V_255_255;
              MR_Word transform_hlds__const_prop__V_256_256;
              MR_Integer transform_hlds__const_prop__XVal_440;
              MR_Integer transform_hlds__const_prop__YVal_441;
              MR_Word transform_hlds__const_prop__BitsPerInt_442;
              MR_Word transform_hlds__const_prop__V_514_514;
              MR_Word transform_hlds__const_prop__V_515_515;
              MR_Word transform_hlds__const_prop__V_65_65;
              MR_Word transform_hlds__const_prop__V_66_66;
              MR_Word transform_hlds__const_prop__V_516_516;
              MR_Word transform_hlds__const_prop__V_517_517;
              MR_Word transform_hlds__const_prop__V_67_67;
              MR_Word transform_hlds__const_prop__V_68_68;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_514_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_515_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_243_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_244_244)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_244_244, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_244_244, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_248_248 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_245_245, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_245_245, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_247_247 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_440 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_516_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_517_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_249_249)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_250_250)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_250_250, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_250_250, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_254_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_251_251, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_251_251, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_253_253 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_441 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_441 == (MR_Integer) 0);
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__V_255_255 = (MR_Integer) 223;
                                                              transform_hlds__const_prop__V_256_256 = (MR_Integer) 0;
                                                              {
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_255_255, transform_hlds__const_prop__V_256_256);
                                                              }
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  {
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_442);
                                                                  }
                                                                  {
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
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "/\" */
            {
              MR_Word transform_hlds__const_prop__V_133_133;
              MR_Word transform_hlds__const_prop__V_134_134;
              MR_Word transform_hlds__const_prop__V_135_135;
              MR_Word transform_hlds__const_prop__V_136_136;
              MR_Word transform_hlds__const_prop__V_137_137;
              MR_Word transform_hlds__const_prop__V_138_138;
              MR_Word transform_hlds__const_prop__V_139_139;
              MR_Word transform_hlds__const_prop__V_140_140;
              MR_Word transform_hlds__const_prop__V_141_141;
              MR_Word transform_hlds__const_prop__V_142_142;
              MR_Word transform_hlds__const_prop__V_143_143;
              MR_Word transform_hlds__const_prop__V_144_144;
              MR_Integer transform_hlds__const_prop__XVal_464;
              MR_Integer transform_hlds__const_prop__YVal_465;
              MR_Word transform_hlds__const_prop__V_546_546;
              MR_Word transform_hlds__const_prop__V_547_547;
              MR_Word transform_hlds__const_prop__V_97_97;
              MR_Word transform_hlds__const_prop__V_98_98;
              MR_Word transform_hlds__const_prop__V_548_548;
              MR_Word transform_hlds__const_prop__V_549_549;
              MR_Word transform_hlds__const_prop__V_99_99;
              MR_Word transform_hlds__const_prop__V_100_100;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_546_546 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_547_547 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_134_134)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_134_134, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_134_134, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_135_135, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_135_135, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_464 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_548_548 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_549_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_139_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_140_140)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_141_141, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_141_141, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_142_142)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_465 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
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
              MR_Word transform_hlds__const_prop__V_173_173;
              MR_Word transform_hlds__const_prop__V_174_174;
              MR_Word transform_hlds__const_prop__V_175_175;
              MR_Word transform_hlds__const_prop__V_176_176;
              MR_Word transform_hlds__const_prop__V_177_177;
              MR_Word transform_hlds__const_prop__V_178_178;
              MR_Word transform_hlds__const_prop__V_179_179;
              MR_Word transform_hlds__const_prop__V_180_180;
              MR_Word transform_hlds__const_prop__V_181_181;
              MR_Word transform_hlds__const_prop__V_182_182;
              MR_Word transform_hlds__const_prop__V_183_183;
              MR_Word transform_hlds__const_prop__V_184_184;
              MR_Word transform_hlds__const_prop__V_185_185;
              MR_Word transform_hlds__const_prop__V_186_186;
              MR_Integer transform_hlds__const_prop__XVal_455;
              MR_Integer transform_hlds__const_prop__YVal_456;
              MR_Word transform_hlds__const_prop__BitsPerInt_457;
              MR_Word transform_hlds__const_prop__V_534_534;
              MR_Word transform_hlds__const_prop__V_535_535;
              MR_Word transform_hlds__const_prop__V_85_85;
              MR_Word transform_hlds__const_prop__V_86_86;
              MR_Word transform_hlds__const_prop__V_536_536;
              MR_Word transform_hlds__const_prop__V_537_537;
              MR_Word transform_hlds__const_prop__V_87_87;
              MR_Word transform_hlds__const_prop__V_88_88;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_534_534 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_535_535 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_173_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_174_174)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_174_174, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_174_174, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_175_175, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_175_175, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_177_177 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_176_176)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_176_176, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_455 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_176_176, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_536_536 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_537_537 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_179_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_180_180)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_180_180, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_180_180, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_181_181, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_181_181, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_182_182)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_182_182, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_456 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_182_182, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_185_185 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_186_186 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_185_185, transform_hlds__const_prop__V_186_186);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_457);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 6:
          {
            /* case ">>" */
            {
              MR_Word transform_hlds__const_prop__V_145_145;
              MR_Word transform_hlds__const_prop__V_146_146;
              MR_Word transform_hlds__const_prop__V_147_147;
              MR_Word transform_hlds__const_prop__V_148_148;
              MR_Word transform_hlds__const_prop__V_149_149;
              MR_Word transform_hlds__const_prop__V_150_150;
              MR_Word transform_hlds__const_prop__V_151_151;
              MR_Word transform_hlds__const_prop__V_152_152;
              MR_Word transform_hlds__const_prop__V_153_153;
              MR_Word transform_hlds__const_prop__V_154_154;
              MR_Word transform_hlds__const_prop__V_155_155;
              MR_Word transform_hlds__const_prop__V_156_156;
              MR_Word transform_hlds__const_prop__V_157_157;
              MR_Word transform_hlds__const_prop__V_158_158;
              MR_Integer transform_hlds__const_prop__XVal_461;
              MR_Integer transform_hlds__const_prop__YVal_462;
              MR_Word transform_hlds__const_prop__BitsPerInt_463;
              MR_Word transform_hlds__const_prop__V_542_542;
              MR_Word transform_hlds__const_prop__V_543_543;
              MR_Word transform_hlds__const_prop__V_93_93;
              MR_Word transform_hlds__const_prop__V_94_94;
              MR_Word transform_hlds__const_prop__V_544_544;
              MR_Word transform_hlds__const_prop__V_545_545;
              MR_Word transform_hlds__const_prop__V_95_95;
              MR_Word transform_hlds__const_prop__V_96_96;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_542_542 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_543_543 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_145_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_150_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_147_147, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_147_147, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_148_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_148_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_461 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_148_148, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_544_544 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_545_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_151_151)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_152_152)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_152_152, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_152_152, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_153_153, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_153_153, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_154_154)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_154_154, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_462 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_154_154, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_157_157 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_158_158 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_157_157, transform_hlds__const_prop__V_158_158);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_463);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "\/" */
            {
              MR_Word transform_hlds__const_prop__V_121_121;
              MR_Word transform_hlds__const_prop__V_122_122;
              MR_Word transform_hlds__const_prop__V_123_123;
              MR_Word transform_hlds__const_prop__V_124_124;
              MR_Word transform_hlds__const_prop__V_125_125;
              MR_Word transform_hlds__const_prop__V_126_126;
              MR_Word transform_hlds__const_prop__V_127_127;
              MR_Word transform_hlds__const_prop__V_128_128;
              MR_Word transform_hlds__const_prop__V_129_129;
              MR_Word transform_hlds__const_prop__V_130_130;
              MR_Word transform_hlds__const_prop__V_131_131;
              MR_Word transform_hlds__const_prop__V_132_132;
              MR_Integer transform_hlds__const_prop__XVal_466;
              MR_Integer transform_hlds__const_prop__YVal_467;
              MR_Word transform_hlds__const_prop__V_550_550;
              MR_Word transform_hlds__const_prop__V_551_551;
              MR_Word transform_hlds__const_prop__V_101_101;
              MR_Word transform_hlds__const_prop__V_102_102;
              MR_Word transform_hlds__const_prop__V_552_552;
              MR_Word transform_hlds__const_prop__V_553_553;
              MR_Word transform_hlds__const_prop__V_103_103;
              MR_Word transform_hlds__const_prop__V_104_104;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_550_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_551_551 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_121_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_122_122)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_122_122, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_122_122, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_126_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_123_123, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_123_123, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_124_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_124_124, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_466 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_124_124, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_552_552 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_553_553 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_128_128)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_128_128, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_128_128, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_129_129, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_129_129, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_467 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
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
              MR_Word transform_hlds__const_prop__V_341_341;
              MR_Word transform_hlds__const_prop__V_342_342;
              MR_Word transform_hlds__const_prop__V_343_343;
              MR_Word transform_hlds__const_prop__V_344_344;
              MR_Word transform_hlds__const_prop__V_345_345;
              MR_Word transform_hlds__const_prop__V_346_346;
              MR_Word transform_hlds__const_prop__V_347_347;
              MR_Word transform_hlds__const_prop__V_348_348;
              MR_Word transform_hlds__const_prop__V_349_349;
              MR_Word transform_hlds__const_prop__V_350_350;
              MR_Word transform_hlds__const_prop__V_351_351;
              MR_Word transform_hlds__const_prop__V_352_352;
              MR_Word transform_hlds__const_prop__V_353_353;
              MR_Word transform_hlds__const_prop__V_354_354;
              MR_Integer transform_hlds__const_prop__XVal_419;
              MR_Integer transform_hlds__const_prop__YVal_420;
              MR_Word transform_hlds__const_prop__BitsPerInt_421;
              MR_Word transform_hlds__const_prop__V_486_486;
              MR_Word transform_hlds__const_prop__V_487_487;
              MR_Word transform_hlds__const_prop__V_37_37;
              MR_Word transform_hlds__const_prop__V_38_38;
              MR_Word transform_hlds__const_prop__V_488_488;
              MR_Word transform_hlds__const_prop__V_489_489;
              MR_Word transform_hlds__const_prop__V_39_39;
              MR_Word transform_hlds__const_prop__V_40_40;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_341_341)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_342_342)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_342_342, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_342_342, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_343_343, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_343_343, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_345_345 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_344_344)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_344_344, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_419 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_344_344, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_347_347)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_348_348)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_348_348, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_348_348, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_349_349, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_349_349, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_351_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_350_350)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_350_350, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_350_350, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_353_353 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_354_354 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_353_353, transform_hlds__const_prop__V_354_354);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_421);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "mod" */
            {
              MR_Word transform_hlds__const_prop__V_229_229;
              MR_Word transform_hlds__const_prop__V_230_230;
              MR_Word transform_hlds__const_prop__V_231_231;
              MR_Word transform_hlds__const_prop__V_232_232;
              MR_Word transform_hlds__const_prop__V_233_233;
              MR_Word transform_hlds__const_prop__V_234_234;
              MR_Word transform_hlds__const_prop__V_235_235;
              MR_Word transform_hlds__const_prop__V_236_236;
              MR_Word transform_hlds__const_prop__V_237_237;
              MR_Word transform_hlds__const_prop__V_238_238;
              MR_Word transform_hlds__const_prop__V_239_239;
              MR_Word transform_hlds__const_prop__V_240_240;
              MR_Word transform_hlds__const_prop__V_241_241;
              MR_Word transform_hlds__const_prop__V_242_242;
              MR_Integer transform_hlds__const_prop__XVal_443;
              MR_Integer transform_hlds__const_prop__YVal_444;
              MR_Word transform_hlds__const_prop__BitsPerInt_445;
              MR_Word transform_hlds__const_prop__V_518_518;
              MR_Word transform_hlds__const_prop__V_519_519;
              MR_Word transform_hlds__const_prop__V_69_69;
              MR_Word transform_hlds__const_prop__V_70_70;
              MR_Word transform_hlds__const_prop__V_520_520;
              MR_Word transform_hlds__const_prop__V_521_521;
              MR_Word transform_hlds__const_prop__V_71_71;
              MR_Word transform_hlds__const_prop__V_72_72;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_518_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_519_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_229_229)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_230_230)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_230_230, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_230_230, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_234_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_231_231, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_231_231, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_233_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_232_232)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_232_232, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_443 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_232_232, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_520_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_521_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_236_236)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_236_236, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_236_236, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_237_237, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_237_237, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_239_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_238_238)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_238_238, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_444 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_238_238, (MR_Integer) 1)));
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_444 == (MR_Integer) 0);
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__V_241_241 = (MR_Integer) 223;
                                                              transform_hlds__const_prop__V_242_242 = (MR_Integer) 0;
                                                              {
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_241_241, transform_hlds__const_prop__V_242_242);
                                                              }
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  {
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_445);
                                                                  }
                                                                  {
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
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "plus" */
            {
              MR_Integer transform_hlds__const_prop__XVal_19;
              MR_Integer transform_hlds__const_prop__YVal_22;
              MR_Word transform_hlds__const_prop__BitsPerInt_23;
              MR_Word transform_hlds__const_prop__V_397_397;
              MR_Word transform_hlds__const_prop__V_398_398;
              MR_Word transform_hlds__const_prop__V_399_399;
              MR_Word transform_hlds__const_prop__V_400_400;
              MR_Word transform_hlds__const_prop__V_401_401;
              MR_Word transform_hlds__const_prop__V_402_402;
              MR_Word transform_hlds__const_prop__V_403_403;
              MR_Word transform_hlds__const_prop__V_404_404;
              MR_Word transform_hlds__const_prop__V_405_405;
              MR_Word transform_hlds__const_prop__V_406_406;
              MR_Word transform_hlds__const_prop__V_407_407;
              MR_Word transform_hlds__const_prop__V_408_408;
              MR_Word transform_hlds__const_prop__V_409_409;
              MR_Word transform_hlds__const_prop__V_410_410;
              MR_Word transform_hlds__const_prop__V_470_470;
              MR_Word transform_hlds__const_prop__V_471_471;
              MR_Word transform_hlds__const_prop__V_17_17;
              MR_Word transform_hlds__const_prop__V_18_18;
              MR_Word transform_hlds__const_prop__V_472_472;
              MR_Word transform_hlds__const_prop__V_473_473;
              MR_Word transform_hlds__const_prop__V_20_20;
              MR_Word transform_hlds__const_prop__V_21_21;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_397_397)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_398_398)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_398_398, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_398_398, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_402_402 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_399_399, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_399_399, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_401_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_400_400)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_400_400, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_400_400, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_403_403)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_404_404)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_404_404, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_404_404, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_408_408 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_405_405, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_405_405, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_407_407 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_406_406)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_406_406, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_406_406, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_409_409 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_410_410 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_409_409, transform_hlds__const_prop__V_410_410);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_23);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "rem" */
            {
              MR_Word transform_hlds__const_prop__V_215_215;
              MR_Word transform_hlds__const_prop__V_216_216;
              MR_Word transform_hlds__const_prop__V_217_217;
              MR_Word transform_hlds__const_prop__V_218_218;
              MR_Word transform_hlds__const_prop__V_219_219;
              MR_Word transform_hlds__const_prop__V_220_220;
              MR_Word transform_hlds__const_prop__V_221_221;
              MR_Word transform_hlds__const_prop__V_222_222;
              MR_Word transform_hlds__const_prop__V_223_223;
              MR_Word transform_hlds__const_prop__V_224_224;
              MR_Word transform_hlds__const_prop__V_225_225;
              MR_Word transform_hlds__const_prop__V_226_226;
              MR_Word transform_hlds__const_prop__V_227_227;
              MR_Word transform_hlds__const_prop__V_228_228;
              MR_Integer transform_hlds__const_prop__XVal_446;
              MR_Integer transform_hlds__const_prop__YVal_447;
              MR_Word transform_hlds__const_prop__BitsPerInt_448;
              MR_Word transform_hlds__const_prop__V_522_522;
              MR_Word transform_hlds__const_prop__V_523_523;
              MR_Word transform_hlds__const_prop__V_73_73;
              MR_Word transform_hlds__const_prop__V_74_74;
              MR_Word transform_hlds__const_prop__V_524_524;
              MR_Word transform_hlds__const_prop__V_525_525;
              MR_Word transform_hlds__const_prop__V_75_75;
              MR_Word transform_hlds__const_prop__V_76_76;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_215_215)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_216_216)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_216_216, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_216_216, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_217_217, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_217_217, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_219_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_218_218)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_218_218, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_446 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_218_218, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_525_525 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_221_221)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_222_222)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_222_222, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_222_222, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_226_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_223_223, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_223_223, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_225_225 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_224_224)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_224_224, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_447 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_224_224, (MR_Integer) 1)));
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_447 == (MR_Integer) 0);
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__V_227_227 = (MR_Integer) 223;
                                                              transform_hlds__const_prop__V_228_228 = (MR_Integer) 0;
                                                              {
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_227_227, transform_hlds__const_prop__V_228_228);
                                                              }
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  {
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_448);
                                                                  }
                                                                  {
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
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "times" */
            {
              MR_Word transform_hlds__const_prop__V_285_285;
              MR_Word transform_hlds__const_prop__V_286_286;
              MR_Word transform_hlds__const_prop__V_287_287;
              MR_Word transform_hlds__const_prop__V_288_288;
              MR_Word transform_hlds__const_prop__V_289_289;
              MR_Word transform_hlds__const_prop__V_290_290;
              MR_Word transform_hlds__const_prop__V_291_291;
              MR_Word transform_hlds__const_prop__V_292_292;
              MR_Word transform_hlds__const_prop__V_293_293;
              MR_Word transform_hlds__const_prop__V_294_294;
              MR_Word transform_hlds__const_prop__V_295_295;
              MR_Word transform_hlds__const_prop__V_296_296;
              MR_Word transform_hlds__const_prop__V_297_297;
              MR_Word transform_hlds__const_prop__V_298_298;
              MR_Integer transform_hlds__const_prop__XVal_431;
              MR_Integer transform_hlds__const_prop__YVal_432;
              MR_Word transform_hlds__const_prop__BitsPerInt_433;
              MR_Word transform_hlds__const_prop__V_502_502;
              MR_Word transform_hlds__const_prop__V_503_503;
              MR_Word transform_hlds__const_prop__V_53_53;
              MR_Word transform_hlds__const_prop__V_54_54;
              MR_Word transform_hlds__const_prop__V_504_504;
              MR_Word transform_hlds__const_prop__V_505_505;
              MR_Word transform_hlds__const_prop__V_55_55;
              MR_Word transform_hlds__const_prop__V_56_56;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_285_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_286_286)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_286_286, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_286_286, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_289_289 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_288_288)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_504_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_505_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_292_292)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_292_292, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_292_292, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_296_296 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_294_294)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_432 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_297_297 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_298_298 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_297_297, transform_hlds__const_prop__V_298_298);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_433);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "unchecked_left_shift" */
            {
              MR_Word transform_hlds__const_prop__V_187_187;
              MR_Word transform_hlds__const_prop__V_188_188;
              MR_Word transform_hlds__const_prop__V_189_189;
              MR_Word transform_hlds__const_prop__V_190_190;
              MR_Word transform_hlds__const_prop__V_191_191;
              MR_Word transform_hlds__const_prop__V_192_192;
              MR_Word transform_hlds__const_prop__V_193_193;
              MR_Word transform_hlds__const_prop__V_194_194;
              MR_Word transform_hlds__const_prop__V_195_195;
              MR_Word transform_hlds__const_prop__V_196_196;
              MR_Word transform_hlds__const_prop__V_197_197;
              MR_Word transform_hlds__const_prop__V_198_198;
              MR_Word transform_hlds__const_prop__V_199_199;
              MR_Word transform_hlds__const_prop__V_200_200;
              MR_Integer transform_hlds__const_prop__XVal_452;
              MR_Integer transform_hlds__const_prop__YVal_453;
              MR_Word transform_hlds__const_prop__BitsPerInt_454;
              MR_Word transform_hlds__const_prop__V_530_530;
              MR_Word transform_hlds__const_prop__V_531_531;
              MR_Word transform_hlds__const_prop__V_81_81;
              MR_Word transform_hlds__const_prop__V_82_82;
              MR_Word transform_hlds__const_prop__V_532_532;
              MR_Word transform_hlds__const_prop__V_533_533;
              MR_Word transform_hlds__const_prop__V_83_83;
              MR_Word transform_hlds__const_prop__V_84_84;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_530_530 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_531_531 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_187_187)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_188_188)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_188_188, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_188_188, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_189_189, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_189_189, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_190_190)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_190_190, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_452 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_190_190, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_532_532 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_533_533 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_193_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_194_194)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_194_194, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_194_194, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_195_195, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_195_195, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_196_196)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_196_196, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_453 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_196_196, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_199_199 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_200_200 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_199_199, transform_hlds__const_prop__V_200_200);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_454);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "unchecked_quotient" */
            {
              MR_Word transform_hlds__const_prop__V_257_257;
              MR_Word transform_hlds__const_prop__V_258_258;
              MR_Word transform_hlds__const_prop__V_259_259;
              MR_Word transform_hlds__const_prop__V_260_260;
              MR_Word transform_hlds__const_prop__V_261_261;
              MR_Word transform_hlds__const_prop__V_262_262;
              MR_Word transform_hlds__const_prop__V_263_263;
              MR_Word transform_hlds__const_prop__V_264_264;
              MR_Word transform_hlds__const_prop__V_265_265;
              MR_Word transform_hlds__const_prop__V_266_266;
              MR_Word transform_hlds__const_prop__V_267_267;
              MR_Word transform_hlds__const_prop__V_268_268;
              MR_Word transform_hlds__const_prop__V_269_269;
              MR_Word transform_hlds__const_prop__V_270_270;
              MR_Integer transform_hlds__const_prop__XVal_437;
              MR_Integer transform_hlds__const_prop__YVal_438;
              MR_Word transform_hlds__const_prop__BitsPerInt_439;
              MR_Word transform_hlds__const_prop__V_510_510;
              MR_Word transform_hlds__const_prop__V_511_511;
              MR_Word transform_hlds__const_prop__V_61_61;
              MR_Word transform_hlds__const_prop__V_62_62;
              MR_Word transform_hlds__const_prop__V_512_512;
              MR_Word transform_hlds__const_prop__V_513_513;
              MR_Word transform_hlds__const_prop__V_63_63;
              MR_Word transform_hlds__const_prop__V_64_64;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_510_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_511_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_258_258)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_258_258, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_258_258, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_259_259, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_259_259, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_261_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_437 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_512_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_513_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_264_264)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_264_264, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_264_264, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_268_268 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_265_265, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_265_265, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_267_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_438 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_438 == (MR_Integer) 0);
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__V_269_269 = (MR_Integer) 223;
                                                              transform_hlds__const_prop__V_270_270 = (MR_Integer) 0;
                                                              {
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_269_269, transform_hlds__const_prop__V_270_270);
                                                              }
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  {
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_439);
                                                                  }
                                                                  {
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
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "unchecked_rem" */
            {
              MR_Word transform_hlds__const_prop__V_201_201;
              MR_Word transform_hlds__const_prop__V_202_202;
              MR_Word transform_hlds__const_prop__V_203_203;
              MR_Word transform_hlds__const_prop__V_204_204;
              MR_Word transform_hlds__const_prop__V_205_205;
              MR_Word transform_hlds__const_prop__V_206_206;
              MR_Word transform_hlds__const_prop__V_207_207;
              MR_Word transform_hlds__const_prop__V_208_208;
              MR_Word transform_hlds__const_prop__V_209_209;
              MR_Word transform_hlds__const_prop__V_210_210;
              MR_Word transform_hlds__const_prop__V_211_211;
              MR_Word transform_hlds__const_prop__V_212_212;
              MR_Word transform_hlds__const_prop__V_213_213;
              MR_Word transform_hlds__const_prop__V_214_214;
              MR_Integer transform_hlds__const_prop__XVal_449;
              MR_Integer transform_hlds__const_prop__YVal_450;
              MR_Word transform_hlds__const_prop__BitsPerInt_451;
              MR_Word transform_hlds__const_prop__V_526_526;
              MR_Word transform_hlds__const_prop__V_527_527;
              MR_Word transform_hlds__const_prop__V_77_77;
              MR_Word transform_hlds__const_prop__V_78_78;
              MR_Word transform_hlds__const_prop__V_528_528;
              MR_Word transform_hlds__const_prop__V_529_529;
              MR_Word transform_hlds__const_prop__V_79_79;
              MR_Word transform_hlds__const_prop__V_80_80;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_526_526 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_527_527 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_201_201)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_202_202)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_202_202, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_202_202, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_206_206 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_203_203, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_203_203, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_205_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_204_204)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_449 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_528_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_529_529 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_207_207)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_212_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_209_209, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_209_209, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_211_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_210_210)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_450 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 1)));
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_450 == (MR_Integer) 0);
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                              transform_hlds__const_prop__V_213_213 = (MR_Integer) 223;
                                                              transform_hlds__const_prop__V_214_214 = (MR_Integer) 0;
                                                              {
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_213_213, transform_hlds__const_prop__V_214_214);
                                                              }
                                                              if (transform_hlds__const_prop__succeeded)
                                                                {
                                                                  {
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_451);
                                                                  }
                                                                  {
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
          }
          break;
        case (MR_Integer) 16:
          {
            /* case "unchecked_right_shift" */
            {
              MR_Word transform_hlds__const_prop__V_159_159;
              MR_Word transform_hlds__const_prop__V_160_160;
              MR_Word transform_hlds__const_prop__V_161_161;
              MR_Word transform_hlds__const_prop__V_162_162;
              MR_Word transform_hlds__const_prop__V_163_163;
              MR_Word transform_hlds__const_prop__V_164_164;
              MR_Word transform_hlds__const_prop__V_165_165;
              MR_Word transform_hlds__const_prop__V_166_166;
              MR_Word transform_hlds__const_prop__V_167_167;
              MR_Word transform_hlds__const_prop__V_168_168;
              MR_Word transform_hlds__const_prop__V_169_169;
              MR_Word transform_hlds__const_prop__V_170_170;
              MR_Word transform_hlds__const_prop__V_171_171;
              MR_Word transform_hlds__const_prop__V_172_172;
              MR_Integer transform_hlds__const_prop__XVal_458;
              MR_Integer transform_hlds__const_prop__YVal_459;
              MR_Word transform_hlds__const_prop__BitsPerInt_460;
              MR_Word transform_hlds__const_prop__V_538_538;
              MR_Word transform_hlds__const_prop__V_539_539;
              MR_Word transform_hlds__const_prop__V_89_89;
              MR_Word transform_hlds__const_prop__V_90_90;
              MR_Word transform_hlds__const_prop__V_540_540;
              MR_Word transform_hlds__const_prop__V_541_541;
              MR_Word transform_hlds__const_prop__V_91_91;
              MR_Word transform_hlds__const_prop__V_92_92;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_539_539 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_159_159)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_160_160)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_160_160, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_160_160, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_161_161, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_161_161, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_162_162)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_458 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_540_540 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_541_541 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_166_166)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_166_166, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_166_166, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_167_167, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_167_167, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_169_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_168_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_459 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 1)));
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
                                                          transform_hlds__const_prop__V_171_171 = (MR_Integer) 223;
                                                          transform_hlds__const_prop__V_172_172 = (MR_Integer) 0;
                                                          {
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_171_171, transform_hlds__const_prop__V_172_172);
                                                          }
                                                          if (transform_hlds__const_prop__succeeded)
                                                            {
                                                              {
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_460);
                                                              }
                                                              {
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
          }
          break;
        case (MR_Integer) 17:
          {
            /* case "xor" */
            {
              MR_Word transform_hlds__const_prop__V_109_109;
              MR_Word transform_hlds__const_prop__V_110_110;
              MR_Word transform_hlds__const_prop__V_111_111;
              MR_Word transform_hlds__const_prop__V_112_112;
              MR_Word transform_hlds__const_prop__V_113_113;
              MR_Word transform_hlds__const_prop__V_114_114;
              MR_Word transform_hlds__const_prop__V_115_115;
              MR_Word transform_hlds__const_prop__V_116_116;
              MR_Word transform_hlds__const_prop__V_117_117;
              MR_Word transform_hlds__const_prop__V_118_118;
              MR_Word transform_hlds__const_prop__V_119_119;
              MR_Word transform_hlds__const_prop__V_120_120;
              MR_Integer transform_hlds__const_prop__XVal_468;
              MR_Integer transform_hlds__const_prop__YVal_469;
              MR_Word transform_hlds__const_prop__V_554_554;
              MR_Word transform_hlds__const_prop__V_555_555;
              MR_Word transform_hlds__const_prop__V_105_105;
              MR_Word transform_hlds__const_prop__V_106_106;
              MR_Word transform_hlds__const_prop__V_556_556;
              MR_Word transform_hlds__const_prop__V_557_557;
              MR_Word transform_hlds__const_prop__V_107_107;
              MR_Word transform_hlds__const_prop__V_108_108;

              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__V_554_554 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
                  transform_hlds__const_prop__V_555_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
                  transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_109_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 1)));
                      transform_hlds__const_prop__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 2)));
                      transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 3)));
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_110_110)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__const_prop__succeeded)
                        {
                          transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_110_110, (MR_Integer) 0)));
                          transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_110_110, (MR_Integer) 1)));
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (transform_hlds__const_prop__succeeded)
                            {
                              transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)));
                              transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (transform_hlds__const_prop__succeeded)
                                {
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_112_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_112_112, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (transform_hlds__const_prop__succeeded)
                                    {
                                      transform_hlds__const_prop__XVal_468 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_112_112, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_556_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
                                      transform_hlds__const_prop__V_557_557 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
                                      transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_115_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                      if (transform_hlds__const_prop__succeeded)
                                        {
                                          transform_hlds__const_prop__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
                                          transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 2)));
                                          transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 3)));
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_116_116)) == (MR_mktag((MR_Integer) 1)));
                                          if (transform_hlds__const_prop__succeeded)
                                            {
                                              transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_116_116, (MR_Integer) 0)));
                                              transform_hlds__const_prop__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_116_116, (MR_Integer) 1)));
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__const_prop__succeeded)
                                                {
                                                  transform_hlds__const_prop__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)));
                                                  transform_hlds__const_prop__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (transform_hlds__const_prop__succeeded)
                                                    {
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_118_118)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_118_118, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                      if (transform_hlds__const_prop__succeeded)
                                                        {
                                                          transform_hlds__const_prop__YVal_469 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_118_118, (MR_Integer) 1)));
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
    MR_Word transform_hlds__const_prop__V_108_108;
    MR_Word transform_hlds__const_prop__V_111_111;
    MR_Word transform_hlds__const_prop__V_114_114;
    MR_Word transform_hlds__const_prop__V_115_115;
    MR_Word transform_hlds__const_prop__V_116_116;
    MR_Word transform_hlds__const_prop__V_117_117;
    MR_Integer transform_hlds__const_prop__V_118_118;
    MR_Word transform_hlds__const_prop__V_109_109;
    MR_Word transform_hlds__const_prop__V_110_110;
    MR_Word transform_hlds__const_prop__V_112_112;
    MR_Word transform_hlds__const_prop__V_113_113;
    MR_Integer transform_hlds__const_prop__lo_0;
    MR_Integer transform_hlds__const_prop__hi_1;
    MR_Integer transform_hlds__const_prop__mid_2;
    MR_Integer transform_hlds__const_prop__result_3;

    if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
        transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
        transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_108_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (transform_hlds__const_prop__succeeded)
          {
            transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 1)));
            transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 2)));
            transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 3)));
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_111_111)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)));
                transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__const_prop__succeeded)
                  {
                    transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)));
                    transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_117_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__const_prop__succeeded)
                          {
                            transform_hlds__const_prop__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
                            /* binary string jump switch */
                            transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
                            transform_hlds__const_prop__hi_1 = (MR_Integer) 6;
                            do
                              {
                                transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
                                transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ProcName_9, ((&transform_hlds__const_prop_vector_common_3[0 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
                                  {
                                    switch (((&transform_hlds__const_prop_vector_common_3[0 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        {
                                          /* case "+" */
                                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                          transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_118_118;
                                          transform_hlds__const_prop__succeeded = MR_TRUE;
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          /* case "-" */
                                          {
                                            MR_Word transform_hlds__const_prop__BitsPerInt_20;
                                            MR_Integer transform_hlds__const_prop__V_77_77;

                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                            {
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 223, (MR_Integer) 0);
                                            }
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                {
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_20);
                                                }
                                                transform_hlds__const_prop__V_77_77 = (MR_Integer) 0;
                                                {
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_20, transform_hlds__const_prop__V_77_77, transform_hlds__const_prop__V_118_118, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 2:
                                        {
                                          /* case "\" */
                                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                          transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__V_118_118);
                                          transform_hlds__const_prop__succeeded = MR_TRUE;
                                        }
                                        break;
                                      case (MR_Integer) 3:
                                        {
                                          /* case "floor_to_multiple_of_bits_per_int" */
                                          {
                                            MR_Word transform_hlds__const_prop__BitsPerInt_87;

                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
                                            {
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 223, (MR_Integer) 0);
                                            }
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                {
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_87);
                                                }
                                                {
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_87, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
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
                                            {
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 223, (MR_Integer) 0);
                                            }
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                {
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_89);
                                                }
                                                {
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__quot_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_89, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
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
                                            {
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 223, (MR_Integer) 0);
                                            }
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                {
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_93);
                                                }
                                                {
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__rem_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_93, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
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
                                            {
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 223, (MR_Integer) 0);
                                            }
                                            if (transform_hlds__const_prop__succeeded)
                                              {
                                                {
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_91);
                                                }
                                                {
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__times_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_91, &transform_hlds__const_prop__OutputArgVal_14);
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
    MR_Word transform_hlds__const_prop__V_73_73;
    MR_Word transform_hlds__const_prop__V_74_74;

    if (transform_hlds__const_prop__succeeded)
      {
        transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 0)));
        transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 1)));
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "int") == 0))
          if ((transform_hlds__const_prop__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Integer transform_hlds__const_prop__OutputArgVal_86;
              MR_Word transform_hlds__const_prop__V_87_87;
              MR_Word transform_hlds__const_prop__V_88_88;
              MR_Word transform_hlds__const_prop__V_89_89;

              transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "bits_per_int") == 0);
              if (transform_hlds__const_prop__succeeded)
                {
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
                  if (transform_hlds__const_prop__succeeded)
                    {
                      *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__V_74_74;
                      transform_hlds__const_prop__V_87_87 = (MR_Integer) 223;
                      transform_hlds__const_prop__V_88_88 = (MR_Integer) 0;
                      {
                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__V_87_87, transform_hlds__const_prop__V_88_88);
                      }
                      if (transform_hlds__const_prop__succeeded)
                        {
                          {
                            libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__V_89_89);
                          }
                          transform_hlds__const_prop__OutputArgVal_86 = (MR_Integer) transform_hlds__const_prop__V_89_89;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *transform_hlds__const_prop__OutputArgVal_14 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_86));
                          }
                          transform_hlds__const_prop__succeeded = MR_TRUE;
                        }
                    }
                }
            }
          else
            {
              MR_Word transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
              MR_Word transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));

              if ((transform_hlds__const_prop__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                }
              else
                {
                  MR_Word transform_hlds__const_prop__Z_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 0)));
                  MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 1)));

                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (transform_hlds__const_prop__succeeded)
                    {
                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__Z_27, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
                }
            }
        else
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "float") == 0))
          {
            MR_Word transform_hlds__const_prop__V_75_75;
            MR_Word transform_hlds__const_prop__V_76_76;

            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
                transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
                if ((transform_hlds__const_prop__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
                else
                  {
                    MR_Word transform_hlds__const_prop__Z_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 1)));

                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__Z_17, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
                  }
              }
          }
        else
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "string") == 0))
          {
            MR_Word transform_hlds__const_prop__V_79_79;
            MR_Word transform_hlds__const_prop__V_80_80;

            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__const_prop__succeeded)
              {
                transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
                transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
                if ((transform_hlds__const_prop__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
                else
                  {
                    MR_Word transform_hlds__const_prop__Z_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 1)));

                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__const_prop__succeeded)
                      {
                        transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__Z_47, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
                  }
              }
          }
        else
          transform_hlds__const_prop__succeeded = MR_FALSE;
      }
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

    {
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__OutputArg_16, &transform_hlds__const_prop__Cons_17);
    }
    if (transform_hlds__const_prop__succeeded)
      {
        MR_Word transform_hlds__const_prop__Delta0_48;
        MR_Word transform_hlds__const_prop__Inst_49;
        MR_Word transform_hlds__const_prop__Delta_50;
        MR_Word transform_hlds__const_prop__V_53_53;
        MR_Word transform_hlds__const_prop__V_54_54;
        MR_Word transform_hlds__const_prop__V_57_57;
        MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58;
        MR_Word transform_hlds__const_prop__Goal_66;
        MR_Word transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
        MR_Word transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
        MR_Word transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
        MR_Word transform_hlds__const_prop__V_67_67;
        MR_Word transform_hlds__const_prop__V_61_61;
        MR_Word transform_hlds__const_prop__V_62_62;

        {
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_68_68, transform_hlds__const_prop__Cons_17, &transform_hlds__const_prop__Goal_66);
        }
        *transform_hlds__const_prop__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 0)));
        transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 1)));
        {
          transform_hlds__const_prop__Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21);
        }
        {
          transform_hlds__const_prop__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_17));
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__const_prop__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 0) = ((MR_Box) (transform_hlds__const_prop__V_54_54));
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__const_prop__Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 3) = ((MR_Box) (transform_hlds__const_prop__V_53_53));
        }
        transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
        transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
        transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
        {
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_57_57, transform_hlds__const_prop__Inst_49, transform_hlds__const_prop__Delta0_48, &transform_hlds__const_prop__Delta_50);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_50, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58);
        }
        {
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
        }
        transform_hlds__const_prop__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__const_prop__Succeeded_18;

        {
          transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_test_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Succeeded_18);
        }
        if (transform_hlds__const_prop__succeeded)
          {
            switch (transform_hlds__const_prop__Succeeded_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
                }
                break;
              case (MR_Integer) 1:
                {
                  *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__true_goal_expr_0_f_0();
                }
                break;
            }
            *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
            transform_hlds__const_prop__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__const_prop__Result_19;

            {
              transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_semidet_call_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Result_19);
            }
            if (transform_hlds__const_prop__succeeded)
              {
                if ((transform_hlds__const_prop__Result_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
                    }
                    *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
                  }
                else
                  {
                    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Result_19, (MR_Integer) 0)));
                    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
                    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));

                    if (((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word transform_hlds__const_prop__Cons_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));

                        {
                          transform_hlds__const_prop__make_construction_goal_5_p_0(transform_hlds__const_prop__V_41_41, transform_hlds__const_prop__Cons_31, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__const_prop__InputArg_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__V_40_40), (MR_Integer) 0);

                        {
                          transform_hlds__const_prop__make_assignment_goal_5_p_0(transform_hlds__const_prop__V_41_41, transform_hlds__const_prop__InputArg_20, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
                      }
                  }
                transform_hlds__const_prop__succeeded = MR_TRUE;
              }
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

    {
      transform_hlds__const_prop__conv0_LambdaHeadVar__2_28 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__77__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__const_prop__wrapper_arg_1));
    }
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
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 3) = ((MR_Box) (transform_hlds__const_prop__VarTypes_12));
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 4) = ((MR_Box) (transform_hlds__const_prop__InstMap_13));
    }
    {
      transform_hlds__const_prop__ArgHldsInfos_24 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], (MR_Word) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0, transform_hlds__const_prop__LookupArgs_20, transform_hlds__const_prop__Args_17);
    }
    {
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_call_2_8_p_0(transform_hlds__const_prop__Globals_11, transform_hlds__const_prop__ModuleName_14, transform_hlds__const_prop__ProcName_15, transform_hlds__const_prop__ModeNum_16, transform_hlds__const_prop__ArgHldsInfos_24, transform_hlds__const_prop__GoalExpr_18, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26);
    }
    return transform_hlds__const_prop__succeeded;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.const_prop. */
