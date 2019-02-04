/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version rotd-2018-07-24
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


// :- module parse_tree.parse_tree_out_pragma.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_pragma__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pragma.mih"


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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
  MR_Word ArgSizeTerm_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
  MR_Word Constraint_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word UnitSelector_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word TypeVarSet_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Char Char_4,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word RFSInfo_4,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
  MR_Word Lang_5,
  MR_Word Term2Info_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
  MR_Word Lang_5,
  MR_Word TermInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
  MR_Word OISUInfo_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
  MR_Word TypeClassInfo_for_output_20,
  MR_Word PredNameArity_5,
  MR_Word PredNameArities_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word FactTableInfo_4,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
  MR_Word TabledInfo_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_recursion_4_p_0(
  MR_Word Lang_5,
  MR_Word RequireTR_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
  MR_Word TypeClassInfo_for_output_31,
  MR_Word ExternalInfo_4,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
  MR_Word TypeClassInfo_for_output_28,
  MR_Word FEInfo_4,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
  MR_Word TypeClassInfo_for_output_32,
  MR_Word FEEInfo_4,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
  MR_Word TypeClassInfo_for_output_41,
  MR_Word Lang_5,
  MR_Word FPEInfo_6,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
  MR_Word FCInfo_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
  MR_Word TypeClassInfo_for_output_50,
  MR_Word Lang_5,
  MR_Word FPInfo_6,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word TypeClassInfo_for_output_34,
  MR_Word Lang_1,
  MR_Word InstVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
  MR_Word Attrs_4,
  MR_Word VarSet_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word Sharing_6,
  MR_Word MaybeTypes_7);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[27][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_8[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[3][6];


/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_6_0_s parse_tree__parse_tree_out_pragma_vector_common_6[4];

/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s {
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "])")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "promise_pure")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "promise_semipure")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "does_not_terminate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "terminates")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "will_not_throw_exception")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "ordinary_despite_detism")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "may_modify_trail")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "will_not_modify_trail")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "may_call_mm_tabled")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "will_not_call_mm_tabled")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "always_boxed")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "affects_liveness")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "doesnt_affect_liveness")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "allocates_bounded_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "allocates_unbounded_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "doesnt_allocate_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "doesnt_have_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "doesnt_register_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "registers_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "may_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "may_not_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "fast_loose")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_11[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_11[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_11[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_8[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (MR_Unsigned) (((MR_Box) ((MR_Integer) 0)))))))))))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_6_0_s parse_tree__parse_tree_out_pragma_vector_common_6[4] = {
  /* row 0 */   {     (MR_String) "not_tabled_for_io" },
  /* row 1 */   {     (MR_String) "tabled_for_io" },
  /* row 2 */   {     (MR_String) "tabled_for_io_unitize" },
  /* row 3 */   {     (MR_String) "tabled_for_descendant_io" },
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[8] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[20])) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[18])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[19])) },
  /* row 3 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 4 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[23])) },
  /* row 5 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[22])) },
  /* row 6 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[21])) },
  /* row 7 */   {     (MR_Word) ((MR_Unsigned) 0U) },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "concurrency")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 7:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "conservative_gc")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "double_prec_float")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_3(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "memo")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "parallel_conj")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_5(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "single_prec_float")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 6:
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_6(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "strict_sequential")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 5:
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));

        func_7(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "trailing")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
  MR_Word ArgSizeTerm_4)
{
  {
    MR_Integer VarId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgSizeTerm_4, (MR_Integer) 0))));
    MR_Word Coefficient_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgSizeTerm_4, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) "term(");
    mercury__io__write_int_3_p_0(VarId_6);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    libs__rat__write_rat_3_p_0(Coefficient_7);
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
  MR_Word Constraint_4)
{
  {
    MR_Word Terms_6;
    MR_Word Constant_7;
    MR_String OpStr_8;

    if (((MR_tag((MR_Word) Constraint_4)) == (MR_Integer) 1))
    {
      Terms_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint_4, (MR_Integer) 0))));
      Constant_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint_4, (MR_Integer) 1))));
      OpStr_8 = (MR_String) "eq(";
    }
    else
    {
      Terms_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));
      Constant_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
      OpStr_8 = (MR_String) "le(";
    }
    mercury__io__write_string_3_p_0(OpStr_8);
    mercury__io__write_char_3_p_0((MR_Char) 91);
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), Terms_6, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[7]));
    mercury__io__write_string_3_p_0((MR_String) "], ");
    libs__rat__write_rat_3_p_0(Constant_7);
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_6, VarNamePrint_7, Var_8);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(VarSet_6, VarNamePrint_7, Type_9);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  {
    MR_Word SymName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_10_10;
    MR_Box STATE_VARIABLE_U_12_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_14, (MR_Integer) 0, SymName_4, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_10_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) " - ")), STATE_VARIABLE_U_10_10, &STATE_VARIABLE_U_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 21))));
    func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (String_5)), STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_8);
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "refers_to_llds_stack";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "needs_call_standard_output_registers";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

          switch (Var_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_String) "high_level_backend";
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_String) "low_level_backend";
              break;
          }
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word UnitSelector_5)
{
  {
    MR_String String_6;

    if (((MR_tag((MR_Word) UnitSelector_5)) == (MR_Integer) 0))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
    }
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnitSelector_5, (MR_Integer) 0))));

      String_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TypeVarSet_4, (MR_Integer) 0, Type_7);
    }
    return String_6;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_String_6;

    conv0_String_6 = parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_String_6));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word TypeVarSet_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_String Str_9;
    MR_Word DataA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word DataB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word VarA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataA_7, (MR_Integer) 0))));
    MR_Word SelectorA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataA_7, (MR_Integer) 1))));
    MR_Word VarB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataB_8, (MR_Integer) 0))));
    MR_Word SelectorB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataB_8, (MR_Integer) 1))));
    MR_String VarStrA_14;
    MR_String VarStrB_15;
    MR_String SelectorStrA_16;
    MR_String SelectorStrB_17;
    MR_String StrA_18;
    MR_String StrB_19;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_32;
    MR_String Var_34;
    MR_Word UnitStrs_40;
    MR_Word Var_41;
    MR_Word UnitStrs_50;

    VarStrA_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, (MR_Integer) 0, VarA_10);
    VarStrB_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, (MR_Integer) 0, VarB_12);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (TypeVarSet_6));
    }
    UnitStrs_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, SelectorA_11);
    SelectorStrA_16 = mercury__string__join_list_2_f_0((MR_String) ", ", UnitStrs_40);
    UnitStrs_50 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, SelectorB_13);
    SelectorStrB_17 = mercury__string__join_list_2_f_0((MR_String) ", ", UnitStrs_50);
    Var_26 = mercury__string__f_43_43_2_f_0(SelectorStrA_16, (MR_String) "])");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_26);
    Var_23 = mercury__string__f_43_43_2_f_0(VarStrA_14, Var_24);
    StrA_18 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", Var_23);
    Var_32 = mercury__string__f_43_43_2_f_0(SelectorStrB_17, (MR_String) "])");
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_32);
    Var_29 = mercury__string__f_43_43_2_f_0(VarStrB_15, Var_30);
    StrB_19 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", Var_29);
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " - ", StrB_19);
    Str_9 = mercury__string__f_43_43_2_f_0(StrA_18, Var_34);
    return Str_9;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Char Char_4,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  {
    MR_bool succeeded;
    MR_Char QuoteChar_6;

    switch (Char_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          QuoteChar_6 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          QuoteChar_6 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          QuoteChar_6 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          QuoteChar_6 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_10_10;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (MR_Word) ((MR_Char) 92)), STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_10_10);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7))));
      func_1(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (MR_Word) (QuoteChar_6)), STATE_VARIABLE_U_10_10, STATE_VARIABLE_U_8);
    }
    else
    {
      switch (Char_4) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 9:
          succeeded = MR_TRUE;
          break;
        case (MR_Char) 10:
          succeeded = MR_TRUE;
          break;
      }
      if (!(succeeded))
      {
        succeeded = mercury__term_io__is_mercury_punctuation_char_1_p_0(Char_4);
        if (!(succeeded))
          succeeded = mercury__char__is_alnum_1_p_0(Char_4);
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7))));

        func_2(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (MR_Word) (Char_4)), STATE_VARIABLE_U_0_7, STATE_VARIABLE_U_8);
      }
      else
      {
        MR_String Var_13;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_13 = mercury__term_io__mercury_escape_char_1_f_0(Char_4);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (Var_13)), STATE_VARIABLE_U_0_7, STATE_VARIABLE_U_8);
      }
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_proc_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word FPInfo_5)
{
  {
    MR_String String_6;
    MR_Box conv0_String_6;

    parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Lang_4, FPInfo_5, ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
  MR_Word FDInfo_3)
{
  {
    MR_String String_4;
    MR_Word Lang_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word IsLocal_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word LiteralOrInclude_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 1))));
    MR_String STATE_VARIABLE_U_12_15;
    MR_String STATE_VARIABLE_U_13_16;
    MR_String STATE_VARIABLE_U_15_18;
    MR_String STATE_VARIABLE_U_19_22;
    MR_String STATE_VARIABLE_U_21_24;
    MR_String STATE_VARIABLE_U_22_25;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 0)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_12_15;
    MR_Box conv2_STATE_VARIABLE_U_13_16;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_15_18;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_21_24;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_String_4;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_12_15);
    STATE_VARIABLE_U_12_15 = ((MR_String) (conv1_STATE_VARIABLE_U_12_15));
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Lang_11, ((MR_Box) (STATE_VARIABLE_U_12_15)), &conv2_STATE_VARIABLE_U_13_16);
    STATE_VARIABLE_U_13_16 = ((MR_String) (conv2_STATE_VARIABLE_U_13_16));
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (STATE_VARIABLE_U_13_16)), &conv4_STATE_VARIABLE_U_15_18);
    STATE_VARIABLE_U_15_18 = ((MR_String) (conv4_STATE_VARIABLE_U_15_18));
    switch (IsLocal_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_U_19_22;

          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (STATE_VARIABLE_U_15_18)), &conv6_STATE_VARIABLE_U_19_22);
          STATE_VARIABLE_U_19_22 = ((MR_String) (conv6_STATE_VARIABLE_U_19_22));
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv8_STATE_VARIABLE_U_19_22;

          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) (STATE_VARIABLE_U_15_18)), &conv8_STATE_VARIABLE_U_19_22);
          STATE_VARIABLE_U_19_22 = ((MR_String) (conv8_STATE_VARIABLE_U_19_22));
        }
        break;
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (STATE_VARIABLE_U_19_22)), &conv10_STATE_VARIABLE_U_21_24);
    STATE_VARIABLE_U_21_24 = ((MR_String) (conv10_STATE_VARIABLE_U_21_24));
    if (((MR_tag((MR_Word) LiteralOrInclude_13)) == (MR_Integer) 1))
    {
      MR_String FileName_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_13, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_11_35;
      MR_String STATE_VARIABLE_U_12_36;
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv12_STATE_VARIABLE_U_11_35;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_U_12_36;
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv16_STATE_VARIABLE_U_22_25;

      func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (STATE_VARIABLE_U_21_24)), &conv12_STATE_VARIABLE_U_11_35);
      STATE_VARIABLE_U_11_35 = ((MR_String) (conv12_STATE_VARIABLE_U_11_35));
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 21))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (FileName_33)), ((MR_Box) (STATE_VARIABLE_U_11_35)), &conv14_STATE_VARIABLE_U_12_36);
      STATE_VARIABLE_U_12_36 = ((MR_String) (conv14_STATE_VARIABLE_U_12_36));
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_U_12_36)), &conv16_STATE_VARIABLE_U_22_25);
      STATE_VARIABLE_U_22_25 = ((MR_String) (conv16_STATE_VARIABLE_U_22_25));
    }
    else
    {
      MR_Word TypeInfo_15_59;
      MR_String Code_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_13, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_9_45;
      MR_String STATE_VARIABLE_U_10_46;
      void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv18_STATE_VARIABLE_U_9_45;
      MR_Box conv19_STATE_VARIABLE_U_10_46;
      void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv21_STATE_VARIABLE_U_22_25;

      func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_U_21_24)), &conv18_STATE_VARIABLE_U_9_45);
      STATE_VARIABLE_U_9_45 = ((MR_String) (conv18_STATE_VARIABLE_U_9_45));
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 1, &TypeInfo_15_59);
      mercury__string__foldl_4_p_0(TypeInfo_15_59, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[2]), Code_32, ((MR_Box) (STATE_VARIABLE_U_9_45)), &conv19_STATE_VARIABLE_U_10_46);
      STATE_VARIABLE_U_10_46 = ((MR_String) (conv19_STATE_VARIABLE_U_10_46));
      func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_U_10_46)), &conv21_STATE_VARIABLE_U_22_25);
      STATE_VARIABLE_U_22_25 = ((MR_String) (conv21_STATE_VARIABLE_U_22_25));
    }
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (STATE_VARIABLE_U_22_25)), &conv23_String_4);
    String_4 = ((MR_String) (conv23_String_4));
    return String_4;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_decl_to_string_5_f_0(
  MR_Word PredName_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_String PragmaName_10,
  MR_Word MaybeAfter_11)
{
  {
    MR_String String_12;
    MR_Integer DeclaredArity_23;
    MR_String STATE_VARIABLE_U_20_27;
    MR_String STATE_VARIABLE_U_21_28;
    MR_String STATE_VARIABLE_U_23_30;
    MR_String STATE_VARIABLE_U_25_32;
    MR_String STATE_VARIABLE_U_27_34;
    MR_String STATE_VARIABLE_U_28_35;
    MR_String STATE_VARIABLE_U_31_38;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_20_27;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_21_28;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_23_30;
    MR_Box conv6_STATE_VARIABLE_U_25_32;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_27_34;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_28_35;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_String_12;

    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          DeclaredArity_23 = (MR_Integer) ((MR_Unsigned) Arity_8 - (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        DeclaredArity_23 = Arity_8;
        break;
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_20_27);
    STATE_VARIABLE_U_20_27 = ((MR_String) (conv1_STATE_VARIABLE_U_20_27));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (PragmaName_10)), ((MR_Box) (STATE_VARIABLE_U_20_27)), &conv3_STATE_VARIABLE_U_21_28);
    STATE_VARIABLE_U_21_28 = ((MR_String) (conv3_STATE_VARIABLE_U_21_28));
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_U_21_28)), &conv5_STATE_VARIABLE_U_23_30);
    STATE_VARIABLE_U_23_30 = ((MR_String) (conv5_STATE_VARIABLE_U_23_30));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_7, ((MR_Box) (STATE_VARIABLE_U_23_30)), &conv6_STATE_VARIABLE_U_25_32);
    STATE_VARIABLE_U_25_32 = ((MR_String) (conv6_STATE_VARIABLE_U_25_32));
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (STATE_VARIABLE_U_25_32)), &conv8_STATE_VARIABLE_U_27_34);
    STATE_VARIABLE_U_27_34 = ((MR_String) (conv8_STATE_VARIABLE_U_27_34));
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (DeclaredArity_23)), ((MR_Box) (STATE_VARIABLE_U_27_34)), &conv10_STATE_VARIABLE_U_28_35);
    STATE_VARIABLE_U_28_35 = ((MR_String) (conv10_STATE_VARIABLE_U_28_35));
    if ((MaybeAfter_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_31_38 = STATE_VARIABLE_U_28_35;
    else
    {
      MR_String After_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeAfter_11, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_30_37;
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv12_STATE_VARIABLE_U_30_37;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_U_31_38;

      func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (STATE_VARIABLE_U_28_35)), &conv12_STATE_VARIABLE_U_30_37);
      STATE_VARIABLE_U_30_37 = ((MR_String) (conv12_STATE_VARIABLE_U_30_37));
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (After_24)), ((MR_Box) (STATE_VARIABLE_U_30_37)), &conv14_STATE_VARIABLE_U_31_38);
      STATE_VARIABLE_U_31_38 = ((MR_String) (conv14_STATE_VARIABLE_U_31_38));
    }
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (STATE_VARIABLE_U_31_38)), &conv16_String_12);
    String_12 = ((MR_String) (conv16_String_12));
    return String_12;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(
  MR_Word Info_5,
  MR_Word ItemPragma_6)
{
  {
    MR_Word Pragma_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_6, (MR_Integer) 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_6, (MR_Integer) 2))));
    MR_Word Lang_12;

    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_10);
    Lang_12 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_5);
    switch (MR_tag((MR_Word) Pragma_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_13 = (MR_Word) (MR_body((MR_Word) (Pragma_8), (MR_Integer) 0));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(FDInfo_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FCInfo_14 = (MR_Word) (MR_body((MR_Word) (Pragma_8), (MR_Integer) 1));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(FCInfo_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_16 = (MR_Word) (MR_body((MR_Word) (Pragma_8), (MR_Integer) 2));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(Lang_12, FPInfo_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FPEInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Box conv4_STATE_VARIABLE_IO_40;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_12, FPEInfo_17, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word FEEInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_IO_40;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), FEEInfo_18, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_40);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word FEInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Box conv2_STATE_VARIABLE_IO_40;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), FEInfo_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_40);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ExternalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Box conv0_STATE_VARIABLE_IO_40;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), ExternalInfo_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_40);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeSpecInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0((MR_Integer) 0, Lang_12, TypeSpecInfo_21);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word PredNameArity_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_23, (MR_Integer) 0))));
              MR_Integer Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_23, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_24, Arity_25, (MR_Integer) 0, (MR_String) "inline", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word PredNameArity_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_116, (MR_Integer) 0))));
              MR_Integer Arity_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_116, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_117, Arity_118, (MR_Integer) 0, (MR_String) "no_inline", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word PredNameArity_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_119, (MR_Integer) 0))));
              MR_Integer Arity_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_119, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_120, Arity_121, (MR_Integer) 0, (MR_String) "consider_used", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word UnusedArgsInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(UnusedArgsInfo_26);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ExceptionsInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(ExceptionsInfo_27);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word TrailingInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(TrailingInfo_28);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TablingInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(TablingInfo_29);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PredNameArity_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_122, (MR_Integer) 0))));
              MR_Integer Arity_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_122, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_123, Arity_124, (MR_Integer) 0, (MR_String) "obsolete", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word PredNameArity_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_125, (MR_Integer) 0))));
              MR_Integer Arity_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_125, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_126, Arity_127, (MR_Integer) 0, (MR_String) "no_determinism_warning", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word RequireTailrecPragma_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_recursion_4_p_0(Lang_12, RequireTailrecPragma_30);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TabledInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(TabledInfo_31);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word FactTableInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_IO_40;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), FactTableInfo_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word OISUInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(OISUInfo_33);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word PredNameArity_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_128, (MR_Integer) 0))));
              MR_Integer Arity_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_128, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_129, Arity_130, (MR_Integer) 0, (MR_String) "promise_equivalent_clauses", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word PredNameArity_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_131, (MR_Integer) 0))));
              MR_Integer Arity_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_131, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_132, Arity_133, (MR_Integer) 0, (MR_String) "promise_pure", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word PredNameArity_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_134, (MR_Integer) 0))));
              MR_Integer Arity_136 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_134, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_135, Arity_136, (MR_Integer) 0, (MR_String) "promise_semipure", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word TermInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(Lang_12, TermInfo_34);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word Term2Info_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(Lang_12, Term2Info_35);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word PredNameArity_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_137, (MR_Integer) 0))));
              MR_Integer Arity_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_137, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_138, Arity_139, (MR_Integer) 0, (MR_String) "terminates", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word PredNameArity_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_140, (MR_Integer) 0))));
              MR_Integer Arity_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_140, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_141, Arity_142, (MR_Integer) 0, (MR_String) "does_not_terminate", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word PredNameArity_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_143, (MR_Integer) 0))));
              MR_Integer Arity_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_143, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_144, Arity_145, (MR_Integer) 0, (MR_String) "check_termination", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word PredNameArity_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Word Pred_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_146, (MR_Integer) 0))));
              MR_Integer Arity_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_146, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(Pred_147, Arity_148, (MR_Integer) 0, (MR_String) "mode_check_clauses", (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word SharingInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(Lang_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), SharingInfo_36);
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ReuseInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(Lang_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ReuseInfo_37);
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word FIMInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(FIMInfo_15);
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word RFSInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_8, (MR_Integer) 1))));
              MR_Box conv5_STATE_VARIABLE_IO_40;

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), RFSInfo_38, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_40);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word RFSInfo_4,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  {
    MR_Word Features0_6 = (MR_Word) (RFSInfo_4);
    MR_Word Features_7;
    MR_Box STATE_VARIABLE_U_11_11;
    MR_Word Var_13;
    MR_Box STATE_VARIABLE_U_14_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    Features_7 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), Features0_6);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_11_11);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeClassInfo_for_output_17));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)), ((MR_Box) (Features_7)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (Var_13)), STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_14_14);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_9);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
  MR_Word Lang_5,
  MR_Word Term2Info_6)
{
  {
    MR_Word PredModesPF_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_6, (MR_Integer) 0))));
    MR_Word MaybeSuccess_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_6, (MR_Integer) 1))));
    MR_Word MaybeFailure_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_6, (MR_Integer) 2))));
    MR_Word MaybeTermination_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_6, (MR_Integer) 3))));
    MR_Word PredName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_8, (MR_Integer) 0))));
    MR_Word ModeList_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_8, (MR_Integer) 1))));
    MR_Word PredOrFunc_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_8, (MR_Integer) 2))));

    mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    switch (PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncModeList_15;
          MR_Word RetMode_16;
          MR_Word Var_21;
          MR_Box conv0_RetMode_16;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_13, &FuncModeList_15, &conv0_RetMode_16);
          RetMode_16 = ((MR_Word) (conv0_RetMode_16));
          Var_21 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(Lang_5, Var_21, PredName_12, FuncModeList_15, RetMode_16, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_24;

          Var_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(Lang_5, Var_24, PredName_12, ModeList_13, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((MaybeSuccess_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "not_set");
    }
    else
    {
      MR_Word ArgSizeInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuccess_9, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "constaints(");
      mercury__io__write_char_3_p_0((MR_Char) 91);
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), ArgSizeInfo_46, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[5]));
      mercury__io__write_string_3_p_0((MR_String) "])");
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((MaybeFailure_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "not_set");
    }
    else
    {
      MR_Word ArgSizeInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailure_10, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "constaints(");
      mercury__io__write_char_3_p_0((MR_Char) 91);
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), ArgSizeInfo_68, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[6]));
      mercury__io__write_string_3_p_0((MR_String) "])");
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((MaybeTermination_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "not_set");
    }
    else
    {
      MR_Word Termination_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_11, (MR_Integer) 0))));
      MR_String TerminationStr_91;

      if (((MR_tag((MR_Word) Termination_89)) == (MR_Integer) 1))
        TerminationStr_91 = (MR_String) "can_loop";
      else
        TerminationStr_91 = (MR_String) "cannot_loop";
      mercury__io__write_string_3_p_0(TerminationStr_91);
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
  MR_Word Lang_5,
  MR_Word TermInfo_6)
{
  {
    MR_Word PredNameModesPF_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_6, (MR_Integer) 0))));
    MR_Word MaybeArgSize_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_6, (MR_Integer) 1))));
    MR_Word MaybeTermination_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_6, (MR_Integer) 2))));
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_8, (MR_Integer) 0))));
    MR_Word ModeList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_8, (MR_Integer) 1))));
    MR_Word PredOrFunc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_8, (MR_Integer) 2))));

    parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Lang_5, PredOrFunc_13, SymName_11, ModeList_12, MaybeArgSize_9, MaybeTermination_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word TypeInfo_for_S_38,
  MR_Word Lang_9,
  MR_Word PredOrFunc_10,
  MR_Word SymName_11,
  MR_Word ModeList_12,
  MR_Word MaybeArgSize_13,
  MR_Word MaybeTermination_14)
{
  {
    MR_Word InitVarSet_16;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma termination_info(");
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InitVarSet_16);
    switch (PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncModeList_17;
          MR_Word RetMode_18;
          MR_Box conv0_RetMode_18;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_12, &FuncModeList_17, &conv0_RetMode_18);
          RetMode_18 = ((MR_Word) (conv0_RetMode_18));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(Lang_9, InitVarSet_16, SymName_11, FuncModeList_17, RetMode_18, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(Lang_9, InitVarSet_16, SymName_11, ModeList_12, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(TypeInfo_for_T_37, (MR_Integer) 0, MaybeArgSize_13);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(TypeInfo_for_S_38, TypeInfo_for_T_37, (MR_Integer) 0, MaybeTermination_14);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(
  MR_Word TypeInfo_for_S_25,
  MR_Word TypeInfo_for_T_26,
  MR_Word Verbose_5,
  MR_Word MaybeTerminationInfo_6)
{
  if ((MaybeTerminationInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_3_p_0((MR_String) "not_set");
  }
  else
  {
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerminationInfo_6, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1))
    {
      MR_Box Error_9 = (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0));

      mercury__io__write_string_3_p_0((MR_String) "can_loop");
      switch (Verbose_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__io__write_3_p_0(TypeInfo_for_T_26, Error_9);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Verbose_5,
  MR_Word MaybeArgSizeInfo_6)
{
  if ((MaybeArgSizeInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_3_p_0((MR_String) "not_set");
  }
  else
  {
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSizeInfo_6, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0))
    {
      MR_Integer Const_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
      MR_Word UsedArgs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));

      mercury__io__write_string_3_p_0((MR_String) "finite(");
      mercury__io__write_int_3_p_0(Const_9);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      if ((UsedArgs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "[]");
      }
      else
      {
        MR_Word UsedArg_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UsedArgs_10, (MR_Integer) 0))));
        MR_Word UsedArgs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UsedArgs_10, (MR_Integer) 1))));

        mercury__io__write_string_3_p_0((MR_String) "[");
        switch (UsedArg_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "no");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "yes");
            }
            break;
        }
        parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(UsedArgs_40);
        mercury__io__write_string_3_p_0((MR_String) "]");
      }
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_Box Error_8 = (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0));

      mercury__io__write_string_3_p_0((MR_String) "infinite");
      switch (Verbose_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__io__write_3_p_0(TypeInfo_for_T_32, Error_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word UsedArg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word UsedArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      switch (UsedArg_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "no");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "yes");
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = UsedArgs_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
  MR_Word OISUInfo_4)
{
  {
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_4, (MR_Integer) 0))));
    MR_Word CreatorPreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_4, (MR_Integer) 1))));
    MR_Word MutatorPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_4, (MR_Integer) 2))));
    MR_Word DestructorPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_4, (MR_Integer) 3))));
    MR_Word TypeName_18;
    MR_Integer TypeArity_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_15_21;
    MR_Box conv2_STATE_VARIABLE_U_17_23;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_19_25;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_20_26;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_22_28;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_24_30;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_27_33;
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv15_STATE_VARIABLE_U_29_35;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv18_STATE_VARIABLE_U_32_38;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_STATE_VARIABLE_U_34_40;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_STATE_VARIABLE_U_37_43;
    void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv25_STATE_VARIABLE_IO_7;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15_21);
    TypeName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0))));
    TypeArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, TypeName_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_17_23);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_19_25);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (TypeArity_19)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_20_26);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_22_28);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_24_30);
    if (!((CreatorPreds_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredNameArity_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CreatorPreds_15, (MR_Integer) 0))));
      MR_Word PredNameArities_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CreatorPreds_15, (MR_Integer) 1))));
      MR_Box conv11_STATE_VARIABLE_U_25_31;

      parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredNameArity_49, PredNameArities_50, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_25_31);
    }
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_27_33);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_29_35);
    if (!((MutatorPreds_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredNameArity_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MutatorPreds_16, (MR_Integer) 0))));
      MR_Word PredNameArities_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MutatorPreds_16, (MR_Integer) 1))));
      MR_Box conv16_STATE_VARIABLE_U_30_36;

      parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredNameArity_58, PredNameArities_59, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_30_36);
    }
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_32_38);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_34_40);
    if (!((DestructorPreds_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredNameArity_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestructorPreds_17, (MR_Integer) 0))));
      MR_Word PredNameArities_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestructorPreds_17, (MR_Integer) 1))));
      MR_Box conv21_STATE_VARIABLE_U_35_41;

      parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredNameArity_67, PredNameArities_68, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_35_41);
    }
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_37_43);
    func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_7);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
  MR_Word TypeClassInfo_for_output_20,
  MR_Word PredNameArity_5,
  MR_Word PredNameArities_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  while (MR_TRUE)
  {
    MR_Box STATE_VARIABLE_U_13_13;
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Word PredName_25;
    MR_Integer Arity_26;
    MR_Box STATE_VARIABLE_U_11_28;
    MR_Box STATE_VARIABLE_U_13_30;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) "\t\t")), STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_13_13);
    PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_5, (MR_Integer) 0))));
    Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_5, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_20, (MR_Integer) 0, PredName_25, STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_11_28);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_11_28, &STATE_VARIABLE_U_13_30);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 8))));
    func_2(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) (Arity_26)), STATE_VARIABLE_U_13_30, &STATE_VARIABLE_U_14_14);
    if ((PredNameArities_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));

      func_3(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_11);
    }
    else
    {
      MR_Word HeadPredNameArity_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredNameArities_6, (MR_Integer) 0))));
      MR_Word TailPredNameArities_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredNameArities_6, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_16_16;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_PredNameArity_5;
      MR_Word next_value_of_PredNameArities_6;
      MR_Box next_value_of_STATE_VARIABLE_U_0_10;

      func_4(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) ",\n")), STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_PredNameArity_5 = HeadPredNameArity_8;
      next_value_of_PredNameArities_6 = TailPredNameArities_9;
      next_value_of_STATE_VARIABLE_U_0_10 = STATE_VARIABLE_U_16_16;
      PredNameArity_5 = next_value_of_PredNameArity_5;
      PredNameArities_6 = next_value_of_PredNameArities_6;
      STATE_VARIABLE_U_0_10 = next_value_of_STATE_VARIABLE_U_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word FactTableInfo_4,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  {
    MR_Word PredNameArity_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FactTableInfo_4, (MR_Integer) 0))));
    MR_String FileName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), FactTableInfo_4, (MR_Integer) 1))));
    MR_Word PredName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_6, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_13_13;
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_21_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ":- pragma fact_table(")), STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_13_13);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_24, (MR_Integer) 0, PredName_8, STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 8))));
    func_2(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) (Arity_9)), STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 21))));
    func_4(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) (FileName_7)), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_21_21);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_21_21, STATE_VARIABLE_U_11);
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
  MR_Word TabledInfo_4)
{
  {
    MR_Word EvalMethod_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_4, (MR_Integer) 0))));
    MR_Word PredNameArityMPF_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_4, (MR_Integer) 1))));
    MR_Word MaybeAttributes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_4, (MR_Integer) 3))));
    MR_Word PredName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_7, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_7, (MR_Integer) 1))));
    MR_String PragmaName_13;
    MR_Word MaybeAfter_28;

    PragmaName_13 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(EvalMethod_6);
    if ((MaybeAttributes_9 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeAfter_28 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Attributes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_9, (MR_Integer) 0))));
      MR_Word Strictness_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_14, (MR_Integer) 0))));
      MR_Word MaybeSizeLimit_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_14, (MR_Integer) 1))));
      MR_Word Stats_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_14, (MR_Integer) 2))));
      MR_Word AllowReset_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_14, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_Strs_43_43;
      MR_Word STATE_VARIABLE_Strs_49_49;
      MR_Word STATE_VARIABLE_Strs_50_50;
      MR_Word STATE_VARIABLE_Strs_52_52;

      switch (MR_tag((MR_Word) Strictness_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Strictness_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Strs_43_43 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Strs_43_43 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[26]));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_15, (MR_Integer) 0))));
            MR_Word HiddenArgMethod_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_15, (MR_Integer) 1))));
            MR_Word ArgStrs_22;
            MR_String ArgsStr_23;
            MR_String HiddenArgStr_24;
            MR_String SpecifiedStr_25;
            MR_String Var_37;
            MR_String Var_38;
            MR_String Var_40;

            ArgStrs_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[4]), Args_20);
            ArgsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgStrs_22);
            switch (HiddenArgMethod_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                HiddenArgStr_24 = (MR_String) "hidden_arg_addr";
                break;
              case (MR_Integer) 0:
                HiddenArgStr_24 = (MR_String) "hidden_arg_value";
                break;
            }
            Var_40 = mercury__string__f_43_43_2_f_0(HiddenArgStr_24, (MR_String) ")");
            Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "], ", Var_40);
            Var_37 = mercury__string__f_43_43_2_f_0(ArgsStr_23, Var_38);
            SpecifiedStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", Var_37);
            {
              STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_43_43, 0) = ((MR_Box) (SpecifiedStr_25));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_43_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      if ((MaybeSizeLimit_16 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Strs_49_49 = STATE_VARIABLE_Strs_43_43;
      else
      {
        MR_Integer SizeLimit_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSizeLimit_16, (MR_Integer) 0))));
        MR_String LimitStr_27;
        MR_String Var_46;
        MR_String Var_47;

        Var_47 = mercury__string__int_to_string_1_f_0(SizeLimit_26);
        Var_46 = mercury__string__f_43_43_2_f_0(Var_47, (MR_String) ")");
        LimitStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", Var_46);
        {
          STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) (LimitStr_27));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (STATE_VARIABLE_Strs_43_43));
        }
      }
      switch (Stats_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Strs_50_50 = STATE_VARIABLE_Strs_49_49;
          break;
        case (MR_Integer) 0:
          {
            {
              STATE_VARIABLE_Strs_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_50_50, 0) = ((MR_Box) ((MR_String) "statistics"));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_50_50, 1) = ((MR_Box) (STATE_VARIABLE_Strs_49_49));
            }
          }
          break;
      }
      switch (AllowReset_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              STATE_VARIABLE_Strs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_52_52, 0) = ((MR_Box) ((MR_String) "allow_reset"));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_52_52, 1) = ((MR_Box) (STATE_VARIABLE_Strs_50_50));
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Strs_52_52 = STATE_VARIABLE_Strs_50_50;
          break;
      }
      if ((STATE_VARIABLE_Strs_52_52 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeAfter_28 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_String Var_54;
        MR_String Var_56;
        MR_String Var_57;

        Var_57 = mercury__string__join_list_2_f_0((MR_String) ", ", STATE_VARIABLE_Strs_52_52);
        Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) "]");
        Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_56);
        {
          MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeAfter_28, 0) = ((MR_Box) (Var_54));
        }
      }
    }
    parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredName_10, Arity_11, (MR_Integer) 0, PragmaName_13, MaybeAfter_28);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_recursion_4_p_0(
  MR_Word Lang_5,
  MR_Word RequireTR_6)
{
  {
    MR_Word Proc_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTR_6, (MR_Integer) 0))));
    MR_Word Info_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTR_6, (MR_Integer) 1))));
    MR_String ProcSpecStr_10;
    MR_Word Pred_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_8, (MR_Integer) 0))));
    MR_Integer Arity_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_8, (MR_Integer) 1))));
    MR_Word MaybePredOrFunc_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_8, (MR_Integer) 2))));
    MR_Word MaybeMode_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_8, (MR_Integer) 3))));
    MR_Word PredOrFunc_54;

    if ((MaybePredOrFunc_52 == (MR_Word) ((MR_Unsigned) 0U)))
      PredOrFunc_54 = (MR_Integer) 0;
    else
      PredOrFunc_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_52, (MR_Integer) 0))));
    if ((MaybeMode_53 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer DeclaredArity_55;
      MR_String Var_66;
      MR_String Var_72;
      MR_String Var_80;

      switch (PredOrFunc_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            DeclaredArity_55 = (MR_Integer) ((MR_Unsigned) Arity_51 - (MR_Unsigned) (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 0:
          DeclaredArity_55 = Arity_51;
          break;
      }
      Var_66 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(Pred_50);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_10[0]), DeclaredArity_55, &Var_72);
      Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_72);
      ProcSpecStr_10 = mercury__string__f_43_43_2_f_0(Var_66, Var_80);
    }
    else
    {
      MR_Word ModeList_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_53, (MR_Integer) 0))));
      MR_Word InitVarSet_57;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InitVarSet_57);
      switch (PredOrFunc_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncModeList_58;
            MR_Word RetMode_59;
            MR_Box conv0_RetMode_59;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_56, &FuncModeList_58, &conv0_RetMode_59);
            RetMode_59 = ((MR_Word) (conv0_RetMode_59));
            ProcSpecStr_10 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_5, InitVarSet_57, Pred_50, FuncModeList_58, RetMode_59, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 0:
          {
            ProcSpecStr_10 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_5, InitVarSet_57, Pred_50, ModeList_56, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
      }
    }
    if (((MR_tag((MR_Word) Info_9)) == (MR_Integer) 1))
    {
      MR_Word WarnOrError_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Info_9, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Type_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Info_9, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String WarnOrErrorStr_15;
      MR_String TypeStr_16;
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Info_9, (MR_Integer) 0)));

      libs__compiler_util__warning_or_error_string_2_p_0(WarnOrError_12, &WarnOrErrorStr_15);
      parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(Type_13, &TypeStr_16);
      mercury__io__write_string_3_p_0((MR_String) ":- pragma warn_tail_recursion(");
      mercury__io__write_string_3_p_0(ProcSpecStr_10);
      mercury__io__write_string_3_p_0((MR_String) ", [");
      mercury__io__write_string_3_p_0(WarnOrErrorStr_15);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_string_3_p_0(TypeStr_16);
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma warn_tail_recursion(");
      mercury__io__write_string_3_p_0(ProcSpecStr_10);
      mercury__io__write_string_3_p_0((MR_String) ", [none]).\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
  MR_Word TypeClassInfo_for_output_31,
  MR_Word ExternalInfo_4,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_Word PredName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_4, (MR_Integer) 0))));
    MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExternalInfo_4, (MR_Integer) 1))));
    MR_Word PorF_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_4, (MR_Integer) 2))));
    MR_Word MaybeBackend_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_4, (MR_Integer) 3))));
    MR_String PorFStr_10;
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_28_28;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    PorFStr_10 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PorF_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) ":- pragma external_")), STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (PorFStr_10)), STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_16_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_31, PredName_6, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_19_19);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
    func_4(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (Arity_7)), STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
    if ((MaybeBackend_9 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_28_28 = STATE_VARIABLE_U_22_22;
    else
    {
      MR_Word Backend_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBackend_9, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_24_24;
      MR_String Var_25;
      MR_Box STATE_VARIABLE_U_26_26;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_5(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) ", [")), STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      switch (Backend_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_25 = (MR_String) "high_level_backend";
          break;
        case (MR_Integer) 1:
          Var_25 = (MR_String) "low_level_backend";
          break;
      }
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (Var_25)), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "]")), STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
    }
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_28_28, STATE_VARIABLE_U_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
  MR_Word TypeClassInfo_for_output_28,
  MR_Word FEInfo_4,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  {
    MR_Word Lang_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_4, (MR_Integer) 0))));
    MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_4, (MR_Integer) 1))));
    MR_Word Values_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_4, (MR_Integer) 2))));
    MR_Word TypeName_9;
    MR_Integer TypeArity_10;
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Box STATE_VARIABLE_U_9_34;
    MR_Word Var_36;
    MR_Box STATE_VARIABLE_U_12_37;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(TypeClassInfo_for_output_28, Lang_6, STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
    TypeName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
    TypeArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_28, (MR_Integer) 0, TypeName_9, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (TypeArity_10)), STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7))));
    func_5(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_9_34);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TypeClassInfo_for_output_28));
    }
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 27))));
    func_6(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (Values_8)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (Var_36)), STATE_VARIABLE_U_9_34, &STATE_VARIABLE_U_12_37);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7))));
    func_7(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_U_12_37, &STATE_VARIABLE_U_25_25);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
  MR_Word TypeClassInfo_for_output_32,
  MR_Word FEEInfo_4,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_Word Lang_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_4, (MR_Integer) 0))));
    MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_4, (MR_Integer) 1))));
    MR_Word Attributes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_4, (MR_Integer) 2))));
    MR_Word Overrides_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_4, (MR_Integer) 3))));
    MR_Word TypeName_10;
    MR_Integer TypeArity_11;
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_23_23;
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_28_28;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Word MaybePrefix_37;
    MR_Box STATE_VARIABLE_U_11_40;
    MR_Box STATE_VARIABLE_U_16_45;
    MR_Box STATE_VARIABLE_U_9_54;
    MR_Word Var_56;
    MR_Box STATE_VARIABLE_U_12_57;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(TypeClassInfo_for_output_32, Lang_6, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_16_16);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    TypeName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
    TypeArity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_32, (MR_Integer) 0, TypeName_10, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) "/")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) (TypeArity_11)), STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
    MaybePrefix_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_8, (MR_Integer) 0))));
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) "[")), STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_11_40);
    if ((MaybePrefix_37 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_16_45 = STATE_VARIABLE_U_11_40;
    else
    {
      MR_String Prefix_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefix_37, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_13_42;
      MR_Box STATE_VARIABLE_U_14_43;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) "prefix(")), STATE_VARIABLE_U_11_40, &STATE_VARIABLE_U_13_42);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 21))));
      func_7(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) (Prefix_38)), STATE_VARIABLE_U_13_42, &STATE_VARIABLE_U_14_43);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7))));
      func_8(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_U_14_43, &STATE_VARIABLE_U_16_45);
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) "]")), STATE_VARIABLE_U_16_45, &STATE_VARIABLE_U_26_26);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_10(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7))));
    func_11(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_9_54);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (TypeClassInfo_for_output_32));
    }
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 27))));
    func_12(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (Overrides_9)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (Var_56)), STATE_VARIABLE_U_9_54, &STATE_VARIABLE_U_12_57);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7))));
    func_13(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_U_12_57, &STATE_VARIABLE_U_29_29);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_29_29, STATE_VARIABLE_U_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
  MR_Word TypeClassInfo_for_output_41,
  MR_Word Lang_5,
  MR_Word FPEInfo_6,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  {
    MR_Word ForeignLang_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_6, (MR_Integer) 0))));
    MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_6, (MR_Integer) 1))));
    MR_String ExportName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo_6, (MR_Integer) 2))));
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_9, (MR_Integer) 0))));
    MR_Word ModeList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_9, (MR_Integer) 1))));
    MR_Word PredOrFunc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_9, (MR_Integer) 2))));
    MR_Word InstVarSet_14;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Box STATE_VARIABLE_U_23_23;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_35_35;
    MR_Box STATE_VARIABLE_U_37_37;
    MR_Box STATE_VARIABLE_U_38_38;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_14);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_20_20);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(TypeClassInfo_for_output_41, ForeignLang_8, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_21_21);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_23_23);
    parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_41, Name_11, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
    switch (PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ArgModes_15;
          MR_Word RetMode_16;
          MR_Box STATE_VARIABLE_U_31_31;
          MR_Box STATE_VARIABLE_U_32_32;
          MR_Box STATE_VARIABLE_U_34_34;
          MR_Box conv2_RetMode_16;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_12, &ArgModes_15, &conv2_RetMode_16);
          RetMode_16 = ((MR_Word) (conv2_RetMode_16));
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_31_31);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_41, Lang_5, InstVarSet_14, ArgModes_15, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_32_32);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
          func_4(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) ") = ")), STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_41, Lang_5, InstVarSet_14, RetMode_16, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_35_35);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_U_26_26;
          MR_Box STATE_VARIABLE_U_27_27;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_5(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_41, Lang_5, InstVarSet_14, ModeList_12, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_35_35);
        }
        break;
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) (ExportName_10)), STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_41)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_38_38, STATE_VARIABLE_U_18);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
  MR_Word FCInfo_4)
{
  {
    MR_Word Lang_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_4, (MR_Integer) 0))));
    MR_Word LiteralOrInclude_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_4, (MR_Integer) 1))));
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_code(");
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if (((MR_tag((MR_Word) LiteralOrInclude_7)) == (MR_Integer) 1))
    {
      MR_String FileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_7, (MR_Integer) 0))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv2_STATE_VARIABLE_U_11_26;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_U_12_27;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_IO_15_15;

      func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_11_26);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 21))));
      func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (FileName_24)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_12_27);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_15_15);
    }
    else
    {
      MR_Word TypeInfo_15_50;
      MR_String Code_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_7, (MR_Integer) 0))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv8_STATE_VARIABLE_U_9_36;
      MR_Box conv9_STATE_VARIABLE_U_10_37;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_IO_15_15;

      func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_9_36);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 1, &TypeInfo_15_50);
      mercury__string__foldl_4_p_0(TypeInfo_15_50, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[1]), Code_23, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_10_37);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_15_15);
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(
  MR_Word Lang_7,
  MR_Word MaybeVarSet_8,
  MR_Word MaybeTVarSet_9,
  MR_Word ReuseInfo_10)
{
  {
    MR_Word PredNameModesPF_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_10, (MR_Integer) 0))));
    MR_Word HeadVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_10, (MR_Integer) 1))));
    MR_Word HeadVarTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_10, (MR_Integer) 2))));
    MR_Word MaybeStructureReuseDomain_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_10, (MR_Integer) 3))));
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 0))));
    MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 1))));
    MR_Word PredOrFunc_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 2))));
    MR_Word InitVarSet_19;
    MR_Word VarSet_20;
    MR_Word TypeVarSet_21;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_reuse(");
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InitVarSet_19);
    if ((MaybeVarSet_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_20);
    }
    else
      VarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarSet_8, (MR_Integer) 0))));
    if ((MaybeTVarSet_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_21);
    }
    else
      TypeVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTVarSet_9, (MR_Integer) 0))));
    switch (PredOrFunc_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncModeList_22;
          MR_Word RetMode_23;
          MR_Box conv0_RetMode_23;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &FuncModeList_22, &conv0_RetMode_23);
          RetMode_23 = ((MR_Word) (conv0_RetMode_23));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(Lang_7, InitVarSet_19, SymName_16, FuncModeList_22, RetMode_23, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(Lang_7, InitVarSet_19, SymName_16, Modes_17, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((HeadVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "vars, types");
    }
    else
    {
      MR_Word Var_62;

      mercury__io__write_string_3_p_0((MR_String) "vars(");
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_20, (MR_Integer) 0, HeadVars_13);
      mercury__io__write_string_3_p_0((MR_String) "), ");
      mercury__io__write_string_3_p_0((MR_String) "types(");
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (TypeVarSet_21));
        MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVarTypes_14, (MR_String) ",", Var_62);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(VarSet_20, TypeVarSet_21, MaybeStructureReuseDomain_15);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(
  MR_Word Lang_7,
  MR_Word MaybeVarSet_8,
  MR_Word MaybeTVarSet_9,
  MR_Word SharingInfo_10)
{
  {
    MR_Word PredNameModesPF_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_10, (MR_Integer) 0))));
    MR_Word HeadVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_10, (MR_Integer) 1))));
    MR_Word HeadVarTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_10, (MR_Integer) 2))));
    MR_Word MaybeSharingAs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_10, (MR_Integer) 3))));
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 0))));
    MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 1))));
    MR_Word PredOrFunc_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 2))));
    MR_Word InitVarSet_19;
    MR_Word VarSet_20;
    MR_Word TypeVarSet_21;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_sharing(");
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InitVarSet_19);
    if ((MaybeVarSet_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_20);
    }
    else
      VarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarSet_8, (MR_Integer) 0))));
    if ((MaybeTVarSet_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_21);
    }
    else
      TypeVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTVarSet_9, (MR_Integer) 0))));
    switch (PredOrFunc_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncModeList_22;
          MR_Word RetMode_23;
          MR_Box conv0_RetMode_23;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &FuncModeList_22, &conv0_RetMode_23);
          RetMode_23 = ((MR_Word) (conv0_RetMode_23));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(Lang_7, InitVarSet_19, SymName_16, FuncModeList_22, RetMode_23, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(Lang_7, InitVarSet_19, SymName_16, Modes_17, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((HeadVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "vars, types");
    }
    else
    {
      MR_Word Var_62;

      mercury__io__write_string_3_p_0((MR_String) "vars(");
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_20, (MR_Integer) 0, HeadVars_13);
      mercury__io__write_string_3_p_0((MR_String) "), ");
      mercury__io__write_string_3_p_0((MR_String) "types(");
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (TypeVarSet_21));
        MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVarTypes_14, (MR_String) ",", Var_62);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(VarSet_20, TypeVarSet_21, MaybeSharingAs_15);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(
  MR_Word TablingInfo_4)
{
  {
    MR_Word PredNameArityPFMn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfo_4, (MR_Integer) 0))));
    MR_Word MM_TablingStatus_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfo_4, (MR_Integer) 1))));
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 2))));
    MR_Integer ModeNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 3))));

    mercury__io__write_string_3_p_0((MR_String) ":- pragma mm_tabling_info(");
    parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(SymName_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_9);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(ModeNum_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    switch (MM_TablingStatus_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "mm_tabled_conditional");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "mm_tabled_may_call");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "mm_tabled_will_not_call");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(
  MR_Word TrailingInfo_4)
{
  {
    MR_Word PredNameArityPFMn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailingInfo_4, (MR_Integer) 0))));
    MR_Word TrailingStatus_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailingInfo_4, (MR_Integer) 1))));
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 2))));
    MR_Integer ModeNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 3))));

    mercury__io__write_string_3_p_0((MR_String) ":- pragma trailing_info(");
    parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(SymName_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_9);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(ModeNum_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    switch (TrailingStatus_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "conditional");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "may_modify_trail");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "will_not_modify_trail");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(
  MR_Word ExceptionsInfo_4)
{
  {
    MR_Word PredNameArityPFMn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_4, (MR_Integer) 0))));
    MR_Word ThrowStatus_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_4, (MR_Integer) 1))));
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 2))));
    MR_Integer ModeNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 3))));

    mercury__io__write_string_3_p_0((MR_String) ":- pragma exceptions(");
    parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(SymName_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_9);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(ModeNum_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    switch (MR_tag((MR_Word) ThrowStatus_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ThrowStatus_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "will_not_throw");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "conditional");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExceptionType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThrowStatus_7, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "may_throw(");
          switch (ExceptionType_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "type_exception)");
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "user_exception)");
              }
              break;
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(
  MR_Word UnusedArgsInfo_4)
{
  {
    MR_Word PredNameArityPFMn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_4, (MR_Integer) 0))));
    MR_Word UnusedArgs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_4, (MR_Integer) 1))));
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 2))));
    MR_Integer ModeNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_6, (MR_Integer) 3))));

    mercury__io__write_string_3_p_0((MR_String) ":- pragma unused_args(");
    parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(SymName_8);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_9);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(ModeNum_11);
    mercury__io__write_string_3_p_0((MR_String) ", [");
    if (!((UnusedArgs_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer First_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), UnusedArgs_7, (MR_Integer) 0))));
      MR_Word Rest_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnusedArgs_7, (MR_Integer) 1))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
      MR_Box conv1_STATE_VARIABLE_U_12_40;
      MR_Box conv2_STATE_VARIABLE_IO_28_28;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (First_35)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_12_40);
      parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Rest_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_28_28);
    }
    mercury__io__write_string_3_p_0((MR_String) "]).\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_3 = STATE_VARIABLE_U_0_2;
    else
    {
      MR_Integer First_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Rest_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_13_13;
      MR_Box STATE_VARIABLE_U_14_14;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Box next_value_of_STATE_VARIABLE_U_0_2;

      func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_0_2, &STATE_VARIABLE_U_13_13);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 8))));
      func_1(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (First_7)), STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_8;
      next_value_of_STATE_VARIABLE_U_0_2 = STATE_VARIABLE_U_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_U_0_2 = next_value_of_STATE_VARIABLE_U_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(
  MR_Word VarNamePrint_6,
  MR_Word Lang_7,
  MR_Word TypeSpecInfo_8)
{
  {
    MR_Word PredName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 0))));
    MR_Word SpecName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 1))));
    MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 2))));
    MR_Word MaybePredOrFunc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 3))));
    MR_Word MaybeModes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 4))));
    MR_Word Subst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 5))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_8, (MR_Integer) 6))));
    MR_Word Var_51;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma type_spec(");
    if ((MaybeModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, PredName_10);
      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__io__write_int_3_p_0(Arity_12);
    }
    else
    {
      MR_Word Modes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_14, (MR_Integer) 0))));
      MR_Word PredOrFunc_20;

      if ((MaybePredOrFunc_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_pragma.mercury_output_pragma_type_spec\'/5", (MR_String) "no pred_or_func");
          return;
        }
      }
      else
        PredOrFunc_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_13, (MR_Integer) 0))));
      switch (PredOrFunc_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncModes_21;
            MR_Word RetMode_22;
            MR_Word InstVarSet_23;
            MR_Box conv0_RetMode_22;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_18, &FuncModes_21, &conv0_RetMode_22);
            RetMode_22 = ((MR_Word) (conv0_RetMode_22));
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredName_10);
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
            parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(Lang_7, InstVarSet_23, FuncModes_21);
            mercury__io__write_string_3_p_0((MR_String) ") = ");
            parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(Lang_7, InstVarSet_23, RetMode_22);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word InstVarSet_59;

            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredName_10);
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_59);
            parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(Lang_7, InstVarSet_59, Modes_18);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
    }
    mercury__io__write_string_3_p_0((MR_String) ", (");
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (VarSet_16));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (VarNamePrint_6));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[0]), Subst_15, (MR_String) ", ", Var_51);
    mercury__io__write_string_3_p_0((MR_String) "), ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, SpecName_11);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(
  MR_Word Lang_5,
  MR_Word FPInfo_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_5, FPInfo_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__add_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
  MR_Word TypeClassInfo_for_output_50,
  MR_Word Lang_5,
  MR_Word FPInfo_6,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24)
{
  {
    MR_Word TypeInfo_15_88;
    MR_Word Attributes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 0))));
    MR_Word PredName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 2))));
    MR_Word Vars0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 3))));
    MR_Word ProgVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 4))));
    MR_Word InstVarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 5))));
    MR_Word PragmaCode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_6, (MR_Integer) 6))));
    MR_Word ForeignLang_15;
    MR_String C_Code_21;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_27_27;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_30_30;
    MR_Box STATE_VARIABLE_U_41_41;
    MR_Box STATE_VARIABLE_U_43_43;
    MR_Box STATE_VARIABLE_U_44_44;
    MR_Box STATE_VARIABLE_U_46_46;
    MR_Box STATE_VARIABLE_U_47_47;
    MR_Box STATE_VARIABLE_U_11_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Box STATE_VARIABLE_U_15_62;
    MR_Box STATE_VARIABLE_U_9_74;
    MR_Box STATE_VARIABLE_U_10_75;
    MR_Word Var_82;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_26_26);
    ForeignLang_15 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_8);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(TypeClassInfo_for_output_50, ForeignLang_15, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
    parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_50, PredName_9, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_30_30);
    switch (PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Vars_16;
          MR_Box STATE_VARIABLE_U_36_36;
          MR_Box STATE_VARIABLE_U_38_38;
          MR_Box STATE_VARIABLE_U_39_39;
          MR_Word Var_179;
          MR_String VarName_183;
          MR_Word Mode_184;
          MR_Box STATE_VARIABLE_U_27_190;
          MR_Box STATE_VARIABLE_U_29_192;
          MR_Box conv2_Var_179;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars0_11, &Vars_16, &conv2_Var_179);
          Var_179 = ((MR_Word) (conv2_Var_179));
          if ((Vars_16 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_36_36 = STATE_VARIABLE_U_30_30;
          else
          {
            MR_Box STATE_VARIABLE_U_33_33;
            MR_Box STATE_VARIABLE_U_34_34;
            MR_Word Var_98;
            MR_Word Vars_99;
            MR_String VarName_102;
            MR_Word Mode_103;
            MR_Box STATE_VARIABLE_U_27_109;
            MR_Box STATE_VARIABLE_U_29_111;
            MR_Box STATE_VARIABLE_U_30_112;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

            func_3(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_33_33);
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_16, (MR_Integer) 0))));
            Vars_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_16, (MR_Integer) 1))));
            VarName_102 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_98, (MR_Integer) 1))));
            Mode_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_98, (MR_Integer) 2))));
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            func_4(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) (VarName_102)), STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_27_109);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            func_5(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) " :: ")), STATE_VARIABLE_U_27_109, &STATE_VARIABLE_U_29_111);
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Mode_103, STATE_VARIABLE_U_29_111, &STATE_VARIABLE_U_30_112);
            if ((Vars_99 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_U_34_34 = STATE_VARIABLE_U_30_112;
            else
            {
              MR_Box STATE_VARIABLE_U_32_114;
              MR_Word Var_152;
              MR_Word Vars_153;
              MR_String VarName_156;
              MR_Word Mode_157;
              MR_Box STATE_VARIABLE_U_27_163;
              MR_Box STATE_VARIABLE_U_29_165;
              MR_Box STATE_VARIABLE_U_30_166;
              MR_Box STATE_VARIABLE_U_32_168;
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

              func_6(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_30_112, &STATE_VARIABLE_U_32_114);
              Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_99, (MR_Integer) 0))));
              Vars_153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_99, (MR_Integer) 1))));
              VarName_156 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_152, (MR_Integer) 1))));
              Mode_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_152, (MR_Integer) 2))));
              func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
              func_7(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) (VarName_156)), STATE_VARIABLE_U_32_114, &STATE_VARIABLE_U_27_163);
              func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
              func_8(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) " :: ")), STATE_VARIABLE_U_27_163, &STATE_VARIABLE_U_29_165);
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Mode_157, STATE_VARIABLE_U_29_165, &STATE_VARIABLE_U_30_166);
              if ((Vars_153 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_32_168 = STATE_VARIABLE_U_30_166;
              else
              {
                void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));

                func_9(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_30_166, &STATE_VARIABLE_U_32_168);
              }
              parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Vars_153, STATE_VARIABLE_U_32_168, &STATE_VARIABLE_U_34_34);
            }
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            func_10(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_36_36);
          }
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_11(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) " = (")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
          VarName_183 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 1))));
          Mode_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 2))));
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_12(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) (VarName_183)), STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_27_190);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) " :: ")), STATE_VARIABLE_U_27_190, &STATE_VARIABLE_U_29_192);
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Mode_184, STATE_VARIABLE_U_29_192, &STATE_VARIABLE_U_39_39);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_14(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
        }
        break;
      case (MR_Integer) 0:
        if ((Vars0_11 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_41_41 = STATE_VARIABLE_U_30_30;
        else
        {
          MR_Box STATE_VARIABLE_U_33_260;
          MR_Box STATE_VARIABLE_U_34_261;
          MR_Word Var_263;
          MR_Word Vars_264;
          MR_String VarName_266;
          MR_Word Mode_267;
          MR_Box STATE_VARIABLE_U_27_269;
          MR_Box STATE_VARIABLE_U_29_271;
          MR_Box STATE_VARIABLE_U_30_272;
          void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_15(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_33_260);
          Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars0_11, (MR_Integer) 0))));
          Vars_264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars0_11, (MR_Integer) 1))));
          VarName_266 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_263, (MR_Integer) 1))));
          Mode_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_263, (MR_Integer) 2))));
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_16(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) (VarName_266)), STATE_VARIABLE_U_33_260, &STATE_VARIABLE_U_27_269);
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_17(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) " :: ")), STATE_VARIABLE_U_27_269, &STATE_VARIABLE_U_29_271);
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Mode_267, STATE_VARIABLE_U_29_271, &STATE_VARIABLE_U_30_272);
          if ((Vars_264 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_34_261 = STATE_VARIABLE_U_30_272;
          else
          {
            MR_Box STATE_VARIABLE_U_32_232;
            MR_Word Var_233;
            MR_Word Vars_234;
            MR_String VarName_236;
            MR_Word Mode_237;
            MR_Box STATE_VARIABLE_U_27_239;
            MR_Box STATE_VARIABLE_U_29_241;
            MR_Box STATE_VARIABLE_U_30_242;
            MR_Box STATE_VARIABLE_U_32_244;
            void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);

            func_18(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_30_272, &STATE_VARIABLE_U_32_232);
            Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_264, (MR_Integer) 0))));
            Vars_234 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_264, (MR_Integer) 1))));
            VarName_236 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_233, (MR_Integer) 1))));
            Mode_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_233, (MR_Integer) 2))));
            func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            func_19(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) (VarName_236)), STATE_VARIABLE_U_32_232, &STATE_VARIABLE_U_27_239);
            func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
            func_20(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) " :: ")), STATE_VARIABLE_U_27_239, &STATE_VARIABLE_U_29_241);
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Mode_237, STATE_VARIABLE_U_29_241, &STATE_VARIABLE_U_30_242);
            if ((Vars_234 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_U_32_244 = STATE_VARIABLE_U_30_242;
            else
            {
              void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));

              func_21(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_30_242, &STATE_VARIABLE_U_32_244);
            }
            parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(TypeClassInfo_for_output_50, Lang_5, InstVarSet_13, Vars_234, STATE_VARIABLE_U_32_244, &STATE_VARIABLE_U_34_261);
          }
          func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
          func_22(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_34_261, &STATE_VARIABLE_U_41_41);
        }
        break;
    }
    func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_23(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
    func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_24(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) "[")), STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_11_58);
    Var_59 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(Attributes_8, ProgVarSet_12);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (TypeClassInfo_for_output_50));
    }
    func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 27))));
    func_25(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (Var_59)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_61)), STATE_VARIABLE_U_11_58, &STATE_VARIABLE_U_15_62);
    func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_26(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) "]")), STATE_VARIABLE_U_15_62, &STATE_VARIABLE_U_44_44);
    func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_27(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
    C_Code_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaCode_14, (MR_Integer) 0))));
    func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_28(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_9_74);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (TypeClassInfo_for_output_50));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_50, (MR_Integer) 1, &TypeInfo_15_88);
    mercury__string__foldl_4_p_0(TypeInfo_15_88, Var_82, C_Code_21, STATE_VARIABLE_U_9_74, &STATE_VARIABLE_U_10_75);
    func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_29(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_U_10_75, &STATE_VARIABLE_U_47_47);
    func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5))));
    func_30(((MR_Box) (TypeClassInfo_for_output_50)), ((MR_Box) ((MR_String) ").\n")), STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_24);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word TypeClassInfo_for_output_34,
  MR_Word Lang_1,
  MR_Word InstVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_String VarName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      MR_Word Mode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_U_27_27;
      MR_Box STATE_VARIABLE_U_29_29;
      MR_Box STATE_VARIABLE_U_30_30;
      MR_Box STATE_VARIABLE_U_32_32;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_output_34)), ((MR_Box) (VarName_20)), STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_27_27);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_34)), ((MR_Box) ((MR_String) " :: ")), STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_34, Lang_1, InstVarSet_3, Mode_21, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_30_30);
      if ((Vars_17 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_32_32 = STATE_VARIABLE_U_30_30;
      else
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_34)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Vars_17;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_32_32;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
  MR_Word Attrs_4,
  MR_Word VarSet_5)
{
  {
    MR_Word StringList_6;
    MR_Word MayCallMercury_7;
    MR_Word ThreadSafe_8;
    MR_Word TabledForIO_9;
    MR_Word Purity_10;
    MR_Word Terminates_11;
    MR_Word UserSharing_12;
    MR_Word Exceptions_13;
    MR_Word OrdinaryDespiteDetism_14;
    MR_Word MayModifyTrail_15;
    MR_Word MayCallMM_Tabled_16;
    MR_Word BoxPolicy_17;
    MR_Word AffectsLiveness_18;
    MR_Word AllocatesMemory_19;
    MR_Word RegistersRoots_20;
    MR_Word MaybeMayDuplicate_21;
    MR_Word ExtraAttributes_22;
    MR_String MayCallMercuryStr_23;
    MR_String ThreadSafeStr_24;
    MR_String TabledForIOStr_25;
    MR_Word PurityStrList_26;
    MR_Word TerminatesStrList_27;
    MR_Word UserSharingStrList_31;
    MR_Word ExceptionsStrList_32;
    MR_Word OrdinaryDespiteDetismStrList_33;
    MR_Word MayModifyTrailStrList_34;
    MR_Word MayCallMM_TabledStrList_35;
    MR_Word BoxPolicyStrList_36;
    MR_Word AffectsLivenessStrList_37;
    MR_Word AllocatesMemoryStrList_38;
    MR_Word RegistersRootsStrList_39;
    MR_Word MayDuplicateStrList_41;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;

    MayCallMercury_7 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_4);
    ThreadSafe_8 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attrs_4);
    TabledForIO_9 = parse_tree__prog_data_foreign__get_tabled_for_io_1_f_0(Attrs_4);
    Purity_10 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attrs_4);
    Terminates_11 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attrs_4);
    UserSharing_12 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs_4);
    Exceptions_13 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attrs_4);
    OrdinaryDespiteDetism_14 = parse_tree__prog_data_foreign__get_ordinary_despite_detism_1_f_0(Attrs_4);
    MayModifyTrail_15 = parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(Attrs_4);
    MayCallMM_Tabled_16 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(Attrs_4);
    BoxPolicy_17 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(Attrs_4);
    AffectsLiveness_18 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(Attrs_4);
    AllocatesMemory_19 = parse_tree__prog_data_foreign__get_allocates_memory_1_f_0(Attrs_4);
    RegistersRoots_20 = parse_tree__prog_data_foreign__get_registers_roots_1_f_0(Attrs_4);
    MaybeMayDuplicate_21 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_4);
    ExtraAttributes_22 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attrs_4);
    switch (MayCallMercury_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayCallMercuryStr_23 = (MR_String) "may_call_mercury";
        break;
      case (MR_Integer) 1:
        MayCallMercuryStr_23 = (MR_String) "will_not_call_mercury";
        break;
    }
    switch (ThreadSafe_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        ThreadSafeStr_24 = (MR_String) "maybe_thread_safe";
        break;
      case (MR_Integer) 0:
        ThreadSafeStr_24 = (MR_String) "not_thread_safe";
        break;
      case (MR_Integer) 1:
        ThreadSafeStr_24 = (MR_String) "thread_safe";
        break;
    }
    TabledForIOStr_25 = ((&parse_tree__parse_tree_out_pragma_vector_common_6[0 + TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_6_0__vct_6_f_0;
    switch (Purity_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        PurityStrList_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        PurityStrList_26 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[5]));
        break;
      case (MR_Integer) 1:
        PurityStrList_26 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[6]));
        break;
    }
    switch (Terminates_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        TerminatesStrList_27 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        TerminatesStrList_27 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[7]));
        break;
      case (MR_Integer) 0:
        TerminatesStrList_27 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[8]));
        break;
    }
    if ((UserSharing_12 == (MR_Word) ((MR_Unsigned) 0U)))
      UserSharingStrList_31 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Sharing_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing_12, (MR_Integer) 0))));
      MR_Word MaybeTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing_12, (MR_Integer) 1))));
      MR_String String_30;

      String_30 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(VarSet_5, Sharing_28, MaybeTypes_29);
      {
        UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UserSharingStrList_31, 0) = ((MR_Box) (String_30));
        MR_hl_field(MR_mktag(1), UserSharingStrList_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    switch (Exceptions_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ExceptionsStrList_32 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        ExceptionsStrList_32 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[9]));
        break;
    }
    switch (OrdinaryDespiteDetism_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OrdinaryDespiteDetismStrList_33 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        OrdinaryDespiteDetismStrList_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[10]));
        break;
    }
    switch (MayModifyTrail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayModifyTrailStrList_34 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[11]));
        break;
      case (MR_Integer) 1:
        MayModifyTrailStrList_34 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[12]));
        break;
    }
    switch (MayCallMM_Tabled_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        MayCallMM_TabledStrList_35 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        MayCallMM_TabledStrList_35 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[13]));
        break;
      case (MR_Integer) 1:
        MayCallMM_TabledStrList_35 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[14]));
        break;
    }
    switch (BoxPolicy_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        BoxPolicyStrList_36 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[15]));
        break;
      case (MR_Integer) 0:
        BoxPolicyStrList_36 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    switch (AffectsLiveness_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AffectsLivenessStrList_37 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[16]));
        break;
      case (MR_Integer) 2:
        AffectsLivenessStrList_37 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        AffectsLivenessStrList_37 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[17]));
        break;
    }
    AllocatesMemoryStrList_38 = ((&parse_tree__parse_tree_out_pragma_vector_common_7[0 + AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
    RegistersRootsStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_7[4 + RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
    if ((MaybeMayDuplicate_21 == (MR_Word) ((MR_Unsigned) 0U)))
      MayDuplicateStrList_41 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MayDuplicate_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_21, (MR_Integer) 0))));

      switch (MayDuplicate_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MayDuplicateStrList_41 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[24]));
          break;
        case (MR_Integer) 1:
          MayDuplicateStrList_41 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[25]));
          break;
      }
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (TabledForIOStr_25));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (PurityStrList_26));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ThreadSafeStr_24));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MayCallMercuryStr_23));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
    }
    Var_99 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), ExtraAttributes_22);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayDuplicateStrList_41, Var_99);
    Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RegistersRootsStrList_39, Var_98);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllocatesMemoryStrList_38, Var_97);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AffectsLivenessStrList_37, Var_96);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BoxPolicyStrList_36, Var_95);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayCallMM_TabledStrList_35, Var_94);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayModifyTrailStrList_34, Var_93);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrdinaryDespiteDetismStrList_33, Var_92);
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExceptionsStrList_32, Var_91);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UserSharingStrList_31, Var_90);
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TerminatesStrList_27, Var_89);
    StringList_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_85, Var_88);
    return StringList_6;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_9;

    conv1_Str_9 = parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_9));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word Sharing_6,
  MR_Word MaybeTypes_7)
{
  {
    MR_String String_8;

    switch (MR_tag((MR_Word) Sharing_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_8 = (MR_String) "no_sharing";
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingPairs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Sharing_6, (MR_Integer) 0))));
          MR_Word TypeVarSet_12;
          MR_String MaybeTypesStr_15;
          MR_Word SharingPairStrs_16;
          MR_String SharingPairListStr_17;
          MR_Word Var_25;
          MR_Word Var_27;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;

          if ((MaybeTypes_7 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeTypesStr_15 = (MR_String) "no";
            TypeVarSet_12 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
          }
          else
          {
            MR_Word Types_11;
            MR_Word TypeStrs_13;
            MR_String TypeListStr_14;
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes_7, (MR_Integer) 0))));
            MR_Word Var_19;
            MR_String Var_23;

            Types_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
            TypeVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
            {
              Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
              MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeVarSet_12));
              MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Types_11);
            TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_13);
            Var_23 = mercury__string__f_43_43_2_f_0(TypeListStr_14, (MR_String) ")");
            MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", Var_23);
          }
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
            MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (VarSet_5));
            MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeVarSet_12));
          }
          SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, SharingPairs_10);
          SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", SharingPairStrs_16);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (SharingPairListStr_17));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[4])));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) ", ["));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MaybeTypesStr_15));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "sharing("));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
          }
          String_8 = mercury__string__append_list_1_f_0(Var_27);
        }
        break;
      case (MR_Integer) 2:
        String_8 = (MR_String) "unknown_sharing";
        break;
    }
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(
  MR_Word FIMinfo_4)
{
  {
    MR_Word FIM_6 = (MR_Word) (FIMinfo_4);
    MR_Word Lang_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIM_6, (MR_Integer) 0))));
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIM_6, (MR_Integer) 1))));
    MR_Box conv0_STATE_VARIABLE_IO_13_13;

    mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13_13);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(
  MR_Word FDInfo_4)
{
  {
    MR_Word Lang_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_4, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word IsLocal_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word LiteralOrInclude_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_4, (MR_Integer) 1))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_4, (MR_Integer) 0)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_12_18;
    MR_Box conv2_STATE_VARIABLE_U_13_19;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_15_21;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_21_27;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_STATE_VARIABLE_IO_7;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_12_18);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_13_19);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_15_21);
    switch (IsLocal_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_U_19_25;

          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_19_25);
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv8_STATE_VARIABLE_U_19_25;

          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_19_25);
        }
        break;
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_21_27);
    if (((MR_tag((MR_Word) LiteralOrInclude_16)) == (MR_Integer) 1))
    {
      MR_String FileName_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_16, (MR_Integer) 0))));
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv12_STATE_VARIABLE_U_11_38;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_U_12_39;
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv16_STATE_VARIABLE_U_22_28;

      func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_11_38);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 21))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (FileName_36)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_12_39);
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22_28);
    }
    else
    {
      MR_Word TypeInfo_15_62;
      MR_String Code_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_16, (MR_Integer) 0))));
      void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv18_STATE_VARIABLE_U_9_48;
      MR_Box conv19_STATE_VARIABLE_U_10_49;
      void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv21_STATE_VARIABLE_U_22_28;

      func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_9_48);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 1, &TypeInfo_15_62);
      mercury__string__foldl_4_p_0(TypeInfo_15_62, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), Code_35, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_10_49);
      func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_22_28);
    }
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(
  MR_Word PredName_8,
  MR_Integer Arity_9,
  MR_Word PredOrFunc_10,
  MR_String PragmaName_11,
  MR_Word MaybeAfter_12)
{
  {
    MR_Integer DeclaredArity_26;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_20_30;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_21_31;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_23_33;
    MR_Box conv6_STATE_VARIABLE_U_25_35;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_27_37;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_28_38;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_IO_15;

    switch (PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          DeclaredArity_26 = (MR_Integer) ((MR_Unsigned) Arity_9 - (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        DeclaredArity_26 = Arity_9;
        break;
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_20_30);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_11)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_21_31);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_23_33);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_25_35);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_27_37);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (DeclaredArity_26)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_28_38);
    if (!((MaybeAfter_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String After_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeAfter_12, (MR_Integer) 0))));
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv12_STATE_VARIABLE_U_30_40;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_U_31_41;

      func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_30_40);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (After_27)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_31_41);
    }
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_15);
  }
}

void mercury__parse_tree__parse_tree_out_pragma__init(void)
{
}

void mercury__parse_tree__parse_tree_out_pragma__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_pragma__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_pragma__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_pragma.
