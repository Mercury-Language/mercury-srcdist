/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2024-07-24
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
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.int_emu.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3];

static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1];

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1];

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_semi_call_result_0_1[2];

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_semi_call_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_semi_call_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_semi_call_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_semi_call_result_0[2];

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_semi_call_result_0[2];

static void MR_CALL 
transform_hlds__const_prop____Compare____semi_call_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____semi_call_result_0_0(
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

static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
  MR_Word OutputArg_6,
  MR_Word InputArg_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_6_p_0(
  MR_Word Globals_7,
  MR_String ModuleName_8,
  MR_String PredName_9,
  MR_Integer ModeNum_10,
  MR_Word Args_11,
  MR_Word * Result_12);

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
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Integer ModeNum_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
transform_hlds__const_prop__is_integer_for_op_type_3_p_0(
  MR_Word OpType_4,
  MR_Word Functor_5,
  MR_Word * Integer_6);

static void MR_CALL 
transform_hlds__const_prop__lookup_arg_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
transform_hlds__const_prop____Unify____semi_call_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__const_prop____Compare____semi_call_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[4][1];


struct transform_hlds__const_prop__vector_common_type_3_0_s {
  const MR_String transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[56];

struct transform_hlds__const_prop__vector_common_type_4_0_s {
  const MR_String transform_hlds__const_prop__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_4_0_s transform_hlds__const_prop_vector_common_4[192];



static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};


static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[56] = {
  /* row   0 */
  {
    (MR_String) "+",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "-",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "\\",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "floor_to_multiple_of_bits_per_int",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "quot_bits_per_int",
    (MR_Integer) 4
  },
  /* row   5 */
  {
    (MR_String) "rem_bits_per_int",
    (MR_Integer) 5
  },
  /* row   6 */
  {
    (MR_String) "times_bits_per_int",
    (MR_Integer) 6
  },
  /* row   7 */
  {
    (MR_String) "*",
    (MR_Integer) 0
  },
  /* row   8 */
  {
    (MR_String) "+",
    (MR_Integer) 1
  },
  /* row   9 */
  {
    (MR_String) "-",
    (MR_Integer) 2
  },
  /* row  10 */
  {
    (MR_String) "/",
    (MR_Integer) 3
  },
  /* row  11 */
  {
    (MR_String) "unchecked_quotient",
    (MR_Integer) 4
  },
  /* row  12 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  13 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  14 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  15 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  16 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  17 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  18 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  19 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  20 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  21 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  22 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  23 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  24 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  25 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  26 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  27 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  28 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  29 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  30 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  31 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  32 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  33 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  34 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  35 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  36 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  37 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  38 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  39 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  40 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  41 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  42 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  43 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  44 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  45 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  46 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  47 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  48 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  49 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  50 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  51 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  52 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  53 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  54 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  55 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_4_0_s transform_hlds__const_prop_vector_common_4[192] = {
  /* row   0 */   { NULL },
  /* row   1 */   { (MR_String) "string" },
  /* row   2 */   { NULL },
  /* row   3 */   { (MR_String) "uint32" },
  /* row   4 */   { NULL },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "int16" },
  /* row   8 */   { (MR_String) "int" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "uint8" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "uint" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "int8" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { (MR_String) "uint64" },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { (MR_String) "uint16" },
  /* row  34 */   { NULL },
  /* row  35 */   { (MR_String) "float" },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "int32" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "int64" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
  /* row  64 */   { NULL },
  /* row  65 */   { (MR_String) "string" },
  /* row  66 */   { NULL },
  /* row  67 */   { (MR_String) "uint32" },
  /* row  68 */   { NULL },
  /* row  69 */   { NULL },
  /* row  70 */   { NULL },
  /* row  71 */   { (MR_String) "int16" },
  /* row  72 */   { (MR_String) "int" },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { NULL },
  /* row  76 */   { NULL },
  /* row  77 */   { (MR_String) "uint8" },
  /* row  78 */   { NULL },
  /* row  79 */   { NULL },
  /* row  80 */   { NULL },
  /* row  81 */   { NULL },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { (MR_String) "uint" },
  /* row  85 */   { NULL },
  /* row  86 */   { NULL },
  /* row  87 */   { (MR_String) "int8" },
  /* row  88 */   { NULL },
  /* row  89 */   { NULL },
  /* row  90 */   { NULL },
  /* row  91 */   { NULL },
  /* row  92 */   { (MR_String) "uint64" },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { NULL },
  /* row  96 */   { NULL },
  /* row  97 */   { (MR_String) "uint16" },
  /* row  98 */   { NULL },
  /* row  99 */   { (MR_String) "float" },
  /* row 100 */   { NULL },
  /* row 101 */   { (MR_String) "int32" },
  /* row 102 */   { NULL },
  /* row 103 */   { NULL },
  /* row 104 */   { NULL },
  /* row 105 */   { NULL },
  /* row 106 */   { NULL },
  /* row 107 */   { NULL },
  /* row 108 */   { NULL },
  /* row 109 */   { NULL },
  /* row 110 */   { NULL },
  /* row 111 */   { NULL },
  /* row 112 */   { (MR_String) "int64" },
  /* row 113 */   { NULL },
  /* row 114 */   { NULL },
  /* row 115 */   { NULL },
  /* row 116 */   { NULL },
  /* row 117 */   { NULL },
  /* row 118 */   { NULL },
  /* row 119 */   { NULL },
  /* row 120 */   { NULL },
  /* row 121 */   { NULL },
  /* row 122 */   { NULL },
  /* row 123 */   { NULL },
  /* row 124 */   { NULL },
  /* row 125 */   { NULL },
  /* row 126 */   { NULL },
  /* row 127 */   { NULL },
  /* row 128 */   { NULL },
  /* row 129 */   { NULL },
  /* row 130 */   { NULL },
  /* row 131 */   { (MR_String) "uint32" },
  /* row 132 */   { NULL },
  /* row 133 */   { NULL },
  /* row 134 */   { NULL },
  /* row 135 */   { (MR_String) "int16" },
  /* row 136 */   { (MR_String) "int" },
  /* row 137 */   { NULL },
  /* row 138 */   { NULL },
  /* row 139 */   { NULL },
  /* row 140 */   { NULL },
  /* row 141 */   { (MR_String) "uint8" },
  /* row 142 */   { (MR_String) "private_builtin" },
  /* row 143 */   { NULL },
  /* row 144 */   { NULL },
  /* row 145 */   { NULL },
  /* row 146 */   { NULL },
  /* row 147 */   { NULL },
  /* row 148 */   { (MR_String) "uint" },
  /* row 149 */   { NULL },
  /* row 150 */   { NULL },
  /* row 151 */   { (MR_String) "int8" },
  /* row 152 */   { NULL },
  /* row 153 */   { NULL },
  /* row 154 */   { NULL },
  /* row 155 */   { NULL },
  /* row 156 */   { (MR_String) "uint64" },
  /* row 157 */   { NULL },
  /* row 158 */   { NULL },
  /* row 159 */   { NULL },
  /* row 160 */   { NULL },
  /* row 161 */   { (MR_String) "uint16" },
  /* row 162 */   { NULL },
  /* row 163 */   { (MR_String) "float" },
  /* row 164 */   { NULL },
  /* row 165 */   { (MR_String) "int32" },
  /* row 166 */   { NULL },
  /* row 167 */   { NULL },
  /* row 168 */   { NULL },
  /* row 169 */   { NULL },
  /* row 170 */   { NULL },
  /* row 171 */   { NULL },
  /* row 172 */   { NULL },
  /* row 173 */   { NULL },
  /* row 174 */   { NULL },
  /* row 175 */   { NULL },
  /* row 176 */   { (MR_String) "int64" },
  /* row 177 */   { NULL },
  /* row 178 */   { NULL },
  /* row 179 */   { NULL },
  /* row 180 */   { NULL },
  /* row 181 */   { NULL },
  /* row 182 */   { NULL },
  /* row 183 */   { NULL },
  /* row 184 */   { NULL },
  /* row 185 */   { NULL },
  /* row 186 */   { NULL },
  /* row 187 */   { NULL },
  /* row 188 */   { NULL },
  /* row 189 */   { NULL },
  /* row 190 */   { NULL },
  /* row 191 */   { NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = { &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0 };

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1] = { &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0 };

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_hlds_info",
  { transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0 },
  { transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0,

};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_0 = {
  (MR_String) "semi_call_failure",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_semi_call_result_0_1[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0)
};

static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_1 = {
  (MR_String) "semi_call_binds_to_var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_semi_call_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_semi_call_result_0_0[1] = { &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_semi_call_result_0_1[1] = { &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_1 };

static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_semi_call_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_semi_call_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_semi_call_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_semi_call_result_0[2] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_1,
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_semi_call_result_0_0
};

static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_semi_call_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_semi_call_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____semi_call_result_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____semi_call_result_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "semi_call_result",
  { transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_semi_call_result_0 },
  { transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_semi_call_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_semi_call_result_0,

};

static void MR_CALL 
transform_hlds__const_prop____Compare____semi_call_result_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      transform_hlds__const_prop____Compare____arg_hlds_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____semi_call_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0(
  MR_Word Globals_11,
  MR_Word VarTable_12,
  MR_Word InstMap_13,
  MR_String ModuleName_14,
  MR_String ProcName_15,
  MR_Integer ModeNum_16,
  MR_Word ArgVars_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_GoalInfo_0_26,
  MR_Word * STATE_VARIABLE_GoalInfo_27)
{
  MR_bool succeeded;
  MR_Word ArgInfos_20;
  MR_Word OutputArg_21;
  MR_Word Cons_22;

  transform_hlds__const_prop__lookup_arg_vars_4_p_0(VarTable_12, InstMap_13, ArgVars_17, &ArgInfos_20);
  succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(Globals_11, ModuleName_14, ProcName_15, ModeNum_16, ArgInfos_20, &OutputArg_21, &Cons_22);
  if (succeeded)
  {
    MR_Word Delta0_31;
    MR_Word Inst_32;
    MR_Word Delta_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_GoalInfo_22_41;
    MR_Word Goal_45;
    MR_Word Var_47;
    MR_Word Var_48;

    Var_47 = mercury__term_context__dummy_context_0_f_0();
    Var_48 = ((MR_Word) ((MR_hl_field(0, OutputArg_21, (MR_Integer) 0))));
    hlds__make_goal__make_const_construction_4_p_0(Var_47, Var_48, Cons_22, &Goal_45);
    *GoalExpr_18 = ((MR_Word) ((MR_hl_field(0, Goal_45, (MR_Integer) 0))));
    Delta0_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_26);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (Cons_22));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Inst_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Inst_32, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, Inst_32, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(2, Inst_32, 2) = ((MR_Box) (Var_36));
    }
    Var_40 = ((MR_Word) ((MR_hl_field(0, OutputArg_21, (MR_Integer) 0))));
    hlds__instmap__instmap_delta_set_var_4_p_0(Var_40, Inst_32, Delta0_31, &Delta_33);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_33, STATE_VARIABLE_GoalInfo_0_26, &STATE_VARIABLE_GoalInfo_22_41);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_GoalInfo_22_41, STATE_VARIABLE_GoalInfo_27);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Succeeded_23;

    succeeded = transform_hlds__const_prop__evaluate_test_6_p_0(Globals_11, ModuleName_14, ProcName_15, ModeNum_16, ArgInfos_20, &Succeeded_23);
    if (succeeded)
    {
      switch (Succeeded_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *GoalExpr_18 = hlds__make_goal__fail_goal_expr_0_f_0();
          break;
        case (MR_Integer) 1:
          *GoalExpr_18 = hlds__make_goal__true_goal_expr_0_f_0();
          break;
      }
      *STATE_VARIABLE_GoalInfo_27 = STATE_VARIABLE_GoalInfo_0_26;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeOfX_51;
      MR_Word TypeOfY_52;
      MR_Word X_53;
      MR_Word Y_54;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word TypeInfo_36_89;
      MR_Word Var_68;
      MR_Word Var_87;

      if ((strcmp(ModuleName_14, (MR_String) "builtin") == 0))
      {
        succeeded = (strcmp(ProcName_15, (MR_String) "dynamic_cast") == 0);
        if (succeeded)
          succeeded = (ModeNum_16 == (MR_Integer) 0);
      }
      else
      if ((strcmp(ModuleName_14, (MR_String) "private_builtin") == 0))
      {
        succeeded = (strcmp(ProcName_15, (MR_String) "typed_unify") == 0);
        if (succeeded)
          succeeded = (ModeNum_16 == (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (ArgInfos_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeOfX_51 = ((MR_Word) ((MR_hl_field(1, ArgInfos_20, (MR_Integer) 0))));
          Var_56 = ((MR_Word) ((MR_hl_field(1, ArgInfos_20, (MR_Integer) 1))));
          succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeOfY_52 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 0))));
            Var_57 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 1))));
            succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_53 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 1))));
              succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_54 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 0))));
                Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 1))));
                succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_68 = ((MR_Word) ((MR_hl_field(0, TypeOfX_51, (MR_Integer) 0))));
                  Var_87 = ((MR_Word) ((MR_hl_field(0, TypeOfY_52, (MR_Integer) 0))));
                  TypeInfo_36_89 = (MR_Word) (&transform_hlds__const_prop_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_89, ((MR_Box) (Var_68)), ((MR_Box) (Var_87)));
                  if (succeeded)
                  {
                    transform_hlds__const_prop__make_assignment_goal_5_p_0(Y_54, X_53, GoalExpr_18, STATE_VARIABLE_GoalInfo_0_26, STATE_VARIABLE_GoalInfo_27);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word XCtor_62;
                    MR_Word XArgVars_63;
                    MR_Word YCtor_66;
                    MR_Word YArgVars_67;
                    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, TypeOfX_51, (MR_Integer) 2))));
                    MR_Word Var_70;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Result0_93;
                    MR_Word TypeInfo_38_91;

                    succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_70 = ((MR_Word) ((MR_hl_field(2, Var_69, (MR_Integer) 2))));
                      succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_71 = ((MR_Word) ((MR_hl_field(1, Var_70, (MR_Integer) 0))));
                        Var_72 = ((MR_Word) ((MR_hl_field(1, Var_70, (MR_Integer) 1))));
                        succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          XCtor_62 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
                          XArgVars_63 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 1))));
                          Var_73 = ((MR_Word) ((MR_hl_field(0, TypeOfY_52, (MR_Integer) 2))));
                          succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_74 = ((MR_Word) ((MR_hl_field(2, Var_73, (MR_Integer) 2))));
                            succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                              Var_76 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                              succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                YCtor_66 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
                                YArgVars_67 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
                                succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_62, YCtor_66);
                                if (succeeded)
                                {
                                  TypeInfo_38_91 = (MR_Word) (&transform_hlds__const_prop_scalar_common_1[1]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_91, ((MR_Box) (XArgVars_63)), ((MR_Box) (YArgVars_67)));
                                }
                                if (succeeded)
                                {
                                  Result0_93 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(XCtor_62, YCtor_66);
                                  succeeded = !(succeeded);
                                  if (!(succeeded))
                                  {
                                    MR_Integer Var_77;
                                    MR_Integer Var_88;

                                    Var_77 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), XArgVars_63);
                                    Var_88 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), YArgVars_67);
                                    succeeded = (Var_77 != Var_88);
                                  }
                                  if (succeeded)
                                  {
                                    Result0_93 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                {
                                  switch (Result0_93) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        *GoalExpr_18 = hlds__make_goal__fail_goal_expr_0_f_0();
                                        *STATE_VARIABLE_GoalInfo_27 = STATE_VARIABLE_GoalInfo_0_26;
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      transform_hlds__const_prop__make_assignment_goal_5_p_0(Y_54, X_53, GoalExpr_18, STATE_VARIABLE_GoalInfo_0_26, STATE_VARIABLE_GoalInfo_27);
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
  return succeeded;
}

static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
  MR_Word OutputArg_6,
  MR_Word InputArg_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13)
{
  MR_Word Delta0_10;
  MR_Word Delta_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word STATE_VARIABLE_GoalInfo_16_16;
  MR_Word OutVar_22 = ((MR_Word) ((MR_hl_field(0, OutputArg_6, (MR_Integer) 0))));
  MR_Word InVar_23 = ((MR_Word) ((MR_hl_field(0, InputArg_7, (MR_Integer) 0))));
  MR_Word Inst_24 = ((MR_Word) ((MR_hl_field(0, InputArg_7, (MR_Integer) 2))));
  MR_Word UnifyMode_25;
  MR_Word Var_32;
  MR_Word Var_33;

  {
    UnifyMode_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UnifyMode_25, 1) = ((MR_Box) (Inst_24));
    MR_hl_field(0, UnifyMode_25, 2) = ((MR_Box) (Inst_24));
    MR_hl_field(0, UnifyMode_25, 3) = ((MR_Box) (Inst_24));
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (InVar_23));
  }
  {
    Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_33, 0) = ((MR_Box) (OutVar_22));
    MR_hl_field(2, Var_33, 1) = ((MR_Box) (InVar_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Goal_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (OutVar_22));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_25));
    MR_hl_field(1, base, 3) = ((MR_Box) (Var_33));
    MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
  }
  Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
  Var_14 = ((MR_Word) ((MR_hl_field(0, OutputArg_6, (MR_Integer) 0))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, InputArg_7, (MR_Integer) 2))));
  hlds__instmap__instmap_delta_set_var_4_p_0(Var_14, Var_15, Delta0_10, &Delta_11);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_11, STATE_VARIABLE_GoalInfo_0_12, &STATE_VARIABLE_GoalInfo_16_16);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_GoalInfo_16_16, STATE_VARIABLE_GoalInfo_13);
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_6_p_0(
  MR_Word Globals_7,
  MR_String ModuleName_8,
  MR_String PredName_9,
  MR_Integer ModeNum_10,
  MR_Word Args_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Integer slot_44 = ((MR_hash_string6(ModuleName_8)) & (MR_Integer) 63);
  MR_String str_45 = ((&transform_hlds__const_prop_vector_common_4[128 + slot_44]))->transform_hlds__const_prop__vector_common_type_4_0__vct_4_f_0;

  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_45 != NULL)) && ((strcmp(str_45, ModuleName_8) == 0))))
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
            MR_Word Var_1043;
            MR_Word Var_1044;
            MR_Word OpType_1101;
            MR_Word X_1102;
            MR_Word Y_1103;
            MR_Integer lo_32;
            MR_Integer hi_33;
            MR_Integer mid_34;
            MR_Integer result_35;

            succeeded = (ModeNum_10 == (MR_Integer) 0);
            if (succeeded)
            {
              OpType_1101 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[1]));
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1102 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                Var_1043 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                succeeded = (Var_1043 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1103 = ((MR_Word) ((MR_hl_field(1, Var_1043, (MR_Integer) 0))));
                  Var_1044 = ((MR_Word) ((MR_hl_field(1, Var_1043, (MR_Integer) 1))));
                  succeeded = (Var_1044 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    // binary string jump switch
                    ;
                    lo_32 = (MR_Integer) 0;
                    hi_33 = (MR_Integer) 3;
                    do
                    {
                      mid_34 = (((MR_Integer) ((MR_Unsigned) lo_32 + (MR_Unsigned) hi_33)) / (MR_Integer) 2);
                      result_35 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[44 + mid_34]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                      if ((result_35 == (MR_Integer) 0))
                      {
                        switch (((&transform_hlds__const_prop_vector_common_3[44 + mid_34]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "<"
                              ;
                              {
                                MR_Word Var_765 = ((MR_Word) ((MR_hl_field(0, Y_1103, (MR_Integer) 2))));
                                MR_Word Var_766;
                                MR_Word Var_767;
                                MR_Word Var_768;
                                MR_Word Var_769;
                                MR_Word FunctorY_777;
                                MR_Word IntegerY_778;

                                succeeded = ((MR_tag((MR_Word) Var_765)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_766 = ((MR_Word) ((MR_hl_field(2, Var_765, (MR_Integer) 2))));
                                  succeeded = (Var_766 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_767 = ((MR_Word) ((MR_hl_field(1, Var_766, (MR_Integer) 0))));
                                    Var_769 = ((MR_Word) ((MR_hl_field(1, Var_766, (MR_Integer) 1))));
                                    succeeded = (Var_769 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_777 = ((MR_Word) ((MR_hl_field(0, Var_767, (MR_Integer) 0))));
                                      Var_768 = ((MR_Word) ((MR_hl_field(0, Var_767, (MR_Integer) 1))));
                                      succeeded = (Var_768 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorY_777, &IntegerY_778);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_778);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_741 = ((MR_Word) ((MR_hl_field(0, X_1102, (MR_Integer) 2))));
                                            MR_Word Var_742;
                                            MR_Word Var_743;
                                            MR_Word Var_744;
                                            MR_Word Var_745;
                                            MR_Word FunctorX_746;
                                            MR_Word IntegerX_747;

                                            succeeded = ((MR_tag((MR_Word) Var_741)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_742 = ((MR_Word) ((MR_hl_field(2, Var_741, (MR_Integer) 2))));
                                              succeeded = (Var_742 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_743 = ((MR_Word) ((MR_hl_field(1, Var_742, (MR_Integer) 0))));
                                                Var_745 = ((MR_Word) ((MR_hl_field(1, Var_742, (MR_Integer) 1))));
                                                succeeded = (Var_745 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_746 = ((MR_Word) ((MR_hl_field(0, Var_743, (MR_Integer) 0))));
                                                  Var_744 = ((MR_Word) ((MR_hl_field(0, Var_743, (MR_Integer) 1))));
                                                  succeeded = (Var_744 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorX_746, &IntegerX_747);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_747, IntegerY_778);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_817 = ((MR_Word) ((MR_hl_field(0, X_1102, (MR_Integer) 2))));
                                MR_Word Var_818;
                                MR_Word Var_819;
                                MR_Word Var_820;
                                MR_Word Var_821;
                                MR_Word FunctorX_829;
                                MR_Word IntegerX_830;

                                succeeded = ((MR_tag((MR_Word) Var_817)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_818 = ((MR_Word) ((MR_hl_field(2, Var_817, (MR_Integer) 2))));
                                  succeeded = (Var_818 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_819 = ((MR_Word) ((MR_hl_field(1, Var_818, (MR_Integer) 0))));
                                    Var_821 = ((MR_Word) ((MR_hl_field(1, Var_818, (MR_Integer) 1))));
                                    succeeded = (Var_821 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_829 = ((MR_Word) ((MR_hl_field(0, Var_819, (MR_Integer) 0))));
                                      Var_820 = ((MR_Word) ((MR_hl_field(0, Var_819, (MR_Integer) 1))));
                                      succeeded = (Var_820 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorX_829, &IntegerX_830);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_830);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_793 = ((MR_Word) ((MR_hl_field(0, Y_1103, (MR_Integer) 2))));
                                            MR_Word Var_794;
                                            MR_Word Var_795;
                                            MR_Word Var_796;
                                            MR_Word Var_797;
                                            MR_Word FunctorY_798;
                                            MR_Word IntegerY_799;

                                            succeeded = ((MR_tag((MR_Word) Var_793)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_794 = ((MR_Word) ((MR_hl_field(2, Var_793, (MR_Integer) 2))));
                                              succeeded = (Var_794 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_795 = ((MR_Word) ((MR_hl_field(1, Var_794, (MR_Integer) 0))));
                                                Var_797 = ((MR_Word) ((MR_hl_field(1, Var_794, (MR_Integer) 1))));
                                                succeeded = (Var_797 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_798 = ((MR_Word) ((MR_hl_field(0, Var_795, (MR_Integer) 0))));
                                                  Var_796 = ((MR_Word) ((MR_hl_field(0, Var_795, (MR_Integer) 1))));
                                                  succeeded = (Var_796 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorY_798, &IntegerY_799);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_830, IntegerY_799);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_869 = ((MR_Word) ((MR_hl_field(0, X_1102, (MR_Integer) 2))));
                                MR_Word Var_870;
                                MR_Word Var_871;
                                MR_Word Var_872;
                                MR_Word Var_873;
                                MR_Word FunctorX_881;
                                MR_Word IntegerX_882;

                                succeeded = ((MR_tag((MR_Word) Var_869)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_870 = ((MR_Word) ((MR_hl_field(2, Var_869, (MR_Integer) 2))));
                                  succeeded = (Var_870 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_871 = ((MR_Word) ((MR_hl_field(1, Var_870, (MR_Integer) 0))));
                                    Var_873 = ((MR_Word) ((MR_hl_field(1, Var_870, (MR_Integer) 1))));
                                    succeeded = (Var_873 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_881 = ((MR_Word) ((MR_hl_field(0, Var_871, (MR_Integer) 0))));
                                      Var_872 = ((MR_Word) ((MR_hl_field(0, Var_871, (MR_Integer) 1))));
                                      succeeded = (Var_872 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorX_881, &IntegerX_882);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_882);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_845 = ((MR_Word) ((MR_hl_field(0, Y_1103, (MR_Integer) 2))));
                                            MR_Word Var_846;
                                            MR_Word Var_847;
                                            MR_Word Var_848;
                                            MR_Word Var_849;
                                            MR_Word FunctorY_850;
                                            MR_Word IntegerY_851;

                                            succeeded = ((MR_tag((MR_Word) Var_845)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_846 = ((MR_Word) ((MR_hl_field(2, Var_845, (MR_Integer) 2))));
                                              succeeded = (Var_846 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_847 = ((MR_Word) ((MR_hl_field(1, Var_846, (MR_Integer) 0))));
                                                Var_849 = ((MR_Word) ((MR_hl_field(1, Var_846, (MR_Integer) 1))));
                                                succeeded = (Var_849 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_850 = ((MR_Word) ((MR_hl_field(0, Var_847, (MR_Integer) 0))));
                                                  Var_848 = ((MR_Word) ((MR_hl_field(0, Var_847, (MR_Integer) 1))));
                                                  succeeded = (Var_848 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorY_850, &IntegerY_851);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_882, IntegerY_851);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_921 = ((MR_Word) ((MR_hl_field(0, Y_1103, (MR_Integer) 2))));
                                MR_Word Var_922;
                                MR_Word Var_923;
                                MR_Word Var_924;
                                MR_Word Var_925;
                                MR_Word FunctorY_933;
                                MR_Word IntegerY_934;

                                succeeded = ((MR_tag((MR_Word) Var_921)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_922 = ((MR_Word) ((MR_hl_field(2, Var_921, (MR_Integer) 2))));
                                  succeeded = (Var_922 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_923 = ((MR_Word) ((MR_hl_field(1, Var_922, (MR_Integer) 0))));
                                    Var_925 = ((MR_Word) ((MR_hl_field(1, Var_922, (MR_Integer) 1))));
                                    succeeded = (Var_925 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_933 = ((MR_Word) ((MR_hl_field(0, Var_923, (MR_Integer) 0))));
                                      Var_924 = ((MR_Word) ((MR_hl_field(0, Var_923, (MR_Integer) 1))));
                                      succeeded = (Var_924 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorY_933, &IntegerY_934);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_934);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_897 = ((MR_Word) ((MR_hl_field(0, X_1102, (MR_Integer) 2))));
                                            MR_Word Var_898;
                                            MR_Word Var_899;
                                            MR_Word Var_900;
                                            MR_Word Var_901;
                                            MR_Word FunctorX_902;
                                            MR_Word IntegerX_903;

                                            succeeded = ((MR_tag((MR_Word) Var_897)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_898 = ((MR_Word) ((MR_hl_field(2, Var_897, (MR_Integer) 2))));
                                              succeeded = (Var_898 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_899 = ((MR_Word) ((MR_hl_field(1, Var_898, (MR_Integer) 0))));
                                                Var_901 = ((MR_Word) ((MR_hl_field(1, Var_898, (MR_Integer) 1))));
                                                succeeded = (Var_901 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_902 = ((MR_Word) ((MR_hl_field(0, Var_899, (MR_Integer) 0))));
                                                  Var_900 = ((MR_Word) ((MR_hl_field(0, Var_899, (MR_Integer) 1))));
                                                  succeeded = (Var_900 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1101, FunctorX_902, &IntegerX_903);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_903, IntegerY_934);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 7:
        {
          // case "int16"
          ;
          {
            MR_Word X_211;
            MR_Word Y_212;
            MR_Word FunctorX_215;
            MR_Word FunctorY_218;
            MR_Word IntegerX_219;
            MR_Word IntegerY_220;
            MR_Word Var_221;
            MR_Word Var_222;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Word Var_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;
            MR_Word Var_232;
            MR_Integer lo_8;
            MR_Integer hi_9;
            MR_Integer mid_10;
            MR_Integer result_11;

            succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_211 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
              Var_221 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
              succeeded = (Var_221 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_212 = ((MR_Word) ((MR_hl_field(1, Var_221, (MR_Integer) 0))));
                Var_222 = ((MR_Word) ((MR_hl_field(1, Var_221, (MR_Integer) 1))));
                succeeded = (Var_222 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_223 = ((MR_Word) ((MR_hl_field(0, X_211, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_223)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_224 = ((MR_Word) ((MR_hl_field(2, Var_223, (MR_Integer) 2))));
                    succeeded = (Var_224 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_225 = ((MR_Word) ((MR_hl_field(1, Var_224, (MR_Integer) 0))));
                      Var_227 = ((MR_Word) ((MR_hl_field(1, Var_224, (MR_Integer) 1))));
                      succeeded = (Var_227 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FunctorX_215 = ((MR_Word) ((MR_hl_field(0, Var_225, (MR_Integer) 0))));
                        Var_226 = ((MR_Word) ((MR_hl_field(0, Var_225, (MR_Integer) 1))));
                        succeeded = (Var_226 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_228 = ((MR_Word) ((MR_hl_field(0, Y_212, (MR_Integer) 2))));
                          succeeded = ((MR_tag((MR_Word) Var_228)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_229 = ((MR_Word) ((MR_hl_field(2, Var_228, (MR_Integer) 2))));
                            succeeded = (Var_229 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_230 = ((MR_Word) ((MR_hl_field(1, Var_229, (MR_Integer) 0))));
                              Var_232 = ((MR_Word) ((MR_hl_field(1, Var_229, (MR_Integer) 1))));
                              succeeded = (Var_232 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                FunctorY_218 = ((MR_Word) ((MR_hl_field(0, Var_230, (MR_Integer) 0))));
                                Var_231 = ((MR_Word) ((MR_hl_field(0, Var_230, (MR_Integer) 1))));
                                succeeded = (Var_231 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[0]), FunctorX_215, &IntegerX_219);
                                  if (succeeded)
                                  {
                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[0]), FunctorY_218, &IntegerY_220);
                                    if (succeeded)
                                    {
                                      succeeded = (ModeNum_10 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        // binary string jump switch
                                        ;
                                        lo_8 = (MR_Integer) 0;
                                        hi_9 = (MR_Integer) 3;
                                        do
                                        {
                                          mid_10 = (((MR_Integer) ((MR_Unsigned) lo_8 + (MR_Unsigned) hi_9)) / (MR_Integer) 2);
                                          result_11 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[20 + mid_10]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                          if ((result_11 == (MR_Integer) 0))
                                          {
                                            switch (((&transform_hlds__const_prop_vector_common_3[20 + mid_10]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  // case "<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_219, IntegerY_220);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  // case "=<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_219, IntegerY_220);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                {
                                                  // case ">"
                                                  ;
                                                  succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_219, IntegerY_220);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 3:
                                                {
                                                  // case ">="
                                                  ;
                                                  succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_219, IntegerY_220);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 8:
        {
          // case "int"
          ;
          {
            MR_Word OpType_13;
            MR_Word X_14;
            MR_Word Y_15;
            MR_Word FunctorX_18;
            MR_Word FunctorY_21;
            MR_Word IntegerX_22;
            MR_Word IntegerY_23;
            MR_Word Var_49;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Integer lo_4;
            MR_Integer hi_5;
            MR_Integer mid_6;
            MR_Integer result_7;

            Var_49 = parse_tree__int_emu__target_op_type_1_f_0(Globals_7);
            succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_14 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_15 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_56 = ((MR_Word) ((MR_hl_field(0, X_14, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_57 = ((MR_Word) ((MR_hl_field(2, Var_56, (MR_Integer) 2))));
                    succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 0))));
                      Var_60 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 1))));
                      succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FunctorX_18 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 0))));
                        Var_59 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
                        succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_61 = ((MR_Word) ((MR_hl_field(0, Y_15, (MR_Integer) 2))));
                          succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_62 = ((MR_Word) ((MR_hl_field(2, Var_61, (MR_Integer) 2))));
                            succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_63 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
                              Var_65 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 1))));
                              succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                FunctorY_21 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 0))));
                                Var_64 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 1))));
                                succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  {
                                    OpType_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, OpType_13, 0) = ((MR_Box) (Var_49));
                                  }
                                  succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_13, FunctorX_18, &IntegerX_22);
                                  if (succeeded)
                                  {
                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_13, FunctorY_21, &IntegerY_23);
                                    if (succeeded)
                                    {
                                      succeeded = (ModeNum_10 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        // binary string jump switch
                                        ;
                                        lo_4 = (MR_Integer) 0;
                                        hi_5 = (MR_Integer) 3;
                                        do
                                        {
                                          mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
                                          result_7 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[16 + mid_6]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                          if ((result_7 == (MR_Integer) 0))
                                          {
                                            switch (((&transform_hlds__const_prop_vector_common_3[16 + mid_6]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  // case "<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_22, IntegerY_23);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  // case "=<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_22, IntegerY_23);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                {
                                                  // case ">"
                                                  ;
                                                  succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_22, IntegerY_23);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 3:
                                                {
                                                  // case ">="
                                                  ;
                                                  succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_22, IntegerY_23);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case "uint8"
          ;
          {
            MR_Word Var_1821;
            MR_Word Var_1822;
            MR_Word OpType_1879;
            MR_Word X_1880;
            MR_Word Y_1881;
            MR_Integer lo_40;
            MR_Integer hi_41;
            MR_Integer mid_42;
            MR_Integer result_43;

            succeeded = (ModeNum_10 == (MR_Integer) 0);
            if (succeeded)
            {
              OpType_1879 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[3]));
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1880 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                Var_1821 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                succeeded = (Var_1821 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1881 = ((MR_Word) ((MR_hl_field(1, Var_1821, (MR_Integer) 0))));
                  Var_1822 = ((MR_Word) ((MR_hl_field(1, Var_1821, (MR_Integer) 1))));
                  succeeded = (Var_1822 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    // binary string jump switch
                    ;
                    lo_40 = (MR_Integer) 0;
                    hi_41 = (MR_Integer) 3;
                    do
                    {
                      mid_42 = (((MR_Integer) ((MR_Unsigned) lo_40 + (MR_Unsigned) hi_41)) / (MR_Integer) 2);
                      result_43 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[52 + mid_42]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                      if ((result_43 == (MR_Integer) 0))
                      {
                        switch (((&transform_hlds__const_prop_vector_common_3[52 + mid_42]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "<"
                              ;
                              {
                                MR_Word Var_1543 = ((MR_Word) ((MR_hl_field(0, Y_1881, (MR_Integer) 2))));
                                MR_Word Var_1544;
                                MR_Word Var_1545;
                                MR_Word Var_1546;
                                MR_Word Var_1547;
                                MR_Word FunctorY_1555;
                                MR_Word IntegerY_1556;

                                succeeded = ((MR_tag((MR_Word) Var_1543)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1544 = ((MR_Word) ((MR_hl_field(2, Var_1543, (MR_Integer) 2))));
                                  succeeded = (Var_1544 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1545 = ((MR_Word) ((MR_hl_field(1, Var_1544, (MR_Integer) 0))));
                                    Var_1547 = ((MR_Word) ((MR_hl_field(1, Var_1544, (MR_Integer) 1))));
                                    succeeded = (Var_1547 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_1555 = ((MR_Word) ((MR_hl_field(0, Var_1545, (MR_Integer) 0))));
                                      Var_1546 = ((MR_Word) ((MR_hl_field(0, Var_1545, (MR_Integer) 1))));
                                      succeeded = (Var_1546 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorY_1555, &IntegerY_1556);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_1556);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1519 = ((MR_Word) ((MR_hl_field(0, X_1880, (MR_Integer) 2))));
                                            MR_Word Var_1520;
                                            MR_Word Var_1521;
                                            MR_Word Var_1522;
                                            MR_Word Var_1523;
                                            MR_Word FunctorX_1524;
                                            MR_Word IntegerX_1525;

                                            succeeded = ((MR_tag((MR_Word) Var_1519)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1520 = ((MR_Word) ((MR_hl_field(2, Var_1519, (MR_Integer) 2))));
                                              succeeded = (Var_1520 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1521 = ((MR_Word) ((MR_hl_field(1, Var_1520, (MR_Integer) 0))));
                                                Var_1523 = ((MR_Word) ((MR_hl_field(1, Var_1520, (MR_Integer) 1))));
                                                succeeded = (Var_1523 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_1524 = ((MR_Word) ((MR_hl_field(0, Var_1521, (MR_Integer) 0))));
                                                  Var_1522 = ((MR_Word) ((MR_hl_field(0, Var_1521, (MR_Integer) 1))));
                                                  succeeded = (Var_1522 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorX_1524, &IntegerX_1525);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_1525, IntegerY_1556);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_1595 = ((MR_Word) ((MR_hl_field(0, X_1880, (MR_Integer) 2))));
                                MR_Word Var_1596;
                                MR_Word Var_1597;
                                MR_Word Var_1598;
                                MR_Word Var_1599;
                                MR_Word FunctorX_1607;
                                MR_Word IntegerX_1608;

                                succeeded = ((MR_tag((MR_Word) Var_1595)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1596 = ((MR_Word) ((MR_hl_field(2, Var_1595, (MR_Integer) 2))));
                                  succeeded = (Var_1596 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1597 = ((MR_Word) ((MR_hl_field(1, Var_1596, (MR_Integer) 0))));
                                    Var_1599 = ((MR_Word) ((MR_hl_field(1, Var_1596, (MR_Integer) 1))));
                                    succeeded = (Var_1599 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_1607 = ((MR_Word) ((MR_hl_field(0, Var_1597, (MR_Integer) 0))));
                                      Var_1598 = ((MR_Word) ((MR_hl_field(0, Var_1597, (MR_Integer) 1))));
                                      succeeded = (Var_1598 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorX_1607, &IntegerX_1608);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_1608);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1571 = ((MR_Word) ((MR_hl_field(0, Y_1881, (MR_Integer) 2))));
                                            MR_Word Var_1572;
                                            MR_Word Var_1573;
                                            MR_Word Var_1574;
                                            MR_Word Var_1575;
                                            MR_Word FunctorY_1576;
                                            MR_Word IntegerY_1577;

                                            succeeded = ((MR_tag((MR_Word) Var_1571)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1572 = ((MR_Word) ((MR_hl_field(2, Var_1571, (MR_Integer) 2))));
                                              succeeded = (Var_1572 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1573 = ((MR_Word) ((MR_hl_field(1, Var_1572, (MR_Integer) 0))));
                                                Var_1575 = ((MR_Word) ((MR_hl_field(1, Var_1572, (MR_Integer) 1))));
                                                succeeded = (Var_1575 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_1576 = ((MR_Word) ((MR_hl_field(0, Var_1573, (MR_Integer) 0))));
                                                  Var_1574 = ((MR_Word) ((MR_hl_field(0, Var_1573, (MR_Integer) 1))));
                                                  succeeded = (Var_1574 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorY_1576, &IntegerY_1577);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_1608, IntegerY_1577);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_1647 = ((MR_Word) ((MR_hl_field(0, X_1880, (MR_Integer) 2))));
                                MR_Word Var_1648;
                                MR_Word Var_1649;
                                MR_Word Var_1650;
                                MR_Word Var_1651;
                                MR_Word FunctorX_1659;
                                MR_Word IntegerX_1660;

                                succeeded = ((MR_tag((MR_Word) Var_1647)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1648 = ((MR_Word) ((MR_hl_field(2, Var_1647, (MR_Integer) 2))));
                                  succeeded = (Var_1648 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1649 = ((MR_Word) ((MR_hl_field(1, Var_1648, (MR_Integer) 0))));
                                    Var_1651 = ((MR_Word) ((MR_hl_field(1, Var_1648, (MR_Integer) 1))));
                                    succeeded = (Var_1651 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_1659 = ((MR_Word) ((MR_hl_field(0, Var_1649, (MR_Integer) 0))));
                                      Var_1650 = ((MR_Word) ((MR_hl_field(0, Var_1649, (MR_Integer) 1))));
                                      succeeded = (Var_1650 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorX_1659, &IntegerX_1660);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_1660);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1623 = ((MR_Word) ((MR_hl_field(0, Y_1881, (MR_Integer) 2))));
                                            MR_Word Var_1624;
                                            MR_Word Var_1625;
                                            MR_Word Var_1626;
                                            MR_Word Var_1627;
                                            MR_Word FunctorY_1628;
                                            MR_Word IntegerY_1629;

                                            succeeded = ((MR_tag((MR_Word) Var_1623)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1624 = ((MR_Word) ((MR_hl_field(2, Var_1623, (MR_Integer) 2))));
                                              succeeded = (Var_1624 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1625 = ((MR_Word) ((MR_hl_field(1, Var_1624, (MR_Integer) 0))));
                                                Var_1627 = ((MR_Word) ((MR_hl_field(1, Var_1624, (MR_Integer) 1))));
                                                succeeded = (Var_1627 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_1628 = ((MR_Word) ((MR_hl_field(0, Var_1625, (MR_Integer) 0))));
                                                  Var_1626 = ((MR_Word) ((MR_hl_field(0, Var_1625, (MR_Integer) 1))));
                                                  succeeded = (Var_1626 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorY_1628, &IntegerY_1629);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_1660, IntegerY_1629);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_1699 = ((MR_Word) ((MR_hl_field(0, Y_1881, (MR_Integer) 2))));
                                MR_Word Var_1700;
                                MR_Word Var_1701;
                                MR_Word Var_1702;
                                MR_Word Var_1703;
                                MR_Word FunctorY_1711;
                                MR_Word IntegerY_1712;

                                succeeded = ((MR_tag((MR_Word) Var_1699)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1700 = ((MR_Word) ((MR_hl_field(2, Var_1699, (MR_Integer) 2))));
                                  succeeded = (Var_1700 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1701 = ((MR_Word) ((MR_hl_field(1, Var_1700, (MR_Integer) 0))));
                                    Var_1703 = ((MR_Word) ((MR_hl_field(1, Var_1700, (MR_Integer) 1))));
                                    succeeded = (Var_1703 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_1711 = ((MR_Word) ((MR_hl_field(0, Var_1701, (MR_Integer) 0))));
                                      Var_1702 = ((MR_Word) ((MR_hl_field(0, Var_1701, (MR_Integer) 1))));
                                      succeeded = (Var_1702 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorY_1711, &IntegerY_1712);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_1712);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1675 = ((MR_Word) ((MR_hl_field(0, X_1880, (MR_Integer) 2))));
                                            MR_Word Var_1676;
                                            MR_Word Var_1677;
                                            MR_Word Var_1678;
                                            MR_Word Var_1679;
                                            MR_Word FunctorX_1680;
                                            MR_Word IntegerX_1681;

                                            succeeded = ((MR_tag((MR_Word) Var_1675)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1676 = ((MR_Word) ((MR_hl_field(2, Var_1675, (MR_Integer) 2))));
                                              succeeded = (Var_1676 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1677 = ((MR_Word) ((MR_hl_field(1, Var_1676, (MR_Integer) 0))));
                                                Var_1679 = ((MR_Word) ((MR_hl_field(1, Var_1676, (MR_Integer) 1))));
                                                succeeded = (Var_1679 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_1680 = ((MR_Word) ((MR_hl_field(0, Var_1677, (MR_Integer) 0))));
                                                  Var_1678 = ((MR_Word) ((MR_hl_field(0, Var_1677, (MR_Integer) 1))));
                                                  succeeded = (Var_1678 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1879, FunctorX_1680, &IntegerX_1681);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_1681, IntegerY_1712);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 14:
        {
          // case "private_builtin"
          ;
          {
            MR_Word TypeOfX_46;
            MR_Word TypeOfY_47;
            MR_Word Result0_48;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word X_176;
            MR_Word Y_177;

            succeeded = (strcmp(PredName_9, (MR_String) "typed_unify") == 0);
            if (succeeded)
            {
              succeeded = (ModeNum_10 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeOfX_46 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                  Var_127 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                  succeeded = (Var_127 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeOfY_47 = ((MR_Word) ((MR_hl_field(1, Var_127, (MR_Integer) 0))));
                    Var_128 = ((MR_Word) ((MR_hl_field(1, Var_127, (MR_Integer) 1))));
                    succeeded = (Var_128 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      X_176 = ((MR_Word) ((MR_hl_field(1, Var_128, (MR_Integer) 0))));
                      Var_129 = ((MR_Word) ((MR_hl_field(1, Var_128, (MR_Integer) 1))));
                      succeeded = (Var_129 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Y_177 = ((MR_Word) ((MR_hl_field(1, Var_129, (MR_Integer) 0))));
                        Var_130 = ((MR_Word) ((MR_hl_field(1, Var_129, (MR_Integer) 1))));
                        succeeded = (Var_130 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = transform_hlds__const_prop__eval_unify_3_p_0(TypeOfX_46, TypeOfY_47, &Result0_48);
                          if (succeeded)
                            switch (Result0_48) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  *Result_12 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 1:
                                succeeded = transform_hlds__const_prop__eval_unify_3_p_0(X_176, Y_177, Result_12);
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
        }
        break;
      case (MR_Integer) 20:
        {
          // case "uint"
          ;
          {
            MR_Word Var_66;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word OpType_167;
            MR_Word X_168;
            MR_Word Y_169;
            MR_Integer lo_24;
            MR_Integer hi_25;
            MR_Integer mid_26;
            MR_Integer result_27;

            Var_66 = parse_tree__int_emu__target_op_type_1_f_0(Globals_7);
            succeeded = (ModeNum_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_168 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                Var_71 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_169 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
                  Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
                  succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      OpType_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, OpType_167, 0) = ((MR_Box) (Var_66));
                    }
                    // binary string jump switch
                    ;
                    lo_24 = (MR_Integer) 0;
                    hi_25 = (MR_Integer) 3;
                    do
                    {
                      mid_26 = (((MR_Integer) ((MR_Unsigned) lo_24 + (MR_Unsigned) hi_25)) / (MR_Integer) 2);
                      result_27 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[36 + mid_26]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                      if ((result_27 == (MR_Integer) 0))
                      {
                        switch (((&transform_hlds__const_prop_vector_common_3[36 + mid_26]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "<"
                              ;
                              {
                                MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Y_169, (MR_Integer) 2))));
                                MR_Word Var_74;
                                MR_Word Var_75;
                                MR_Word Var_76;
                                MR_Word Var_77;
                                MR_Word FunctorY_136;
                                MR_Word IntegerY_138;

                                succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_74 = ((MR_Word) ((MR_hl_field(2, Var_73, (MR_Integer) 2))));
                                  succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                                    Var_77 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                                    succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_136 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
                                      Var_76 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
                                      succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorY_136, &IntegerY_138);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_138);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, X_168, (MR_Integer) 2))));
                                            MR_Word Var_79;
                                            MR_Word Var_80;
                                            MR_Word Var_81;
                                            MR_Word Var_82;
                                            MR_Word FunctorX_131;
                                            MR_Word IntegerX_132;

                                            succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_79 = ((MR_Word) ((MR_hl_field(2, Var_78, (MR_Integer) 2))));
                                              succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_80 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 0))));
                                                Var_82 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 1))));
                                                succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_131 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 0))));
                                                  Var_81 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 1))));
                                                  succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorX_131, &IntegerX_132);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_132, IntegerY_138);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, X_168, (MR_Integer) 2))));
                                MR_Word Var_84;
                                MR_Word Var_85;
                                MR_Word Var_86;
                                MR_Word Var_87;
                                MR_Word FunctorX_143;
                                MR_Word IntegerX_145;

                                succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_84 = ((MR_Word) ((MR_hl_field(2, Var_83, (MR_Integer) 2))));
                                  succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
                                    Var_87 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));
                                    succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_143 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 0))));
                                      Var_86 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 1))));
                                      succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorX_143, &IntegerX_145);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_145);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Y_169, (MR_Integer) 2))));
                                            MR_Word Var_89;
                                            MR_Word Var_90;
                                            MR_Word Var_91;
                                            MR_Word Var_92;
                                            MR_Word FunctorY_139;
                                            MR_Word IntegerY_140;

                                            succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_89 = ((MR_Word) ((MR_hl_field(2, Var_88, (MR_Integer) 2))));
                                              succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_90 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 0))));
                                                Var_92 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 1))));
                                                succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_139 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
                                                  Var_91 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 1))));
                                                  succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorY_139, &IntegerY_140);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_145, IntegerY_140);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, X_168, (MR_Integer) 2))));
                                MR_Word Var_94;
                                MR_Word Var_95;
                                MR_Word Var_96;
                                MR_Word Var_97;
                                MR_Word FunctorX_151;
                                MR_Word IntegerX_153;

                                succeeded = ((MR_tag((MR_Word) Var_93)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_94 = ((MR_Word) ((MR_hl_field(2, Var_93, (MR_Integer) 2))));
                                  succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_95 = ((MR_Word) ((MR_hl_field(1, Var_94, (MR_Integer) 0))));
                                    Var_97 = ((MR_Word) ((MR_hl_field(1, Var_94, (MR_Integer) 1))));
                                    succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_151 = ((MR_Word) ((MR_hl_field(0, Var_95, (MR_Integer) 0))));
                                      Var_96 = ((MR_Word) ((MR_hl_field(0, Var_95, (MR_Integer) 1))));
                                      succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorX_151, &IntegerX_153);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_153);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, Y_169, (MR_Integer) 2))));
                                            MR_Word Var_99;
                                            MR_Word Var_100;
                                            MR_Word Var_101;
                                            MR_Word Var_102;
                                            MR_Word FunctorY_147;
                                            MR_Word IntegerY_148;

                                            succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_99 = ((MR_Word) ((MR_hl_field(2, Var_98, (MR_Integer) 2))));
                                              succeeded = (Var_99 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_100 = ((MR_Word) ((MR_hl_field(1, Var_99, (MR_Integer) 0))));
                                                Var_102 = ((MR_Word) ((MR_hl_field(1, Var_99, (MR_Integer) 1))));
                                                succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_147 = ((MR_Word) ((MR_hl_field(0, Var_100, (MR_Integer) 0))));
                                                  Var_101 = ((MR_Word) ((MR_hl_field(0, Var_100, (MR_Integer) 1))));
                                                  succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorY_147, &IntegerY_148);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_153, IntegerY_148);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, Y_169, (MR_Integer) 2))));
                                MR_Word Var_104;
                                MR_Word Var_105;
                                MR_Word Var_106;
                                MR_Word Var_107;
                                MR_Word FunctorY_160;
                                MR_Word IntegerY_162;

                                succeeded = ((MR_tag((MR_Word) Var_103)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_104 = ((MR_Word) ((MR_hl_field(2, Var_103, (MR_Integer) 2))));
                                  succeeded = (Var_104 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_105 = ((MR_Word) ((MR_hl_field(1, Var_104, (MR_Integer) 0))));
                                    Var_107 = ((MR_Word) ((MR_hl_field(1, Var_104, (MR_Integer) 1))));
                                    succeeded = (Var_107 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_160 = ((MR_Word) ((MR_hl_field(0, Var_105, (MR_Integer) 0))));
                                      Var_106 = ((MR_Word) ((MR_hl_field(0, Var_105, (MR_Integer) 1))));
                                      succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorY_160, &IntegerY_162);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_162);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, X_168, (MR_Integer) 2))));
                                            MR_Word Var_109;
                                            MR_Word Var_110;
                                            MR_Word Var_111;
                                            MR_Word Var_112;
                                            MR_Word FunctorX_155;
                                            MR_Word IntegerX_156;

                                            succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_109 = ((MR_Word) ((MR_hl_field(2, Var_108, (MR_Integer) 2))));
                                              succeeded = (Var_109 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_110 = ((MR_Word) ((MR_hl_field(1, Var_109, (MR_Integer) 0))));
                                                Var_112 = ((MR_Word) ((MR_hl_field(1, Var_109, (MR_Integer) 1))));
                                                succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_155 = ((MR_Word) ((MR_hl_field(0, Var_110, (MR_Integer) 0))));
                                                  Var_111 = ((MR_Word) ((MR_hl_field(0, Var_110, (MR_Integer) 1))));
                                                  succeeded = (Var_111 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_167, FunctorX_155, &IntegerX_156);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_156, IntegerY_162);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 23:
        {
          // case "int8"
          ;
          {
            MR_Word X_316;
            MR_Word Y_317;
            MR_Word FunctorX_320;
            MR_Word FunctorY_323;
            MR_Word IntegerX_324;
            MR_Word IntegerY_325;
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
            MR_Integer lo_20;
            MR_Integer hi_21;
            MR_Integer mid_22;
            MR_Integer result_23;

            succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_316 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
              Var_326 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
              succeeded = (Var_326 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_317 = ((MR_Word) ((MR_hl_field(1, Var_326, (MR_Integer) 0))));
                Var_327 = ((MR_Word) ((MR_hl_field(1, Var_326, (MR_Integer) 1))));
                succeeded = (Var_327 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_328 = ((MR_Word) ((MR_hl_field(0, X_316, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_328)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_329 = ((MR_Word) ((MR_hl_field(2, Var_328, (MR_Integer) 2))));
                    succeeded = (Var_329 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_330 = ((MR_Word) ((MR_hl_field(1, Var_329, (MR_Integer) 0))));
                      Var_332 = ((MR_Word) ((MR_hl_field(1, Var_329, (MR_Integer) 1))));
                      succeeded = (Var_332 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FunctorX_320 = ((MR_Word) ((MR_hl_field(0, Var_330, (MR_Integer) 0))));
                        Var_331 = ((MR_Word) ((MR_hl_field(0, Var_330, (MR_Integer) 1))));
                        succeeded = (Var_331 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_333 = ((MR_Word) ((MR_hl_field(0, Y_317, (MR_Integer) 2))));
                          succeeded = ((MR_tag((MR_Word) Var_333)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_334 = ((MR_Word) ((MR_hl_field(2, Var_333, (MR_Integer) 2))));
                            succeeded = (Var_334 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_335 = ((MR_Word) ((MR_hl_field(1, Var_334, (MR_Integer) 0))));
                              Var_337 = ((MR_Word) ((MR_hl_field(1, Var_334, (MR_Integer) 1))));
                              succeeded = (Var_337 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                FunctorY_323 = ((MR_Word) ((MR_hl_field(0, Var_335, (MR_Integer) 0))));
                                Var_336 = ((MR_Word) ((MR_hl_field(0, Var_335, (MR_Integer) 1))));
                                succeeded = (Var_336 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[3]), FunctorX_320, &IntegerX_324);
                                  if (succeeded)
                                  {
                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[3]), FunctorY_323, &IntegerY_325);
                                    if (succeeded)
                                    {
                                      succeeded = (ModeNum_10 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        // binary string jump switch
                                        ;
                                        lo_20 = (MR_Integer) 0;
                                        hi_21 = (MR_Integer) 3;
                                        do
                                        {
                                          mid_22 = (((MR_Integer) ((MR_Unsigned) lo_20 + (MR_Unsigned) hi_21)) / (MR_Integer) 2);
                                          result_23 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[32 + mid_22]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                          if ((result_23 == (MR_Integer) 0))
                                          {
                                            switch (((&transform_hlds__const_prop_vector_common_3[32 + mid_22]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  // case "<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_324, IntegerY_325);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  // case "=<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_324, IntegerY_325);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                {
                                                  // case ">"
                                                  ;
                                                  succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_324, IntegerY_325);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 3:
                                                {
                                                  // case ">="
                                                  ;
                                                  succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_324, IntegerY_325);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 28:
        {
          // case "uint64"
          ;
          {
            MR_Word Var_1432;
            MR_Word Var_1433;
            MR_Word OpType_1490;
            MR_Word X_1491;
            MR_Word Y_1492;
            MR_Integer lo_36;
            MR_Integer hi_37;
            MR_Integer mid_38;
            MR_Integer result_39;

            succeeded = (ModeNum_10 == (MR_Integer) 0);
            if (succeeded)
            {
              OpType_1490 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[2]));
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1491 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                Var_1432 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                succeeded = (Var_1432 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1492 = ((MR_Word) ((MR_hl_field(1, Var_1432, (MR_Integer) 0))));
                  Var_1433 = ((MR_Word) ((MR_hl_field(1, Var_1432, (MR_Integer) 1))));
                  succeeded = (Var_1433 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    // binary string jump switch
                    ;
                    lo_36 = (MR_Integer) 0;
                    hi_37 = (MR_Integer) 3;
                    do
                    {
                      mid_38 = (((MR_Integer) ((MR_Unsigned) lo_36 + (MR_Unsigned) hi_37)) / (MR_Integer) 2);
                      result_39 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[48 + mid_38]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                      if ((result_39 == (MR_Integer) 0))
                      {
                        switch (((&transform_hlds__const_prop_vector_common_3[48 + mid_38]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "<"
                              ;
                              {
                                MR_Word Var_1154 = ((MR_Word) ((MR_hl_field(0, Y_1492, (MR_Integer) 2))));
                                MR_Word Var_1155;
                                MR_Word Var_1156;
                                MR_Word Var_1157;
                                MR_Word Var_1158;
                                MR_Word FunctorY_1166;
                                MR_Word IntegerY_1167;

                                succeeded = ((MR_tag((MR_Word) Var_1154)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1155 = ((MR_Word) ((MR_hl_field(2, Var_1154, (MR_Integer) 2))));
                                  succeeded = (Var_1155 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1156 = ((MR_Word) ((MR_hl_field(1, Var_1155, (MR_Integer) 0))));
                                    Var_1158 = ((MR_Word) ((MR_hl_field(1, Var_1155, (MR_Integer) 1))));
                                    succeeded = (Var_1158 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_1166 = ((MR_Word) ((MR_hl_field(0, Var_1156, (MR_Integer) 0))));
                                      Var_1157 = ((MR_Word) ((MR_hl_field(0, Var_1156, (MR_Integer) 1))));
                                      succeeded = (Var_1157 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorY_1166, &IntegerY_1167);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_1167);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1130 = ((MR_Word) ((MR_hl_field(0, X_1491, (MR_Integer) 2))));
                                            MR_Word Var_1131;
                                            MR_Word Var_1132;
                                            MR_Word Var_1133;
                                            MR_Word Var_1134;
                                            MR_Word FunctorX_1135;
                                            MR_Word IntegerX_1136;

                                            succeeded = ((MR_tag((MR_Word) Var_1130)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1131 = ((MR_Word) ((MR_hl_field(2, Var_1130, (MR_Integer) 2))));
                                              succeeded = (Var_1131 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1132 = ((MR_Word) ((MR_hl_field(1, Var_1131, (MR_Integer) 0))));
                                                Var_1134 = ((MR_Word) ((MR_hl_field(1, Var_1131, (MR_Integer) 1))));
                                                succeeded = (Var_1134 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_1135 = ((MR_Word) ((MR_hl_field(0, Var_1132, (MR_Integer) 0))));
                                                  Var_1133 = ((MR_Word) ((MR_hl_field(0, Var_1132, (MR_Integer) 1))));
                                                  succeeded = (Var_1133 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorX_1135, &IntegerX_1136);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_1136, IntegerY_1167);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_1206 = ((MR_Word) ((MR_hl_field(0, X_1491, (MR_Integer) 2))));
                                MR_Word Var_1207;
                                MR_Word Var_1208;
                                MR_Word Var_1209;
                                MR_Word Var_1210;
                                MR_Word FunctorX_1218;
                                MR_Word IntegerX_1219;

                                succeeded = ((MR_tag((MR_Word) Var_1206)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1207 = ((MR_Word) ((MR_hl_field(2, Var_1206, (MR_Integer) 2))));
                                  succeeded = (Var_1207 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1208 = ((MR_Word) ((MR_hl_field(1, Var_1207, (MR_Integer) 0))));
                                    Var_1210 = ((MR_Word) ((MR_hl_field(1, Var_1207, (MR_Integer) 1))));
                                    succeeded = (Var_1210 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_1218 = ((MR_Word) ((MR_hl_field(0, Var_1208, (MR_Integer) 0))));
                                      Var_1209 = ((MR_Word) ((MR_hl_field(0, Var_1208, (MR_Integer) 1))));
                                      succeeded = (Var_1209 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorX_1218, &IntegerX_1219);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_1219);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1182 = ((MR_Word) ((MR_hl_field(0, Y_1492, (MR_Integer) 2))));
                                            MR_Word Var_1183;
                                            MR_Word Var_1184;
                                            MR_Word Var_1185;
                                            MR_Word Var_1186;
                                            MR_Word FunctorY_1187;
                                            MR_Word IntegerY_1188;

                                            succeeded = ((MR_tag((MR_Word) Var_1182)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1183 = ((MR_Word) ((MR_hl_field(2, Var_1182, (MR_Integer) 2))));
                                              succeeded = (Var_1183 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1184 = ((MR_Word) ((MR_hl_field(1, Var_1183, (MR_Integer) 0))));
                                                Var_1186 = ((MR_Word) ((MR_hl_field(1, Var_1183, (MR_Integer) 1))));
                                                succeeded = (Var_1186 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_1187 = ((MR_Word) ((MR_hl_field(0, Var_1184, (MR_Integer) 0))));
                                                  Var_1185 = ((MR_Word) ((MR_hl_field(0, Var_1184, (MR_Integer) 1))));
                                                  succeeded = (Var_1185 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorY_1187, &IntegerY_1188);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_1219, IntegerY_1188);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_1258 = ((MR_Word) ((MR_hl_field(0, X_1491, (MR_Integer) 2))));
                                MR_Word Var_1259;
                                MR_Word Var_1260;
                                MR_Word Var_1261;
                                MR_Word Var_1262;
                                MR_Word FunctorX_1270;
                                MR_Word IntegerX_1271;

                                succeeded = ((MR_tag((MR_Word) Var_1258)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1259 = ((MR_Word) ((MR_hl_field(2, Var_1258, (MR_Integer) 2))));
                                  succeeded = (Var_1259 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1260 = ((MR_Word) ((MR_hl_field(1, Var_1259, (MR_Integer) 0))));
                                    Var_1262 = ((MR_Word) ((MR_hl_field(1, Var_1259, (MR_Integer) 1))));
                                    succeeded = (Var_1262 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_1270 = ((MR_Word) ((MR_hl_field(0, Var_1260, (MR_Integer) 0))));
                                      Var_1261 = ((MR_Word) ((MR_hl_field(0, Var_1260, (MR_Integer) 1))));
                                      succeeded = (Var_1261 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorX_1270, &IntegerX_1271);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_1271);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1234 = ((MR_Word) ((MR_hl_field(0, Y_1492, (MR_Integer) 2))));
                                            MR_Word Var_1235;
                                            MR_Word Var_1236;
                                            MR_Word Var_1237;
                                            MR_Word Var_1238;
                                            MR_Word FunctorY_1239;
                                            MR_Word IntegerY_1240;

                                            succeeded = ((MR_tag((MR_Word) Var_1234)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1235 = ((MR_Word) ((MR_hl_field(2, Var_1234, (MR_Integer) 2))));
                                              succeeded = (Var_1235 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1236 = ((MR_Word) ((MR_hl_field(1, Var_1235, (MR_Integer) 0))));
                                                Var_1238 = ((MR_Word) ((MR_hl_field(1, Var_1235, (MR_Integer) 1))));
                                                succeeded = (Var_1238 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_1239 = ((MR_Word) ((MR_hl_field(0, Var_1236, (MR_Integer) 0))));
                                                  Var_1237 = ((MR_Word) ((MR_hl_field(0, Var_1236, (MR_Integer) 1))));
                                                  succeeded = (Var_1237 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorY_1239, &IntegerY_1240);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_1271, IntegerY_1240);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_1310 = ((MR_Word) ((MR_hl_field(0, Y_1492, (MR_Integer) 2))));
                                MR_Word Var_1311;
                                MR_Word Var_1312;
                                MR_Word Var_1313;
                                MR_Word Var_1314;
                                MR_Word FunctorY_1322;
                                MR_Word IntegerY_1323;

                                succeeded = ((MR_tag((MR_Word) Var_1310)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_1311 = ((MR_Word) ((MR_hl_field(2, Var_1310, (MR_Integer) 2))));
                                  succeeded = (Var_1311 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_1312 = ((MR_Word) ((MR_hl_field(1, Var_1311, (MR_Integer) 0))));
                                    Var_1314 = ((MR_Word) ((MR_hl_field(1, Var_1311, (MR_Integer) 1))));
                                    succeeded = (Var_1314 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_1322 = ((MR_Word) ((MR_hl_field(0, Var_1312, (MR_Integer) 0))));
                                      Var_1313 = ((MR_Word) ((MR_hl_field(0, Var_1312, (MR_Integer) 1))));
                                      succeeded = (Var_1313 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorY_1322, &IntegerY_1323);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_1323);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_1286 = ((MR_Word) ((MR_hl_field(0, X_1491, (MR_Integer) 2))));
                                            MR_Word Var_1287;
                                            MR_Word Var_1288;
                                            MR_Word Var_1289;
                                            MR_Word Var_1290;
                                            MR_Word FunctorX_1291;
                                            MR_Word IntegerX_1292;

                                            succeeded = ((MR_tag((MR_Word) Var_1286)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_1287 = ((MR_Word) ((MR_hl_field(2, Var_1286, (MR_Integer) 2))));
                                              succeeded = (Var_1287 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_1288 = ((MR_Word) ((MR_hl_field(1, Var_1287, (MR_Integer) 0))));
                                                Var_1290 = ((MR_Word) ((MR_hl_field(1, Var_1287, (MR_Integer) 1))));
                                                succeeded = (Var_1290 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_1291 = ((MR_Word) ((MR_hl_field(0, Var_1288, (MR_Integer) 0))));
                                                  Var_1289 = ((MR_Word) ((MR_hl_field(0, Var_1288, (MR_Integer) 1))));
                                                  succeeded = (Var_1289 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_1490, FunctorX_1291, &IntegerX_1292);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_1292, IntegerY_1323);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 33:
        {
          // case "uint16"
          ;
          {
            MR_Word Var_654;
            MR_Word Var_655;
            MR_Word OpType_712;
            MR_Word X_713;
            MR_Word Y_714;
            MR_Integer lo_28;
            MR_Integer hi_29;
            MR_Integer mid_30;
            MR_Integer result_31;

            succeeded = (ModeNum_10 == (MR_Integer) 0);
            if (succeeded)
            {
              OpType_712 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[0]));
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_713 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                Var_654 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                succeeded = (Var_654 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_714 = ((MR_Word) ((MR_hl_field(1, Var_654, (MR_Integer) 0))));
                  Var_655 = ((MR_Word) ((MR_hl_field(1, Var_654, (MR_Integer) 1))));
                  succeeded = (Var_655 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    // binary string jump switch
                    ;
                    lo_28 = (MR_Integer) 0;
                    hi_29 = (MR_Integer) 3;
                    do
                    {
                      mid_30 = (((MR_Integer) ((MR_Unsigned) lo_28 + (MR_Unsigned) hi_29)) / (MR_Integer) 2);
                      result_31 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[40 + mid_30]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                      if ((result_31 == (MR_Integer) 0))
                      {
                        switch (((&transform_hlds__const_prop_vector_common_3[40 + mid_30]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "<"
                              ;
                              {
                                MR_Word Var_376 = ((MR_Word) ((MR_hl_field(0, Y_714, (MR_Integer) 2))));
                                MR_Word Var_377;
                                MR_Word Var_378;
                                MR_Word Var_379;
                                MR_Word Var_380;
                                MR_Word FunctorY_388;
                                MR_Word IntegerY_389;

                                succeeded = ((MR_tag((MR_Word) Var_376)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_377 = ((MR_Word) ((MR_hl_field(2, Var_376, (MR_Integer) 2))));
                                  succeeded = (Var_377 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_378 = ((MR_Word) ((MR_hl_field(1, Var_377, (MR_Integer) 0))));
                                    Var_380 = ((MR_Word) ((MR_hl_field(1, Var_377, (MR_Integer) 1))));
                                    succeeded = (Var_380 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_388 = ((MR_Word) ((MR_hl_field(0, Var_378, (MR_Integer) 0))));
                                      Var_379 = ((MR_Word) ((MR_hl_field(0, Var_378, (MR_Integer) 1))));
                                      succeeded = (Var_379 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorY_388, &IntegerY_389);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_389);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_352 = ((MR_Word) ((MR_hl_field(0, X_713, (MR_Integer) 2))));
                                            MR_Word Var_353;
                                            MR_Word Var_354;
                                            MR_Word Var_355;
                                            MR_Word Var_356;
                                            MR_Word FunctorX_357;
                                            MR_Word IntegerX_358;

                                            succeeded = ((MR_tag((MR_Word) Var_352)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_353 = ((MR_Word) ((MR_hl_field(2, Var_352, (MR_Integer) 2))));
                                              succeeded = (Var_353 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_354 = ((MR_Word) ((MR_hl_field(1, Var_353, (MR_Integer) 0))));
                                                Var_356 = ((MR_Word) ((MR_hl_field(1, Var_353, (MR_Integer) 1))));
                                                succeeded = (Var_356 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_357 = ((MR_Word) ((MR_hl_field(0, Var_354, (MR_Integer) 0))));
                                                  Var_355 = ((MR_Word) ((MR_hl_field(0, Var_354, (MR_Integer) 1))));
                                                  succeeded = (Var_355 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorX_357, &IntegerX_358);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_358, IntegerY_389);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_428 = ((MR_Word) ((MR_hl_field(0, X_713, (MR_Integer) 2))));
                                MR_Word Var_429;
                                MR_Word Var_430;
                                MR_Word Var_431;
                                MR_Word Var_432;
                                MR_Word FunctorX_440;
                                MR_Word IntegerX_441;

                                succeeded = ((MR_tag((MR_Word) Var_428)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_429 = ((MR_Word) ((MR_hl_field(2, Var_428, (MR_Integer) 2))));
                                  succeeded = (Var_429 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_430 = ((MR_Word) ((MR_hl_field(1, Var_429, (MR_Integer) 0))));
                                    Var_432 = ((MR_Word) ((MR_hl_field(1, Var_429, (MR_Integer) 1))));
                                    succeeded = (Var_432 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_440 = ((MR_Word) ((MR_hl_field(0, Var_430, (MR_Integer) 0))));
                                      Var_431 = ((MR_Word) ((MR_hl_field(0, Var_430, (MR_Integer) 1))));
                                      succeeded = (Var_431 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorX_440, &IntegerX_441);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_441);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_404 = ((MR_Word) ((MR_hl_field(0, Y_714, (MR_Integer) 2))));
                                            MR_Word Var_405;
                                            MR_Word Var_406;
                                            MR_Word Var_407;
                                            MR_Word Var_408;
                                            MR_Word FunctorY_409;
                                            MR_Word IntegerY_410;

                                            succeeded = ((MR_tag((MR_Word) Var_404)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_405 = ((MR_Word) ((MR_hl_field(2, Var_404, (MR_Integer) 2))));
                                              succeeded = (Var_405 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_406 = ((MR_Word) ((MR_hl_field(1, Var_405, (MR_Integer) 0))));
                                                Var_408 = ((MR_Word) ((MR_hl_field(1, Var_405, (MR_Integer) 1))));
                                                succeeded = (Var_408 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_409 = ((MR_Word) ((MR_hl_field(0, Var_406, (MR_Integer) 0))));
                                                  Var_407 = ((MR_Word) ((MR_hl_field(0, Var_406, (MR_Integer) 1))));
                                                  succeeded = (Var_407 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorY_409, &IntegerY_410);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_441, IntegerY_410);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_480 = ((MR_Word) ((MR_hl_field(0, X_713, (MR_Integer) 2))));
                                MR_Word Var_481;
                                MR_Word Var_482;
                                MR_Word Var_483;
                                MR_Word Var_484;
                                MR_Word FunctorX_492;
                                MR_Word IntegerX_493;

                                succeeded = ((MR_tag((MR_Word) Var_480)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_481 = ((MR_Word) ((MR_hl_field(2, Var_480, (MR_Integer) 2))));
                                  succeeded = (Var_481 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_482 = ((MR_Word) ((MR_hl_field(1, Var_481, (MR_Integer) 0))));
                                    Var_484 = ((MR_Word) ((MR_hl_field(1, Var_481, (MR_Integer) 1))));
                                    succeeded = (Var_484 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorX_492 = ((MR_Word) ((MR_hl_field(0, Var_482, (MR_Integer) 0))));
                                      Var_483 = ((MR_Word) ((MR_hl_field(0, Var_482, (MR_Integer) 1))));
                                      succeeded = (Var_483 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorX_492, &IntegerX_493);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerX_493);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_456 = ((MR_Word) ((MR_hl_field(0, Y_714, (MR_Integer) 2))));
                                            MR_Word Var_457;
                                            MR_Word Var_458;
                                            MR_Word Var_459;
                                            MR_Word Var_460;
                                            MR_Word FunctorY_461;
                                            MR_Word IntegerY_462;

                                            succeeded = ((MR_tag((MR_Word) Var_456)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_457 = ((MR_Word) ((MR_hl_field(2, Var_456, (MR_Integer) 2))));
                                              succeeded = (Var_457 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_458 = ((MR_Word) ((MR_hl_field(1, Var_457, (MR_Integer) 0))));
                                                Var_460 = ((MR_Word) ((MR_hl_field(1, Var_457, (MR_Integer) 1))));
                                                succeeded = (Var_460 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorY_461 = ((MR_Word) ((MR_hl_field(0, Var_458, (MR_Integer) 0))));
                                                  Var_459 = ((MR_Word) ((MR_hl_field(0, Var_458, (MR_Integer) 1))));
                                                  succeeded = (Var_459 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorY_461, &IntegerY_462);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_493, IntegerY_462);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
                                MR_Word Var_532 = ((MR_Word) ((MR_hl_field(0, Y_714, (MR_Integer) 2))));
                                MR_Word Var_533;
                                MR_Word Var_534;
                                MR_Word Var_535;
                                MR_Word Var_536;
                                MR_Word FunctorY_544;
                                MR_Word IntegerY_545;

                                succeeded = ((MR_tag((MR_Word) Var_532)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Var_533 = ((MR_Word) ((MR_hl_field(2, Var_532, (MR_Integer) 2))));
                                  succeeded = (Var_533 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_534 = ((MR_Word) ((MR_hl_field(1, Var_533, (MR_Integer) 0))));
                                    Var_536 = ((MR_Word) ((MR_hl_field(1, Var_533, (MR_Integer) 1))));
                                    succeeded = (Var_536 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FunctorY_544 = ((MR_Word) ((MR_hl_field(0, Var_534, (MR_Integer) 0))));
                                      Var_535 = ((MR_Word) ((MR_hl_field(0, Var_534, (MR_Integer) 1))));
                                      succeeded = (Var_535 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorY_544, &IntegerY_545);
                                        if (succeeded)
                                        {
                                          succeeded = mercury__integer__is_zero_1_p_0(IntegerY_545);
                                          if (succeeded)
                                          {
                                            *Result_12 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            MR_Word Var_508 = ((MR_Word) ((MR_hl_field(0, X_713, (MR_Integer) 2))));
                                            MR_Word Var_509;
                                            MR_Word Var_510;
                                            MR_Word Var_511;
                                            MR_Word Var_512;
                                            MR_Word FunctorX_513;
                                            MR_Word IntegerX_514;

                                            succeeded = ((MR_tag((MR_Word) Var_508)) == (MR_Integer) 2);
                                            if (succeeded)
                                            {
                                              Var_509 = ((MR_Word) ((MR_hl_field(2, Var_508, (MR_Integer) 2))));
                                              succeeded = (Var_509 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_510 = ((MR_Word) ((MR_hl_field(1, Var_509, (MR_Integer) 0))));
                                                Var_512 = ((MR_Word) ((MR_hl_field(1, Var_509, (MR_Integer) 1))));
                                                succeeded = (Var_512 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  FunctorX_513 = ((MR_Word) ((MR_hl_field(0, Var_510, (MR_Integer) 0))));
                                                  Var_511 = ((MR_Word) ((MR_hl_field(0, Var_510, (MR_Integer) 1))));
                                                  succeeded = (Var_511 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_712, FunctorX_513, &IntegerX_514);
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_514, IntegerY_545);
                                                      if (succeeded)
                                                        *Result_12 = (MR_Integer) 1;
                                                      else
                                                        *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 35:
        {
          // case "float"
          ;
          {
            MR_Float XVal_42;
            MR_Float YVal_45;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
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
            MR_Word X_174;
            MR_Word Y_175;
            MR_Integer lo_0;
            MR_Integer hi_1;
            MR_Integer mid_2;
            MR_Integer result_3;

            succeeded = (ModeNum_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_174 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                Var_113 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                succeeded = (Var_113 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_175 = ((MR_Word) ((MR_hl_field(1, Var_113, (MR_Integer) 0))));
                  Var_114 = ((MR_Word) ((MR_hl_field(1, Var_113, (MR_Integer) 1))));
                  succeeded = (Var_114 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_115 = ((MR_Word) ((MR_hl_field(0, X_174, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Var_115)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_116 = ((MR_Word) ((MR_hl_field(2, Var_115, (MR_Integer) 2))));
                      succeeded = (Var_116 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_117 = ((MR_Word) ((MR_hl_field(1, Var_116, (MR_Integer) 0))));
                        Var_120 = ((MR_Word) ((MR_hl_field(1, Var_116, (MR_Integer) 1))));
                        succeeded = (Var_120 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_118 = ((MR_Word) ((MR_hl_field(0, Var_117, (MR_Integer) 0))));
                          Var_119 = ((MR_Word) ((MR_hl_field(0, Var_117, (MR_Integer) 1))));
                          succeeded = (Var_119 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((((MR_tag((MR_Word) Var_118)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_118, (MR_Integer) 0)))) == (MR_Integer) 6)));
                            if (succeeded)
                            {
                              XVal_42 = MR_unbox_float((MR_hl_field(3, Var_118, (MR_Integer) 1)));
                              Var_121 = ((MR_Word) ((MR_hl_field(0, Y_175, (MR_Integer) 2))));
                              succeeded = ((MR_tag((MR_Word) Var_121)) == (MR_Integer) 2);
                              if (succeeded)
                              {
                                Var_122 = ((MR_Word) ((MR_hl_field(2, Var_121, (MR_Integer) 2))));
                                succeeded = (Var_122 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  Var_123 = ((MR_Word) ((MR_hl_field(1, Var_122, (MR_Integer) 0))));
                                  Var_126 = ((MR_Word) ((MR_hl_field(1, Var_122, (MR_Integer) 1))));
                                  succeeded = (Var_126 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_124 = ((MR_Word) ((MR_hl_field(0, Var_123, (MR_Integer) 0))));
                                    Var_125 = ((MR_Word) ((MR_hl_field(0, Var_123, (MR_Integer) 1))));
                                    succeeded = (Var_125 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_124)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_124, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (succeeded)
                                      {
                                        YVal_45 = MR_unbox_float((MR_hl_field(3, Var_124, (MR_Integer) 1)));
                                        // binary string jump switch
                                        ;
                                        lo_0 = (MR_Integer) 0;
                                        hi_1 = (MR_Integer) 3;
                                        do
                                        {
                                          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                                          result_3 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[12 + mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                          if ((result_3 == (MR_Integer) 0))
                                          {
                                            switch (((&transform_hlds__const_prop_vector_common_3[12 + mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  // case "<"
                                                  ;
                                                  succeeded = (XVal_42 < YVal_45);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  // case "=<"
                                                  ;
                                                  succeeded = (XVal_42 <= YVal_45);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                {
                                                  // case ">"
                                                  ;
                                                  succeeded = (XVal_42 > YVal_45);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 3:
                                                {
                                                  // case ">="
                                                  ;
                                                  succeeded = (XVal_42 >= YVal_45);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 37:
        {
          // case "int32"
          ;
          {
            MR_Word X_246;
            MR_Word Y_247;
            MR_Word FunctorX_250;
            MR_Word FunctorY_253;
            MR_Word IntegerX_254;
            MR_Word IntegerY_255;
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
            MR_Integer lo_12;
            MR_Integer hi_13;
            MR_Integer mid_14;
            MR_Integer result_15;

            succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_246 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
              Var_256 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
              succeeded = (Var_256 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_247 = ((MR_Word) ((MR_hl_field(1, Var_256, (MR_Integer) 0))));
                Var_257 = ((MR_Word) ((MR_hl_field(1, Var_256, (MR_Integer) 1))));
                succeeded = (Var_257 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_258 = ((MR_Word) ((MR_hl_field(0, X_246, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_258)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_259 = ((MR_Word) ((MR_hl_field(2, Var_258, (MR_Integer) 2))));
                    succeeded = (Var_259 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_260 = ((MR_Word) ((MR_hl_field(1, Var_259, (MR_Integer) 0))));
                      Var_262 = ((MR_Word) ((MR_hl_field(1, Var_259, (MR_Integer) 1))));
                      succeeded = (Var_262 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FunctorX_250 = ((MR_Word) ((MR_hl_field(0, Var_260, (MR_Integer) 0))));
                        Var_261 = ((MR_Word) ((MR_hl_field(0, Var_260, (MR_Integer) 1))));
                        succeeded = (Var_261 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_263 = ((MR_Word) ((MR_hl_field(0, Y_247, (MR_Integer) 2))));
                          succeeded = ((MR_tag((MR_Word) Var_263)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_264 = ((MR_Word) ((MR_hl_field(2, Var_263, (MR_Integer) 2))));
                            succeeded = (Var_264 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_265 = ((MR_Word) ((MR_hl_field(1, Var_264, (MR_Integer) 0))));
                              Var_267 = ((MR_Word) ((MR_hl_field(1, Var_264, (MR_Integer) 1))));
                              succeeded = (Var_267 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                FunctorY_253 = ((MR_Word) ((MR_hl_field(0, Var_265, (MR_Integer) 0))));
                                Var_266 = ((MR_Word) ((MR_hl_field(0, Var_265, (MR_Integer) 1))));
                                succeeded = (Var_266 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[1]), FunctorX_250, &IntegerX_254);
                                  if (succeeded)
                                  {
                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[1]), FunctorY_253, &IntegerY_255);
                                    if (succeeded)
                                    {
                                      succeeded = (ModeNum_10 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        // binary string jump switch
                                        ;
                                        lo_12 = (MR_Integer) 0;
                                        hi_13 = (MR_Integer) 3;
                                        do
                                        {
                                          mid_14 = (((MR_Integer) ((MR_Unsigned) lo_12 + (MR_Unsigned) hi_13)) / (MR_Integer) 2);
                                          result_15 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[24 + mid_14]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                          if ((result_15 == (MR_Integer) 0))
                                          {
                                            switch (((&transform_hlds__const_prop_vector_common_3[24 + mid_14]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  // case "<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_254, IntegerY_255);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  // case "=<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_254, IntegerY_255);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                {
                                                  // case ">"
                                                  ;
                                                  succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_254, IntegerY_255);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 3:
                                                {
                                                  // case ">="
                                                  ;
                                                  succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_254, IntegerY_255);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
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
            }
          }
        }
        break;
      case (MR_Integer) 48:
        {
          // case "int64"
          ;
          {
            MR_Word X_281;
            MR_Word Y_282;
            MR_Word FunctorX_285;
            MR_Word FunctorY_288;
            MR_Word IntegerX_289;
            MR_Word IntegerY_290;
            MR_Word Var_291;
            MR_Word Var_292;
            MR_Word Var_293;
            MR_Word Var_294;
            MR_Word Var_295;
            MR_Word Var_296;
            MR_Word Var_297;
            MR_Word Var_298;
            MR_Word Var_299;
            MR_Word Var_300;
            MR_Word Var_301;
            MR_Word Var_302;
            MR_Integer lo_16;
            MR_Integer hi_17;
            MR_Integer mid_18;
            MR_Integer result_19;

            succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_281 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
              Var_291 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
              succeeded = (Var_291 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_282 = ((MR_Word) ((MR_hl_field(1, Var_291, (MR_Integer) 0))));
                Var_292 = ((MR_Word) ((MR_hl_field(1, Var_291, (MR_Integer) 1))));
                succeeded = (Var_292 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_293 = ((MR_Word) ((MR_hl_field(0, X_281, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_293)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_294 = ((MR_Word) ((MR_hl_field(2, Var_293, (MR_Integer) 2))));
                    succeeded = (Var_294 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_295 = ((MR_Word) ((MR_hl_field(1, Var_294, (MR_Integer) 0))));
                      Var_297 = ((MR_Word) ((MR_hl_field(1, Var_294, (MR_Integer) 1))));
                      succeeded = (Var_297 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FunctorX_285 = ((MR_Word) ((MR_hl_field(0, Var_295, (MR_Integer) 0))));
                        Var_296 = ((MR_Word) ((MR_hl_field(0, Var_295, (MR_Integer) 1))));
                        succeeded = (Var_296 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_298 = ((MR_Word) ((MR_hl_field(0, Y_282, (MR_Integer) 2))));
                          succeeded = ((MR_tag((MR_Word) Var_298)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_299 = ((MR_Word) ((MR_hl_field(2, Var_298, (MR_Integer) 2))));
                            succeeded = (Var_299 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_300 = ((MR_Word) ((MR_hl_field(1, Var_299, (MR_Integer) 0))));
                              Var_302 = ((MR_Word) ((MR_hl_field(1, Var_299, (MR_Integer) 1))));
                              succeeded = (Var_302 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                FunctorY_288 = ((MR_Word) ((MR_hl_field(0, Var_300, (MR_Integer) 0))));
                                Var_301 = ((MR_Word) ((MR_hl_field(0, Var_300, (MR_Integer) 1))));
                                succeeded = (Var_301 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[2]), FunctorX_285, &IntegerX_289);
                                  if (succeeded)
                                  {
                                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0((MR_Word) (&transform_hlds__const_prop_scalar_common_2[2]), FunctorY_288, &IntegerY_290);
                                    if (succeeded)
                                    {
                                      succeeded = (ModeNum_10 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        // binary string jump switch
                                        ;
                                        lo_16 = (MR_Integer) 0;
                                        hi_17 = (MR_Integer) 3;
                                        do
                                        {
                                          mid_18 = (((MR_Integer) ((MR_Unsigned) lo_16 + (MR_Unsigned) hi_17)) / (MR_Integer) 2);
                                          result_19 = MR_strcmp(PredName_9, ((&transform_hlds__const_prop_vector_common_3[28 + mid_18]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                                          if ((result_19 == (MR_Integer) 0))
                                          {
                                            switch (((&transform_hlds__const_prop_vector_common_3[28 + mid_18]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  // case "<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_than_2_p_0(IntegerX_289, IntegerY_290);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  // case "=<"
                                                  ;
                                                  succeeded = mercury__integer__f_less_or_equal_2_p_0(IntegerX_289, IntegerY_290);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                {
                                                  // case ">"
                                                  ;
                                                  succeeded = mercury__integer__f_greater_than_2_p_0(IntegerX_289, IntegerY_290);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                                break;
                                              case (MR_Integer) 3:
                                                {
                                                  // case ">="
                                                  ;
                                                  succeeded = mercury__integer__f_greater_or_equal_2_p_0(IntegerX_289, IntegerY_290);
                                                  if (succeeded)
                                                    *Result_12 = (MR_Integer) 1;
                                                  else
                                                    *Result_12 = (MR_Integer) 0;
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
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
  MR_Word X_4,
  MR_Word Y_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));

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
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 2))));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word TypeInfo_38_38;

    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(2, Var_16, (MR_Integer) 2))));
      succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
        Var_19 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          XCtor_9 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
          XArgVars_10 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
          Var_20 = ((MR_Word) ((MR_hl_field(0, Y_5, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(2, Var_20, (MR_Integer) 2))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                YCtor_13 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
                YArgVars_14 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
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
  MR_bool succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_50;
  MR_Word Var_51;

  if (succeeded)
  {
    Var_51 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
    Var_50 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
    if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((strcmp(ModuleName_9, (MR_String) "int") == 0))
      {
        MR_Word Var_73;
        MR_Word Var_74;

        succeeded = (ModeNum_11 == (MR_Integer) 0);
        if (succeeded)
        {
          *OutputArg_13 = Var_51;
          Var_73 = (MR_Integer) 292;
          Var_74 = (MR_Integer) 0;
          if ((strcmp(ProcName_10, (MR_String) "bits_per_int") == 0))
          {
            MR_Integer WordBits_72;
            MR_Word Var_75;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_73, Var_74);
            if (succeeded)
            {
              WordBits_72 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_8);
              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_75, 0) = ((MR_Box) (WordBits_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OutputArgVal_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_75));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(ProcName_10, (MR_String) "ubits_per_int") == 0))
          {
            MR_Word Var_76;
            MR_Unsigned Var_77;
            MR_Integer WordBits_97;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_73, Var_74);
            if (succeeded)
            {
              WordBits_97 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_8);
              Var_77 = mercury__uint__det_from_int_1_f_0(WordBits_97);
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OutputArgVal_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_76));
              }
              succeeded = MR_TRUE;
            }
          }
          else
            succeeded = MR_FALSE;
        }
      }
      else
      if ((strcmp(ModuleName_9, (MR_String) "uint") == 0))
      {
        MR_Word Var_79;
        MR_Word Var_80;

        succeeded = (ModeNum_11 == (MR_Integer) 0);
        if (succeeded)
        {
          *OutputArg_13 = Var_51;
          Var_79 = (MR_Integer) 292;
          Var_80 = (MR_Integer) 0;
          if ((strcmp(ProcName_10, (MR_String) "bits_per_uint") == 0))
          {
            MR_Integer WordBits_78;
            MR_Word Var_81;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_79, Var_80);
            if (succeeded)
            {
              WordBits_78 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_8);
              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_81, 0) = ((MR_Box) (WordBits_78));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OutputArgVal_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_81));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(ProcName_10, (MR_String) "ubits_per_uint") == 0))
          {
            MR_Word Var_82;
            MR_Unsigned Var_83;
            MR_Integer WordBits_98;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_79, Var_80);
            if (succeeded)
            {
              WordBits_98 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_8);
              Var_83 = mercury__uint__det_from_int_1_f_0(WordBits_98);
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OutputArgVal_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_82));
              }
              succeeded = MR_TRUE;
            }
          }
          else
            succeeded = MR_FALSE;
        }
      }
      else
        succeeded = MR_FALSE;
    else
    {
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));

      if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer slot_0 = ((MR_hash_string6(ModuleName_9)) & (MR_Integer) 63);
        MR_String str_1 = ((&transform_hlds__const_prop_vector_common_4[0 + slot_0]))->transform_hlds__const_prop__vector_common_type_4_0__vct_4_f_0;

        // hashed string jump switch
        ;
        // compute the hash value of the input string
        ;
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, ModuleName_9) == 0))))
        {
          // we found a match; dispatch to the corresponding code
          ;
          switch (slot_0) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                // case "string"
                ;
                {
                  MR_String XVal_86;
                  MR_Integer CodePointCountX_87;
                  MR_Word Var_88;
                  MR_Word Var_89;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Word Var_94;

                  if ((strcmp(ProcName_10, (MR_String) "count_codepoints") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(ProcName_10, (MR_String) "count_code_points") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (ModeNum_11 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_88 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_89 = ((MR_Word) ((MR_hl_field(2, Var_88, (MR_Integer) 2))));
                        succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_90 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 0))));
                          Var_93 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 1))));
                          succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_91 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
                            Var_92 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 1))));
                            succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_91)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_91, (MR_Integer) 0)))) == (MR_Integer) 8)));
                              if (succeeded)
                              {
                                XVal_86 = ((MR_String) ((MR_hl_field(3, Var_91, (MR_Integer) 1))));
                                *OutputArg_13 = Var_53;
                                CodePointCountX_87 = mercury__string__count_code_points_1_f_0(XVal_86);
                                {
                                  Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_94, 0) = ((MR_Box) (CodePointCountX_87));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  *OutputArgVal_14 = base;
                                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_94));
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
              break;
            case (MR_Integer) 3:
              {
                // case "uint32"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[1])), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 7:
              {
                // case "int16"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[0]), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 8:
              {
                // case "int"
                ;
                {
                  MR_Word OpType_17;
                  MR_Word Var_22;

                  Var_22 = parse_tree__int_emu__target_op_type_1_f_0(Globals_8);
                  {
                    OpType_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, OpType_17, 0) = ((MR_Box) (Var_22));
                  }
                  succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, OpType_17, ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
                }
              }
              break;
            case (MR_Integer) 13:
              {
                // case "uint8"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[3])), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 20:
              {
                // case "uint"
                ;
                {
                  MR_Word Var_27;
                  MR_Word OpType_58;

                  Var_27 = parse_tree__int_emu__target_op_type_1_f_0(Globals_8);
                  {
                    OpType_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, OpType_58, 0) = ((MR_Box) (Var_27));
                  }
                  succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, OpType_58, ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
                }
              }
              break;
            case (MR_Integer) 23:
              {
                // case "int8"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[3]), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 28:
              {
                // case "uint64"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[2])), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 33:
              {
                // case "uint16"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[0])), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 35:
              {
                // case "float"
                ;
                succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 37:
              {
                // case "int32"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[1]), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
            case (MR_Integer) 48:
              {
                // case "int64"
                ;
                succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[2]), ProcName_10, ModeNum_11, Var_51, Var_53, OutputArg_13, OutputArgVal_14);
              }
              break;
          }
          // jump out of search loop
          ;
          goto label_0;
        }
        succeeded = MR_FALSE;
      label_0:;
      }
      else
      {
        MR_Word Z_18 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
        MR_Integer slot_2;
        MR_String str_3;

        succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          // hashed string jump switch
          ;
          // compute the hash value of the input string
          ;
          slot_2 = ((MR_hash_string6(ModuleName_9)) & (MR_Integer) 63);
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          str_3 = ((&transform_hlds__const_prop_vector_common_4[64 + slot_2]))->transform_hlds__const_prop__vector_common_type_4_0__vct_4_f_0;
          // did we find a match?
          ;
          if ((((str_3 != NULL)) && ((strcmp(str_3, ModuleName_9) == 0))))
          {
            // we found a match; dispatch to the corresponding code
            ;
            switch (slot_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  // case "string"
                  ;
                  succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(ProcName_10, ModeNum_11, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "uint32"
                  ;
                  {
                    MR_Word OpType_69 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[1]));

                    switch (ModeNum_11) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, OpType_69, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 1:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, OpType_69, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 2:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, OpType_69, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                    }
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "int16"
                  ;
                  switch (ModeNum_11) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[0]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 1:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[0]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 2:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[0]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  // case "int"
                  ;
                  {
                    MR_Word Var_35;
                    MR_Word OpType_46;

                    Var_35 = parse_tree__int_emu__target_op_type_1_f_0(Globals_8);
                    {
                      OpType_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, OpType_46, 0) = ((MR_Box) (Var_35));
                    }
                    switch (ModeNum_11) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, OpType_46, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 1:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, OpType_46, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 2:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, OpType_46, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                    }
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  // case "uint8"
                  ;
                  {
                    MR_Word OpType_71 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[3]));

                    switch (ModeNum_11) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, OpType_71, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 1:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, OpType_71, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 2:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, OpType_71, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                    }
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "uint"
                  ;
                  {
                    MR_Word Var_40;
                    MR_Word OpType_67;

                    Var_40 = parse_tree__int_emu__target_op_type_1_f_0(Globals_8);
                    {
                      OpType_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, OpType_67, 0) = ((MR_Box) (Var_40));
                    }
                    switch (ModeNum_11) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, OpType_67, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 1:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, OpType_67, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 2:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, OpType_67, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                    }
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "int8"
                  ;
                  switch (ModeNum_11) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[3]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 1:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[3]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 2:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[3]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                  }
                }
                break;
              case (MR_Integer) 28:
                {
                  // case "uint64"
                  ;
                  {
                    MR_Word OpType_70 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[2]));

                    switch (ModeNum_11) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, OpType_70, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 1:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, OpType_70, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 2:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, OpType_70, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                    }
                  }
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "uint16"
                  ;
                  {
                    MR_Word OpType_68 = (MR_Word) (MR_mkword(1, &transform_hlds__const_prop_scalar_common_2[0]));

                    switch (ModeNum_11) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, OpType_68, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 1:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, OpType_68, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                      case (MR_Integer) 2:
                        succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, OpType_68, ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                        break;
                    }
                  }
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "float"
                  ;
                  succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(ProcName_10, ModeNum_11, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                }
                break;
              case (MR_Integer) 37:
                {
                  // case "int32"
                  ;
                  switch (ModeNum_11) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[1]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 1:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[1]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 2:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[1]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                  }
                }
                break;
              case (MR_Integer) 48:
                {
                  // case "int64"
                  ;
                  switch (ModeNum_11) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[2]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 1:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[2]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                    case (MR_Integer) 2:
                      succeeded = transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(Globals_8, (MR_Word) (&transform_hlds__const_prop_scalar_common_2[2]), ProcName_10, Var_51, Var_53, Z_18, OutputArg_13, OutputArgVal_14);
                      break;
                  }
                }
                break;
            }
            // jump out of search loop
            ;
            goto label_1;
          }
          succeeded = MR_FALSE;
        label_1:;
        }
      }
    }
  }
  return succeeded;
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
      Var_23 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(2, Var_23, (MR_Integer) 2))));
        succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
          Var_26 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            XVal_19 = ((MR_String) ((MR_hl_field(3, Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_29 = ((MR_Word) ((MR_hl_field(0, Y_13, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_30 = ((MR_Word) ((MR_hl_field(2, Var_29, (MR_Integer) 2))));
                  succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
                    Var_34 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
                    Var_32 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
                    Var_33 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                      YVal_22 = ((MR_String) ((MR_hl_field(3, Var_32, (MR_Integer) 1))));
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
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__8_8 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (OutputArgVal_16));
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
    Var_23 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(2, Var_23, (MR_Integer) 2))));
      succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          XVal_19 = MR_unbox_float((MR_hl_field(3, Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_29 = ((MR_Word) ((MR_hl_field(0, Y_13, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_30 = ((MR_Word) ((MR_hl_field(2, Var_29, (MR_Integer) 2))));
                succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
                  Var_34 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
                  Var_32 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    YVal_22 = MR_unbox_float((MR_hl_field(3, Var_32, (MR_Integer) 1)));
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
                          result_3 = MR_strcmp(ProcName_10, ((&transform_hlds__const_prop_vector_common_3[7 + mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                          if ((result_3 == (MR_Integer) 0))
                          {
                            switch (((&transform_hlds__const_prop_vector_common_3[7 + mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
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
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__8_8 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = MR_box_float(OutputArgVal_16);
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

static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_String ProcName_9,
  MR_Integer ModeNum_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word * OutputArg_13,
  MR_Word * HeadVar__7_7)
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
    Var_37 = ((MR_Word) ((MR_hl_field(0, X_11, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_40 = ((MR_Word) ((MR_hl_field(2, Var_37, (MR_Integer) 2))));
      succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
        Var_43 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
        succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(0, Var_44, (MR_Integer) 0))));
          Var_45 = ((MR_Word) ((MR_hl_field(0, Var_44, (MR_Integer) 1))));
          succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_47 = MR_unbox_float((MR_hl_field(3, Var_46, (MR_Integer) 1)));
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
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, base, 1) = MR_box_float(OutputArgVal_14);
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

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_2_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;
  MR_Word OutputArgVal_16;
  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, Z_14, (MR_Integer) 2))));
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;

  succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_88 = ((MR_Word) ((MR_hl_field(2, Var_85, (MR_Integer) 2))));
    succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_92 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
      Var_91 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((strcmp(ProcName_11, (MR_String) "+") == 0))
          {
            MR_Word FunctorX_19;
            MR_Word IntegerX_23;
            MR_Word IntegerZ_24;
            MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_44;
            MR_Word Var_45;

            succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_35 = ((MR_Word) ((MR_hl_field(2, Var_34, (MR_Integer) 2))));
              succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
                Var_38 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FunctorX_19 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
                  Var_37 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
                  succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_23);
                    if (succeeded)
                    {
                      succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, Var_94, &IntegerZ_24);
                      if (succeeded)
                      {
                        Var_44 = (MR_Integer) 292;
                        Var_45 = (MR_Integer) 0;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_44, Var_45);
                        if (succeeded)
                        {
                          *OutputArg_15 = Y_13;
                          succeeded = parse_tree__int_emu__emu_minus_4_p_0(OpType_10, IntegerZ_24, IntegerX_23, &OutputArgVal_16);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          if ((strcmp(ProcName_11, (MR_String) "-") == 0))
          {
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word FunctorX_68;
            MR_Word IntegerX_70;
            MR_Word IntegerZ_71;

            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_47 = ((MR_Word) ((MR_hl_field(2, Var_46, (MR_Integer) 2))));
              succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
                Var_50 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
                succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FunctorX_68 = ((MR_Word) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
                  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_48, (MR_Integer) 1))));
                  succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_68, &IntegerX_70);
                    if (succeeded)
                    {
                      succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, Var_94, &IntegerZ_71);
                      if (succeeded)
                      {
                        Var_56 = (MR_Integer) 292;
                        Var_57 = (MR_Integer) 0;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_56, Var_57);
                        if (succeeded)
                        {
                          *OutputArg_15 = Y_13;
                          succeeded = parse_tree__int_emu__emu_minus_4_p_0(OpType_10, IntegerX_70, IntegerZ_71, &OutputArgVal_16);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          if ((strcmp(ProcName_11, (MR_String) "xor") == 0))
          {
            MR_Word FunctorY_31;
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Y_13, (MR_Integer) 2))));
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;

            succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_59 = ((MR_Word) ((MR_hl_field(2, Var_58, (MR_Integer) 2))));
              succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
                succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FunctorY_31 = ((MR_Word) ((MR_hl_field(0, Var_60, (MR_Integer) 0))));
                  Var_61 = ((MR_Word) ((MR_hl_field(0, Var_60, (MR_Integer) 1))));
                  succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *OutputArg_15 = X_12;
                    succeeded = parse_tree__int_emu__emu_xor_4_p_0(OpType_10, FunctorY_31, Var_94, &OutputArgVal_16);
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__8_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (OutputArgVal_16));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_1_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;
  MR_Word OutputArgVal_16;
  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, Z_14, (MR_Integer) 2))));
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;

  succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_88 = ((MR_Word) ((MR_hl_field(2, Var_85, (MR_Integer) 2))));
    succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_92 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
      Var_91 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((strcmp(ProcName_11, (MR_String) "+") == 0))
          {
            MR_Word FunctorY_19;
            MR_Word IntegerY_23;
            MR_Word IntegerZ_24;
            MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Y_13, (MR_Integer) 2))));
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_44;
            MR_Word Var_45;

            succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_35 = ((MR_Word) ((MR_hl_field(2, Var_34, (MR_Integer) 2))));
              succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
                Var_38 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FunctorY_19 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
                  Var_37 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
                  succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_19, &IntegerY_23);
                    if (succeeded)
                    {
                      succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, Var_94, &IntegerZ_24);
                      if (succeeded)
                      {
                        Var_44 = (MR_Integer) 292;
                        Var_45 = (MR_Integer) 0;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_44, Var_45);
                        if (succeeded)
                        {
                          *OutputArg_15 = X_12;
                          succeeded = parse_tree__int_emu__emu_minus_4_p_0(OpType_10, IntegerZ_24, IntegerY_23, &OutputArgVal_16);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          if ((strcmp(ProcName_11, (MR_String) "-") == 0))
          {
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Y_13, (MR_Integer) 2))));
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word FunctorY_68;
            MR_Word IntegerY_70;
            MR_Word IntegerZ_71;

            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_47 = ((MR_Word) ((MR_hl_field(2, Var_46, (MR_Integer) 2))));
              succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
                Var_50 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
                succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FunctorY_68 = ((MR_Word) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
                  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_48, (MR_Integer) 1))));
                  succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_68, &IntegerY_70);
                    if (succeeded)
                    {
                      succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, Var_94, &IntegerZ_71);
                      if (succeeded)
                      {
                        Var_56 = (MR_Integer) 292;
                        Var_57 = (MR_Integer) 0;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_56, Var_57);
                        if (succeeded)
                        {
                          *OutputArg_15 = X_12;
                          succeeded = parse_tree__int_emu__emu_plus_4_p_0(OpType_10, IntegerY_70, IntegerZ_71, &OutputArgVal_16);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          if ((strcmp(ProcName_11, (MR_String) "xor") == 0))
          {
            MR_Word FunctorX_31;
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;

            succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_59 = ((MR_Word) ((MR_hl_field(2, Var_58, (MR_Integer) 2))));
              succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
                succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FunctorX_31 = ((MR_Word) ((MR_hl_field(0, Var_60, (MR_Integer) 0))));
                  Var_61 = ((MR_Word) ((MR_hl_field(0, Var_60, (MR_Integer) 1))));
                  succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *OutputArg_15 = Y_13;
                    succeeded = parse_tree__int_emu__emu_xor_4_p_0(OpType_10, FunctorX_31, Var_94, &OutputArgVal_16);
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__8_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (OutputArgVal_16));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_3_mode_0_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Z_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;
  MR_Word OutputArgVal_16;
  MR_Word FunctorX_19;
  MR_Word FunctorY_22;
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_28 = ((MR_Word) ((MR_hl_field(2, Var_27, (MR_Integer) 2))));
    succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FunctorX_19 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_32 = ((MR_Word) ((MR_hl_field(0, Y_13, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_33 = ((MR_Word) ((MR_hl_field(2, Var_32, (MR_Integer) 2))));
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
              Var_36 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
              succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FunctorY_22 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
                Var_35 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
                succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  {
                    MR_Integer case_num_0 = (MR_Integer) -1;

                    switch (MR_nth_code_unit(ProcName_11, 0)) {
                      case (MR_Integer) 42:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "*"))
                          case_num_0 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 43:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "+"))
                          case_num_0 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 45:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "-"))
                          case_num_0 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 47:
                        switch (MR_nth_code_unit(ProcName_11, 1)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 47:
                            if (MR_offset_streq(2, ProcName_11, (MR_String) "//"))
                              case_num_0 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 92:
                            if (MR_offset_streq(2, ProcName_11, (MR_String) "/\\"))
                              case_num_0 = (MR_Integer) 6;
                            break;
                        }
                        break;
                      case (MR_Integer) 60:
                        switch (MR_nth_code_unit(ProcName_11, 1)) {
                          case (MR_Integer) 60:
                            switch (MR_nth_code_unit(ProcName_11, 2)) {
                              case (MR_Integer) 0:
                                case_num_0 = (MR_Integer) 7;
                                break;
                              case (MR_Integer) 117:
                                if (MR_offset_streq(3, ProcName_11, (MR_String) "<<u"))
                                  case_num_0 = (MR_Integer) 8;
                                break;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 62:
                        switch (MR_nth_code_unit(ProcName_11, 1)) {
                          case (MR_Integer) 62:
                            switch (MR_nth_code_unit(ProcName_11, 2)) {
                              case (MR_Integer) 0:
                                case_num_0 = (MR_Integer) 9;
                                break;
                              case (MR_Integer) 117:
                                if (MR_offset_streq(3, ProcName_11, (MR_String) ">>u"))
                                  case_num_0 = (MR_Integer) 10;
                                break;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 92:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "\\/"))
                          case_num_0 = (MR_Integer) 11;
                        break;
                      case (MR_Integer) 109:
                        switch (MR_nth_code_unit(ProcName_11, 1)) {
                          case (MR_Integer) 105:
                            if (MR_offset_streq(2, ProcName_11, (MR_String) "minus"))
                              case_num_0 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 111:
                            if (MR_offset_streq(2, ProcName_11, (MR_String) "mod"))
                              case_num_0 = (MR_Integer) 4;
                            break;
                        }
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "plus"))
                          case_num_0 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 114:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "rem"))
                          case_num_0 = (MR_Integer) 5;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "times"))
                          case_num_0 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_strn_eq(1, 9, ProcName_11, (MR_String) "unchecked_"))
                          switch (MR_nth_code_unit(ProcName_11, 10)) {
                            case (MR_Integer) 108:
                              if (MR_offset_strn_eq(11, 4, ProcName_11, (MR_String) "unchecked_left_"))
                                switch (MR_nth_code_unit(ProcName_11, 15)) {
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(16, ProcName_11, (MR_String) "unchecked_left_shift"))
                                      case_num_0 = (MR_Integer) 7;
                                    break;
                                  case (MR_Integer) 117:
                                    if (MR_offset_streq(16, ProcName_11, (MR_String) "unchecked_left_ushift"))
                                      case_num_0 = (MR_Integer) 8;
                                    break;
                                }
                              break;
                            case (MR_Integer) 113:
                              if (MR_offset_streq(11, ProcName_11, (MR_String) "unchecked_quotient"))
                                case_num_0 = (MR_Integer) 3;
                              break;
                            case (MR_Integer) 114:
                              switch (MR_nth_code_unit(ProcName_11, 11)) {
                                case (MR_Integer) 101:
                                  if (MR_offset_streq(12, ProcName_11, (MR_String) "unchecked_rem"))
                                    case_num_0 = (MR_Integer) 5;
                                  break;
                                case (MR_Integer) 105:
                                  if (MR_offset_strn_eq(12, 4, ProcName_11, (MR_String) "unchecked_right_"))
                                    switch (MR_nth_code_unit(ProcName_11, 16)) {
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(17, ProcName_11, (MR_String) "unchecked_right_shift"))
                                          case_num_0 = (MR_Integer) 9;
                                        break;
                                      case (MR_Integer) 117:
                                        if (MR_offset_streq(17, ProcName_11, (MR_String) "unchecked_right_ushift"))
                                          case_num_0 = (MR_Integer) 10;
                                        break;
                                    }
                                  break;
                              }
                              break;
                          }
                        break;
                      case (MR_Integer) 120:
                        if (MR_offset_streq(1, ProcName_11, (MR_String) "xor"))
                          case_num_0 = (MR_Integer) 12;
                        break;
                    }
                    switch (case_num_0) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          // case "*", "times"
                          ;
                          {
                            MR_Word IntegerX_23;
                            MR_Word IntegerY_24;
                            MR_Word Var_37;
                            MR_Word Var_38;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_23);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_22, &IntegerY_24);
                              if (succeeded)
                              {
                                Var_37 = (MR_Integer) 292;
                                Var_38 = (MR_Integer) 0;
                                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_37, Var_38);
                                if (succeeded)
                                  succeeded = parse_tree__int_emu__emu_times_4_p_0(OpType_10, IntegerX_23, IntegerY_24, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          // case "+", "plus"
                          ;
                          {
                            MR_Word IntegerX_49;
                            MR_Word IntegerY_50;
                            MR_Word Var_51;
                            MR_Word Var_52;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_49);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_22, &IntegerY_50);
                              if (succeeded)
                              {
                                Var_51 = (MR_Integer) 292;
                                Var_52 = (MR_Integer) 0;
                                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_51, Var_52);
                                if (succeeded)
                                  succeeded = parse_tree__int_emu__emu_plus_4_p_0(OpType_10, IntegerX_49, IntegerY_50, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          // case "-", "minus"
                          ;
                          {
                            MR_Word IntegerX_53;
                            MR_Word IntegerY_54;
                            MR_Word Var_55;
                            MR_Word Var_56;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_53);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_22, &IntegerY_54);
                              if (succeeded)
                              {
                                Var_55 = (MR_Integer) 292;
                                Var_56 = (MR_Integer) 0;
                                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_55, Var_56);
                                if (succeeded)
                                  succeeded = parse_tree__int_emu__emu_minus_4_p_0(OpType_10, IntegerX_53, IntegerY_54, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          // case "/", "//", "unchecked_quotient"
                          ;
                          {
                            MR_Word IntegerX_57;
                            MR_Word IntegerY_58;
                            MR_Word Var_59;
                            MR_Word Var_60;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_57);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_22, &IntegerY_58);
                              if (succeeded)
                              {
                                Var_59 = (MR_Integer) 292;
                                Var_60 = (MR_Integer) 0;
                                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_59, Var_60);
                                if (succeeded)
                                  succeeded = parse_tree__int_emu__emu_quotient_4_p_0(OpType_10, IntegerX_57, IntegerY_58, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          // case "mod"
                          ;
                          {
                            MR_Word IntegerX_61;
                            MR_Word IntegerY_62;
                            MR_Word Var_63;
                            MR_Word Var_64;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_61);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_22, &IntegerY_62);
                              if (succeeded)
                              {
                                Var_63 = (MR_Integer) 292;
                                Var_64 = (MR_Integer) 0;
                                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_63, Var_64);
                                if (succeeded)
                                  succeeded = parse_tree__int_emu__emu_mod_4_p_0(OpType_10, IntegerX_61, IntegerY_62, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          // case "rem", "unchecked_rem"
                          ;
                          {
                            MR_Word IntegerX_65;
                            MR_Word IntegerY_66;
                            MR_Word Var_67;
                            MR_Word Var_68;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_65);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorY_22, &IntegerY_66);
                              if (succeeded)
                              {
                                Var_67 = (MR_Integer) 292;
                                Var_68 = (MR_Integer) 0;
                                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_67, Var_68);
                                if (succeeded)
                                  succeeded = parse_tree__int_emu__emu_rem_4_p_0(OpType_10, IntegerX_65, IntegerY_66, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          // case "/\"
                          ;
                          succeeded = parse_tree__int_emu__emu_and_4_p_0(OpType_10, FunctorX_19, FunctorY_22, &OutputArgVal_16);
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          // case "<<", "unchecked_left_shift"
                          ;
                          {
                            MR_Integer IntY_25;
                            MR_Word Var_39;
                            MR_Word Var_40;
                            MR_Word IntegerX_43;
                            MR_Word Var_48;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_43);
                            if (succeeded)
                            {
                              Var_39 = (MR_Integer) 292;
                              Var_40 = (MR_Integer) 0;
                              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_39, Var_40);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) FunctorY_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  Var_48 = ((MR_Word) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    IntY_25 = ((MR_Integer) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
                                    succeeded = parse_tree__int_emu__emu_left_shift_4_p_0(OpType_10, IntegerX_43, IntY_25, &OutputArgVal_16);
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          // case "<<u", "unchecked_left_ushift"
                          ;
                          {
                            MR_Unsigned UIntY_26;
                            MR_Integer IntY_69;
                            MR_Word Var_70;
                            MR_Word Var_71;
                            MR_Word IntegerX_72;
                            MR_Word Var_73;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_72);
                            if (succeeded)
                            {
                              Var_70 = (MR_Integer) 292;
                              Var_71 = (MR_Integer) 0;
                              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_70, Var_71);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) FunctorY_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  Var_73 = ((MR_Word) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 1);
                                  if (succeeded)
                                  {
                                    UIntY_26 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
                                    IntY_69 = mercury__uint__cast_to_int_1_f_0(UIntY_26);
                                    succeeded = parse_tree__int_emu__emu_left_shift_4_p_0(OpType_10, IntegerX_72, IntY_69, &OutputArgVal_16);
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          // case ">>", "unchecked_right_shift"
                          ;
                          {
                            MR_Integer IntY_74;
                            MR_Word Var_75;
                            MR_Word Var_76;
                            MR_Word IntegerX_77;
                            MR_Word Var_78;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_77);
                            if (succeeded)
                            {
                              Var_75 = (MR_Integer) 292;
                              Var_76 = (MR_Integer) 0;
                              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_75, Var_76);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) FunctorY_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  Var_78 = ((MR_Word) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    IntY_74 = ((MR_Integer) ((MR_hl_field(0, Var_78, (MR_Integer) 0))));
                                    succeeded = parse_tree__int_emu__emu_right_shift_4_p_0(OpType_10, IntegerX_77, IntY_74, &OutputArgVal_16);
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          // case ">>u", "unchecked_right_ushift"
                          ;
                          {
                            MR_Integer IntY_79;
                            MR_Unsigned UIntY_80;
                            MR_Word Var_81;
                            MR_Word Var_82;
                            MR_Word IntegerX_83;
                            MR_Word Var_84;

                            succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_83);
                            if (succeeded)
                            {
                              Var_81 = (MR_Integer) 292;
                              Var_82 = (MR_Integer) 0;
                              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_81, Var_82);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) FunctorY_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  Var_84 = ((MR_Word) ((MR_hl_field(3, FunctorY_22, (MR_Integer) 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 1);
                                  if (succeeded)
                                  {
                                    UIntY_80 = ((MR_Unsigned) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
                                    IntY_79 = mercury__uint__cast_to_int_1_f_0(UIntY_80);
                                    succeeded = parse_tree__int_emu__emu_right_shift_4_p_0(OpType_10, IntegerX_83, IntY_79, &OutputArgVal_16);
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          // case "\/"
                          ;
                          succeeded = parse_tree__int_emu__emu_or_4_p_0(OpType_10, FunctorX_19, FunctorY_22, &OutputArgVal_16);
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          // case "xor"
                          ;
                          succeeded = parse_tree__int_emu__emu_xor_4_p_0(OpType_10, FunctorX_19, FunctorY_22, &OutputArgVal_16);
                        }
                        break;
                    }
                  }
                  if (succeeded)
                  {
                    *OutputArg_15 = Z_14;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__8_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (OutputArgVal_16));
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

static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_uint_2_8_p_0(
  MR_Word Globals_9,
  MR_Word OpType_10,
  MR_String ProcName_11,
  MR_Integer ModeNum_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word * OutputArg_15,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded = (ModeNum_12 == (MR_Integer) 0);
  MR_Word OutputArgVal_16;
  MR_Word FunctorX_19;
  MR_Word ConstX_20;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(0, X_13, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(2, Var_24, (MR_Integer) 2))));
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FunctorX_19 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) FunctorX_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorX_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              ConstX_20 = ((MR_Word) ((MR_hl_field(3, FunctorX_19, (MR_Integer) 1))));
              *OutputArg_15 = Y_14;
              // binary string jump switch
              ;
              lo_0 = (MR_Integer) 0;
              hi_1 = (MR_Integer) 6;
              do
              {
                mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(ProcName_11, ((&transform_hlds__const_prop_vector_common_3[0 + mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  switch (((&transform_hlds__const_prop_vector_common_3[0 + mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        // case "+"
                        ;
                        succeeded = ((MR_tag((MR_Word) OpType_10)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          OutputArgVal_16 = ConstX_20;
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        // case "-"
                        ;
                        {
                          MR_Word IntegerX_23;
                          MR_Word Var_29;
                          MR_Word Var_30;
                          MR_Word Var_31;

                          succeeded = ((MR_tag((MR_Word) OpType_10)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_29 = (MR_Integer) 292;
                            Var_30 = (MR_Integer) 0;
                            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, Var_29, Var_30);
                            if (succeeded)
                            {
                              succeeded = transform_hlds__const_prop__is_integer_for_op_type_3_p_0(OpType_10, FunctorX_19, &IntegerX_23);
                              if (succeeded)
                              {
                                Var_31 = mercury__integer__zero_0_f_0();
                                succeeded = parse_tree__int_emu__emu_minus_4_p_0(OpType_10, Var_31, IntegerX_23, &OutputArgVal_16);
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        // case "\"
                        ;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 292, (MR_Integer) 0);
                        if (succeeded)
                          succeeded = parse_tree__int_emu__emu_not_3_p_0(OpType_10, FunctorX_19, &OutputArgVal_16);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        // case "floor_to_multiple_of_bits_per_int"
                        ;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 292, (MR_Integer) 0);
                        if (succeeded)
                          succeeded = parse_tree__int_emu__emu_int_floor_to_multiple_of_bits_per_int_3_p_0(OpType_10, ConstX_20, &OutputArgVal_16);
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        // case "quot_bits_per_int"
                        ;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 292, (MR_Integer) 0);
                        if (succeeded)
                          succeeded = parse_tree__int_emu__emu_int_quot_bits_per_int_3_p_0(OpType_10, ConstX_20, &OutputArgVal_16);
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        // case "rem_bits_per_int"
                        ;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 292, (MR_Integer) 0);
                        if (succeeded)
                          succeeded = parse_tree__int_emu__emu_int_rem_bits_per_int_3_p_0(OpType_10, ConstX_20, &OutputArgVal_16);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        // case "times_bits_per_int"
                        ;
                        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 292, (MR_Integer) 0);
                        if (succeeded)
                          succeeded = parse_tree__int_emu__emu_int_times_bits_per_int_3_p_0(OpType_10, ConstX_20, &OutputArgVal_16);
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
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__8_8 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (OutputArgVal_16));
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

static MR_bool MR_CALL 
transform_hlds__const_prop__is_integer_for_op_type_3_p_0(
  MR_Word OpType_4,
  MR_Word Functor_5,
  MR_Word * Integer_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word Const_7;

  if (succeeded)
  {
    Const_7 = ((MR_Word) ((MR_hl_field(3, Functor_5, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0))
    {
      MR_Word OpNumBits_8 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) OpNumBits_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpNumBits_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                int8_t I8_11;

                succeeded = ((MR_tag((MR_Word) Const_7)) == (MR_Integer) 2);
                if (succeeded)
                {
                  I8_11 = ((int8_t) (MR_Word) (MR_hl_field(2, Const_7, (MR_Integer) 0)));
                  *Integer_6 = mercury__integer__from_int8_1_f_0(I8_11);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                int16_t I16_12;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  I16_12 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_int16_1_f_0(I16_12);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                int32_t I32_13;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  I32_13 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_int32_1_f_0(I32_13);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                int64_t I64_14;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  I64_14 = MR_unbox_int64((MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_int64_1_f_0(I64_14);
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer I_10;

            succeeded = ((MR_tag((MR_Word) Const_7)) == (MR_Integer) 0);
            if (succeeded)
            {
              I_10 = ((MR_Integer) ((MR_hl_field(0, Const_7, (MR_Integer) 0))));
              *Integer_6 = mercury__integer__integer_1_f_0(I_10);
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word OpNumBits_21 = ((MR_Word) ((MR_hl_field(1, OpType_4, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) OpNumBits_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpNumBits_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                uint8_t U8_17;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  U8_17 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_uint8_1_f_0(U8_17);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                uint16_t U16_18;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  U16_18 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_uint16_1_f_0(U16_18);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                uint32_t U32_19;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  U32_19 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_uint32_1_f_0(U32_19);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                uint64_t U64_20;

                succeeded = ((((MR_tag((MR_Word) Const_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  U64_20 = MR_unbox_uint64((MR_hl_field(3, Const_7, (MR_Integer) 1)));
                  *Integer_6 = mercury__integer__from_uint64_1_f_0(U64_20);
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned U_16;

            succeeded = ((MR_tag((MR_Word) Const_7)) == (MR_Integer) 1);
            if (succeeded)
            {
              U_16 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 0))));
              *Integer_6 = mercury__integer__from_uint_1_f_0(U_16);
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__const_prop__lookup_arg_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Info_11;
    MR_Word Infos_12;
    MR_Word Type_13;
    MR_Word Inst_14;

    parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__1_1, Var_9, &Type_13);
    hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__2_2, Var_9, &Inst_14);
    {
      Info_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_11, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, Info_11, 1) = ((MR_Box) (Type_13));
      MR_hl_field(0, Info_11, 2) = ((MR_Box) (Inst_14));
    }
    transform_hlds__const_prop__lookup_arg_vars_4_p_0(HeadVar__1_1, HeadVar__2_2, Vars_10, &Infos_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Info_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Infos_12));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____semi_call_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__const_prop____Unify____semi_call_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__const_prop____Compare____semi_call_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__const_prop____Compare____semi_call_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_semi_call_result_0);
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
