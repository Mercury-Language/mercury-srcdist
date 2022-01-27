/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2021-03-15
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
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.int_emu.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "libs.uint_emu.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




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
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__89__1_3_f_0(
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
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Integer ModeNum_8,
  MR_Word Args_9,
  MR_Word * Result_10);

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
transform_hlds__const_prop__evaluate_det_call_uint_3_mode_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_3_mode_1_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_3_mode_0_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_mode_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_mode_1_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_mode_0_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

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

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_4[1][7];


/* sealed */ struct transform_hlds__const_prop__vector_common_type_2_0_s {
  const MR_String transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_2_0_s transform_hlds__const_prop_vector_common_2[92];

/* sealed */ struct transform_hlds__const_prop__vector_common_type_3_0_s {
  const MR_String transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[64];



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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0))
  },
};


static /* final */ const struct transform_hlds__const_prop__vector_common_type_2_0_s transform_hlds__const_prop_vector_common_2[92] = {
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
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 61 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 62 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 63 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 64 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 65 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 66 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 67 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 68 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 69 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 70 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 71 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 72 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 73 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 74 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 75 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 76 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 77 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 78 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 79 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 80 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 81 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 82 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 83 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 84 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 85 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 86 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 87 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 88 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 89 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 90 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 91 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[64] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     NULL },
  /* row 3 */   {     (MR_String) "uint32" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     (MR_String) "int16" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) "uint8" },
  /* row 14 */   {     (MR_String) "private_builtin" },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "uint" },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     (MR_String) "int8" },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     (MR_String) "uint64" },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     (MR_String) "uint16" },
  /* row 34 */   {     NULL },
  /* row 35 */   {     (MR_String) "float" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     (MR_String) "int32" },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "int64" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3] = {
  (MR_String) "arg_var",
  (MR_String) "arg_type",
  (MR_String) "arg_inst"
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0 = {
  (MR_String) "arg_hlds_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_hlds_info",
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0 },
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0 = {
  (MR_String) "const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0)
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1 = {
  (MR_String) "var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0
};

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_val_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_val_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_val",
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0 },
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0
};

static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__89__1_3_f_0(
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
      LambdaHeadVar__2_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = (MR_Word) ((MR_Word) (HeadVar__2_2));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = (MR_Word) ((MR_Word) (HeadVar__3_3));

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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = (MR_Word) ((MR_Word) (HeadVar__1_1));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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

    conv0_LambdaHeadVar__2_28 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__89__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
      LookupArgs_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LookupArgs_20, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 3) = ((MR_Box) (VarTypes_12));
      MR_hl_field(MR_mktag(0), LookupArgs_20, 4) = ((MR_Box) (InstMap_13));
    }
    ArgHldsInfos_24 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__const_prop_scalar_common_1[0]), (MR_Word) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0), LookupArgs_20, Args_17);
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

      Var_68 = mercury__term__context_init_0_f_0();
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 0))));
      hlds__make_goal__make_const_construction_4_p_0(Var_68, Var_69, Cons_17, &Goal_66);
      *GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_66, (MR_Integer) 0))));
      Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_21);
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Cons_17));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Inst_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Inst_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Inst_49, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Inst_49, 3) = ((MR_Box) (Var_53));
      }
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputArg_16, (MR_Integer) 0))));
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
          if ((Result_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
            *STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_0_21;
          }
          else
          {
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_19, (MR_Integer) 0))));
            MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1))
            {
              MR_Word Cons_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));

              transform_hlds__const_prop__make_construction_goal_5_p_0(Var_41, Cons_31, GoalExpr_14, STATE_VARIABLE_GoalInfo_0_21, STATE_VARIABLE_GoalInfo_22);
            }
            else
            {
              MR_Word InputArg_20 = (MR_Word) ((MR_Word) (Var_40));

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

    Var_32 = mercury__term__context_init_0_f_0();
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0))));
    hlds__make_goal__make_const_construction_4_p_0(Var_32, Var_33, Cons_7, &Goal_30);
    *GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_30, (MR_Integer) 0))));
    Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Cons_7));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Inst_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Inst_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Inst_11, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Inst_11, 3) = ((MR_Box) (Var_17));
    }
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0))));
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
    MR_Word OutVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0))));
    MR_Word InVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 0))));
    MR_Word Inst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 2))));
    MR_Word UnifyMode_29;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      UnifyMode_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_29, 1) = ((MR_Box) (Inst_28));
      MR_hl_field(MR_mktag(0), UnifyMode_29, 2) = ((MR_Box) (Inst_28));
      MR_hl_field(MR_mktag(0), UnifyMode_29, 3) = ((MR_Box) (Inst_28));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (InVar_27));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (OutVar_26));
      MR_hl_field(MR_mktag(2), Var_37, 1) = ((MR_Box) (InVar_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Goal_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OutVar_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_29));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
    }
    Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputArg_6, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputArg_7, (MR_Integer) 2))));
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
    ;
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
          ;
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

      succeeded = (strcmp(HeadVar__2_2, (MR_String) "typed_unify") == 0);
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Args_4 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeOfX_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_4, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_4, (MR_Integer) 1))));
            succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeOfY_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
              succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
                Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
                succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
                  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
                  succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 0))));
                    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 0))));
                    TypeInfo_36_57 = (MR_Word) (&transform_hlds__const_prop_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_57, ((MR_Box) (Var_36)), ((MR_Box) (Var_55)));
                    if (succeeded)
                    {
                      MR_Word Var_23;
                      MR_Word Var_24 = (MR_Word) ((MR_Word) (X_16));

                      {
                        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Y_17));
                        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Var_24));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
                      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeOfX_14, (MR_Integer) 2))));
                      MR_Word Var_38;
                      MR_Word Var_39;
                      MR_Word Var_40;
                      MR_Word Var_41;
                      MR_Word Var_42;
                      MR_Word Var_43;
                      MR_Word Var_44;
                      MR_Word Result0_65;
                      MR_Word TypeInfo_38_59;

                      succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 3))));
                        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
                          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
                          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            XCtor_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
                            XArgVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
                            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeOfY_15, (MR_Integer) 2))));
                            succeeded = ((((MR_tag((MR_Word) Var_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 3))));
                              succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                                Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  YCtor_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
                                  YArgVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
                                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_30, YCtor_34);
                                  if (succeeded)
                                  {
                                    TypeInfo_38_59 = (MR_Word) (&transform_hlds__const_prop_scalar_common_1[1]);
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
                                      MR_Integer Var_45;
                                      MR_Integer Var_56;

                                      Var_45 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), XArgVars_31);
                                      Var_56 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), YArgVars_35);
                                      succeeded = (Var_45 != Var_56);
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
                                        *Result_5 = (MR_Word) ((MR_Unsigned) 0U);
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word Var_61;
                                          MR_Word Var_62 = (MR_Word) ((MR_Word) (X_16));

                                          {
                                            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Y_17));
                                            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
                                          }
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Integer ModeNum_8,
  MR_Word Args_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_696;
    MR_Word Var_697;
    MR_Word Var_698;
    MR_Word Var_699;
    MR_Integer slot_44;
    MR_String str_45;

    if (succeeded)
    {
      Var_697 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
      Var_696 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
      succeeded = (Var_696 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_699 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_696, (MR_Integer) 0))));
        Var_698 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_696, (MR_Integer) 1))));
        succeeded = (ModeNum_8 == (MR_Integer) 0);
        if (succeeded)
        {
          // hashed string jump switch
          ;
          // compute the hash value of the input string
          ;
          slot_44 = ((MR_hash_string6(ModuleName_6)) & (MR_Integer) 63);
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          str_45 = ((&transform_hlds__const_prop_vector_common_3[0 + slot_44]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0;
          // did we find a match?
          ;
          if ((((str_45 != NULL)) && ((strcmp(str_45, ModuleName_6) == 0))))
          {
            // we found a match; dispatch to the corresponding code
            ;
            switch (slot_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                {
                  // case "uint32"
                  ;
                  {
                    MR_Integer lo_32;
                    MR_Integer hi_33;
                    MR_Integer mid_34;
                    MR_Integer result_35;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      // binary string jump switch
                      ;
                      lo_32 = (MR_Integer) 0;
                      hi_33 = (MR_Integer) 3;
                      do
                      {
                        mid_34 = (((MR_Integer) ((MR_Unsigned) lo_32 + (MR_Unsigned) hi_33)) / (MR_Integer) 2);
                        result_35 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[80 + mid_34]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                        if ((result_35 == (MR_Integer) 0))
                        {
                          switch (((&transform_hlds__const_prop_vector_common_2[80 + mid_34]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                // case "<"
                                ;
                                {
                                  MR_Word Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_229;
                                  MR_Word Var_230;
                                  MR_Word Var_231;
                                  MR_Word Var_232;
                                  MR_Word Var_233;
                                  uint32_t YVal_545;

                                  succeeded = ((((MR_tag((MR_Word) Var_228)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_228, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_228, (MR_Integer) 3))));
                                    succeeded = (Var_229 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_229, (MR_Integer) 0))));
                                      Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_229, (MR_Integer) 1))));
                                      Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_230, (MR_Integer) 0))));
                                      Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_230, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_231)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_231, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                      if (succeeded)
                                      {
                                        YVal_545 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_231, (MR_Integer) 1)));
                                        succeeded = (Var_232 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_233 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_545 == UINT32_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_235;
                                              MR_Word Var_236;
                                              MR_Word Var_237;
                                              MR_Word Var_238;
                                              MR_Word Var_239;
                                              uint32_t XVal_542;

                                              succeeded = ((((MR_tag((MR_Word) Var_234)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_234, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_234, (MR_Integer) 3))));
                                                succeeded = (Var_235 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_235, (MR_Integer) 0))));
                                                  Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_235, (MR_Integer) 1))));
                                                  Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_236, (MR_Integer) 0))));
                                                  Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_236, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_237)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_237, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                                  if (succeeded)
                                                  {
                                                    XVal_542 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_237, (MR_Integer) 1)));
                                                    succeeded = (Var_238 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_239 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_542 < YVal_545);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 1:
                              {
                                // case "=<"
                                ;
                                {
                                  MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_217;
                                  MR_Word Var_218;
                                  MR_Word Var_219;
                                  MR_Word Var_220;
                                  MR_Word Var_221;
                                  uint32_t XVal_548;

                                  succeeded = ((((MR_tag((MR_Word) Var_216)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 3))));
                                    succeeded = (Var_217 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_217, (MR_Integer) 0))));
                                      Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_217, (MR_Integer) 1))));
                                      Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 0))));
                                      Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_219)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_219, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                      if (succeeded)
                                      {
                                        XVal_548 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_219, (MR_Integer) 1)));
                                        succeeded = (Var_220 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_221 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_548 == UINT32_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_223;
                                              MR_Word Var_224;
                                              MR_Word Var_225;
                                              MR_Word Var_226;
                                              MR_Word Var_227;
                                              uint32_t YVal_546;

                                              succeeded = ((((MR_tag((MR_Word) Var_222)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_222, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_222, (MR_Integer) 3))));
                                                succeeded = (Var_223 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_223, (MR_Integer) 0))));
                                                  Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_223, (MR_Integer) 1))));
                                                  Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_224, (MR_Integer) 0))));
                                                  Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_224, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_225)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_225, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                                  if (succeeded)
                                                  {
                                                    YVal_546 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_225, (MR_Integer) 1)));
                                                    succeeded = (Var_226 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_227 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_548 <= YVal_546);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 2:
                              {
                                // case ">"
                                ;
                                {
                                  MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_205;
                                  MR_Word Var_206;
                                  MR_Word Var_207;
                                  MR_Word Var_208;
                                  MR_Word Var_209;
                                  uint32_t XVal_552;

                                  succeeded = ((((MR_tag((MR_Word) Var_204)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_204, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_204, (MR_Integer) 3))));
                                    succeeded = (Var_205 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_205, (MR_Integer) 0))));
                                      Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_205, (MR_Integer) 1))));
                                      Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_206, (MR_Integer) 0))));
                                      Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_206, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_207)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_207, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                      if (succeeded)
                                      {
                                        XVal_552 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_207, (MR_Integer) 1)));
                                        succeeded = (Var_208 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_209 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_552 == UINT32_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_211;
                                              MR_Word Var_212;
                                              MR_Word Var_213;
                                              MR_Word Var_214;
                                              MR_Word Var_215;
                                              uint32_t YVal_550;

                                              succeeded = ((((MR_tag((MR_Word) Var_210)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_210, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_210, (MR_Integer) 3))));
                                                succeeded = (Var_211 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_211, (MR_Integer) 0))));
                                                  Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_211, (MR_Integer) 1))));
                                                  Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_212, (MR_Integer) 0))));
                                                  Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_212, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_213)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_213, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                                  if (succeeded)
                                                  {
                                                    YVal_550 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_213, (MR_Integer) 1)));
                                                    succeeded = (Var_214 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_215 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_552 > YVal_550);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                                // case ">="
                                ;
                                {
                                  MR_Word Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_193;
                                  MR_Word Var_194;
                                  MR_Word Var_195;
                                  MR_Word Var_196;
                                  MR_Word Var_197;
                                  uint32_t YVal_557;

                                  succeeded = ((((MR_tag((MR_Word) Var_192)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_192, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_192, (MR_Integer) 3))));
                                    succeeded = (Var_193 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_193, (MR_Integer) 0))));
                                      Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_193, (MR_Integer) 1))));
                                      Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_194, (MR_Integer) 0))));
                                      Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_194, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_195)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_195, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                      if (succeeded)
                                      {
                                        YVal_557 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_195, (MR_Integer) 1)));
                                        succeeded = (Var_196 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_197 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_557 == UINT32_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_199;
                                              MR_Word Var_200;
                                              MR_Word Var_201;
                                              MR_Word Var_202;
                                              MR_Word Var_203;
                                              uint32_t XVal_554;

                                              succeeded = ((((MR_tag((MR_Word) Var_198)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 3))));
                                                succeeded = (Var_199 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_199, (MR_Integer) 0))));
                                                  Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_199, (MR_Integer) 1))));
                                                  Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_200, (MR_Integer) 0))));
                                                  Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_200, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_201)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_201, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                                  if (succeeded)
                                                  {
                                                    XVal_554 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_201, (MR_Integer) 1)));
                                                    succeeded = (Var_202 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_203 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_554 >= YVal_557);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                          // jump out of search loop
                          ;
                          goto label_8;
                        }
                        else
                        if ((result_35 < (MR_Integer) 0))
                          hi_33 = (MR_Integer) ((MR_Unsigned) mid_34 - (MR_Unsigned) 1);
                        else
                          lo_32 = (MR_Integer) ((MR_Unsigned) mid_34 + (MR_Unsigned) 1);
                      }
                      while ((lo_32 <= hi_33));
                      succeeded = MR_FALSE;
                    label_8:;
                    }
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "int16"
                  ;
                  {
                    MR_Word Var_420;
                    MR_Word Var_421;
                    MR_Word Var_422;
                    MR_Word Var_423;
                    MR_Word Var_424;
                    MR_Word Var_425;
                    MR_Word Var_426;
                    MR_Word Var_427;
                    MR_Word Var_428;
                    MR_Word Var_429;
                    MR_Word Var_430;
                    MR_Word Var_431;
                    int16_t XVal_466;
                    int16_t YVal_467;
                    MR_Integer lo_8;
                    MR_Integer hi_9;
                    MR_Integer mid_10;
                    MR_Integer result_11;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_420 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                      succeeded = ((((MR_tag((MR_Word) Var_420)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_420, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_421 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_420, (MR_Integer) 3))));
                        succeeded = (Var_421 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_421, (MR_Integer) 0))));
                          Var_425 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_421, (MR_Integer) 1))));
                          Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_422, (MR_Integer) 0))));
                          Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_422, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_423)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_423, (MR_Integer) 0)))) == (MR_Integer) 9)));
                          if (succeeded)
                          {
                            XVal_466 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_423, (MR_Integer) 1)));
                            succeeded = (Var_424 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = (Var_425 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_426 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                succeeded = ((((MR_tag((MR_Word) Var_426)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_426, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (succeeded)
                                {
                                  Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_426, (MR_Integer) 3))));
                                  succeeded = (Var_427 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_427, (MR_Integer) 0))));
                                    Var_431 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_427, (MR_Integer) 1))));
                                    Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_428, (MR_Integer) 0))));
                                    Var_430 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_428, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_429)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_429, (MR_Integer) 0)))) == (MR_Integer) 9)));
                                    if (succeeded)
                                    {
                                      YVal_467 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_429, (MR_Integer) 1)));
                                      succeeded = (Var_430 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = (Var_431 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          // binary string jump switch
                                          ;
                                          lo_8 = (MR_Integer) 0;
                                          hi_9 = (MR_Integer) 3;
                                          do
                                          {
                                            mid_10 = (((MR_Integer) ((MR_Unsigned) lo_8 + (MR_Unsigned) hi_9)) / (MR_Integer) 2);
                                            result_11 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[56 + mid_10]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                            if ((result_11 == (MR_Integer) 0))
                                            {
                                              switch (((&transform_hlds__const_prop_vector_common_2[56 + mid_10]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  {
                                                    // case "<"
                                                    ;
                                                    succeeded = (XVal_466 < YVal_467);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    // case "=<"
                                                    ;
                                                    succeeded = (XVal_466 <= YVal_467);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  {
                                                    // case ">"
                                                    ;
                                                    succeeded = (XVal_466 > YVal_467);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 3:
                                                  {
                                                    // case ">="
                                                    ;
                                                    succeeded = (XVal_466 >= YVal_467);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                              }
                                              // jump out of search loop
                                              ;
                                              goto label_2;
                                            }
                                            else
                                            if ((result_11 < (MR_Integer) 0))
                                              hi_9 = (MR_Integer) ((MR_Unsigned) mid_10 - (MR_Unsigned) 1);
                                            else
                                              lo_8 = (MR_Integer) ((MR_Unsigned) mid_10 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_8 <= hi_9));
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
              case (MR_Integer) 8:
                {
                  // case "int"
                  ;
                  {
                    MR_Integer XVal_15;
                    MR_Integer YVal_18;
                    MR_Word Var_448;
                    MR_Word Var_449;
                    MR_Word Var_450;
                    MR_Word Var_451;
                    MR_Word Var_452;
                    MR_Word Var_453;
                    MR_Word Var_454;
                    MR_Word Var_455;
                    MR_Word Var_456;
                    MR_Word Var_457;
                    MR_Word Var_458;
                    MR_Word Var_459;
                    MR_Integer lo_4;
                    MR_Integer hi_5;
                    MR_Integer mid_6;
                    MR_Integer result_7;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_448 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                      succeeded = ((((MR_tag((MR_Word) Var_448)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_448, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_449 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_448, (MR_Integer) 3))));
                        succeeded = (Var_449 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_450 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_449, (MR_Integer) 0))));
                          Var_453 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_449, (MR_Integer) 1))));
                          Var_451 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_450, (MR_Integer) 0))));
                          Var_452 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_450, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_451)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_451, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            XVal_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_451, (MR_Integer) 1))));
                            succeeded = (Var_452 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = (Var_453 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_454 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                succeeded = ((((MR_tag((MR_Word) Var_454)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_454, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (succeeded)
                                {
                                  Var_455 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_454, (MR_Integer) 3))));
                                  succeeded = (Var_455 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_456 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_455, (MR_Integer) 0))));
                                    Var_459 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_455, (MR_Integer) 1))));
                                    Var_457 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_456, (MR_Integer) 0))));
                                    Var_458 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_456, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_457)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_457, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                    if (succeeded)
                                    {
                                      YVal_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_457, (MR_Integer) 1))));
                                      succeeded = (Var_458 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = (Var_459 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          // binary string jump switch
                                          ;
                                          lo_4 = (MR_Integer) 0;
                                          hi_5 = (MR_Integer) 3;
                                          do
                                          {
                                            mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
                                            result_7 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[52 + mid_6]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                            if ((result_7 == (MR_Integer) 0))
                                            {
                                              switch (((&transform_hlds__const_prop_vector_common_2[52 + mid_6]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  {
                                                    // case "<"
                                                    ;
                                                    succeeded = (XVal_15 < YVal_18);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    // case "=<"
                                                    ;
                                                    succeeded = (XVal_15 <= YVal_18);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  {
                                                    // case ">"
                                                    ;
                                                    succeeded = (XVal_15 > YVal_18);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 3:
                                                  {
                                                    // case ">="
                                                    ;
                                                    succeeded = (XVal_15 >= YVal_18);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                              }
                                              // jump out of search loop
                                              ;
                                              goto label_1;
                                            }
                                            else
                                            if ((result_7 < (MR_Integer) 0))
                                              hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
                                            else
                                              lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_4 <= hi_5));
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
              case (MR_Integer) 13:
                {
                  // case "uint8"
                  ;
                  {
                    MR_Integer lo_40;
                    MR_Integer hi_41;
                    MR_Integer mid_42;
                    MR_Integer result_43;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      // binary string jump switch
                      ;
                      lo_40 = (MR_Integer) 0;
                      hi_41 = (MR_Integer) 3;
                      do
                      {
                        mid_42 = (((MR_Integer) ((MR_Unsigned) lo_40 + (MR_Unsigned) hi_41)) / (MR_Integer) 2);
                        result_43 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[88 + mid_42]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                        if ((result_43 == (MR_Integer) 0))
                        {
                          switch (((&transform_hlds__const_prop_vector_common_2[88 + mid_42]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                // case "<"
                                ;
                                {
                                  MR_Word Var_328 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_329;
                                  MR_Word Var_330;
                                  MR_Word Var_331;
                                  MR_Word Var_332;
                                  MR_Word Var_333;
                                  uint8_t YVal_501;

                                  succeeded = ((((MR_tag((MR_Word) Var_328)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_328, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_329 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_328, (MR_Integer) 3))));
                                    succeeded = (Var_329 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_330 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_329, (MR_Integer) 0))));
                                      Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_329, (MR_Integer) 1))));
                                      Var_331 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_330, (MR_Integer) 0))));
                                      Var_332 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_330, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_331)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_331, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                      if (succeeded)
                                      {
                                        YVal_501 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_331, (MR_Integer) 1)));
                                        succeeded = (Var_332 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_333 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_501 == UINT8_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_335;
                                              MR_Word Var_336;
                                              MR_Word Var_337;
                                              MR_Word Var_338;
                                              MR_Word Var_339;
                                              uint8_t XVal_498;

                                              succeeded = ((((MR_tag((MR_Word) Var_334)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_334, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_334, (MR_Integer) 3))));
                                                succeeded = (Var_335 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 0))));
                                                  Var_339 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 1))));
                                                  Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_336, (MR_Integer) 0))));
                                                  Var_338 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_336, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_337)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_337, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                                  if (succeeded)
                                                  {
                                                    XVal_498 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_337, (MR_Integer) 1)));
                                                    succeeded = (Var_338 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_339 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_498 < YVal_501);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 1:
                              {
                                // case "=<"
                                ;
                                {
                                  MR_Word Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_317;
                                  MR_Word Var_318;
                                  MR_Word Var_319;
                                  MR_Word Var_320;
                                  MR_Word Var_321;
                                  uint8_t XVal_504;

                                  succeeded = ((((MR_tag((MR_Word) Var_316)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_316, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_316, (MR_Integer) 3))));
                                    succeeded = (Var_317 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_317, (MR_Integer) 0))));
                                      Var_321 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_317, (MR_Integer) 1))));
                                      Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_318, (MR_Integer) 0))));
                                      Var_320 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_318, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_319)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_319, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                      if (succeeded)
                                      {
                                        XVal_504 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_319, (MR_Integer) 1)));
                                        succeeded = (Var_320 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_321 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_504 == UINT8_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_323;
                                              MR_Word Var_324;
                                              MR_Word Var_325;
                                              MR_Word Var_326;
                                              MR_Word Var_327;
                                              uint8_t YVal_502;

                                              succeeded = ((((MR_tag((MR_Word) Var_322)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_322, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_323 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_322, (MR_Integer) 3))));
                                                succeeded = (Var_323 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_324 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_323, (MR_Integer) 0))));
                                                  Var_327 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_323, (MR_Integer) 1))));
                                                  Var_325 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_324, (MR_Integer) 0))));
                                                  Var_326 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_324, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_325)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_325, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                                  if (succeeded)
                                                  {
                                                    YVal_502 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_325, (MR_Integer) 1)));
                                                    succeeded = (Var_326 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_327 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_504 <= YVal_502);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 2:
                              {
                                // case ">"
                                ;
                                {
                                  MR_Word Var_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_305;
                                  MR_Word Var_306;
                                  MR_Word Var_307;
                                  MR_Word Var_308;
                                  MR_Word Var_309;
                                  uint8_t XVal_508;

                                  succeeded = ((((MR_tag((MR_Word) Var_304)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_304, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_304, (MR_Integer) 3))));
                                    succeeded = (Var_305 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_305, (MR_Integer) 0))));
                                      Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_305, (MR_Integer) 1))));
                                      Var_307 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_306, (MR_Integer) 0))));
                                      Var_308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_306, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_307)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_307, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                      if (succeeded)
                                      {
                                        XVal_508 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_307, (MR_Integer) 1)));
                                        succeeded = (Var_308 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_309 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_508 == UINT8_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_311;
                                              MR_Word Var_312;
                                              MR_Word Var_313;
                                              MR_Word Var_314;
                                              MR_Word Var_315;
                                              uint8_t YVal_506;

                                              succeeded = ((((MR_tag((MR_Word) Var_310)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_310, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_310, (MR_Integer) 3))));
                                                succeeded = (Var_311 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 0))));
                                                  Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 1))));
                                                  Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_312, (MR_Integer) 0))));
                                                  Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_312, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_313)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_313, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                                  if (succeeded)
                                                  {
                                                    YVal_506 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_313, (MR_Integer) 1)));
                                                    succeeded = (Var_314 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_315 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_508 > YVal_506);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                                // case ">="
                                ;
                                {
                                  MR_Word Var_292 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_293;
                                  MR_Word Var_294;
                                  MR_Word Var_295;
                                  MR_Word Var_296;
                                  MR_Word Var_297;
                                  uint8_t YVal_513;

                                  succeeded = ((((MR_tag((MR_Word) Var_292)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_292, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_293 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_292, (MR_Integer) 3))));
                                    succeeded = (Var_293 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_294 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_293, (MR_Integer) 0))));
                                      Var_297 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_293, (MR_Integer) 1))));
                                      Var_295 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_294, (MR_Integer) 0))));
                                      Var_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_294, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_295)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_295, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                      if (succeeded)
                                      {
                                        YVal_513 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_295, (MR_Integer) 1)));
                                        succeeded = (Var_296 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_297 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_513 == UINT8_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_298 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_299;
                                              MR_Word Var_300;
                                              MR_Word Var_301;
                                              MR_Word Var_302;
                                              MR_Word Var_303;
                                              uint8_t XVal_510;

                                              succeeded = ((((MR_tag((MR_Word) Var_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_298, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_299 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_298, (MR_Integer) 3))));
                                                succeeded = (Var_299 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_300 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_299, (MR_Integer) 0))));
                                                  Var_303 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_299, (MR_Integer) 1))));
                                                  Var_301 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_300, (MR_Integer) 0))));
                                                  Var_302 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_300, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_301)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_301, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                                  if (succeeded)
                                                  {
                                                    XVal_510 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_301, (MR_Integer) 1)));
                                                    succeeded = (Var_302 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_303 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_510 >= YVal_513);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                          // jump out of search loop
                          ;
                          goto label_10;
                        }
                        else
                        if ((result_43 < (MR_Integer) 0))
                          hi_41 = (MR_Integer) ((MR_Unsigned) mid_42 - (MR_Unsigned) 1);
                        else
                          lo_40 = (MR_Integer) ((MR_Unsigned) mid_42 + (MR_Unsigned) 1);
                      }
                      while ((lo_40 <= hi_41));
                      succeeded = MR_FALSE;
                    label_10:;
                    }
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  // case "private_builtin"
                  ;
                  {
                    MR_Word Result0_121;
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word X_590;
                    MR_Word Y_591;

                    succeeded = (strcmp(PredName_7, (MR_String) "typed_unify") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_698 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        X_590 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_698, (MR_Integer) 0))));
                        Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_698, (MR_Integer) 1))));
                        succeeded = (Var_124 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Y_591 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_124, (MR_Integer) 0))));
                          Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_124, (MR_Integer) 1))));
                          succeeded = (Var_125 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = transform_hlds__const_prop__eval_unify_3_p_0(Var_697, Var_699, &Result0_121);
                            if (succeeded)
                              switch (Result0_121) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    *Result_10 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  succeeded = transform_hlds__const_prop__eval_unify_3_p_0(X_590, Y_591, Result_10);
                                  break;
                              }
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "uint"
                  ;
                  {
                    MR_Integer lo_24;
                    MR_Integer hi_25;
                    MR_Integer mid_26;
                    MR_Integer result_27;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      // binary string jump switch
                      ;
                      lo_24 = (MR_Integer) 0;
                      hi_25 = (MR_Integer) 3;
                      do
                      {
                        mid_26 = (((MR_Integer) ((MR_Unsigned) lo_24 + (MR_Unsigned) hi_25)) / (MR_Integer) 2);
                        result_27 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[72 + mid_26]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                        if ((result_27 == (MR_Integer) 0))
                        {
                          switch (((&transform_hlds__const_prop_vector_common_2[72 + mid_26]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                // case "<"
                                ;
                                {
                                  MR_Word Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_379;
                                  MR_Word Var_380;
                                  MR_Word Var_381;
                                  MR_Word Var_382;
                                  MR_Word Var_383;
                                  MR_Unsigned YVal_479;

                                  succeeded = ((((MR_tag((MR_Word) Var_378)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_378, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_378, (MR_Integer) 3))));
                                    succeeded = (Var_379 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_379, (MR_Integer) 0))));
                                      Var_383 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_379, (MR_Integer) 1))));
                                      Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_380, (MR_Integer) 0))));
                                      Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_380, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_381)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_381, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        YVal_479 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_381, (MR_Integer) 1))));
                                        succeeded = (Var_382 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_383 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_479 == (MR_Unsigned) 0U);
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_384 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_385;
                                              MR_Word Var_386;
                                              MR_Word Var_387;
                                              MR_Word Var_388;
                                              MR_Word Var_389;
                                              MR_Unsigned XVal_476;

                                              succeeded = ((((MR_tag((MR_Word) Var_384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_384, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_384, (MR_Integer) 3))));
                                                succeeded = (Var_385 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_385, (MR_Integer) 0))));
                                                  Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_385, (MR_Integer) 1))));
                                                  Var_387 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_386, (MR_Integer) 0))));
                                                  Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_386, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_387)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_387, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                  if (succeeded)
                                                  {
                                                    XVal_476 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_387, (MR_Integer) 1))));
                                                    succeeded = (Var_388 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_389 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_476 < YVal_479);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 1:
                              {
                                // case "=<"
                                ;
                                {
                                  MR_Word Var_366 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_367;
                                  MR_Word Var_368;
                                  MR_Word Var_369;
                                  MR_Word Var_370;
                                  MR_Word Var_371;
                                  MR_Unsigned XVal_482;

                                  succeeded = ((((MR_tag((MR_Word) Var_366)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_366, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_366, (MR_Integer) 3))));
                                    succeeded = (Var_367 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_367, (MR_Integer) 0))));
                                      Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_367, (MR_Integer) 1))));
                                      Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_368, (MR_Integer) 0))));
                                      Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_368, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_369)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_369, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        XVal_482 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_369, (MR_Integer) 1))));
                                        succeeded = (Var_370 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_371 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_482 == (MR_Unsigned) 0U);
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_373;
                                              MR_Word Var_374;
                                              MR_Word Var_375;
                                              MR_Word Var_376;
                                              MR_Word Var_377;
                                              MR_Unsigned YVal_480;

                                              succeeded = ((((MR_tag((MR_Word) Var_372)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_372, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_372, (MR_Integer) 3))));
                                                succeeded = (Var_373 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_373, (MR_Integer) 0))));
                                                  Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_373, (MR_Integer) 1))));
                                                  Var_375 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_374, (MR_Integer) 0))));
                                                  Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_374, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_375)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_375, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                  if (succeeded)
                                                  {
                                                    YVal_480 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_375, (MR_Integer) 1))));
                                                    succeeded = (Var_376 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_377 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_482 <= YVal_480);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 2:
                              {
                                // case ">"
                                ;
                                {
                                  MR_Word Var_354 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_355;
                                  MR_Word Var_356;
                                  MR_Word Var_357;
                                  MR_Word Var_358;
                                  MR_Word Var_359;
                                  MR_Unsigned XVal_486;

                                  succeeded = ((((MR_tag((MR_Word) Var_354)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_354, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_355 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_354, (MR_Integer) 3))));
                                    succeeded = (Var_355 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_355, (MR_Integer) 0))));
                                      Var_359 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_355, (MR_Integer) 1))));
                                      Var_357 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_356, (MR_Integer) 0))));
                                      Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_356, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_357)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_357, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        XVal_486 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_357, (MR_Integer) 1))));
                                        succeeded = (Var_358 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_359 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_486 == (MR_Unsigned) 0U);
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_360 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_361;
                                              MR_Word Var_362;
                                              MR_Word Var_363;
                                              MR_Word Var_364;
                                              MR_Word Var_365;
                                              MR_Unsigned YVal_484;

                                              succeeded = ((((MR_tag((MR_Word) Var_360)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_360, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_361 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_360, (MR_Integer) 3))));
                                                succeeded = (Var_361 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_362 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_361, (MR_Integer) 0))));
                                                  Var_365 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_361, (MR_Integer) 1))));
                                                  Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_362, (MR_Integer) 0))));
                                                  Var_364 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_362, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_363)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_363, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                  if (succeeded)
                                                  {
                                                    YVal_484 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_363, (MR_Integer) 1))));
                                                    succeeded = (Var_364 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_365 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_486 > YVal_484);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                                // case ">="
                                ;
                                {
                                  MR_Word Var_342 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_343;
                                  MR_Word Var_344;
                                  MR_Word Var_345;
                                  MR_Word Var_346;
                                  MR_Word Var_347;
                                  MR_Unsigned YVal_491;

                                  succeeded = ((((MR_tag((MR_Word) Var_342)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_342, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_343 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_342, (MR_Integer) 3))));
                                    succeeded = (Var_343 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_344 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_343, (MR_Integer) 0))));
                                      Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_343, (MR_Integer) 1))));
                                      Var_345 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_344, (MR_Integer) 0))));
                                      Var_346 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_344, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_345)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_345, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        YVal_491 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_345, (MR_Integer) 1))));
                                        succeeded = (Var_346 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_347 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_491 == (MR_Unsigned) 0U);
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_349;
                                              MR_Word Var_350;
                                              MR_Word Var_351;
                                              MR_Word Var_352;
                                              MR_Word Var_353;
                                              MR_Unsigned XVal_488;

                                              succeeded = ((((MR_tag((MR_Word) Var_348)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_348, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_348, (MR_Integer) 3))));
                                                succeeded = (Var_349 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_350 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_349, (MR_Integer) 0))));
                                                  Var_353 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_349, (MR_Integer) 1))));
                                                  Var_351 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_350, (MR_Integer) 0))));
                                                  Var_352 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_350, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_351)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_351, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                  if (succeeded)
                                                  {
                                                    XVal_488 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_351, (MR_Integer) 1))));
                                                    succeeded = (Var_352 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_353 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_488 >= YVal_491);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                          // jump out of search loop
                          ;
                          goto label_6;
                        }
                        else
                        if ((result_27 < (MR_Integer) 0))
                          hi_25 = (MR_Integer) ((MR_Unsigned) mid_26 - (MR_Unsigned) 1);
                        else
                          lo_24 = (MR_Integer) ((MR_Unsigned) mid_26 + (MR_Unsigned) 1);
                      }
                      while ((lo_24 <= hi_25));
                      succeeded = MR_FALSE;
                    label_6:;
                    }
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "int8"
                  ;
                  {
                    MR_Word Var_434;
                    MR_Word Var_435;
                    MR_Word Var_436;
                    MR_Word Var_437;
                    MR_Word Var_438;
                    MR_Word Var_439;
                    MR_Word Var_440;
                    MR_Word Var_441;
                    MR_Word Var_442;
                    MR_Word Var_443;
                    MR_Word Var_444;
                    MR_Word Var_445;
                    int8_t XVal_462;
                    int8_t YVal_463;
                    MR_Integer lo_20;
                    MR_Integer hi_21;
                    MR_Integer mid_22;
                    MR_Integer result_23;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_434 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                      succeeded = ((((MR_tag((MR_Word) Var_434)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_434, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_435 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_434, (MR_Integer) 3))));
                        succeeded = (Var_435 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_436 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_435, (MR_Integer) 0))));
                          Var_439 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_435, (MR_Integer) 1))));
                          Var_437 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_436, (MR_Integer) 0))));
                          Var_438 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_436, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_437)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_437, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (succeeded)
                          {
                            XVal_462 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_437, (MR_Integer) 1)));
                            succeeded = (Var_438 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = (Var_439 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_440 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                succeeded = ((((MR_tag((MR_Word) Var_440)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_440, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (succeeded)
                                {
                                  Var_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_440, (MR_Integer) 3))));
                                  succeeded = (Var_441 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_441, (MR_Integer) 0))));
                                    Var_445 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_441, (MR_Integer) 1))));
                                    Var_443 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_442, (MR_Integer) 0))));
                                    Var_444 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_442, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_443)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_443, (MR_Integer) 0)))) == (MR_Integer) 7)));
                                    if (succeeded)
                                    {
                                      YVal_463 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_443, (MR_Integer) 1)));
                                      succeeded = (Var_444 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = (Var_445 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          // binary string jump switch
                                          ;
                                          lo_20 = (MR_Integer) 0;
                                          hi_21 = (MR_Integer) 3;
                                          do
                                          {
                                            mid_22 = (((MR_Integer) ((MR_Unsigned) lo_20 + (MR_Unsigned) hi_21)) / (MR_Integer) 2);
                                            result_23 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[68 + mid_22]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                            if ((result_23 == (MR_Integer) 0))
                                            {
                                              switch (((&transform_hlds__const_prop_vector_common_2[68 + mid_22]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  {
                                                    // case "<"
                                                    ;
                                                    succeeded = (XVal_462 < YVal_463);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    // case "=<"
                                                    ;
                                                    succeeded = (XVal_462 <= YVal_463);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  {
                                                    // case ">"
                                                    ;
                                                    succeeded = (XVal_462 > YVal_463);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 3:
                                                  {
                                                    // case ">="
                                                    ;
                                                    succeeded = (XVal_462 >= YVal_463);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                              }
                                              // jump out of search loop
                                              ;
                                              goto label_5;
                                            }
                                            else
                                            if ((result_23 < (MR_Integer) 0))
                                              hi_21 = (MR_Integer) ((MR_Unsigned) mid_22 - (MR_Unsigned) 1);
                                            else
                                              lo_20 = (MR_Integer) ((MR_Unsigned) mid_22 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_20 <= hi_21));
                                          succeeded = MR_FALSE;
                                        label_5:;
                                        }
                                      }
                                    }
                                  }
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
              case (MR_Integer) 28:
                {
                  // case "uint64"
                  ;
                  {
                    MR_Integer lo_36;
                    MR_Integer hi_37;
                    MR_Integer mid_38;
                    MR_Integer result_39;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      // binary string jump switch
                      ;
                      lo_36 = (MR_Integer) 0;
                      hi_37 = (MR_Integer) 3;
                      do
                      {
                        mid_38 = (((MR_Integer) ((MR_Unsigned) lo_36 + (MR_Unsigned) hi_37)) / (MR_Integer) 2);
                        result_39 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[84 + mid_38]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                        if ((result_39 == (MR_Integer) 0))
                        {
                          switch (((&transform_hlds__const_prop_vector_common_2[84 + mid_38]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                // case "<"
                                ;
                                {
                                  MR_Word Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_179;
                                  MR_Word Var_180;
                                  MR_Word Var_181;
                                  MR_Word Var_182;
                                  MR_Word Var_183;
                                  uint64_t YVal_567;

                                  succeeded = ((((MR_tag((MR_Word) Var_178)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_178, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_178, (MR_Integer) 3))));
                                    succeeded = (Var_179 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_179, (MR_Integer) 0))));
                                      Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_179, (MR_Integer) 1))));
                                      Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 0))));
                                      Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_181)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_181, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                      if (succeeded)
                                      {
                                        YVal_567 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_181, (MR_Integer) 1)));
                                        succeeded = (Var_182 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_183 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_567 == UINT64_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_185;
                                              MR_Word Var_186;
                                              MR_Word Var_187;
                                              MR_Word Var_188;
                                              MR_Word Var_189;
                                              uint64_t XVal_564;

                                              succeeded = ((((MR_tag((MR_Word) Var_184)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_184, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_184, (MR_Integer) 3))));
                                                succeeded = (Var_185 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_185, (MR_Integer) 0))));
                                                  Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_185, (MR_Integer) 1))));
                                                  Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_186, (MR_Integer) 0))));
                                                  Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_186, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_187)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_187, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                                  if (succeeded)
                                                  {
                                                    XVal_564 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_187, (MR_Integer) 1)));
                                                    succeeded = (Var_188 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_189 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_564 < YVal_567);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 1:
                              {
                                // case "=<"
                                ;
                                {
                                  MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_167;
                                  MR_Word Var_168;
                                  MR_Word Var_169;
                                  MR_Word Var_170;
                                  MR_Word Var_171;
                                  uint64_t XVal_570;

                                  succeeded = ((((MR_tag((MR_Word) Var_166)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_166, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_166, (MR_Integer) 3))));
                                    succeeded = (Var_167 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_167, (MR_Integer) 0))));
                                      Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_167, (MR_Integer) 1))));
                                      Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 0))));
                                      Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_169)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_169, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                      if (succeeded)
                                      {
                                        XVal_570 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_169, (MR_Integer) 1)));
                                        succeeded = (Var_170 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_171 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_570 == UINT64_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_173;
                                              MR_Word Var_174;
                                              MR_Word Var_175;
                                              MR_Word Var_176;
                                              MR_Word Var_177;
                                              uint64_t YVal_568;

                                              succeeded = ((((MR_tag((MR_Word) Var_172)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_172, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_172, (MR_Integer) 3))));
                                                succeeded = (Var_173 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_173, (MR_Integer) 0))));
                                                  Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_173, (MR_Integer) 1))));
                                                  Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 0))));
                                                  Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_175)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                                  if (succeeded)
                                                  {
                                                    YVal_568 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 1)));
                                                    succeeded = (Var_176 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_177 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_570 <= YVal_568);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 2:
                              {
                                // case ">"
                                ;
                                {
                                  MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_155;
                                  MR_Word Var_156;
                                  MR_Word Var_157;
                                  MR_Word Var_158;
                                  MR_Word Var_159;
                                  uint64_t XVal_574;

                                  succeeded = ((((MR_tag((MR_Word) Var_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_154, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_154, (MR_Integer) 3))));
                                    succeeded = (Var_155 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_155, (MR_Integer) 0))));
                                      Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_155, (MR_Integer) 1))));
                                      Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 0))));
                                      Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_157)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_157, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                      if (succeeded)
                                      {
                                        XVal_574 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_157, (MR_Integer) 1)));
                                        succeeded = (Var_158 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_159 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_574 == UINT64_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_161;
                                              MR_Word Var_162;
                                              MR_Word Var_163;
                                              MR_Word Var_164;
                                              MR_Word Var_165;
                                              uint64_t YVal_572;

                                              succeeded = ((((MR_tag((MR_Word) Var_160)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_160, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_160, (MR_Integer) 3))));
                                                succeeded = (Var_161 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_161, (MR_Integer) 0))));
                                                  Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_161, (MR_Integer) 1))));
                                                  Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_162, (MR_Integer) 0))));
                                                  Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_162, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_163)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_163, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                                  if (succeeded)
                                                  {
                                                    YVal_572 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_163, (MR_Integer) 1)));
                                                    succeeded = (Var_164 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_165 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_574 > YVal_572);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                                // case ">="
                                ;
                                {
                                  MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_143;
                                  MR_Word Var_144;
                                  MR_Word Var_145;
                                  MR_Word Var_146;
                                  MR_Word Var_147;
                                  uint64_t YVal_579;

                                  succeeded = ((((MR_tag((MR_Word) Var_142)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_142, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_142, (MR_Integer) 3))));
                                    succeeded = (Var_143 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 0))));
                                      Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_143, (MR_Integer) 1))));
                                      Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_144, (MR_Integer) 0))));
                                      Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_144, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_145, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                      if (succeeded)
                                      {
                                        YVal_579 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_145, (MR_Integer) 1)));
                                        succeeded = (Var_146 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_147 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_579 == UINT64_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_149;
                                              MR_Word Var_150;
                                              MR_Word Var_151;
                                              MR_Word Var_152;
                                              MR_Word Var_153;
                                              uint64_t XVal_576;

                                              succeeded = ((((MR_tag((MR_Word) Var_148)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_148, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_148, (MR_Integer) 3))));
                                                succeeded = (Var_149 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_149, (MR_Integer) 0))));
                                                  Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_149, (MR_Integer) 1))));
                                                  Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_150, (MR_Integer) 0))));
                                                  Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_150, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_151)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_151, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                                  if (succeeded)
                                                  {
                                                    XVal_576 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_151, (MR_Integer) 1)));
                                                    succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_153 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_576 >= YVal_579);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                          // jump out of search loop
                          ;
                          goto label_9;
                        }
                        else
                        if ((result_39 < (MR_Integer) 0))
                          hi_37 = (MR_Integer) ((MR_Unsigned) mid_38 - (MR_Unsigned) 1);
                        else
                          lo_36 = (MR_Integer) ((MR_Unsigned) mid_38 + (MR_Unsigned) 1);
                      }
                      while ((lo_36 <= hi_37));
                      succeeded = MR_FALSE;
                    label_9:;
                    }
                  }
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "uint16"
                  ;
                  {
                    MR_Integer lo_28;
                    MR_Integer hi_29;
                    MR_Integer mid_30;
                    MR_Integer result_31;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      // binary string jump switch
                      ;
                      lo_28 = (MR_Integer) 0;
                      hi_29 = (MR_Integer) 3;
                      do
                      {
                        mid_30 = (((MR_Integer) ((MR_Unsigned) lo_28 + (MR_Unsigned) hi_29)) / (MR_Integer) 2);
                        result_31 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[76 + mid_30]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                        if ((result_31 == (MR_Integer) 0))
                        {
                          switch (((&transform_hlds__const_prop_vector_common_2[76 + mid_30]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                // case "<"
                                ;
                                {
                                  MR_Word Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_279;
                                  MR_Word Var_280;
                                  MR_Word Var_281;
                                  MR_Word Var_282;
                                  MR_Word Var_283;
                                  uint16_t YVal_523;

                                  succeeded = ((((MR_tag((MR_Word) Var_278)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_278, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_278, (MR_Integer) 3))));
                                    succeeded = (Var_279 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_279, (MR_Integer) 0))));
                                      Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_279, (MR_Integer) 1))));
                                      Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_280, (MR_Integer) 0))));
                                      Var_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_280, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_281)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_281, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                      if (succeeded)
                                      {
                                        YVal_523 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_281, (MR_Integer) 1)));
                                        succeeded = (Var_282 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_283 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_523 == UINT16_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_285;
                                              MR_Word Var_286;
                                              MR_Word Var_287;
                                              MR_Word Var_288;
                                              MR_Word Var_289;
                                              uint16_t XVal_520;

                                              succeeded = ((((MR_tag((MR_Word) Var_284)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_284, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_284, (MR_Integer) 3))));
                                                succeeded = (Var_285 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_286 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_285, (MR_Integer) 0))));
                                                  Var_289 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_285, (MR_Integer) 1))));
                                                  Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_286, (MR_Integer) 0))));
                                                  Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_286, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_287)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_287, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                                  if (succeeded)
                                                  {
                                                    XVal_520 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_287, (MR_Integer) 1)));
                                                    succeeded = (Var_288 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_289 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_520 < YVal_523);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 1:
                              {
                                // case "=<"
                                ;
                                {
                                  MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_267;
                                  MR_Word Var_268;
                                  MR_Word Var_269;
                                  MR_Word Var_270;
                                  MR_Word Var_271;
                                  uint16_t XVal_526;

                                  succeeded = ((((MR_tag((MR_Word) Var_266)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_266, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_266, (MR_Integer) 3))));
                                    succeeded = (Var_267 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 0))));
                                      Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 1))));
                                      Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_268, (MR_Integer) 0))));
                                      Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_268, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_269)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_269, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                      if (succeeded)
                                      {
                                        XVal_526 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_269, (MR_Integer) 1)));
                                        succeeded = (Var_270 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_271 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_526 == UINT16_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_273;
                                              MR_Word Var_274;
                                              MR_Word Var_275;
                                              MR_Word Var_276;
                                              MR_Word Var_277;
                                              uint16_t YVal_524;

                                              succeeded = ((((MR_tag((MR_Word) Var_272)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_272, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_272, (MR_Integer) 3))));
                                                succeeded = (Var_273 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_273, (MR_Integer) 0))));
                                                  Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_273, (MR_Integer) 1))));
                                                  Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_274, (MR_Integer) 0))));
                                                  Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_274, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_275)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_275, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                                  if (succeeded)
                                                  {
                                                    YVal_524 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_275, (MR_Integer) 1)));
                                                    succeeded = (Var_276 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_277 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_526 <= YVal_524);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                            case (MR_Integer) 2:
                              {
                                // case ">"
                                ;
                                {
                                  MR_Word Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                  MR_Word Var_255;
                                  MR_Word Var_256;
                                  MR_Word Var_257;
                                  MR_Word Var_258;
                                  MR_Word Var_259;
                                  uint16_t XVal_530;

                                  succeeded = ((((MR_tag((MR_Word) Var_254)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_254, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_254, (MR_Integer) 3))));
                                    succeeded = (Var_255 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_255, (MR_Integer) 0))));
                                      Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_255, (MR_Integer) 1))));
                                      Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_256, (MR_Integer) 0))));
                                      Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_256, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_257)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_257, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                      if (succeeded)
                                      {
                                        XVal_530 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_257, (MR_Integer) 1)));
                                        succeeded = (Var_258 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_259 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (XVal_530 == UINT16_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                              MR_Word Var_261;
                                              MR_Word Var_262;
                                              MR_Word Var_263;
                                              MR_Word Var_264;
                                              MR_Word Var_265;
                                              uint16_t YVal_528;

                                              succeeded = ((((MR_tag((MR_Word) Var_260)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_260, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_260, (MR_Integer) 3))));
                                                succeeded = (Var_261 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_261, (MR_Integer) 0))));
                                                  Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_261, (MR_Integer) 1))));
                                                  Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_262, (MR_Integer) 0))));
                                                  Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_262, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_263)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_263, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                                  if (succeeded)
                                                  {
                                                    YVal_528 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_263, (MR_Integer) 1)));
                                                    succeeded = (Var_264 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_265 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_530 > YVal_528);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                                // case ">="
                                ;
                                {
                                  MR_Word Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                  MR_Word Var_243;
                                  MR_Word Var_244;
                                  MR_Word Var_245;
                                  MR_Word Var_246;
                                  MR_Word Var_247;
                                  uint16_t YVal_535;

                                  succeeded = ((((MR_tag((MR_Word) Var_242)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_242, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_242, (MR_Integer) 3))));
                                    succeeded = (Var_243 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_243, (MR_Integer) 0))));
                                      Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_243, (MR_Integer) 1))));
                                      Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_244, (MR_Integer) 0))));
                                      Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_244, (MR_Integer) 1))));
                                      succeeded = ((((MR_tag((MR_Word) Var_245)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_245, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                      if (succeeded)
                                      {
                                        YVal_535 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_245, (MR_Integer) 1)));
                                        succeeded = (Var_246 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = (Var_247 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = (YVal_535 == UINT16_C(0));
                                            if (succeeded)
                                            {
                                              *Result_10 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              MR_Word Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                                              MR_Word Var_249;
                                              MR_Word Var_250;
                                              MR_Word Var_251;
                                              MR_Word Var_252;
                                              MR_Word Var_253;
                                              uint16_t XVal_532;

                                              succeeded = ((((MR_tag((MR_Word) Var_248)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_248, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_248, (MR_Integer) 3))));
                                                succeeded = (Var_249 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_249, (MR_Integer) 0))));
                                                  Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_249, (MR_Integer) 1))));
                                                  Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_250, (MR_Integer) 0))));
                                                  Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_250, (MR_Integer) 1))));
                                                  succeeded = ((((MR_tag((MR_Word) Var_251)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_251, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                                  if (succeeded)
                                                  {
                                                    XVal_532 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_251, (MR_Integer) 1)));
                                                    succeeded = (Var_252 == (MR_Word) ((MR_Unsigned) 0U));
                                                    if (succeeded)
                                                    {
                                                      succeeded = (Var_253 == (MR_Word) ((MR_Unsigned) 0U));
                                                      if (succeeded)
                                                      {
                                                        succeeded = (XVal_532 >= YVal_535);
                                                        if (succeeded)
                                                          *Result_10 = (MR_Integer) 1;
                                                        else
                                                          *Result_10 = (MR_Integer) 0;
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
                          // jump out of search loop
                          ;
                          goto label_7;
                        }
                        else
                        if ((result_31 < (MR_Integer) 0))
                          hi_29 = (MR_Integer) ((MR_Unsigned) mid_30 - (MR_Unsigned) 1);
                        else
                          lo_28 = (MR_Integer) ((MR_Unsigned) mid_30 + (MR_Unsigned) 1);
                      }
                      while ((lo_28 <= hi_29));
                      succeeded = MR_FALSE;
                    label_7:;
                    }
                  }
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "float"
                  ;
                  {
                    MR_Word Var_128;
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
                    MR_Float XVal_588;
                    MR_Float YVal_589;
                    MR_Integer lo_0;
                    MR_Integer hi_1;
                    MR_Integer mid_2;
                    MR_Integer result_3;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                      succeeded = ((((MR_tag((MR_Word) Var_128)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_128, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_128, (MR_Integer) 3))));
                        succeeded = (Var_129 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_129, (MR_Integer) 0))));
                          Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_129, (MR_Integer) 1))));
                          Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 0))));
                          Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_131)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_131, (MR_Integer) 0)))) == (MR_Integer) 15)));
                          if (succeeded)
                          {
                            XVal_588 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_131, (MR_Integer) 1)));
                            succeeded = (Var_132 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = (Var_133 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                succeeded = ((((MR_tag((MR_Word) Var_134)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_134, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (succeeded)
                                {
                                  Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_134, (MR_Integer) 3))));
                                  succeeded = (Var_135 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));
                                    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 1))));
                                    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_136, (MR_Integer) 0))));
                                    Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_136, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_137)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_137, (MR_Integer) 0)))) == (MR_Integer) 15)));
                                    if (succeeded)
                                    {
                                      YVal_589 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_137, (MR_Integer) 1)));
                                      succeeded = (Var_138 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = (Var_139 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          // binary string jump switch
                                          ;
                                          lo_0 = (MR_Integer) 0;
                                          hi_1 = (MR_Integer) 3;
                                          do
                                          {
                                            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                                            result_3 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[48 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                            if ((result_3 == (MR_Integer) 0))
                                            {
                                              switch (((&transform_hlds__const_prop_vector_common_2[48 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  {
                                                    // case "<"
                                                    ;
                                                    succeeded = (XVal_588 < YVal_589);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    // case "=<"
                                                    ;
                                                    succeeded = (XVal_588 <= YVal_589);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  {
                                                    // case ">"
                                                    ;
                                                    succeeded = (XVal_588 > YVal_589);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 3:
                                                  {
                                                    // case ">="
                                                    ;
                                                    succeeded = (XVal_588 >= YVal_589);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                              }
                                              // jump out of search loop
                                              ;
                                              goto label_0;
                                            }
                                            else
                                            if ((result_3 < (MR_Integer) 0))
                                              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                                            else
                                              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_0 <= hi_1));
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
              case (MR_Integer) 37:
                {
                  // case "int32"
                  ;
                  {
                    MR_Word Var_406;
                    MR_Word Var_407;
                    MR_Word Var_408;
                    MR_Word Var_409;
                    MR_Word Var_410;
                    MR_Word Var_411;
                    MR_Word Var_412;
                    MR_Word Var_413;
                    MR_Word Var_414;
                    MR_Word Var_415;
                    MR_Word Var_416;
                    MR_Word Var_417;
                    int32_t XVal_470;
                    int32_t YVal_471;
                    MR_Integer lo_12;
                    MR_Integer hi_13;
                    MR_Integer mid_14;
                    MR_Integer result_15;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                      succeeded = ((((MR_tag((MR_Word) Var_406)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_406, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_406, (MR_Integer) 3))));
                        succeeded = (Var_407 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_407, (MR_Integer) 0))));
                          Var_411 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_407, (MR_Integer) 1))));
                          Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_408, (MR_Integer) 0))));
                          Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_408, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_409)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_409, (MR_Integer) 0)))) == (MR_Integer) 11)));
                          if (succeeded)
                          {
                            XVal_470 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_409, (MR_Integer) 1)));
                            succeeded = (Var_410 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = (Var_411 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_412 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                succeeded = ((((MR_tag((MR_Word) Var_412)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_412, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (succeeded)
                                {
                                  Var_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_412, (MR_Integer) 3))));
                                  succeeded = (Var_413 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_414 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_413, (MR_Integer) 0))));
                                    Var_417 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_413, (MR_Integer) 1))));
                                    Var_415 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_414, (MR_Integer) 0))));
                                    Var_416 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_414, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_415)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_415, (MR_Integer) 0)))) == (MR_Integer) 11)));
                                    if (succeeded)
                                    {
                                      YVal_471 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_415, (MR_Integer) 1)));
                                      succeeded = (Var_416 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = (Var_417 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          // binary string jump switch
                                          ;
                                          lo_12 = (MR_Integer) 0;
                                          hi_13 = (MR_Integer) 3;
                                          do
                                          {
                                            mid_14 = (((MR_Integer) ((MR_Unsigned) lo_12 + (MR_Unsigned) hi_13)) / (MR_Integer) 2);
                                            result_15 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[60 + mid_14]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                            if ((result_15 == (MR_Integer) 0))
                                            {
                                              switch (((&transform_hlds__const_prop_vector_common_2[60 + mid_14]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  {
                                                    // case "<"
                                                    ;
                                                    succeeded = (XVal_470 < YVal_471);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    // case "=<"
                                                    ;
                                                    succeeded = (XVal_470 <= YVal_471);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  {
                                                    // case ">"
                                                    ;
                                                    succeeded = (XVal_470 > YVal_471);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 3:
                                                  {
                                                    // case ">="
                                                    ;
                                                    succeeded = (XVal_470 >= YVal_471);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                              }
                                              // jump out of search loop
                                              ;
                                              goto label_3;
                                            }
                                            else
                                            if ((result_15 < (MR_Integer) 0))
                                              hi_13 = (MR_Integer) ((MR_Unsigned) mid_14 - (MR_Unsigned) 1);
                                            else
                                              lo_12 = (MR_Integer) ((MR_Unsigned) mid_14 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_12 <= hi_13));
                                          succeeded = MR_FALSE;
                                        label_3:;
                                        }
                                      }
                                    }
                                  }
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
              case (MR_Integer) 48:
                {
                  // case "int64"
                  ;
                  {
                    MR_Word Var_392;
                    MR_Word Var_393;
                    MR_Word Var_394;
                    MR_Word Var_395;
                    MR_Word Var_396;
                    MR_Word Var_397;
                    MR_Word Var_398;
                    MR_Word Var_399;
                    MR_Word Var_400;
                    MR_Word Var_401;
                    MR_Word Var_402;
                    MR_Word Var_403;
                    int64_t XVal_474;
                    int64_t YVal_475;
                    MR_Integer lo_16;
                    MR_Integer hi_17;
                    MR_Integer mid_18;
                    MR_Integer result_19;

                    succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_697, (MR_Integer) 2))));
                      succeeded = ((((MR_tag((MR_Word) Var_392)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_392, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_392, (MR_Integer) 3))));
                        succeeded = (Var_393 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_394 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_393, (MR_Integer) 0))));
                          Var_397 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_393, (MR_Integer) 1))));
                          Var_395 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_394, (MR_Integer) 0))));
                          Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_394, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_395)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_395, (MR_Integer) 0)))) == (MR_Integer) 13)));
                          if (succeeded)
                          {
                            XVal_474 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Var_395, (MR_Integer) 1)));
                            succeeded = (Var_396 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = (Var_397 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_699, (MR_Integer) 2))));
                                succeeded = ((((MR_tag((MR_Word) Var_398)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_398, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (succeeded)
                                {
                                  Var_399 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_398, (MR_Integer) 3))));
                                  succeeded = (Var_399 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_399, (MR_Integer) 0))));
                                    Var_403 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_399, (MR_Integer) 1))));
                                    Var_401 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_400, (MR_Integer) 0))));
                                    Var_402 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_400, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_401)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_401, (MR_Integer) 0)))) == (MR_Integer) 13)));
                                    if (succeeded)
                                    {
                                      YVal_475 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Var_401, (MR_Integer) 1)));
                                      succeeded = (Var_402 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = (Var_403 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          // binary string jump switch
                                          ;
                                          lo_16 = (MR_Integer) 0;
                                          hi_17 = (MR_Integer) 3;
                                          do
                                          {
                                            mid_18 = (((MR_Integer) ((MR_Unsigned) lo_16 + (MR_Unsigned) hi_17)) / (MR_Integer) 2);
                                            result_19 = MR_strcmp(PredName_7, ((&transform_hlds__const_prop_vector_common_2[64 + mid_18]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                                            if ((result_19 == (MR_Integer) 0))
                                            {
                                              switch (((&transform_hlds__const_prop_vector_common_2[64 + mid_18]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  {
                                                    // case "<"
                                                    ;
                                                    succeeded = (XVal_474 < YVal_475);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    // case "=<"
                                                    ;
                                                    succeeded = (XVal_474 <= YVal_475);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  {
                                                    // case ">"
                                                    ;
                                                    succeeded = (XVal_474 > YVal_475);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                                case (MR_Integer) 3:
                                                  {
                                                    // case ">="
                                                    ;
                                                    succeeded = (XVal_474 >= YVal_475);
                                                    if (succeeded)
                                                      *Result_10 = (MR_Integer) 1;
                                                    else
                                                      *Result_10 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  break;
                                              }
                                              // jump out of search loop
                                              ;
                                              goto label_4;
                                            }
                                            else
                                            if ((result_19 < (MR_Integer) 0))
                                              hi_17 = (MR_Integer) ((MR_Unsigned) mid_18 - (MR_Unsigned) 1);
                                            else
                                              lo_16 = (MR_Integer) ((MR_Unsigned) mid_18 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_16 <= hi_17));
                                          succeeded = MR_FALSE;
                                        label_4:;
                                        }
                                      }
                                    }
                                  }
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
            ;
            goto label_11;
          }
          succeeded = MR_FALSE;
        label_11:;
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
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 0))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_1[0]), ((MR_Box) (Var_15)), ((MR_Box) (Var_34)));
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
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 2))));
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word TypeInfo_38_38;

      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 3))));
        succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            XCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
            XArgVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_5, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 3))));
              succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
                Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
                succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  YCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
                  YArgVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_9, YCtor_13);
                  if (succeeded)
                  {
                    TypeInfo_38_38 = (MR_Word) (&transform_hlds__const_prop_scalar_common_1[1]);
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
                      MR_Integer Var_24;
                      MR_Integer Var_35;

                      Var_24 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), XArgVars_10);
                      Var_35 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), YArgVars_14);
                      succeeded = (Var_24 != Var_35);
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
    MR_bool succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
      // binary string jump switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(ModuleName_9, ((&transform_hlds__const_prop_vector_common_2[44 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&transform_hlds__const_prop_vector_common_2[44 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "float"
                ;
                {
                  MR_Word Var_101;
                  MR_Word Var_102;

                  succeeded = (Var_99 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0))));
                    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1))));
                    if ((Var_101 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(ProcName_10, ModeNum_11, Var_100, Var_102, OutputArg_13, OutputArgVal_14);
                    else
                    {
                      MR_Word Z_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 0))));
                      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 1))));

                      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
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
                ;
                if ((Var_99 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = transform_hlds__const_prop__evaluate_det_call_int_1_6_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, OutputArg_13, OutputArgVal_14);
                else
                {
                  MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1))));
                  MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0))));

                  if ((Var_103 == (MR_Word) ((MR_Unsigned) 0U)))
                    succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, Var_104, OutputArg_13, OutputArgVal_14);
                  else
                  {
                    MR_Word Z_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_103, (MR_Integer) 0))));
                    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_103, (MR_Integer) 1))));

                    succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      switch (ModeNum_11) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_mode_0_7_p_0(Globals_8, ProcName_10, Var_100, Var_104, Z_27, OutputArg_13, OutputArgVal_14);
                          break;
                        case (MR_Integer) 1:
                          succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_mode_1_7_p_0(Globals_8, ProcName_10, Var_100, Var_104, Z_27, OutputArg_13, OutputArgVal_14);
                          break;
                        case (MR_Integer) 2:
                          succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_mode_2_7_p_0(Globals_8, ProcName_10, Var_100, Var_104, Z_27, OutputArg_13, OutputArgVal_14);
                          break;
                      }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "string"
                ;
                {
                  MR_Word Var_105;
                  MR_Word Var_106;

                  succeeded = (Var_99 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0))));
                    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1))));
                    if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(ProcName_10, ModeNum_11, Var_100, Var_106, OutputArg_13, OutputArgVal_14);
                    else
                    {
                      MR_Word Z_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_105, (MR_Integer) 0))));
                      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_105, (MR_Integer) 1))));

                      succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
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
                ;
                if ((Var_99 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = transform_hlds__const_prop__evaluate_det_call_uint_1_6_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, OutputArg_13, OutputArgVal_14);
                else
                {
                  MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1))));
                  MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 0))));

                  if ((Var_107 == (MR_Word) ((MR_Unsigned) 0U)))
                    succeeded = transform_hlds__const_prop__evaluate_det_call_uint_2_7_p_0(Globals_8, ProcName_10, ModeNum_11, Var_100, Var_108, OutputArg_13, OutputArgVal_14);
                  else
                  {
                    MR_Word Z_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_107, (MR_Integer) 0))));
                    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_107, (MR_Integer) 1))));

                    succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      switch (ModeNum_11) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          succeeded = transform_hlds__const_prop__evaluate_det_call_uint_3_mode_0_7_p_0(Globals_8, ProcName_10, Var_100, Var_108, Z_67, OutputArg_13, OutputArgVal_14);
                          break;
                        case (MR_Integer) 1:
                          succeeded = transform_hlds__const_prop__evaluate_det_call_uint_3_mode_1_7_p_0(Globals_8, ProcName_10, Var_100, Var_108, Z_67, OutputArg_13, OutputArgVal_14);
                          break;
                        case (MR_Integer) 2:
                          succeeded = transform_hlds__const_prop__evaluate_det_call_uint_3_mode_2_7_p_0(Globals_8, ProcName_10, Var_100, Var_108, Z_67, OutputArg_13, OutputArgVal_14);
                          break;
                      }
                  }
                }
              }
              break;
          }
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
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
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 3))));
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 17)));
            if (succeeded)
            {
              XVal_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
              succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2))));
                  succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 3))));
                    succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
                      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
                      succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0)))) == (MR_Integer) 17)));
                      if (succeeded)
                      {
                        YVal_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1))));
                        succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            *OutputArg_15 = Z_14;
                            OutputArgVal_16 = mercury__string__f_43_43_2_f_0(XVal_19, YVal_22);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
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
    MR_Float XVal_19;
    MR_Float YVal_22;
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
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 3))));
        succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 15)));
          if (succeeded)
          {
            XVal_19 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1)));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 2))));
                succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 3))));
                  succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
                    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0)))) == (MR_Integer) 15)));
                    if (succeeded)
                    {
                      YVal_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1)));
                      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          *OutputArg_15 = Z_14;
                          // binary string jump switch
                          ;
                          lo_0 = (MR_Integer) 0;
                          hi_1 = (MR_Integer) 4;
                          do
                          {
                            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                            result_3 = MR_strcmp(ProcName_10, ((&transform_hlds__const_prop_vector_common_2[39 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                            if ((result_3 == (MR_Integer) 0))
                            {
                              switch (((&transform_hlds__const_prop_vector_common_2[39 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    // case "*"
                                    ;
                                    OutputArgVal_16 = (XVal_19 * YVal_22);
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    // case "+"
                                    ;
                                    OutputArgVal_16 = (XVal_19 + YVal_22);
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    // case "-"
                                    ;
                                    OutputArgVal_16 = (XVal_19 - YVal_22);
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 3:
                                  {
                                    // case "/"
                                    ;
                                    succeeded = (YVal_22 == ((MR_Float) 0.0000000000000000));
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      OutputArgVal_16 = mercury__float__f_slash_2_f_0(XVal_19, YVal_22);
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 4:
                                  {
                                    // case "unchecked_quotient"
                                    ;
                                    succeeded = (YVal_22 == ((MR_Float) 0.0000000000000000));
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      OutputArgVal_16 = (XVal_19 / YVal_22);
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                              }
                              // jump out of search loop
                              ;
                              goto label_0;
                            }
                            else
                            if ((result_3 < (MR_Integer) 0))
                              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                            else
                              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                          }
                          while ((lo_0 <= hi_1));
                          succeeded = MR_FALSE;
                        label_0:;
                          if (succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
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

    if (succeeded)
    {
      succeeded = (ModeNum_10 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 3))));
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 17)));
            if (succeeded)
            {
              XVal_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *OutputArg_13 = Y_12;
                  CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(XVal_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *OutputArgVal_14 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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

    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 3))));
        succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
          succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
            succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 15)));
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
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
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
transform_hlds__const_prop__evaluate_det_call_uint_3_mode_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Unsigned OutputArgVal_14;
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Z_12, (MR_Integer) 2))));
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Unsigned Var_97;

    succeeded = ((((MR_tag((MR_Word) Var_87)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 3))));
      succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 0))));
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 1))));
          succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_96)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 1))));
              if ((strcmp(ProcName_9, (MR_String) "+") == 0))
              {
                MR_Unsigned XVal_17;
                MR_Word BitsPerUInt_21;
                MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_69;
                MR_Word Var_70;

                succeeded = ((((MR_tag((MR_Word) Var_57)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 3))));
                  succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
                      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
                      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          XVal_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 1))));
                          *OutputArg_13 = Y_11;
                          Var_69 = (MR_Integer) 259;
                          Var_70 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_69, Var_70);
                          if (succeeded)
                          {
                            libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_21);
                            succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_21, Var_97, XVal_17, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "-") == 0))
              {
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_46;
                MR_Word Var_47;
                MR_Word Var_48;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Unsigned XVal_71;
                MR_Word BitsPerUInt_73;

                succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 3))));
                  succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
                    succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
                      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
                      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          XVal_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1))));
                          *OutputArg_13 = Y_11;
                          Var_55 = (MR_Integer) 259;
                          Var_56 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_55, Var_56);
                          if (succeeded)
                          {
                            libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_73);
                            succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_73, XVal_71, Var_97, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "xor") == 0))
              {
                MR_Unsigned YVal_28;
                MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
                MR_Word Var_32;
                MR_Word Var_33;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_36;

                succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 3))));
                  succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                    succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
                      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
                      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          YVal_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 1))));
                          *OutputArg_13 = X_10;
                          OutputArgVal_14 = (YVal_28 ^ Var_97);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_14));
                }
                succeeded = MR_TRUE;
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
transform_hlds__const_prop__evaluate_det_call_uint_3_mode_1_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Unsigned OutputArgVal_14;
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Z_12, (MR_Integer) 2))));
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Unsigned Var_97;

    succeeded = ((((MR_tag((MR_Word) Var_87)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 3))));
      succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 0))));
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 1))));
          succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_96)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 1))));
              if ((strcmp(ProcName_9, (MR_String) "+") == 0))
              {
                MR_Unsigned YVal_17;
                MR_Word BitsPerUInt_21;
                MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_69;
                MR_Word Var_70;

                succeeded = ((((MR_tag((MR_Word) Var_57)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 3))));
                  succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
                      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
                      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          YVal_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 1))));
                          *OutputArg_13 = X_10;
                          Var_69 = (MR_Integer) 259;
                          Var_70 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_69, Var_70);
                          if (succeeded)
                          {
                            libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_21);
                            succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_21, Var_97, YVal_17, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "-") == 0))
              {
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_46;
                MR_Word Var_47;
                MR_Word Var_48;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Unsigned YVal_71;
                MR_Word BitsPerUInt_73;

                succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 3))));
                  succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
                    succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
                      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
                      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          YVal_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1))));
                          *OutputArg_13 = X_10;
                          Var_55 = (MR_Integer) 259;
                          Var_56 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_55, Var_56);
                          if (succeeded)
                          {
                            libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_73);
                            succeeded = libs__uint_emu__plus_4_p_0(BitsPerUInt_73, YVal_71, Var_97, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "xor") == 0))
              {
                MR_Unsigned XVal_28;
                MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
                MR_Word Var_32;
                MR_Word Var_33;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_36;

                succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 3))));
                  succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                    succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
                      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
                      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          XVal_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 1))));
                          *OutputArg_13 = Y_11;
                          OutputArgVal_14 = (XVal_28 ^ Var_97);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_14));
                }
                succeeded = MR_TRUE;
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
transform_hlds__const_prop__evaluate_det_call_uint_3_mode_0_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Unsigned OutputArgVal_14;
    MR_Unsigned XVal_17;
    MR_Word YConst_20;
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
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
    MR_Integer slot_0;
    MR_String str_1;

    succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 3))));
      succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              XVal_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
              succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 3))));
                succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                  succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    YConst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
                    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
                    succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      // hashed string jump switch
                      ;
                      // compute the hash value of the input string
                      ;
                      slot_0 = ((MR_hash_string6(ProcName_9)) & (MR_Integer) 31);
                      // hash chain loop
                      ;
                      do
                      {
                        // lookup the string for this hash slot
                        ;
                        str_1 = ((&transform_hlds__const_prop_vector_common_2[7 + slot_0]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0;
                        // did we find a match?
                        ;
                        if ((((str_1 != NULL)) && ((strcmp(str_1, ProcName_9) == 0))))
                        {
                          // we found a match; dispatch to the corresponding code
                          ;
                          switch (slot_0) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                // case "unchecked_rem"
                                ;
                                {
                                  MR_Word Var_42;
                                  MR_Word Var_43;
                                  MR_Word BitsPerUInt_61;
                                  MR_Unsigned YVal_82;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    succeeded = (YVal_82 != (MR_Unsigned) 0U);
                                    if (succeeded)
                                    {
                                      Var_42 = (MR_Integer) 259;
                                      Var_43 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_42, Var_43);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_61);
                                        succeeded = libs__uint_emu__unchecked_rem_4_p_0(BitsPerUInt_61, XVal_17, YVal_82, &OutputArgVal_14);
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                // case "unchecked_right_shift"
                                ;
                                {
                                  MR_Word Var_36;
                                  MR_Word Var_37;
                                  MR_Word BitsPerUInt_64;
                                  MR_Integer YVal_83;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_36 = (MR_Integer) 259;
                                    Var_37 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_36, Var_37);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_64);
                                      succeeded = libs__uint_emu__unchecked_right_shift_4_p_0(BitsPerUInt_64, XVal_17, YVal_83, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                // case "xor"
                                ;
                                {
                                  MR_Unsigned YVal_84;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    OutputArgVal_14 = (XVal_17 ^ YVal_84);
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                // case "//"
                                ;
                                {
                                  MR_Word Var_48;
                                  MR_Word Var_49;
                                  MR_Word BitsPerUInt_58;
                                  MR_Unsigned YVal_75;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    succeeded = (YVal_75 != (MR_Unsigned) 0U);
                                    if (succeeded)
                                    {
                                      Var_48 = (MR_Integer) 259;
                                      Var_49 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_48, Var_49);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_58);
                                        succeeded = libs__uint_emu__quotient_4_p_0(BitsPerUInt_58, XVal_17, YVal_75, &OutputArgVal_14);
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 9:
                              {
                                // case "\/"
                                ;
                                {
                                  MR_Unsigned YVal_78;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    OutputArgVal_14 = (XVal_17 | YVal_78);
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 10:
                              {
                                // case "+"
                                ;
                                {
                                  MR_Word BitsPerUInt_22;
                                  MR_Word Var_54;
                                  MR_Word Var_55;
                                  MR_Unsigned YVal_73;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_54 = (MR_Integer) 259;
                                    Var_55 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_54, Var_55);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_22);
                                      succeeded = libs__uint_emu__plus_4_p_0(BitsPerUInt_22, XVal_17, YVal_73, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 11:
                              {
                                // case "*"
                                ;
                                {
                                  MR_Unsigned YVal_21;
                                  MR_Word Var_50;
                                  MR_Word Var_51;
                                  MR_Word BitsPerUInt_57;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_50 = (MR_Integer) 259;
                                    Var_51 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_50, Var_51);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_57);
                                      succeeded = libs__uint_emu__times_4_p_0(BitsPerUInt_57, XVal_17, YVal_21, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 12:
                              {
                                // case "-"
                                ;
                                {
                                  MR_Word Var_52;
                                  MR_Word Var_53;
                                  MR_Word BitsPerUInt_56;
                                  MR_Unsigned YVal_74;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_52 = (MR_Integer) 259;
                                    Var_53 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_52, Var_53);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_56);
                                      succeeded = libs__uint_emu__minus_4_p_0(BitsPerUInt_56, XVal_17, YVal_74, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 19:
                              {
                                // case "mod"
                                ;
                                {
                                  MR_Word Var_46;
                                  MR_Word Var_47;
                                  MR_Word BitsPerUInt_59;
                                  MR_Unsigned YVal_79;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    succeeded = (YVal_79 != (MR_Unsigned) 0U);
                                    if (succeeded)
                                    {
                                      Var_46 = (MR_Integer) 259;
                                      Var_47 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_46, Var_47);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_59);
                                        succeeded = libs__uint_emu__mod_4_p_0(BitsPerUInt_59, XVal_17, YVal_79, &OutputArgVal_14);
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 21:
                              {
                                // case "unchecked_left_shift"
                                ;
                                {
                                  MR_Word Var_40;
                                  MR_Word Var_41;
                                  MR_Word BitsPerUInt_62;
                                  MR_Integer YVal_81;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_40 = (MR_Integer) 259;
                                    Var_41 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_40, Var_41);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_62);
                                      succeeded = libs__uint_emu__unchecked_left_shift_4_p_0(BitsPerUInt_62, XVal_17, YVal_81, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 23:
                              {
                                // case "rem"
                                ;
                                {
                                  MR_Word Var_44;
                                  MR_Word Var_45;
                                  MR_Word BitsPerUInt_60;
                                  MR_Unsigned YVal_80;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    succeeded = (YVal_80 != (MR_Unsigned) 0U);
                                    if (succeeded)
                                    {
                                      Var_44 = (MR_Integer) 259;
                                      Var_45 = (MR_Integer) 0;
                                      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_44, Var_45);
                                      if (succeeded)
                                      {
                                        libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_60);
                                        succeeded = libs__uint_emu__rem_4_p_0(BitsPerUInt_60, XVal_17, YVal_80, &OutputArgVal_14);
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 25:
                              {
                                // case "/\"
                                ;
                                {
                                  MR_Unsigned YVal_76;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    OutputArgVal_14 = (XVal_17 & YVal_76);
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 26:
                              {
                                // case "<<"
                                ;
                                {
                                  MR_Word Var_38;
                                  MR_Word Var_39;
                                  MR_Word BitsPerUInt_63;
                                  MR_Integer YVal_67;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_38 = (MR_Integer) 259;
                                    Var_39 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_38, Var_39);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_63);
                                      succeeded = libs__uint_emu__left_shift_4_p_0(BitsPerUInt_63, XVal_17, YVal_67, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 30:
                              {
                                // case ">>"
                                ;
                                {
                                  MR_Word Var_34;
                                  MR_Word Var_35;
                                  MR_Word BitsPerUInt_65;
                                  MR_Integer YVal_77;

                                  succeeded = ((((MR_tag((MR_Word) YConst_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_20, (MR_Integer) 1))));
                                    Var_34 = (MR_Integer) 259;
                                    Var_35 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_34, Var_35);
                                    if (succeeded)
                                    {
                                      libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &BitsPerUInt_65);
                                      succeeded = libs__uint_emu__right_shift_4_p_0(BitsPerUInt_65, XVal_17, YVal_77, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                          }
                          // jump out of search loop
                          ;
                          goto label_0;
                        }
                        else
                        {
                          // no match yet, so get next slot in hash chain
                          ;
                          slot_0 = ((&transform_hlds__const_prop_vector_common_2[7 + slot_0]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1;
                        }
                      }
                      while ((slot_0 >= (MR_Integer) 0));
                      succeeded = MR_FALSE;
                    label_0:;
                      if (succeeded)
                      {
                        *OutputArg_13 = Z_12;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__7_7 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
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
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_mode_2_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Integer OutputArgVal_14;
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Z_12, (MR_Integer) 2))));
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Integer Var_97;

    succeeded = ((((MR_tag((MR_Word) Var_87)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 3))));
      succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 0))));
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 1))));
          succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_96)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              Var_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 1))));
              if ((strcmp(ProcName_9, (MR_String) "+") == 0))
              {
                MR_Integer XVal_17;
                MR_Word BitsPerInt_21;
                MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_69;
                MR_Word Var_70;

                succeeded = ((((MR_tag((MR_Word) Var_57)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 3))));
                  succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
                      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
                      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 1))));
                          *OutputArg_13 = Y_11;
                          Var_69 = (MR_Integer) 259;
                          Var_70 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_69, Var_70);
                          if (succeeded)
                          {
                            libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_21);
                            succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_21, Var_97, XVal_17, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "-") == 0))
              {
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_46;
                MR_Word Var_47;
                MR_Word Var_48;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Integer XVal_71;
                MR_Word BitsPerInt_73;

                succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 3))));
                  succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
                    succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
                      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
                      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1))));
                          *OutputArg_13 = Y_11;
                          Var_55 = (MR_Integer) 259;
                          Var_56 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_55, Var_56);
                          if (succeeded)
                          {
                            libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_73);
                            succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_73, XVal_71, Var_97, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "xor") == 0))
              {
                MR_Integer YVal_28;
                MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
                MR_Word Var_32;
                MR_Word Var_33;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_36;

                succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 3))));
                  succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                    succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
                      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
                      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          YVal_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 1))));
                          *OutputArg_13 = X_10;
                          OutputArgVal_14 = (YVal_28 ^ Var_97);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_14));
                }
                succeeded = MR_TRUE;
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
transform_hlds__const_prop__evaluate_det_call_int_3_mode_1_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Integer OutputArgVal_14;
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Z_12, (MR_Integer) 2))));
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Integer Var_97;

    succeeded = ((((MR_tag((MR_Word) Var_87)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_87, (MR_Integer) 3))));
      succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 0))));
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 1))));
          succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_96)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              Var_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_96, (MR_Integer) 1))));
              if ((strcmp(ProcName_9, (MR_String) "+") == 0))
              {
                MR_Integer YVal_17;
                MR_Word BitsPerInt_21;
                MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_69;
                MR_Word Var_70;

                succeeded = ((((MR_tag((MR_Word) Var_57)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 3))));
                  succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
                      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
                      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          YVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_60, (MR_Integer) 1))));
                          *OutputArg_13 = X_10;
                          Var_69 = (MR_Integer) 259;
                          Var_70 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_69, Var_70);
                          if (succeeded)
                          {
                            libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_21);
                            succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_21, Var_97, YVal_17, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "-") == 0))
              {
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_46;
                MR_Word Var_47;
                MR_Word Var_48;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Integer YVal_71;
                MR_Word BitsPerInt_73;

                succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 3))));
                  succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
                    succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
                      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
                      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          YVal_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1))));
                          *OutputArg_13 = X_10;
                          Var_55 = (MR_Integer) 259;
                          Var_56 = (MR_Integer) 0;
                          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_55, Var_56);
                          if (succeeded)
                          {
                            libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_73);
                            succeeded = libs__int_emu__plus_4_p_0(BitsPerInt_73, YVal_71, Var_97, &OutputArgVal_14);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              if ((strcmp(ProcName_9, (MR_String) "xor") == 0))
              {
                MR_Integer XVal_28;
                MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
                MR_Word Var_32;
                MR_Word Var_33;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_36;

                succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 3))));
                  succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                    succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
                      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
                      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (succeeded)
                        {
                          XVal_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 1))));
                          *OutputArg_13 = Y_11;
                          OutputArgVal_14 = (XVal_28 ^ Var_97);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OutputArgVal_14));
                }
                succeeded = MR_TRUE;
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
transform_hlds__const_prop__evaluate_det_call_int_3_mode_0_7_p_0(
  MR_Word Globals_8,
  MR_String ProcName_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word Z_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Integer OutputArgVal_14;
    MR_Integer XVal_17;
    MR_Integer YVal_20;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_10, (MR_Integer) 2))));
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

    succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 3))));
      succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
        succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
          succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              XVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 1))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_11, (MR_Integer) 2))));
              succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 3))));
                succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
                  succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
                    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
                    succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 5)));
                      if (succeeded)
                      {
                        YVal_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 1))));
                        {
                          MR_Integer case_num_0 = (MR_Integer) -1;

                          switch (MR_nth_code_unit(ProcName_9, 0)) {
                            case (MR_Integer) 42:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "*"))
                                case_num_0 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 43:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "+"))
                                case_num_0 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 45:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "-"))
                                case_num_0 = (MR_Integer) 2;
                              break;
                            case (MR_Integer) 47:
                              switch (MR_nth_code_unit(ProcName_9, 1)) {
                                case (MR_Integer) 47:
                                  if (MR_offset_streq(2, ProcName_9, (MR_String) "//"))
                                    case_num_0 = (MR_Integer) 3;
                                  break;
                                case (MR_Integer) 92:
                                  if (MR_offset_streq(2, ProcName_9, (MR_String) "/\\"))
                                    case_num_0 = (MR_Integer) 4;
                                  break;
                              }
                              break;
                            case (MR_Integer) 60:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "<<"))
                                case_num_0 = (MR_Integer) 5;
                              break;
                            case (MR_Integer) 62:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) ">>"))
                                case_num_0 = (MR_Integer) 6;
                              break;
                            case (MR_Integer) 92:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "\\/"))
                                case_num_0 = (MR_Integer) 7;
                              break;
                            case (MR_Integer) 109:
                              switch (MR_nth_code_unit(ProcName_9, 1)) {
                                case (MR_Integer) 105:
                                  if (MR_offset_streq(2, ProcName_9, (MR_String) "minus"))
                                    case_num_0 = (MR_Integer) 8;
                                  break;
                                case (MR_Integer) 111:
                                  if (MR_offset_streq(2, ProcName_9, (MR_String) "mod"))
                                    case_num_0 = (MR_Integer) 9;
                                  break;
                              }
                              break;
                            case (MR_Integer) 112:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "plus"))
                                case_num_0 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "rem"))
                                case_num_0 = (MR_Integer) 11;
                              break;
                            case (MR_Integer) 116:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "times"))
                                case_num_0 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 117:
                              if (((((((((((((((((((MR_nth_code_unit(ProcName_9, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ProcName_9, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(ProcName_9, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(ProcName_9, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(ProcName_9, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(ProcName_9, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(ProcName_9, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(ProcName_9, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(ProcName_9, 9)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(ProcName_9, 10)) {
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(11, ProcName_9, (MR_String) "unchecked_left_shift"))
                                      case_num_0 = (MR_Integer) 13;
                                    break;
                                  case (MR_Integer) 113:
                                    if (MR_offset_streq(11, ProcName_9, (MR_String) "unchecked_quotient"))
                                      case_num_0 = (MR_Integer) 14;
                                    break;
                                  case (MR_Integer) 114:
                                    switch (MR_nth_code_unit(ProcName_9, 11)) {
                                      case (MR_Integer) 101:
                                        if (MR_offset_streq(12, ProcName_9, (MR_String) "unchecked_rem"))
                                          case_num_0 = (MR_Integer) 15;
                                        break;
                                      case (MR_Integer) 105:
                                        if (MR_offset_streq(12, ProcName_9, (MR_String) "unchecked_right_shift"))
                                          case_num_0 = (MR_Integer) 16;
                                        break;
                                    }
                                    break;
                                }
                              break;
                            case (MR_Integer) 120:
                              if (MR_offset_streq(1, ProcName_9, (MR_String) "xor"))
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
                                ;
                                {
                                  MR_Word BitsPerInt_68;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_68);
                                    succeeded = libs__int_emu__times_4_p_0(BitsPerInt_68, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                // case "+"
                                ;
                                {
                                  MR_Word BitsPerInt_64;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_64);
                                    succeeded = libs__int_emu__plus_4_p_0(BitsPerInt_64, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                // case "-"
                                ;
                                {
                                  MR_Word BitsPerInt_66;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_66);
                                    succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_66, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                // case "//"
                                ;
                                {
                                  MR_Word Var_48;
                                  MR_Word Var_49;
                                  MR_Word BitsPerInt_70;

                                  succeeded = (YVal_20 != (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_48 = (MR_Integer) 259;
                                    Var_49 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_48, Var_49);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_70);
                                      succeeded = libs__int_emu__quotient_4_p_0(BitsPerInt_70, XVal_17, YVal_20, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                // case "/\"
                                ;
                                OutputArgVal_14 = (XVal_17 & YVal_20);
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                // case "<<"
                                ;
                                {
                                  MR_Word BitsPerInt_75;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_75);
                                    succeeded = libs__int_emu__left_shift_4_p_0(BitsPerInt_75, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 6:
                              {
                                // case ">>"
                                ;
                                {
                                  MR_Word BitsPerInt_77;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_77);
                                    succeeded = libs__int_emu__right_shift_4_p_0(BitsPerInt_77, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 7:
                              {
                                // case "\/"
                                ;
                                OutputArgVal_14 = (XVal_17 | YVal_20);
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 8:
                              {
                                // case "minus"
                                ;
                                {
                                  MR_Word BitsPerInt_65;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_65);
                                    succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_65, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 9:
                              {
                                // case "mod"
                                ;
                                {
                                  MR_Word Var_46;
                                  MR_Word Var_47;
                                  MR_Word BitsPerInt_71;

                                  succeeded = (YVal_20 != (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 259;
                                    Var_47 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_46, Var_47);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_71);
                                      succeeded = libs__int_emu__mod_4_p_0(BitsPerInt_71, XVal_17, YVal_20, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 10:
                              {
                                // case "plus"
                                ;
                                {
                                  MR_Word BitsPerInt_21;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_21);
                                    succeeded = libs__int_emu__plus_4_p_0(BitsPerInt_21, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 11:
                              {
                                // case "rem"
                                ;
                                {
                                  MR_Word Var_44;
                                  MR_Word Var_45;
                                  MR_Word BitsPerInt_72;

                                  succeeded = (YVal_20 != (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_44 = (MR_Integer) 259;
                                    Var_45 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_44, Var_45);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_72);
                                      succeeded = libs__int_emu__rem_4_p_0(BitsPerInt_72, XVal_17, YVal_20, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 12:
                              {
                                // case "times"
                                ;
                                {
                                  MR_Word BitsPerInt_67;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_67);
                                    succeeded = libs__int_emu__times_4_p_0(BitsPerInt_67, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 13:
                              {
                                // case "unchecked_left_shift"
                                ;
                                {
                                  MR_Word BitsPerInt_74;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_74);
                                    succeeded = libs__int_emu__unchecked_left_shift_4_p_0(BitsPerInt_74, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 14:
                              {
                                // case "unchecked_quotient"
                                ;
                                {
                                  MR_Word Var_50;
                                  MR_Word Var_51;
                                  MR_Word BitsPerInt_69;

                                  succeeded = (YVal_20 != (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_50 = (MR_Integer) 259;
                                    Var_51 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_50, Var_51);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_69);
                                      succeeded = libs__int_emu__unchecked_quotient_4_p_0(BitsPerInt_69, XVal_17, YVal_20, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 15:
                              {
                                // case "unchecked_rem"
                                ;
                                {
                                  MR_Word Var_42;
                                  MR_Word Var_43;
                                  MR_Word BitsPerInt_73;

                                  succeeded = (YVal_20 != (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_42 = (MR_Integer) 259;
                                    Var_43 = (MR_Integer) 0;
                                    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_42, Var_43);
                                    if (succeeded)
                                    {
                                      libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_73);
                                      succeeded = libs__int_emu__unchecked_rem_4_p_0(BitsPerInt_73, XVal_17, YVal_20, &OutputArgVal_14);
                                    }
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 16:
                              {
                                // case "unchecked_right_shift"
                                ;
                                {
                                  MR_Word BitsPerInt_76;

                                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_76);
                                    succeeded = libs__int_emu__unchecked_right_shift_4_p_0(BitsPerInt_76, XVal_17, YVal_20, &OutputArgVal_14);
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 17:
                              {
                                // case "xor"
                                ;
                                OutputArgVal_14 = (XVal_17 ^ YVal_20);
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                        }
                        if (succeeded)
                        {
                          *OutputArg_13 = Z_12;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__7_7 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_uint_2_7_p_0(
  MR_Word Globals_8,
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
    MR_Word TargetBitsPerUInt_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;
    MR_Integer Var_30;

    if (succeeded)
    {
      succeeded = (ModeNum_10 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 3))));
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  XVal_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1))));
                  Var_25 = (MR_Integer) 259;
                  Var_26 = (MR_Integer) 0;
                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_25, Var_26);
                  if (succeeded)
                  {
                    libs__uint_emu__target_bits_per_uint_2_p_0(Globals_8, &TargetBitsPerUInt_18);
                    Var_27 = (MR_Integer) (TargetBitsPerUInt_18);
                    Var_30 = mercury__uint__bits_per_uint_0_f_0();
                    succeeded = (Var_27 == Var_30);
                    if (succeeded)
                    {
                      *OutputArg_13 = Y_12;
                      OutputArgVal_14 = ~(XVal_17);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__7_7 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
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
      }
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
    MR_Integer XVal_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 3))));
        succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
          succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                XVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 1))));
                *OutputArg_13 = Y_12;
                // binary string jump switch
                ;
                lo_0 = (MR_Integer) 0;
                hi_1 = (MR_Integer) 6;
                do
                {
                  mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                  result_3 = MR_strcmp(ProcName_9, ((&transform_hlds__const_prop_vector_common_2[0 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_0);
                  if ((result_3 == (MR_Integer) 0))
                  {
                    switch (((&transform_hlds__const_prop_vector_common_2[0 + mid_2]))->transform_hlds__const_prop__vector_common_type_2_0__vct_2_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          // case "+"
                          ;
                          OutputArgVal_14 = XVal_17;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          // case "-"
                          ;
                          {
                            MR_Word BitsPerInt_18;
                            MR_Integer Var_39;

                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_18);
                              Var_39 = (MR_Integer) 0;
                              succeeded = libs__int_emu__minus_4_p_0(BitsPerInt_18, Var_39, XVal_17, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          // case "\"
                          ;
                          {
                            MR_Word TargetBitsPerInt_19;
                            MR_Integer Var_36;
                            MR_Integer Var_46;

                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &TargetBitsPerInt_19);
                              Var_36 = (MR_Integer) (TargetBitsPerInt_19);
                              Var_46 = mercury__int__bits_per_int_0_f_0();
                              succeeded = (Var_36 == Var_46);
                              if (succeeded)
                              {
                                OutputArgVal_14 = ~(XVal_17);
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          // case "floor_to_multiple_of_bits_per_int"
                          ;
                          {
                            MR_Word BitsPerInt_40;

                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_40);
                              succeeded = libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(XVal_17, BitsPerInt_40, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          // case "quot_bits_per_int"
                          ;
                          {
                            MR_Word BitsPerInt_41;

                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_41);
                              succeeded = libs__int_emu__quot_bits_per_int_3_p_0(XVal_17, BitsPerInt_41, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          // case "rem_bits_per_int"
                          ;
                          {
                            MR_Word BitsPerInt_43;

                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_43);
                              succeeded = libs__int_emu__rem_bits_per_int_3_p_0(XVal_17, BitsPerInt_43, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          // case "times_bits_per_int"
                          ;
                          {
                            MR_Word BitsPerInt_42;

                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, (MR_Integer) 259, (MR_Integer) 0);
                            if (succeeded)
                            {
                              libs__int_emu__target_bits_per_int_2_p_0(Globals_8, &BitsPerInt_42);
                              succeeded = libs__int_emu__times_bits_per_int_3_p_0(XVal_17, BitsPerInt_42, &OutputArgVal_14);
                            }
                          }
                        }
                        break;
                    }
                    // jump out of search loop
                    ;
                    goto label_0;
                  }
                  else
                  if ((result_3 < (MR_Integer) 0))
                    hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                  else
                    lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                }
                while ((lo_0 <= hi_1));
                succeeded = MR_FALSE;
              label_0:;
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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
        Var_14 = (MR_Integer) 259;
        Var_15 = (MR_Integer) 0;
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_7, Var_14, Var_15);
        if (succeeded)
        {
          libs__uint_emu__target_bits_per_uint_2_p_0(Globals_7, &Var_16);
          OutputArgVal_13 = (MR_Integer) (Var_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConsId_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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
        Var_13 = (MR_Integer) 259;
        Var_14 = (MR_Integer) 0;
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_7, Var_13, Var_14);
        if (succeeded)
        {
          libs__int_emu__target_bits_per_int_2_p_0(Globals_7, &Var_15);
          OutputArgVal_12 = (MR_Integer) (Var_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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

    succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    transform_hlds__const_prop____Compare____arg_val_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
