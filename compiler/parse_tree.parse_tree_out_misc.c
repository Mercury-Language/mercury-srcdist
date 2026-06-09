/*
** Automatically generated from `parse_tree_out_misc.m'
** by the Mercury compiler,
** version rotd-2026-06-09
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


// :- module parse_tree.parse_tree_out_misc.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_misc__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_misc.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1;

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word S_9,
  MR_Word Var_10);

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_var_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Box S_9,
  MR_Word Var_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_4[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_8[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_9[3][11];

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_10[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_11[1][8];

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_12[1][4];


struct parse_tree__parse_tree_out_misc__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out_misc__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_5_0_s parse_tree__parse_tree_out_misc_vector_common_5[27];

struct parse_tree__parse_tree_out_misc__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_tree_out_misc__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__parse_tree_out_misc__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_6_0_s parse_tree__parse_tree_out_misc_vector_common_6[4];

struct parse_tree__parse_tree_out_misc__vector_common_type_7_0_s {
  const MR_Word parse_tree__parse_tree_out_misc__vector_common_type_7_0__vct_7_f_0;
  const MR_String parse_tree__parse_tree_out_misc__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_7_0_s parse_tree__parse_tree_out_misc_vector_common_7[4];



static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_8[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_9[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_12[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_10[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_12[1][4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 33,
    (MR_Integer) 133199,
    (MR_Integer) 133231
  },
};


static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_5_0_s parse_tree__parse_tree_out_misc_vector_common_5[27] = {
  /* row   0 */   { (MR_String) "det" },
  /* row   1 */   { (MR_String) "semidet" },
  /* row   2 */   { (MR_String) "multi" },
  /* row   3 */   { (MR_String) "nondet" },
  /* row   4 */   { (MR_String) "cc_multi" },
  /* row   5 */   { (MR_String) "cc_nondet" },
  /* row   6 */   { (MR_String) "erroneous" },
  /* row   7 */   { (MR_String) "failure" },
  /* row   8 */   { (MR_String) "promise_exclusive" },
  /* row   9 */   { (MR_String) "promise_exhaustive" },
  /* row  10 */   { (MR_String) "promise_exclusive_exhaustive" },
  /* row  11 */   { (MR_String) "promise" },
  /* row  12 */   { (MR_String) "det" },
  /* row  13 */   { (MR_String) "semidet" },
  /* row  14 */   { (MR_String) "multi" },
  /* row  15 */   { (MR_String) "nondet" },
  /* row  16 */   { (MR_String) "cc_multi" },
  /* row  17 */   { (MR_String) "cc_nondet" },
  /* row  18 */   { (MR_String) "erroneous" },
  /* row  19 */   { (MR_String) "failure" },
  /* row  20 */   { (MR_String) "singleton_vars" },
  /* row  21 */   { (MR_String) "repeated_singleton_vars" },
  /* row  22 */   { (MR_String) "suspected_occurs_check_failure" },
  /* row  23 */   { (MR_String) "non_tail_recursive_calls" },
  /* row  24 */   { (MR_String) "suspicious_recursion" },
  /* row  25 */   { (MR_String) "no_solution_disjunct" },
  /* row  26 */   { (MR_String) "unknown_format_calls" },
};

static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_6_0_s parse_tree__parse_tree_out_misc_vector_common_6[4] = {
  /* row   0 */
  {
    (MR_String) "promise",
    (MR_Integer) 3
  },
  /* row   1 */
  {
    (MR_String) "promise_exclusive",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "promise_exclusive_exhaustive",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "promise_exhaustive",
    (MR_Integer) 1
  },
};

static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_7_0_s parse_tree__parse_tree_out_misc_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_String) "promise"
  },
  /* row   1 */
  {
    (MR_Integer) 0,
    (MR_String) "promise_exclusive"
  },
  /* row   2 */
  {
    (MR_Integer) 1,
    (MR_String) "promise_exhaustive"
  },
  /* row   3 */
  {
    (MR_Integer) 2,
    (MR_String) "promise_exclusive_exhaustive"
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_116_101_120_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word S_5,
  MR_Word Context_6)
{
  MR_String ContextStr_8;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_10;

  ContextStr_8 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_6);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (ContextStr_8)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_116_101_120_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_String ContextStr_8;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_10;

  ContextStr_8 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_6);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (ContextStr_8)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_9)), &conv1_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv1_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_115_116_114_105_110_103_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Lang_5,
  MR_Word S_6)
{
  MR_String Var_10;
  MR_String Var_13;
  MR_String Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_9;

  Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_115_116_114_105_110_103_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Lang_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  MR_String Var_10;
  MR_String Var_13;
  MR_String Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_9;

  Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_9);
  *STATE_VARIABLE_U_9 = ((MR_Word) (conv1_STATE_VARIABLE_U_9));
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Unsigned Indent_5,
  MR_Word S_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 5))));
  MR_Box conv1_STATE_VARIABLE_U_1_11;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (MR_Word) ((MR_Char) 10)), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_11);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_12, Indent_5, S_6);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Unsigned Indent_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  MR_Word STATE_VARIABLE_U_1_11;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 5))));
  MR_Box conv1_STATE_VARIABLE_U_1_11;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (MR_Word) ((MR_Char) 10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_1_11);
  STATE_VARIABLE_U_1_11 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_11));
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_12, Indent_5, STATE_VARIABLE_U_1_11, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Unsigned Indent_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_5 > (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_12;
      MR_Unsigned Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_12;
      MR_Unsigned next_value_of_Indent_5;
      MR_Word next_value_of_STATE_VARIABLE_U_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "\t")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_1_12);
      STATE_VARIABLE_U_1_12 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_12));
      Var_13 = (Indent_5 - (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_5 = Var_13;
      next_value_of_STATE_VARIABLE_U_0_8 = STATE_VARIABLE_U_1_12;
      Indent_5 = next_value_of_Indent_5;
      STATE_VARIABLE_U_0_8 = next_value_of_STATE_VARIABLE_U_0_8;
      continue;
    }
    else
      *STATE_VARIABLE_U_9 = STATE_VARIABLE_U_0_8;
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word S_9,
  MR_Word Var_10)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_15;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "!")), ((MR_Box) (S_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_15);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_17, TypeClassInfo_for_pt_output_16, VarSet_7, VarNamePrint_8, Var_10, S_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  MR_Word STATE_VARIABLE_U_1_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_15;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "!")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv1_STATE_VARIABLE_U_1_15);
  STATE_VARIABLE_U_1_15 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_15));
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_17, TypeClassInfo_for_pt_output_16, VarSet_7, VarNamePrint_8, Var_10, STATE_VARIABLE_U_1_15, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_13;

  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_U_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_U_13));
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word StateVars_9,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_28_28;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv1_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_9[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_8));
    MR_hl_field(0, Var_14, 7) = NULL;
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_11[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_String) ", "));
    MR_hl_field(0, Var_15, 5) = NULL;
  }
  {
    TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 3, &TypeInfo_28_28);
  mercury__list__gap_foldl_5_p_0(TypeInfo_26_26, TypeInfo_28_28, (MR_Word) (Var_14), Var_15, (MR_Word) (StateVars_9), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv1_STATE_VARIABLE_U_13);
  *STATE_VARIABLE_U_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_13));
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_var_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Box S_9,
  MR_Word Var_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Box STATE_VARIABLE_U_1_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "!")), S_9, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_15);
  parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0(TypeInfo_for_T_17, TypeClassInfo_for_pt_output_16, VarSet_7, VarNamePrint_8, Var_10, S_9, STATE_VARIABLE_U_1_15, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Unsigned Indent_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  MR_Box STATE_VARIABLE_U_1_11;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 5))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (MR_Word) ((MR_Char) 10)), S_6, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_1_11);
  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_12, Indent_5, S_6, STATE_VARIABLE_U_1_11, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(
  MR_Unsigned Indent_5,
  MR_Word Stream_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]), 0)), 5))));
  MR_Box conv1_STATE_VARIABLE_U_1_12;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]))), ((MR_Box) (MR_Word) ((MR_Char) 10)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_12);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]), Indent_5, Stream_6);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Unsigned Indent_5,
  MR_Word S_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_5 > (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Unsigned Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_12;
      MR_Unsigned next_value_of_Indent_5;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "\t")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_12);
      Var_13 = (Indent_5 - (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_5 = Var_13;
      Indent_5 = next_value_of_Indent_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Unsigned Indent_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_5 > (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_12;
      MR_Unsigned Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
      MR_Unsigned next_value_of_Indent_5;
      MR_Box next_value_of_STATE_VARIABLE_U_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "\t")), S_6, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_1_12);
      Var_13 = (Indent_5 - (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_5 = Var_13;
      next_value_of_STATE_VARIABLE_U_0_8 = STATE_VARIABLE_U_1_12;
      Indent_5 = next_value_of_Indent_5;
      STATE_VARIABLE_U_0_8 = next_value_of_STATE_VARIABLE_U_0_8;
      continue;
    }
    else
      *STATE_VARIABLE_U_9 = STATE_VARIABLE_U_0_8;
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_misc__format_context_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Box S_5,
  MR_Word Context_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_String ContextStr_8;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  ContextStr_8 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_6);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (ContextStr_8)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__write_context_4_p_0(
  MR_Word Stream_5,
  MR_Word Context_6)
{
  MR_String ContextStr_8;

  ContextStr_8 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_6);
  mercury__io__write_string_4_p_0(Stream_5, ContextStr_8);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__context_to_string_1_f_0(
  MR_Word Context_3)
{
  MR_bool succeeded;
  MR_String ContextStr_4;
  MR_String FileName_5 = ((MR_String) ((MR_hl_field(0, Context_3, 0))));
  MR_Integer LineNumber_6 = ((MR_Integer) ((MR_hl_field(0, Context_3, 1))));

  succeeded = (strcmp(FileName_5, (MR_String) "") == 0);
  if (succeeded)
    ContextStr_4 = (MR_String) "";
  else
  {
    MR_String Var_14;
    MR_String Var_22;
    MR_String Var_24;

    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_4[0]), (MR_Integer) 3, LineNumber_6, &Var_14);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ": ");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_22);
    ContextStr_4 = mercury__string__f_43_43_2_f_0(FileName_5, Var_24);
  }
  return ContextStr_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__no_space_context_to_string_1_f_0(
  MR_Word Context_3)
{
  MR_bool succeeded;
  MR_String ContextStr_4;
  MR_String FileName_5 = ((MR_String) ((MR_hl_field(0, Context_3, 0))));
  MR_Integer LineNumber_6 = ((MR_Integer) ((MR_hl_field(0, Context_3, 1))));

  succeeded = (strcmp(FileName_5, (MR_String) "") == 0);
  if (succeeded)
    ContextStr_4 = (MR_String) "";
  else
  {
    MR_String Var_14;
    MR_String Var_22;
    MR_String Var_24;

    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_4[0]), (MR_Integer) 3, LineNumber_6, &Var_14);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ":");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_22);
    ContextStr_4 = mercury__string__f_43_43_2_f_0(FileName_5, Var_24);
  }
  return ContextStr_4;
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Lang_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  MR_String Var_10;
  MR_String Var_13;
  MR_String Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_foreign_language_string_4_p_0(
  MR_Word Lang_5,
  MR_Word Stream_6)
{
  MR_String Var_11;
  MR_String Var_13;
  MR_String Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_9;

  Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]))), ((MR_Box) (Var_11)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(
  MR_Word Lang_3)
{
  MR_String Str_4;
  MR_String Var_6;
  MR_String Var_7;

  Var_7 = libs__globals__foreign_language_string_1_f_0(Lang_3);
  Var_6 = mercury__string__f_43_43_2_f_0(Var_7, (MR_String) "\"");
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_6);
  return Str_4;
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_misc__mercury_format_state_var_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), (MR_hl_field(0, closure, 7)), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word StateVars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_28_28;
  MR_Word Var_14;
  MR_Word Var_15;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_9[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_8));
    MR_hl_field(0, Var_14, 7) = S_10;
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_11[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_String) ", "));
    MR_hl_field(0, Var_15, 5) = S_10;
  }
  {
    TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 3, &TypeInfo_28_28);
  mercury__list__gap_foldl_5_p_0(TypeInfo_26_26, TypeInfo_28_28, (MR_Word) (Var_14), Var_15, (MR_Word) (StateVars_9), STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word StateVars_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_14, (MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]), VarSet_7, VarNamePrint_8, StateVars_9, Stream_10);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word StateVars_9,
  MR_Word S_10)
{
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_28_28;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv0_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_9[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_8));
    MR_hl_field(0, Var_14, 7) = ((MR_Box) (S_10));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_11[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_String) ", "));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (S_10));
  }
  {
    TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 3, &TypeInfo_28_28);
  mercury__list__gap_foldl_5_p_0(TypeInfo_26_26, TypeInfo_28_28, (MR_Word) (Var_14), Var_15, (MR_Word) (StateVars_9), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_quantifier_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  if ((ExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_15 = STATE_VARIABLE_U_0_14;
  else
  {
    MR_Box STATE_VARIABLE_U_1_17;
    MR_Box STATE_VARIABLE_U_2_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, 0)), 6))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "some [")), S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_17);
    parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_pt_output_20, TypeVarSet_7, VarNamePrint_8, ExistQVars_9, S_10, STATE_VARIABLE_U_1_17, &STATE_VARIABLE_U_2_18);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "] ")), S_10, STATE_VARIABLE_U_2_18, STATE_VARIABLE_U_15);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_quantifier_6_p_0(
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[3]), TypeVarSet_7, VarNamePrint_8, ExistQVars_9, Stream_10);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Word S_10)
{
  if (!((ExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, 0)), 6))));
    MR_Box conv1_STATE_VARIABLE_U_1_17;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_15;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "some [")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_17);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_pt_output_20, TypeVarSet_7, VarNamePrint_8, ExistQVars_9, S_10);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "] ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_15);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__mercury_quantifier_to_string_3_f_0(
  MR_Word TypeVarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word ExistQVars_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_2[1]), TypeVarSet_5, VarNamePrint_6, ExistQVars_7, State0_9, &State_10);
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  if ((ExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_15 = STATE_VARIABLE_U_0_14;
  else
  {
    MR_Word STATE_VARIABLE_U_1_17;
    MR_Word STATE_VARIABLE_U_2_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, 0)), 6))));
    MR_Box conv1_STATE_VARIABLE_U_1_17;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_15;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "some [")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv1_STATE_VARIABLE_U_1_17);
    STATE_VARIABLE_U_1_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_17));
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_pt_output_20, TypeVarSet_7, VarNamePrint_8, ExistQVars_9, STATE_VARIABLE_U_1_17, &STATE_VARIABLE_U_2_18);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "] ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_18)), &conv3_STATE_VARIABLE_U_15);
    *STATE_VARIABLE_U_15 = ((MR_Word) (conv3_STATE_VARIABLE_U_15));
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__goal_warning_to_string_1_f_0(
  MR_Word Warning_3)
{
  MR_String Str_4 = ((&parse_tree__parse_tree_out_misc_vector_common_5[20 + Warning_3]))->parse_tree__parse_tree_out_misc__vector_common_type_5_0__vct_5_f_0;

  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__can_fail_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "can_fail";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "cannot_fail";
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_out_misc_vector_common_5[12 + HeadVar__1_1]))->parse_tree__parse_tree_out_misc__vector_common_type_5_0__vct_5_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__arg_tabling_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "addr";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "promise_implied";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "value";
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__maybe_arg_tabling_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "output";
  else
  {
    MR_Word ArgTablingMethod_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    switch (ArgTablingMethod_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "addr";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "promise_implied";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "value";
        break;
    }
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__eval_method_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "normal";
  else
  {
    MR_Word TabledMethod_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    HeadVar__2_2 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_3);
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(
  MR_Word TabledMethod_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) TabledMethod_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Str_4 = (MR_String) "loop_check";
      break;
    case (MR_Integer) 1:
      Str_4 = (MR_String) "memo";
      break;
    case (MR_Integer) 2:
      {
        MR_Word EntryKind_7 = ((((MR_Unsigned) ((MR_hl_field(2, TabledMethod_3, 0))) >> 1)) & (MR_Integer) 3);
        MR_Word IsUnitize_8 = ((MR_Unsigned) ((MR_hl_field(2, TabledMethod_3, 0))) & (MR_Integer) 1);
        MR_String EntryKindStr_9;
        MR_String UnitizeStr_10;
        MR_String Var_12;
        MR_String Var_13;

        switch (EntryKind_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            EntryKindStr_9 = (MR_String) "entry_stores_outputs, ";
            break;
          case (MR_Integer) 2:
            EntryKindStr_9 = (MR_String) "entry_stores_procid_inputs_outputs, ";
            break;
          case (MR_Integer) 1:
            EntryKindStr_9 = (MR_String) "entry_stores_procid_outputs, ";
            break;
        }
        switch (IsUnitize_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            UnitizeStr_10 = (MR_String) "alone";
            break;
          case (MR_Integer) 0:
            UnitizeStr_10 = (MR_String) "unitize";
            break;
        }
        Var_13 = mercury__string__f_43_43_2_f_0(UnitizeStr_10, (MR_String) ")");
        Var_12 = mercury__string__f_43_43_2_f_0(EntryKindStr_9, Var_13);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", Var_12);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word MinimalMethod_6 = ((MR_Unsigned) ((MR_hl_field(3, TabledMethod_3, 0))) & (MR_Integer) 3);

        switch (MinimalMethod_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Str_4 = (MR_String) "minimal_model_own_stacks_consumer";
            break;
          case (MR_Integer) 2:
            Str_4 = (MR_String) "minimal_model_own_stacks_generator";
            break;
          case (MR_Integer) 0:
            Str_4 = (MR_String) "minimal_model_stack_copy";
            break;
        }
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "loop_check";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "memo";
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_out_misc.tabled_eval_method_to_pragma_name\'/1", (MR_String) "io");
      break;
    case (MR_Integer) 3:
      {
        MR_Word MinimalMethod_4 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 0))) & (MR_Integer) 3);

        switch (MinimalMethod_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "minimal_model_own_stacks";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
            break;
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "minimal_model";
            break;
        }
      }
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(
  MR_Word Purity_3)
{
  MR_String Str_4;

  switch (Purity_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "impure", (MR_String) " ");
      break;
    case (MR_Integer) 1:
      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "semipure", (MR_String) " ");
      break;
    case (MR_Integer) 0:
      Str_4 = (MR_String) "";
      break;
  }
  return Str_4;
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_misc__purity_name_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__2_2, (MR_String) "pure") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__2_2, (MR_String) "impure") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 2;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__2_2, (MR_String) "semipure") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_misc__purity_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_String) "impure";
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_String) "pure";
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "semipure";
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_misc__promise_to_string_1_f_2(
  MR_Word * HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&parse_tree__parse_tree_out_misc_vector_common_7[0 + slot_0]))->parse_tree__parse_tree_out_misc__vector_common_type_7_0__vct_7_f_0;
    *HeadVar__2_2 = ((&parse_tree__parse_tree_out_misc_vector_common_7[0 + slot_0]))->parse_tree__parse_tree_out_misc__vector_common_type_7_0__vct_7_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 4));
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_misc__promise_to_string_1_f_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 3;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__2_2, ((&parse_tree__parse_tree_out_misc_vector_common_6[0 + mid_2]))->parse_tree__parse_tree_out_misc__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__1_1 = ((&parse_tree__parse_tree_out_misc_vector_common_6[0 + mid_2]))->parse_tree__parse_tree_out_misc__vector_common_type_6_0__vct_6_f_1;
      succeeded = MR_TRUE;
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
  return succeeded;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_out_misc_vector_common_5[8 + HeadVar__1_1]))->parse_tree__parse_tree_out_misc__vector_common_type_5_0__vct_5_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_out_misc_vector_common_5[0 + HeadVar__1_1]))->parse_tree__parse_tree_out_misc__vector_common_type_5_0__vct_5_f_0;

  return HeadVar__2_2;
}

void mercury__parse_tree__parse_tree_out_misc__init(void)
{
}

void mercury__parse_tree__parse_tree_out_misc__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_misc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_misc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_misc.
