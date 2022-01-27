/*
** Automatically generated from `parse_tree_to_term.m'
** by the Mercury compiler,
** version rotd-2016-06-09
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_to_term__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__702__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_57);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__694__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_67);

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__710__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_45);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__260__1_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__1_28,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__2_29);

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

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Lang_1,
  MR_Word parse_tree__parse_tree_to_term__Context_2,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__3_3);

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

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__TypeCtor_5);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__PropagatedResult_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__ContainsTypes_5);

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__inst_var_to_term_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_Word parse_tree__parse_tree_to_term__InstVar_5);

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

static void MR_CALL 
parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(
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

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__make_atom_2_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_4,
  MR_String parse_tree__parse_tree_to_term__Name_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1(
  MR_Box parse_tree__parse_tree_to_term__closure_arg,
  MR_Box parse_tree__parse_tree_to_term__wrapper_arg_1);


static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_1[13][2];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[43][1];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[3][7];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[1][3];


/* sealed */ struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s parse_tree__parse_tree_to_term_vector_common_7[29];



static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_1[13][2] = {
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
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "type_info_const"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "typeclass_info_const"))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_2[43][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "no_results"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "groundness_unknown"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "is_ground"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "is_not_ground"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "contains_any_unknown"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "does_contain_any"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "does_not_contain_any"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_unknown"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_known"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_unknown"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_known"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "results"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "fgtc"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "contains_types_unknown"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "contains_types_known"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "no_type_ctor_propagated"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "type_ctor_propagated"))
  },
  /* row 29 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\044any"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\044ground"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\044typed_ground"))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\044typed_inst"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\044unify"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "EMPTY_BOUND_INSTS"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "any_func"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "any_pred"))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_3[3][7] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__parse_tree_to_term__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_to_term_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_tree_to_term__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__parse_tree_to_term__vector_common_type_7_0_s parse_tree__parse_tree_to_term_vector_common_7[29] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_to_term__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
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
    MR_Word parse_tree__parse_tree_to_term__V_34_34;
    MR_Word parse_tree__parse_tree_to_term__V_36_36;
    MR_Word parse_tree__parse_tree_to_term__V_37_37;
    MR_String parse_tree__parse_tree_to_term__V_52_52;
    MR_Word parse_tree__parse_tree_to_term__V_55_55;
    MR_Word parse_tree__parse_tree_to_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 2)));

    switch (parse_tree__parse_tree_to_term__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_48_48;
          MR_Word parse_tree__parse_tree_to_term__ArgModes_16;
          MR_Word parse_tree__parse_tree_to_term__RetMode_17;
          MR_Word parse_tree__parse_tree_to_term__ArgModesTerm_18;
          MR_Word parse_tree__parse_tree_to_term__V_20_20;
          MR_Word parse_tree__parse_tree_to_term__V_22_22;
          MR_Word parse_tree__parse_tree_to_term__V_24_24;
          MR_Word parse_tree__parse_tree_to_term__V_26_26;
          MR_Word parse_tree__parse_tree_to_term__V_27_27;
          MR_Box parse_tree__parse_tree_to_term__conv0_RetMode_17;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, parse_tree__parse_tree_to_term__Modes_12, &parse_tree__parse_tree_to_term__ArgModes_16, &parse_tree__parse_tree_to_term__conv0_RetMode_17);
          }
          parse_tree__parse_tree_to_term__RetMode_17 = ((MR_Word) parse_tree__parse_tree_to_term__conv0_RetMode_17);
          {
            parse_tree__parse_tree_to_term__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__V_20_20 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_22_22, parse_tree__parse_tree_to_term__ArgModes_16);
          }
          parse_tree__parse_tree_to_term__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[41], parse_tree__parse_tree_to_term__V_20_20, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ArgModesTerm_18);
          }
          {
            parse_tree__parse_tree_to_term__V_27_27 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_6, parse_tree__parse_tree_to_term__Context_7, parse_tree__parse_tree_to_term__RetMode_17);
          }
          {
            parse_tree__parse_tree_to_term__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_26_26, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_27_27));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_26_26));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[2], parse_tree__parse_tree_to_term__V_24_24, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_to_term__V_30_30;
          MR_Word parse_tree__parse_tree_to_term__V_32_32;

          {
            parse_tree__parse_tree_to_term__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_32_32, parse_tree__parse_tree_to_term__Modes_12);
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[42], parse_tree__parse_tree_to_term__V_30_30, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
    }
    parse_tree__parse_tree_to_term__V_52_52 = ((&parse_tree__parse_tree_to_term_vector_common_7[21 + parse_tree__parse_tree_to_term__Det_14]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
    {
      parse_tree__parse_tree_to_term__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_55_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_52_52));
    }
    {
      parse_tree__parse_tree_to_term__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_37_37, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_55_55));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_37_37, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
    }
    {
      parse_tree__parse_tree_to_term__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_36_36, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_37_37));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_tree_to_term__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_34_34, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ModesTerm_15));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_34_34, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_36_36));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[23], parse_tree__parse_tree_to_term__V_34_34, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__Term_10);
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
    MR_Word parse_tree__parse_tree_to_term__V_34_34;
    MR_Word parse_tree__parse_tree_to_term__V_36_36;
    MR_Word parse_tree__parse_tree_to_term__V_37_37;
    MR_String parse_tree__parse_tree_to_term__V_52_52;
    MR_Word parse_tree__parse_tree_to_term__V_55_55;
    MR_Word parse_tree__parse_tree_to_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__PredInstInfo_9, (MR_Integer) 2)));

    switch (parse_tree__parse_tree_to_term__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word parse_tree__parse_tree_to_term__TypeCtorInfo_48_48;
          MR_Word parse_tree__parse_tree_to_term__ArgModes_16;
          MR_Word parse_tree__parse_tree_to_term__RetMode_17;
          MR_Word parse_tree__parse_tree_to_term__ArgModesTerm_18;
          MR_Word parse_tree__parse_tree_to_term__V_20_20;
          MR_Word parse_tree__parse_tree_to_term__V_22_22;
          MR_Word parse_tree__parse_tree_to_term__V_24_24;
          MR_Word parse_tree__parse_tree_to_term__V_26_26;
          MR_Word parse_tree__parse_tree_to_term__V_27_27;
          MR_Box parse_tree__parse_tree_to_term__conv0_RetMode_17;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, parse_tree__parse_tree_to_term__Modes_12, &parse_tree__parse_tree_to_term__ArgModes_16, &parse_tree__parse_tree_to_term__conv0_RetMode_17);
          }
          parse_tree__parse_tree_to_term__RetMode_17 = ((MR_Word) parse_tree__parse_tree_to_term__conv0_RetMode_17);
          {
            parse_tree__parse_tree_to_term__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_22_22, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__V_20_20 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeCtorInfo_44_44, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_22_22, parse_tree__parse_tree_to_term__ArgModes_16);
          }
          parse_tree__parse_tree_to_term__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[1], parse_tree__parse_tree_to_term__V_20_20, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ArgModesTerm_18);
          }
          {
            parse_tree__parse_tree_to_term__V_27_27 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_6, parse_tree__parse_tree_to_term__Context_7, parse_tree__parse_tree_to_term__RetMode_17);
          }
          {
            parse_tree__parse_tree_to_term__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_26_26, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_27_27));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_26_26));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_48_48, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[2], parse_tree__parse_tree_to_term__V_24_24, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_to_term__V_30_30;
          MR_Word parse_tree__parse_tree_to_term__V_32_32;

          {
            parse_tree__parse_tree_to_term__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_32_32, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
          }
          {
            parse_tree__parse_tree_to_term__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_32_32, parse_tree__parse_tree_to_term__Modes_12);
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[3], parse_tree__parse_tree_to_term__V_30_30, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__ModesTerm_15);
          }
        }
        break;
    }
    parse_tree__parse_tree_to_term__V_52_52 = ((&parse_tree__parse_tree_to_term_vector_common_7[13 + parse_tree__parse_tree_to_term__Det_14]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
    {
      parse_tree__parse_tree_to_term__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_55_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_52_52));
    }
    {
      parse_tree__parse_tree_to_term__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_37_37, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_55_55));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_37_37, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
    }
    {
      parse_tree__parse_tree_to_term__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_36_36, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_37_37));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_tree_to_term__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_34_34, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ModesTerm_15));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_34_34, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_36_36));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[23], parse_tree__parse_tree_to_term__V_34_34, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__Term_10);
    }
    return parse_tree__parse_tree_to_term__Term_10;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__702__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_57)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      parse_tree__parse_tree_to_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5)), ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_57)));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__694__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_67)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      parse_tree__parse_tree_to_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5)), ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_67)));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__710__1_2_p_0(
  MR_Word parse_tree__parse_tree_to_term__ArgTerms_5,
  MR_Word parse_tree__parse_tree_to_term__HeadVar__2_45)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;

    {
      parse_tree__parse_tree_to_term__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[3], ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5)), ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_45)));
    }
    return parse_tree__parse_tree_to_term__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__260__1_3_f_0(
  MR_Word parse_tree__parse_tree_to_term__Context_6,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__1_28,
  MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__2_29)
{
  {
    MR_bool parse_tree__parse_tree_to_term__succeeded;
    MR_Word parse_tree__parse_tree_to_term__LambdaHeadVar__3_30;
    MR_Word parse_tree__parse_tree_to_term__V_33_33;
    MR_Word parse_tree__parse_tree_to_term__V_34_34;
    MR_Word parse_tree__parse_tree_to_term__V_35_35;
    MR_Word parse_tree__parse_tree_to_term__V_36_36;
    MR_Word parse_tree__parse_tree_to_term__V_37_37;

    {
      parse_tree__parse_tree_to_term__V_36_36 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_35_35, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__LambdaHeadVar__1_28));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_35_35, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_36_36));
    }
    {
      parse_tree__parse_tree_to_term__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__V_35_35);
    }
    {
      parse_tree__parse_tree_to_term__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_37_37, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__LambdaHeadVar__2_29));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_tree_to_term__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_33_33, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_34_34));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_33_33, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_37_37));
    }
    {
      parse_tree__parse_tree_to_term__LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__LambdaHeadVar__3_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[40]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__LambdaHeadVar__3_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_33_33));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__LambdaHeadVar__3_30, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
    }
    return parse_tree__parse_tree_to_term__LambdaHeadVar__3_30;
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
      parse_tree__parse_tree_to_term__succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__702__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))));
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
      parse_tree__parse_tree_to_term__succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__694__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))));
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
      parse_tree__parse_tree_to_term__succeeded = parse_tree__parse_tree_to_term__IntroducedFrom__pred__cons_id_and_args_to_term_full__710__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 4))));
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
          MR_Word parse_tree__parse_tree_to_term__Context_129;

          {
            mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_129);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[11])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_129));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_to_term__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__ConsId_4), (MR_Integer) 1);
          MR_String parse_tree__parse_tree_to_term__V_78_78;
          MR_Word parse_tree__parse_tree_to_term__V_82_82;
          MR_Word parse_tree__parse_tree_to_term__Context_125;
          MR_String parse_tree__parse_tree_to_term__FunctorName_126;
          MR_Word parse_tree__parse_tree_to_term__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__TypeCtor_25, (MR_Integer) 0)));
          MR_Integer parse_tree__parse_tree_to_term__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__TypeCtor_25, (MR_Integer) 1)));
          MR_String parse_tree__parse_tree_to_term__V_151_151;
          MR_String parse_tree__parse_tree_to_term__V_159_159;
          MR_String parse_tree__parse_tree_to_term__V_160_160;

          {
            mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_125);
          }
          {
            parse_tree__parse_tree_to_term__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_to_term__TypeCtorName_127);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[29], parse_tree__parse_tree_to_term__Arity_128, &parse_tree__parse_tree_to_term__V_151_151);
          }
          {
            parse_tree__parse_tree_to_term__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_to_term__V_151_151);
          }
          {
            parse_tree__parse_tree_to_term__V_160_160 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__V_78_78, parse_tree__parse_tree_to_term__V_159_159);
          }
          {
            parse_tree__parse_tree_to_term__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", parse_tree__parse_tree_to_term__V_160_160);
          }
          {
            parse_tree__parse_tree_to_term__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_82_82, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__FunctorName_126));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_82_82));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_125));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_to_term__Context_139;

          {
            mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_139);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[9])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_139));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_141;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_141);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[8])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_141));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_143;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_143);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[6])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_143));
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
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[6], parse_tree__parse_tree_to_term__ArgTerms_5, parse_tree__parse_tree_to_term__Term_6);
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[5])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_12));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__parse_tree_to_term__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__V_106_106;
              MR_Word parse_tree__parse_tree_to_term__Context_114;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_114);
              }
              {
                parse_tree__parse_tree_to_term__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_106_106, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Int_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_106_106));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_114));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float parse_tree__parse_tree_to_term__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__V_104_104;
              MR_Word parse_tree__parse_tree_to_term__Context_115;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_115);
              }
              {
                parse_tree__parse_tree_to_term__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_104_104, 1) = MR_box_float(parse_tree__parse_tree_to_term__Float_15);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_104_104));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_115));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char parse_tree__parse_tree_to_term__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_String parse_tree__parse_tree_to_term__V_100_100;
              MR_Word parse_tree__parse_tree_to_term__SymName_117;

              {
                parse_tree__parse_tree_to_term__V_100_100 = mercury__string__from_char_1_f_0(parse_tree__parse_tree_to_term__Char_17);
              }
              {
                parse_tree__parse_tree_to_term__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SymName_117, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_100_100));
              }
              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_to_term__Term_6);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String parse_tree__parse_tree_to_term__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__V_102_102;
              MR_Word parse_tree__parse_tree_to_term__Context_116;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_116);
              }
              {
                parse_tree__parse_tree_to_term__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_102_102, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__String_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_102_102));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_116));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word parse_tree__parse_tree_to_term__V_98_98;
              MR_Word parse_tree__parse_tree_to_term__Context_118;
              MR_String parse_tree__parse_tree_to_term__FunctorName_119;
              MR_String parse_tree__parse_tree_to_term__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_118);
              }
              {
                parse_tree__parse_tree_to_term__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", parse_tree__parse_tree_to_term__String_120);
              }
              {
                parse_tree__parse_tree_to_term__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_98_98, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__FunctorName_119));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_98_98));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_118));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word parse_tree__parse_tree_to_term__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_String parse_tree__parse_tree_to_term__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 2)));
              MR_Integer parse_tree__parse_tree_to_term__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 3)));
              MR_String parse_tree__parse_tree_to_term__V_89_89;
              MR_Word parse_tree__parse_tree_to_term__V_95_95;
              MR_Word parse_tree__parse_tree_to_term__Context_121;
              MR_String parse_tree__parse_tree_to_term__FunctorName_122;
              MR_String parse_tree__parse_tree_to_term__V_162_162;
              MR_String parse_tree__parse_tree_to_term__V_170_170;
              MR_String parse_tree__parse_tree_to_term__V_171_171;
              MR_String parse_tree__parse_tree_to_term__V_173_173;
              MR_String parse_tree__parse_tree_to_term__V_174_174;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_121);
              }
              {
                parse_tree__parse_tree_to_term__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_to_term__ModuleName_18);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[29], parse_tree__parse_tree_to_term__Arity_20, &parse_tree__parse_tree_to_term__V_162_162);
              }
              {
                parse_tree__parse_tree_to_term__V_170_170 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_to_term__V_162_162);
              }
              {
                parse_tree__parse_tree_to_term__V_171_171 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__TypeCtorName_19, parse_tree__parse_tree_to_term__V_170_170);
              }
              {
                parse_tree__parse_tree_to_term__V_173_173 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__parse_tree_to_term__V_171_171);
              }
              {
                parse_tree__parse_tree_to_term__V_174_174 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__V_89_89, parse_tree__parse_tree_to_term__V_173_173);
              }
              {
                parse_tree__parse_tree_to_term__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", parse_tree__parse_tree_to_term__V_174_174);
              }
              {
                parse_tree__parse_tree_to_term__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_95_95, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__FunctorName_122));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_95_95));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_121));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word parse_tree__parse_tree_to_term__Context_123;

              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_123);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[4])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_123));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer parse_tree__parse_tree_to_term__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Arg_27;
              MR_Word parse_tree__parse_tree_to_term__V_63_63;
              MR_Word parse_tree__parse_tree_to_term__V_68_68;
              MR_Word parse_tree__parse_tree_to_term__V_71_71;
              MR_Word parse_tree__parse_tree_to_term__Context_131;

              {
                parse_tree__parse_tree_to_term__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_63_63, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_63_63, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_63_63, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(parse_tree__parse_tree_to_term__V_63_63, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
              }
              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_131);
              }
              {
                parse_tree__parse_tree_to_term__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_68_68, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__TIConstNum_26));
              }
              {
                parse_tree__parse_tree_to_term__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Arg_27, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_68_68));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Arg_27, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_131));
              }
              {
                parse_tree__parse_tree_to_term__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_71_71, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Arg_27));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[10])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_71_71));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_131));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer parse_tree__parse_tree_to_term__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__V_53_53;
              MR_Word parse_tree__parse_tree_to_term__V_58_58;
              MR_Word parse_tree__parse_tree_to_term__V_61_61;
              MR_Word parse_tree__parse_tree_to_term__Context_133;
              MR_Word parse_tree__parse_tree_to_term__Arg_135;

              {
                parse_tree__parse_tree_to_term__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_53_53, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_53_53, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_3));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_53_53, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(parse_tree__parse_tree_to_term__V_53_53, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
              }
              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_133);
              }
              {
                parse_tree__parse_tree_to_term__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_58_58, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__TCIConstNum_28));
              }
              {
                parse_tree__parse_tree_to_term__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Arg_135, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_58_58));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Arg_135, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_133));
              }
              {
                parse_tree__parse_tree_to_term__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_61_61, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Arg_135));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[12])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_61_61));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_133));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word parse_tree__parse_tree_to_term__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__SubArg_30;
              MR_Word parse_tree__parse_tree_to_term__NumArg_31;
              MR_Word parse_tree__parse_tree_to_term__V_41_41;
              MR_Word parse_tree__parse_tree_to_term__V_47_47;
              MR_Word parse_tree__parse_tree_to_term__V_50_50;
              MR_Word parse_tree__parse_tree_to_term__V_51_51;
              MR_Word parse_tree__parse_tree_to_term__Context_136;
              MR_Integer parse_tree__parse_tree_to_term__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__ConsId_4, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_to_term__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_41_41, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_41_41, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_41_41, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(parse_tree__parse_tree_to_term__V_41_41, (MR_String) "parse_tree.parse_tree_to_term", (MR_String) "predicate \140parse_tree.parse_tree_to_term.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
              }
              {
                parse_tree__parse_tree_to_term__cons_id_and_args_to_term_full_3_p_0(parse_tree__parse_tree_to_term__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_tree_to_term__SubArg_30);
              }
              {
                mercury__term__context_init_1_p_0(&parse_tree__parse_tree_to_term__Context_136);
              }
              {
                parse_tree__parse_tree_to_term__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_47_47, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__TCIConstNum_138));
              }
              {
                parse_tree__parse_tree_to_term__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__NumArg_31, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_47_47));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__NumArg_31, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_136));
              }
              {
                parse_tree__parse_tree_to_term__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_51_51, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubArg_30));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_tree_to_term__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_50_50, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__NumArg_31));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_50_50, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_51_51));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_tree_to_term_scalar_common_1[7])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_50_50));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_136));
              }
            }
            break;
        }
        break;
    }
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
    MR_Word parse_tree__parse_tree_to_term__V_18_18;

    {
      parse_tree__parse_tree_to_term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_18_18, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_18_18, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_18_18, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_18_18, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_7));
    }
    {
      parse_tree__parse_tree_to_term__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_18_18, parse_tree__parse_tree_to_term__Args_12);
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
        MR_Word parse_tree__parse_tree_to_term__V_20_20;
        MR_Word parse_tree__parse_tree_to_term__V_22_22;

        {
          parse_tree__parse_tree_to_term__SecondTerm_17 = parse_tree__parse_tree_to_term__bound_insts_to_term_2_4_f_0(parse_tree__parse_tree_to_term__Lang_6, parse_tree__parse_tree_to_term__Context_7, parse_tree__parse_tree_to_term__HeadBoundInst_15, parse_tree__parse_tree_to_term__TailBoundInsts_16);
        }
        {
          parse_tree__parse_tree_to_term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_22_22, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SecondTerm_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_20_20, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__FirstTerm_14));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_20_20, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_22_22));
        }
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[39], parse_tree__parse_tree_to_term__V_20_20, parse_tree__parse_tree_to_term__Context_7, &parse_tree__parse_tree_to_term__Term_10);
        }
      }
    return parse_tree__parse_tree_to_term__Term_10;
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
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[38]));
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
              MR_Word parse_tree__parse_tree_to_term__V_117_117;
              MR_Word parse_tree__parse_tree_to_term__V_118_118;

              {
                parse_tree__parse_tree_to_term__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_118_118, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_118_118, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_118_118, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_5));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_118_118, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
              }
              {
                parse_tree__parse_tree_to_term__V_117_117 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_118_118, parse_tree__parse_tree_to_term__Args_10);
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Name_9, parse_tree__parse_tree_to_term__V_117_117, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                    MR_Word parse_tree__parse_tree_to_term__V_102_102;
                    MR_Word parse_tree__parse_tree_to_term__V_104_104;
                    MR_String parse_tree__parse_tree_to_term__V_105_105;
                    MR_Word parse_tree__parse_tree_to_term__V_106_106;
                    MR_Word parse_tree__parse_tree_to_term__V_107_107;
                    MR_String parse_tree__parse_tree_to_term__V_108_108;
                    MR_Word parse_tree__parse_tree_to_term__V_109_109;
                    MR_Word parse_tree__parse_tree_to_term__V_110_110;
                    MR_Word parse_tree__parse_tree_to_term__V_111_111;
                    MR_Word parse_tree__parse_tree_to_term__V_112_112;

                    {
                      parse_tree__parse_tree_to_term__V_105_105 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(parse_tree__parse_tree_to_term__Liveness_11);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_104_104 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_105_105);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_108_108 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(parse_tree__parse_tree_to_term__Real_12);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_107_107 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_108_108);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_110_110 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstA_13);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_112_112 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstB_14);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_111_111, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_112_112));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_109_109, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_110_110));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_109_109, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_111_111));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_106_106, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_107_107));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_106_106, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_109_109));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_102_102, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_104_104));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_102_102, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_106_106));
                    }
                    {
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[37], parse_tree__parse_tree_to_term__V_102_102, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                    MR_Word parse_tree__parse_tree_to_term__V_92_92;
                    MR_Word parse_tree__parse_tree_to_term__V_94_94;
                    MR_Word parse_tree__parse_tree_to_term__V_95_95;
                    MR_Word parse_tree__parse_tree_to_term__V_96_96;

                    {
                      parse_tree__parse_tree_to_term__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_94_94, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_94_94, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0_1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_94_94, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_5));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_94_94, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_96_96, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__InstB_120));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_95_95, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__InstA_119));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_95_95, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_96_96));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_94_94, parse_tree__parse_tree_to_term__V_95_95);
                    }
                    {
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[32], parse_tree__parse_tree_to_term__V_92_92, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                        MR_Word parse_tree__parse_tree_to_term__V_74_74;
                        MR_Word parse_tree__parse_tree_to_term__V_76_76;
                        MR_Word parse_tree__parse_tree_to_term__V_77_77;
                        MR_Word parse_tree__parse_tree_to_term__V_78_78;
                        MR_String parse_tree__parse_tree_to_term__V_79_79;
                        MR_Word parse_tree__parse_tree_to_term__V_81_81;
                        MR_Word parse_tree__parse_tree_to_term__V_82_82;
                        MR_String parse_tree__parse_tree_to_term__V_83_83;
                        MR_Word parse_tree__parse_tree_to_term__V_84_84;
                        MR_Word parse_tree__parse_tree_to_term__V_85_85;
                        MR_String parse_tree__parse_tree_to_term__V_86_86;

                        {
                          parse_tree__parse_tree_to_term__V_76_76 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_15);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_79_79 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_16, (MR_String) "shared");
                        }
                        {
                          parse_tree__parse_tree_to_term__V_78_78 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_79_79);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_83_83 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(parse_tree__parse_tree_to_term__IsLive_17);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_82_82 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_83_83);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_86_86 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(parse_tree__parse_tree_to_term__Real_121);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_85_85 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_86_86);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_84_84, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_85_85));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_81_81, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_82_82));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_81_81, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_84_84));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_77_77, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_78_78));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_77_77, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_81_81));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_74_74, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_76_76));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_74_74, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_77_77));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[31], parse_tree__parse_tree_to_term__V_74_74, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                        MR_Word parse_tree__parse_tree_to_term__V_56_56;
                        MR_Word parse_tree__parse_tree_to_term__V_58_58;
                        MR_Word parse_tree__parse_tree_to_term__V_59_59;
                        MR_Word parse_tree__parse_tree_to_term__V_60_60;
                        MR_String parse_tree__parse_tree_to_term__V_61_61;
                        MR_Word parse_tree__parse_tree_to_term__V_63_63;
                        MR_Word parse_tree__parse_tree_to_term__V_64_64;
                        MR_String parse_tree__parse_tree_to_term__V_65_65;
                        MR_Word parse_tree__parse_tree_to_term__V_66_66;
                        MR_Word parse_tree__parse_tree_to_term__V_67_67;
                        MR_String parse_tree__parse_tree_to_term__V_68_68;

                        {
                          parse_tree__parse_tree_to_term__V_58_58 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_123);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_61_61 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_124, (MR_String) "shared");
                        }
                        {
                          parse_tree__parse_tree_to_term__V_60_60 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_61_61);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_65_65 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(parse_tree__parse_tree_to_term__IsLive_125);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_64_64 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_65_65);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_68_68 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(parse_tree__parse_tree_to_term__Real_122);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_67_67 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_68_68);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_66_66, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_67_67));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_63_63, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_64_64));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_63_63, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_66_66));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_59_59, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_60_60));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_59_59, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_63_63));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_56_56, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_58_58));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_56_56, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_59_59));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[30], parse_tree__parse_tree_to_term__V_56_56, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                        MR_Word parse_tree__parse_tree_to_term__V_48_48;
                        MR_Word parse_tree__parse_tree_to_term__V_50_50;

                        {
                          parse_tree__parse_tree_to_term__V_50_50 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_126);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_48_48, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_50_50));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[34], parse_tree__parse_tree_to_term__V_48_48, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                        MR_Word parse_tree__parse_tree_to_term__V_40_40;
                        MR_Word parse_tree__parse_tree_to_term__V_42_42;

                        {
                          parse_tree__parse_tree_to_term__V_42_42 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_127);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_40_40, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_42_42));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[33], parse_tree__parse_tree_to_term__V_40_40, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                        MR_Word parse_tree__parse_tree_to_term__V_28_28;
                        MR_Word parse_tree__parse_tree_to_term__V_30_30;
                        MR_String parse_tree__parse_tree_to_term__V_31_31;
                        MR_Word parse_tree__parse_tree_to_term__V_33_33;
                        MR_Word parse_tree__parse_tree_to_term__V_34_34;

                        {
                          parse_tree__parse_tree_to_term__unparse_type_2_p_0(parse_tree__parse_tree_to_term__Type_18, &parse_tree__parse_tree_to_term__Term0_19);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_31_31 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(parse_tree__parse_tree_to_term__Uniq_128, (MR_String) "shared");
                        }
                        {
                          parse_tree__parse_tree_to_term__V_30_30 = parse_tree__parse_tree_to_term__make_atom_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_31_31);
                        }
                        parse_tree__parse_tree_to_term__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          parse_tree__parse_tree_to_term__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TypeCtorInfo_150_150, parse_tree__parse_tree_to_term__Term0_19);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_33_33, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_34_34));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_28_28, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_30_30));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_28_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_33_33));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_150_150, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[35], parse_tree__parse_tree_to_term__V_28_28, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
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
                        MR_Word parse_tree__parse_tree_to_term__V_21_21;
                        MR_Word parse_tree__parse_tree_to_term__V_23_23;
                        MR_Word parse_tree__parse_tree_to_term__V_24_24;
                        MR_Word parse_tree__parse_tree_to_term__V_25_25;
                        MR_Word parse_tree__parse_tree_to_term__Term0_129;

                        {
                          parse_tree__parse_tree_to_term__unparse_type_2_p_0(parse_tree__parse_tree_to_term__Type_132, &parse_tree__parse_tree_to_term__Term0_129);
                        }
                        parse_tree__parse_tree_to_term__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          parse_tree__parse_tree_to_term__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TypeCtorInfo_152_152, parse_tree__parse_tree_to_term__Term0_129);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_25_25 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInstName_131);
                        }
                        {
                          parse_tree__parse_tree_to_term__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_25_25));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_tree_to_term__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_21_21, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_23_23));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_24_24));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_152_152, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[36], parse_tree__parse_tree_to_term__V_21_21, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word parse_tree__parse_tree_to_term__InstName__tmp_copy_7 = parse_tree__parse_tree_to_term__SubInstName_131;

                          parse_tree__parse_tree_to_term__InstName_7 = parse_tree__parse_tree_to_term__InstName__tmp_copy_7;
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
    MR_String parse_tree__parse_tree_to_term__V_13_13;
    MR_Word parse_tree__parse_tree_to_term__V_17_17;
    MR_String parse_tree__parse_tree_to_term__V_19_19;
    MR_String parse_tree__parse_tree_to_term__V_27_27;

    {
      parse_tree__parse_tree_to_term__V_13_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__parse_tree_to_term__SymName_7);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[29], parse_tree__parse_tree_to_term__Arity_8, &parse_tree__parse_tree_to_term__V_19_19);
    }
    {
      parse_tree__parse_tree_to_term__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_to_term__V_19_19);
    }
    {
      parse_tree__parse_tree_to_term__ConsName_9 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_to_term__V_13_13, parse_tree__parse_tree_to_term__V_27_27);
    }
    {
      parse_tree__parse_tree_to_term__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_17_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__ConsName_9));
    }
    {
      parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_17_17));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
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
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[27]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__TypeCtor_7 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__PropagatedResult_5), (MR_Integer) 1);
        MR_Word parse_tree__parse_tree_to_term__V_10_10;
        MR_Word parse_tree__parse_tree_to_term__V_11_11;

        {
          parse_tree__parse_tree_to_term__V_11_11 = parse_tree__parse_tree_to_term__type_ctor_to_term_2_f_0(parse_tree__parse_tree_to_term__Context_4, parse_tree__parse_tree_to_term__TypeCtor_7);
        }
        {
          parse_tree__parse_tree_to_term__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_10_10, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_11_11));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[28]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_10_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
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
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[25]));
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
        MR_Word parse_tree__parse_tree_to_term__V_10_10;

        {
          mercury__set__to_sorted_list_2_p_0(parse_tree__parse_tree_to_term__TypeCtorInfo_16_16, parse_tree__parse_tree_to_term__TypeCtorSet_7, &parse_tree__parse_tree_to_term__TypeCtors_8);
        }
        {
          parse_tree__parse_tree_to_term__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_10_10, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_10_10, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_result_contains_types_to_term_2_f_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_10_10, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
        {
          parse_tree__parse_tree_to_term__TypeCtorTerms_9 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeCtorInfo_16_16, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_10_10, parse_tree__parse_tree_to_term__TypeCtors_8);
        }
        {
          parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[26]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__TypeCtorTerms_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
        }
      }
    return parse_tree__parse_tree_to_term__Term_6;
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
    MR_Word parse_tree__parse_tree_to_term__V_9_9;
    MR_String parse_tree__parse_tree_to_term__V_10_10;

    {
      parse_tree__parse_tree_to_term__InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_tree_to_term__InstVar_5);
    }
    {
      parse_tree__parse_tree_to_term__InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_to_term__InstVarNum_7);
    }
    {
      parse_tree__parse_tree_to_term__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", parse_tree__parse_tree_to_term__InstVarNumStr_8);
    }
    {
      parse_tree__parse_tree_to_term__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__V_9_9, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_10_10));
    }
    {
      parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_9_9));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
    }
    return parse_tree__parse_tree_to_term__Term_6;
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
      parse_tree__parse_tree_to_term__conv0_LambdaHeadVar__3_30 = parse_tree__parse_tree_to_term__IntroducedFrom__func__inst_to_term_with_context__260__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_to_term__wrapper_arg_2));
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
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[24]));
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
          MR_Word parse_tree__parse_tree_to_term__V_55_55;

          {
            parse_tree__parse_tree_to_term__unparse_type_2_p_0(parse_tree__parse_tree_to_term__Type_12, &parse_tree__parse_tree_to_term__Term0_13);
          }
          {
            parse_tree__parse_tree_to_term__Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Term0_13);
          }
          {
            parse_tree__parse_tree_to_term__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_55_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term1_14));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[24]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_55_55));
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
              MR_String parse_tree__parse_tree_to_term__V_58_58 = ((&parse_tree__parse_tree_to_term_vector_common_7[8 + parse_tree__parse_tree_to_term__Uniq_9]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
              MR_Word parse_tree__parse_tree_to_term__V_78_78;

              {
                parse_tree__parse_tree_to_term__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_78_78, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_58_58));
              }
              {
                parse_tree__parse_tree_to_term__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_78_78));
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
              MR_Word parse_tree__parse_tree_to_term__V_50_50;
              MR_String parse_tree__parse_tree_to_term__V_51_51;
              MR_Word parse_tree__parse_tree_to_term__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));

              switch (parse_tree__parse_tree_to_term__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_tree_to_term__V_44_44;
                    MR_Word parse_tree__parse_tree_to_term__V_45_45;
                    MR_Word parse_tree__parse_tree_to_term__V_46_46;

                    {
                      parse_tree__parse_tree_to_term__V_44_44 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstResults_15);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_46_46 = parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__BoundInsts_16);
                    }
                    {
                      parse_tree__parse_tree_to_term__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_45_45, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_46_46));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_44_44));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_45_45));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__parse_tree_to_term__V_48_48;

                    {
                      parse_tree__parse_tree_to_term__V_48_48 = parse_tree__parse_tree_to_term__bound_insts_to_term_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__BoundInsts_16);
                    }
                    {
                      parse_tree__parse_tree_to_term__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_48_48));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              switch (parse_tree__parse_tree_to_term__Uniq_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  parse_tree__parse_tree_to_term__V_51_51 = (MR_String) "clobbered";
                  break;
                case (MR_Integer) 4:
                  parse_tree__parse_tree_to_term__V_51_51 = (MR_String) "mostly_clobbered";
                  break;
                case (MR_Integer) 2:
                  parse_tree__parse_tree_to_term__V_51_51 = (MR_String) "mostly_unique";
                  break;
                case (MR_Integer) 0:
                  parse_tree__parse_tree_to_term__V_51_51 = (MR_String) "bound";
                  break;
                case (MR_Integer) 1:
                  parse_tree__parse_tree_to_term__V_51_51 = (MR_String) "unique";
                  break;
              }
              {
                parse_tree__parse_tree_to_term__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_50_50, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_51_51));
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__V_50_50, parse_tree__parse_tree_to_term__ArgTerms_17, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_to_term__Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 2)));

              if ((parse_tree__parse_tree_to_term__HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String parse_tree__parse_tree_to_term__V_42_42;
                  MR_Word parse_tree__parse_tree_to_term__V_96_96;

                  switch (parse_tree__parse_tree_to_term__Uniq_62) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 3:
                      parse_tree__parse_tree_to_term__V_42_42 = (MR_String) "clobbered";
                      break;
                    case (MR_Integer) 4:
                      parse_tree__parse_tree_to_term__V_42_42 = (MR_String) "mostly_clobbered";
                      break;
                    case (MR_Integer) 2:
                      parse_tree__parse_tree_to_term__V_42_42 = (MR_String) "mostly_unique";
                      break;
                    case (MR_Integer) 0:
                      parse_tree__parse_tree_to_term__V_42_42 = (MR_String) "ground";
                      break;
                    case (MR_Integer) 1:
                      parse_tree__parse_tree_to_term__V_42_42 = (MR_String) "unique";
                      break;
                  }
                  {
                    parse_tree__parse_tree_to_term__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_96_96, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_42_42));
                  }
                  {
                    parse_tree__parse_tree_to_term__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_96_96));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_8, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
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
              MR_Word parse_tree__parse_tree_to_term__V_40_40;
              MR_Word parse_tree__parse_tree_to_term__V_41_41;

              {
                parse_tree__parse_tree_to_term__V_41_41 = mercury__term__context_init_0_f_0();
              }
              {
                parse_tree__parse_tree_to_term__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_40_40, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_18));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_40_40, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_41_41));
              }
              {
                parse_tree__parse_tree_to_term__Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__V_40_40);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_tree_to_term__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Inst_7, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__V_27_27;
              MR_Word parse_tree__parse_tree_to_term__V_39_39;
              MR_Box parse_tree__parse_tree_to_term__conv1_Term_8;

              {
                parse_tree__parse_tree_to_term__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_27_27, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_27_27, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
              }
              {
                parse_tree__parse_tree_to_term__V_39_39 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__SubInst_20);
              }
              {
                parse_tree__parse_tree_to_term__conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[2], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_27_27, parse_tree__parse_tree_to_term__Vars_19, ((MR_Box) (parse_tree__parse_tree_to_term__V_39_39)));
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
              MR_Word parse_tree__parse_tree_to_term__V_26_26;

              {
                parse_tree__parse_tree_to_term__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_26_26, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_22));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_26_26, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Args_23));
              }
              {
                parse_tree__parse_tree_to_term__Term_8 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__V_26_26);
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
        MR_Word parse_tree__parse_tree_to_term__V_13_13;

        {
          parse_tree__parse_tree_to_term__V_13_13 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_to_term__Term0_7 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0((MR_Integer) 0, parse_tree__parse_tree_to_term__V_13_13, parse_tree__parse_tree_to_term__Mode_3);
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
        MR_Word parse_tree__parse_tree_to_term__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__HeadVar__1_1), (MR_Integer) 1);
        MR_Word parse_tree__parse_tree_to_term__V_17_17;
        MR_Word parse_tree__parse_tree_to_term__V_18_18;
        MR_String parse_tree__parse_tree_to_term__V_24_24;
        MR_Word parse_tree__parse_tree_to_term__V_27_27;
        MR_Word parse_tree__parse_tree_to_term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_14_14, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_14_14, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_14_14, (MR_Integer) 2)));

        parse_tree__parse_tree_to_term__Detism_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_14_14, (MR_Integer) 3)));
        {
          parse_tree__parse_tree_to_term__Context_11 = mercury__term__context_init_0_f_0();
        }
        parse_tree__parse_tree_to_term__V_24_24 = ((&parse_tree__parse_tree_to_term_vector_common_7[0 + parse_tree__parse_tree_to_term__Detism_8]))->parse_tree__parse_tree_to_term__vector_common_type_7_0__vct_7_f_0;
        {
          parse_tree__parse_tree_to_term__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_27_27, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_24_24));
        }
        {
          parse_tree__parse_tree_to_term__DetismTerm0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__DetismTerm0_12, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_27_27));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__DetismTerm0_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__DetismTerm0_12, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_11));
        }
        {
          mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__DetismTerm0_12, &parse_tree__parse_tree_to_term__DetismTerm_13);
        }
        {
          parse_tree__parse_tree_to_term__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_18_18, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__DetismTerm_13));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_17_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__HeadVar__2_2));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_17_17, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_18_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_tree_to_term__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[23]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_17_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_11));
        }
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
        MR_Word parse_tree__parse_tree_to_term__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 0)));

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
            MR_Word parse_tree__parse_tree_to_term__V_24_24;
            MR_Word parse_tree__parse_tree_to_term__V_25_25;
            MR_Word parse_tree__parse_tree_to_term__V_27_27;

            {
              parse_tree__parse_tree_to_term__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_25_25, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Mode_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_tree_to_term__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_29_29));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_24_24, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_25_25));
            }
            {
              parse_tree__parse_tree_to_term__V_27_27 = mercury__term__context_init_0_f_0();
            }
            {
              parse_tree__parse_tree_to_term__Term_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_20, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[22]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_20, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_24_24));
              MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_20, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__V_27_27));
            }
            {
              parse_tree__parse_tree_to_term__combine_type_and_mode_terms_3_p_0(parse_tree__parse_tree_to_term__V_28_28, parse_tree__parse_tree_to_term__Modes_19, &parse_tree__parse_tree_to_term__Terms_21);
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
        MR_Word parse_tree__parse_tree_to_term__V_17_17;
        MR_Word parse_tree__parse_tree_to_term__V_20_20;
        MR_Word parse_tree__parse_tree_to_term__V_21_21;

        {
          parse_tree__parse_tree_to_term__Context_13 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_to_term__unparse_qualified_term_3_p_0(parse_tree__parse_tree_to_term__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_tree_to_term__QualTerm_14);
        }
        {
          parse_tree__parse_tree_to_term__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_17_17, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_10));
        }
        {
          parse_tree__parse_tree_to_term__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term0_15, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_17_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term0_15, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Args_2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term0_15, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_13));
        }
        {
          parse_tree__parse_tree_to_term__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_21_21, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term0_15));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_tree_to_term__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_20_20, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__QualTerm_14));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_20_20, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_21_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_tree_to_term__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[21]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_20_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_13));
        }
      }
    else
      {
        MR_String parse_tree__parse_tree_to_term__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__Context_7;
        MR_Word parse_tree__parse_tree_to_term__V_8_8;

        {
          parse_tree__parse_tree_to_term__Context_7 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_to_term__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_8_8, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_tree_to_term__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_8_8));
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
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_6[0], parse_tree__parse_tree_to_term__Types_3, parse_tree__parse_tree_to_term__Terms_4);
    }
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
    MR_Word parse_tree__parse_tree_to_term__V_6_6;

    {
      parse_tree__parse_tree_to_term__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_6_6, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_5));
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_6_6));
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
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[8]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[20]));
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
          MR_Word parse_tree__parse_tree_to_term__V_27_27;
          MR_Word parse_tree__parse_tree_to_term__V_28_28;
          MR_Word parse_tree__parse_tree_to_term__V_29_29;
          MR_Word parse_tree__parse_tree_to_term__V_30_30;
          MR_Word parse_tree__parse_tree_to_term__V_31_31;
          MR_Word parse_tree__parse_tree_to_term__V_32_32;

          switch (parse_tree__parse_tree_to_term__GroundnessResult_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[9]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[10]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm1_13, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[11]));
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
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[12]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[13]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  parse_tree__parse_tree_to_term__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm2_14, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[14]));
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
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[15]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          else
            {
              MR_Word parse_tree__parse_tree_to_term__InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstNamesResult_9, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_to_term__NumInstNames_62;
              MR_Word parse_tree__parse_tree_to_term__CountTerm_63;
              MR_Word parse_tree__parse_tree_to_term__V_64_64;
              MR_Word parse_tree__parse_tree_to_term__V_68_68;

              {
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, parse_tree__parse_tree_to_term__InstNameSet_61, &parse_tree__parse_tree_to_term__NumInstNames_62);
              }
              {
                parse_tree__parse_tree_to_term__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_64_64, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__NumInstNames_62));
              }
              {
                parse_tree__parse_tree_to_term__CountTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__CountTerm_63, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_64_64));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__CountTerm_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__CountTerm_63, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
              {
                parse_tree__parse_tree_to_term__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_68_68, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__CountTerm_63));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_tree_to_term__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[16]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_68_68));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm3_15, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          if ((parse_tree__parse_tree_to_term__InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                parse_tree__parse_tree_to_term__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[17]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
            }
          else
            {
              MR_Word parse_tree__parse_tree_to_term__TypeInfo_16_86 = (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[2];
              MR_Word parse_tree__parse_tree_to_term__InstVarSet_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__InstVarsResult_10, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_to_term__InstVars_78;
              MR_Word parse_tree__parse_tree_to_term__InstVarTerms_79;
              MR_Word parse_tree__parse_tree_to_term__V_80_80;

              {
                mercury__set__to_sorted_list_2_p_0(parse_tree__parse_tree_to_term__TypeInfo_16_86, parse_tree__parse_tree_to_term__InstVarSet_77, &parse_tree__parse_tree_to_term__InstVars_78);
              }
              {
                parse_tree__parse_tree_to_term__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_80_80, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_80_80, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_80_80, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
              }
              {
                parse_tree__parse_tree_to_term__InstVarTerms_79 = mercury__list__map_2_f_0(parse_tree__parse_tree_to_term__TypeInfo_16_86, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_80_80, parse_tree__parse_tree_to_term__InstVars_78);
              }
              {
                parse_tree__parse_tree_to_term__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[18]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__SubTerm4_16, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__InstVarTerms_79));
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
            parse_tree__parse_tree_to_term__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_32_32, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm6_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_tree_to_term__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_31_31, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm5_17));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_31_31, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_32_32));
          }
          {
            parse_tree__parse_tree_to_term__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_30_30, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm4_16));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_31_31));
          }
          {
            parse_tree__parse_tree_to_term__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm3_15));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_29_29, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_30_30));
          }
          {
            parse_tree__parse_tree_to_term__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_28_28, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm2_14));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_28_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_29_29));
          }
          {
            parse_tree__parse_tree_to_term__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_27_27, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__SubTerm1_13));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_28_28));
          }
          {
            parse_tree__parse_tree_to_term__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[19]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_27_27));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term_6, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_4));
          }
        }
        break;
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
    MR_Word parse_tree__parse_tree_to_term__V_6_6;

    {
      parse_tree__parse_tree_to_term__V_6_6 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_name_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_4, parse_tree__parse_tree_to_term__V_6_6, parse_tree__parse_tree_to_term__InstName_5);
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
    MR_Word parse_tree__parse_tree_to_term__V_6_6;

    {
      parse_tree__parse_tree_to_term__V_6_6 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_4, parse_tree__parse_tree_to_term__V_6_6, parse_tree__parse_tree_to_term__Inst_5);
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
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
        MR_Word parse_tree__parse_tree_to_term__V_17_17;
        MR_Word parse_tree__parse_tree_to_term___Uniq_11;
        MR_Word parse_tree__parse_tree_to_term__V_12_12;

        parse_tree__parse_tree_to_term__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_to_term__InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (parse_tree__parse_tree_to_term__succeeded)
          {
            parse_tree__parse_tree_to_term___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstA_9, (MR_Integer) 1)));
            parse_tree__parse_tree_to_term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__InstA_9, (MR_Integer) 2)));
            parse_tree__parse_tree_to_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_to_term__V_17_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_to_term__succeeded)
              {
                parse_tree__parse_tree_to_term__V_12_12 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__V_17_17), (MR_Integer) 1);
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
            MR_Word parse_tree__parse_tree_to_term__V_19_19;
            MR_Word parse_tree__parse_tree_to_term__V_21_21;
            MR_Word parse_tree__parse_tree_to_term__V_22_22;
            MR_Word parse_tree__parse_tree_to_term__V_23_23;

            {
              parse_tree__parse_tree_to_term__V_21_21 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstA_9);
            }
            {
              parse_tree__parse_tree_to_term__V_23_23 = parse_tree__parse_tree_to_term__inst_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_5, parse_tree__parse_tree_to_term__Context_6, parse_tree__parse_tree_to_term__InstB_10);
            }
            {
              parse_tree__parse_tree_to_term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_22_22, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_23_23));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_tree_to_term__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_19_19, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_21_21));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_22_22));
            }
            {
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_2[7], parse_tree__parse_tree_to_term__V_19_19, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_tree_to_term__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Mode_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_to_term__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Mode_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_to_term__V_15_15;
        MR_Word parse_tree__parse_tree_to_term__V_16_16;

        {
          parse_tree__parse_tree_to_term__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_16_16, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_16_16, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_16_16, 3) = ((MR_Box) (parse_tree__parse_tree_to_term__Lang_5));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_16_16, 4) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_6));
        }
        {
          parse_tree__parse_tree_to_term__V_15_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[1], parse_tree__parse_tree_to_term__V_16_16, parse_tree__parse_tree_to_term__Args_14);
        }
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_to_term__Name_13, parse_tree__parse_tree_to_term__V_15_15, parse_tree__parse_tree_to_term__Context_6, &parse_tree__parse_tree_to_term__Term_8);
        }
      }
    return parse_tree__parse_tree_to_term__Term_8;
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
    MR_Word parse_tree__parse_tree_to_term__V_6_6;

    {
      parse_tree__parse_tree_to_term__V_6_6 = mercury__term__context_init_0_f_0();
    }
    {
      parse_tree__parse_tree_to_term__HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(parse_tree__parse_tree_to_term__Lang_4, parse_tree__parse_tree_to_term__V_6_6, parse_tree__parse_tree_to_term__Mode_5);
    }
    return parse_tree__parse_tree_to_term__HeadVar__3_3;
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
          MR_Word parse_tree__parse_tree_to_term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));

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
          MR_Word parse_tree__parse_tree_to_term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));

          {
            parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(parse_tree__parse_tree_to_term__Args_10, &parse_tree__parse_tree_to_term__ArgTerms_12);
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
          MR_Word parse_tree__parse_tree_to_term__V_55_55;

          {
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__parse_tree_to_term__BuiltinType_13, &parse_tree__parse_tree_to_term__Name_14);
          }
          {
            parse_tree__parse_tree_to_term__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_55_55, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Name_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_tree_to_term__Term_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_55_55));
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
              MR_Word parse_tree__parse_tree_to_term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));

              {
                parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(parse_tree__parse_tree_to_term__Args_61, &parse_tree__parse_tree_to_term__ArgTerms_62);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[6]));
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
                parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(parse_tree__parse_tree_to_term__PredArgTypes_16, &parse_tree__parse_tree_to_term__PredArgTypeTerms_20);
              }
              if ((parse_tree__parse_tree_to_term__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__parse_tree_to_term__PredArgTerms_26 = parse_tree__parse_tree_to_term__PredArgTypeTerms_20;
              else
                {
                  MR_Word parse_tree__parse_tree_to_term__PredArgModes_22;
                  MR_Word parse_tree__parse_tree_to_term__PredArgModeTerms_25;
                  MR_Word parse_tree__parse_tree_to_term__V_45_45 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_to_term__HOInstInfo_17), (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_to_term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_45_45, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_tree_to_term__V_23_23;
                  MR_Word parse_tree__parse_tree_to_term__V_24_24;

                  parse_tree__parse_tree_to_term__PredArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_45_45, (MR_Integer) 1)));
                  parse_tree__parse_tree_to_term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_45_45, (MR_Integer) 2)));
                  parse_tree__parse_tree_to_term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__V_45_45, (MR_Integer) 3)));
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
                    MR_Word parse_tree__parse_tree_to_term__V_50_50;
                    MR_Word parse_tree__parse_tree_to_term__V_51_51;
                    MR_Word parse_tree__parse_tree_to_term__ArgTerms_57;
                    MR_Box parse_tree__parse_tree_to_term__conv0_RetTerm_29;

                    {
                      mercury__list__det_split_last_3_p_0((MR_Word) &parse_tree__parse_tree_to_term_scalar_common_1[0], parse_tree__parse_tree_to_term__PredArgTerms_26, &parse_tree__parse_tree_to_term__ArgTerms_57, &parse_tree__parse_tree_to_term__conv0_RetTerm_29);
                    }
                    parse_tree__parse_tree_to_term__RetTerm_29 = ((MR_Word) parse_tree__parse_tree_to_term__conv0_RetTerm_29);
                    {
                      parse_tree__parse_tree_to_term__Term1_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term1_30, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[1]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term1_30, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_57));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term1_30, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_51_51, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__RetTerm_29));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_50_50, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term1_30));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_50_50, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_51_51));
                    }
                    {
                      parse_tree__parse_tree_to_term__Term2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[2]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_50_50));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      parse_tree__parse_tree_to_term__Term2_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[3]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__PredArgTerms_26));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term2_28, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
                    }
                  }
                  break;
              }
              switch (parse_tree__parse_tree_to_term__Purity_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__parse_tree_to_term__Context_84;
                    MR_Word parse_tree__parse_tree_to_term__V_87_87;

                    {
                      parse_tree__parse_tree_to_term__Context_84 = mercury__term__context_init_0_f_0();
                    }
                    {
                      parse_tree__parse_tree_to_term__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_87_87, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term2_28));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__Term3_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term3_31, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[4]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term3_31, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_87_87));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term3_31, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_84));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  parse_tree__parse_tree_to_term__Term3_31 = parse_tree__parse_tree_to_term__Term2_28;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_tree_to_term__Context_77;
                    MR_Word parse_tree__parse_tree_to_term__V_80_80;

                    {
                      parse_tree__parse_tree_to_term__Context_77 = mercury__term__context_init_0_f_0();
                    }
                    {
                      parse_tree__parse_tree_to_term__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_80_80, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Term2_28));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_to_term__Term3_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term3_31, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[5]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term3_31, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_80_80));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_to_term__Term3_31, 2) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_77));
                    }
                  }
                  break;
              }
              {
                parse_tree__parse_tree_to_term__maybe_add_detism_3_p_0(parse_tree__parse_tree_to_term__HOInstInfo_17, parse_tree__parse_tree_to_term__Term3_31, parse_tree__parse_tree_to_term__Term_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_to_term__V_41_41;
              MR_Word parse_tree__parse_tree_to_term__V_42_42;
              MR_Word parse_tree__parse_tree_to_term__TVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_to_term__Var_64;
              MR_Word parse_tree__parse_tree_to_term__Args_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_to_term__ArgTerms_66;
              MR_Word parse_tree__parse_tree_to_term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_to_term__Type_3, (MR_Integer) 3)));

              {
                parse_tree__parse_tree_to_term__Var_64 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_tree_to_term__TVar_63);
              }
              {
                parse_tree__parse_tree_to_term__unparse_type_list_2_p_0(parse_tree__parse_tree_to_term__Args_65, &parse_tree__parse_tree_to_term__ArgTerms_66);
              }
              {
                parse_tree__parse_tree_to_term__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_42_42, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__Var_64));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_42_42, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__Context_5));
              }
              {
                parse_tree__parse_tree_to_term__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_41_41, 0) = ((MR_Box) (parse_tree__parse_tree_to_term__V_42_42));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_to_term__V_41_41, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__ArgTerms_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_tree_to_term__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_tree_to_term_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_tree_to_term__V_41_41));
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_to_term. */
