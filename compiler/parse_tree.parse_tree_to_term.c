/*
** Automatically generated from `parse_tree_to_term.m'
** by the Mercury compiler,
** version rotd-2022-05-30
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__710__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__703__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__717__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_90);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__262__1_3_f_0(
  MR_Word Context_6,
  MR_Word LambdaHeadVar__1_45,
  MR_Word LambdaHeadVar__2_46);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word InstVar_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Inst_7);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word InstName_7);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word BoundInst_8,
  MR_Word BoundInsts_9);

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

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(
  MR_Word HeadVar__1_1,
  MR_String SharedName_2);

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word Context_4,
  MR_String Name_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word PropagatedResult_5);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word TypeCtor_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word ContainsTypes_5);

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(
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

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(
  MR_Word Types_3,
  MR_Word * Terms_4);


static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[52][1];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[4][3];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[3][7];


struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s parse_tree__parse_tree_to_term_vector_common_7[5];



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

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[52][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "no_results"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "results"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "fgtc"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\044any"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "\044ground"))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "\044typed_ground"))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\044typed_inst"))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\044unify"))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "groundness_unknown"))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "is_ground"))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "is_not_ground"))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "contains_any_unknown"))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "does_contain_any"))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "does_not_contain_any"))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_known"))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_unknown"))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_known"))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_unknown"))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "contains_types_known"))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "contains_types_unknown"))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "no_type_ctor_propagated"))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "type_ctor_propagated"))
  },
  /* row  38 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "any_func"))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "any_pred"))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "EMPTY_BOUND_INSTS"))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "type_info_const"))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_const"))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s parse_tree__parse_tree_to_term_vector_common_7[5] = {
  /* row   0 */   { (MR_String) "any" },
  /* row   1 */   { (MR_String) "unique_any" },
  /* row   2 */   { (MR_String) "mostly_unique_any" },
  /* row   3 */   { (MR_String) "clobbered_any" },
  /* row   4 */   { (MR_String) "mostly_clobbered_any" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__710__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_83)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[3]), ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_83)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__703__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_76)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[3]), ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_76)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__717__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_90)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[3]), ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_90)));
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__262__1_3_f_0(
  MR_Word Context_6,
  MR_Word LambdaHeadVar__1_45,
  MR_Word LambdaHeadVar__2_46)
{
  MR_Word LambdaHeadVar__3_47;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;

  Var_53 = mercury__term__context_init_0_f_0();
  {
    Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (LambdaHeadVar__1_45));
    MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
  }
  Var_51 = mercury__term__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52);
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LambdaHeadVar__2_46));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_54));
  }
  {
    LambdaHeadVar__3_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__3_47, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[14]));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__3_47, 1) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__3_47, 2) = ((MR_Box) (Context_6));
  }
  return LambdaHeadVar__3_47;
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
    Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Var_10));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
  }
  return Term_6;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word InstName_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__term__context_init_0_f_0();
  HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_4, Var_6, InstName_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word Inst_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__term__context_init_0_f_0();
  HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_4, Var_6, Inst_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word Mode_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__term__context_init_0_f_0();
  HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_4, Var_6, Mode_5);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_8;

  conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_8));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Mode_7)
{
  MR_bool succeeded;
  MR_Word Term_8;

  if (((MR_tag((MR_Word) Mode_7)) == (MR_Integer) 0))
  {
    MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_7, (MR_Integer) 0))));
    MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_7, (MR_Integer) 1))));
    MR_Word Var_15;

    succeeded = ((((MR_tag((MR_Word) InstA_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_9, (MR_Integer) 2))));
      succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstB_10, InstA_9);
    }
    if (succeeded)
      Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstA_9);
    else
    {
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;

      Var_19 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstA_9);
      Var_21 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstB_10);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[5]), Var_17, Context_6, &Term_8);
    }
  }
  else
  {
    MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_7, (MR_Integer) 0))));
    MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_7, (MR_Integer) 1))));
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Lang_5));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Context_6));
    }
    Var_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_24, Args_14);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_13, Var_23, Context_6, &Term_8);
  }
  return Term_8;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_47;

  conv0_LambdaHeadVar__3_47 = parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__262__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_47));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Inst_7)
{
  MR_Word Term_8;

  switch (MR_tag((MR_Word) Inst_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, (MR_String) "free");
          break;
        case (MR_Integer) 1:
          Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, (MR_String) "not_reached");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst_7, (MR_Integer) 0))));
        MR_Word Term0_13;
        MR_Word Term1_14;
        MR_Word Var_29;

        parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_12, &Term0_13);
        Term1_14 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term0_13);
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Term1_14));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Term_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[15]));
          MR_hl_field(MR_mktag(0), Term_8, 1) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), Term_8, 2) = ((MR_Box) (Context_6));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_7, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_7, (MR_Integer) 1))));

        if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_25 = ((&parse_tree__parse_tree_to_term_vector_common_7[0 + Uniq_9]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
          MR_Word Var_76;

          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_25));
          }
          {
            Term_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_8, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(0), Term_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Term_8, 2) = ((MR_Box) (Context_6));
          }
        }
        else
        {
          MR_Word PredInstInfo_11 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_10), (MR_Integer) 1));

          Term_8 = parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(Lang_5, Context_6, PredInstInfo_11);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
            MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 3))));
            MR_Word ArgTerms_17;
            MR_Word Var_37;
            MR_String Var_38;
            MR_Word Uniq_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (Lang_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_33;
                  MR_Word Var_34;
                  MR_Word Var_35;

                  Var_33 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Context_6, InstResults_15);
                  if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      Var_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[41]));
                      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (Context_6));
                    }
                  else
                  {
                    MR_Word BoundInst_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_16, (MR_Integer) 0))));
                    MR_Word BoundInsts_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_16, (MR_Integer) 1))));

                    Var_35 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(Lang_5, Context_6, BoundInst_85, BoundInsts_86);
                  }
                  {
                    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
                    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ArgTerms_17, 0) = ((MR_Box) (Var_33));
                    MR_hl_field(MR_mktag(1), ArgTerms_17, 1) = ((MR_Box) (Var_34));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_31;

                  if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      Var_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[41]));
                      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (Context_6));
                    }
                  else
                  {
                    MR_Word BoundInst_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_16, (MR_Integer) 0))));
                    MR_Word BoundInsts_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_16, (MR_Integer) 1))));

                    Var_31 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(Lang_5, Context_6, BoundInst_94, BoundInsts_95);
                  }
                  {
                    ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ArgTerms_17, 0) = ((MR_Box) (Var_31));
                    MR_hl_field(MR_mktag(1), ArgTerms_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
            Var_38 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_59, (MR_String) "bound");
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_38));
            }
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_37, ArgTerms_17, Context_6, &Term_8);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));

            if ((HOInstInfo_63 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_40;

              Var_40 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_62, (MR_String) "ground");
              Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_40);
            }
            else
            {
              MR_Word PredInstInfo_60 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_63), (MR_Integer) 1));

              Term_8 = parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(Lang_5, Context_6, PredInstInfo_60);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));
            MR_Word Var_42;
            MR_Word Var_43;

            Var_43 = mercury__term__context_init_0_f_0();
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_18));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
            }
            Term_8 = mercury__term__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_42);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Vars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));
            MR_Word SubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
            MR_Word Var_44;
            MR_Word Var_56;
            MR_Box conv1_Term_8;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[2]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Context_6));
            }
            Var_56 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, SubInst_20);
            conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_44, Vars_19, ((MR_Box) (Var_56)));
            Term_8 = ((MR_Word) (conv1_Term_8));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));

            Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, InstName_24);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));
            MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
            MR_Word Var_57;

            {
              Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Name_22));
              MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Args_23));
            }
            Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, Var_57);
          }
          break;
      }
      break;
  }
  return Term_8;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Term_8;

  conv1_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Term_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_8;

  conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word InstName_7)
{
  while (MR_TRUE)
  {
    MR_Word Term_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_7, (MR_Integer) 0))));
          MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_7, (MR_Integer) 1))));
          MR_Word Var_20;
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Lang_5));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Context_6));
          }
          Var_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_21, Args_10);
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_9, Var_20, Context_6, &Term_8);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Liveness_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word InstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 1))));
          MR_Word InstB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 2))));

          switch (Lang_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word Var_27;
                MR_String Var_28;
                MR_Word Var_29;
                MR_Word Var_30;
                MR_String Var_31;
                MR_Word Var_32;
                MR_Word Var_33;
                MR_Word Var_34;
                MR_Word Var_35;

                Var_28 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Liveness_11);
                Var_27 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_28);
                Var_31 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_12);
                Var_30 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_31);
                Var_33 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstA_13);
                Var_35 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstB_14);
                {
                  Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
                  MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
                  MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
                }
                {
                  Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
                  MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
                }
                {
                  Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_27));
                  MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_29));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[23]), Var_25, Context_6, &Term_8);
              }
              break;
            case (MR_Integer) 0:
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "unify_inst");
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_7, (MR_Integer) 0))));
          MR_Word InstB_113 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_7, (MR_Integer) 1))));

          switch (Lang_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_40;
                MR_Word Var_42;
                MR_Word Var_43;
                MR_Word Var_44;

                {
                  Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1));
                  MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Lang_5));
                  MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Context_6));
                }
                {
                  Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (InstB_113));
                  MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (InstA_112));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
                }
                Var_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_42, Var_43);
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[18]), Var_40, Context_6, &Term_8);
              }
              break;
            case (MR_Integer) 0:
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "merge_inst");
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1))));
              MR_Word Uniq_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))) & (MR_Integer) 1);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_49;
                    MR_Word Var_51;
                    MR_Word Var_52;
                    MR_Word Var_53;
                    MR_String Var_54;
                    MR_Word Var_56;
                    MR_Word Var_57;
                    MR_String Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_String Var_61;

                    Var_51 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_15);
                    Var_54 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_16, (MR_String) "shared");
                    Var_53 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_54);
                    Var_58 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_17);
                    Var_57 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_58);
                    Var_61 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_114);
                    Var_60 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_61);
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
                    }
                    {
                      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_51));
                      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[17]), Var_49, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "ground_inst");
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Real_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubInstName_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1))));
              MR_Word Uniq_117 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_66;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_String Var_71;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_String Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_String Var_78;

                    Var_68 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_116);
                    Var_71 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_117, (MR_String) "shared");
                    Var_70 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_71);
                    Var_75 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_118);
                    Var_74 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_75);
                    Var_78 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_115);
                    Var_77 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_78);
                    {
                      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
                      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
                      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
                    }
                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_73));
                    }
                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_68));
                      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[16]), Var_66, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "any_inst");
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1))));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_83;
                    MR_Word Var_85;

                    Var_85 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_119);
                    {
                      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[20]), Var_83, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "shared_inst");
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1))));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_90;
                    MR_Word Var_92;

                    Var_92 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_120);
                    {
                      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_92));
                      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[19]), Var_90, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "mostly_uniq_inst");
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))));
              MR_Word Uniq_121 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Term0_19;
                    MR_Word Var_97;
                    MR_Word Var_99;
                    MR_String Var_100;
                    MR_Word Var_102;
                    MR_Word Var_103;

                    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_18, &Term0_19);
                    Var_100 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_121, (MR_String) "shared");
                    Var_99 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_100);
                    Var_103 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term0_19);
                    {
                      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
                      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_99));
                      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_102));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[21]), Var_97, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "typed_ground");
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2))));
              MR_Word Type_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1))));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_106;
                    MR_Word Var_108;
                    MR_Word Var_109;
                    MR_Word Var_110;
                    MR_Word Term0_122;

                    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_125, &Term0_122);
                    Var_108 = mercury__term__coerce_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term0_122);
                    Var_110 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_124);
                    {
                      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_108));
                      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[22]), Var_106, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_InstName_7 = SubInstName_124;

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
    return Term_8;
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Term_8;

  conv2_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Term_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Term_8;

  conv1_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Term_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9)
{
  MR_Word Term_10;
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 1))));
  MR_Word Det_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word ModesTerm_15;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_52;
  MR_Word Var_55;

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
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Lang_6));
          MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Context_7));
        }
        Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_26, ArgModes_16);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[39]), Var_24, Context_7, &ArgModesTerm_18);
        Var_31 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_6, Context_7, RetMode_17);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ArgModesTerm_18));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
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
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Lang_6));
          MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Context_7));
        }
        Var_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_22, Modes_12);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[40]), Var_20, Context_7, &ModesTerm_15);
      }
      break;
  }
  Var_52 = parse_tree__prog_out__determinism_to_string_1_f_0(Det_14);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_52));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (Context_7));
  }
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ModesTerm_15));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[13]), Var_34, Context_7, &Term_10);
  return Term_10;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Term_8;

  conv2_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Term_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Term_8;

  conv1_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Term_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9)
{
  MR_Word Term_10;
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 1))));
  MR_Word Det_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word ModesTerm_15;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_52;
  MR_Word Var_55;

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
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Lang_6));
          MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Context_7));
        }
        Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_26, ArgModes_16);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[1]), Var_24, Context_7, &ArgModesTerm_18);
        Var_31 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_6, Context_7, RetMode_17);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ArgModesTerm_18));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
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
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Lang_6));
          MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Context_7));
        }
        Var_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_22, Modes_12);
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[3]), Var_20, Context_7, &ModesTerm_15);
      }
      break;
  }
  Var_52 = parse_tree__prog_out__determinism_to_string_1_f_0(Det_14);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_52));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (Context_7));
  }
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ModesTerm_15));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[13]), Var_34, Context_7, &Term_10);
  return Term_10;
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
    MR_Word Mode_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Modes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Term_5;
    MR_Word Terms_6;
    MR_Word Term0_7;
    MR_Word Var_13;

    Var_13 = mercury__term__context_init_0_f_0();
    Term0_7 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0((MR_Integer) 0, Var_13, Mode_3);
    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term0_7, &Term_5);
    parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(Modes_4, &Terms_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_6));
    }
  }
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

  Context_5 = mercury__term__context_init_0_f_0();
  switch (MR_tag((MR_Word) Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 0))));
        MR_Word Var_8;

        Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVar_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_5));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_3, (MR_Integer) 0))));
        MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_3, (MR_Integer) 1))));
        MR_Word ArgTerms_12;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_4[2]), ArgTypes_10, &ArgTerms_12);
        parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(SymName_9, ArgTerms_12, Term_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_3, (MR_Integer) 0))));
        MR_String Name_14;
        MR_Word Var_36;

        parse_tree__prog_data__builtin_type_to_string_2_p_0(BuiltinType_13, &Name_14);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgTypes_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
            MR_Word ArgTerms_61;

            parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(ArgTypes_60, &ArgTerms_61);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[4]));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_61));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word PredArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));
            MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3))));
            MR_Word Purity_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word PredArgTypeTerms_20;
            MR_Word PredArgTerms_26;
            MR_Word Term2_28;
            MR_Word Term3_31;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_4[3]), PredArgTypes_16, &PredArgTypeTerms_20);
            if ((HOInstInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
              PredArgTerms_26 = PredArgTypeTerms_20;
            else
            {
              MR_Word PredArgModes_22;
              MR_Word PredArgModeTerms_25;
              MR_Word Var_38 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_17), (MR_Integer) 1));

              PredArgModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
              parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(PredArgModes_22, &PredArgModeTerms_25);
              parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(PredArgTypeTerms_20, PredArgModeTerms_25, &PredArgTerms_26);
            }
            switch (PorF_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word RetTerm_29;
                  MR_Word Term1_30;
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_Word ArgTerms_56;
                  MR_Box conv3_RetTerm_29;

                  mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), PredArgTerms_26, &ArgTerms_56, &conv3_RetTerm_29);
                  RetTerm_29 = ((MR_Word) (conv3_RetTerm_29));
                  {
                    Term1_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Term1_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                    MR_hl_field(MR_mktag(0), Term1_30, 1) = ((MR_Box) (ArgTerms_56));
                    MR_hl_field(MR_mktag(0), Term1_30, 2) = ((MR_Box) (Context_5));
                  }
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (RetTerm_29));
                    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Term1_30));
                    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
                  }
                  {
                    Term2_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[2]));
                    MR_hl_field(MR_mktag(0), Term2_28, 1) = ((MR_Box) (Var_45));
                    MR_hl_field(MR_mktag(0), Term2_28, 2) = ((MR_Box) (Context_5));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  Term2_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[3]));
                  MR_hl_field(MR_mktag(0), Term2_28, 1) = ((MR_Box) (PredArgTerms_26));
                  MR_hl_field(MR_mktag(0), Term2_28, 2) = ((MR_Box) (Context_5));
                }
                break;
            }
            parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(Purity_18, Term2_28, &Term3_31);
            parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(HOInstInfo_17, Term3_31, Term_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word TVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
            MR_Word Var_63;
            MR_Word ArgTypes_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));
            MR_Word ArgTerms_65;

            Var_63 = mercury__term__coerce_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVar_62);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_4[1]), ArgTypes_64, &ArgTerms_65);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Context_5));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (ArgTerms_65));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
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

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_8;

  conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word BoundInst_8,
  MR_Word BoundInsts_9)
{
  MR_Word Term_10;
  MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 0))));
  MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1))));
  MR_Word ArgTerms_13;
  MR_Word FirstTerm_14;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Lang_6));
    MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Context_7));
  }
  ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_18, Args_12);
  parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(ConsId_11, ArgTerms_13, &FirstTerm_14);
  if ((BoundInsts_9 == (MR_Word) ((MR_Unsigned) 0U)))
    Term_10 = FirstTerm_14;
  else
  {
    MR_Word HeadBoundInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_9, (MR_Integer) 0))));
    MR_Word TailBoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_9, (MR_Integer) 1))));
    MR_Word SecondTerm_17;
    MR_Word Var_20;
    MR_Word Var_22;

    SecondTerm_17 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(Lang_6, Context_7, HeadBoundInst_15, TailBoundInsts_16);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (SecondTerm_17));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (FirstTerm_14));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[42]), Var_20, Context_7, &Term_10);
  }
  return Term_10;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__710__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__703__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__717__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(
  MR_Word ConsId_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_119;

        mercury__term__context_init_1_p_0(&Context_119);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[50])));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_119));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtor_26 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 1));
        MR_String Var_65;
        MR_Word Var_69;
        MR_Word Context_115;
        MR_String FunctorName_116;
        MR_Word TypeCtorName_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_26, (MR_Integer) 0))));
        MR_Integer Arity_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_26, (MR_Integer) 1))));
        MR_String Var_145;
        MR_String Var_153;
        MR_String Var_154;

        mercury__term__context_init_1_p_0(&Context_115);
        Var_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorName_117);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[38]), Arity_118, &Var_145);
        Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_145);
        Var_154 = mercury__string__f_43_43_2_f_0(Var_65, Var_153);
        FunctorName_116 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", Var_154);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (FunctorName_116));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_115));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_129;

        mercury__term__context_init_1_p_0(&Context_129);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[48])));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_129));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_131;

            mercury__term__context_init_1_p_0(&Context_131);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[47])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_131));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_133;

            mercury__term__context_init_1_p_0(&Context_133);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[45])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_133));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));

            parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_7, ArgTerms_5, Term_6);
          }
          break;
        case (MR_Integer) 3:
          parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[4]), ArgTerms_5, Term_6);
          break;
        case (MR_Integer) 4:
          {
            MR_Word Context_12;

            mercury__term__context_init_1_p_0(&Context_12);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[44])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            MR_Word Context_105;

            mercury__term__context_init_1_p_0(&Context_105);
            *Term_6 = parse_tree__parse_tree_to_term__int_const_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IntConst_14, Context_105);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            MR_Word Var_39;
            MR_Word Context_106;

            mercury__term__context_init_1_p_0(&Context_106);
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_39, 1) = MR_box_float(Float_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_106));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            MR_String Var_43;
            MR_Word SymName_108;

            Var_43 = mercury__string__from_char_1_f_0(Char_17);
            {
              SymName_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SymName_108, 0) = ((MR_Box) (Var_43));
            }
            parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_108, (MR_Word) ((MR_Unsigned) 0U), Term_6);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            MR_Word Var_41;
            MR_Word Context_107;

            mercury__term__context_init_1_p_0(&Context_107);
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (String_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_107));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_46;
            MR_Word Var_47;
            MR_Word Context_109;
            MR_String FunctorName_110;

            mercury__term__context_init_1_p_0(&Context_109);
            Var_46 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_18);
            FunctorName_110 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", Var_46);
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (FunctorName_110));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_109));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            MR_String TypeCtorName_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 2))));
            MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 3))));
            MR_String Var_52;
            MR_Word Var_58;
            MR_Word Context_111;
            MR_String FunctorName_112;
            MR_String Var_156;
            MR_String Var_164;
            MR_String Var_165;
            MR_String Var_167;
            MR_String Var_168;

            mercury__term__context_init_1_p_0(&Context_111);
            Var_52 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_19);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[38]), Arity_21, &Var_156);
            Var_164 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_156);
            Var_165 = mercury__string__f_43_43_2_f_0(TypeCtorName_20, Var_164);
            Var_167 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_165);
            Var_168 = mercury__string__f_43_43_2_f_0(Var_52, Var_167);
            FunctorName_112 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", Var_168);
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (FunctorName_112));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_111));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Context_113;

            mercury__term__context_init_1_p_0(&Context_113);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[43])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_113));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer TIConstNum_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            MR_Word Arg_28;
            MR_Word Var_73;
            MR_Word Var_78;
            MR_Word Context_121;

            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2));
              MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
            mercury__term__context_init_1_p_0(&Context_121);
            Arg_28 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TIConstNum_27, Context_121);
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Arg_28));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[49])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_121));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer TCIConstNum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            MR_Word Var_80;
            MR_Word Var_85;
            MR_Word Context_123;
            MR_Word Arg_125;

            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3));
              MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
            mercury__term__context_init_1_p_0(&Context_123);
            Arg_125 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TCIConstNum_29, Context_123);
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Arg_125));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[51])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_123));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word SubConsId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 2))));
            MR_Word SubArg_31;
            MR_Word NumArg_32;
            MR_Word Var_87;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Context_126;
            MR_Integer TCIConstNum_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));

            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1));
              MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
            parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(SubConsId_30, (MR_Word) ((MR_Unsigned) 0U), &SubArg_31);
            mercury__term__context_init_1_p_0(&Context_126);
            NumArg_32 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TCIConstNum_128, Context_126);
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (SubArg_31));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (NumArg_32));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_2[46])));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_126));
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
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntConst_4, (MR_Integer) 0))));

        Term_6 = mercury__term__int_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int_7, Context_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntConst_4, (MR_Integer) 0))));

        Term_6 = mercury__term__uint_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt_12, Context_5);
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_8 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntConst_4, (MR_Integer) 0)));

        Term_6 = mercury__term__int8_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int8_8, Context_5);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_13 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__uint8_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt8_13, Context_5);
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_9 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__int16_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int16_9, Context_5);
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__uint16_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt16_14, Context_5);
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_10 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__int32_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int32_10, Context_5);
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_15 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__uint32_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt32_15, Context_5);
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_11 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__int64_to_decimal_term_2_f_0(TypeInfo_for_T_17, Int64_11, Context_5);
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntConst_4, (MR_Integer) 1)));

            Term_6 = mercury__term__uint64_to_decimal_term_2_f_0(TypeInfo_for_T_17, UInt64_16, Context_5);
          }
          break;
      }
      break;
  }
  return Term_6;
}

static MR_String MR_CALL 
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

static MR_String MR_CALL 
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

static MR_String MR_CALL 
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
    MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Name_5));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Context_4));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_6;

  conv0_Term_6 = parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
            MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[6]));
            MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
          }
          break;
        case (MR_Integer) 1:
          {
            Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[8]));
            MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GroundnessResult_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word AnyResult_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word InstNamesResult_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 1))));
        MR_Word InstVarsResult_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 2))));
        MR_Word TypeResult_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 3))));
        MR_Word PropagatedResult_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 4))));
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
              MR_hl_field(MR_mktag(0), SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[24]));
              MR_hl_field(MR_mktag(0), SubTerm1_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SubTerm1_13, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 1:
            {
              SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[25]));
              MR_hl_field(MR_mktag(0), SubTerm1_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SubTerm1_13, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 0:
            {
              SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[26]));
              MR_hl_field(MR_mktag(0), SubTerm1_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SubTerm1_13, 2) = ((MR_Box) (Context_4));
            }
            break;
        }
        switch (AnyResult_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[27]));
              MR_hl_field(MR_mktag(0), SubTerm2_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SubTerm2_14, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 1:
            {
              SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[28]));
              MR_hl_field(MR_mktag(0), SubTerm2_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SubTerm2_14, 2) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 0:
            {
              SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[29]));
              MR_hl_field(MR_mktag(0), SubTerm2_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SubTerm2_14, 2) = ((MR_Box) (Context_4));
            }
            break;
        }
        if ((InstNamesResult_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[31]));
            MR_hl_field(MR_mktag(0), SubTerm3_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SubTerm3_15, 2) = ((MR_Box) (Context_4));
          }
        else
        {
          MR_Word InstNameSet_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstNamesResult_9, (MR_Integer) 0))));
          MR_Integer NumInstNames_62;
          MR_Word CountTerm_63;
          MR_Word Var_69;

          mercury__set__count_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), InstNameSet_61, &NumInstNames_62);
          CountTerm_63 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NumInstNames_62, Context_4);
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (CountTerm_63));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[30]));
            MR_hl_field(MR_mktag(0), SubTerm3_15, 1) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), SubTerm3_15, 2) = ((MR_Box) (Context_4));
          }
        }
        if ((InstVarsResult_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[33]));
            MR_hl_field(MR_mktag(0), SubTerm4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SubTerm4_16, 2) = ((MR_Box) (Context_4));
          }
        else
        {
          MR_Word InstVarSet_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarsResult_10, (MR_Integer) 0))));
          MR_Word InstVars_77;
          MR_Word InstVarTerms_78;
          MR_Word Var_82;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), InstVarSet_76, &InstVars_77);
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1));
            MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Context_4));
          }
          InstVarTerms_78 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_82, InstVars_77);
          {
            SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[32]));
            MR_hl_field(MR_mktag(0), SubTerm4_16, 1) = ((MR_Box) (InstVarTerms_78));
            MR_hl_field(MR_mktag(0), SubTerm4_16, 2) = ((MR_Box) (Context_4));
          }
        }
        SubTerm5_17 = parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(Context_4, TypeResult_11);
        SubTerm6_18 = parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(Context_4, PropagatedResult_12);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (SubTerm6_18));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (SubTerm5_17));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (SubTerm4_16));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (SubTerm3_15));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (SubTerm2_14));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (SubTerm1_13));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
        }
        {
          Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[7]));
          MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
        }
      }
      break;
  }
  return Term_6;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word PropagatedResult_5)
{
  MR_Word Term_6;

  if ((PropagatedResult_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[36]));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
    }
  else
  {
    MR_Word TypeCtor_7 = (MR_Word) (MR_body((MR_Word) (PropagatedResult_5), (MR_Integer) 1));
    MR_Word Var_13;
    MR_Word Var_14;

    Var_14 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(Context_4, TypeCtor_7);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[37]));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
    }
  }
  return Term_6;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word TypeCtor_5)
{
  MR_Word Term_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
  MR_String ConsName_9;
  MR_String Var_13;
  MR_Word Var_17;
  MR_String Var_19;
  MR_String Var_27;

  Var_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_2[38]), Arity_8, &Var_19);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_19);
  ConsName_9 = mercury__string__f_43_43_2_f_0(Var_13, Var_27);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ConsName_9));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
  }
  return Term_6;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_6;

  conv0_Term_6 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word ContainsTypes_5)
{
  MR_Word Term_6;

  if ((ContainsTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[35]));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
    }
  else
  {
    MR_Word TypeCtorSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainsTypes_5, (MR_Integer) 0))));
    MR_Word TypeCtors_8;
    MR_Word TypeCtorTerms_9;
    MR_Word Var_13;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtorSet_7, &TypeCtors_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Context_4));
    }
    TypeCtorTerms_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[1]), Var_13, TypeCtors_8);
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[34]));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (TypeCtorTerms_9));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
    }
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
    MR_String Var_24;
    MR_Word Var_27;

    Detism_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3))) & (MR_Integer) 7);
    Context_11 = mercury__term__context_init_0_f_0();
    Var_24 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_8);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Var_24));
    }
    {
      DetismTerm0_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DetismTerm0_12, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), DetismTerm0_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), DetismTerm0_12, 2) = ((MR_Box) (Context_11));
    }
    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm0_12, &DetismTerm_13);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (DetismTerm_13));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[13]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word Context_14;
        MR_Word Var_17;

        Context_14 = mercury__term__context_init_0_f_0();
        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[11]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_14));
        }
      }
      break;
    case (MR_Integer) 0:
      *Term_3 = HeadVar__2_2;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_7;
        MR_Word Var_10;

        Context_7 = mercury__term__context_init_0_f_0();
        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[12]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_7));
        }
      }
      break;
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
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Term_18;
      MR_Word Terms_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_25;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Mode_16));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
      }
      Var_25 = mercury__term__context_init_0_f_0();
      {
        Term_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[10]));
        MR_hl_field(MR_mktag(0), Term_18, 1) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), Term_18, 2) = ((MR_Box) (Var_25));
      }
      parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(Var_26, Modes_17, &Terms_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_19));
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
    MR_Word Qualifier_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Context_13;
    MR_Word QualTerm_14;
    MR_Word Term0_15;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;

    Context_13 = mercury__term__context_init_0_f_0();
    parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(Qualifier_9, (MR_Word) ((MR_Unsigned) 0U), &QualTerm_14);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Name_10));
    }
    {
      Term0_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term0_15, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Term0_15, 1) = ((MR_Box) (Args_2));
      MR_hl_field(MR_mktag(0), Term0_15, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Term0_15));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (QualTerm_14));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[9]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_13));
    }
  }
  else
  {
    MR_String Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Context_7;
    MR_Word Var_8;

    Context_7 = mercury__term__context_init_0_f_0();
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Name_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Args_2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_7));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_4;

  parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Term_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(
  MR_Word Types_3,
  MR_Word * Terms_4)
{
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_to_term_scalar_common_4[0]), Types_3, Terms_4);
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
