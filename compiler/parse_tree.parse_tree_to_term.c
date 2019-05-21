/*
** Automatically generated from `parse_tree_to_term.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module parse_tree.parse_tree_to_term. */
/* :- implementation. */

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
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_62);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__721__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_70);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__737__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_52);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__259__1_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__1_28,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__2_29);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__InstVar_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_6,
  MR_Word parse_tree__parse_tree_to_term__Context_7,
  MR_Word parse_tree__parse_tree_to_term__PredInstInfo_9);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_6,
  MR_Word parse_tree__parse_tree_to_term__Context_7,
  MR_Word parse_tree__parse_tree_to_term__PredInstInfo_9);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_5,
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__InstName_7);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_5,
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__Inst_7);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word * parse_tree__parse_tree_to_term__HeadVar__2_2);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_3(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_1,
  MR_Word parse_tree__parse_tree_to_term__Context_2,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_6,
  MR_Word parse_tree__parse_tree_to_term__Context_7,
  MR_Word parse_tree__parse_tree_to_term__BoundInst_8,
  MR_Word parse_tree__parse_tree_to_term__BoundInsts_9);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box parse_tree__parse_tree_to_term__closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg);

static void MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__ConsId_4,
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word * parse_tree__parse_tree_to_term__Term_6);

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_String parse_tree__parse_tree_to_term__SharedName_2);

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_String parse_tree__parse_tree_to_term__Name_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__PropagatedResult_5);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__TypeCtor_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__ContainsTypes_5);

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_2,
  MR_Word * parse_tree__parse_tree_to_term__Term_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_2,
  MR_Word * parse_tree__parse_tree_to_term__Term_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_2,
  MR_Word * parse_tree__parse_tree_to_term__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__Args_2,
  MR_Word * parse_tree__parse_tree_to_term__Term_3);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__Types_3,
  MR_Word * parse_tree__parse_tree_to_term__Terms_4);


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
    ((MR_Box) ((MR_String) ">>"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "free"))
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
    ((MR_Box) ((MR_String) "any_func"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "any_pred"))
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
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
  /* row 8 */   {     (MR_String) "any" },
  /* row 9 */   {     (MR_String) "unique_any" },
  /* row 10 */   {     (MR_String) "mostly_unique_any" },
  /* row 11 */   {     (MR_String) "clobbered_any" },
  /* row 12 */   {     (MR_String) "mostly_clobbered_any" },
  /* row 13 */   {     (MR_String) "det" },
  /* row 14 */   {     (MR_String) "semidet" },
  /* row 15 */   {     (MR_String) "multi" },
  /* row 16 */   {     (MR_String) "nondet" },
  /* row 17 */   {     (MR_String) "cc_multi" },
  /* row 18 */   {     (MR_String) "cc_nondet" },
  /* row 19 */   {     (MR_String) "erroneous" },
  /* row 20 */   {     (MR_String) "failure" },
  /* row 21 */   {     (MR_String) "det" },
  /* row 22 */   {     (MR_String) "semidet" },
  /* row 23 */   {     (MR_String) "multi" },
  /* row 24 */   {     (MR_String) "nondet" },
  /* row 25 */   {     (MR_String) "cc_multi" },
  /* row 26 */   {     (MR_String) "cc_nondet" },
  /* row 27 */   {     (MR_String) "erroneous" },
  /* row 28 */   {     (MR_String) "failure" },
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
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_62)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      parse_tree__parse_tree_to_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5)), ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_62)));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__721__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_70)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      parse_tree__parse_tree_to_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5)), ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_70)));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__737__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_52)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      parse_tree__parse_tree_to_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5)), ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_52)));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__259__1_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__1_28,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__2_29)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__3_30;
    MR_Word parse_tree__parse_tree_to_term__Var_33;
    MR_Word parse_tree__parse_tree_to_term__Var_34;
    MR_Word parse_tree__parse_tree_to_term__Var_35;
    MR_Word parse_tree__parse_tree_to_term__Var_36;
    MR_Word parse_tree__parse_tree_to_term__Var_37;

    {
      parse_tree__parse_tree_to_term__Var_36 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_35, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__LambdaHeadVar__1_28));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_35, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_36));
    }
    {
      parse_tree__parse_tree_to_term__Var_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Var_35);
    }
    {
      parse_tree__parse_tree_to_term__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_37, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__LambdaHeadVar__2_29));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_tree_to_term__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_33, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_34));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_33, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_37));
    }
    {
      parse_tree__parse_tree_to_term__LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__LambdaHeadVar__3_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[51]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__LambdaHeadVar__3_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_33));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__LambdaHeadVar__3_30, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
    }
    return parse_tree__parse_tree_to_term__LambdaHeadVar__3_30;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__InstVar_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_6;
    MR_Integer parse_tree__parse_tree_to_term__InstVarNum_7;
    MR_String parse_tree__parse_tree_to_term__InstVarNumStr_8;
    MR_Word parse_tree__parse_tree_to_term__Var_9;
    MR_String parse_tree__parse_tree_to_term__Var_10;

    {
      parse_tree__parse_tree_to_term__InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_tree_to_term__InstVar_5);
    }
    {
      parse_tree__parse_tree_to_term__InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_to_term__InstVarNum_7);
    }
    {
      parse_tree__parse_tree_to_term__Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", parse_tree__parse_tree_to_term__InstVarNumStr_8);
    }
    {
      parse_tree__parse_tree_to_term__Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Var_9, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_10));
    }
    {
      parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_9));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
    }
    return parse_tree__parse_tree_to_term__Term_6;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_4,
  MR_Word parse_tree__parse_tree_to_term__InstName_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3;
    MR_Word parse_tree__parse_tree_to_term__Var_6;

    {
      parse_tree__parse_tree_to_term__Var_6 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_4, parse_tree__parse_tree_to_term__Var_6, parse_tree__parse_tree_to_term__InstName_5);
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_4,
  MR_Word parse_tree__parse_tree_to_term__Inst_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3;
    MR_Word parse_tree__parse_tree_to_term__Var_6;

    {
      parse_tree__parse_tree_to_term__Var_6 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_4, parse_tree__parse_tree_to_term__Var_6, parse_tree__parse_tree_to_term__Inst_5);
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_4,
  MR_Word parse_tree__parse_tree_to_term__Mode_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3;
    MR_Word parse_tree__parse_tree_to_term__Var_6;

    {
      parse_tree__parse_tree_to_term__Var_6 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_4, parse_tree__parse_tree_to_term__Var_6, parse_tree__parse_tree_to_term__Mode_5);
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv2_Term_8;

    {
      parse_tree__parse_tree_to_term__conv2_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv2_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv1_Term_8;

    {
      parse_tree__parse_tree_to_term__conv1_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv1_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_6,
  MR_Word parse_tree__parse_tree_to_term__Context_7,
  MR_Word parse_tree__parse_tree_to_term__PredInstInfo_9)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_10;
    MR_Word parse_tree__parse_tree_to_term__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_to_term__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_to_term__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_to_term__ModesTerm_15;
    MR_Word parse_tree__parse_tree_to_term__Var_34;
    MR_Word parse_tree__parse_tree_to_term__Var_36;
    MR_Word parse_tree__parse_tree_to_term__Var_37;
    MR_String parse_tree__parse_tree_to_term__Var_52;
    MR_Word parse_tree__parse_tree_to_term__Var_55;
    MR_Word parse_tree__parse_tree_to_term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 2)));

    switch (parse_tree__parse_tree_to_term__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_48_48;
          MR_Word parse_tree__parse_tree_to_term__ArgModes_16;
          MR_Word parse_tree__parse_tree_to_term__RetMode_17;
          MR_Word parse_tree__parse_tree_to_term__ArgModesTerm_18;
          MR_Word parse_tree__parse_tree_to_term__Var_20;
          MR_Word parse_tree__parse_tree_to_term__Var_22;
          MR_Word parse_tree__parse_tree_to_term__Var_24;
          MR_Word parse_tree__parse_tree_to_term__Var_26;
          MR_Word parse_tree__parse_tree_to_term__Var_27;
          MR_Box parse_tree__parse_tree_to_term__conv0_RetMode_17;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, parse_tree__parse_tree_to_term__Modes_12, &parse_tree__parse_tree_to_term__ArgModes_16, &parse_tree__parse_tree_to_term__conv0_RetMode_17);
          }
          parse_tree__parse_tree_to_term__RetMode_17 = ((MR_Word) parse_tree__parse_tree_to_term__conv0_RetMode_17);
          {
            parse_tree__parse_tree_to_term__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__Var_20 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_22, parse_tree__parse_tree_to_term__ArgModes_16);
          }
          parse_tree__parse_tree_to_term__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[49], parse_tree__parse_tree_to_term__Var_20, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ArgModesTerm_18);
          }
          {
            parse_tree__parse_tree_to_term__Var_27 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_6, parse_tree__parse_tree_to_term__Context_7, parse_tree__parse_tree_to_term__RetMode_17);
          }
          {
            parse_tree__parse_tree_to_term__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_26, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_27));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_26));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[37], parse_tree__parse_tree_to_term__Var_24, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_to_term__Var_30;
          MR_Word parse_tree__parse_tree_to_term__Var_32;

          {
            parse_tree__parse_tree_to_term__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__Var_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_32, parse_tree__parse_tree_to_term__Modes_12);
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[50], parse_tree__parse_tree_to_term__Var_30, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
    }
    parse_tree__parse_tree_to_term__Var_52 = ((&parse_tree__parse_tree_to_term_vector_common_5[21 + parse_tree__parse_tree_to_term__Det_14]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
    {
      parse_tree__parse_tree_to_term__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_52));
    }
    {
      parse_tree__parse_tree_to_term__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_37, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_55));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_37, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
    }
    {
      parse_tree__parse_tree_to_term__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_36, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_37));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_tree_to_term__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_34, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ModesTerm_15));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_36));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[4], parse_tree__parse_tree_to_term__Var_34, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__Term_10);
    }
    return parse_tree__parse_tree_to_term__Term_10;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv2_Term_8;

    {
      parse_tree__parse_tree_to_term__conv2_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv2_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv1_Term_8;

    {
      parse_tree__parse_tree_to_term__conv1_Term_8 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv1_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_6,
  MR_Word parse_tree__parse_tree_to_term__Context_7,
  MR_Word parse_tree__parse_tree_to_term__PredInstInfo_9)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_10;
    MR_Word parse_tree__parse_tree_to_term__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_to_term__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_to_term__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_to_term__ModesTerm_15;
    MR_Word parse_tree__parse_tree_to_term__Var_34;
    MR_Word parse_tree__parse_tree_to_term__Var_36;
    MR_Word parse_tree__parse_tree_to_term__Var_37;
    MR_String parse_tree__parse_tree_to_term__Var_52;
    MR_Word parse_tree__parse_tree_to_term__Var_55;
    MR_Word parse_tree__parse_tree_to_term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 2)));

    switch (parse_tree__parse_tree_to_term__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_48_48;
          MR_Word parse_tree__parse_tree_to_term__ArgModes_16;
          MR_Word parse_tree__parse_tree_to_term__RetMode_17;
          MR_Word parse_tree__parse_tree_to_term__ArgModesTerm_18;
          MR_Word parse_tree__parse_tree_to_term__Var_20;
          MR_Word parse_tree__parse_tree_to_term__Var_22;
          MR_Word parse_tree__parse_tree_to_term__Var_24;
          MR_Word parse_tree__parse_tree_to_term__Var_26;
          MR_Word parse_tree__parse_tree_to_term__Var_27;
          MR_Box parse_tree__parse_tree_to_term__conv0_RetMode_17;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, parse_tree__parse_tree_to_term__Modes_12, &parse_tree__parse_tree_to_term__ArgModes_16, &parse_tree__parse_tree_to_term__conv0_RetMode_17);
          }
          parse_tree__parse_tree_to_term__RetMode_17 = ((MR_Word) parse_tree__parse_tree_to_term__conv0_RetMode_17);
          {
            parse_tree__parse_tree_to_term__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_22, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__Var_20 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_22, parse_tree__parse_tree_to_term__ArgModes_16);
          }
          parse_tree__parse_tree_to_term__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[36], parse_tree__parse_tree_to_term__Var_20, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ArgModesTerm_18);
          }
          {
            parse_tree__parse_tree_to_term__Var_27 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_6, parse_tree__parse_tree_to_term__Context_7, parse_tree__parse_tree_to_term__RetMode_17);
          }
          {
            parse_tree__parse_tree_to_term__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_26, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_27));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_26));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[37], parse_tree__parse_tree_to_term__Var_24, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_to_term__Var_30;
          MR_Word parse_tree__parse_tree_to_term__Var_32;

          {
            parse_tree__parse_tree_to_term__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_32, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__Var_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_32, parse_tree__parse_tree_to_term__Modes_12);
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[38], parse_tree__parse_tree_to_term__Var_30, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
    }
    parse_tree__parse_tree_to_term__Var_52 = ((&parse_tree__parse_tree_to_term_vector_common_5[13 + parse_tree__parse_tree_to_term__Det_14]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
    {
      parse_tree__parse_tree_to_term__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_52));
    }
    {
      parse_tree__parse_tree_to_term__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_37, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_55));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_37, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
    }
    {
      parse_tree__parse_tree_to_term__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_36, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_37));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_tree_to_term__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_34, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ModesTerm_15));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_36));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[4], parse_tree__parse_tree_to_term__Var_34, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__Term_10);
    }
    return parse_tree__parse_tree_to_term__Term_10;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv1_Term_8;

    {
      parse_tree__parse_tree_to_term__conv1_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv1_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_8;

    {
      parse_tree__parse_tree_to_term__conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_5,
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__InstName_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_to_term__succeeded;
        MR_Word parse_tree__parse_tree_to_term__Term_8;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_to_term__InstName_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_to_term__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_to_term__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_117;
              MR_Word parse_tree__parse_tree_to_term__Var_118;

              {
                parse_tree__parse_tree_to_term__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_118, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_118, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_118, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_118, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
              }
              {
                parse_tree__parse_tree_to_term__Var_117 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_118, parse_tree__parse_tree_to_term__Args_10);
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Name_9, parse_tree__parse_tree_to_term__Var_117, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_to_term__Liveness_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_to_term__Real_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__InstB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 3)));

              switch (parse_tree__parse_tree_to_term__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_tree_to_term__Var_102;
                    MR_Word parse_tree__parse_tree_to_term__Var_104;
                    MR_String parse_tree__parse_tree_to_term__Var_105;
                    MR_Word parse_tree__parse_tree_to_term__Var_106;
                    MR_Word parse_tree__parse_tree_to_term__Var_107;
                    MR_String parse_tree__parse_tree_to_term__Var_108;
                    MR_Word parse_tree__parse_tree_to_term__Var_109;
                    MR_Word parse_tree__parse_tree_to_term__Var_110;
                    MR_Word parse_tree__parse_tree_to_term__Var_111;
                    MR_Word parse_tree__parse_tree_to_term__Var_112;

                    {
                      parse_tree__parse_tree_to_term__Var_105 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(parse_tree__parse_tree_to_term__Liveness_11);
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_104 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_105);
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_108 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(parse_tree__parse_tree_to_term__Real_12);
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_107 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_108);
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_110 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstA_13);
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_112 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstB_14);
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_111, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_112));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_109, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_110));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_109, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_111));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_106, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_107));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_106, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_109));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_102, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_104));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_102, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_106));
                    }
                    {
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[48], parse_tree__parse_tree_to_term__Var_102, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "unify_inst");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_to_term__InstA_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_to_term__InstB_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));

              switch (parse_tree__parse_tree_to_term__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_tree_to_term__Var_92;
                    MR_Word parse_tree__parse_tree_to_term__Var_94;
                    MR_Word parse_tree__parse_tree_to_term__Var_95;
                    MR_Word parse_tree__parse_tree_to_term__Var_96;

                    {
                      parse_tree__parse_tree_to_term__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_94, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_94, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_94, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_5));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_94, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_96, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__InstB_120));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_95, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__InstA_119));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_95, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_96));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_94, parse_tree__parse_tree_to_term__Var_95);
                    }
                    {
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[43], parse_tree__parse_tree_to_term__Var_92, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "merge_inst");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_tree_to_term__SubInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_to_term__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word parse_tree__parse_tree_to_term__IsLive_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_to_term__Real_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                  switch (parse_tree__parse_tree_to_term__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_to_term__Var_74;
                        MR_Word parse_tree__parse_tree_to_term__Var_76;
                        MR_Word parse_tree__parse_tree_to_term__Var_77;
                        MR_Word parse_tree__parse_tree_to_term__Var_78;
                        MR_String parse_tree__parse_tree_to_term__Var_79;
                        MR_Word parse_tree__parse_tree_to_term__Var_81;
                        MR_Word parse_tree__parse_tree_to_term__Var_82;
                        MR_String parse_tree__parse_tree_to_term__Var_83;
                        MR_Word parse_tree__parse_tree_to_term__Var_84;
                        MR_Word parse_tree__parse_tree_to_term__Var_85;
                        MR_String parse_tree__parse_tree_to_term__Var_86;

                        {
                          parse_tree__parse_tree_to_term__Var_76 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_15);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_79 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_16, (MR_String) "shared");
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_78 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_79);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_83 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(parse_tree__parse_tree_to_term__IsLive_17);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_82 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_83);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_86 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(parse_tree__parse_tree_to_term__Real_121);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_85 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_86);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_84, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_85));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_81, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_82));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_81, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_84));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_77, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_78));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_77, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_81));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_74, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_76));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_74, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_77));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[42], parse_tree__parse_tree_to_term__Var_74, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "ground_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_tree_to_term__Real_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_to_term__SubInstName_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_to_term__Uniq_124 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word parse_tree__parse_tree_to_term__IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                  switch (parse_tree__parse_tree_to_term__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_to_term__Var_56;
                        MR_Word parse_tree__parse_tree_to_term__Var_58;
                        MR_Word parse_tree__parse_tree_to_term__Var_59;
                        MR_Word parse_tree__parse_tree_to_term__Var_60;
                        MR_String parse_tree__parse_tree_to_term__Var_61;
                        MR_Word parse_tree__parse_tree_to_term__Var_63;
                        MR_Word parse_tree__parse_tree_to_term__Var_64;
                        MR_String parse_tree__parse_tree_to_term__Var_65;
                        MR_Word parse_tree__parse_tree_to_term__Var_66;
                        MR_Word parse_tree__parse_tree_to_term__Var_67;
                        MR_String parse_tree__parse_tree_to_term__Var_68;

                        {
                          parse_tree__parse_tree_to_term__Var_58 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_123);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_61 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_124, (MR_String) "shared");
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_60 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_61);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_65 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(parse_tree__parse_tree_to_term__IsLive_125);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_64 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_65);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_68 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(parse_tree__parse_tree_to_term__Real_122);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_67 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_68);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_66, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_67));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_63, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_64));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_66));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_59, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_60));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_63));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_56, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_58));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_56, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_59));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[41], parse_tree__parse_tree_to_term__Var_56, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "any_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_tree_to_term__SubInstName_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_to_term__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_to_term__Var_48;
                        MR_Word parse_tree__parse_tree_to_term__Var_50;

                        {
                          parse_tree__parse_tree_to_term__Var_50 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_126);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_48, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_50));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[45], parse_tree__parse_tree_to_term__Var_48, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "shared_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__parse_tree_to_term__SubInstName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_to_term__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_to_term__Var_40;
                        MR_Word parse_tree__parse_tree_to_term__Var_42;

                        {
                          parse_tree__parse_tree_to_term__Var_42 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_127);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_40, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_42));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[44], parse_tree__parse_tree_to_term__Var_40, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "mostly_uniq_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word parse_tree__parse_tree_to_term__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_to_term__Uniq_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_to_term__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_150_150;
                        MR_Word parse_tree__parse_tree_to_term__Term0_19;
                        MR_Word parse_tree__parse_tree_to_term__Var_28;
                        MR_Word parse_tree__parse_tree_to_term__Var_30;
                        MR_String parse_tree__parse_tree_to_term__Var_31;
                        MR_Word parse_tree__parse_tree_to_term__Var_33;
                        MR_Word parse_tree__parse_tree_to_term__Var_34;

                        {
                          parse_tree__parse_tree_to_term__unparse_type_2_p_0(parse_tree__parse_tree_to_term__Type_18, &parse_tree__parse_tree_to_term__Term0_19);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_31 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_128, (MR_String) "shared");
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_30 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_31);
                        }
                        parse_tree__parse_tree_to_term__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          parse_tree__parse_tree_to_term__Var_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TypeCtorInfo_150_150, parse_tree__parse_tree_to_term__Term0_19);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_33, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_34));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_28, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_30));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_33));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_150_150, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[46], parse_tree__parse_tree_to_term__Var_28, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "function \140parse_tree.parse_tree_to_term.inst_name_to_term_with_context\'/3", (MR_String) "typed_ground");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__parse_tree_to_term__SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_to_term__Type_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstName_7, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_to_term__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_152_152;
                        MR_Word parse_tree__parse_tree_to_term__Var_21;
                        MR_Word parse_tree__parse_tree_to_term__Var_23;
                        MR_Word parse_tree__parse_tree_to_term__Var_24;
                        MR_Word parse_tree__parse_tree_to_term__Var_25;
                        MR_Word parse_tree__parse_tree_to_term__Term0_129;

                        {
                          parse_tree__parse_tree_to_term__unparse_type_2_p_0(parse_tree__parse_tree_to_term__Type_132, &parse_tree__parse_tree_to_term__Term0_129);
                        }
                        parse_tree__parse_tree_to_term__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          parse_tree__parse_tree_to_term__Var_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TypeCtorInfo_152_152, parse_tree__parse_tree_to_term__Term0_129);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_25 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_131);
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_25));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_21, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_23));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_24));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_152_152, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[47], parse_tree__parse_tree_to_term__Var_21, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word parse_tree__parse_tree_to_term__next_value_of_InstName_7 = parse_tree__parse_tree_to_term__SubInstName_131;

                          parse_tree__parse_tree_to_term__InstName_7 = parse_tree__parse_tree_to_term__next_value_of_InstName_7;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        return parse_tree__parse_tree_to_term__Term_8;
      }
      break;
    }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_3;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_LambdaHeadVar__3_30;

    {
      parse_tree__parse_tree_to_term__conv0_LambdaHeadVar__3_30 = parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__259__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_2));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_LambdaHeadVar__3_30));
    return parse_tree__parse_tree_to_term__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_5,
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__Inst_7)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_8;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_to_term__Inst_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__parse_tree_to_term__Inst_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                parse_tree__parse_tree_to_term__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[40]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, (MR_String) "not_reached");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_to_term__Term0_13;
          MR_Word parse_tree__parse_tree_to_term__Term1_14;
          MR_Word parse_tree__parse_tree_to_term__Var_55;

          {
            parse_tree__parse_tree_to_term__unparse_type_2_p_0(parse_tree__parse_tree_to_term__Type_12, &parse_tree__parse_tree_to_term__Term0_13);
          }
          {
            parse_tree__parse_tree_to_term__Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Term0_13);
          }
          {
            parse_tree__parse_tree_to_term__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term1_14));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[40]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_55));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_to_term__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_to_term__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));

          if ((parse_tree__parse_tree_to_term__HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String parse_tree__parse_tree_to_term__Var_58 = ((&parse_tree__parse_tree_to_term_vector_common_5[8 + parse_tree__parse_tree_to_term__Uniq_9]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
              MR_Word parse_tree__parse_tree_to_term__Var_78;

              {
                parse_tree__parse_tree_to_term__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_78, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_58));
              }
              {
                parse_tree__parse_tree_to_term__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_78));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
              }
            }
          else
            {
              MR_Word parse_tree__parse_tree_to_term__PredInstInfo_11 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__HOInstInfo_10), (MR_Integer) 1);

              {
                parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__PredInstInfo_11);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_to_term__InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 3)));
              MR_Word parse_tree__parse_tree_to_term__ArgTerms_17;
              MR_Word parse_tree__parse_tree_to_term__Var_50;
              MR_String parse_tree__parse_tree_to_term__Var_51;
              MR_Word parse_tree__parse_tree_to_term__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));

              switch (parse_tree__parse_tree_to_term__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_tree_to_term__Var_44;
                    MR_Word parse_tree__parse_tree_to_term__Var_45;
                    MR_Word parse_tree__parse_tree_to_term__Var_46;

                    {
                      parse_tree__parse_tree_to_term__Var_44 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstResults_15);
                    }
                    if ((parse_tree__parse_tree_to_term__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          parse_tree__parse_tree_to_term__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[34]));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_46, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_tree_to_term__BoundInst_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__BoundInsts_16, (MR_Integer) 0)));
                        MR_Word parse_tree__parse_tree_to_term__BoundInsts_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__BoundInsts_16, (MR_Integer) 1)));

                        {
                          parse_tree__parse_tree_to_term__Var_46 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__BoundInst_87, parse_tree__parse_tree_to_term__BoundInsts_88);
                        }
                      }
                    {
                      parse_tree__parse_tree_to_term__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_45, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_46));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_44));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_45));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__parse_tree_to_term__Var_48;

                    {
                      parse_tree__parse_tree_to_term__Var_48 = parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__BoundInsts_16);
                    }
                    {
                      parse_tree__parse_tree_to_term__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_48));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              switch (parse_tree__parse_tree_to_term__Uniq_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  parse_tree__parse_tree_to_term__Var_51 = (MR_String) "clobbered";
                  break;
                case (MR_Integer) 4:
                  parse_tree__parse_tree_to_term__Var_51 = (MR_String) "mostly_clobbered";
                  break;
                case (MR_Integer) 2:
                  parse_tree__parse_tree_to_term__Var_51 = (MR_String) "mostly_unique";
                  break;
                case (MR_Integer) 0:
                  parse_tree__parse_tree_to_term__Var_51 = (MR_String) "bound";
                  break;
                case (MR_Integer) 1:
                  parse_tree__parse_tree_to_term__Var_51 = (MR_String) "unique";
                  break;
              }
              {
                parse_tree__parse_tree_to_term__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_50, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_51));
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Var_50, parse_tree__parse_tree_to_term__ArgTerms_17, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_to_term__Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 2)));

              if ((parse_tree__parse_tree_to_term__HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String parse_tree__parse_tree_to_term__Var_42;

                  {
                    parse_tree__parse_tree_to_term__Var_42 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_62, (MR_String) "ground");
                  }
                  {
                    parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_42);
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_tree_to_term__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__HOInstInfo_63), (MR_Integer) 1);

                  {
                    parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__PredInstInfo_60);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_to_term__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_40;
              MR_Word parse_tree__parse_tree_to_term__Var_41;

              {
                parse_tree__parse_tree_to_term__Var_41 = mercury__term__context_init_0_f_0();
              }
              {
                parse_tree__parse_tree_to_term__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_40, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_18));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_40, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_41));
              }
              {
                parse_tree__parse_tree_to_term__Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Var_40);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_tree_to_term__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__Var_27;
              MR_Word parse_tree__parse_tree_to_term__Var_39;
              MR_Box parse_tree__parse_tree_to_term__conv1_Term_8;

              {
                parse_tree__parse_tree_to_term__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_27, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_27, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_27, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
              }
              {
                parse_tree__parse_tree_to_term__Var_39 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInst_20);
              }
              {
                parse_tree__parse_tree_to_term__conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_27, parse_tree__parse_tree_to_term__Vars_19, ((MR_Box) (parse_tree__parse_tree_to_term__Var_39)));
              }
              parse_tree__parse_tree_to_term__Term_8 = ((MR_Word) parse_tree__parse_tree_to_term__conv1_Term_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__parse_tree_to_term__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstName_24);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__parse_tree_to_term__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__Var_26;

              {
                parse_tree__parse_tree_to_term__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_26, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_22));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_26, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Args_23));
              }
              {
                parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__Var_26);
              }
            }
            break;
        }
        break;
    }
    return parse_tree__parse_tree_to_term__Term_8;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word * parse_tree__parse_tree_to_term__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    if ((parse_tree__parse_tree_to_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_tree_to_term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_tree_to_term__Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__Modes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__Term_5;
        MR_Word parse_tree__parse_tree_to_term__Terms_6;
        MR_Word parse_tree__parse_tree_to_term__Term0_7;
        MR_Word parse_tree__parse_tree_to_term__Var_13;

        {
          parse_tree__parse_tree_to_term__Var_13 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_to_term__Term0_7 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0((MR_Integer) 0, parse_tree__parse_tree_to_term__Var_13, parse_tree__parse_tree_to_term__Mode_3);
        }
        {
          mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__Term0_7, &parse_tree__parse_tree_to_term__Term_5);
        }
        {
          parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(parse_tree__parse_tree_to_term__Modes_4, &parse_tree__parse_tree_to_term__Terms_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_tree_to_term__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Terms_6));
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_8;

    {
      parse_tree__parse_tree_to_term__conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_5,
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__Mode_7)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_8;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_to_term__Mode_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_to_term__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Mode_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Mode_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__Var_17;
        MR_Word parse_tree__parse_tree_to_term___Uniq_11;
        MR_Word parse_tree__parse_tree_to_term__Var_12;

        parse_tree__parse_tree_to_term__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_to_term__InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (parse_tree__parse_tree_to_term__succeeded)
          {
            parse_tree__parse_tree_to_term___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstA_9, (MR_Integer) 1)));
            parse_tree__parse_tree_to_term__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstA_9, (MR_Integer) 2)));
            parse_tree__parse_tree_to_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_to_term__Var_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_to_term__succeeded)
              {
                parse_tree__parse_tree_to_term__Var_12 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__Var_17), (MR_Integer) 1);
                {
                  parse_tree__parse_tree_to_term__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__parse_tree_to_term__InstB_10, parse_tree__parse_tree_to_term__InstA_9);
                }
              }
          }
        if (parse_tree__parse_tree_to_term__succeeded)
          {
            parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstA_9);
          }
        else
          {
            MR_Word parse_tree__parse_tree_to_term__Var_19;
            MR_Word parse_tree__parse_tree_to_term__Var_21;
            MR_Word parse_tree__parse_tree_to_term__Var_22;
            MR_Word parse_tree__parse_tree_to_term__Var_23;

            {
              parse_tree__parse_tree_to_term__Var_21 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstA_9);
            }
            {
              parse_tree__parse_tree_to_term__Var_23 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstB_10);
            }
            {
              parse_tree__parse_tree_to_term__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_22, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_23));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_tree_to_term__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_19, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_21));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_22));
            }
            {
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[39], parse_tree__parse_tree_to_term__Var_19, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Mode_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Mode_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__Var_15;
        MR_Word parse_tree__parse_tree_to_term__Var_16;

        {
          parse_tree__parse_tree_to_term__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_16, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_5));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_16, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
        }
        {
          parse_tree__parse_tree_to_term__Var_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_16, parse_tree__parse_tree_to_term__Args_14);
        }
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Name_13, parse_tree__parse_tree_to_term__Var_15, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
        }
      }
    return parse_tree__parse_tree_to_term__Term_8;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_3(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv2_Term_4;

    {
      parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1), &parse_tree__parse_tree_to_term__conv2_Term_4);
    }
    *parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv2_Term_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv1_Term_4;

    {
      parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1), &parse_tree__parse_tree_to_term__conv1_Term_4);
    }
    *parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv1_Term_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_4;

    {
      parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1), &parse_tree__parse_tree_to_term__conv0_Term_4);
    }
    *parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_4));
  }
}

void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__Type_3,
  MR_Word * parse_tree__parse_tree_to_term__Term_4)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Context_5;

    {
      parse_tree__parse_tree_to_term__Context_5 = mercury__term__context_init_0_f_0();
    }
    switch (MR_tag((MR_Word) parse_tree__parse_tree_to_term__Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_to_term__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_to_term__Var_8;
          MR_Word parse_tree__parse_tree_to_term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));

          {
            parse_tree__parse_tree_to_term__Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TVar_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_tree_to_term__Term_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_to_term__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));
          MR_Word parse_tree__parse_tree_to_term__ArgTerms_12;
          MR_Word parse_tree__parse_tree_to_term__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));

          {
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[2], parse_tree__parse_tree_to_term__Args_10, &parse_tree__parse_tree_to_term__ArgTerms_12);
          }
          {
            parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(parse_tree__parse_tree_to_term__SymName_9, parse_tree__parse_tree_to_term__ArgTerms_12, parse_tree__parse_tree_to_term__Term_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_to_term__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 0)));
          MR_String parse_tree__parse_tree_to_term__Name_14;
          MR_Word parse_tree__parse_tree_to_term__Var_55;

          {
            parse_tree__prog_data__builtin_type_to_string_2_p_0(parse_tree__parse_tree_to_term__BuiltinType_13, &parse_tree__parse_tree_to_term__Name_14);
          }
          {
            parse_tree__parse_tree_to_term__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_55));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_to_term__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__ArgTerms_62;
              MR_Word parse_tree__parse_tree_to_term__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));

              {
                parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(parse_tree__parse_tree_to_term__Args_61, &parse_tree__parse_tree_to_term__ArgTerms_62);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[29]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_62));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_to_term__PorF_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__PredArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 3)));
              MR_Word parse_tree__parse_tree_to_term__Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 4)));
              MR_Word parse_tree__parse_tree_to_term__PredArgTypeTerms_20;
              MR_Word parse_tree__parse_tree_to_term__PredArgTerms_26;
              MR_Word parse_tree__parse_tree_to_term__Term2_28;
              MR_Word parse_tree__parse_tree_to_term__Term3_31;

              {
                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[3], parse_tree__parse_tree_to_term__PredArgTypes_16, &parse_tree__parse_tree_to_term__PredArgTypeTerms_20);
              }
              if ((parse_tree__parse_tree_to_term__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__parse_tree_to_term__PredArgTerms_26 = parse_tree__parse_tree_to_term__PredArgTypeTerms_20;
              else
                {
                  MR_Word parse_tree__parse_tree_to_term__PredArgModes_22;
                  MR_Word parse_tree__parse_tree_to_term__PredArgModeTerms_25;
                  MR_Word parse_tree__parse_tree_to_term__Var_45 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__HOInstInfo_17), (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_to_term__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_45, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_tree_to_term__Var_23;
                  MR_Word parse_tree__parse_tree_to_term__Var_24;

                  parse_tree__parse_tree_to_term__PredArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_45, (MR_Integer) 1)));
                  parse_tree__parse_tree_to_term__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_45, (MR_Integer) 2)));
                  parse_tree__parse_tree_to_term__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_45, (MR_Integer) 3)));
                  {
                    parse_tree__parse_tree_to_term__unparse_mode_list_2_p_0(parse_tree__parse_tree_to_term__PredArgModes_22, &parse_tree__parse_tree_to_term__PredArgModeTerms_25);
                  }
                  {
                    parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(parse_tree__parse_tree_to_term__PredArgTypeTerms_20, parse_tree__parse_tree_to_term__PredArgModeTerms_25, &parse_tree__parse_tree_to_term__PredArgTerms_26);
                  }
                }
              switch (parse_tree__parse_tree_to_term__PorF_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_tree_to_term__RetTerm_29;
                    MR_Word parse_tree__parse_tree_to_term__Term1_30;
                    MR_Word parse_tree__parse_tree_to_term__Var_50;
                    MR_Word parse_tree__parse_tree_to_term__Var_51;
                    MR_Word parse_tree__parse_tree_to_term__ArgTerms_57;
                    MR_Box parse_tree__parse_tree_to_term__conv3_RetTerm_29;

                    {
                      mercury__list__det_split_last_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], parse_tree__parse_tree_to_term__PredArgTerms_26, &parse_tree__parse_tree_to_term__ArgTerms_57, &parse_tree__parse_tree_to_term__conv3_RetTerm_29);
                    }
                    parse_tree__parse_tree_to_term__RetTerm_29 = ((MR_Word) parse_tree__parse_tree_to_term__conv3_RetTerm_29);
                    {
                      parse_tree__parse_tree_to_term__Term1_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term1_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[36]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term1_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_57));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term1_30, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_51, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__RetTerm_29));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_50, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term1_30));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_51));
                    }
                    {
                      parse_tree__parse_tree_to_term__Term2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[37]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_50));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      parse_tree__parse_tree_to_term__Term2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[38]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__PredArgTerms_26));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
                    }
                  }
                  break;
              }
              {
                parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(parse_tree__parse_tree_to_term__Purity_18, parse_tree__parse_tree_to_term__Term2_28, &parse_tree__parse_tree_to_term__Term3_31);
              }
              {
                parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(parse_tree__parse_tree_to_term__HOInstInfo_17, parse_tree__parse_tree_to_term__Term3_31, parse_tree__parse_tree_to_term__Term_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_to_term__Var_41;
              MR_Word parse_tree__parse_tree_to_term__Var_42;
              MR_Word parse_tree__parse_tree_to_term__TVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_64;
              MR_Word parse_tree__parse_tree_to_term__Args_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__ArgTerms_66;
              MR_Word parse_tree__parse_tree_to_term__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 3)));

              {
                parse_tree__parse_tree_to_term__Var_64 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TVar_63);
              }
              {
                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[1], parse_tree__parse_tree_to_term__Args_65, &parse_tree__parse_tree_to_term__ArgTerms_66);
              }
              {
                parse_tree__parse_tree_to_term__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_42, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_64));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
              }
              {
                parse_tree__parse_tree_to_term__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_41, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_42));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[35]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_41));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
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
  MR_Word parse_tree__parse_tree_to_term__Lang_1,
  MR_Word parse_tree__parse_tree_to_term__Context_2,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__HeadVar__4_4;

    if ((parse_tree__parse_tree_to_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__parse_tree_to_term__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[34]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_2));
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__3_3, (MR_Integer) 1)));

        {
          parse_tree__parse_tree_to_term__HeadVar__4_4 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(parse_tree__parse_tree_to_term__Lang_1, parse_tree__parse_tree_to_term__Context_2, parse_tree__parse_tree_to_term__BoundInst_12, parse_tree__parse_tree_to_term__BoundInsts_13);
        }
      }
    return parse_tree__parse_tree_to_term__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_8;

    {
      parse_tree__parse_tree_to_term__conv0_Term_8 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_8));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_6,
  MR_Word parse_tree__parse_tree_to_term__Context_7,
  MR_Word parse_tree__parse_tree_to_term__BoundInst_8,
  MR_Word parse_tree__parse_tree_to_term__BoundInsts_9)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_10;
    MR_Word parse_tree__parse_tree_to_term__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__BoundInst_8, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_to_term__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__BoundInst_8, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_to_term__ArgTerms_13;
    MR_Word parse_tree__parse_tree_to_term__FirstTerm_14;
    MR_Word parse_tree__parse_tree_to_term__Var_18;

    {
      parse_tree__parse_tree_to_term__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_18, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_18, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_18, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
    }
    {
      parse_tree__parse_tree_to_term__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_18, parse_tree__parse_tree_to_term__Args_12);
    }
    {
      parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(parse_tree__parse_tree_to_term__ConsId_11, parse_tree__parse_tree_to_term__ArgTerms_13, &parse_tree__parse_tree_to_term__FirstTerm_14);
    }
    if ((parse_tree__parse_tree_to_term__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_to_term__Term_10 = parse_tree__parse_tree_to_term__FirstTerm_14;
    else
      {
        MR_Word parse_tree__parse_tree_to_term__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__BoundInsts_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__BoundInsts_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__SecondTerm_17;
        MR_Word parse_tree__parse_tree_to_term__Var_20;
        MR_Word parse_tree__parse_tree_to_term__Var_22;

        {
          parse_tree__parse_tree_to_term__SecondTerm_17 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(parse_tree__parse_tree_to_term__Lang_6, parse_tree__parse_tree_to_term__Context_7, parse_tree__parse_tree_to_term__HeadBoundInst_15, parse_tree__parse_tree_to_term__TailBoundInsts_16);
        }
        {
          parse_tree__parse_tree_to_term__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_22, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SecondTerm_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_20, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__FirstTerm_14));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_20, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_22));
        }
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[33], parse_tree__parse_tree_to_term__Var_20, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__Term_10);
        }
      }
    return parse_tree__parse_tree_to_term__Term_10;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box parse_tree__parse_tree_to_term__closure_arg)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;

    {
      parse_tree__parse_tree_to_term__succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__729__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box parse_tree__parse_tree_to_term__closure_arg)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;

    {
      parse_tree__parse_tree_to_term__succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__721__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;

    {
      parse_tree__parse_tree_to_term__succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__737__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__ConsId_4,
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word * parse_tree__parse_tree_to_term__Term_6)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_to_term__ConsId_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_to_term__Context_135;

          {
            mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_135);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[31])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_135));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__TypeCtor_32 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__ConsId_4), (MR_Integer) 1);
          MR_String parse_tree__parse_tree_to_term__Var_79;
          MR_Word parse_tree__parse_tree_to_term__Var_83;
          MR_Word parse_tree__parse_tree_to_term__Context_131;
          MR_String parse_tree__parse_tree_to_term__FunctorName_132;
          MR_Word parse_tree__parse_tree_to_term__TypeCtorName_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__TypeCtor_32, (MR_Integer) 0)));
          MR_Integer parse_tree__parse_tree_to_term__Arity_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__TypeCtor_32, (MR_Integer) 1)));
          MR_String parse_tree__parse_tree_to_term__Var_168;
          MR_String parse_tree__parse_tree_to_term__Var_176;
          MR_String parse_tree__parse_tree_to_term__Var_177;

          {
            mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_131);
          }
          {
            parse_tree__parse_tree_to_term__Var_79 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_to_term__TypeCtorName_133);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[7], parse_tree__parse_tree_to_term__Arity_134, &parse_tree__parse_tree_to_term__Var_168);
          }
          {
            parse_tree__parse_tree_to_term__Var_176 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_to_term__Var_168);
          }
          {
            parse_tree__parse_tree_to_term__Var_177 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__Var_79, parse_tree__parse_tree_to_term__Var_176);
          }
          {
            parse_tree__parse_tree_to_term__FunctorName_132 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", parse_tree__parse_tree_to_term__Var_177);
          }
          {
            parse_tree__parse_tree_to_term__Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Var_83, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__FunctorName_132));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_83));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_131));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_to_term__Context_145;

          {
            mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_145);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[28])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_145));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_147;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_147);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[27])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_147));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_149;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_149);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[25])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_149));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_to_term__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Integer parse_tree__parse_tree_to_term___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 3)));

              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__SymName_7, parse_tree__parse_tree_to_term__ArgTerms_5, parse_tree__parse_tree_to_term__Term_6);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[29], parse_tree__parse_tree_to_term__ArgTerms_5, parse_tree__parse_tree_to_term__Term_6);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_12;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_12);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[24])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_12));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__parse_tree_to_term__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_113;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_113);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Int_14, parse_tree__parse_tree_to_term__Context_113);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned parse_tree__parse_tree_to_term__UInt_15 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_114;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_114);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__uint_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__UInt_15, parse_tree__parse_tree_to_term__Context_114);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer parse_tree__parse_tree_to_term__Int8_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_115;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_115);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Int8_16, parse_tree__parse_tree_to_term__Context_115);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer parse_tree__parse_tree_to_term__UInt8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_116;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_116);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__UInt8_17, parse_tree__parse_tree_to_term__Context_116);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer parse_tree__parse_tree_to_term__Int16_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_117;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_117);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Int16_18, parse_tree__parse_tree_to_term__Context_117);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer parse_tree__parse_tree_to_term__UInt16_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_118;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_118);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__UInt16_19, parse_tree__parse_tree_to_term__Context_118);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer parse_tree__parse_tree_to_term__Int32_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_119;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_119);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Int32_20, parse_tree__parse_tree_to_term__Context_119);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer parse_tree__parse_tree_to_term__UInt32_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Context_120;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_120);
              }
              {
                *parse_tree__parse_tree_to_term__Term_6 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__UInt32_21, parse_tree__parse_tree_to_term__Context_120);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Float parse_tree__parse_tree_to_term__Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_105;
              MR_Word parse_tree__parse_tree_to_term__Context_121;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_121);
              }
              {
                parse_tree__parse_tree_to_term__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Var_105, 1) = MR_box_float(parse_tree__parse_tree_to_term__Float_22);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_105));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_121));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Char parse_tree__parse_tree_to_term__Char_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_String parse_tree__parse_tree_to_term__Var_101;
              MR_Word parse_tree__parse_tree_to_term__SymName_123;

              {
                parse_tree__parse_tree_to_term__Var_101 = mercury__string__from_char_1_f_0(parse_tree__parse_tree_to_term__Char_24);
              }
              {
                parse_tree__parse_tree_to_term__SymName_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SymName_123, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_101));
              }
              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__SymName_123, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_to_term__Term_6);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String parse_tree__parse_tree_to_term__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_103;
              MR_Word parse_tree__parse_tree_to_term__Context_122;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_122);
              }
              {
                parse_tree__parse_tree_to_term__Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Var_103, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__String_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_103));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_122));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word parse_tree__parse_tree_to_term__Var_99;
              MR_Word parse_tree__parse_tree_to_term__Context_124;
              MR_String parse_tree__parse_tree_to_term__FunctorName_125;
              MR_String parse_tree__parse_tree_to_term__String_126 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_124);
              }
              {
                parse_tree__parse_tree_to_term__FunctorName_125 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", parse_tree__parse_tree_to_term__String_126);
              }
              {
                parse_tree__parse_tree_to_term__Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Var_99, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__FunctorName_125));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_99));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_124));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word parse_tree__parse_tree_to_term__ModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_String parse_tree__parse_tree_to_term__TypeCtorName_26 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 2)));
              MR_Integer parse_tree__parse_tree_to_term__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 3)));
              MR_String parse_tree__parse_tree_to_term__Var_90;
              MR_Word parse_tree__parse_tree_to_term__Var_96;
              MR_Word parse_tree__parse_tree_to_term__Context_127;
              MR_String parse_tree__parse_tree_to_term__FunctorName_128;
              MR_String parse_tree__parse_tree_to_term__Var_179;
              MR_String parse_tree__parse_tree_to_term__Var_187;
              MR_String parse_tree__parse_tree_to_term__Var_188;
              MR_String parse_tree__parse_tree_to_term__Var_190;
              MR_String parse_tree__parse_tree_to_term__Var_191;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_127);
              }
              {
                parse_tree__parse_tree_to_term__Var_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_to_term__ModuleName_25);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[7], parse_tree__parse_tree_to_term__Arity_27, &parse_tree__parse_tree_to_term__Var_179);
              }
              {
                parse_tree__parse_tree_to_term__Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_to_term__Var_179);
              }
              {
                parse_tree__parse_tree_to_term__Var_188 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__TypeCtorName_26, parse_tree__parse_tree_to_term__Var_187);
              }
              {
                parse_tree__parse_tree_to_term__Var_190 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__parse_tree_to_term__Var_188);
              }
              {
                parse_tree__parse_tree_to_term__Var_191 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__Var_90, parse_tree__parse_tree_to_term__Var_190);
              }
              {
                parse_tree__parse_tree_to_term__FunctorName_128 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", parse_tree__parse_tree_to_term__Var_191);
              }
              {
                parse_tree__parse_tree_to_term__Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__parse_tree_to_term__Var_96, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__FunctorName_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_96));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_127));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_129;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_129);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[23])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_129));
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Integer parse_tree__parse_tree_to_term__TIConstNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Arg_34;
              MR_Word parse_tree__parse_tree_to_term__Var_66;
              MR_Word parse_tree__parse_tree_to_term__Var_72;
              MR_Word parse_tree__parse_tree_to_term__Context_137;

              {
                parse_tree__parse_tree_to_term__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_66, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(parse_tree__parse_tree_to_term__Var_66, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
              }
              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_137);
              }
              {
                parse_tree__parse_tree_to_term__Arg_34 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__TIConstNum_33, parse_tree__parse_tree_to_term__Context_137);
              }
              {
                parse_tree__parse_tree_to_term__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_72, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Arg_34));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[30])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_72));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_137));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer parse_tree__parse_tree_to_term__TCIConstNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_58;
              MR_Word parse_tree__parse_tree_to_term__Var_64;
              MR_Word parse_tree__parse_tree_to_term__Context_139;
              MR_Word parse_tree__parse_tree_to_term__Arg_141;

              {
                parse_tree__parse_tree_to_term__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_58, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(parse_tree__parse_tree_to_term__Var_58, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
              }
              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_139);
              }
              {
                parse_tree__parse_tree_to_term__Arg_141 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__TCIConstNum_35, parse_tree__parse_tree_to_term__Context_139);
              }
              {
                parse_tree__parse_tree_to_term__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_64, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Arg_141));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[32])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_64));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_139));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word parse_tree__parse_tree_to_term__SubConsId_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__SubArg_37;
              MR_Word parse_tree__parse_tree_to_term__NumArg_38;
              MR_Word parse_tree__parse_tree_to_term__Var_48;
              MR_Word parse_tree__parse_tree_to_term__Var_55;
              MR_Word parse_tree__parse_tree_to_term__Var_56;
              MR_Word parse_tree__parse_tree_to_term__Context_142;
              MR_Integer parse_tree__parse_tree_to_term__TCIConstNum_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_to_term__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_48, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_48, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_48, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(parse_tree__parse_tree_to_term__Var_48, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
              }
              {
                parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(parse_tree__parse_tree_to_term__SubConsId_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_tree_to_term__SubArg_37);
              }
              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_142);
              }
              {
                parse_tree__parse_tree_to_term__NumArg_38 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__TCIConstNum_144, parse_tree__parse_tree_to_term__Context_142);
              }
              {
                parse_tree__parse_tree_to_term__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_56, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubArg_37));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_tree_to_term__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__NumArg_38));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_56));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_tree_to_term_scalar_common_4[26])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_55));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_142));
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
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_String parse_tree__parse_tree_to_term__SharedName_2)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_String parse_tree__parse_tree_to_term__HeadVar__3_3;

    switch (parse_tree__parse_tree_to_term__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_String) "clobbered";
        break;
      case (MR_Integer) 4:
        parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_String) "mostly_clobbered";
        break;
      case (MR_Integer) 2:
        parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_String) "mostly_unique";
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__SharedName_2;
        break;
      case (MR_Integer) 1:
        parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_String) "unique";
        break;
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_String parse_tree__parse_tree_to_term__HeadVar__2_2;

    switch (parse_tree__parse_tree_to_term__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__parse_tree_to_term__HeadVar__2_2 = (MR_String) "fake";
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_to_term__HeadVar__2_2 = (MR_String) "real";
        break;
    }
    return parse_tree__parse_tree_to_term__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_String parse_tree__parse_tree_to_term__HeadVar__2_2;

    switch (parse_tree__parse_tree_to_term__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__parse_tree_to_term__HeadVar__2_2 = (MR_String) "dead";
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_to_term__HeadVar__2_2 = (MR_String) "live";
        break;
    }
    return parse_tree__parse_tree_to_term__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_String parse_tree__parse_tree_to_term__Name_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3;
    MR_Word parse_tree__parse_tree_to_term__Var_6;

    {
      parse_tree__parse_tree_to_term__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_6, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_5));
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__3_3, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_6;

    {
      parse_tree__parse_tree_to_term__conv0_Term_6 = parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_6));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__InstResults_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_6;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_to_term__InstResults_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__parse_tree_to_term__InstResults_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[22]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstResults_5, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_to_term__AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstResults_5, (MR_Integer) 1)));
          MR_Word parse_tree__parse_tree_to_term__InstNamesResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstResults_5, (MR_Integer) 2)));
          MR_Word parse_tree__parse_tree_to_term__InstVarsResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstResults_5, (MR_Integer) 3)));
          MR_Word parse_tree__parse_tree_to_term__TypeResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstResults_5, (MR_Integer) 4)));
          MR_Word parse_tree__parse_tree_to_term__PropagatedResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstResults_5, (MR_Integer) 5)));
          MR_Word parse_tree__parse_tree_to_term__SubTerm1_13;
          MR_Word parse_tree__parse_tree_to_term__SubTerm2_14;
          MR_Word parse_tree__parse_tree_to_term__SubTerm3_15;
          MR_Word parse_tree__parse_tree_to_term__SubTerm4_16;
          MR_Word parse_tree__parse_tree_to_term__SubTerm5_17;
          MR_Word parse_tree__parse_tree_to_term__SubTerm6_18;
          MR_Word parse_tree__parse_tree_to_term__Var_27;
          MR_Word parse_tree__parse_tree_to_term__Var_28;
          MR_Word parse_tree__parse_tree_to_term__Var_29;
          MR_Word parse_tree__parse_tree_to_term__Var_30;
          MR_Word parse_tree__parse_tree_to_term__Var_31;
          MR_Word parse_tree__parse_tree_to_term__Var_32;

          switch (parse_tree__parse_tree_to_term__GroundnessResult_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[11]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[12]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[13]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
          }
          switch (parse_tree__parse_tree_to_term__AnyResult_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[14]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[15]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[16]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
          }
          if ((parse_tree__parse_tree_to_term__InstNamesResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                parse_tree__parse_tree_to_term__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[17]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          else
            {
              MR_Word parse_tree__parse_tree_to_term__InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstNamesResult_9, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_to_term__NumInstNames_62;
              MR_Word parse_tree__parse_tree_to_term__CountTerm_63;
              MR_Word parse_tree__parse_tree_to_term__Var_66;

              {
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, parse_tree__parse_tree_to_term__InstNameSet_61, &parse_tree__parse_tree_to_term__NumInstNames_62);
              }
              {
                parse_tree__parse_tree_to_term__CountTerm_63 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__NumInstNames_62, parse_tree__parse_tree_to_term__Context_4);
              }
              {
                parse_tree__parse_tree_to_term__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_66, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__CountTerm_63));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_tree_to_term__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[18]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_66));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          if ((parse_tree__parse_tree_to_term__InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                parse_tree__parse_tree_to_term__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[19]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          else
            {
              MR_Word parse_tree__parse_tree_to_term__TypeInfo_16_85 = (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[2];
              MR_Word parse_tree__parse_tree_to_term__InstVarSet_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstVarsResult_10, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_to_term__InstVars_77;
              MR_Word parse_tree__parse_tree_to_term__InstVarTerms_78;
              MR_Word parse_tree__parse_tree_to_term__Var_79;

              {
                mercury__set__to_sorted_list_2_p_0(parse_tree__parse_tree_to_term__TypeInfo_16_85, parse_tree__parse_tree_to_term__InstVarSet_76, &parse_tree__parse_tree_to_term__InstVars_77);
              }
              {
                parse_tree__parse_tree_to_term__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_79, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_79, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_79, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
              {
                parse_tree__parse_tree_to_term__InstVarTerms_78 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeInfo_16_85, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_79, parse_tree__parse_tree_to_term__InstVars_77);
              }
              {
                parse_tree__parse_tree_to_term__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[20]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__InstVarTerms_78));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          {
            parse_tree__parse_tree_to_term__SubTerm5_17 = parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(parse_tree__parse_tree_to_term__Context_4, parse_tree__parse_tree_to_term__TypeResult_11);
          }
          {
            parse_tree__parse_tree_to_term__SubTerm6_18 = parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(parse_tree__parse_tree_to_term__Context_4, parse_tree__parse_tree_to_term__PropagatedResult_12);
          }
          {
            parse_tree__parse_tree_to_term__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_32, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm6_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_31, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm5_17));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_31, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_32));
          }
          {
            parse_tree__parse_tree_to_term__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_30, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm4_16));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_31));
          }
          {
            parse_tree__parse_tree_to_term__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_29, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm3_15));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_29, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_30));
          }
          {
            parse_tree__parse_tree_to_term__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_28, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm2_14));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_29));
          }
          {
            parse_tree__parse_tree_to_term__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_27, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm1_13));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_27, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_28));
          }
          {
            parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[21]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_27));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
          }
        }
        break;
    }
    return parse_tree__parse_tree_to_term__Term_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__PropagatedResult_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_6;

    if ((parse_tree__parse_tree_to_term__PropagatedResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[8]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__TypeCtor_7 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__PropagatedResult_5), (MR_Integer) 1);
        MR_Word parse_tree__parse_tree_to_term__Var_10;
        MR_Word parse_tree__parse_tree_to_term__Var_11;

        {
          parse_tree__parse_tree_to_term__Var_11 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(parse_tree__parse_tree_to_term__Context_4, parse_tree__parse_tree_to_term__TypeCtor_7);
        }
        {
          parse_tree__parse_tree_to_term__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_10, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_11));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[9]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
      }
    return parse_tree__parse_tree_to_term__Term_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__TypeCtor_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_6;
    MR_Word parse_tree__parse_tree_to_term__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__TypeCtor_5, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_to_term__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__TypeCtor_5, (MR_Integer) 1)));
    MR_String parse_tree__parse_tree_to_term__ConsName_9;
    MR_String parse_tree__parse_tree_to_term__Var_13;
    MR_Word parse_tree__parse_tree_to_term__Var_17;
    MR_String parse_tree__parse_tree_to_term__Var_19;
    MR_String parse_tree__parse_tree_to_term__Var_27;

    {
      parse_tree__parse_tree_to_term__Var_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_to_term__SymName_7);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_4[7], parse_tree__parse_tree_to_term__Arity_8, &parse_tree__parse_tree_to_term__Var_19);
    }
    {
      parse_tree__parse_tree_to_term__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_to_term__Var_19);
    }
    {
      parse_tree__parse_tree_to_term__ConsName_9 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__Var_13, parse_tree__parse_tree_to_term__Var_27);
    }
    {
      parse_tree__parse_tree_to_term__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ConsName_9));
    }
    {
      parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_17));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
    }
    return parse_tree__parse_tree_to_term__Term_6;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_to_term__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_6;

    {
      parse_tree__parse_tree_to_term__conv0_Term_6 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1));
    }
    parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_6));
    return parse_tree__parse_tree_to_term__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__ContainsTypes_5)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__Term_6;

    if ((parse_tree__parse_tree_to_term__ContainsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[5]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
        MR_Word parse_tree__parse_tree_to_term__TypeCtorSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ContainsTypes_5, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__TypeCtors_8;
        MR_Word parse_tree__parse_tree_to_term__TypeCtorTerms_9;
        MR_Word parse_tree__parse_tree_to_term__Var_10;

        {
          mercury__set__to_sorted_list_2_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_16_16, parse_tree__parse_tree_to_term__TypeCtorSet_7, &parse_tree__parse_tree_to_term__TypeCtors_8);
        }
        {
          parse_tree__parse_tree_to_term__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_10, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_10, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_10, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
        {
          parse_tree__parse_tree_to_term__TypeCtorTerms_9 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeCtorInfo_16_16, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__Var_10, parse_tree__parse_tree_to_term__TypeCtors_8);
        }
        {
          parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[6]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__TypeCtorTerms_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
      }
    return parse_tree__parse_tree_to_term__Term_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_2,
  MR_Word * parse_tree__parse_tree_to_term__Term_3)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    if ((parse_tree__parse_tree_to_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_tree_to_term__Term_3 = parse_tree__parse_tree_to_term__HeadVar__2_2;
    else
      {
        MR_Word parse_tree__parse_tree_to_term__Detism_8;
        MR_Word parse_tree__parse_tree_to_term__Context_11;
        MR_Word parse_tree__parse_tree_to_term__DetismTerm0_12;
        MR_Word parse_tree__parse_tree_to_term__DetismTerm_13;
        MR_Word parse_tree__parse_tree_to_term__Var_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__HeadVar__1_1), (MR_Integer) 1);
        MR_Word parse_tree__parse_tree_to_term__Var_17;
        MR_Word parse_tree__parse_tree_to_term__Var_18;
        MR_String parse_tree__parse_tree_to_term__Var_24;
        MR_Word parse_tree__parse_tree_to_term__Var_27;
        MR_Word parse_tree__parse_tree_to_term__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_14, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_14, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_14, (MR_Integer) 2)));

        parse_tree__parse_tree_to_term__Detism_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_14, (MR_Integer) 3)));
        {
          parse_tree__parse_tree_to_term__Context_11 = mercury__term__context_init_0_f_0();
        }
        parse_tree__parse_tree_to_term__Var_24 = ((&parse_tree__parse_tree_to_term_vector_common_5[0 + parse_tree__parse_tree_to_term__Detism_8]))->parse_tree__parse_tree_to_term__vector_common_type_5_0__vct_5_f_0;
        {
          parse_tree__parse_tree_to_term__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_27, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_24));
        }
        {
          parse_tree__parse_tree_to_term__DetismTerm0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__DetismTerm0_12, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_27));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__DetismTerm0_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__DetismTerm0_12, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_11));
        }
        {
          mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__DetismTerm0_12, &parse_tree__parse_tree_to_term__DetismTerm_13);
        }
        {
          parse_tree__parse_tree_to_term__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_18, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__DetismTerm_13));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_2));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_17, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_tree_to_term__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_11));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_purity_annotation_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_2,
  MR_Word * parse_tree__parse_tree_to_term__Term_3)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    switch (parse_tree__parse_tree_to_term__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_to_term__Context_14;
          MR_Word parse_tree__parse_tree_to_term__Var_17;

          {
            parse_tree__parse_tree_to_term__Context_14 = mercury__term__context_init_0_f_0();
          }
          {
            parse_tree__parse_tree_to_term__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_2));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_17));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_14));
          }
        }
        break;
      case (MR_Integer) 0:
        *parse_tree__parse_tree_to_term__Term_3 = parse_tree__parse_tree_to_term__HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__Context_7;
          MR_Word parse_tree__parse_tree_to_term__Var_10;

          {
            parse_tree__parse_tree_to_term__Context_7 = mercury__term__context_init_0_f_0();
          }
          {
            parse_tree__parse_tree_to_term__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_10, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_2));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_10));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_2,
  MR_Word * parse_tree__parse_tree_to_term__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    if ((parse_tree__parse_tree_to_term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__parse_tree_to_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
            return;
          }
        }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 0)));

        if ((parse_tree__parse_tree_to_term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.combine_type_and_mode_terms\'/3", (MR_String) "argument length mismatch");
              return;
            }
          }
        else
          {
            MR_Word parse_tree__parse_tree_to_term__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_to_term__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__parse_tree_to_term__Term_20;
            MR_Word parse_tree__parse_tree_to_term__Terms_21;
            MR_Word parse_tree__parse_tree_to_term__Var_24;
            MR_Word parse_tree__parse_tree_to_term__Var_25;
            MR_Word parse_tree__parse_tree_to_term__Var_27;

            {
              parse_tree__parse_tree_to_term__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_25, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Mode_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_tree_to_term__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_29));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_25));
            }
            {
              parse_tree__parse_tree_to_term__Var_27 = mercury__term__context_init_0_f_0();
            }
            {
              parse_tree__parse_tree_to_term__Term_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_20, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_20, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_24));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_20, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_27));
            }
            {
              parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(parse_tree__parse_tree_to_term__Var_28, parse_tree__parse_tree_to_term__Modes_19, &parse_tree__parse_tree_to_term__Terms_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_tree_to_term__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Terms_21));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(
  MR_Word parse_tree__parse_tree_to_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_to_term__Args_2,
  MR_Word * parse_tree__parse_tree_to_term__Term_3)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_to_term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_tree_to_term__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_to_term__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__Context_13;
        MR_Word parse_tree__parse_tree_to_term__QualTerm_14;
        MR_Word parse_tree__parse_tree_to_term__Term0_15;
        MR_Word parse_tree__parse_tree_to_term__Var_17;
        MR_Word parse_tree__parse_tree_to_term__Var_20;
        MR_Word parse_tree__parse_tree_to_term__Var_21;

        {
          parse_tree__parse_tree_to_term__Context_13 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(parse_tree__parse_tree_to_term__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_tree_to_term__QualTerm_14);
        }
        {
          parse_tree__parse_tree_to_term__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_10));
        }
        {
          parse_tree__parse_tree_to_term__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term0_15, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term0_15, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Args_2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term0_15, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_13));
        }
        {
          parse_tree__parse_tree_to_term__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_21, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term0_15));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_20, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__QualTerm_14));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Var_20, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_tree_to_term__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_13));
        }
      }
    else
      {
        MR_String parse_tree__parse_tree_to_term__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__Context_7;
        MR_Word parse_tree__parse_tree_to_term__Var_8;

        {
          parse_tree__parse_tree_to_term__Context_7 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_to_term__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Var_8, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_tree_to_term__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Args_2));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1,
  MR_Box * parse_tree__parse_tree_to_term__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_tree_to_term__closure = parse_tree__parse_tree_to_term__closure_arg;
    MR_Word parse_tree__parse_tree_to_term__conv0_Term_4;

    {
      parse_tree__parse_tree_to_term__unparse_type_2_p_0(((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1), &parse_tree__parse_tree_to_term__conv0_Term_4);
    }
    *parse_tree__parse_tree_to_term__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_to_term__conv0_Term_4));
  }
}

static void MR_CALL 
parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__Types_3,
  MR_Word * parse_tree__parse_tree_to_term__Terms_4)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_3[0], parse_tree__parse_tree_to_term__Types_3, parse_tree__parse_tree_to_term__Terms_4);
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

/* :- end_module parse_tree.parse_tree_to_term. */
