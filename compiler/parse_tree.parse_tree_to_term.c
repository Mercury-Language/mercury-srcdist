/*
** Automatically generated from `parse_tree_to_term.m'
** by the Mercury compiler,
** version rotd-2017-10-22
** configured for x86_64-pc-linux-gnu.
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


// :- module parse_tree.parse_tree_to_term.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_to_term__init
ENDINIT
*/

#include "parse_tree.parse_tree_to_term.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__729__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__721__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__737__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_52);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__259__1_3_f_0(
  MR_Word Context_6,
  MR_Word LambdaHeadVar__1_28,
  MR_Word LambdaHeadVar__2_29);

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

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(
  MR_Word Lang_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3);

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

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[4][3];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[52][1];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[2][6];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_7[3][7];


/* sealed */ struct parse_tree__parse_tree_to_term__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_5_0_s parse_tree__parse_tree_to_term_vector_common_5[29];



static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[52][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "contains_types_unknown"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "contains_types_known"))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "no_type_ctor_propagated"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "type_ctor_propagated"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "no_results"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "groundness_unknown"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "is_ground"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "is_not_ground"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "contains_any_unknown"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "does_contain_any"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "does_not_contain_any"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_unknown"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_known"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_unknown"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_known"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "results"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "fgtc"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "type_info_const"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_const"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "EMPTY_BOUND_INSTS"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "any_func"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "any_pred"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\044any"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\044ground"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\044typed_ground"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\044typed_inst"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\044unify"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_5_0_s parse_tree__parse_tree_to_term_vector_common_5[29] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "multi" },
  /* row 3 */   {     (MR_String) "nondet" },
  /* row 4 */   {     (MR_String) "cc_multi" },
  /* row 5 */   {     (MR_String) "cc_nondet" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
  /* row 8 */   {     (MR_String) "det" },
  /* row 9 */   {     (MR_String) "semidet" },
  /* row 10 */   {     (MR_String) "multi" },
  /* row 11 */   {     (MR_String) "nondet" },
  /* row 12 */   {     (MR_String) "cc_multi" },
  /* row 13 */   {     (MR_String) "cc_nondet" },
  /* row 14 */   {     (MR_String) "erroneous" },
  /* row 15 */   {     (MR_String) "failure" },
  /* row 16 */   {     (MR_String) "det" },
  /* row 17 */   {     (MR_String) "semidet" },
  /* row 18 */   {     (MR_String) "multi" },
  /* row 19 */   {     (MR_String) "nondet" },
  /* row 20 */   {     (MR_String) "cc_multi" },
  /* row 21 */   {     (MR_String) "cc_nondet" },
  /* row 22 */   {     (MR_String) "erroneous" },
  /* row 23 */   {     (MR_String) "failure" },
  /* row 24 */   {     (MR_String) "any" },
  /* row 25 */   {     (MR_String) "unique_any" },
  /* row 26 */   {     (MR_String) "mostly_unique_any" },
  /* row 27 */   {     (MR_String) "clobbered_any" },
  /* row 28 */   {     (MR_String) "mostly_clobbered_any" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__729__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_62)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_62)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__721__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_70)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_70)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__737__1_2_p_0(
  MR_Word ArgTerms_5,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (ArgTerms_5)), ((MR_Box) (HeadVar__2_52)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__259__1_3_f_0(
  MR_Word Context_6,
  MR_Word LambdaHeadVar__1_28,
  MR_Word LambdaHeadVar__2_29)
{
  {
    MR_Word LambdaHeadVar__3_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    Var_36 = mercury__term__context_init_0_f_0();
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (LambdaHeadVar__1_28));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    Var_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_35);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (LambdaHeadVar__2_29));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_37));
    }
    {
      LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[51]));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 2) = ((MR_Box) (Context_6));
    }
    return LambdaHeadVar__3_30;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word InstVar_5)
{
  {
    MR_Word Term_6;
    MR_Integer InstVarNum_7;
    MR_String InstVarNumStr_8;
    MR_Word Var_9;
    MR_String Var_10;

    InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, InstVar_5);
    InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(InstVarNum_7);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", InstVarNumStr_8);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Var_10));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word InstName_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_4, Var_6, InstName_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word Inst_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_4, Var_6, Inst_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_2_f_0(
  MR_Word Lang_4,
  MR_Word Mode_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_4, Var_6, Mode_5);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_8;

    conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Term_8));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Mode_7)
{
  {
    MR_bool succeeded;
    MR_Word Term_8;

    if (((MR_tag((MR_Word) Mode_7)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Mode_7, (MR_Integer) 0)));
      MR_Word InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Mode_7, (MR_Integer) 1)));
      MR_Word Var_17;
      MR_Word _Uniq_11;
      MR_Word Var_12;

      succeeded = ((((MR_tag((MR_Word) InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        _Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstA_9, (MR_Integer) 1)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstA_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_12 = (MR_Word) MR_body(((MR_Word) Var_17), (MR_Integer) 1);
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstB_10, InstA_9);
        }
      }
      if (succeeded)
        Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstA_9);
      else
      {
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;

        Var_21 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstA_9);
        Var_23 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstB_10);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
        }
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[50], Var_19, Context_6, &Term_8);
      }
    }
    else
    {
      MR_Word Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Mode_7, (MR_Integer) 0)));
      MR_Word Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Mode_7, (MR_Integer) 1)));
      MR_Word Var_15;
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Lang_5));
        MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Context_6));
      }
      Var_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_16, Args_14);
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_13, Var_15, Context_6, &Term_8);
    }
    return Term_8;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_30;

    conv0_LambdaHeadVar__3_30 = parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__259__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_30));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word Inst_7)
{
  {
    MR_Word Term_8;

    switch (MR_tag((MR_Word) Inst_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[49]));
                MR_hl_field(MR_mktag(0), Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Term_8, 2) = ((MR_Box) (Context_6));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, (MR_String) "not_reached");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Inst_7, (MR_Integer) 0)));
          MR_Word Term0_13;
          MR_Word Term1_14;
          MR_Word Var_55;

          parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_12, &Term0_13);
          Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Term0_13);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Term1_14));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[49]));
            MR_hl_field(MR_mktag(0), Term_8, 1) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), Term_8, 2) = ((MR_Box) (Context_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_7, (MR_Integer) 0)));
          MR_Word HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_7, (MR_Integer) 1)));

          if ((HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String Var_58 = ((&parse_tree__parse_tree_to_term_vector_common_5[24 + Uniq_9]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
            MR_Word Var_78;

            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_58));
            }
            {
              Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Term_8, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Term_8, 2) = ((MR_Box) (Context_6));
            }
          }
          else
          {
            MR_Word PredInstInfo_11 = (MR_Word) MR_body(((MR_Word) HOInstInfo_10), (MR_Integer) 1);

            Term_8 = parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(Lang_5, Context_6, PredInstInfo_11);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2)));
              MR_Word BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 3)));
              MR_Word ArgTerms_17;
              MR_Word Var_50;
              MR_String Var_51;
              MR_Word Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_44;
                    MR_Word Var_45;
                    MR_Word Var_46;

                    Var_44 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Context_6, InstResults_15);
                    if ((BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[34]));
                        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (Context_6));
                      }
                    }
                    else
                    {
                      MR_Word BoundInst_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), BoundInsts_16, (MR_Integer) 0)));
                      MR_Word BoundInsts_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), BoundInsts_16, (MR_Integer) 1)));

                      Var_46 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(Lang_5, Context_6, BoundInst_87, BoundInsts_88);
                    }
                    {
                      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
                      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ArgTerms_17, 0) = ((MR_Box) (Var_44));
                      MR_hl_field(MR_mktag(1), ArgTerms_17, 1) = ((MR_Box) (Var_45));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_48;

                    Var_48 = parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(Lang_5, Context_6, BoundInsts_16);
                    {
                      ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ArgTerms_17, 0) = ((MR_Box) (Var_48));
                      MR_hl_field(MR_mktag(1), ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              switch (Uniq_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  Var_51 = (MR_String) "clobbered";
                  break;
                case (MR_Integer) 4:
                  Var_51 = (MR_String) "mostly_clobbered";
                  break;
                case (MR_Integer) 2:
                  Var_51 = (MR_String) "mostly_unique";
                  break;
                case (MR_Integer) 0:
                  Var_51 = (MR_String) "bound";
                  break;
                case (MR_Integer) 1:
                  Var_51 = (MR_String) "unique";
                  break;
              }
              {
                Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
              }
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_50, ArgTerms_17, Context_6, &Term_8);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));
              MR_Word HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2)));

              if ((HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_String Var_42;

                Var_42 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_62, (MR_String) "ground");
                Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_42);
              }
              else
              {
                MR_Word PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) HOInstInfo_63), (MR_Integer) 1);

                Term_8 = parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(Lang_5, Context_6, PredInstInfo_60);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));
              MR_Word Var_40;
              MR_Word Var_41;

              Var_41 = mercury__term__context_init_0_f_0();
              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
              }
              Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_40);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));
              MR_Word SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2)));
              MR_Word Var_27;
              MR_Word Var_39;
              MR_Box conv1_Term_8;

              {
                Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1));
                MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Context_6));
              }
              Var_39 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, SubInst_20);
              conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_27, Vars_19, ((MR_Box) (Var_39)));
              Term_8 = ((MR_Word) conv1_Term_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));

              Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, InstName_24);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));
              MR_Word Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2)));
              MR_Word Var_26;

              {
                Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Name_22));
                MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Args_23));
              }
              Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, Var_26);
            }
            break;
        }
        break;
    }
    return Term_8;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Term_8;

    conv1_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_Term_8));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_8;

    conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Term_8));
    return wrapper_arg_2;
  }
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
    switch (MR_tag((MR_Word) InstName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstName_7, (MR_Integer) 0)));
          MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstName_7, (MR_Integer) 1)));
          MR_Word Var_117;
          MR_Word Var_118;

          {
            Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2));
            MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (Lang_5));
            MR_hl_field(MR_mktag(0), Var_118, 4) = ((MR_Box) (Context_6));
          }
          Var_117 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_118, Args_10);
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_9, Var_117, Context_6, &Term_8);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Liveness_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 0)));
          MR_Word Real_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 1)));
          MR_Word InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 2)));
          MR_Word InstB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_7, (MR_Integer) 3)));

          switch (Lang_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_102;
                MR_Word Var_104;
                MR_String Var_105;
                MR_Word Var_106;
                MR_Word Var_107;
                MR_String Var_108;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Var_111;
                MR_Word Var_112;

                Var_105 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Liveness_11);
                Var_104 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_105);
                Var_108 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_12);
                Var_107 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_108);
                Var_110 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstA_13);
                Var_112 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(Lang_5, Context_6, InstB_14);
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
                  MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                  MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
                }
                {
                  Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
                  MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_104));
                  MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_106));
                }
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[48], Var_102, Context_6, &Term_8);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "unify_inst");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), InstName_7, (MR_Integer) 0)));
          MR_Word InstB_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), InstName_7, (MR_Integer) 1)));

          switch (Lang_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_92;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;

                {
                  Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1));
                  MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (Lang_5));
                  MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) (Context_6));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (InstB_120));
                  MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (InstA_119));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
                }
                Var_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_94, Var_95);
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[43], Var_92, Context_6, &Term_8);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "merge_inst");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1)));
              MR_Word Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word IsLive_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Real_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_74;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_78;
                    MR_String Var_79;
                    MR_Word Var_81;
                    MR_Word Var_82;
                    MR_String Var_83;
                    MR_Word Var_84;
                    MR_Word Var_85;
                    MR_String Var_86;

                    Var_76 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_15);
                    Var_79 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_16, (MR_String) "shared");
                    Var_78 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_79);
                    Var_83 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_17);
                    Var_82 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_83);
                    Var_86 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_121);
                    Var_85 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_86);
                    {
                      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_81));
                    }
                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_76));
                      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[42], Var_74, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "ground_inst");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Real_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word SubInstName_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1)));
              MR_Word Uniq_124 = ((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_56;
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_String Var_61;
                    MR_Word Var_63;
                    MR_Word Var_64;
                    MR_String Var_65;
                    MR_Word Var_66;
                    MR_Word Var_67;
                    MR_String Var_68;

                    Var_58 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_123);
                    Var_61 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_124, (MR_String) "shared");
                    Var_60 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_61);
                    Var_65 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(IsLive_125);
                    Var_64 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_65);
                    Var_68 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_122);
                    Var_67 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_68);
                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
                      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_63));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_58));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[41], Var_56, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "any_inst");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1)));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_48;
                    MR_Word Var_50;

                    Var_50 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_126);
                    {
                      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_50));
                      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[45], Var_48, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "shared_inst");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1)));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_40;
                    MR_Word Var_42;

                    Var_42 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_127);
                    {
                      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_42));
                      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[44], Var_40, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "mostly_uniq_inst");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)));
              MR_Word Uniq_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1)));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorInfo_150_150;
                    MR_Word Term0_19;
                    MR_Word Var_28;
                    MR_Word Var_30;
                    MR_String Var_31;
                    MR_Word Var_33;
                    MR_Word Var_34;

                    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_18, &Term0_19);
                    Var_31 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_128, (MR_String) "shared");
                    Var_30 = parse_tree__parse_tree_to_term__make_atom_2_f_0(Context_6, Var_31);
                    TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    Var_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, TypeCtorInfo_150_150, Term0_19);
                    {
                      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
                      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_30));
                      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_33));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_150_150, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[46], Var_28, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "typed_ground");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 2)));
              MR_Word Type_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_7, (MR_Integer) 1)));

              switch (Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorInfo_152_152;
                    MR_Word Var_21;
                    MR_Word Var_23;
                    MR_Word Var_24;
                    MR_Word Var_25;
                    MR_Word Term0_129;

                    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_132, &Term0_129);
                    TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    Var_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, TypeCtorInfo_152_152, Term0_129);
                    Var_25 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(Lang_5, Context_6, SubInstName_131);
                    {
                      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
                      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_23));
                      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
                    }
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_152_152, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[47], Var_21, Context_6, &Term_8);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_InstName_7 = SubInstName_131;

                    // direct tailcall eliminated
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Term_8;

    conv2_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_Term_8));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Term_8;

    conv1_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_Term_8));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9)
{
  {
    MR_Word Term_10;
    MR_Word PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 0)));
    MR_Word Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 1)));
    MR_Word Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 3)));
    MR_Word ModesTerm_15;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_String Var_52;
    MR_Word Var_55;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 2)));

    switch (PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word TypeCtorInfo_48_48;
          MR_Word ArgModes_16;
          MR_Word RetMode_17;
          MR_Word ArgModesTerm_18;
          MR_Word Var_20;
          MR_Word Var_22;
          MR_Word Var_24;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Box conv0_RetMode_17;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_44_44, Modes_12, &ArgModes_16, &conv0_RetMode_17);
          RetMode_17 = ((MR_Word) conv0_RetMode_17);
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Lang_6));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Context_7));
          }
          Var_20 = mercury__list__map_2_f_0(TypeCtorInfo_44_44, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_22, ArgModes_16);
          TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[39], Var_20, Context_7, &ArgModesTerm_18);
          Var_27 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_6, Context_7, RetMode_17);
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
          }
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[37], Var_24, Context_7, &ModesTerm_15);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_30;
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Lang_6));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (Context_7));
          }
          Var_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_32, Modes_12);
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[40], Var_30, Context_7, &ModesTerm_15);
        }
        break;
    }
    Var_52 = ((&parse_tree__parse_tree_to_term_vector_common_5[16 + Det_14]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_52));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (Context_7));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ModesTerm_15));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[4], Var_34, Context_7, &Term_10);
    return Term_10;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Term_8;

    conv2_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_Term_8));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Term_8;

    conv1_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_Term_8));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word PredInstInfo_9)
{
  {
    MR_Word Term_10;
    MR_Word PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 0)));
    MR_Word Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 1)));
    MR_Word Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 3)));
    MR_Word ModesTerm_15;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_String Var_52;
    MR_Word Var_55;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_9, (MR_Integer) 2)));

    switch (PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word TypeCtorInfo_48_48;
          MR_Word ArgModes_16;
          MR_Word RetMode_17;
          MR_Word ArgModesTerm_18;
          MR_Word Var_20;
          MR_Word Var_22;
          MR_Word Var_24;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Box conv0_RetMode_17;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_44_44, Modes_12, &ArgModes_16, &conv0_RetMode_17);
          RetMode_17 = ((MR_Word) conv0_RetMode_17);
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Lang_6));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Context_7));
          }
          Var_20 = mercury__list__map_2_f_0(TypeCtorInfo_44_44, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_22, ArgModes_16);
          TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[36], Var_20, Context_7, &ArgModesTerm_18);
          Var_27 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_6, Context_7, RetMode_17);
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
          }
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[37], Var_24, Context_7, &ModesTerm_15);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_30;
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Lang_6));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (Context_7));
          }
          Var_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_32, Modes_12);
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[38], Var_30, Context_7, &ModesTerm_15);
        }
        break;
    }
    Var_52 = ((&parse_tree__parse_tree_to_term_vector_common_5[8 + Det_14]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_52));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (Context_7));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ModesTerm_15));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[4], Var_34, Context_7, &Term_10);
    return Term_10;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Modes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Term_5;
    MR_Word Terms_6;
    MR_Word Term0_7;
    MR_Word Var_13;

    Var_13 = mercury__term__context_init_0_f_0();
    Term0_7 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0((MR_Integer) 0, Var_13, Mode_3);
    mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term0_7, &Term_5);
    parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(Modes_4, &Terms_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Term_4;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) wrapper_arg_1), &conv2_Term_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_Term_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Term_4;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) wrapper_arg_1), &conv1_Term_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_Term_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_4;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) wrapper_arg_1), &conv0_Term_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
  }
}

void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0(
  MR_Word Type_3,
  MR_Word * Term_4)
{
  {
    MR_Word Context_5;

    Context_5 = mercury__term__context_init_0_f_0();
    switch (MR_tag((MR_Word) Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 0)));
          MR_Word Var_8;
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 1)));

          Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, TVar_6);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Term_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_5));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_3, (MR_Integer) 0)));
          MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_3, (MR_Integer) 1)));
          MR_Word ArgTerms_12;
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_3, (MR_Integer) 2)));

          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[2], Args_10, &ArgTerms_12);
          parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(SymName_9, ArgTerms_12, Term_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_3, (MR_Integer) 0)));
          MR_String Name_14;
          MR_Word Var_55;

          parse_tree__prog_data__builtin_type_to_string_2_p_0(BuiltinType_13, &Name_14);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Name_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *Term_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
              MR_Word ArgTerms_62;
              MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2)));

              parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(Args_61, &ArgTerms_62);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[29]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_62));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
              MR_Word PredArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2)));
              MR_Word HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3)));
              MR_Word Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 4)));
              MR_Word PredArgTypeTerms_20;
              MR_Word PredArgTerms_26;
              MR_Word Term2_28;
              MR_Word Term3_31;

              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[3], PredArgTypes_16, &PredArgTypeTerms_20);
              if ((HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                PredArgTerms_26 = PredArgTypeTerms_20;
              else
              {
                MR_Word PredArgModes_22;
                MR_Word PredArgModeTerms_25;
                MR_Word Var_45 = (MR_Word) MR_body(((MR_Word) HOInstInfo_17), (MR_Integer) 1);
                MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0)));
                MR_Word Var_23;
                MR_Word Var_24;

                PredArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1)));
                Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 2)));
                Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 3)));
                parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(PredArgModes_22, &PredArgModeTerms_25);
                parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(PredArgTypeTerms_20, PredArgModeTerms_25, &PredArgTerms_26);
              }
              switch (PorF_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word RetTerm_29;
                    MR_Word Term1_30;
                    MR_Word Var_50;
                    MR_Word Var_51;
                    MR_Word ArgTerms_57;
                    MR_Box conv3_RetTerm_29;

                    mercury__list__det_split_last_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], PredArgTerms_26, &ArgTerms_57, &conv3_RetTerm_29);
                    RetTerm_29 = ((MR_Word) conv3_RetTerm_29);
                    {
                      Term1_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Term1_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[36]));
                      MR_hl_field(MR_mktag(0), Term1_30, 1) = ((MR_Box) (ArgTerms_57));
                      MR_hl_field(MR_mktag(0), Term1_30, 2) = ((MR_Box) (Context_5));
                    }
                    {
                      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (RetTerm_29));
                      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Term1_30));
                      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
                    }
                    {
                      Term2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[37]));
                      MR_hl_field(MR_mktag(0), Term2_28, 1) = ((MR_Box) (Var_50));
                      MR_hl_field(MR_mktag(0), Term2_28, 2) = ((MR_Box) (Context_5));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      Term2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[38]));
                      MR_hl_field(MR_mktag(0), Term2_28, 1) = ((MR_Box) (PredArgTerms_26));
                      MR_hl_field(MR_mktag(0), Term2_28, 2) = ((MR_Box) (Context_5));
                    }
                  }
                  break;
              }
              parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(Purity_18, Term2_28, &Term3_31);
              parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(HOInstInfo_17, Term3_31, Term_4);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_41;
              MR_Word Var_42;
              MR_Word TVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
              MR_Word Var_64;
              MR_Word Args_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2)));
              MR_Word ArgTerms_66;
              MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3)));

              Var_64 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, TVar_63);
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[1], Args_65, &ArgTerms_66);
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Context_5));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (ArgTerms_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[35]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.unparse_type\'/2", (MR_String) "kind annotation");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(
  MR_Word Lang_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[34]));
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 2) = ((MR_Box) (Context_2));
      }
    }
    else
    {
      MR_Word BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      HeadVar__4_4 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(Lang_1, Context_2, BoundInst_12, BoundInsts_13);
    }
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_8;

    conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Term_8));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word BoundInst_8,
  MR_Word BoundInsts_9)
{
  {
    MR_Word Term_10;
    MR_Word ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 0)));
    MR_Word Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1)));
    MR_Word ArgTerms_13;
    MR_Word FirstTerm_14;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Lang_6));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Context_7));
    }
    ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_18, Args_12);
    parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(ConsId_11, ArgTerms_13, &FirstTerm_14);
    if ((BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Term_10 = FirstTerm_14;
    else
    {
      MR_Word HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), BoundInsts_9, (MR_Integer) 0)));
      MR_Word TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), BoundInsts_9, (MR_Integer) 1)));
      MR_Word SecondTerm_17;
      MR_Word Var_20;
      MR_Word Var_22;

      SecondTerm_17 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(Lang_6, Context_7, HeadBoundInst_15, TailBoundInsts_16);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (SecondTerm_17));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (FirstTerm_14));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[33], Var_20, Context_7, &Term_10);
    }
    return Term_10;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__729__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__721__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__737__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(
  MR_Word ConsId_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_135;

          mercury__term__context_init_1_p_0(&Context_135);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[31])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_135));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtor_32 = (MR_Word) MR_body(((MR_Word) ConsId_4), (MR_Integer) 1);
          MR_String Var_79;
          MR_Word Var_83;
          MR_Word Context_131;
          MR_String FunctorName_132;
          MR_Word TypeCtorName_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_32, (MR_Integer) 0)));
          MR_Integer Arity_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_32, (MR_Integer) 1)));
          MR_String Var_168;
          MR_String Var_176;
          MR_String Var_177;

          mercury__term__context_init_1_p_0(&Context_131);
          Var_79 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorName_133);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[7], Arity_134, &Var_168);
          Var_176 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_168);
          Var_177 = mercury__string__f_43_43_2_f_0(Var_79, Var_176);
          FunctorName_132 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", Var_177);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_83, 0) = ((MR_Box) (FunctorName_132));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_131));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_145;

          mercury__term__context_init_1_p_0(&Context_145);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[28])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_145));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_147;

              mercury__term__context_init_1_p_0(&Context_147);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[27])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_147));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_149;

              mercury__term__context_init_1_p_0(&Context_149);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[25])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_149));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Integer _Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 2)));
              MR_Word _TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 3)));

              parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SymName_7, ArgTerms_5, Term_6);
            }
            break;
          case (MR_Integer) 3:
            {
              parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[29], ArgTerms_5, Term_6);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Context_12;

              mercury__term__context_init_1_p_0(&Context_12);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[24])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_113;

              mercury__term__context_init_1_p_0(&Context_113);
              *Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Int_14, Context_113);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_15 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_114;

              mercury__term__context_init_1_p_0(&Context_114);
              *Term_6 = mercury__term__uint_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, UInt_15, Context_114);
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_16 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_115;

              mercury__term__context_init_1_p_0(&Context_115);
              *Term_6 = mercury__term__int8_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Int8_16, Context_115);
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_17 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_116;

              mercury__term__context_init_1_p_0(&Context_116);
              *Term_6 = mercury__term__uint8_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, UInt8_17, Context_116);
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_18 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_117;

              mercury__term__context_init_1_p_0(&Context_117);
              *Term_6 = mercury__term__int16_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Int16_18, Context_117);
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_19 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_118;

              mercury__term__context_init_1_p_0(&Context_118);
              *Term_6 = mercury__term__uint16_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, UInt16_19, Context_118);
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_20 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_119;

              mercury__term__context_init_1_p_0(&Context_119);
              *Term_6 = mercury__term__int32_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Int32_20, Context_119);
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_21 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Context_120;

              mercury__term__context_init_1_p_0(&Context_120);
              *Term_6 = mercury__term__uint32_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, UInt32_21, Context_120);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Var_105;
              MR_Word Context_121;

              mercury__term__context_init_1_p_0(&Context_121);
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_105, 1) = MR_box_float(Float_22);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_121));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Char Char_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_String Var_101;
              MR_Word SymName_123;

              Var_101 = mercury__string__from_char_1_f_0(Char_24);
              {
                SymName_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SymName_123, 0) = ((MR_Box) (Var_101));
              }
              parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SymName_123, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Term_6);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Var_103;
              MR_Word Context_122;

              mercury__term__context_init_1_p_0(&Context_122);
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_103, 0) = ((MR_Box) (String_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_122));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Var_99;
              MR_Word Context_124;
              MR_String FunctorName_125;
              MR_String String_126 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));

              mercury__term__context_init_1_p_0(&Context_124);
              FunctorName_125 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", String_126);
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_99, 0) = ((MR_Box) (FunctorName_125));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_124));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_String TypeCtorName_26 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 2)));
              MR_Integer Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 3)));
              MR_String Var_90;
              MR_Word Var_96;
              MR_Word Context_127;
              MR_String FunctorName_128;
              MR_String Var_179;
              MR_String Var_187;
              MR_String Var_188;
              MR_String Var_190;
              MR_String Var_191;

              mercury__term__context_init_1_p_0(&Context_127);
              Var_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_25);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[7], Arity_27, &Var_179);
              Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_179);
              Var_188 = mercury__string__f_43_43_2_f_0(TypeCtorName_26, Var_187);
              Var_190 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_188);
              Var_191 = mercury__string__f_43_43_2_f_0(Var_90, Var_190);
              FunctorName_128 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", Var_191);
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (FunctorName_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_127));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word Context_129;

              mercury__term__context_init_1_p_0(&Context_129);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[23])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_129));
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Integer TIConstNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Arg_34;
              MR_Word Var_66;
              MR_Word Var_72;
              MR_Word Context_137;

              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2));
                MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ArgTerms_5));
                MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_66, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
              mercury__term__context_init_1_p_0(&Context_137);
              Arg_34 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, TIConstNum_33, Context_137);
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Arg_34));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[30])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_137));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer TCIConstNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
              MR_Word Var_58;
              MR_Word Var_64;
              MR_Word Context_139;
              MR_Word Arg_141;

              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (ArgTerms_5));
                MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_58, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
              mercury__term__context_init_1_p_0(&Context_139);
              Arg_141 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, TCIConstNum_35, Context_139);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Arg_141));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[32])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_139));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word SubConsId_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 2)));
              MR_Word SubArg_37;
              MR_Word NumArg_38;
              MR_Word Var_48;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Context_142;
              MR_Integer TCIConstNum_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));

              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ArgTerms_5));
                MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_48, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
              parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(SubConsId_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &SubArg_37);
              mercury__term__context_init_1_p_0(&Context_142);
              NumArg_38 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, TCIConstNum_144, Context_142);
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (SubArg_37));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (NumArg_38));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[26])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_142));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(
  MR_Word HeadVar__1_1,
  MR_String SharedName_2)
{
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
}

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word Context_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Name_5));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Context_4));
    }
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_6;

    conv0_Term_6 = parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Term_6));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word InstResults_5)
{
  {
    MR_Word Term_6;

    switch (MR_tag((MR_Word) InstResults_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[22]));
                MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 0)));
          MR_Word AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 1)));
          MR_Word InstNamesResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 2)));
          MR_Word InstVarsResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 3)));
          MR_Word TypeResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 4)));
          MR_Word PropagatedResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 5)));
          MR_Word SubTerm1_13;
          MR_Word SubTerm2_14;
          MR_Word SubTerm3_15;
          MR_Word SubTerm4_16;
          MR_Word SubTerm5_17;
          MR_Word SubTerm6_18;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;

          switch (GroundnessResult_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[11]));
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 2) = ((MR_Box) (Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[12]));
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 2) = ((MR_Box) (Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[13]));
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), SubTerm1_13, 2) = ((MR_Box) (Context_4));
                }
              }
              break;
          }
          switch (AnyResult_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[14]));
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 2) = ((MR_Box) (Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[15]));
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 2) = ((MR_Box) (Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[16]));
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), SubTerm2_14, 2) = ((MR_Box) (Context_4));
                }
              }
              break;
          }
          if ((InstNamesResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[17]));
              MR_hl_field(MR_mktag(0), SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), SubTerm3_15, 2) = ((MR_Box) (Context_4));
            }
          }
          else
          {
            MR_Word InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstNamesResult_9, (MR_Integer) 0)));
            MR_Integer NumInstNames_62;
            MR_Word CountTerm_63;
            MR_Word Var_66;

            mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, InstNameSet_61, &NumInstNames_62);
            CountTerm_63 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NumInstNames_62, Context_4);
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (CountTerm_63));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[18]));
              MR_hl_field(MR_mktag(0), SubTerm3_15, 1) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), SubTerm3_15, 2) = ((MR_Box) (Context_4));
            }
          }
          if ((InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[19]));
              MR_hl_field(MR_mktag(0), SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), SubTerm4_16, 2) = ((MR_Box) (Context_4));
            }
          }
          else
          {
            MR_Word TypeInfo_16_85 = (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[2];
            MR_Word InstVarSet_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstVarsResult_10, (MR_Integer) 0)));
            MR_Word InstVars_77;
            MR_Word InstVarTerms_78;
            MR_Word Var_79;

            mercury__set__to_sorted_list_2_p_0(TypeInfo_16_85, InstVarSet_76, &InstVars_77);
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1));
              MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Context_4));
            }
            InstVarTerms_78 = mercury__list__map_2_f_0(TypeInfo_16_85, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_79, InstVars_77);
            {
              SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[20]));
              MR_hl_field(MR_mktag(0), SubTerm4_16, 1) = ((MR_Box) (InstVarTerms_78));
              MR_hl_field(MR_mktag(0), SubTerm4_16, 2) = ((MR_Box) (Context_4));
            }
          }
          SubTerm5_17 = parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(Context_4, TypeResult_11);
          SubTerm6_18 = parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(Context_4, PropagatedResult_12);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (SubTerm6_18));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (SubTerm5_17));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (SubTerm4_16));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (SubTerm3_15));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (SubTerm2_14));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SubTerm1_13));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
          }
          {
            Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[21]));
            MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
          }
        }
        break;
    }
    return Term_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word PropagatedResult_5)
{
  {
    MR_Word Term_6;

    if ((PropagatedResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[8]));
        MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
      }
    }
    else
    {
      MR_Word TypeCtor_7 = (MR_Word) MR_body(((MR_Word) PropagatedResult_5), (MR_Integer) 1);
      MR_Word Var_10;
      MR_Word Var_11;

      Var_11 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(Context_4, TypeCtor_7);
      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[9]));
        MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
      }
    }
    return Term_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word TypeCtor_5)
{
  {
    MR_Word Term_6;
    MR_Word SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0)));
    MR_Integer Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1)));
    MR_String ConsName_9;
    MR_String Var_13;
    MR_Word Var_17;
    MR_String Var_19;
    MR_String Var_27;

    Var_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_7);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[7], Arity_8, &Var_19);
    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_19);
    ConsName_9 = mercury__string__f_43_43_2_f_0(Var_13, Var_27);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ConsName_9));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
    }
    return Term_6;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_6;

    conv0_Term_6 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Term_6));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(
  MR_Word Context_4,
  MR_Word ContainsTypes_5)
{
  {
    MR_Word Term_6;

    if ((ContainsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[5]));
        MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
      }
    }
    else
    {
      MR_Word TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
      MR_Word TypeCtorSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ContainsTypes_5, (MR_Integer) 0)));
      MR_Word TypeCtors_8;
      MR_Word TypeCtorTerms_9;
      MR_Word Var_10;

      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_16_16, TypeCtorSet_7, &TypeCtors_8);
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Context_4));
      }
      TypeCtorTerms_9 = mercury__list__map_2_f_0(TypeCtorInfo_16_16, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], Var_10, TypeCtors_8);
      {
        Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[6]));
        MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (TypeCtorTerms_9));
        MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_4));
      }
    }
    return Term_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Term_3 = HeadVar__2_2;
  else
  {
    MR_Word Detism_8;
    MR_Word Context_11;
    MR_Word DetismTerm0_12;
    MR_Word DetismTerm_13;
    MR_Word Var_14 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 1);
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_24;
    MR_Word Var_27;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2)));

    Detism_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3)));
    Context_11 = mercury__term__context_init_0_f_0();
    Var_24 = ((&parse_tree__parse_tree_to_term_vector_common_5[0 + Detism_8]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Var_24));
    }
    {
      DetismTerm0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DetismTerm0_12, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), DetismTerm0_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), DetismTerm0_12, 2) = ((MR_Box) (Context_11));
    }
    mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, DetismTerm0_12, &DetismTerm_13);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (DetismTerm_13));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[4]));
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
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[2]));
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
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[3]));
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Term_20;
      MR_Word Terms_21;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_27;

      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Mode_18));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
      }
      Var_27 = mercury__term__context_init_0_f_0();
      {
        Term_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_20, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Term_20, 1) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), Term_20, 2) = ((MR_Box) (Var_27));
      }
      parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(Var_28, Modes_19, &Terms_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_21));
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_String Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Context_13;
    MR_Word QualTerm_14;
    MR_Word Term0_15;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;

    Context_13 = mercury__term__context_init_0_f_0();
    parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &QualTerm_14);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Name_10));
    }
    {
      Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term0_15, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Term0_15, 1) = ((MR_Box) (Args_2));
      MR_hl_field(MR_mktag(0), Term0_15, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Term0_15));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (QualTerm_14));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_13));
    }
  }
  else
  {
    MR_String Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Context_7;
    MR_Word Var_8;

    Context_7 = mercury__term__context_init_0_f_0();
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Name_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_4;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) wrapper_arg_1), &conv0_Term_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(
  MR_Word Types_3,
  MR_Word * Terms_4)
{
  {
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[0], Types_3, Terms_4);
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
