/*
** Automatically generated from `parse_tree_to_term.m'
** by the Mercury compiler,
** version rotd-2025-03-12
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


// :- module parse_tree.parse_tree_to_term.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_to_term__init
ENDINIT
*/

#include "parse_tree.parse_tree_to_term.mih"


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
#include "int.mih"
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
#include "term_int.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1039__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1033__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1045__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_90);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word InstVar_5);

static void MR_CALL 
parse_tree__parse_tree_to_term__record_constrained_var_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_Word SubInstTerm_7,
  MR_Word * InstTerm_8);

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_6_p_0(
  MR_Word Lang_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * Term_4,
  MR_Integer STATE_VARIABLE_SizeLeft_0_5,
  MR_Integer * STATE_VARIABLE_SizeLeft_6);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(
  MR_Word Lang_7,
  MR_Word Context_8,
  MR_Word Inst_9,
  MR_Word * InstTerm_10,
  MR_Integer STATE_VARIABLE_SizeLeft_0_25,
  MR_Integer * STATE_VARIABLE_SizeLeft_26);

static void MR_CALL 
parse_tree__parse_tree_to_term__insts_to_limited_size_terms_with_context_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_SizeLeft_0_5,
  MR_Integer * STATE_VARIABLE_SizeLeft_6);

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_lag_7_p_0(
  MR_Word Lang_8,
  MR_Word Context_9,
  MR_Word BoundFunctor_10,
  MR_Word BoundFunctors_11,
  MR_Word * Term_12,
  MR_Integer STATE_VARIABLE_SizeLeft_0_21,
  MR_Integer * STATE_VARIABLE_SizeLeft_22);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(
  MR_Word Lang_7,
  MR_Word Context_8,
  MR_Word InstName_9,
  MR_Word * Term_10,
  MR_Integer STATE_VARIABLE_SizeLeft_0_33,
  MR_Integer * STATE_VARIABLE_SizeLeft_34);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(
  MR_Word Context_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Inst_7,
  MR_Word * InstTerm_8);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word InstName_7,
  MR_Word * Term_8);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9,
  MR_Word * Term_10);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__det_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word Det_5);

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word BoundFunctor_8,
  MR_Word BoundFunctors_9,
  MR_Word * Term_10);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(
  MR_Word ConsId_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word Context_4,
  MR_String Name_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word TypeCtor_5);

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Args_2,
  MR_Word * Term_3);


static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[53][1];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[2][6];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_5[3][7];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[4][3];


struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s parse_tree__parse_tree_to_term_vector_common_7[15];



static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[53][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "func")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "=")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "pred")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) ">>")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "no_results")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "results")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "fgtc")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) ".")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "::")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "impure")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) "semipure")) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "is")) },
  /* row  14 */
  { ((MR_Box) ((MR_String) "=<")) },
  /* row  15 */
  { ((MR_Box) ((MR_String) "\044any")) },
  /* row  16 */
  { ((MR_Box) ((MR_String) "\044ground")) },
  /* row  17 */
  { ((MR_Box) ((MR_String) "\044merge_inst")) },
  /* row  18 */
  { ((MR_Box) ((MR_String) "\044mostly_uniq_inst")) },
  /* row  19 */
  { ((MR_Box) ((MR_String) "\044shared_inst")) },
  /* row  20 */
  { ((MR_Box) ((MR_String) "\044typed_ground")) },
  /* row  21 */
  { ((MR_Box) ((MR_String) "\044typed_inst")) },
  /* row  22 */
  { ((MR_Box) ((MR_String) "\044unify")) },
  /* row  23 */
  { ((MR_Box) ((MR_String) "groundness_unknown")) },
  /* row  24 */
  { ((MR_Box) ((MR_String) "is_ground")) },
  /* row  25 */
  { ((MR_Box) ((MR_String) "is_not_ground")) },
  /* row  26 */
  { ((MR_Box) ((MR_String) "contains_any_unknown")) },
  /* row  27 */
  { ((MR_Box) ((MR_String) "does_contain_any")) },
  /* row  28 */
  { ((MR_Box) ((MR_String) "does_not_contain_any")) },
  /* row  29 */
  { ((MR_Box) ((MR_String) "contains_inst_names_known")) },
  /* row  30 */
  { ((MR_Box) ((MR_String) "contains_inst_names_unknown")) },
  /* row  31 */
  { ((MR_Box) ((MR_String) "contains_inst_vars_known")) },
  /* row  32 */
  { ((MR_Box) ((MR_String) "contains_inst_vars_unknown")) },
  /* row  33 */
  { ((MR_Box) ((MR_String) "contains_types_known")) },
  /* row  34 */
  { ((MR_Box) ((MR_String) "contains_types_unknown")) },
  /* row  35 */
  { ((MR_Box) ((MR_String) "no_type_ctor_propagated")) },
  /* row  36 */
  { ((MR_Box) ((MR_String) "type_ctor_propagated")) },
  /* row  37 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row  38 */
  { ((MR_Box) ((MR_String) "any_func")) },
  /* row  39 */
  { ((MR_Box) ((MR_String) "any_pred")) },
  /* row  40 */
  { ((MR_Box) ((MR_String) "EMPTY_BOUND_INSTS")) },
  /* row  41 */
  { ((MR_Box) ((MR_String) ";")) },
  /* row  42 */
  { ((MR_Box) ((MR_String) "...")) },
  /* row  43 */
  { ((MR_Box) ((MR_String) "base_typeclass_info_const")) },
  /* row  44 */
  { ((MR_Box) ((MR_String) "closure_cons")) },
  /* row  45 */
  { ((MR_Box) ((MR_String) "deep_profiling_proc_layout")) },
  /* row  46 */
  { ((MR_Box) ((MR_String) "ground_term_const")) },
  /* row  47 */
  { ((MR_Box) ((MR_String) "table_io_entry_desc")) },
  /* row  48 */
  { ((MR_Box) ((MR_String) "tabling_info_const")) },
  /* row  49 */
  { ((MR_Box) ((MR_String) "type_info_const")) },
  /* row  50 */
  { ((MR_Box) ((MR_String) "typeclass_info_cell_constructor")) },
  /* row  51 */
  { ((MR_Box) ((MR_String) "typeclass_info_const")) },
  /* row  52 */
  { ((MR_Box) ((MR_String) "free")) },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_5[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s parse_tree__parse_tree_to_term_vector_common_7[15] = {
  /* row   0 */   { (MR_String) "any" },
  /* row   1 */   { (MR_String) "unique_any" },
  /* row   2 */   { (MR_String) "mostly_unique_any" },
  /* row   3 */   { (MR_String) "clobbered_any" },
  /* row   4 */   { (MR_String) "mostly_clobbered_any" },
  /* row   5 */   { (MR_String) "any" },
  /* row   6 */   { (MR_String) "unique_any" },
  /* row   7 */   { (MR_String) "mostly_unique_any" },
  /* row   8 */   { (MR_String) "clobbered_any" },
  /* row   9 */   { (MR_String) "mostly_clobbered_any" },
  /* row  10 */   { (MR_String) "any" },
  /* row  11 */   { (MR_String) "unique_any" },
  /* row  12 */   { (MR_String) "mostly_unique_any" },
  /* row  13 */   { (MR_String) "clobbered_any" },
  /* row  14 */   { (MR_String) "mostly_clobbered_any" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1039__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_83)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[3]), ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_83)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1033__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_76)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[3]), ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_76)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1045__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_90)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[3]), ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_90)));
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word InstVar_5)
{
  MR_Word Term_6;
  MR_Integer InstVarNum_7;
  MR_String InstVarNumStr_8;
  MR_Word Var_9;
  MR_String Var_10;

  InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVar_5);
  InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(InstVarNum_7);
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", InstVarNumStr_8);
  {
    Var_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_9, 0) = ((MR_Box) (Var_10));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_4));
  }
  return Term_6;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__record_constrained_var_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_Word SubInstTerm_7,
  MR_Word * InstTerm_8)
{
  MR_Word VarTerm_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_11 = mercury__term_context__dummy_context_0_f_0();
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
  }
  VarTerm_9 = mercury__term__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10);
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (SubInstTerm_7));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (VarTerm_9));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *InstTerm_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[14]));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_5));
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_to_term__any_inst_uniqueness_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_to_term_vector_common_7[10 + HeadVar__1_1]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_3_f_0(
  MR_Word Lang_5,
  MR_Integer SizeLeft_6,
  MR_Word InstName_7)
{
  MR_Word InstNameTerm_8;
  MR_Word Var_10;
  MR_Integer Var_9;

  Var_10 = mercury__term_context__dummy_context_0_f_0();
  parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_5, Var_10, InstName_7, &InstNameTerm_8, SizeLeft_6, &Var_9);
  return InstNameTerm_8;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word InstName_5)
{
  MR_Word InstNameTerm_6;
  MR_Word Var_7;

  Var_7 = mercury__term_context__dummy_context_0_f_0();
  parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_4, Var_7, InstName_5, &InstNameTerm_6);
  return InstNameTerm_6;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(
  MR_Word Lang_5,
  MR_Integer SizeLeft_6,
  MR_Word Inst_7)
{
  MR_Word InstTerm_8;
  MR_Word Var_10;
  MR_Integer Var_9;

  Var_10 = mercury__term_context__dummy_context_0_f_0();
  parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(Lang_5, Var_10, Inst_7, &InstTerm_8, SizeLeft_6, &Var_9);
  return InstTerm_8;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_6_p_0(
  MR_Word Lang_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * Term_4,
  MR_Integer STATE_VARIABLE_SizeLeft_0_5,
  MR_Integer * STATE_VARIABLE_SizeLeft_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[40]));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_2));
    }
    *STATE_VARIABLE_SizeLeft_6 = STATE_VARIABLE_SizeLeft_0_5;
  }
  else
  {
    MR_Word BoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word BoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_lag_7_p_0(Lang_1, Context_2, BoundFunctor_18, BoundFunctors_19, Term_4, STATE_VARIABLE_SizeLeft_0_5, STATE_VARIABLE_SizeLeft_6);
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_InstTerm_8;

  parse_tree__parse_tree_to_term__record_constrained_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_InstTerm_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_InstTerm_8));
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_ModeTerm_8;

  conv2_ModeTerm_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_ModeTerm_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_ModeTerm_8;

  conv1_ModeTerm_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_ModeTerm_8));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(
  MR_Word Lang_7,
  MR_Word Context_8,
  MR_Word Inst_9,
  MR_Word * InstTerm_10,
  MR_Integer STATE_VARIABLE_SizeLeft_0_25,
  MR_Integer * STATE_VARIABLE_SizeLeft_26)
{
  switch (MR_tag((MR_Word) Inst_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *InstTerm_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[52]));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_8));
            }
            *STATE_VARIABLE_SizeLeft_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_25 - (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            *InstTerm_10 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, (MR_String) "not_reached");
            *STATE_VARIABLE_SizeLeft_26 = STATE_VARIABLE_SizeLeft_0_25;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_62 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));

        if ((HOInstInfo_62 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_44;
          MR_Word Var_114;

          Var_44 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_61, (MR_String) "ground");
          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_114, 0) = ((MR_Box) (Var_44));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *InstTerm_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_8));
          }
        }
        else
        {
          MR_Word PredInstInfo_59 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_62), (MR_Integer) 1));

          parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0(Lang_7, Context_8, PredInstInfo_59, InstTerm_10);
        }
        *STATE_VARIABLE_SizeLeft_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_25 - (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_15 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 1))));
        MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
        MR_Word BoundFunctorsTerm_17;
        MR_Word ArgTerms_18;
        MR_Integer STATE_VARIABLE_SizeLeft_33_33;
        MR_Integer STATE_VARIABLE_SizeLeft_35_35;
        MR_Word Var_39;
        MR_String Var_40;
        MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);

        parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_6_p_0(Lang_7, Context_8, BoundFunctors_16, &BoundFunctorsTerm_17, STATE_VARIABLE_SizeLeft_0_25, &STATE_VARIABLE_SizeLeft_33_33);
        switch (Lang_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ResultsTerm_19;
              MR_Word Var_37;

              ResultsTerm_19 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Context_8, InstResults_15);
              STATE_VARIABLE_SizeLeft_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_33_33 - (MR_Unsigned) 1);
              {
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (BoundFunctorsTerm_17));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgTerms_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgTerms_18, 0) = ((MR_Box) (ResultsTerm_19));
                MR_hl_field(1, ArgTerms_18, 1) = ((MR_Box) (Var_37));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                ArgTerms_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgTerms_18, 0) = ((MR_Box) (BoundFunctorsTerm_17));
                MR_hl_field(1, ArgTerms_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_SizeLeft_35_35 = STATE_VARIABLE_SizeLeft_33_33;
            }
            break;
        }
        switch (Uniq_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            Var_40 = (MR_String) "clobbered";
            break;
          case (MR_Integer) 4:
            Var_40 = (MR_String) "mostly_clobbered";
            break;
          case (MR_Integer) 2:
            Var_40 = (MR_String) "mostly_unique";
            break;
          case (MR_Integer) 0:
            Var_40 = (MR_String) "bound";
            break;
          case (MR_Integer) 1:
            Var_40 = (MR_String) "unique";
            break;
        }
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
        }
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_39, ArgTerms_18, Context_8, InstTerm_10);
        *STATE_VARIABLE_SizeLeft_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_35_35 - (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_24 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));

            parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, InstName_24, InstTerm_10, STATE_VARIABLE_SizeLeft_0_25, STATE_VARIABLE_SizeLeft_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
            MR_Word SubInst_22 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
            MR_Word SubInstTerm_23;
            MR_Integer STATE_VARIABLE_SizeLeft_52_52;
            MR_Word Var_53;
            MR_Integer Var_55;
            MR_Box conv4_InstTerm_10;

            parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, SubInst_22, &SubInstTerm_23, STATE_VARIABLE_SizeLeft_0_25, &STATE_VARIABLE_SizeLeft_52_52);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[2]));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_3));
              MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_53, 3) = ((MR_Box) (Context_8));
            }
            mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_53, Vars_21, ((MR_Box) (SubInstTerm_23)), &conv4_InstTerm_10);
            *InstTerm_10 = ((MR_Word) (conv4_InstTerm_10));
            Var_55 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), Vars_21);
            *STATE_VARIABLE_SizeLeft_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_52_52 - (MR_Unsigned) Var_55);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

            if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_27 = ((&parse_tree__parse_tree_to_term_vector_common_7[5 + Uniq_12]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
              MR_Word Var_105;

              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_105, 0) = ((MR_Box) (Var_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *InstTerm_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_105));
                MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, base, 2) = ((MR_Box) (Context_8));
              }
            }
            else
            {
              MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));
              MR_Word PredOrFunc_71 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_14, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes_72 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_14, (MR_Integer) 1))));
              MR_Word Det_74 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_14, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word ModesTerm_75;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_String Var_102;
              MR_Word Var_103;

              switch (PredOrFunc_71) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgModes_76;
                    MR_Word RetMode_77;
                    MR_Word ArgModesTerm_78;
                    MR_Word Var_83;
                    MR_Word Var_84;
                    MR_Word Var_86;
                    MR_Word Var_87;
                    MR_Word Var_88;
                    MR_Box conv0_RetMode_77;

                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_72, &ArgModes_76, &conv0_RetMode_77);
                    RetMode_77 = ((MR_Word) (conv0_RetMode_77));
                    {
                      Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_84, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                      MR_hl_field(0, Var_84, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_1));
                      MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_84, 3) = ((MR_Box) (Lang_7));
                      MR_hl_field(0, Var_84, 4) = ((MR_Box) (Context_8));
                    }
                    Var_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_84, ArgModes_76);
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[38]), Var_83, Context_8, &ArgModesTerm_78);
                    Var_88 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_7, Context_8, RetMode_77);
                    {
                      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
                      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_86, 0) = ((MR_Box) (ArgModesTerm_78));
                      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[2]), Var_86, Context_8, &ModesTerm_75);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_80;
                    MR_Word Var_81;

                    {
                      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                      MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0_2));
                      MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_81, 3) = ((MR_Box) (Lang_7));
                      MR_hl_field(0, Var_81, 4) = ((MR_Box) (Context_8));
                    }
                    Var_80 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_81, Modes_72);
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[39]), Var_80, Context_8, &ModesTerm_75);
                  }
                  break;
              }
              Var_102 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Det_74);
              {
                Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_103, 0) = ((MR_Box) (Var_102));
              }
              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_103));
                MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Var_93, 2) = ((MR_Box) (Context_8));
              }
              {
                Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_91, 0) = ((MR_Box) (ModesTerm_75));
                MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
              }
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[13]), Var_91, Context_8, InstTerm_10);
            }
            *STATE_VARIABLE_SizeLeft_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_25 - (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
            MR_Word Var_48;
            MR_Word Var_49;

            Var_49 = mercury__term_context__dummy_context_0_f_0();
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_20));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
            }
            *InstTerm_10 = mercury__term__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48);
            *STATE_VARIABLE_SizeLeft_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_25 - (MR_Unsigned) 1);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__insts_to_limited_size_terms_with_context_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_SizeLeft_0_5,
  MR_Integer * STATE_VARIABLE_SizeLeft_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SizeLeft_6 = STATE_VARIABLE_SizeLeft_0_5;
  }
  else
  {
    MR_Word HeadInst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailInsts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    succeeded = (STATE_VARIABLE_SizeLeft_0_5 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[42]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) (HeadVar__2_2));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_SizeLeft_6 = STATE_VARIABLE_SizeLeft_0_5;
    }
    else
    {
      MR_Word HeadInstTerm_18;
      MR_Word TailInstTerms_19;
      MR_Integer STATE_VARIABLE_SizeLeft_25_25;

      parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadInst_14, &HeadInstTerm_18, STATE_VARIABLE_SizeLeft_0_5, &STATE_VARIABLE_SizeLeft_25_25);
      parse_tree__parse_tree_to_term__insts_to_limited_size_terms_with_context_6_p_0(HeadVar__1_1, HeadVar__2_2, TailInsts_15, &TailInstTerms_19, STATE_VARIABLE_SizeLeft_25_25, STATE_VARIABLE_SizeLeft_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadInstTerm_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailInstTerms_19));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_lag_7_p_0(
  MR_Word Lang_8,
  MR_Word Context_9,
  MR_Word BoundFunctor_10,
  MR_Word BoundFunctors_11,
  MR_Word * Term_12,
  MR_Integer STATE_VARIABLE_SizeLeft_0_21,
  MR_Integer * STATE_VARIABLE_SizeLeft_22)
{
  MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 0))));
  MR_Word ArgInsts_15 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 1))));
  MR_Word ArgInstTerms_16;
  MR_Word FirstTerm_17;
  MR_Integer STATE_VARIABLE_SizeLeft_23_23;

  parse_tree__parse_tree_to_term__insts_to_limited_size_terms_with_context_6_p_0(Lang_8, Context_9, ArgInsts_15, &ArgInstTerms_16, STATE_VARIABLE_SizeLeft_0_21, &STATE_VARIABLE_SizeLeft_23_23);
  parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(ConsId_14, ArgInstTerms_16, &FirstTerm_17);
  if ((BoundFunctors_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Term_12 = FirstTerm_17;
    *STATE_VARIABLE_SizeLeft_22 = STATE_VARIABLE_SizeLeft_23_23;
  }
  else
  {
    MR_Word HeadBoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_11, (MR_Integer) 0))));
    MR_Word TailBoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_11, (MR_Integer) 1))));
    MR_Word SecondTerm_20;
    MR_Word Var_26;
    MR_Word Var_28;

    parse_tree__parse_tree_to_term__bound_functors_to_limited_size_term_lag_7_p_0(Lang_8, Context_9, HeadBoundFunctor_18, TailBoundFunctors_19, &SecondTerm_20, STATE_VARIABLE_SizeLeft_23_23, STATE_VARIABLE_SizeLeft_22);
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (SecondTerm_20));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (FirstTerm_17));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[41]), Var_26, Context_9, Term_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(
  MR_Word Lang_7,
  MR_Word Context_8,
  MR_Word InstName_9,
  MR_Word * Term_10,
  MR_Integer STATE_VARIABLE_SizeLeft_0_33,
  MR_Integer * STATE_VARIABLE_SizeLeft_34)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 0))));
        MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 1))));
        MR_Word ArgInstTerms_14;
        MR_Integer STATE_VARIABLE_SizeLeft_35_35;

        parse_tree__parse_tree_to_term__insts_to_limited_size_terms_with_context_6_p_0(Lang_7, Context_8, ArgInsts_13, &ArgInstTerms_14, STATE_VARIABLE_SizeLeft_0_33, &STATE_VARIABLE_SizeLeft_35_35);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_12, ArgInstTerms_14, Context_8, Term_10);
        *STATE_VARIABLE_SizeLeft_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_35_35 - (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Liveness_15 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Real_16 = ((MR_Unsigned) ((MR_hl_field(1, InstName_9, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word InstA_17 = ((MR_Word) ((MR_hl_field(1, InstName_9, (MR_Integer) 1))));
        MR_Word InstB_18 = ((MR_Word) ((MR_hl_field(1, InstName_9, (MR_Integer) 2))));

        switch (Lang_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word LiveTerm_19;
              MR_Word RealTerm_20;
              MR_Word InstTermA_21;
              MR_Word InstTermB_22;
              MR_String Var_40;
              MR_String Var_41;
              MR_Integer STATE_VARIABLE_SizeLeft_42_42;
              MR_Integer STATE_VARIABLE_SizeLeft_44_44;

              Var_40 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Liveness_15);
              LiveTerm_19 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_40);
              Var_41 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_16);
              RealTerm_20 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_41);
              STATE_VARIABLE_SizeLeft_42_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_33 - (MR_Unsigned) 2);
              parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, InstA_17, &InstTermA_21, STATE_VARIABLE_SizeLeft_42_42, &STATE_VARIABLE_SizeLeft_44_44);
              parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, InstB_18, &InstTermB_22, STATE_VARIABLE_SizeLeft_44_44, STATE_VARIABLE_SizeLeft_34);
              succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_48;
                MR_Word Var_50;

                Var_50 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                {
                  Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[22]), Var_48, Context_8, Term_10);
              }
              else
              {
                MR_Word Var_53;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Word Var_57;

                {
                  Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_57, 0) = ((MR_Box) (InstTermB_22));
                  MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (InstTermA_21));
                  MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_55, 0) = ((MR_Box) (RealTerm_20));
                  MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
                }
                {
                  Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_53, 0) = ((MR_Box) (LiveTerm_19));
                  MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[22]), Var_53, Context_8, Term_10);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "unify_inst");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstA_173 = ((MR_Word) ((MR_hl_field(2, InstName_9, (MR_Integer) 0))));
        MR_Word InstB_174 = ((MR_Word) ((MR_hl_field(2, InstName_9, (MR_Integer) 1))));

        switch (Lang_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer STATE_VARIABLE_SizeLeft_61_61;
              MR_Word InstTermA_169;
              MR_Word InstTermB_170;

              parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, InstA_173, &InstTermA_169, STATE_VARIABLE_SizeLeft_0_33, &STATE_VARIABLE_SizeLeft_61_61);
              parse_tree__parse_tree_to_term__inst_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, InstB_174, &InstTermB_170, STATE_VARIABLE_SizeLeft_61_61, STATE_VARIABLE_SizeLeft_34);
              succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_65;
                MR_Word Var_67;

                Var_67 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                {
                  Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_67));
                  MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[17]), Var_65, Context_8, Term_10);
              }
              else
              {
                MR_Word Var_70;
                MR_Word Var_72;

                {
                  Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_72, 0) = ((MR_Box) (InstTermB_170));
                  MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_70, 0) = ((MR_Box) (InstTermA_169));
                  MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[17]), Var_70, Context_8, Term_10);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "merge_inst");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName_23 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));
            MR_Word Uniq_24 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
            MR_Word IsLive_25 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_177 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) & (MR_Integer) 1);

            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word SubInstNameTerm_26;
                  MR_Word UniqTerm_27;
                  MR_Word IsLiveTerm_28;
                  MR_Word IsRealTerm_29;
                  MR_Integer STATE_VARIABLE_SizeLeft_76_76;
                  MR_String Var_77;
                  MR_String Var_79;
                  MR_String Var_80;

                  parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, SubInstName_23, &SubInstNameTerm_26, STATE_VARIABLE_SizeLeft_0_33, &STATE_VARIABLE_SizeLeft_76_76);
                  Var_77 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_24, (MR_String) "shared");
                  UniqTerm_27 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_77);
                  Var_79 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_25);
                  IsLiveTerm_28 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_79);
                  Var_80 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_177);
                  IsRealTerm_29 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_80);
                  *STATE_VARIABLE_SizeLeft_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_76_76 - (MR_Unsigned) 3);
                  succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Word Var_85;
                    MR_Word Var_87;

                    Var_87 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                    {
                      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_87));
                      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[16]), Var_85, Context_8, Term_10);
                  }
                  else
                  {
                    MR_Word Var_90;
                    MR_Word Var_92;
                    MR_Word Var_93;
                    MR_Word Var_94;

                    {
                      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_94, 0) = ((MR_Box) (IsRealTerm_29));
                      MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_93, 0) = ((MR_Box) (IsLiveTerm_28));
                      MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_92, 0) = ((MR_Box) (UniqTerm_27));
                      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
                    }
                    {
                      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_90, 0) = ((MR_Box) (SubInstNameTerm_26));
                      MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[16]), Var_90, Context_8, Term_10);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "ground_inst");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Real_186 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word SubInstName_187 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));
            MR_Word Uniq_188 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
            MR_Word IsLive_189 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);

            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer STATE_VARIABLE_SizeLeft_98_98;
                  MR_String Var_99;
                  MR_String Var_101;
                  MR_String Var_102;
                  MR_Word SubInstNameTerm_178;
                  MR_Word UniqTerm_179;
                  MR_Word IsLiveTerm_180;
                  MR_Word IsRealTerm_181;

                  parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, SubInstName_187, &SubInstNameTerm_178, STATE_VARIABLE_SizeLeft_0_33, &STATE_VARIABLE_SizeLeft_98_98);
                  Var_99 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_188, (MR_String) "shared");
                  UniqTerm_179 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_99);
                  Var_101 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_189);
                  IsLiveTerm_180 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_101);
                  Var_102 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_186);
                  IsRealTerm_181 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_102);
                  *STATE_VARIABLE_SizeLeft_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_98_98 - (MR_Unsigned) 3);
                  succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Word Var_107;
                    MR_Word Var_109;

                    Var_109 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                    {
                      Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_109));
                      MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[15]), Var_107, Context_8, Term_10);
                  }
                  else
                  {
                    MR_Word Var_112;
                    MR_Word Var_114;
                    MR_Word Var_115;
                    MR_Word Var_116;

                    {
                      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_116, 0) = ((MR_Box) (IsRealTerm_181));
                      MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_115, 0) = ((MR_Box) (IsLiveTerm_180));
                      MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
                    }
                    {
                      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_114, 0) = ((MR_Box) (UniqTerm_179));
                      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
                    }
                    {
                      Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_112, 0) = ((MR_Box) (SubInstNameTerm_178));
                      MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_114));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[15]), Var_112, Context_8, Term_10);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "any_inst");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubInstName_196 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));

            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word SubInstNameTerm_194;

                  parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, SubInstName_196, &SubInstNameTerm_194, STATE_VARIABLE_SizeLeft_0_33, STATE_VARIABLE_SizeLeft_34);
                  succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Word Var_123;
                    MR_Word Var_125;

                    Var_125 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                    {
                      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_125));
                      MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[19]), Var_123, Context_8, Term_10);
                  }
                  else
                  {
                    MR_Word Var_128;

                    {
                      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_128, 0) = ((MR_Box) (SubInstNameTerm_194));
                      MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[19]), Var_128, Context_8, Term_10);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "shared_inst");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubInstName_200 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));

            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word SubInstNameTerm_198;

                  parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, SubInstName_200, &SubInstNameTerm_198, STATE_VARIABLE_SizeLeft_0_33, STATE_VARIABLE_SizeLeft_34);
                  succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Word Var_136;
                    MR_Word Var_138;

                    Var_138 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                    {
                      Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_138));
                      MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[18]), Var_136, Context_8, Term_10);
                  }
                  else
                  {
                    MR_Word Var_141;

                    {
                      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_141, 0) = ((MR_Box) (SubInstNameTerm_198));
                      MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[18]), Var_141, Context_8, Term_10);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "mostly_uniq_inst");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_30 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
            MR_Word Uniq_204 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word TypeTerm0_31;
                  MR_Word TypeTerm_32;
                  MR_String Var_146;
                  MR_Word Var_149;
                  MR_Word Var_151;
                  MR_Word UniqTerm_202;

                  Var_146 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_204, (MR_String) "shared");
                  UniqTerm_202 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_8, Var_146);
                  parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_30, &TypeTerm0_31);
                  TypeTerm_32 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeTerm0_31);
                  {
                    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_151, 0) = ((MR_Box) (TypeTerm_32));
                    MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_149, 0) = ((MR_Box) (UniqTerm_202));
                    MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
                  }
                  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[20]), Var_149, Context_8, Term_10);
                  *STATE_VARIABLE_SizeLeft_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_33 - (MR_Unsigned) 1);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_limited_size_term_with_context\'/6", (MR_String) "typed_ground");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubInstName_212 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
            MR_Word Type_214 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));

            switch (Lang_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer STATE_VARIABLE_SizeLeft_155_155;
                  MR_Word SubInstNameTerm_206;
                  MR_Word TypeTerm0_207;
                  MR_Word TypeTerm_208;

                  parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_214, &TypeTerm0_207);
                  TypeTerm_208 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeTerm0_207);
                  STATE_VARIABLE_SizeLeft_155_155 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SizeLeft_0_33 - (MR_Unsigned) 1);
                  parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_with_context_6_p_0(Lang_7, Context_8, SubInstName_212, &SubInstNameTerm_206, STATE_VARIABLE_SizeLeft_155_155, STATE_VARIABLE_SizeLeft_34);
                  succeeded = (*STATE_VARIABLE_SizeLeft_34 <= (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Word Var_160;
                    MR_Word Var_162;

                    Var_162 = parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(Context_8);
                    {
                      Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_160, 0) = ((MR_Box) (Var_162));
                      MR_hl_field(1, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[21]), Var_160, Context_8, Term_10);
                  }
                  else
                  {
                    MR_Word Var_165;
                    MR_Word Var_167;

                    {
                      Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_167, 0) = ((MR_Box) (SubInstNameTerm_206));
                      MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_165, 0) = ((MR_Box) (TypeTerm_208));
                      MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_167));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[21]), Var_165, Context_8, Term_10);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_7, Context_8, SubInstName_212, Term_10);
                  *STATE_VARIABLE_SizeLeft_34 = STATE_VARIABLE_SizeLeft_0_33;
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__ellipsis_term_1_f_0(
  MR_Word Context_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[42]));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Context_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word Inst_5)
{
  MR_Word InstTerm_6;
  MR_Word Var_7;

  Var_7 = mercury__term_context__dummy_context_0_f_0();
  parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_4, Var_7, Inst_5, &InstTerm_6);
  return InstTerm_6;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word Mode_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_4, Var_6, Mode_5);
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstTerm_8;

  parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstTerm_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_InstTerm_8));
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Mode_7)
{
  MR_bool succeeded;
  MR_Word ModeTerm_8;

  if (((MR_tag((MR_Word) Mode_7)) == (MR_Integer) 0))
  {
    MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(0, Mode_7, (MR_Integer) 0))));
    MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(0, Mode_7, (MR_Integer) 1))));
    MR_Word Var_18;

    succeeded = ((MR_tag((MR_Word) InstA_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(1, InstA_9, (MR_Integer) 1))));
      succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstB_10, InstA_9);
    }
    if (succeeded)
      parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstA_9, &ModeTerm_8);
    else
    {
      MR_Word InstTermA_13;
      MR_Word InstTermB_14;
      MR_Word Var_20;
      MR_Word Var_22;

      parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstA_9, &InstTermA_13);
      parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstB_10, &InstTermB_14);
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (InstTermB_14));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (InstTermA_13));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[5]), Var_20, Context_6, &ModeTerm_8);
    }
  }
  else
  {
    MR_Word Name_15 = ((MR_Word) ((MR_hl_field(1, Mode_7, (MR_Integer) 0))));
    MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(1, Mode_7, (MR_Integer) 1))));
    MR_Word ArgInstTerms_17;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (Lang_5));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (Context_6));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_24, ArgInsts_16, &ArgInstTerms_17);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_15, ArgInstTerms_17, Context_6, &ModeTerm_8);
  }
  return ModeTerm_8;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_InstTerm_8;

  parse_tree__parse_tree_to_term__record_constrained_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_InstTerm_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_InstTerm_8));
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_ModeTerm_8;

  conv2_ModeTerm_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_ModeTerm_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_ModeTerm_8;

  conv1_ModeTerm_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_ModeTerm_8));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Inst_7,
  MR_Word * InstTerm_8)
{
  switch (MR_tag((MR_Word) Inst_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *InstTerm_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[52]));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_6));
          }
          break;
        case (MR_Integer) 1:
          *InstTerm_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, (MR_String) "not_reached");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(1, Inst_7, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_40 = ((MR_Word) ((MR_hl_field(1, Inst_7, (MR_Integer) 1))));

        if ((HOInstInfo_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_30;

          switch (Uniq_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              Var_30 = (MR_String) "clobbered";
              break;
            case (MR_Integer) 4:
              Var_30 = (MR_String) "mostly_clobbered";
              break;
            case (MR_Integer) 2:
              Var_30 = (MR_String) "mostly_unique";
              break;
            case (MR_Integer) 0:
              Var_30 = (MR_String) "ground";
              break;
            case (MR_Integer) 1:
              Var_30 = (MR_String) "unique";
              break;
          }
          *InstTerm_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_30);
        }
        else
        {
          MR_Word PredInstInfo_37 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_40), (MR_Integer) 1));

          parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0(Lang_5, Context_6, PredInstInfo_37, InstTerm_8);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_12 = ((MR_Word) ((MR_hl_field(2, Inst_7, (MR_Integer) 1))));
        MR_Word BoundFunctors_13 = ((MR_Word) ((MR_hl_field(2, Inst_7, (MR_Integer) 2))));
        MR_Word BoundFunctorsTerm_14;
        MR_Word ArgTerms_15;
        MR_Word Var_27;
        MR_String Var_28;
        MR_Word Uniq_36 = ((MR_Unsigned) ((MR_hl_field(2, Inst_7, (MR_Integer) 0))) & (MR_Integer) 7);

        if ((BoundFunctors_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            BoundFunctorsTerm_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, BoundFunctorsTerm_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[40]));
            MR_hl_field(0, BoundFunctorsTerm_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, BoundFunctorsTerm_14, 2) = ((MR_Box) (Context_6));
          }
        else
        {
          MR_Word BoundFunctor_90 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_13, (MR_Integer) 0))));
          MR_Word BoundFunctors_91 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_13, (MR_Integer) 1))));

          parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0(Lang_5, Context_6, BoundFunctor_90, BoundFunctors_91, &BoundFunctorsTerm_14);
        }
        switch (Lang_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ResultsTerm_16;
              MR_Word Var_25;

              ResultsTerm_16 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Context_6, InstResults_12);
              {
                Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_25, 0) = ((MR_Box) (BoundFunctorsTerm_14));
                MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgTerms_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgTerms_15, 0) = ((MR_Box) (ResultsTerm_16));
                MR_hl_field(1, ArgTerms_15, 1) = ((MR_Box) (Var_25));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              ArgTerms_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgTerms_15, 0) = ((MR_Box) (BoundFunctorsTerm_14));
              MR_hl_field(1, ArgTerms_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            break;
        }
        switch (Uniq_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            Var_28 = (MR_String) "clobbered";
            break;
          case (MR_Integer) 4:
            Var_28 = (MR_String) "mostly_clobbered";
            break;
          case (MR_Integer) 2:
            Var_28 = (MR_String) "mostly_unique";
            break;
          case (MR_Integer) 0:
            Var_28 = (MR_String) "bound";
            break;
          case (MR_Integer) 1:
            Var_28 = (MR_String) "unique";
            break;
        }
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_28));
        }
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_27, ArgTerms_15, Context_6, InstTerm_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst_7, (MR_Integer) 1))));

            parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_5, Context_6, InstName_21, InstTerm_8);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_7, (MR_Integer) 1))));
            MR_Word SubInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_7, (MR_Integer) 2))));
            MR_Word SubInstTerm_20;
            MR_Word Var_34;
            MR_Box conv4_InstTerm_8;

            parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, SubInst_19, &SubInstTerm_20);
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[2]));
              MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_3));
              MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_34, 3) = ((MR_Box) (Context_6));
            }
            mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_34, Vars_18, ((MR_Box) (SubInstTerm_20)), &conv4_InstTerm_8);
            *InstTerm_8 = ((MR_Word) (conv4_InstTerm_8));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(3, Inst_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(3, Inst_7, (MR_Integer) 2))));

            if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_22 = ((&parse_tree__parse_tree_to_term_vector_common_7[0 + Uniq_9]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
              MR_Word Var_80;

              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *InstTerm_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
                MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, base, 2) = ((MR_Box) (Context_6));
              }
            }
            else
            {
              MR_Word PredInstInfo_11 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_10), (MR_Integer) 1));
              MR_Word PredOrFunc_49 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes_50 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 1))));
              MR_Word Det_52 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word ModesTerm_53;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;

              switch (PredOrFunc_49) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgModes_54;
                    MR_Word RetMode_55;
                    MR_Word ArgModesTerm_56;
                    MR_Word Var_61;
                    MR_Word Var_62;
                    MR_Word Var_64;
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Box conv0_RetMode_55;

                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_50, &ArgModes_54, &conv0_RetMode_55);
                    RetMode_55 = ((MR_Word) (conv0_RetMode_55));
                    {
                      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                      MR_hl_field(0, Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_1));
                      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_62, 3) = ((MR_Box) (Lang_5));
                      MR_hl_field(0, Var_62, 4) = ((MR_Box) (Context_6));
                    }
                    Var_61 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_62, ArgModes_54);
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[38]), Var_61, Context_6, &ArgModesTerm_56);
                    Var_66 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_5, Context_6, RetMode_55);
                    {
                      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
                      MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_64, 0) = ((MR_Box) (ArgModesTerm_56));
                      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[2]), Var_64, Context_6, &ModesTerm_53);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_58;
                    MR_Word Var_59;

                    {
                      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                      MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0_2));
                      MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_59, 3) = ((MR_Box) (Lang_5));
                      MR_hl_field(0, Var_59, 4) = ((MR_Box) (Context_6));
                    }
                    Var_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_59, Modes_50);
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[39]), Var_58, Context_6, &ModesTerm_53);
                  }
                  break;
              }
              Var_71 = parse_tree__parse_tree_to_term__det_to_term_2_f_0(Context_6, Det_52);
              {
                Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (ModesTerm_53));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
              }
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[13]), Var_69, Context_6, InstTerm_8);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_7, (MR_Integer) 1))));
            MR_Word Var_32;
            MR_Word Var_33;

            Var_33 = mercury__term_context__dummy_context_0_f_0();
            {
              Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_17));
              MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
            }
            *InstTerm_8 = mercury__term__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstTerm_8;

  parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstTerm_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_InstTerm_8));
}

static void MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word InstName_7,
  MR_Word * Term_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_9 = ((MR_Word) ((MR_hl_field(0, InstName_7, (MR_Integer) 0))));
          MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(0, InstName_7, (MR_Integer) 1))));
          MR_Word ArgInstTerms_11;
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[0]));
            MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0_1));
            MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_30, 3) = ((MR_Box) (Lang_5));
            MR_hl_field(0, Var_30, 4) = ((MR_Box) (Context_6));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_30, ArgInsts_10, &ArgInstTerms_11);
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_9, ArgInstTerms_11, Context_6, Term_8);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Liveness_12 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(1, InstName_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(1, InstName_7, (MR_Integer) 1))));
          MR_Word InstB_15 = ((MR_Word) ((MR_hl_field(1, InstName_7, (MR_Integer) 2))));

          switch (Lang_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word LiveTerm_16;
                MR_Word RealTerm_17;
                MR_Word InstTermA_18;
                MR_Word InstTermB_19;
                MR_String Var_33;
                MR_String Var_34;
                MR_Word Var_36;
                MR_Word Var_38;
                MR_Word Var_39;
                MR_Word Var_40;

                Var_33 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Liveness_12);
                LiveTerm_16 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_33);
                Var_34 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_13);
                RealTerm_17 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_34);
                parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstA_14, &InstTermA_18);
                parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstB_15, &InstTermB_19);
                {
                  Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_40, 0) = ((MR_Box) (InstTermB_19));
                  MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_39, 0) = ((MR_Box) (InstTermA_18));
                  MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
                }
                {
                  Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_38, 0) = ((MR_Box) (RealTerm_17));
                  MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
                }
                {
                  Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_36, 0) = ((MR_Box) (LiveTerm_16));
                  MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[22]), Var_36, Context_6, Term_8);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "unify_inst");
                return;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_105 = ((MR_Word) ((MR_hl_field(2, InstName_7, (MR_Integer) 0))));
          MR_Word InstB_106 = ((MR_Word) ((MR_hl_field(2, InstName_7, (MR_Integer) 1))));

          switch (Lang_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_45;
                MR_Word Var_47;
                MR_Word InstTermA_101;
                MR_Word InstTermB_102;

                parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstA_105, &InstTermA_101);
                parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(Lang_5, Context_6, InstB_106, &InstTermB_102);
                {
                  Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_47, 0) = ((MR_Box) (InstTermB_102));
                  MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (InstTermA_101));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[17]), Var_45, Context_6, Term_8);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "merge_inst");
                return;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 1))));
              MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_22 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_109 = ((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))) & (MR_Integer) 1);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word SubInstNameTerm_23;
                    MR_Word UniqTerm_24;
                    MR_Word IsLiveTerm_25;
                    MR_Word IsRealTerm_26;
                    MR_String Var_51;
                    MR_String Var_53;
                    MR_String Var_54;
                    MR_Word Var_56;
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;

                    parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_5, Context_6, SubInstName_20, &SubInstNameTerm_23);
                    Var_51 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_21, (MR_String) "shared");
                    UniqTerm_24 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_51);
                    Var_53 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_22);
                    IsLiveTerm_25 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_53);
                    Var_54 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_109);
                    IsRealTerm_26 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_54);
                    {
                      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_60, 0) = ((MR_Box) (IsRealTerm_26));
                      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_59, 0) = ((MR_Box) (IsLiveTerm_25));
                      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
                    }
                    {
                      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_58, 0) = ((MR_Box) (UniqTerm_24));
                      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_56, 0) = ((MR_Box) (SubInstNameTerm_23));
                      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[16]), Var_56, Context_6, Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "ground_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Real_118 = ((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubInstName_119 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 1))));
              MR_Word Uniq_120 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_121 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String Var_64;
                    MR_String Var_66;
                    MR_String Var_67;
                    MR_Word Var_69;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word SubInstNameTerm_110;
                    MR_Word UniqTerm_111;
                    MR_Word IsLiveTerm_112;
                    MR_Word IsRealTerm_113;

                    parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_5, Context_6, SubInstName_119, &SubInstNameTerm_110);
                    Var_64 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_120, (MR_String) "shared");
                    UniqTerm_111 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_64);
                    Var_66 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_121);
                    IsLiveTerm_112 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_66);
                    Var_67 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_118);
                    IsRealTerm_113 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_67);
                    {
                      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_73, 0) = ((MR_Box) (IsRealTerm_113));
                      MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_72, 0) = ((MR_Box) (IsLiveTerm_112));
                      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
                    }
                    {
                      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_71, 0) = ((MR_Box) (UniqTerm_111));
                      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
                    }
                    {
                      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_69, 0) = ((MR_Box) (SubInstNameTerm_110));
                      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[15]), Var_69, Context_6, Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "any_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_128 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 1))));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_78;
                    MR_Word SubInstNameTerm_126;

                    parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_5, Context_6, SubInstName_128, &SubInstNameTerm_126);
                    {
                      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_78, 0) = ((MR_Box) (SubInstNameTerm_126));
                      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[19]), Var_78, Context_6, Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "shared_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_132 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 1))));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_84;
                    MR_Word SubInstNameTerm_130;

                    parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_5, Context_6, SubInstName_132, &SubInstNameTerm_130);
                    {
                      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_84, 0) = ((MR_Box) (SubInstNameTerm_130));
                      MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[18]), Var_84, Context_6, Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "mostly_uniq_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_27 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))));
              MR_Word Uniq_136 = ((MR_Unsigned) ((MR_hl_field(3, InstName_7, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeTerm0_28;
                    MR_Word TypeTerm_29;
                    MR_String Var_89;
                    MR_Word Var_92;
                    MR_Word Var_94;
                    MR_Word UniqTerm_134;

                    Var_89 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_136, (MR_String) "shared");
                    UniqTerm_134 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_89);
                    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_27, &TypeTerm0_28);
                    TypeTerm_29 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeTerm0_28);
                    {
                      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_94, 0) = ((MR_Box) (TypeTerm_29));
                      MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_92, 0) = ((MR_Box) (UniqTerm_134));
                      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[20]), Var_92, Context_6, Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/4", (MR_String) "typed_ground");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_144 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 2))));
              MR_Word Type_146 = ((MR_Word) ((MR_hl_field(3, InstName_7, (MR_Integer) 1))));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_97;
                    MR_Word Var_99;
                    MR_Word SubInstNameTerm_138;
                    MR_Word TypeTerm0_139;
                    MR_Word TypeTerm_140;

                    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_146, &TypeTerm0_139);
                    TypeTerm_140 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeTerm0_139);
                    parse_tree__parse_tree_to_term__inst_name_to_term_with_context_4_p_0(Lang_5, Context_6, SubInstName_144, &SubInstNameTerm_138);
                    {
                      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_99, 0) = ((MR_Box) (SubInstNameTerm_138));
                      MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_97, 0) = ((MR_Box) (TypeTerm_140));
                      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[21]), Var_97, Context_6, Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_InstName_7 = SubInstName_144;

                    // direct tailcall eliminated
                    ;
                    InstName_7 = next_value_of_InstName_7;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_ModeTerm_8;

  conv2_ModeTerm_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_ModeTerm_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_ModeTerm_8;

  conv1_ModeTerm_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_ModeTerm_8));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9,
  MR_Word * Term_10)
{
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_9, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_12 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_9, (MR_Integer) 1))));
  MR_Word Det_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_9, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word ModesTerm_15;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_50;
  MR_Word Var_51;

  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_16;
        MR_Word RetMode_17;
        MR_Word ArgModesTerm_18;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Word Var_28;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Box conv0_RetMode_17;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_12, &ArgModes_16, &conv0_RetMode_17);
        RetMode_17 = ((MR_Word) (conv0_RetMode_17));
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Lang_6));
          MR_hl_field(0, Var_26, 4) = ((MR_Box) (Context_7));
        }
        Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_26, ArgModes_16);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[1]), Var_24, Context_7, &ArgModesTerm_18);
        Var_31 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_6, Context_7, RetMode_17);
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (ArgModesTerm_18));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
        }
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[2]), Var_28, Context_7, &ModesTerm_15);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_20;
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_5_p_0_2));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (Lang_6));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (Context_7));
        }
        Var_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_22, Modes_12);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[3]), Var_20, Context_7, &ModesTerm_15);
      }
      break;
  }
  Var_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Det_14);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (Var_50));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) (Context_7));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (ModesTerm_15));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[13]), Var_34, Context_7, Term_10);
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mode_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Modes_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Term_5;
    MR_Word Terms_6;
    MR_Word Term0_7;
    MR_Word Var_11;

    Var_11 = mercury__term_context__dummy_context_0_f_0();
    Term0_7 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0((MR_Integer) 0, Var_11, Mode_3);
    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term0_7, &Term_5);
    parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(Modes_4, &Terms_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (Terms_6));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Term_4;

  parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Term_4);
  *wrapper_arg_2 = ((MR_Box) (conv4_Term_4));
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Term_4;

  parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Term_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_Term_4));
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Term_4;

  parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Term_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Term_4));
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_4;

  parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Term_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
}

void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0(
  MR_Word Type_3,
  MR_Word * Term_4)
{
  MR_Word Context_5;

  Context_5 = mercury__term_context__dummy_context_0_f_0();
  switch (MR_tag((MR_Word) Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVar_6 = ((MR_Word) ((MR_hl_field(0, Type_3, (MR_Integer) 0))));
        MR_Word Var_8;

        Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVar_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(1, base, 1) = ((MR_Box) (Context_5));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 0))));
        MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 1))));
        MR_Word ArgTerms_12;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_6[1]), ArgTypes_10, &ArgTerms_12);
        parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(SymName_9, ArgTerms_12, Term_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_13 = ((MR_Word) ((MR_hl_field(2, Type_3, (MR_Integer) 0))));
        MR_String Name_14;
        MR_Word Var_35;

        parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_13, &Name_14);
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (Name_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (Context_5));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgTypes_59 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 1))));
            MR_Word ArgTerms_60;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_6[3]), ArgTypes_59, &ArgTerms_60);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[4]));
              MR_hl_field(0, base, 1) = ((MR_Box) (ArgTerms_60));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_5));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_15 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word PredArgTypes_16 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));
            MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 3))));
            MR_Word Purity_18 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word PredArgTypeTerms_19;
            MR_Word PredArgTerms_25;
            MR_Word Term2_27;
            MR_Word Term3_30;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_6[2]), PredArgTypes_16, &PredArgTypeTerms_19);
            if ((HOInstInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
              PredArgTerms_25 = PredArgTypeTerms_19;
            else
            {
              MR_Word PredArgModes_21;
              MR_Word PredArgModeTerms_24;
              MR_Word Var_37 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_17), (MR_Integer) 1));

              PredArgModes_21 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
              parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(PredArgModes_21, &PredArgModeTerms_24);
              parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(PredArgTypeTerms_19, PredArgModeTerms_24, &PredArgTerms_25);
            }
            switch (PorF_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word RetTerm_28;
                  MR_Word Term1_29;
                  MR_Word Var_44;
                  MR_Word Var_45;
                  MR_Word ArgTerms_55;
                  MR_Box conv3_RetTerm_28;

                  mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), PredArgTerms_25, &ArgTerms_55, &conv3_RetTerm_28);
                  RetTerm_28 = ((MR_Word) (conv3_RetTerm_28));
                  {
                    Term1_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Term1_29, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                    MR_hl_field(0, Term1_29, 1) = ((MR_Box) (ArgTerms_55));
                    MR_hl_field(0, Term1_29, 2) = ((MR_Box) (Context_5));
                  }
                  {
                    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_45, 0) = ((MR_Box) (RetTerm_28));
                    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Term1_29));
                    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
                  }
                  {
                    Term2_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Term2_27, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[2]));
                    MR_hl_field(0, Term2_27, 1) = ((MR_Box) (Var_44));
                    MR_hl_field(0, Term2_27, 2) = ((MR_Box) (Context_5));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  Term2_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Term2_27, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[3]));
                  MR_hl_field(0, Term2_27, 1) = ((MR_Box) (PredArgTerms_25));
                  MR_hl_field(0, Term2_27, 2) = ((MR_Box) (Context_5));
                }
                break;
            }
            switch (Purity_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word Var_91;
                  MR_Word Var_93;

                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Term2_27));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_93 = mercury__term_context__dummy_context_0_f_0();
                  {
                    Term3_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Term3_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[11]));
                    MR_hl_field(0, Term3_30, 1) = ((MR_Box) (Var_91));
                    MR_hl_field(0, Term3_30, 2) = ((MR_Box) (Var_93));
                  }
                }
                break;
              case (MR_Integer) 0:
                Term3_30 = Term2_27;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_84;
                  MR_Word Var_86;

                  {
                    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Term2_27));
                    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_86 = mercury__term_context__dummy_context_0_f_0();
                  {
                    Term3_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Term3_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[12]));
                    MR_hl_field(0, Term3_30, 1) = ((MR_Box) (Var_84));
                    MR_hl_field(0, Term3_30, 2) = ((MR_Box) (Var_86));
                  }
                }
                break;
            }
            parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(HOInstInfo_17, Term3_30, Term_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word TVar_61 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 1))));
            MR_Word Var_62;
            MR_Word ArgTypes_63 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));
            MR_Word ArgTerms_64;

            Var_62 = mercury__term__coerce_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVar_61);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_6[0]), ArgTypes_63, &ArgTerms_64);
            {
              Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_62));
              MR_hl_field(1, Var_52, 1) = ((MR_Box) (Context_5));
            }
            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) (ArgTerms_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0]));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_51));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_5));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.unparse_type\'/2", (MR_String) "kind annotation");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__det_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word Det_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;
  MR_Word Var_7;

  Var_6 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Det_5);
  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_6));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Context_4));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstTerm_8;

  parse_tree__parse_tree_to_term__inst_to_term_with_context_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstTerm_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_InstTerm_8));
}

static void MR_CALL 
parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word BoundFunctor_8,
  MR_Word BoundFunctors_9,
  MR_Word * Term_10)
{
  MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 0))));
  MR_Word ArgInsts_12 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 1))));
  MR_Word ArgInstTerms_13;
  MR_Word FirstTerm_14;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Lang_6));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Context_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_18, ArgInsts_12, &ArgInstTerms_13);
  parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(ConsId_11, ArgInstTerms_13, &FirstTerm_14);
  if ((BoundFunctors_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *Term_10 = FirstTerm_14;
  else
  {
    MR_Word HeadBoundFunctor_15 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_9, (MR_Integer) 0))));
    MR_Word TailBoundFunctors_16 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_9, (MR_Integer) 1))));
    MR_Word SecondTerm_17;
    MR_Word Var_20;
    MR_Word Var_22;

    parse_tree__parse_tree_to_term__bound_functors_to_term_lag_5_p_0(Lang_6, Context_7, HeadBoundFunctor_15, TailBoundFunctors_16, &SecondTerm_17);
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (SecondTerm_17));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (FirstTerm_14));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[41]), Var_20, Context_7, Term_10);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1039__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1033__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__1045__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(
  MR_Word ConsId_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;
  MR_Word Context_7;

  Context_7 = mercury__term_context__dummy_context_0_f_0();
  switch (MR_tag((MR_Word) ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[50])));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_8;
        MR_Word Var_35 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 1));

        SymName_8 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
        parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_8, ArgTerms_5, Term_6);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[44])));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtor_25 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
            MR_String Var_65;
            MR_Word Var_69;
            MR_String FunctorName_109;
            MR_Word TypeCtorName_110 = ((MR_Word) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 0))));
            MR_Integer Arity_111 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 1))));
            MR_String Var_131;
            MR_String Var_139;
            MR_String Var_140;

            Var_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorName_110);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[37]), Arity_111, &Var_131);
            Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_131);
            Var_140 = mercury__string__f_43_43_2_f_0(Var_65, Var_139);
            FunctorName_109 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", Var_140);
            {
              Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_69, 0) = ((MR_Box) (FunctorName_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[48])));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[47])));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[45])));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
          }
          break;
        case (MR_Integer) 4:
          parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[4]), ArgTerms_5, Term_6);
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_13 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));

            *Term_6 = parse_tree__parse_tree_to_term__int_const_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IntConst_13, Context_7);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_14 = MR_unbox_float((MR_hl_field(3, ConsId_4, (MR_Integer) 1)));
            MR_Word Var_39;

            {
              Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_39, 1) = MR_box_float(Float_14);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_16 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_4, (MR_Integer) 1)));
            MR_String Var_43;
            MR_Word SymName_105;

            Var_43 = mercury__string__from_char_1_f_0(Char_16);
            {
              SymName_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SymName_105, 0) = ((MR_Box) (Var_43));
            }
            parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_105, (MR_Word) ((MR_Unsigned) 0U), Term_6);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_15 = ((MR_String) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
            MR_Word Var_41;

            {
              Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_41, 0) = ((MR_Box) (String_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_17 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_46;
            MR_Word Var_47;
            MR_String FunctorName_106;

            Var_46 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_17);
            FunctorName_106 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", Var_46);
            {
              Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_47, 0) = ((MR_Box) (FunctorName_106));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
            MR_String TypeCtorName_19 = ((MR_String) ((MR_hl_field(3, ConsId_4, (MR_Integer) 2))));
            MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 3))));
            MR_String Var_52;
            MR_Word Var_58;
            MR_String FunctorName_107;
            MR_String Var_142;
            MR_String Var_150;
            MR_String Var_151;
            MR_String Var_153;
            MR_String Var_154;

            Var_52 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_18);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[37]), Arity_20, &Var_142);
            Var_150 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_142);
            Var_151 = mercury__string__f_43_43_2_f_0(TypeCtorName_19, Var_150);
            Var_153 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_151);
            Var_154 = mercury__string__f_43_43_2_f_0(Var_52, Var_153);
            FunctorName_107 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", Var_154);
            {
              Var_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_58, 0) = ((MR_Box) (FunctorName_107));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[43])));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer TIConstNum_26 = ((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
            MR_Word Arg_27;
            MR_Word Var_73;
            MR_Word Var_78;

            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[0]));
              MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2));
              MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_73, 3) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
            Arg_27 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TIConstNum_26, Context_7);
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Arg_27));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[49])));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_78));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer TCIConstNum_28 = ((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
            MR_Word Var_80;
            MR_Word Var_85;
            MR_Word Arg_115;

            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[0]));
              MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3));
              MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_80, 3) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_80, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
            Arg_115 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TCIConstNum_28, Context_7);
            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (Arg_115));
              MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[51])));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_85));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word SubConsId_29 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 2))));
            MR_Word SubArg_30;
            MR_Word NumArg_31;
            MR_Word Var_87;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Integer TCIConstNum_117 = ((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));

            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_87, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[0]));
              MR_hl_field(0, Var_87, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1));
              MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_87, 3) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_87, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
            parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(SubConsId_29, (MR_Word) ((MR_Unsigned) 0U), &SubArg_30);
            NumArg_31 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TCIConstNum_117, Context_7);
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) (SubArg_30));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (NumArg_31));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__parse_tree_to_term_scalar_common_2[46])));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_93));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
            }
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__int_const_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word IntConst_4,
  MR_Word Context_5)
{
  MR_Word Term_6;

  switch (MR_tag((MR_Word) IntConst_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(0, IntConst_4, (MR_Integer) 0))));

        Term_6 = mercury__term_int__int_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int_7, Context_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_12 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_4, (MR_Integer) 0))));

        Term_6 = mercury__term_int__uint_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt_12, Context_5);
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_8 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_4, (MR_Integer) 0)));

        Term_6 = mercury__term_int__int8_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int8_8, Context_5);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IntConst_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_13 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__uint8_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt8_13, Context_5);
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_9 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__int16_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int16_9, Context_5);
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__uint16_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt16_14, Context_5);
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_10 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__int32_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int32_10, Context_5);
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_15 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__uint32_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt32_15, Context_5);
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_11 = MR_unbox_int64((MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__int64_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int64_11, Context_5);
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(3, IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term_int__uint64_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt64_16, Context_5);
          }
          break;
      }
      break;
  }
  return Term_6;
}

MR_String MR_CALL 
parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(
  MR_Word HeadVar__1_1,
  MR_String SharedName_2)
{
  MR_String HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      HeadVar__3_3 = (MR_String) "clobbered";
      break;
    case (MR_Integer) 4:
      HeadVar__3_3 = (MR_String) "mostly_clobbered";
      break;
    case (MR_Integer) 2:
      HeadVar__3_3 = (MR_String) "mostly_unique";
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = SharedName_2;
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = (MR_String) "unique";
      break;
  }
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "fake";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "real";
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "dead";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "live";
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word Context_4,
  MR_String Name_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Name_5));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Context_4));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Term_6;

  conv1_Term_6 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Term_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_6;

  conv0_Term_6 = parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_6));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word InstResults_5)
{
  MR_Word Term_6;

  switch (MR_tag((MR_Word) InstResults_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstResults_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[6]));
            MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_4));
          }
          break;
        case (MR_Integer) 1:
          {
            Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[8]));
            MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_4));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GroundnessResult_7 = ((((MR_Unsigned) ((MR_hl_field(1, InstResults_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word AnyResult_8 = ((MR_Unsigned) ((MR_hl_field(1, InstResults_5, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word InstNamesResult_9 = ((MR_Word) ((MR_hl_field(1, InstResults_5, (MR_Integer) 1))));
        MR_Word InstVarsResult_10 = ((MR_Word) ((MR_hl_field(1, InstResults_5, (MR_Integer) 2))));
        MR_Word TypeResult_11 = ((MR_Word) ((MR_hl_field(1, InstResults_5, (MR_Integer) 3))));
        MR_Word PropagatedResult_12 = ((MR_Word) ((MR_hl_field(1, InstResults_5, (MR_Integer) 4))));
        MR_Word SubTerm1_13;
        MR_Word SubTerm2_14;
        MR_Word SubTerm3_15;
        MR_Word SubTerm4_16;
        MR_Word SubTerm5_17;
        MR_Word SubTerm6_18;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        switch (GroundnessResult_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[23]));
              MR_hl_field(0, SubTerm1_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SubTerm1_13, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 1:
            {
              SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[24]));
              MR_hl_field(0, SubTerm1_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SubTerm1_13, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 0:
            {
              SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[25]));
              MR_hl_field(0, SubTerm1_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SubTerm1_13, 2) = ((MR_Box) (Context_4));
            }
            break;
        }
        switch (AnyResult_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[26]));
              MR_hl_field(0, SubTerm2_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SubTerm2_14, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 1:
            {
              SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[27]));
              MR_hl_field(0, SubTerm2_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SubTerm2_14, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 0:
            {
              SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[28]));
              MR_hl_field(0, SubTerm2_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SubTerm2_14, 2) = ((MR_Box) (Context_4));
            }
            break;
        }
        if ((InstNamesResult_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[30]));
            MR_hl_field(0, SubTerm3_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, SubTerm3_15, 2) = ((MR_Box) (Context_4));
          }
        else
        {
          MR_Word InstNameSet_52 = ((MR_Word) ((MR_hl_field(1, InstNamesResult_9, (MR_Integer) 0))));
          MR_Integer NumInstNames_53;
          MR_Word CountTerm_54;
          MR_Word Var_60;

          mercury__set__count_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), InstNameSet_52, &NumInstNames_53);
          CountTerm_54 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NumInstNames_53, Context_4);
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (CountTerm_54));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[29]));
            MR_hl_field(0, SubTerm3_15, 1) = ((MR_Box) (Var_60));
            MR_hl_field(0, SubTerm3_15, 2) = ((MR_Box) (Context_4));
          }
        }
        if ((InstVarsResult_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[32]));
            MR_hl_field(0, SubTerm4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, SubTerm4_16, 2) = ((MR_Box) (Context_4));
          }
        else
        {
          MR_Word InstVarSet_64 = ((MR_Word) ((MR_hl_field(1, InstVarsResult_10, (MR_Integer) 0))));
          MR_Word InstVars_65;
          MR_Word InstVarTerms_66;
          MR_Word Var_69;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), InstVarSet_64, &InstVars_65);
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0]));
            MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1));
            MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_69, 3) = ((MR_Box) (Context_4));
          }
          InstVarTerms_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_69, InstVars_65);
          {
            SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[31]));
            MR_hl_field(0, SubTerm4_16, 1) = ((MR_Box) (InstVarTerms_66));
            MR_hl_field(0, SubTerm4_16, 2) = ((MR_Box) (Context_4));
          }
        }
        if ((TypeResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubTerm5_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm5_17, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[34]));
            MR_hl_field(0, SubTerm5_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, SubTerm5_17, 2) = ((MR_Box) (Context_4));
          }
        else
        {
          MR_Word TypeCtorSet_73 = ((MR_Word) ((MR_hl_field(1, TypeResult_11, (MR_Integer) 0))));
          MR_Word TypeCtors_74;
          MR_Word TypeCtorTerms_75;
          MR_Word Var_78;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtorSet_73, &TypeCtors_74);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[1]));
            MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_2));
            MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_78, 3) = ((MR_Box) (Context_4));
          }
          TypeCtorTerms_75 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_78, TypeCtors_74);
          {
            SubTerm5_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm5_17, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[33]));
            MR_hl_field(0, SubTerm5_17, 1) = ((MR_Box) (TypeCtorTerms_75));
            MR_hl_field(0, SubTerm5_17, 2) = ((MR_Box) (Context_4));
          }
        }
        if ((PropagatedResult_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubTerm6_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm6_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[35]));
            MR_hl_field(0, SubTerm6_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, SubTerm6_18, 2) = ((MR_Box) (Context_4));
          }
        else
        {
          MR_Word TypeCtor_82 = (MR_Word) (MR_body((MR_Word) (PropagatedResult_12), (MR_Integer) 1));
          MR_Word Var_88;
          MR_Word Var_89;

          Var_89 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(Context_4, TypeCtor_82);
          {
            Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
            MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SubTerm6_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubTerm6_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[36]));
            MR_hl_field(0, SubTerm6_18, 1) = ((MR_Box) (Var_88));
            MR_hl_field(0, SubTerm6_18, 2) = ((MR_Box) (Context_4));
          }
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (SubTerm6_18));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (SubTerm5_17));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (SubTerm4_16));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (SubTerm3_15));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (SubTerm2_14));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (SubTerm1_13));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
        }
        {
          Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[7]));
          MR_hl_field(0, Term_6, 1) = ((MR_Box) (Var_21));
          MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_4));
        }
      }
      break;
  }
  return Term_6;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word TypeCtor_5)
{
  MR_Word Term_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, TypeCtor_5, (MR_Integer) 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_5, (MR_Integer) 1))));
  MR_String ConsName_9;
  MR_String Var_13;
  MR_Word Var_17;
  MR_String Var_19;
  MR_String Var_27;

  Var_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[37]), Arity_8, &Var_19);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_19);
  ConsName_9 = mercury__string__f_43_43_2_f_0(Var_13, Var_27);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (ConsName_9));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_4));
  }
  return Term_6;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *Term_3 = HeadVar__2_2;
  else
  {
    MR_Word Detism_8;
    MR_Word Context_11;
    MR_Word DetismTerm0_12;
    MR_Word DetismTerm_13;
    MR_Word Var_14 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_22;
    MR_Word Var_23;

    Detism_8 = ((MR_Unsigned) ((MR_hl_field(0, Var_14, (MR_Integer) 3))) & (MR_Integer) 7);
    Context_11 = mercury__term_context__dummy_context_0_f_0();
    Var_22 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_8);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_22));
    }
    {
      DetismTerm0_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DetismTerm0_12, 0) = ((MR_Box) (Var_23));
      MR_hl_field(0, DetismTerm0_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, DetismTerm0_12, 2) = ((MR_Box) (Context_11));
    }
    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm0_12, &DetismTerm_13);
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (DetismTerm_13));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[13]));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
        return;
      }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Term_18;
      MR_Word Terms_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Mode_16));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_27));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
      }
      Var_25 = mercury__term_context__dummy_context_0_f_0();
      {
        Term_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Term_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[10]));
        MR_hl_field(0, Term_18, 1) = ((MR_Box) (Var_22));
        MR_hl_field(0, Term_18, 2) = ((MR_Box) (Var_25));
      }
      parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(Var_26, Modes_17, &Terms_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Term_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Terms_19));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Args_2,
  MR_Word * Term_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Qualifier_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_10 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word QualTerm_13;
    MR_Word Context_14;
    MR_Word Term0_15;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;

    parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(Qualifier_9, (MR_Word) ((MR_Unsigned) 0U), &QualTerm_13);
    Context_14 = mercury__term_context__dummy_context_0_f_0();
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Name_10));
    }
    {
      Term0_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Term0_15, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, Term0_15, 1) = ((MR_Box) (Args_2));
      MR_hl_field(0, Term0_15, 2) = ((MR_Box) (Context_14));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Term0_15));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (QualTerm_13));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[9]));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_14));
    }
  }
  else
  {
    MR_String Name_4 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_7, 0) = ((MR_Box) (Name_4));
    }
    Var_8 = mercury__term_context__dummy_context_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (Args_2));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_8));
    }
  }
}

void mercury__parse_tree__parse_tree_to_term__init(void)
{
}

void mercury__parse_tree__parse_tree_to_term__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_to_term__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_to_term__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_to_term.
