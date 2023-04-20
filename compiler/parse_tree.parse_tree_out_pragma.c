/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-04-20
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
#include "getopt.mih"
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
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word Feature_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_term_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(
  MR_Word Constraint_3);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__bool_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Word Stream_11);

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
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Box S_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0(
  MR_Word TypeClassInfo_for_output_19,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0(
  MR_Word TypeClassInfo_for_output_19,
  MR_Word RFSInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_4_p_0(
  MR_Word TypeClassInfo_for_output_23,
  MR_Word FactTableInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(
  MR_Word Stream_5,
  MR_Word TabledInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word RequireTR_8);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word PredOrProcSpec_5);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pred_pf_name_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word PredName_6,
  MR_Word Arity_7);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_4_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Word ExternalInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word Lang_6,
  MR_Word FPEInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0(
  MR_Word TypeClassInfo_for_output_52,
  MR_Word Lang_6,
  MR_Word FPInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_output_37,
  MR_Word Lang_1,
  MR_Word InstVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);

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
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0(
  MR_Word Stream_5,
  MR_Word FCInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pred_pfu_name_arity_to_string_3_f_0(
  MR_Word PFU_5,
  MR_Word PredName_6,
  MR_Word UserArity_7);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(
  MR_Word Stream_5,
  MR_Word OISUInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word PredSpec_6,
  MR_Word PredSpecs_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ObsoleteProcInfo_8);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_26,
  MR_String PragmaName_7,
  MR_Word PredSpec0_8,
  MR_String AfterStr_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pfu_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word PFU_7,
  MR_Word PredName_8,
  MR_Word UserArity_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__proc_pf_name_modes_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word PredNameModesPF_5);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word PredOrFunc_7,
  MR_Word PredName_8,
  MR_Word UserArity_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_5_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word PredName_6,
  MR_Word HeadVar__2_2,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[12][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[27][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[2][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[8][5];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_6[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_7[3][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_8[2][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[1][6];


/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_9_0_s {
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_9_0_s parse_tree__parse_tree_out_pragma_vector_common_9[20];

/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_10_0_s {
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_10_0_s parse_tree__parse_tree_out_pragma_vector_common_10[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[4])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[5])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[7])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "promise_pure")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "promise_semipure")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "does_not_terminate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "terminates")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "will_not_throw_exception")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "ordinary_despite_detism")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "may_modify_trail")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "will_not_modify_trail")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "may_call_mm_tabled")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "will_not_call_mm_tabled")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "always_boxed")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "affects_liveness")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "doesnt_affect_liveness")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "allocates_bounded_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "allocates_unbounded_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "doesnt_allocate_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "doesnt_have_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "doesnt_register_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "registers_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "may_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "may_not_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "may_export_body")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "may_not_export_body")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "])")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "fast_loose")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_6[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_7[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_9_0_s parse_tree__parse_tree_out_pragma_vector_common_9[20] = {
  /* row 0 */   {     (MR_String) "not_tabled_for_io" },
  /* row 1 */   {     (MR_String) "tabled_for_io" },
  /* row 2 */   {     (MR_String) "tabled_for_io_unitize" },
  /* row 3 */   {     (MR_String) "tabled_for_descendant_io" },
  /* row 4 */   {     (MR_String) "inline" },
  /* row 5 */   {     (MR_String) "no_inline" },
  /* row 6 */   {     (MR_String) "promise_pure" },
  /* row 7 */   {     (MR_String) "promise_semipure" },
  /* row 8 */   {     (MR_String) "promise_equivalent_clauses" },
  /* row 9 */   {     (MR_String) "terminates" },
  /* row 10 */   {     (MR_String) "does_not_terminate" },
  /* row 11 */   {     (MR_String) "mode_check_clauses" },
  /* row 12 */   {     (MR_String) "concurrency" },
  /* row 13 */   {     (MR_String) "single_prec_float" },
  /* row 14 */   {     (MR_String) "double_prec_float" },
  /* row 15 */   {     (MR_String) "memo" },
  /* row 16 */   {     (MR_String) "parallel_conj" },
  /* row 17 */   {     (MR_String) "trailing" },
  /* row 18 */   {     (MR_String) "strict_sequential" },
  /* row 19 */   {     (MR_String) "conservative_gc" },
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_10_0_s parse_tree__parse_tree_out_pragma_vector_common_10[8] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[17])) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[15])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[16])) },
  /* row 3 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 4 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[20])) },
  /* row 5 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[19])) },
  /* row 6 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[18])) },
  /* row 7 */   {     (MR_Word) ((MR_Unsigned) 0U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word Feature_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_String Str_8 = ((&parse_tree__parse_tree_out_pragma_vector_common_9[12 + Feature_5]))->parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_output_12)), ((MR_Box) (Str_8)), S_6, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_term_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Integer VarId_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Coeff_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_10;
    MR_String Var_13;
    MR_String Var_15;
    MR_String Var_16;
    MR_String Var_23;

    Var_10 = libs__rat__to_rat_string_1_f_0(Coeff_4);
    Var_13 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ")");
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_13);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), VarId_3, &Var_16);
    Var_23 = mercury__string__f_43_43_2_f_0(Var_16, Var_15);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "term(", Var_23);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__arg_size_term_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(
  MR_Word Constraint_3)
{
  {
    MR_String Str_4;
    MR_Word Terms_5;
    MR_Word Constant_6;
    MR_String OpStr_7;
    MR_Word TermStrs_8;
    MR_String TermsStr_9;
    MR_String Var_19;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_29;
    MR_String Var_31;

    if (((MR_tag((MR_Word) Constraint_3)) == (MR_Integer) 1))
    {
      Terms_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint_3, (MR_Integer) 0))));
      Constant_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint_3, (MR_Integer) 1))));
      OpStr_7 = (MR_String) "eq";
    }
    else
    {
      Terms_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 0))));
      Constant_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 1))));
      OpStr_7 = (MR_String) "le";
    }
    TermStrs_8 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[11]), Terms_5);
    TermsStr_9 = mercury__string__join_list_2_f_0((MR_String) ", ", TermStrs_8);
    Var_19 = libs__rat__to_rat_string_1_f_0(Constant_6);
    Var_26 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) ")");
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "], ", Var_26);
    Var_29 = mercury__string__f_43_43_2_f_0(TermsStr_9, Var_28);
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "([", Var_29);
    Str_4 = mercury__string__f_43_43_2_f_0(OpStr_7, Var_31);
    return Str_4;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__bool_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "yes";
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3)
{
  {
    MR_String Str_4;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_3, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_3, (MR_Integer) 1))));
    MR_String Var_7;
    MR_String Var_8;
    MR_String Var_10;

    Var_7 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SymName_5);
    Var_10 = mercury__string__int_to_string_1_f_0(Arity_6);
    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_10);
    Str_4 = mercury__string__f_43_43_2_f_0(Var_7, Var_8);
    return Str_4;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Word Stream_11)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));

    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_7, VarNamePrint_8, Var_9, Stream_11);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = ");
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(VarSet_7, VarNamePrint_8, Type_10, Stream_11);
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
          MR_Word Var_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

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
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
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
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
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
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Box S_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_bool succeeded;
    MR_Char QuoteChar_8;

    switch (Char_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          QuoteChar_8 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          QuoteChar_8 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          QuoteChar_8 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          QuoteChar_8 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_12_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 7))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (MR_Word) ((MR_Char) 92)), S_5, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 7))));
      func_1(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (MR_Word) (QuoteChar_8)), S_5, STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_10);
    }
    else
    {
      switch (Char_6) {
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
        succeeded = mercury__term_io__is_mercury_punctuation_char_1_p_0(Char_6);
        if (!(succeeded))
          succeeded = mercury__char__is_alnum_1_p_0(Char_6);
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 7))));

        func_2(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (MR_Word) (Char_6)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
      }
      else
      {
        MR_String Var_15;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Var_15)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
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

    parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Lang_4, FPInfo_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word FPInfo_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_7, FPInfo_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
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

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
  MR_Word FDInfo_3)
{
  {
    MR_String String_4;
    MR_Word Lang_13;
    MR_Word IsLocal_14;
    MR_Word LiteralOrInclude_15;
    MR_String STATE_VARIABLE_U_14_17;
    MR_String STATE_VARIABLE_U_15_18;
    MR_String STATE_VARIABLE_U_17_20;
    MR_String STATE_VARIABLE_U_21_24;
    MR_String STATE_VARIABLE_U_23_26;
    MR_String STATE_VARIABLE_U_24_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_14_17;
    MR_Box conv2_STATE_VARIABLE_U_15_18;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_17_20;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_23_26;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_String_4;

    Lang_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    IsLocal_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 0))) & (MR_Integer) 1);
    LiteralOrInclude_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_3, (MR_Integer) 1))));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_14_17);
    STATE_VARIABLE_U_14_17 = ((MR_String) (conv1_STATE_VARIABLE_U_14_17));
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Lang_13, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_17)), &conv2_STATE_VARIABLE_U_15_18);
    STATE_VARIABLE_U_15_18 = ((MR_String) (conv2_STATE_VARIABLE_U_15_18));
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_18)), &conv4_STATE_VARIABLE_U_17_20);
    STATE_VARIABLE_U_17_20 = ((MR_String) (conv4_STATE_VARIABLE_U_17_20));
    switch (IsLocal_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_U_21_24;

          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_20)), &conv6_STATE_VARIABLE_U_21_24);
          STATE_VARIABLE_U_21_24 = ((MR_String) (conv6_STATE_VARIABLE_U_21_24));
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv8_STATE_VARIABLE_U_21_24;

          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_20)), &conv8_STATE_VARIABLE_U_21_24);
          STATE_VARIABLE_U_21_24 = ((MR_String) (conv8_STATE_VARIABLE_U_21_24));
        }
        break;
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_24)), &conv10_STATE_VARIABLE_U_23_26);
    STATE_VARIABLE_U_23_26 = ((MR_String) (conv10_STATE_VARIABLE_U_23_26));
    if (((MR_tag((MR_Word) LiteralOrInclude_15)) == (MR_Integer) 1))
    {
      MR_String FileName_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_15, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_13_38;
      MR_String STATE_VARIABLE_U_14_39;
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv12_STATE_VARIABLE_U_13_38;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_U_14_39;
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv16_STATE_VARIABLE_U_24_27;

      func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_26)), &conv12_STATE_VARIABLE_U_13_38);
      STATE_VARIABLE_U_13_38 = ((MR_String) (conv12_STATE_VARIABLE_U_13_38));
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 21))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (FileName_36)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_38)), &conv14_STATE_VARIABLE_U_14_39);
      STATE_VARIABLE_U_14_39 = ((MR_String) (conv14_STATE_VARIABLE_U_14_39));
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_39)), &conv16_STATE_VARIABLE_U_24_27);
      STATE_VARIABLE_U_24_27 = ((MR_String) (conv16_STATE_VARIABLE_U_24_27));
    }
    else
    {
      MR_Word TypeInfo_17_64;
      MR_String Code_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_15, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_11_49;
      MR_String STATE_VARIABLE_U_12_50;
      void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv18_STATE_VARIABLE_U_11_49;
      MR_Box conv19_STATE_VARIABLE_U_12_50;
      void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv21_STATE_VARIABLE_U_24_27;

      func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_26)), &conv18_STATE_VARIABLE_U_11_49);
      STATE_VARIABLE_U_11_49 = ((MR_String) (conv18_STATE_VARIABLE_U_11_49));
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 2, &TypeInfo_17_64);
      mercury__string__foldl_4_p_0(TypeInfo_17_64, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[6]), Code_35, ((MR_Box) (STATE_VARIABLE_U_11_49)), &conv19_STATE_VARIABLE_U_12_50);
      STATE_VARIABLE_U_12_50 = ((MR_String) (conv19_STATE_VARIABLE_U_12_50));
      func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_50)), &conv21_STATE_VARIABLE_U_24_27);
      STATE_VARIABLE_U_24_27 = ((MR_String) (conv21_STATE_VARIABLE_U_24_27));
    }
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_27)), &conv23_String_4);
    String_4 = ((MR_String) (conv23_String_4));
    return String_4;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_decl_pred_pf_name_arity_to_string_3_f_0(
  MR_String PragmaName_5,
  MR_Word PredSpec_6,
  MR_String MaybeAfter_7)
{
  {
    MR_String String_8;
    MR_Word PredOrFunc_19;
    MR_Word PredName_20;
    MR_Word Arity_21;
    MR_String STATE_VARIABLE_U_18_23;
    MR_String STATE_VARIABLE_U_19_24;
    MR_String STATE_VARIABLE_U_21_26;
    MR_String STATE_VARIABLE_U_22_27;
    MR_String STATE_VARIABLE_U_23_28;
    MR_String Var_38;
    MR_String STATE_VARIABLE_U_15_39;
    MR_String STATE_VARIABLE_U_17_41;
    MR_String STATE_VARIABLE_U_18_42;
    MR_Integer Arity_49;
    MR_String STATE_VARIABLE_U_13_52;
    MR_String STATE_VARIABLE_U_15_54;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_18_23;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_19_24;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_21_26;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv7_STATE_VARIABLE_U_15_39;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_17_41;
    MR_Box conv10_STATE_VARIABLE_U_13_52;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv12_STATE_VARIABLE_U_15_54;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_18_42;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_22_27;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv18_STATE_VARIABLE_U_23_28;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_String_8;

    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_18_23);
    STATE_VARIABLE_U_18_23 = ((MR_String) (conv1_STATE_VARIABLE_U_18_23));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (PragmaName_5)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_23)), &conv3_STATE_VARIABLE_U_19_24);
    STATE_VARIABLE_U_19_24 = ((MR_String) (conv3_STATE_VARIABLE_U_19_24));
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_24)), &conv5_STATE_VARIABLE_U_21_26);
    STATE_VARIABLE_U_21_26 = ((MR_String) (conv5_STATE_VARIABLE_U_21_26));
    PredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_6, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_6, (MR_Integer) 1))));
    Arity_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_6, (MR_Integer) 2))));
    Var_38 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_19);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_38)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_26)), &conv7_STATE_VARIABLE_U_15_39);
    STATE_VARIABLE_U_15_39 = ((MR_String) (conv7_STATE_VARIABLE_U_15_39));
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_39)), &conv9_STATE_VARIABLE_U_17_41);
    STATE_VARIABLE_U_17_41 = ((MR_String) (conv9_STATE_VARIABLE_U_17_41));
    Arity_49 = (MR_Integer) (Arity_21);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_20, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_41)), &conv10_STATE_VARIABLE_U_13_52);
    STATE_VARIABLE_U_13_52 = ((MR_String) (conv10_STATE_VARIABLE_U_13_52));
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_52)), &conv12_STATE_VARIABLE_U_15_54);
    STATE_VARIABLE_U_15_54 = ((MR_String) (conv12_STATE_VARIABLE_U_15_54));
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_49)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_54)), &conv14_STATE_VARIABLE_U_18_42);
    STATE_VARIABLE_U_18_42 = ((MR_String) (conv14_STATE_VARIABLE_U_18_42));
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_42)), &conv16_STATE_VARIABLE_U_22_27);
    STATE_VARIABLE_U_22_27 = ((MR_String) (conv16_STATE_VARIABLE_U_22_27));
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (MaybeAfter_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_27)), &conv18_STATE_VARIABLE_U_23_28);
    STATE_VARIABLE_U_23_28 = ((MR_String) (conv18_STATE_VARIABLE_U_23_28));
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_28)), &conv20_String_8);
    String_8 = ((MR_String) (conv20_String_8));
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(
  MR_Word Stream_7,
  MR_String PragmaName_8,
  MR_Word PredSpec_9,
  MR_String MaybeAfter_10)
{
  {
    MR_Word PredOrFunc_23;
    MR_Word PredName_24;
    MR_Word Arity_25;
    MR_String Var_42;
    MR_Integer Arity_53;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_18_27;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_19_28;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_21_30;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv7_STATE_VARIABLE_U_15_43;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_17_45;
    MR_Box conv10_STATE_VARIABLE_U_13_56;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv12_STATE_VARIABLE_U_15_58;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_18_46;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_22_31;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv18_STATE_VARIABLE_U_23_32;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_STATE_VARIABLE_IO_13;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18_27);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_8)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_19_28);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_21_30);
    PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_9, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_9, (MR_Integer) 1))));
    Arity_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_9, (MR_Integer) 2))));
    Var_42 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_23);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_42)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_15_43);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_17_45);
    Arity_53 = (MR_Integer) (Arity_25);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_24, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_13_56);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_15_58);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_53)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_18_46);
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22_31);
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (MaybeAfter_10)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_23_32);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_pred_marker_4_p_0(
  MR_Word Stream_5,
  MR_Word PredMarker_6)
{
  {
    MR_Word PredSpec_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredMarker_6, (MR_Integer) 0))));
    MR_Word PredMarkerKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredMarker_6, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_String PragmaName_10 = ((&parse_tree__parse_tree_out_pragma_vector_common_9[4 + PredMarkerKind_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
    MR_Word PredOrFunc_23;
    MR_Word PredName_24;
    MR_Word Arity_25;
    MR_String Var_42;
    MR_Integer Arity_53;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_18_27;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_19_28;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_21_30;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv7_STATE_VARIABLE_U_15_43;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_17_45;
    MR_Box conv10_STATE_VARIABLE_U_13_56;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv12_STATE_VARIABLE_U_15_58;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_18_46;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_22_31;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv18_STATE_VARIABLE_U_23_32;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_STATE_VARIABLE_IO_12;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18_27);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_10)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_19_28);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_21_30);
    PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_8, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_8, (MR_Integer) 1))));
    Arity_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_8, (MR_Integer) 2))));
    Var_42 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_23);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_42)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_15_43);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_17_45);
    Arity_53 = (MR_Integer) (Arity_25);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_24, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_13_56);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_15_58);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_53)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_18_46);
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22_31);
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_23_32);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_generated_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemGenPragma_8)
{
  {
    MR_Word Pragma_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_8, (MR_Integer) 0))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_8, (MR_Integer) 1))));

    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
    switch (MR_tag((MR_Word) Pragma_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnusedArgsInfo_13 = (MR_Word) ((MR_Word) (Pragma_10));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(Stream_7, UnusedArgsInfo_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExceptionsInfo_14 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 1));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(Stream_7, ExceptionsInfo_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TrailingInfo_15 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 2));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_4_p_0(Stream_7, TrailingInfo_15);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TablingInfo_16 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 3));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_4_p_0(Stream_7, TablingInfo_16);
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_4_p_0(
  MR_Word Stream_5,
  MR_Word TablingInfo_6)
{
  {
    MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfo_6, (MR_Integer) 0))));
    MR_Word MM_TablingStatus_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TablingInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 3))));
    MR_String PorFStr_14;
    MR_String SymNameStr_15;
    MR_String MMStr_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 2))));
    MR_String Var_42;
    MR_String Var_52;

    Arity_12 = (MR_Integer) (Var_19);
    PorFStr_14 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
    SymNameStr_15 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
    switch (MM_TablingStatus_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        MMStr_16 = (MR_String) "mm_tabled_conditional";
        break;
      case (MR_Integer) 0:
        MMStr_16 = (MR_String) "mm_tabled_may_call";
        break;
      case (MR_Integer) 1:
        MMStr_16 = (MR_String) "mm_tabled_will_not_call";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma mm_tabling_info(");
    mercury__io__write_string_4_p_0(Stream_5, PorFStr_14);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, SymNameStr_15);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), Arity_12, &Var_42);
    mercury__io__write_string_4_p_0(Stream_5, Var_42);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), ModeNum_13, &Var_52);
    mercury__io__write_string_4_p_0(Stream_5, Var_52);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, MMStr_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_4_p_0(
  MR_Word Stream_5,
  MR_Word TrailingInfo_6)
{
  {
    MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailingInfo_6, (MR_Integer) 0))));
    MR_Word TrailingStatus_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TrailingInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 3))));
    MR_String PorFStr_14;
    MR_String SymNameStr_15;
    MR_String TrailStr_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 2))));
    MR_String Var_42;
    MR_String Var_52;

    Arity_12 = (MR_Integer) (Var_19);
    PorFStr_14 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
    SymNameStr_15 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
    switch (TrailingStatus_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        TrailStr_16 = (MR_String) "conditional";
        break;
      case (MR_Integer) 0:
        TrailStr_16 = (MR_String) "may_modify_trail";
        break;
      case (MR_Integer) 1:
        TrailStr_16 = (MR_String) "will_not_modify_trail";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma trailing_info(");
    mercury__io__write_string_4_p_0(Stream_5, PorFStr_14);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, SymNameStr_15);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), Arity_12, &Var_42);
    mercury__io__write_string_4_p_0(Stream_5, Var_42);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), ModeNum_13, &Var_52);
    mercury__io__write_string_4_p_0(Stream_5, Var_52);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, TrailStr_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(
  MR_Word Stream_5,
  MR_Word ExceptionsInfo_6)
{
  {
    MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_6, (MR_Integer) 0))));
    MR_Word ThrowStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 3))));
    MR_String PorFStr_14;
    MR_String SymNameStr_15;
    MR_String ThrowStr_16;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 2))));
    MR_String Var_43;
    MR_String Var_53;

    Arity_12 = (MR_Integer) (Var_20);
    PorFStr_14 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
    SymNameStr_15 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
    switch (MR_tag((MR_Word) ThrowStatus_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ThrowStatus_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ThrowStr_16 = (MR_String) "will_not_throw";
            break;
          case (MR_Integer) 1:
            ThrowStr_16 = (MR_String) "conditional";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExceptionType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ThrowStatus_9, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (ExceptionType_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ThrowStr_16 = (MR_String) "may_throw(type_exception)";
              break;
            case (MR_Integer) 0:
              ThrowStr_16 = (MR_String) "may_throw(user_exception)";
              break;
          }
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma exceptions(");
    mercury__io__write_string_4_p_0(Stream_5, PorFStr_14);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, SymNameStr_15);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), Arity_12, &Var_43);
    mercury__io__write_string_4_p_0(Stream_5, Var_43);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), ModeNum_13, &Var_53);
    mercury__io__write_string_4_p_0(Stream_5, Var_53);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, ThrowStr_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(
  MR_Word Stream_5,
  MR_Word UnusedArgsInfo_6)
{
  {
    MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_6, (MR_Integer) 0))));
    MR_Word UnusedArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_6, (MR_Integer) 1))));
    MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 3))));
    MR_String PorFStr_14;
    MR_String SymNameStr_15;
    MR_String UnusedArgsStr_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_8, (MR_Integer) 2))));
    MR_String Var_42;
    MR_String Var_52;

    Arity_12 = (MR_Integer) (Var_19);
    PorFStr_14 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
    SymNameStr_15 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
    if ((UnusedArgs_9 == (MR_Word) ((MR_Unsigned) 0U)))
      UnusedArgsStr_16 = (MR_String) "";
    else
    {
      MR_Integer Head_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), UnusedArgs_9, (MR_Integer) 0))));
      MR_Word Tail_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnusedArgs_9, (MR_Integer) 1))));
      MR_String STATE_VARIABLE_U_15_78;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
      MR_Box conv1_STATE_VARIABLE_U_15_78;
      MR_Box conv2_UnusedArgsStr_16;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Head_72)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_78);
      STATE_VARIABLE_U_15_78 = ((MR_String) (conv1_STATE_VARIABLE_U_15_78));
      parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Tail_73, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_78)), &conv2_UnusedArgsStr_16);
      UnusedArgsStr_16 = ((MR_String) (conv2_UnusedArgsStr_16));
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma unused_args(");
    mercury__io__write_string_4_p_0(Stream_5, PorFStr_14);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, SymNameStr_15);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), Arity_12, &Var_42);
    mercury__io__write_string_4_p_0(Stream_5, Var_42);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), ModeNum_13, &Var_52);
    mercury__io__write_string_4_p_0(Stream_5, Var_52);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", [");
    mercury__io__write_string_4_p_0(Stream_5, UnusedArgsStr_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0(
  MR_Word TypeClassInfo_for_output_19,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_0_3;
    else
    {
      MR_Integer Head_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_16_16;
      MR_Box STATE_VARIABLE_U_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Box next_value_of_STATE_VARIABLE_U_0_3;

      func_0(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_16_16);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 8))));
      func_1(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) (Head_9)), HeadVar__2_2, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_10;
      next_value_of_STATE_VARIABLE_U_0_3 = STATE_VARIABLE_U_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_U_0_3 = next_value_of_STATE_VARIABLE_U_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemImplPragma_8)
{
  {
    MR_Word Pragma_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_8, (MR_Integer) 0))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_8, (MR_Integer) 1))));
    MR_Word Lang_13;

    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
    Lang_13 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    switch (MR_tag((MR_Word) Pragma_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_14 = (MR_Word) ((MR_Word) (Pragma_10));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0(Stream_7, FDInfo_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FCInfo_15 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 1));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0(Stream_7, FCInfo_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_16 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 2));
          MR_Box conv3_STATE_VARIABLE_IO_25;

          parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_13, FPInfo_16, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_25);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FPEInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv4_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_13, FPEInfo_17, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExternalInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), ExternalInfo_18, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word FactTableInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv2_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), FactTableInfo_19, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TabledInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(Stream_7, TabledInfo_21);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredSpec_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv5_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "inline", PredSpec_20, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word PredSpec_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv8_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "no_inline", PredSpec_60, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word PredSpec_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv0_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "consider_used", PredSpec_61, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word PredSpec_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv6_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "mode_check_clauses", PredSpec_63, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredSpec_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv7_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "no_determinism_warning", PredSpec_62, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RequireTailrecPragma_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(Stream_7, Lang_13, RequireTailrecPragma_22);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredSpec_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv10_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "promise_pure", PredSpec_64, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word PredSpec_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv11_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "promise_semipure", PredSpec_65, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PredSpec_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv9_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "promise_equivalent_clauses", PredSpec_66, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RFSInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv12_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), RFSInfo_23, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_25);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0(
  MR_Word TypeClassInfo_for_output_19,
  MR_Word RFSInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  {
    MR_Word Features0_8 = (MR_Word) (RFSInfo_5);
    MR_Word Features_9;
    MR_Box STATE_VARIABLE_U_13_13;
    MR_Word Var_14;
    MR_Box STATE_VARIABLE_U_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Features_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), Features0_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), S_6, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_13_13);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeClassInfo_for_output_19));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Features_9)), S_6, STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_16_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) ((MR_String) ").\n")), S_6, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_11);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_4_p_0(
  MR_Word TypeClassInfo_for_output_23,
  MR_Word FactTableInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  {
    MR_Word PredSpec_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FactTableInfo_5, (MR_Integer) 0))));
    MR_String FileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), FactTableInfo_5, (MR_Integer) 1))));
    MR_Word PFU_10;
    MR_Word PredName_11;
    MR_Word UserArity_12;
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_20_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ":- pragma fact_table(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_16_16);
    PFU_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
    PredName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_8, (MR_Integer) 1))));
    UserArity_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_8, (MR_Integer) 2))));
    parse_tree__parse_tree_out_pragma__mercury_format_pred_pfu_name_arity_6_p_0(TypeClassInfo_for_output_23, PFU_10, PredName_11, UserArity_12, S_6, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_17_17);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ", ")), S_6, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 21))));
    func_2(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) (FileName_9)), S_6, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_20_20);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ").\n")), S_6, STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_14);
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1(
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
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(
  MR_Word Stream_5,
  MR_Word TabledInfo_6)
{
  {
    MR_Word TabledMethod_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_6, (MR_Integer) 0))));
    MR_Word PredOrProcSpec_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_6, (MR_Integer) 1))));
    MR_Word MaybeAttributes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_6, (MR_Integer) 2))));
    MR_String PragmaName_11;
    MR_String AfterStr_27;
    MR_String PredOrProcSpecStr_73;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_STATE_VARIABLE_U_17_76;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_18_77;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_20_79;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_21_80;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_22_81;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv12_STATE_VARIABLE_IO_31;

    PragmaName_11 = parse_tree__prog_out__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_8);
    if ((MaybeAttributes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      AfterStr_27 = (MR_String) "";
    else
    {
      MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_10, (MR_Integer) 0))));
      MR_Word Strictness_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 0))));
      MR_Word MaybeSizeLimit_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 1))));
      MR_Word Stats_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word AllowReset_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word WarnForIgnore_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_Strs_42_42;
      MR_Word STATE_VARIABLE_Strs_48_48;
      MR_Word STATE_VARIABLE_Strs_49_49;
      MR_Word STATE_VARIABLE_Strs_51_51;

      switch (MR_tag((MR_Word) Strictness_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Strictness_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Strs_42_42 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Strs_42_42 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[26]));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Strictness_13, (MR_Integer) 0))));
            MR_Word HiddenArgMethod_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Strictness_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgStrs_21;
            MR_String ArgsStr_22;
            MR_String HiddenArgStr_23;
            MR_String SpecifiedStr_24;
            MR_String Var_36;
            MR_String Var_37;
            MR_String Var_39;

            ArgStrs_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[10]), Args_19);
            ArgsStr_22 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgStrs_21);
            switch (HiddenArgMethod_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                HiddenArgStr_23 = (MR_String) "hidden_arg_addr";
                break;
              case (MR_Integer) 0:
                HiddenArgStr_23 = (MR_String) "hidden_arg_value";
                break;
            }
            Var_39 = mercury__string__f_43_43_2_f_0(HiddenArgStr_23, (MR_String) ")");
            Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "], ", Var_39);
            Var_36 = mercury__string__f_43_43_2_f_0(ArgsStr_22, Var_37);
            SpecifiedStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", Var_36);
            {
              STATE_VARIABLE_Strs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_42_42, 0) = ((MR_Box) (SpecifiedStr_24));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_42_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      if ((MaybeSizeLimit_14 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Strs_48_48 = STATE_VARIABLE_Strs_42_42;
      else
      {
        MR_Integer SizeLimit_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSizeLimit_14, (MR_Integer) 0))));
        MR_String LimitStr_26;
        MR_String Var_45;
        MR_String Var_46;

        Var_46 = mercury__string__int_to_string_1_f_0(SizeLimit_25);
        Var_45 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ")");
        LimitStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", Var_45);
        {
          STATE_VARIABLE_Strs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_48_48, 0) = ((MR_Box) (LimitStr_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_Strs_42_42));
        }
      }
      switch (Stats_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Strs_49_49 = STATE_VARIABLE_Strs_48_48;
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) ((MR_String) "statistics"));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (STATE_VARIABLE_Strs_48_48));
          }
          break;
      }
      switch (AllowReset_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Strs_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_51_51, 0) = ((MR_Box) ((MR_String) "allow_reset"));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_51_51, 1) = ((MR_Box) (STATE_VARIABLE_Strs_49_49));
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Strs_51_51 = STATE_VARIABLE_Strs_49_49;
          break;
      }
      switch (WarnForIgnore_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((STATE_VARIABLE_Strs_51_51 == (MR_Word) ((MR_Unsigned) 0U)))
            AfterStr_27 = (MR_String) "";
          else
          {
            MR_String Var_56;
            MR_String Var_57;

            Var_57 = mercury__string__join_list_2_f_0((MR_String) ", ", STATE_VARIABLE_Strs_51_51);
            Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) "]");
            AfterStr_27 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_56);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Strs_53_84;
            MR_String Var_86;
            MR_String Var_87;

            {
              STATE_VARIABLE_Strs_53_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_53_84, 0) = ((MR_Box) ((MR_String) "disable_warning_if_ignored"));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_53_84, 1) = ((MR_Box) (STATE_VARIABLE_Strs_51_51));
            }
            Var_87 = mercury__string__join_list_2_f_0((MR_String) ", ", STATE_VARIABLE_Strs_53_84);
            Var_86 = mercury__string__f_43_43_2_f_0(Var_87, (MR_String) "]");
            AfterStr_27 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_86);
          }
          break;
      }
    }
    PredOrProcSpecStr_73 = parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0((MR_Integer) 0, PredOrProcSpec_9);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_17_76);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_11)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_18_77);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_20_79);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PredOrProcSpecStr_73)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_21_80);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (AfterStr_27)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_22_81);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_31);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word RequireTR_8)
{
  {
    MR_Word PredOrProcSpec_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTR_8, (MR_Integer) 0))));
    MR_Word Info_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTR_8, (MR_Integer) 1))));
    MR_String ProcSpecStr_12;

    ProcSpecStr_12 = parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(Lang_7, PredOrProcSpec_10);
    if (((MR_tag((MR_Word) Info_11)) == (MR_Integer) 1))
    {
      MR_Word WarnOrError_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Info_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word Type_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Info_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String WarnOrErrorStr_17;
      MR_String TypeStr_18;

      libs__compiler_util__warning_or_error_string_2_p_0(WarnOrError_14, &WarnOrErrorStr_17);
      parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(Type_15, &TypeStr_18);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma warn_tail_recursion(");
      mercury__io__write_string_4_p_0(Stream_6, ProcSpecStr_12);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", [");
      mercury__io__write_string_4_p_0(Stream_6, WarnOrErrorStr_17);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_6, TypeStr_18);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]).\n");
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma warn_tail_recursion(");
      mercury__io__write_string_4_p_0(Stream_6, ProcSpecStr_12);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", [none]).\n");
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word PredOrProcSpec_5)
{
  {
    MR_String PredOrProcSpecStr_6;
    MR_Word PFUMM_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrProcSpec_5, (MR_Integer) 0))));
    MR_Word PredName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrProcSpec_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) PFUMM_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModesOrArity_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM_7, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) ModesOrArity_30)) == (MR_Integer) 1))
          {
            MR_Word Arity_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_30, (MR_Integer) 0))));

            PredOrProcSpecStr_6 = parse_tree__parse_tree_out_pragma__mercury_pred_pf_name_arity_to_string_3_f_0((MR_Integer) 0, PredName_8, Arity_20);
          }
          else
          {
            MR_Word Modes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_30, (MR_Integer) 0))));
            MR_Word InstVarSet_23;

            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
            PredOrProcSpecStr_6 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_4, InstVarSet_23, PredName_8, Modes_21, (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModesOrArity_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PFUMM_7, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) ModesOrArity_10)) == (MR_Integer) 1))
          {
            MR_Word Arity_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_10, (MR_Integer) 0))));
            MR_String Var_51;
            MR_String STATE_VARIABLE_U_15_52;
            MR_String STATE_VARIABLE_U_17_54;
            MR_String STATE_VARIABLE_U_18_55;
            MR_Integer Arity_62;
            MR_String STATE_VARIABLE_U_13_65;
            MR_String STATE_VARIABLE_U_15_67;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv1_STATE_VARIABLE_U_15_52;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv3_STATE_VARIABLE_U_17_54;
            MR_Box conv4_STATE_VARIABLE_U_13_65;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv6_STATE_VARIABLE_U_15_67;
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv8_STATE_VARIABLE_U_18_55;
            void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv10_PredOrProcSpecStr_6;

            Var_51 = parse_tree__prog_out__pred_or_func_to_str_1_f_0((MR_Integer) 1);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_51)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_52);
            STATE_VARIABLE_U_15_52 = ((MR_String) (conv1_STATE_VARIABLE_U_15_52));
            func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_52)), &conv3_STATE_VARIABLE_U_17_54);
            STATE_VARIABLE_U_17_54 = ((MR_String) (conv3_STATE_VARIABLE_U_17_54));
            Arity_62 = (MR_Integer) (Arity_12);
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_54)), &conv4_STATE_VARIABLE_U_13_65);
            STATE_VARIABLE_U_13_65 = ((MR_String) (conv4_STATE_VARIABLE_U_13_65));
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_65)), &conv6_STATE_VARIABLE_U_15_67);
            STATE_VARIABLE_U_15_67 = ((MR_String) (conv6_STATE_VARIABLE_U_15_67));
            func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
            func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_62)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_67)), &conv8_STATE_VARIABLE_U_18_55);
            STATE_VARIABLE_U_18_55 = ((MR_String) (conv8_STATE_VARIABLE_U_18_55));
            func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_55)), &conv10_PredOrProcSpecStr_6);
            PredOrProcSpecStr_6 = ((MR_String) (conv10_PredOrProcSpecStr_6));
          }
          else
          {
            MR_Word Modes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_10, (MR_Integer) 0))));
            MR_Word InstVarSet_15;
            MR_Word ArgModes_16;
            MR_Word RetMode_17;
            MR_Box conv11_RetMode_17;

            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_15);
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_13, &ArgModes_16, &conv11_RetMode_17);
            RetMode_17 = ((MR_Word) (conv11_RetMode_17));
            PredOrProcSpecStr_6 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_4, InstVarSet_15, PredName_8, ArgModes_16, RetMode_17, (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredArity_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PFUMM_7, (MR_Integer) 0))));
          MR_Integer Arity_79;
          MR_String STATE_VARIABLE_U_13_82;
          MR_String STATE_VARIABLE_U_15_84;
          MR_Box conv12_STATE_VARIABLE_U_13_82;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_U_15_84;
          void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv16_PredOrProcSpecStr_6;

          Arity_79 = (MR_Integer) (PredArity_9);
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv12_STATE_VARIABLE_U_13_82);
          STATE_VARIABLE_U_13_82 = ((MR_String) (conv12_STATE_VARIABLE_U_13_82));
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_82)), &conv14_STATE_VARIABLE_U_15_84);
          STATE_VARIABLE_U_15_84 = ((MR_String) (conv14_STATE_VARIABLE_U_15_84));
          func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_79)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_84)), &conv16_PredOrProcSpecStr_6);
          PredOrProcSpecStr_6 = ((MR_String) (conv16_PredOrProcSpecStr_6));
        }
        break;
    }
    return PredOrProcSpecStr_6;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pred_pf_name_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word PredName_6,
  MR_Word Arity_7)
{
  {
    MR_String String_8;
    MR_String Var_19;
    MR_String STATE_VARIABLE_U_15_20;
    MR_String STATE_VARIABLE_U_17_22;
    MR_String STATE_VARIABLE_U_18_23;
    MR_Integer Arity_30;
    MR_String STATE_VARIABLE_U_13_33;
    MR_String STATE_VARIABLE_U_15_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_15_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_17_22;
    MR_Box conv4_STATE_VARIABLE_U_13_33;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_15_35;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_18_23;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_String_8;

    Var_19 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_5);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_19)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_20);
    STATE_VARIABLE_U_15_20 = ((MR_String) (conv1_STATE_VARIABLE_U_15_20));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_20)), &conv3_STATE_VARIABLE_U_17_22);
    STATE_VARIABLE_U_17_22 = ((MR_String) (conv3_STATE_VARIABLE_U_17_22));
    Arity_30 = (MR_Integer) (Arity_7);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_6, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_22)), &conv4_STATE_VARIABLE_U_13_33);
    STATE_VARIABLE_U_13_33 = ((MR_String) (conv4_STATE_VARIABLE_U_13_33));
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_33)), &conv6_STATE_VARIABLE_U_15_35);
    STATE_VARIABLE_U_15_35 = ((MR_String) (conv6_STATE_VARIABLE_U_15_35));
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_30)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_35)), &conv8_STATE_VARIABLE_U_18_23);
    STATE_VARIABLE_U_18_23 = ((MR_String) (conv8_STATE_VARIABLE_U_18_23));
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_23)), &conv10_String_8);
    String_8 = ((MR_String) (conv10_String_8));
    return String_8;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_4_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Word ExternalInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  {
    MR_Word PFNameArity_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_5, (MR_Integer) 0))));
    MR_Word MaybeBackend_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_5, (MR_Integer) 1))));
    MR_Word PorF_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFNameArity_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFNameArity_8, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_String PorFStr_13;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFNameArity_8, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_23_23;
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_32_32;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Arity_12 = (MR_Integer) (Var_17);
    PorFStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PorF_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ":- pragma external_")), S_6, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_19_19);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (PorFStr_13)), S_6, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_20_20);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "(")), S_6, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_35, PredName_11, S_6, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "/")), S_6, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 8))));
    func_4(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (Arity_12)), S_6, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_26_26);
    if ((MaybeBackend_9 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_32_32 = STATE_VARIABLE_U_26_26;
    else
    {
      MR_Word Backend_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBackend_9, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_28_28;
      MR_String Var_29;
      MR_Box STATE_VARIABLE_U_30_30;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_5(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ", [")), S_6, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
      switch (Backend_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_29 = (MR_String) "high_level_backend";
          break;
        case (MR_Integer) 1:
          Var_29 = (MR_String) "low_level_backend";
          break;
      }
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) (Var_29)), S_6, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "]")), S_6, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
    }
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) ").\n")), S_6, STATE_VARIABLE_U_32_32, STATE_VARIABLE_U_16);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word Lang_6,
  MR_Word FPEInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  {
    MR_Word ForeignLang_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PredNameModesPF_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 2))));
    MR_String ExportName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 3))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 1))));
    MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_12, (MR_Integer) 2))));
    MR_Word InstVarSet_17;
    MR_Box STATE_VARIABLE_U_23_23;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_27_27;
    MR_Box STATE_VARIABLE_U_38_38;
    MR_Box STATE_VARIABLE_U_40_40;
    MR_Box STATE_VARIABLE_U_41_41;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), S_8, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_23_23);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_output_44, ForeignLang_11, S_8, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_44, SymName_15, S_8, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_17);
    switch (PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ArgModes_18;
          MR_Word RetMode_19;
          MR_Box STATE_VARIABLE_U_34_34;
          MR_Box STATE_VARIABLE_U_35_35;
          MR_Box STATE_VARIABLE_U_37_37;
          MR_Box conv2_RetMode_19;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16, &ArgModes_18, &conv2_RetMode_19);
          RetMode_19 = ((MR_Word) (conv2_RetMode_19));
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_34_34);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_44, Lang_6, InstVarSet_17, ArgModes_18, S_8, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_35_35);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
          func_4(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ") = ")), S_8, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_44, Lang_6, InstVarSet_17, RetMode_19, S_8, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_U_29_29;
          MR_Box STATE_VARIABLE_U_30_30;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_5(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_44, Lang_6, InstVarSet_17, Modes_16, S_8, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_30_30);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_38_38);
        }
        break;
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) (ExportName_13)), S_8, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_41_41);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_41_41, STATE_VARIABLE_U_21);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_info__add_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0(
  MR_Word TypeClassInfo_for_output_52,
  MR_Word Lang_6,
  MR_Word FPInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  {
    MR_Word TypeInfo_17_94;
    MR_Word Attributes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 0))));
    MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 1))));
    MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Vars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 3))));
    MR_Word ProgVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 4))));
    MR_Word InstVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 5))));
    MR_Word PragmaCode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_7, (MR_Integer) 6))));
    MR_Word ForeignLang_17;
    MR_Word Vars_18;
    MR_Word ResultVars_19;
    MR_String C_Code_23;
    MR_Box STATE_VARIABLE_U_28_28;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_31_31;
    MR_Box STATE_VARIABLE_U_32_32;
    MR_Box STATE_VARIABLE_U_38_38;
    MR_Box STATE_VARIABLE_U_43_43;
    MR_Box STATE_VARIABLE_U_45_45;
    MR_Box STATE_VARIABLE_U_46_46;
    MR_Box STATE_VARIABLE_U_48_48;
    MR_Box STATE_VARIABLE_U_49_49;
    MR_Box STATE_VARIABLE_U_13_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Box STATE_VARIABLE_U_17_65;
    MR_Box STATE_VARIABLE_U_11_79;
    MR_Box STATE_VARIABLE_U_12_80;
    MR_Word Var_88;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), S_8, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
    ForeignLang_17 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_10);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_output_52, ForeignLang_17, S_8, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_29_29);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_52, PredName_11, S_8, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_32_32);
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ResultVar_20;
          MR_Box conv2_ResultVar_20;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars0_13, &Vars_18, &conv2_ResultVar_20);
          ResultVar_20 = ((MR_Word) (conv2_ResultVar_20));
          {
            ResultVars_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ResultVars_19, 0) = ((MR_Box) (ResultVar_20));
            MR_hl_field(MR_mktag(1), ResultVars_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Vars_18 = Vars0_13;
          ResultVars_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    if ((Vars_18 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_38_38 = STATE_VARIABLE_U_32_32;
    else
    {
      MR_Box STATE_VARIABLE_U_35_35;
      MR_Box STATE_VARIABLE_U_36_36;
      MR_Word Var_105;
      MR_Word Vars_106;
      MR_String VarName_110;
      MR_Word Mode_111;
      MR_Box STATE_VARIABLE_U_30_117;
      MR_Box STATE_VARIABLE_U_32_119;
      MR_Box STATE_VARIABLE_U_33_120;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_3(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_35_35);
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_18, (MR_Integer) 0))));
      Vars_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_18, (MR_Integer) 1))));
      VarName_110 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
      Mode_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 2))));
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) (VarName_110)), S_8, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_30_117);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_117, &STATE_VARIABLE_U_32_119);
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_52, Lang_6, InstVarSet_15, Mode_111, S_8, STATE_VARIABLE_U_32_119, &STATE_VARIABLE_U_33_120);
      if ((Vars_106 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_36_36 = STATE_VARIABLE_U_33_120;
      else
      {
        MR_Box STATE_VARIABLE_U_35_122;
        MR_Word Var_163;
        MR_Word Vars_164;
        MR_String VarName_168;
        MR_Word Mode_169;
        MR_Box STATE_VARIABLE_U_30_175;
        MR_Box STATE_VARIABLE_U_32_177;
        MR_Box STATE_VARIABLE_U_33_178;
        MR_Box STATE_VARIABLE_U_35_180;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_120, &STATE_VARIABLE_U_35_122);
        Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_106, (MR_Integer) 0))));
        Vars_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_106, (MR_Integer) 1))));
        VarName_168 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_163, (MR_Integer) 1))));
        Mode_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_163, (MR_Integer) 2))));
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) (VarName_168)), S_8, STATE_VARIABLE_U_35_122, &STATE_VARIABLE_U_30_175);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_175, &STATE_VARIABLE_U_32_177);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_52, Lang_6, InstVarSet_15, Mode_169, S_8, STATE_VARIABLE_U_32_177, &STATE_VARIABLE_U_33_178);
        if ((Vars_164 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_35_180 = STATE_VARIABLE_U_33_178;
        else
        {
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));

          func_9(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_178, &STATE_VARIABLE_U_35_180);
        }
        parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(TypeClassInfo_for_output_52, Lang_6, InstVarSet_15, Vars_164, S_8, STATE_VARIABLE_U_35_180, &STATE_VARIABLE_U_36_36);
      }
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
      func_10(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
    }
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_40_40;
          MR_Box STATE_VARIABLE_U_41_41;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_11(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) " = (")), S_8, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
          parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(TypeClassInfo_for_output_52, Lang_6, InstVarSet_15, ResultVars_19, S_8, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_41_41);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
          func_12(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_U_43_43 = STATE_VARIABLE_U_38_38;
        break;
    }
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_13(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "[")), S_8, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_13_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (TypeClassInfo_for_output_52));
    }
    Var_64 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(Attributes_10, ProgVarSet_14);
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 27))));
    func_15(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (Var_62)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_64)), S_8, STATE_VARIABLE_U_13_61, &STATE_VARIABLE_U_17_65);
    func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_16(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "]")), S_8, STATE_VARIABLE_U_17_65, &STATE_VARIABLE_U_46_46);
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
    C_Code_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaCode_16, (MR_Integer) 0))));
    func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_18(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "\"")), S_8, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_11_79);
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (TypeClassInfo_for_output_52));
      MR_hl_field(MR_mktag(0), Var_88, 4) = S_8;
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_52, (MR_Integer) 2, &TypeInfo_17_94);
    mercury__string__foldl_4_p_0(TypeInfo_17_94, Var_88, C_Code_23, STATE_VARIABLE_U_11_79, &STATE_VARIABLE_U_12_80);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_19(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "\"")), S_8, STATE_VARIABLE_U_12_80, &STATE_VARIABLE_U_49_49);
    func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
    func_20(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_49_49, STATE_VARIABLE_U_26);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_output_37,
  MR_Word Lang_1,
  MR_Word InstVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_0_6;
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Vars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_String VarName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      MR_Word Mode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_U_30_30;
      MR_Box STATE_VARIABLE_U_32_32;
      MR_Box STATE_VARIABLE_U_33_33;
      MR_Box STATE_VARIABLE_U_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_U_0_6;

      func_0(((MR_Box) (TypeClassInfo_for_output_37)), ((MR_Box) (VarName_23)), HeadVar__5_5, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_30_30);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_37)), ((MR_Box) ((MR_String) " :: ")), HeadVar__5_5, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_37, Lang_1, InstVarSet_3, Mode_24, HeadVar__5_5, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
      if ((Vars_19 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_35_35 = STATE_VARIABLE_U_33_33;
      else
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_37)), ((MR_Box) ((MR_String) ", ")), HeadVar__5_5, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Vars_19;
      next_value_of_STATE_VARIABLE_U_0_6 = STATE_VARIABLE_U_35_35;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_U_0_6 = next_value_of_STATE_VARIABLE_U_0_6;
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
    MR_Word MaybeMayExportBody_22;
    MR_Word ExtraAttributes_23;
    MR_String MayCallMercuryStr_24;
    MR_String ThreadSafeStr_25;
    MR_String TabledForIOStr_26;
    MR_Word PurityStrList_27;
    MR_Word TerminatesStrList_28;
    MR_Word UserSharingStrList_32;
    MR_Word ExceptionsStrList_33;
    MR_Word OrdinaryDespiteDetismStrList_34;
    MR_Word MayModifyTrailStrList_35;
    MR_Word MayCallMM_TabledStrList_36;
    MR_Word BoxPolicyStrList_37;
    MR_Word AffectsLivenessStrList_38;
    MR_Word AllocatesMemoryStrList_39;
    MR_Word RegistersRootsStrList_40;
    MR_Word MayDuplicateStrList_42;
    MR_Word MayExportBodyStrList_44;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;

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
    MaybeMayExportBody_22 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_4);
    ExtraAttributes_23 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attrs_4);
    switch (MayCallMercury_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayCallMercuryStr_24 = (MR_String) "may_call_mercury";
        break;
      case (MR_Integer) 1:
        MayCallMercuryStr_24 = (MR_String) "will_not_call_mercury";
        break;
    }
    switch (ThreadSafe_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        ThreadSafeStr_25 = (MR_String) "maybe_thread_safe";
        break;
      case (MR_Integer) 0:
        ThreadSafeStr_25 = (MR_String) "not_thread_safe";
        break;
      case (MR_Integer) 1:
        ThreadSafeStr_25 = (MR_String) "thread_safe";
        break;
    }
    TabledForIOStr_26 = ((&parse_tree__parse_tree_out_pragma_vector_common_9[0 + TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
    switch (Purity_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        PurityStrList_27 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        PurityStrList_27 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[2]));
        break;
      case (MR_Integer) 1:
        PurityStrList_27 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[3]));
        break;
    }
    switch (Terminates_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        TerminatesStrList_28 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        TerminatesStrList_28 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[4]));
        break;
      case (MR_Integer) 0:
        TerminatesStrList_28 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[5]));
        break;
    }
    if ((UserSharing_12 == (MR_Word) ((MR_Unsigned) 0U)))
      UserSharingStrList_32 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Sharing_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing_12, (MR_Integer) 0))));
      MR_Word MaybeTypes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing_12, (MR_Integer) 1))));
      MR_String String_31;

      String_31 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(VarSet_5, Sharing_29, MaybeTypes_30);
      {
        UserSharingStrList_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UserSharingStrList_32, 0) = ((MR_Box) (String_31));
        MR_hl_field(MR_mktag(1), UserSharingStrList_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    switch (Exceptions_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ExceptionsStrList_33 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        ExceptionsStrList_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[6]));
        break;
    }
    switch (OrdinaryDespiteDetism_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OrdinaryDespiteDetismStrList_34 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        OrdinaryDespiteDetismStrList_34 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[7]));
        break;
    }
    switch (MayModifyTrail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayModifyTrailStrList_35 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[8]));
        break;
      case (MR_Integer) 1:
        MayModifyTrailStrList_35 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[9]));
        break;
    }
    switch (MayCallMM_Tabled_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        MayCallMM_TabledStrList_36 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        MayCallMM_TabledStrList_36 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[10]));
        break;
      case (MR_Integer) 1:
        MayCallMM_TabledStrList_36 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[11]));
        break;
    }
    switch (BoxPolicy_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        BoxPolicyStrList_37 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[12]));
        break;
      case (MR_Integer) 0:
        BoxPolicyStrList_37 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    switch (AffectsLiveness_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AffectsLivenessStrList_38 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[13]));
        break;
      case (MR_Integer) 2:
        AffectsLivenessStrList_38 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        AffectsLivenessStrList_38 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[14]));
        break;
    }
    AllocatesMemoryStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_10[0 + AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_10_0__vct_10_f_0;
    RegistersRootsStrList_40 = ((&parse_tree__parse_tree_out_pragma_vector_common_10[4 + RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_10_0__vct_10_f_0;
    if ((MaybeMayDuplicate_21 == (MR_Word) ((MR_Unsigned) 0U)))
      MayDuplicateStrList_42 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MayDuplicate_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_21, (MR_Integer) 0))));

      switch (MayDuplicate_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MayDuplicateStrList_42 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[21]));
          break;
        case (MR_Integer) 1:
          MayDuplicateStrList_42 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[22]));
          break;
      }
    }
    if ((MaybeMayExportBody_22 == (MR_Word) ((MR_Unsigned) 0U)))
      MayExportBodyStrList_44 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MayExportBody_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayExportBody_22, (MR_Integer) 0))));

      switch (MayExportBody_43) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MayExportBodyStrList_44 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[23]));
          break;
        case (MR_Integer) 1:
          MayExportBodyStrList_44 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[24]));
          break;
      }
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (TabledForIOStr_26));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (PurityStrList_27));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ThreadSafeStr_25));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MayCallMercuryStr_24));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    Var_107 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[9]), ExtraAttributes_23);
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayExportBodyStrList_44, Var_107);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayDuplicateStrList_42, Var_106);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RegistersRootsStrList_40, Var_105);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllocatesMemoryStrList_39, Var_104);
    Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AffectsLivenessStrList_38, Var_103);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BoxPolicyStrList_37, Var_102);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayCallMM_TabledStrList_36, Var_101);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayModifyTrailStrList_35, Var_100);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrdinaryDespiteDetismStrList_34, Var_99);
    Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExceptionsStrList_33, Var_98);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UserSharingStrList_32, Var_97);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TerminatesStrList_28, Var_96);
    StringList_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_92, Var_95);
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
              Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
              MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeVarSet_12));
              MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Types_11);
            TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_13);
            Var_23 = mercury__string__f_43_43_2_f_0(TypeListStr_14, (MR_String) ")");
            MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", Var_23);
          }
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
            MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (VarSet_5));
            MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeVarSet_12));
          }
          SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, SharingPairs_10);
          SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", SharingPairStrs_16);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (SharingPairListStr_17));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_2[25])));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) ", ["));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MaybeTypesStr_15));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0(
  MR_Word Stream_5,
  MR_Word FCInfo_6)
{
  {
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word LiteralOrInclude_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_6, (MR_Integer) 1))));
    MR_String LangStr_10;
    MR_String LorIStr_11;

    LangStr_10 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(Lang_8);
    if (((MR_tag((MR_Word) LiteralOrInclude_9)) == (MR_Integer) 1))
    {
      MR_String FileName_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_9, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_13_41;
      MR_String STATE_VARIABLE_U_14_42;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_U_13_41;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_14_42;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_LorIStr_11;

      func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_13_41);
      STATE_VARIABLE_U_13_41 = ((MR_String) (conv1_STATE_VARIABLE_U_13_41));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 21))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (FileName_39)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_41)), &conv3_STATE_VARIABLE_U_14_42);
      STATE_VARIABLE_U_14_42 = ((MR_String) (conv3_STATE_VARIABLE_U_14_42));
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_42)), &conv5_LorIStr_11);
      LorIStr_11 = ((MR_String) (conv5_LorIStr_11));
    }
    else
    {
      MR_Word TypeInfo_17_67;
      MR_String Code_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_9, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_11_52;
      MR_String STATE_VARIABLE_U_12_53;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv7_STATE_VARIABLE_U_11_52;
      MR_Box conv8_STATE_VARIABLE_U_12_53;
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv10_LorIStr_11;

      func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv7_STATE_VARIABLE_U_11_52);
      STATE_VARIABLE_U_11_52 = ((MR_String) (conv7_STATE_VARIABLE_U_11_52));
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 2, &TypeInfo_17_67);
      mercury__string__foldl_4_p_0(TypeInfo_17_67, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[3]), Code_38, ((MR_Box) (STATE_VARIABLE_U_11_52)), &conv8_STATE_VARIABLE_U_12_53);
      STATE_VARIABLE_U_12_53 = ((MR_String) (conv8_STATE_VARIABLE_U_12_53));
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_53)), &conv10_LorIStr_11);
      LorIStr_11 = ((MR_String) (conv10_LorIStr_11));
    }
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma foreign_code(");
    mercury__io__write_string_4_p_0(Stream_5, LangStr_10);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_5, LorIStr_11);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0(
  MR_Word Stream_5,
  MR_Word FDInfo_6)
{
  {
    MR_Word Lang_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word IsLocal_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word LiteralOrInclude_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_6, (MR_Integer) 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_14_21;
    MR_Box conv2_STATE_VARIABLE_U_15_22;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_17_24;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_23_30;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_STATE_VARIABLE_IO_9;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_14_21);
    parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_17, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_15_22);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_17_24);
    switch (IsLocal_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_U_21_28;

          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_21_28);
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv8_STATE_VARIABLE_U_21_28;

          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_21_28);
        }
        break;
    }
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_23_30);
    if (((MR_tag((MR_Word) LiteralOrInclude_19)) == (MR_Integer) 1))
    {
      MR_String FileName_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_19, (MR_Integer) 0))));
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv12_STATE_VARIABLE_U_13_42;
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv14_STATE_VARIABLE_U_14_43;
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv16_STATE_VARIABLE_U_24_31;

      func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_13_42);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 21))));
      func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (FileName_40)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_14_43);
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_24_31);
    }
    else
    {
      MR_Word TypeInfo_17_68;
      MR_String Code_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_19, (MR_Integer) 0))));
      MR_Word Var_62;
      void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv18_STATE_VARIABLE_U_11_53;
      MR_Box conv19_STATE_VARIABLE_U_12_54;
      void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv21_STATE_VARIABLE_U_24_31;

      func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_11_53);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]));
        MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Stream_5));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 2, &TypeInfo_17_68);
      mercury__string__foldl_4_p_0(TypeInfo_17_68, Var_62, Code_39, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_12_54);
      func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_24_31);
    }
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_9);
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_Str_4;

    conv2_Str_4 = parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemDeclPragma_8)
{
  {
    MR_Word Pragma_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_8, (MR_Integer) 0))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_8, (MR_Integer) 1))));
    MR_Word Lang_13;

    parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
    Lang_13 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
    switch (MR_tag((MR_Word) Pragma_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ObsoletePredInfo_14 = (MR_Word) ((MR_Word) (Pragma_10));
          MR_Word PredSpec_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoletePredInfo_14, (MR_Integer) 0))));
          MR_Word ObsoleteInFavourOf_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoletePredInfo_14, (MR_Integer) 1))));
          MR_Word PFU_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_54, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word PredName_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_54, (MR_Integer) 1))));
          MR_Word Arity_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_54, (MR_Integer) 2))));
          MR_String PredStr_59;
          MR_Word ObsoleteStrs_60;
          MR_String ObsoleteStr_61;

          PredStr_59 = parse_tree__parse_tree_out_pragma__mercury_pred_pfu_name_arity_to_string_3_f_0(PFU_56, PredName_57, Arity_58);
          ObsoleteStrs_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[8]), ObsoleteInFavourOf_55);
          ObsoleteStr_61 = mercury__string__join_list_2_f_0((MR_String) ", ", ObsoleteStrs_60);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma obsolete(");
          mercury__io__write_string_4_p_0(Stream_7, PredStr_59);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", [");
          mercury__io__write_string_4_p_0(Stream_7, ObsoleteStr_61);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]).\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ObsoleteProcInfo_15 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 1));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0(Stream_7, Lang_13, ObsoleteProcInfo_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeSpecInfo_16 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 2));

          parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0(Stream_7, (MR_Integer) 0, Lang_13, TypeSpecInfo_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OISUInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(Stream_7, OISUInfo_18);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredSpec_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "terminates", PredSpec_19, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredSpec_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "does_not_terminate", PredSpec_44, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word PredSpec_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));
              MR_Box conv0_STATE_VARIABLE_IO_25;

              parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "check_termination", PredSpec_45, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TermInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(Stream_7, Lang_13, TermInfo_20);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Term2Info_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(Stream_7, Lang_13, Term2Info_21);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SharingInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(Stream_7, Lang_13, SharingInfo_22);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ReuseInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_10, (MR_Integer) 1))));

              parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(Stream_7, Lang_13, ReuseInfo_23);
            }
            break;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pred_pfu_name_arity_to_string_3_f_0(
  MR_Word PFU_5,
  MR_Word PredName_6,
  MR_Word UserArity_7)
{
  {
    MR_String String_8;

    switch (PFU_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_30;
          MR_String STATE_VARIABLE_U_15_31;
          MR_String STATE_VARIABLE_U_17_33;
          MR_String STATE_VARIABLE_U_18_34;
          MR_Integer Arity_41;
          MR_String STATE_VARIABLE_U_13_44;
          MR_String STATE_VARIABLE_U_15_46;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_STATE_VARIABLE_U_15_31;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_17_33;
          MR_Box conv4_STATE_VARIABLE_U_13_44;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv6_STATE_VARIABLE_U_15_46;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_18_34;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_String_8;

          Var_30 = parse_tree__prog_out__pred_or_func_to_str_1_f_0((MR_Integer) 1);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_30)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_31);
          STATE_VARIABLE_U_15_31 = ((MR_String) (conv1_STATE_VARIABLE_U_15_31));
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_31)), &conv3_STATE_VARIABLE_U_17_33);
          STATE_VARIABLE_U_17_33 = ((MR_String) (conv3_STATE_VARIABLE_U_17_33));
          Arity_41 = (MR_Integer) (UserArity_7);
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_6, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_33)), &conv4_STATE_VARIABLE_U_13_44);
          STATE_VARIABLE_U_13_44 = ((MR_String) (conv4_STATE_VARIABLE_U_13_44));
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_44)), &conv6_STATE_VARIABLE_U_15_46);
          STATE_VARIABLE_U_15_46 = ((MR_String) (conv6_STATE_VARIABLE_U_15_46));
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_41)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_46)), &conv8_STATE_VARIABLE_U_18_34);
          STATE_VARIABLE_U_18_34 = ((MR_String) (conv8_STATE_VARIABLE_U_18_34));
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_34)), &conv10_String_8);
          String_8 = ((MR_String) (conv10_String_8));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String Var_55;
          MR_String STATE_VARIABLE_U_15_56;
          MR_String STATE_VARIABLE_U_17_58;
          MR_String STATE_VARIABLE_U_18_59;
          MR_Integer Arity_66;
          MR_String STATE_VARIABLE_U_13_69;
          MR_String STATE_VARIABLE_U_15_71;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_15_56;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_U_17_58;
          MR_Box conv15_STATE_VARIABLE_U_13_69;
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv17_STATE_VARIABLE_U_15_71;
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv19_STATE_VARIABLE_U_18_59;
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv21_String_8;

          Var_55 = parse_tree__prog_out__pred_or_func_to_str_1_f_0((MR_Integer) 0);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_55)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv12_STATE_VARIABLE_U_15_56);
          STATE_VARIABLE_U_15_56 = ((MR_String) (conv12_STATE_VARIABLE_U_15_56));
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_56)), &conv14_STATE_VARIABLE_U_17_58);
          STATE_VARIABLE_U_17_58 = ((MR_String) (conv14_STATE_VARIABLE_U_17_58));
          Arity_66 = (MR_Integer) (UserArity_7);
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_6, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_58)), &conv15_STATE_VARIABLE_U_13_69);
          STATE_VARIABLE_U_13_69 = ((MR_String) (conv15_STATE_VARIABLE_U_13_69));
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_16(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_69)), &conv17_STATE_VARIABLE_U_15_71);
          STATE_VARIABLE_U_15_71 = ((MR_String) (conv17_STATE_VARIABLE_U_15_71));
          func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_18(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_66)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_71)), &conv19_STATE_VARIABLE_U_18_59);
          STATE_VARIABLE_U_18_59 = ((MR_String) (conv19_STATE_VARIABLE_U_18_59));
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_59)), &conv21_String_8);
          String_8 = ((MR_String) (conv21_String_8));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Arity_77 = (MR_Integer) (UserArity_7);
          MR_String STATE_VARIABLE_U_13_80;
          MR_String STATE_VARIABLE_U_15_82;
          MR_Box conv22_STATE_VARIABLE_U_13_80;
          void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv24_STATE_VARIABLE_U_15_82;
          void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv26_String_8;

          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_6, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv22_STATE_VARIABLE_U_13_80);
          STATE_VARIABLE_U_13_80 = ((MR_String) (conv22_STATE_VARIABLE_U_13_80));
          func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_23(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_80)), &conv24_STATE_VARIABLE_U_15_82);
          STATE_VARIABLE_U_15_82 = ((MR_String) (conv24_STATE_VARIABLE_U_15_82));
          func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_25(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_77)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_82)), &conv26_String_8);
          String_8 = ((MR_String) (conv26_String_8));
        }
        break;
    }
    return String_8;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(
  MR_Word Stream_5,
  MR_Word OISUInfo_6)
{
  {
    MR_Word TypeCtor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_6, (MR_Integer) 0))));
    MR_Word CreatorPreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_6, (MR_Integer) 1))));
    MR_Word MutatorPreds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_6, (MR_Integer) 2))));
    MR_Word DestructorPreds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_6, (MR_Integer) 3))));
    MR_Word TypeName_21;
    MR_Integer TypeArity_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_17_24;
    MR_Box conv2_STATE_VARIABLE_U_19_26;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_U_21_28;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_22_29;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_24_31;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_U_26_33;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_29_36;
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv15_STATE_VARIABLE_U_31_38;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv18_STATE_VARIABLE_U_34_41;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_STATE_VARIABLE_U_36_43;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_STATE_VARIABLE_U_39_46;
    void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv25_STATE_VARIABLE_IO_9;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_17_24);
    TypeName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_17, (MR_Integer) 0))));
    TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_17, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, TypeName_21, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_19_26);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_21_28);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (TypeArity_22)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_22_29);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_24_31);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_26_33);
    if (!((CreatorPreds_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredSpec_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CreatorPreds_18, (MR_Integer) 0))));
      MR_Word PredSpecs_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CreatorPreds_18, (MR_Integer) 1))));
      MR_Box conv11_STATE_VARIABLE_U_27_34;

      parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredSpec_53, PredSpecs_54, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_27_34);
    }
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_29_36);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_31_38);
    if (!((MutatorPreds_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredSpec_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MutatorPreds_19, (MR_Integer) 0))));
      MR_Word PredSpecs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MutatorPreds_19, (MR_Integer) 1))));
      MR_Box conv16_STATE_VARIABLE_U_32_39;

      parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredSpec_64, PredSpecs_65, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_32_39);
    }
    func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_34_41);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_36_43);
    if (!((DestructorPreds_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredSpec_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestructorPreds_20, (MR_Integer) 0))));
      MR_Word PredSpecs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestructorPreds_20, (MR_Integer) 1))));
      MR_Box conv21_STATE_VARIABLE_U_37_44;

      parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredSpec_75, PredSpecs_76, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_37_44);
    }
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_39_46);
    func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_Word PredSpec_6,
  MR_Word PredSpecs_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  while (MR_TRUE)
  {
    MR_Word PredOrFunc_10;
    MR_Word PredName_11;
    MR_Word UserArity_12;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_String Var_33;
    MR_Box STATE_VARIABLE_U_15_34;
    MR_Box STATE_VARIABLE_U_17_36;
    MR_Box STATE_VARIABLE_U_18_37;
    MR_Integer Arity_44;
    MR_Box STATE_VARIABLE_U_13_47;
    MR_Box STATE_VARIABLE_U_15_49;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "\t\t")), S_8, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
    PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_6, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_6, (MR_Integer) 1))));
    UserArity_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_6, (MR_Integer) 2))));
    Var_33 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_10);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Var_33)), S_8, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_15_34);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_15_34, &STATE_VARIABLE_U_17_36);
    Arity_44 = (MR_Integer) (UserArity_12);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_25, (MR_Integer) 0, PredName_11, S_8, STATE_VARIABLE_U_17_36, &STATE_VARIABLE_U_13_47);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "/")), S_8, STATE_VARIABLE_U_13_47, &STATE_VARIABLE_U_15_49);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 8))));
    func_4(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Arity_44)), S_8, STATE_VARIABLE_U_15_49, &STATE_VARIABLE_U_18_37);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_18_37, &STATE_VARIABLE_U_19_19);
    if ((PredSpecs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));

      func_6(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "\n")), S_8, STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_16);
    }
    else
    {
      MR_Word HeadPredSpec_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSpecs_7, (MR_Integer) 0))));
      MR_Word TailPredSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSpecs_7, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_21_21;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_PredSpec_6;
      MR_Word next_value_of_PredSpecs_7;
      MR_Box next_value_of_STATE_VARIABLE_U_0_15;

      func_7(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ",\n")), S_8, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_PredSpec_6 = HeadPredSpec_13;
      next_value_of_PredSpecs_7 = TailPredSpecs_14;
      next_value_of_STATE_VARIABLE_U_0_15 = STATE_VARIABLE_U_21_21;
      PredSpec_6 = next_value_of_PredSpec_6;
      PredSpecs_7 = next_value_of_PredSpecs_7;
      STATE_VARIABLE_U_0_15 = next_value_of_STATE_VARIABLE_U_0_15;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_4;

    conv1_Str_4 = parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ObsoleteProcInfo_8)
{
  {
    MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoleteProcInfo_8, (MR_Integer) 0))));
    MR_Word ObsoleteInFavourOf_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoleteProcInfo_8, (MR_Integer) 1))));
    MR_String PredStr_12;
    MR_Word ObsoleteStrs_13;
    MR_String ObsoleteStr_14;
    MR_Word PredOrFunc_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 1))));
    MR_Word Modes_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 2))));
    MR_Word InstVarSet_43;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_43);
    switch (PredOrFunc_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_45;
          MR_Word ReturnArgMode_46;
          MR_Box conv0_ReturnArgMode_46;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_42, &FuncArgModes_45, &conv0_ReturnArgMode_46);
          ReturnArgMode_46 = ((MR_Word) (conv0_ReturnArgMode_46));
          PredStr_12 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_43, SymName_41, FuncArgModes_45, ReturnArgMode_46, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        PredStr_12 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_43, SymName_41, Modes_42, (MR_Word) ((MR_Unsigned) 0U));
        break;
    }
    ObsoleteStrs_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[7]), ObsoleteInFavourOf_11);
    ObsoleteStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", ObsoleteStrs_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma obsolete_proc(");
    mercury__io__write_string_4_p_0(Stream_6, PredStr_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", [");
    mercury__io__write_string_4_p_0(Stream_6, ObsoleteStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]).\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_26,
  MR_String PragmaName_7,
  MR_Word PredSpec0_8,
  MR_String AfterStr_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  {
    MR_Word PFU_12;
    MR_Word PredName_13;
    MR_Word Arity_14;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_21_21;
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_23_23;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) ":- pragma ")), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) (PragmaName_7)), S_10, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_19_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
    PFU_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec0_8, (MR_Integer) 0))) & (MR_Integer) 3);
    PredName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec0_8, (MR_Integer) 1))));
    Arity_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec0_8, (MR_Integer) 2))));
    parse_tree__parse_tree_out_pragma__mercury_format_pred_pfu_name_arity_6_p_0(TypeClassInfo_for_output_26, PFU_12, PredName_13, Arity_14, S_10, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) (AfterStr_9)), S_10, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) ").\n")), S_10, STATE_VARIABLE_U_23_23, STATE_VARIABLE_U_16);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pfu_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word PFU_7,
  MR_Word PredName_8,
  MR_Word UserArity_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  switch (PFU_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_26;
        MR_Box STATE_VARIABLE_U_15_27;
        MR_Box STATE_VARIABLE_U_17_29;
        MR_Box STATE_VARIABLE_U_18_30;
        MR_Integer Arity_37;
        MR_Box STATE_VARIABLE_U_13_40;
        MR_Box STATE_VARIABLE_U_15_42;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_26 = parse_tree__prog_out__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Var_26)), S_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_15_27);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_15_27, &STATE_VARIABLE_U_17_29);
        Arity_37 = (MR_Integer) (UserArity_9);
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_17, (MR_Integer) 0, PredName_8, S_10, STATE_VARIABLE_U_17_29, &STATE_VARIABLE_U_13_40);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_40, &STATE_VARIABLE_U_15_42);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8))));
        func_3(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Arity_37)), S_10, STATE_VARIABLE_U_15_42, &STATE_VARIABLE_U_18_30);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_18_30, STATE_VARIABLE_U_14);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_51;
        MR_Box STATE_VARIABLE_U_15_52;
        MR_Box STATE_VARIABLE_U_17_54;
        MR_Box STATE_VARIABLE_U_18_55;
        MR_Integer Arity_62;
        MR_Box STATE_VARIABLE_U_13_65;
        MR_Box STATE_VARIABLE_U_15_67;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_51 = parse_tree__prog_out__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Var_51)), S_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_15_52);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_15_52, &STATE_VARIABLE_U_17_54);
        Arity_62 = (MR_Integer) (UserArity_9);
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_17, (MR_Integer) 0, PredName_8, S_10, STATE_VARIABLE_U_17_54, &STATE_VARIABLE_U_13_65);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_65, &STATE_VARIABLE_U_15_67);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8))));
        func_8(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Arity_62)), S_10, STATE_VARIABLE_U_15_67, &STATE_VARIABLE_U_18_55);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_9(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_18_55, STATE_VARIABLE_U_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_73 = (MR_Integer) (UserArity_9);
        MR_Box STATE_VARIABLE_U_13_76;
        MR_Box STATE_VARIABLE_U_15_78;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_17, (MR_Integer) 0, PredName_8, S_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_13_76);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_10(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_76, &STATE_VARIABLE_U_15_78);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8))));
        func_11(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Arity_73)), S_10, STATE_VARIABLE_U_15_78, STATE_VARIABLE_U_14);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ReuseInfo_8)
{
  {
    MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_8, (MR_Integer) 0))));
    MR_Word HeadVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_8, (MR_Integer) 1))));
    MR_Word HeadVarTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_8, (MR_Integer) 2))));
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_8, (MR_Integer) 3))));
    MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_8, (MR_Integer) 4))));
    MR_Word MaybeStructureReuseDomain_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_8, (MR_Integer) 5))));
    MR_String PredStr_16;
    MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 1))));
    MR_Word Modes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 2))));
    MR_Word InstVarSet_40;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_40);
    switch (PredOrFunc_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_42;
          MR_Word ReturnArgMode_43;
          MR_Box conv0_ReturnArgMode_43;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_39, &FuncArgModes_42, &conv0_ReturnArgMode_43);
          ReturnArgMode_43 = ((MR_Word) (conv0_ReturnArgMode_43));
          PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_40, SymName_38, FuncArgModes_42, ReturnArgMode_43, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_40, SymName_38, Modes_39, (MR_Word) ((MR_Unsigned) 0U));
        break;
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma structure_reuse(");
    mercury__io__write_string_4_p_0(Stream_6, PredStr_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    if ((HeadVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars, types");
    else
    {
      MR_Word Var_64;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars(");
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, HeadVars_11, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "), ");
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "types(");
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (TVarSet_14));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_64, (MR_String) ", ", HeadVarTypes_12, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_6_p_0(Stream_6, VarSet_13, TVarSet_14, MaybeStructureReuseDomain_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word SharingInfo_8)
{
  {
    MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_8, (MR_Integer) 0))));
    MR_Word HeadVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_8, (MR_Integer) 1))));
    MR_Word HeadVarTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_8, (MR_Integer) 2))));
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_8, (MR_Integer) 3))));
    MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_8, (MR_Integer) 4))));
    MR_Word MaybeSharingAs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_8, (MR_Integer) 5))));
    MR_String PredStr_16;
    MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 1))));
    MR_Word Modes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 2))));
    MR_Word InstVarSet_40;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_40);
    switch (PredOrFunc_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_42;
          MR_Word ReturnArgMode_43;
          MR_Box conv0_ReturnArgMode_43;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_39, &FuncArgModes_42, &conv0_ReturnArgMode_43);
          ReturnArgMode_43 = ((MR_Word) (conv0_ReturnArgMode_43));
          PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_40, SymName_38, FuncArgModes_42, ReturnArgMode_43, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_40, SymName_38, Modes_39, (MR_Word) ((MR_Unsigned) 0U));
        break;
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma structure_sharing(");
    mercury__io__write_string_4_p_0(Stream_6, PredStr_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    if ((HeadVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars, types");
    else
    {
      MR_Word Var_64;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars(");
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, HeadVars_11, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "), ");
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "types(");
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (TVarSet_14));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_64, (MR_String) ", ", HeadVarTypes_12, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    parse_tree__prog_ctgc__print_interface_structure_sharing_domain_6_p_0(Stream_6, VarSet_13, TVarSet_14, MaybeSharingAs_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_Str_4;

    conv2_Str_4 = parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_4;

    conv1_Str_4 = parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word Term2Info_8)
{
  {
    MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_8, (MR_Integer) 0))));
    MR_Word MaybeSuccess_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_8, (MR_Integer) 1))));
    MR_Word MaybeFailure_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_8, (MR_Integer) 2))));
    MR_Word MaybeTermination_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_8, (MR_Integer) 3))));
    MR_String PredStr_14;
    MR_String SuccessStr_15;
    MR_String FailureStr_16;
    MR_String TermStr_17;
    MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 1))));
    MR_Word Modes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 2))));
    MR_Word InstVarSet_50;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_50);
    switch (PredOrFunc_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_52;
          MR_Word ReturnArgMode_53;
          MR_Box conv0_ReturnArgMode_53;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_49, &FuncArgModes_52, &conv0_ReturnArgMode_53);
          ReturnArgMode_53 = ((MR_Word) (conv0_ReturnArgMode_53));
          PredStr_14 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_50, SymName_48, FuncArgModes_52, ReturnArgMode_53, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        PredStr_14 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_50, SymName_48, Modes_49, (MR_Word) ((MR_Unsigned) 0U));
        break;
    }
    if ((MaybeSuccess_11 == (MR_Word) ((MR_Unsigned) 0U)))
      SuccessStr_15 = (MR_String) "not_set";
    else
    {
      MR_Word ArgSizeConstraints_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuccess_11, (MR_Integer) 0))));
      MR_Word ConstraintStrs_58;
      MR_String ConstraintsStr_59;
      MR_String Var_71;

      ConstraintStrs_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[5]), ArgSizeConstraints_56);
      ConstraintsStr_59 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_58);
      Var_71 = mercury__string__f_43_43_2_f_0(ConstraintsStr_59, (MR_String) "])");
      SuccessStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "constraints([", Var_71);
    }
    if ((MaybeFailure_12 == (MR_Word) ((MR_Unsigned) 0U)))
      FailureStr_16 = (MR_String) "not_set";
    else
    {
      MR_Word ArgSizeConstraints_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailure_12, (MR_Integer) 0))));
      MR_Word ConstraintStrs_75;
      MR_String ConstraintsStr_76;
      MR_String Var_88;

      ConstraintStrs_75 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[6]), ArgSizeConstraints_73);
      ConstraintsStr_76 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_75);
      Var_88 = mercury__string__f_43_43_2_f_0(ConstraintsStr_76, (MR_String) "])");
      FailureStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "constraints([", Var_88);
    }
    if ((MaybeTermination_13 == (MR_Word) ((MR_Unsigned) 0U)))
      TermStr_17 = (MR_String) "not_set";
    else
    {
      MR_Word Termination_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_13, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Termination_92)) == (MR_Integer) 1))
        TermStr_17 = (MR_String) "can_loop";
      else
        TermStr_17 = (MR_String) "cannot_loop";
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma termination2_info(");
    mercury__io__write_string_4_p_0(Stream_6, PredStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, SuccessStr_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, FailureStr_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, TermStr_17);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word TermInfo_8)
{
  {
    MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_8, (MR_Integer) 0))));
    MR_Word MaybeArgSize_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_8, (MR_Integer) 1))));
    MR_Word MaybeTermination_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_8, (MR_Integer) 2))));
    MR_String PredStr_13;
    MR_String ArgSizeStr_14;
    MR_String TermStr_15;
    MR_Word PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 1))));
    MR_Word Modes_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_10, (MR_Integer) 2))));
    MR_Word InstVarSet_46;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_46);
    switch (PredOrFunc_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_48;
          MR_Word ReturnArgMode_49;
          MR_Box conv0_ReturnArgMode_49;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_45, &FuncArgModes_48, &conv0_ReturnArgMode_49);
          ReturnArgMode_49 = ((MR_Word) (conv0_ReturnArgMode_49));
          PredStr_13 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_46, SymName_44, FuncArgModes_48, ReturnArgMode_49, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        PredStr_13 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_46, SymName_44, Modes_45, (MR_Word) ((MR_Unsigned) 0U));
        break;
    }
    ArgSizeStr_14 = parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Integer) 0, MaybeArgSize_11);
    TermStr_15 = parse_tree__parse_tree_out_pragma__maybe_termination_info_to_string_2_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Integer) 0, MaybeTermination_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma termination_info(");
    mercury__io__write_string_4_p_0(Stream_6, PredStr_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, ArgSizeStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, TermStr_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_termination_info_to_string_2_f_0(
  MR_Word TypeInfo_for_S_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word Verbose_4,
  MR_Word MaybeTerminationInfo_5)
{
  {
    MR_String Str_6;

    if ((MaybeTerminationInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_6 = (MR_String) "not_set";
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerminationInfo_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
      {
        MR_Box ErrorInfo_8 = (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0));

        switch (Verbose_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_6 = (MR_String) "can_loop";
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_13;
              MR_String Var_20;

              Var_13 = mercury__string__string_1_f_0(TypeInfo_for_T_17, ErrorInfo_8);
              Var_20 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "can_loop(", Var_20);
            }
            break;
        }
      }
      else
        Str_6 = (MR_String) "cannot_loop";
    }
    return Str_6;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__bool_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word Verbose_4,
  MR_Word MaybeArgSizeInfo_5)
{
  {
    MR_String Str_6;

    if ((MaybeArgSizeInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_6 = (MR_String) "not_set";
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSizeInfo_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0))
      {
        MR_Integer Const_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        MR_Word UsedArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
        MR_String Var_22;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String Var_40;
        MR_Word BoolStrs_44;
        MR_String Var_49;
        MR_String Var_57;

        BoolStrs_44 = mercury__list__map_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[4]), UsedArgs_8);
        Var_49 = mercury__string__join_list_2_f_0((MR_String) ", ", BoolStrs_44);
        Var_57 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "]");
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_57);
        Var_30 = mercury__string__f_43_43_2_f_0(Var_22, (MR_String) ")");
        Var_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_30);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), Const_7, &Var_33);
        Var_40 = mercury__string__f_43_43_2_f_0(Var_33, Var_32);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "finite(", Var_40);
      }
      else
      {
        MR_Box ErrorInfo_9 = (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0));

        switch (Verbose_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_6 = (MR_String) "infinite";
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_14;
              MR_String Var_27;

              Var_14 = mercury__string__string_1_f_0(TypeInfo_for_T_24, ErrorInfo_9);
              Var_27 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "infinite(", Var_27);
            }
            break;
        }
      }
    }
    return Str_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0(
  MR_Word Stream_7,
  MR_Word VarNamePrint_8,
  MR_Word Lang_9,
  MR_Word TypeSpecInfo_10)
{
  {
    MR_Word PFUMM_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_10, (MR_Integer) 0))));
    MR_Word PredName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_10, (MR_Integer) 1))));
    MR_Word SpecName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_10, (MR_Integer) 2))));
    MR_Word Subst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_10, (MR_Integer) 3))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_10, (MR_Integer) 4))));
    MR_Word Var_34;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma type_spec(");
    switch (MR_tag((MR_Word) PFUMM_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModesOrArity_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM_12, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) ModesOrArity_60)) == (MR_Integer) 1))
          {
            MR_Word Arity_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_60, (MR_Integer) 0))));
            MR_Box conv11_STATE_VARIABLE_IO_31_31;

            parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_13, Arity_50, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_31_31);
          }
          else
          {
            MR_Word Modes_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_60, (MR_Integer) 0))));
            MR_Word PredNameModesPF_53;
            MR_String PredStr_54;

            {
              PredNameModesPF_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_53, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), PredNameModesPF_53, 1) = ((MR_Box) (PredName_13));
              MR_hl_field(MR_mktag(0), PredNameModesPF_53, 2) = ((MR_Box) (Modes_52));
            }
            PredStr_54 = parse_tree__parse_tree_out_pragma__proc_pf_name_modes_to_string_2_f_0(Lang_9, PredNameModesPF_53);
            mercury__io__write_string_4_p_0(Stream_7, PredStr_54);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModesOrArity_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PFUMM_12, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) ModesOrArity_18)) == (MR_Integer) 1))
          {
            MR_Word Arity_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_18, (MR_Integer) 0))));
            MR_String Var_74;
            MR_Integer Arity_85;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv1_STATE_VARIABLE_U_15_75;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv3_STATE_VARIABLE_U_17_77;
            MR_Box conv4_STATE_VARIABLE_U_13_88;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv6_STATE_VARIABLE_U_15_90;
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv8_STATE_VARIABLE_U_18_78;
            void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv10_STATE_VARIABLE_IO_31_31;

            Var_74 = parse_tree__prog_out__pred_or_func_to_str_1_f_0((MR_Integer) 1);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_74)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15_75);
            func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_17_77);
            Arity_85 = (MR_Integer) (Arity_23);
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_13, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_13_88);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_15_90);
            func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
            func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_85)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_18_78);
            func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_31_31);
          }
          else
          {
            MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_18, (MR_Integer) 0))));
            MR_Word PredNameModesPF_21;
            MR_String PredStr_22;

            {
              PredNameModesPF_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_21, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), PredNameModesPF_21, 1) = ((MR_Box) (PredName_13));
              MR_hl_field(MR_mktag(0), PredNameModesPF_21, 2) = ((MR_Box) (Modes_20));
            }
            PredStr_22 = parse_tree__parse_tree_out_pragma__proc_pf_name_modes_to_string_2_f_0(Lang_9, PredNameModesPF_21);
            mercury__io__write_string_4_p_0(Stream_7, PredStr_22);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredArity_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PFUMM_12, (MR_Integer) 0))));
          MR_Box conv12_STATE_VARIABLE_IO_31_31;

          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredName_13, PredArity_24, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_31_31);
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", (");
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (VarSet_16));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (VarNamePrint_8));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[2]), Var_34, (MR_String) ", ", Subst_15, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "), ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_5_p_0((MR_Integer) 1, SpecName_14, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ").\n");
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__proc_pf_name_modes_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word PredNameModesPF_5)
{
  {
    MR_String Str_6;
    MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_5, (MR_Integer) 1))));
    MR_Word Modes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_5, (MR_Integer) 2))));
    MR_Word InstVarSet_10;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_10);
    switch (PredOrFunc_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_12;
          MR_Word ReturnArgMode_13;
          MR_Box conv0_ReturnArgMode_13;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_9, &FuncArgModes_12, &conv0_ReturnArgMode_13);
          ReturnArgMode_13 = ((MR_Word) (conv0_ReturnArgMode_13));
          Str_6 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_4, InstVarSet_10, SymName_8, FuncArgModes_12, ReturnArgMode_13, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 0:
        Str_6 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_4, InstVarSet_10, SymName_8, Modes_9, (MR_Word) ((MR_Unsigned) 0U));
        break;
    }
    return Str_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word PredOrFunc_7,
  MR_Word PredName_8,
  MR_Word UserArity_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_String Var_14;
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Integer Arity_26;
    MR_Box STATE_VARIABLE_U_13_29;
    MR_Box STATE_VARIABLE_U_15_31;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_7);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) (Var_14)), S_10, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
    Arity_26 = (MR_Integer) (UserArity_9);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_21, (MR_Integer) 0, PredName_8, S_10, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_13_29);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_29, &STATE_VARIABLE_U_15_31);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 8))));
    func_3(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) (Arity_26)), S_10, STATE_VARIABLE_U_15_31, &STATE_VARIABLE_U_18_18);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_5_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word PredName_6,
  MR_Word HeadVar__2_2,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  {
    MR_Integer Arity_7 = (MR_Integer) (HeadVar__2_2);
    MR_Box STATE_VARIABLE_U_13_13;
    MR_Box STATE_VARIABLE_U_15_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_17, (MR_Integer) 0, PredName_6, S_8, STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_13_13);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "/")), S_8, STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8))));
    func_1(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Arity_7)), S_8, STATE_VARIABLE_U_15_15, STATE_VARIABLE_U_12);
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
