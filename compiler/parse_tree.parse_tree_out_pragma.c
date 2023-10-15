/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version rotd-2023-10-15
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
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
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Box S_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

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
  MR_Word TypeClassInfo_for_pt_output_53,
  MR_Word Lang_6,
  MR_Word FPInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_27,
  MR_Box * STATE_VARIABLE_U_28);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_36,
  MR_Word Lang_1,
  MR_Word InstVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);

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
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
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
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word RFSInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(
  MR_Word Stream_5,
  MR_Word Tabled_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word RequireTR_8);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word PredOrProcSpec_5);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_46,
  MR_Word Lang_6,
  MR_Word FPE_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24);

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
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(
  MR_Word Stream_5,
  MR_Word OISU_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word PredSpec_6,
  MR_Word PredSpecs_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(
  MR_Word FormatStringValues_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0(
  MR_Word Stream_5,
  MR_Word ObsoletePred_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Word Stream_11);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[12][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_3[10][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[31][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][9];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_7[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_8[3][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[2][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_12[1][6];


struct parse_tree__parse_tree_out_pragma__vector_common_type_9_0_s {
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_9_0_s parse_tree__parse_tree_out_pragma_vector_common_9[20];

struct parse_tree__parse_tree_out_pragma__vector_common_type_11_0_s {
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_11_0_s parse_tree__parse_tree_out_pragma_vector_common_11[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[3])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[3])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[4])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[5])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[4])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[7])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[9])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_3[10][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[31][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "promise_pure")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "promise_semipure")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "does_not_terminate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "terminates")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "ordinary_despite_detism")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "will_not_throw_exception")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "may_modify_trail")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "will_not_modify_trail")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "may_call_mm_tabled")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "will_not_call_mm_tabled")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "always_boxed")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "affects_liveness")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "doesnt_affect_liveness")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "allocates_bounded_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "allocates_unbounded_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "doesnt_allocate_memory")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "doesnt_have_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "doesnt_register_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "registers_roots")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "refers_to_llds_stack")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "needs_call_standard_output_registers")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "may_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "may_not_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "may_export_body")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "may_not_export_body")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "high_level_backend")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "low_level_backend")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "])")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "fast_loose")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_7[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_8[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_12[1][6] = {
  /* row   0 */
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
  /* row   0 */   { (MR_String) "inline" },
  /* row   1 */   { (MR_String) "no_inline" },
  /* row   2 */   { (MR_String) "consider_used" },
  /* row   3 */   { (MR_String) "mode_check_clauses" },
  /* row   4 */   { (MR_String) "no_determinism_warning" },
  /* row   5 */   { (MR_String) "promise_pure" },
  /* row   6 */   { (MR_String) "promise_semipure" },
  /* row   7 */   { (MR_String) "promise_equivalent_clauses" },
  /* row   8 */   { (MR_String) "not_tabled_for_io" },
  /* row   9 */   { (MR_String) "tabled_for_io" },
  /* row  10 */   { (MR_String) "tabled_for_io_unitize" },
  /* row  11 */   { (MR_String) "tabled_for_descendant_io" },
  /* row  12 */   { (MR_String) "concurrency" },
  /* row  13 */   { (MR_String) "single_prec_float" },
  /* row  14 */   { (MR_String) "double_prec_float" },
  /* row  15 */   { (MR_String) "memo" },
  /* row  16 */   { (MR_String) "parallel_conj" },
  /* row  17 */   { (MR_String) "trailing" },
  /* row  18 */   { (MR_String) "strict_sequential" },
  /* row  19 */   { (MR_String) "conservative_gc" },
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_11_0_s parse_tree__parse_tree_out_pragma_vector_common_11[8] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[17])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[15])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[16])) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[20])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[19])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[18])) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 0U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Feature_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_String Str_8 = ((&parse_tree__parse_tree_out_pragma_vector_common_9[12 + Feature_5]))->parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Str_8)), S_6, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_term_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Integer VarId_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Coeff_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Var_10;
  MR_String Var_13;
  MR_String Var_15;
  MR_String Var_16;
  MR_String Var_23;

  Var_10 = libs__rat__to_rat_string_1_f_0(Coeff_4);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ")");
  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_13);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), VarId_3, &Var_16);
  Var_23 = mercury__string__f_43_43_2_f_0(Var_16, Var_15);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "term(", Var_23);
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__arg_size_term_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(
  MR_Word Constraint_3)
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
    Terms_5 = ((MR_Word) ((MR_hl_field(1, Constraint_3, (MR_Integer) 0))));
    Constant_6 = ((MR_Word) ((MR_hl_field(1, Constraint_3, (MR_Integer) 1))));
    OpStr_7 = (MR_String) "eq";
  }
  else
  {
    Terms_5 = ((MR_Word) ((MR_hl_field(0, Constraint_3, (MR_Integer) 0))));
    Constant_6 = ((MR_Word) ((MR_hl_field(0, Constraint_3, (MR_Integer) 1))));
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

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__bool_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3)
{
  MR_String Str_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, SNA_3, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, SNA_3, (MR_Integer) 1))));
  MR_String Var_7;
  MR_String Var_8;
  MR_String Var_10;

  Var_7 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_5);
  Var_10 = mercury__string__int_to_string_1_f_0(Arity_6);
  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_10);
  Str_4 = mercury__string__f_43_43_2_f_0(Var_7, Var_8);
  return Str_4;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word UnitSelector_5)
{
  MR_String String_6;

  if (((MR_tag((MR_Word) UnitSelector_5)) == (MR_Integer) 0))
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
  else
  {
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(1, UnitSelector_5, (MR_Integer) 0))));

    String_6 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TypeVarSet_4, (MR_Integer) 0, Type_7);
  }
  return String_6;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_6;

  conv0_String_6 = parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_6));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word TypeVarSet_6,
  MR_Word HeadVar__3_3)
{
  MR_String Str_9;
  MR_Word DataA_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word DataB_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word VarA_10 = ((MR_Word) ((MR_hl_field(0, DataA_7, (MR_Integer) 0))));
  MR_Word SelectorA_11 = ((MR_Word) ((MR_hl_field(0, DataA_7, (MR_Integer) 1))));
  MR_Word VarB_12 = ((MR_Word) ((MR_hl_field(0, DataB_8, (MR_Integer) 0))));
  MR_Word SelectorB_13 = ((MR_Word) ((MR_hl_field(0, DataB_8, (MR_Integer) 1))));
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
  MR_Word UnitStrs_37;
  MR_Word Var_38;
  MR_Word UnitStrs_42;

  VarStrA_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, (MR_Integer) 0, VarA_10);
  VarStrB_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, (MR_Integer) 0, VarB_12);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_12[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (TypeVarSet_6));
  }
  UnitStrs_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, SelectorA_11);
  SelectorStrA_16 = mercury__string__join_list_2_f_0((MR_String) ", ", UnitStrs_37);
  UnitStrs_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, SelectorB_13);
  SelectorStrB_17 = mercury__string__join_list_2_f_0((MR_String) ", ", UnitStrs_42);
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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Box S_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (MR_Word) ((MR_Char) 92)), S_5, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (MR_Word) (QuoteChar_8)), S_5, STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_10);
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
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 5))));

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (MR_Word) (Char_6)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
    }
    else
    {
      MR_String Var_15;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Var_15)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_item_foreign_proc_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word FPInfo_5)
{
  MR_String Str_6;
  MR_Word State0_7;
  MR_Word State_8;
  MR_Box conv0_State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), Lang_4, FPInfo_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_7)), &conv0_State_8);
  State_8 = ((MR_Word) (conv0_State_8));
  Str_6 = mercury__string__builder__to_string_1_f_0(State_8);
  return Str_6;
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_foreign_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word FPInfo_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), Lang_7, FPInfo_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_info__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_53,
  MR_Word Lang_6,
  MR_Word FPInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_27,
  MR_Box * STATE_VARIABLE_U_28)
{
  MR_Word TypeInfo_16_69;
  MR_Word Attributes_10 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 0))));
  MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 1))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Vars0_13 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 3))));
  MR_Word ProgVarSet_14 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 4))));
  MR_Word InstVarSet_15 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 5))));
  MR_Word PragmaCode_16 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 6))));
  MR_Word ForeignLang_19;
  MR_String C_Code_25;
  MR_Box STATE_VARIABLE_U_30_30;
  MR_Box STATE_VARIABLE_U_31_31;
  MR_Box STATE_VARIABLE_U_33_33;
  MR_Box STATE_VARIABLE_U_34_34;
  MR_Box STATE_VARIABLE_U_45_45;
  MR_Box STATE_VARIABLE_U_47_47;
  MR_Box STATE_VARIABLE_U_48_48;
  MR_Box STATE_VARIABLE_U_50_50;
  MR_Box STATE_VARIABLE_U_51_51;
  MR_Box STATE_VARIABLE_U_13_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Box STATE_VARIABLE_U_17_60;
  MR_Box STATE_VARIABLE_U_11_64;
  MR_Box STATE_VARIABLE_U_12_65;
  MR_Word Var_67;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), S_8, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_30_30);
  ForeignLang_19 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_10);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_pt_output_53, ForeignLang_19, S_8, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ",\n    ")), S_8, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_53, PredName_11, S_8, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_34_34);
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Vars_20;
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Box STATE_VARIABLE_U_42_42;
        MR_Box STATE_VARIABLE_U_43_43;
        MR_Word Var_157;
        MR_String VarName_161;
        MR_Word Mode_162;
        MR_Box STATE_VARIABLE_U_30_168;
        MR_Box STATE_VARIABLE_U_32_170;
        MR_Box conv2_Var_157;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars0_13, &Vars_20, &conv2_Var_157);
        Var_157 = ((MR_Word) (conv2_Var_157));
        if ((Vars_20 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_40_40 = STATE_VARIABLE_U_34_34;
        else
        {
          MR_Box STATE_VARIABLE_U_37_37;
          MR_Box STATE_VARIABLE_U_38_38;
          MR_Word Var_79;
          MR_Word Vars_80;
          MR_String VarName_83;
          MR_Word Mode_84;
          MR_Box STATE_VARIABLE_U_30_90;
          MR_Box STATE_VARIABLE_U_32_92;
          MR_Box STATE_VARIABLE_U_33_93;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_3(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_37_37);
          Var_79 = ((MR_Word) ((MR_hl_field(1, Vars_20, (MR_Integer) 0))));
          Vars_80 = ((MR_Word) ((MR_hl_field(1, Vars_20, (MR_Integer) 1))));
          VarName_83 = ((MR_String) ((MR_hl_field(0, Var_79, (MR_Integer) 1))));
          Mode_84 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 2))));
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) (VarName_83)), S_8, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_30_90);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          func_5(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_90, &STATE_VARIABLE_U_32_92);
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Mode_84, S_8, STATE_VARIABLE_U_32_92, &STATE_VARIABLE_U_33_93);
          if ((Vars_80 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_38_38 = STATE_VARIABLE_U_33_93;
          else
          {
            MR_Box STATE_VARIABLE_U_35_95;
            MR_Word Var_131;
            MR_Word Vars_132;
            MR_String VarName_135;
            MR_Word Mode_136;
            MR_Box STATE_VARIABLE_U_30_142;
            MR_Box STATE_VARIABLE_U_32_144;
            MR_Box STATE_VARIABLE_U_33_145;
            MR_Box STATE_VARIABLE_U_35_147;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_6(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_93, &STATE_VARIABLE_U_35_95);
            Var_131 = ((MR_Word) ((MR_hl_field(1, Vars_80, (MR_Integer) 0))));
            Vars_132 = ((MR_Word) ((MR_hl_field(1, Vars_80, (MR_Integer) 1))));
            VarName_135 = ((MR_String) ((MR_hl_field(0, Var_131, (MR_Integer) 1))));
            Mode_136 = ((MR_Word) ((MR_hl_field(0, Var_131, (MR_Integer) 2))));
            func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
            func_7(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) (VarName_135)), S_8, STATE_VARIABLE_U_35_95, &STATE_VARIABLE_U_30_142);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
            func_8(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_142, &STATE_VARIABLE_U_32_144);
            parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Mode_136, S_8, STATE_VARIABLE_U_32_144, &STATE_VARIABLE_U_33_145);
            if ((Vars_132 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_U_35_147 = STATE_VARIABLE_U_33_145;
            else
            {
              void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));

              func_9(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_145, &STATE_VARIABLE_U_35_147);
            }
            parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Vars_132, S_8, STATE_VARIABLE_U_35_147, &STATE_VARIABLE_U_38_38);
          }
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          func_10(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
        }
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) " = (")), S_8, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_42_42);
        VarName_161 = ((MR_String) ((MR_hl_field(0, Var_157, (MR_Integer) 1))));
        Mode_162 = ((MR_Word) ((MR_hl_field(0, Var_157, (MR_Integer) 2))));
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_12(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) (VarName_161)), S_8, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_30_168);
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_13(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_168, &STATE_VARIABLE_U_32_170);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Mode_162, S_8, STATE_VARIABLE_U_32_170, &STATE_VARIABLE_U_43_43);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
      }
      break;
    case (MR_Integer) 0:
      if ((Vars0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_45_45 = STATE_VARIABLE_U_34_34;
      else
      {
        MR_Box STATE_VARIABLE_U_37_262;
        MR_Box STATE_VARIABLE_U_38_263;
        MR_Word Var_265;
        MR_Word Vars_266;
        MR_String VarName_268;
        MR_Word Mode_269;
        MR_Box STATE_VARIABLE_U_30_271;
        MR_Box STATE_VARIABLE_U_32_273;
        MR_Box STATE_VARIABLE_U_33_274;
        void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_15(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_37_262);
        Var_265 = ((MR_Word) ((MR_hl_field(1, Vars0_13, (MR_Integer) 0))));
        Vars_266 = ((MR_Word) ((MR_hl_field(1, Vars0_13, (MR_Integer) 1))));
        VarName_268 = ((MR_String) ((MR_hl_field(0, Var_265, (MR_Integer) 1))));
        Mode_269 = ((MR_Word) ((MR_hl_field(0, Var_265, (MR_Integer) 2))));
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) (VarName_268)), S_8, STATE_VARIABLE_U_37_262, &STATE_VARIABLE_U_30_271);
        func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_17(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_271, &STATE_VARIABLE_U_32_273);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Mode_269, S_8, STATE_VARIABLE_U_32_273, &STATE_VARIABLE_U_33_274);
        if ((Vars_266 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_38_263 = STATE_VARIABLE_U_33_274;
        else
        {
          MR_Box STATE_VARIABLE_U_35_234;
          MR_Word Var_235;
          MR_Word Vars_236;
          MR_String VarName_238;
          MR_Word Mode_239;
          MR_Box STATE_VARIABLE_U_30_241;
          MR_Box STATE_VARIABLE_U_32_243;
          MR_Box STATE_VARIABLE_U_33_244;
          MR_Box STATE_VARIABLE_U_35_246;
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_18(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_274, &STATE_VARIABLE_U_35_234);
          Var_235 = ((MR_Word) ((MR_hl_field(1, Vars_266, (MR_Integer) 0))));
          Vars_236 = ((MR_Word) ((MR_hl_field(1, Vars_266, (MR_Integer) 1))));
          VarName_238 = ((MR_String) ((MR_hl_field(0, Var_235, (MR_Integer) 1))));
          Mode_239 = ((MR_Word) ((MR_hl_field(0, Var_235, (MR_Integer) 2))));
          func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          func_19(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) (VarName_238)), S_8, STATE_VARIABLE_U_35_234, &STATE_VARIABLE_U_30_241);
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
          func_20(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_241, &STATE_VARIABLE_U_32_243);
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Mode_239, S_8, STATE_VARIABLE_U_32_243, &STATE_VARIABLE_U_33_244);
          if ((Vars_236 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_35_246 = STATE_VARIABLE_U_33_244;
          else
          {
            void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));

            func_21(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_244, &STATE_VARIABLE_U_35_246);
          }
          parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(TypeClassInfo_for_pt_output_53, Lang_6, InstVarSet_15, Vars_236, S_8, STATE_VARIABLE_U_35_246, &STATE_VARIABLE_U_38_263);
        }
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_38_263, &STATE_VARIABLE_U_45_45);
      }
      break;
  }
  func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_23(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ",\n    ")), S_8, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_47_47);
  func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_24(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) "[")), S_8, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_13_56);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[2]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_1));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_53));
  }
  Var_59 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(Attributes_10, ProgVarSet_14);
  func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 26))));
  func_25(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (Var_57)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_59)), S_8, STATE_VARIABLE_U_13_56, &STATE_VARIABLE_U_17_60);
  func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_26(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) "]")), S_8, STATE_VARIABLE_U_17_60, &STATE_VARIABLE_U_48_48);
  func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_27(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ",\n")), S_8, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
  C_Code_25 = ((MR_String) ((MR_hl_field(0, PragmaCode_16, (MR_Integer) 0))));
  func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_28(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) "\"")), S_8, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_11_64);
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[0]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_2));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_53));
    MR_hl_field(0, Var_67, 4) = S_8;
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_53, (MR_Integer) 3, &TypeInfo_16_69);
  mercury__string__foldl_4_p_0(TypeInfo_16_69, Var_67, C_Code_25, STATE_VARIABLE_U_11_64, &STATE_VARIABLE_U_12_65);
  func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_29(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) "\"")), S_8, STATE_VARIABLE_U_12_65, &STATE_VARIABLE_U_51_51);
  func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_53, (MR_Integer) 0)), (MR_Integer) 6))));
  func_30(((MR_Box) (TypeClassInfo_for_pt_output_53)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_51_51, STATE_VARIABLE_U_28);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_36,
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
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Vars_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_String VarName_23 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
      MR_Word Mode_24 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_U_30_30;
      MR_Box STATE_VARIABLE_U_32_32;
      MR_Box STATE_VARIABLE_U_33_33;
      MR_Box STATE_VARIABLE_U_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_36, (MR_Integer) 0)), (MR_Integer) 6))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_U_0_6;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_36)), ((MR_Box) (VarName_23)), HeadVar__5_5, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_30_30);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_36, (MR_Integer) 0)), (MR_Integer) 6))));
      func_1(((MR_Box) (TypeClassInfo_for_pt_output_36)), ((MR_Box) ((MR_String) " :: ")), HeadVar__5_5, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_36, Lang_1, InstVarSet_3, Mode_24, HeadVar__5_5, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
      if ((Vars_19 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_35_35 = STATE_VARIABLE_U_33_33;
      else
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_36, (MR_Integer) 0)), (MR_Integer) 6))));

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_36)), ((MR_Box) ((MR_String) ", ")), HeadVar__5_5, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
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

static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
  MR_Word Attrs_4,
  MR_Word VarSet_5)
{
  MR_Word StringList_6;
  MR_Word MayCallMercury_7;
  MR_Word ThreadSafe_8;
  MR_Word TabledForIO_9;
  MR_Word Purity_10;
  MR_Word Terminates_11;
  MR_Word UserSharing_12;
  MR_Word OrdinaryDespiteDetism_13;
  MR_Word Exceptions_14;
  MR_Word MayModifyTrail_15;
  MR_Word MayCallMM_Tabled_16;
  MR_Word BoxPolicy_17;
  MR_Word AffectsLiveness_18;
  MR_Word AllocatesMemory_19;
  MR_Word RegistersRoots_20;
  MR_Word RefersToLldsStack_21;
  MR_Word CallStdOutRegs_22;
  MR_Word MaybeMayDuplicate_23;
  MR_Word MaybeMayExportBody_24;
  MR_Word ForSpecificBackend_25;
  MR_String MayCallMercuryStr_26;
  MR_String ThreadSafeStr_27;
  MR_String TabledForIOStr_28;
  MR_Word PurityStrList_29;
  MR_Word TerminatesStrList_30;
  MR_Word UserSharingStrList_34;
  MR_Word OrdinaryDespiteDetismStrList_35;
  MR_Word ExceptionsStrList_36;
  MR_Word MayModifyTrailStrList_37;
  MR_Word MayCallMM_TabledStrList_38;
  MR_Word BoxPolicyStrList_39;
  MR_Word AffectsLivenessStrList_40;
  MR_Word AllocatesMemoryStrList_41;
  MR_Word RegistersRootsStrList_42;
  MR_Word RefersToLldsStackList_43;
  MR_Word CallStdOutRegsList_44;
  MR_Word MayDuplicateStrList_46;
  MR_Word MayExportBodyStrList_48;
  MR_Word ForSpecificBackendList_49;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
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

  MayCallMercury_7 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_4);
  ThreadSafe_8 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attrs_4);
  TabledForIO_9 = parse_tree__prog_data_foreign__get_tabled_for_io_1_f_0(Attrs_4);
  Purity_10 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attrs_4);
  Terminates_11 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attrs_4);
  UserSharing_12 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs_4);
  OrdinaryDespiteDetism_13 = parse_tree__prog_data_foreign__get_ordinary_despite_detism_1_f_0(Attrs_4);
  Exceptions_14 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attrs_4);
  MayModifyTrail_15 = parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(Attrs_4);
  MayCallMM_Tabled_16 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(Attrs_4);
  BoxPolicy_17 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(Attrs_4);
  AffectsLiveness_18 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(Attrs_4);
  AllocatesMemory_19 = parse_tree__prog_data_foreign__get_allocates_memory_1_f_0(Attrs_4);
  RegistersRoots_20 = parse_tree__prog_data_foreign__get_registers_roots_1_f_0(Attrs_4);
  RefersToLldsStack_21 = parse_tree__prog_data_foreign__get_refers_to_llds_stack_1_f_0(Attrs_4);
  CallStdOutRegs_22 = parse_tree__prog_data_foreign__get_call_std_out_regs_1_f_0(Attrs_4);
  MaybeMayDuplicate_23 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_4);
  MaybeMayExportBody_24 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_4);
  ForSpecificBackend_25 = parse_tree__prog_data_foreign__get_for_specific_backend_1_f_0(Attrs_4);
  switch (MayCallMercury_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MayCallMercuryStr_26 = (MR_String) "may_call_mercury";
      break;
    case (MR_Integer) 1:
      MayCallMercuryStr_26 = (MR_String) "will_not_call_mercury";
      break;
  }
  switch (ThreadSafe_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      ThreadSafeStr_27 = (MR_String) "maybe_thread_safe";
      break;
    case (MR_Integer) 0:
      ThreadSafeStr_27 = (MR_String) "not_thread_safe";
      break;
    case (MR_Integer) 1:
      ThreadSafeStr_27 = (MR_String) "thread_safe";
      break;
  }
  TabledForIOStr_28 = ((&parse_tree__parse_tree_out_pragma_vector_common_9[8 + TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
  switch (Purity_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      PurityStrList_29 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      PurityStrList_29 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[2]));
      break;
    case (MR_Integer) 1:
      PurityStrList_29 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[3]));
      break;
  }
  switch (Terminates_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      TerminatesStrList_30 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      TerminatesStrList_30 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
      break;
    case (MR_Integer) 0:
      TerminatesStrList_30 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[5]));
      break;
  }
  if ((UserSharing_12 == (MR_Word) ((MR_Unsigned) 0U)))
    UserSharingStrList_34 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Sharing_31 = ((MR_Word) ((MR_hl_field(1, UserSharing_12, (MR_Integer) 0))));
    MR_Word MaybeTypes_32 = ((MR_Word) ((MR_hl_field(1, UserSharing_12, (MR_Integer) 1))));
    MR_String String_33;

    String_33 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(VarSet_5, Sharing_31, MaybeTypes_32);
    {
      UserSharingStrList_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UserSharingStrList_34, 0) = ((MR_Box) (String_33));
      MR_hl_field(1, UserSharingStrList_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  switch (OrdinaryDespiteDetism_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      OrdinaryDespiteDetismStrList_35 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      OrdinaryDespiteDetismStrList_35 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[6]));
      break;
  }
  switch (Exceptions_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ExceptionsStrList_36 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      ExceptionsStrList_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[7]));
      break;
  }
  switch (MayModifyTrail_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MayModifyTrailStrList_37 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[8]));
      break;
    case (MR_Integer) 1:
      MayModifyTrailStrList_37 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[9]));
      break;
  }
  switch (MayCallMM_Tabled_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      MayCallMM_TabledStrList_38 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      MayCallMM_TabledStrList_38 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[10]));
      break;
    case (MR_Integer) 1:
      MayCallMM_TabledStrList_38 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[11]));
      break;
  }
  switch (BoxPolicy_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      BoxPolicyStrList_39 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[12]));
      break;
    case (MR_Integer) 0:
      BoxPolicyStrList_39 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  switch (AffectsLiveness_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AffectsLivenessStrList_40 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[13]));
      break;
    case (MR_Integer) 2:
      AffectsLivenessStrList_40 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      AffectsLivenessStrList_40 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[14]));
      break;
  }
  AllocatesMemoryStrList_41 = ((&parse_tree__parse_tree_out_pragma_vector_common_11[0 + AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_11_0__vct_11_f_0;
  RegistersRootsStrList_42 = ((&parse_tree__parse_tree_out_pragma_vector_common_11[4 + RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_11_0__vct_11_f_0;
  switch (RefersToLldsStack_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      RefersToLldsStackList_43 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      RefersToLldsStackList_43 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[21]));
      break;
  }
  switch (CallStdOutRegs_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      CallStdOutRegsList_44 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[22]));
      break;
    case (MR_Integer) 0:
      CallStdOutRegsList_44 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  if ((MaybeMayDuplicate_23 == (MR_Word) ((MR_Unsigned) 0U)))
    MayDuplicateStrList_46 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MayDuplicate_45 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_23, (MR_Integer) 0))));

    switch (MayDuplicate_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayDuplicateStrList_46 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[23]));
        break;
      case (MR_Integer) 1:
        MayDuplicateStrList_46 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[24]));
        break;
    }
  }
  if ((MaybeMayExportBody_24 == (MR_Word) ((MR_Unsigned) 0U)))
    MayExportBodyStrList_48 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MayExportBody_47 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_24, (MR_Integer) 0))));

    switch (MayExportBody_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayExportBodyStrList_48 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[25]));
        break;
      case (MR_Integer) 1:
        MayExportBodyStrList_48 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[26]));
        break;
    }
  }
  if ((ForSpecificBackend_25 == (MR_Word) ((MR_Unsigned) 0U)))
    ForSpecificBackendList_49 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_125 = ((MR_Word) ((MR_hl_field(1, ForSpecificBackend_25, (MR_Integer) 0))));

    switch (Var_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ForSpecificBackendList_49 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[27]));
        break;
      case (MR_Integer) 1:
        ForSpecificBackendList_49 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[28]));
        break;
    }
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (TabledForIOStr_28));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (PurityStrList_29));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (ThreadSafeStr_27));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (MayCallMercuryStr_26));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
  }
  Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayExportBodyStrList_48, ForSpecificBackendList_49);
  Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayDuplicateStrList_46, Var_123);
  Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallStdOutRegsList_44, Var_122);
  Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RefersToLldsStackList_43, Var_121);
  Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RegistersRootsStrList_42, Var_120);
  Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllocatesMemoryStrList_41, Var_119);
  Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AffectsLivenessStrList_40, Var_118);
  Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BoxPolicyStrList_39, Var_117);
  Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayCallMM_TabledStrList_38, Var_116);
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MayModifyTrailStrList_37, Var_115);
  Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExceptionsStrList_36, Var_114);
  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrdinaryDespiteDetismStrList_35, Var_113);
  Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UserSharingStrList_34, Var_112);
  Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TerminatesStrList_30, Var_111);
  StringList_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_107, Var_110);
  return StringList_6;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Str_9;

  conv1_Str_9 = parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Str_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word Sharing_6,
  MR_Word MaybeTypes_7)
{
  MR_String String_8;

  switch (MR_tag((MR_Word) Sharing_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_8 = (MR_String) "no_sharing";
      break;
    case (MR_Integer) 1:
      {
        MR_Word SharingPairs_10 = ((MR_Word) ((MR_hl_field(1, Sharing_6, (MR_Integer) 0))));
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
          MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_7, (MR_Integer) 0))));
          MR_Word Var_19;
          MR_String Var_23;

          Types_11 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
          TypeVarSet_12 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[0]));
            MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
            MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeVarSet_12));
            MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Types_11);
          TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_13);
          Var_23 = mercury__string__f_43_43_2_f_0(TypeListStr_14, (MR_String) ")");
          MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", Var_23);
        }
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[1]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_25, 3) = ((MR_Box) (VarSet_5));
          MR_hl_field(0, Var_25, 4) = ((MR_Box) (TypeVarSet_12));
        }
        SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, SharingPairs_10);
        SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", SharingPairStrs_16);
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (SharingPairListStr_17));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[29])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_String) ", ["));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MaybeTypesStr_15));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "sharing("));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
  MR_Word FDInfo_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word Lang_9;
  MR_Word IsLocal_10;
  MR_Word LiteralOrInclude_11;
  MR_Word STATE_VARIABLE_U_16_15;
  MR_Word STATE_VARIABLE_U_17_16;
  MR_Word STATE_VARIABLE_U_19_18;
  MR_Word STATE_VARIABLE_U_21_20;
  MR_Word STATE_VARIABLE_U_25_23;
  MR_Word STATE_VARIABLE_U_26_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_16_15;
  MR_Box conv2_STATE_VARIABLE_U_17_16;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_19_18;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_25_23;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  Lang_9 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  IsLocal_10 = ((MR_Unsigned) ((MR_hl_field(0, FDInfo_3, (MR_Integer) 0))) & (MR_Integer) 1);
  LiteralOrInclude_11 = ((MR_Word) ((MR_hl_field(0, FDInfo_3, (MR_Integer) 1))));
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_5)), &conv1_STATE_VARIABLE_U_16_15);
  STATE_VARIABLE_U_16_15 = ((MR_Word) (conv1_STATE_VARIABLE_U_16_15));
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), Lang_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_16_15)), &conv2_STATE_VARIABLE_U_17_16);
  STATE_VARIABLE_U_17_16 = ((MR_Word) (conv2_STATE_VARIABLE_U_17_16));
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_16)), &conv4_STATE_VARIABLE_U_19_18);
  STATE_VARIABLE_U_19_18 = ((MR_Word) (conv4_STATE_VARIABLE_U_19_18));
  switch (IsLocal_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv6_STATE_VARIABLE_U_21_20;

        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_18)), &conv6_STATE_VARIABLE_U_21_20);
        STATE_VARIABLE_U_21_20 = ((MR_Word) (conv6_STATE_VARIABLE_U_21_20));
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv8_STATE_VARIABLE_U_21_20;

        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_18)), &conv8_STATE_VARIABLE_U_21_20);
        STATE_VARIABLE_U_21_20 = ((MR_Word) (conv8_STATE_VARIABLE_U_21_20));
      }
      break;
  }
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_20)), &conv10_STATE_VARIABLE_U_25_23);
  STATE_VARIABLE_U_25_23 = ((MR_Word) (conv10_STATE_VARIABLE_U_25_23));
  if (((MR_tag((MR_Word) LiteralOrInclude_11)) == (MR_Integer) 1))
  {
    MR_String FileName_27 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_11, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_U_14_29;
    MR_Word STATE_VARIABLE_U_15_30;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv12_STATE_VARIABLE_U_14_29;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_15_30;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_26_24;

    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_23)), &conv12_STATE_VARIABLE_U_14_29);
    STATE_VARIABLE_U_14_29 = ((MR_Word) (conv12_STATE_VARIABLE_U_14_29));
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 9))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (FileName_27)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_29)), &conv14_STATE_VARIABLE_U_15_30);
    STATE_VARIABLE_U_15_30 = ((MR_Word) (conv14_STATE_VARIABLE_U_15_30));
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_30)), &conv16_STATE_VARIABLE_U_26_24);
    STATE_VARIABLE_U_26_24 = ((MR_Word) (conv16_STATE_VARIABLE_U_26_24));
  }
  else
  {
    MR_Word TypeInfo_16_38;
    MR_String Code_26 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_11, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_U_11_33;
    MR_Word STATE_VARIABLE_U_12_34;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv18_STATE_VARIABLE_U_11_33;
    MR_Box conv19_STATE_VARIABLE_U_12_34;
    void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv21_STATE_VARIABLE_U_26_24;

    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_23)), &conv18_STATE_VARIABLE_U_11_33);
    STATE_VARIABLE_U_11_33 = ((MR_Word) (conv18_STATE_VARIABLE_U_11_33));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 3, &TypeInfo_16_38);
    mercury__string__foldl_4_p_0(TypeInfo_16_38, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[8]), Code_26, ((MR_Box) (STATE_VARIABLE_U_11_33)), &conv19_STATE_VARIABLE_U_12_34);
    STATE_VARIABLE_U_12_34 = ((MR_Word) (conv19_STATE_VARIABLE_U_12_34));
    func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_34)), &conv21_STATE_VARIABLE_U_26_24);
    STATE_VARIABLE_U_26_24 = ((MR_Word) (conv21_STATE_VARIABLE_U_26_24));
  }
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_24)), &conv23_State_6);
  State_6 = ((MR_Word) (conv23_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_decl_pred_pf_name_arity_to_string_3_f_0(
  MR_String PragmaName_5,
  MR_Word PredSpec_6,
  MR_String MaybeAfter_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Word PredOrFunc_13;
  MR_Word PredName_14;
  MR_Word Arity_15;
  MR_Word STATE_VARIABLE_U_18_17;
  MR_Word STATE_VARIABLE_U_19_18;
  MR_Word STATE_VARIABLE_U_21_20;
  MR_Word STATE_VARIABLE_U_22_21;
  MR_Word STATE_VARIABLE_U_23_22;
  MR_String Var_24;
  MR_Word STATE_VARIABLE_U_15_25;
  MR_Word STATE_VARIABLE_U_17_27;
  MR_Word STATE_VARIABLE_U_18_28;
  MR_Integer Arity_30;
  MR_Word STATE_VARIABLE_U_13_32;
  MR_Word STATE_VARIABLE_U_15_34;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_18_17;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_19_18;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_21_20;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_15_25;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv9_STATE_VARIABLE_U_17_27;
  MR_Box conv10_STATE_VARIABLE_U_13_32;
  void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv12_STATE_VARIABLE_U_15_34;
  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv14_STATE_VARIABLE_U_18_28;
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv16_STATE_VARIABLE_U_22_21;
  void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv18_STATE_VARIABLE_U_23_22;
  void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv20_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv1_STATE_VARIABLE_U_18_17);
  STATE_VARIABLE_U_18_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_18_17));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (PragmaName_5)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_17)), &conv3_STATE_VARIABLE_U_19_18);
  STATE_VARIABLE_U_19_18 = ((MR_Word) (conv3_STATE_VARIABLE_U_19_18));
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_18)), &conv5_STATE_VARIABLE_U_21_20);
  STATE_VARIABLE_U_21_20 = ((MR_Word) (conv5_STATE_VARIABLE_U_21_20));
  PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 0))) & (MR_Integer) 1);
  PredName_14 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 1))));
  Arity_15 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 2))));
  Var_24 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_13);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Var_24)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_20)), &conv7_STATE_VARIABLE_U_15_25);
  STATE_VARIABLE_U_15_25 = ((MR_Word) (conv7_STATE_VARIABLE_U_15_25));
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_25)), &conv9_STATE_VARIABLE_U_17_27);
  STATE_VARIABLE_U_17_27 = ((MR_Word) (conv9_STATE_VARIABLE_U_17_27));
  Arity_30 = (MR_Integer) (Arity_15);
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_14, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_27)), &conv10_STATE_VARIABLE_U_13_32);
  STATE_VARIABLE_U_13_32 = ((MR_Word) (conv10_STATE_VARIABLE_U_13_32));
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_32)), &conv12_STATE_VARIABLE_U_15_34);
  STATE_VARIABLE_U_15_34 = ((MR_Word) (conv12_STATE_VARIABLE_U_15_34));
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
  func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_30)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_34)), &conv14_STATE_VARIABLE_U_18_28);
  STATE_VARIABLE_U_18_28 = ((MR_Word) (conv14_STATE_VARIABLE_U_18_28));
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_28)), &conv16_STATE_VARIABLE_U_22_21);
  STATE_VARIABLE_U_22_21 = ((MR_Word) (conv16_STATE_VARIABLE_U_22_21));
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (MaybeAfter_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_21)), &conv18_STATE_VARIABLE_U_23_22);
  STATE_VARIABLE_U_23_22 = ((MR_Word) (conv18_STATE_VARIABLE_U_23_22));
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_22)), &conv20_State_10);
  State_10 = ((MR_Word) (conv20_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(
  MR_Word Stream_7,
  MR_String PragmaName_8,
  MR_Word PredSpec_9,
  MR_String MaybeAfter_10)
{
  MR_Word PredOrFunc_15;
  MR_Word PredName_16;
  MR_Word Arity_17;
  MR_String Var_26;
  MR_Integer Arity_32;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_18_19;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_19_20;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_21_22;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_15_27;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv9_STATE_VARIABLE_U_17_29;
  MR_Box conv10_STATE_VARIABLE_U_13_34;
  void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv12_STATE_VARIABLE_U_15_36;
  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv14_STATE_VARIABLE_U_18_30;
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv16_STATE_VARIABLE_U_22_23;
  void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv18_STATE_VARIABLE_U_23_24;
  void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv20_STATE_VARIABLE_IO_13;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18_19);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (PragmaName_8)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_19_20);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_21_22);
  PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 0))) & (MR_Integer) 1);
  PredName_16 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 1))));
  Arity_17 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 2))));
  Var_26 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_15);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Var_26)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_15_27);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_17_29);
  Arity_32 = (MR_Integer) (Arity_17);
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_16, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_13_34);
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_15_36);
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
  func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_32)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_18_30);
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22_23);
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (MaybeAfter_10)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_23_24);
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_13);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_generated_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word GenPragma_8)
{
  MR_Word Context_10;

  Context_10 = parse_tree__prog_item__get_gen_pragma_context_1_f_0(GenPragma_8);
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_10, Stream_7);
  switch (MR_tag((MR_Word) GenPragma_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word UnusedArgs_11 = (MR_Word) ((MR_Word) (GenPragma_8));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(Stream_7, UnusedArgs_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Exceptions_12 = (MR_Word) (MR_body((MR_Word) (GenPragma_8), (MR_Integer) 1));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(Stream_7, Exceptions_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Trailing_13 = (MR_Word) (MR_body((MR_Word) (GenPragma_8), (MR_Integer) 2));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_4_p_0(Stream_7, Trailing_13);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Tabling_14 = (MR_Word) (MR_body((MR_Word) (GenPragma_8), (MR_Integer) 3));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_4_p_0(Stream_7, Tabling_14);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_4_p_0(
  MR_Word Stream_5,
  MR_Word MMTabling_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, MMTabling_6, (MR_Integer) 0))));
  MR_Word MM_TablingStatus_9 = ((MR_Unsigned) ((MR_hl_field(0, MMTabling_6, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_14;
  MR_Integer ModeNum_15 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_16;
  MR_String SymNameStr_17;
  MR_String MMStr_18;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_44;
  MR_String Var_54;

  Arity_14 = (MR_Integer) (Var_21);
  PorFStr_16 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
  SymNameStr_17 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_13);
  switch (MM_TablingStatus_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      MMStr_18 = (MR_String) "mm_tabled_conditional";
      break;
    case (MR_Integer) 0:
      MMStr_18 = (MR_String) "mm_tabled_may_call";
      break;
    case (MR_Integer) 1:
      MMStr_18 = (MR_String) "mm_tabled_will_not_call";
      break;
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma mm_tabling_info(");
  mercury__io__write_string_4_p_0(Stream_5, PorFStr_16);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, SymNameStr_17);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), Arity_14, &Var_44);
  mercury__io__write_string_4_p_0(Stream_5, Var_44);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), ModeNum_15, &Var_54);
  mercury__io__write_string_4_p_0(Stream_5, Var_54);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, MMStr_18);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_4_p_0(
  MR_Word Stream_5,
  MR_Word Trailing_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, Trailing_6, (MR_Integer) 0))));
  MR_Word TrailingStatus_9 = ((MR_Unsigned) ((MR_hl_field(0, Trailing_6, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_14;
  MR_Integer ModeNum_15 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_16;
  MR_String SymNameStr_17;
  MR_String TrailStr_18;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_44;
  MR_String Var_54;

  Arity_14 = (MR_Integer) (Var_21);
  PorFStr_16 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
  SymNameStr_17 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_13);
  switch (TrailingStatus_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      TrailStr_18 = (MR_String) "conditional";
      break;
    case (MR_Integer) 0:
      TrailStr_18 = (MR_String) "may_modify_trail";
      break;
    case (MR_Integer) 1:
      TrailStr_18 = (MR_String) "will_not_modify_trail";
      break;
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma trailing_info(");
  mercury__io__write_string_4_p_0(Stream_5, PorFStr_16);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, SymNameStr_17);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), Arity_14, &Var_44);
  mercury__io__write_string_4_p_0(Stream_5, Var_44);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), ModeNum_15, &Var_54);
  mercury__io__write_string_4_p_0(Stream_5, Var_54);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, TrailStr_18);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(
  MR_Word Stream_5,
  MR_Word Exceptions_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, (MR_Integer) 0))));
  MR_Word ThrowStatus_9 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, (MR_Integer) 1))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_14;
  MR_Integer ModeNum_15 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_16;
  MR_String SymNameStr_17;
  MR_String ThrowStr_18;
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_45;
  MR_String Var_55;

  Arity_14 = (MR_Integer) (Var_22);
  PorFStr_16 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
  SymNameStr_17 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_13);
  switch (MR_tag((MR_Word) ThrowStatus_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ThrowStatus_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ThrowStr_18 = (MR_String) "will_not_throw";
          break;
        case (MR_Integer) 1:
          ThrowStr_18 = (MR_String) "conditional";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExceptionType_19 = ((MR_Unsigned) ((MR_hl_field(1, ThrowStatus_9, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (ExceptionType_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ThrowStr_18 = (MR_String) "may_throw(type_exception)";
            break;
          case (MR_Integer) 0:
            ThrowStr_18 = (MR_String) "may_throw(user_exception)";
            break;
        }
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma exceptions(");
  mercury__io__write_string_4_p_0(Stream_5, PorFStr_16);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, SymNameStr_17);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), Arity_14, &Var_45);
  mercury__io__write_string_4_p_0(Stream_5, Var_45);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), ModeNum_15, &Var_55);
  mercury__io__write_string_4_p_0(Stream_5, Var_55);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, ThrowStr_18);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(
  MR_Word Stream_5,
  MR_Word UnusedArgsInfo_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, (MR_Integer) 0))));
  MR_Word UnusedArgs_9 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, (MR_Integer) 1))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_14;
  MR_Integer ModeNum_15 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_16;
  MR_String SymNameStr_17;
  MR_String UnusedArgsStr_18;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_44;
  MR_String Var_54;
  MR_Word State0_65;
  MR_Word State_66;

  Arity_14 = (MR_Integer) (Var_21);
  PorFStr_16 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
  SymNameStr_17 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_13);
  State0_65 = mercury__string__builder__init_0_f_0();
  if ((UnusedArgs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    State_66 = State0_65;
  else
  {
    MR_Integer Head_72 = ((MR_Integer) ((MR_hl_field(1, UnusedArgs_9, (MR_Integer) 0))));
    MR_Word Tail_73 = ((MR_Word) ((MR_hl_field(1, UnusedArgs_9, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_U_15_77;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
    MR_Box conv1_STATE_VARIABLE_U_15_77;
    MR_Box conv2_State_66;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Head_72)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_65)), &conv1_STATE_VARIABLE_U_15_77);
    STATE_VARIABLE_U_15_77 = ((MR_Word) (conv1_STATE_VARIABLE_U_15_77));
    parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), Tail_73, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_77)), &conv2_State_66);
    State_66 = ((MR_Word) (conv2_State_66));
  }
  UnusedArgsStr_18 = mercury__string__builder__to_string_1_f_0(State_66);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma unused_args(");
  mercury__io__write_string_4_p_0(Stream_5, PorFStr_16);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, SymNameStr_17);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), Arity_14, &Var_44);
  mercury__io__write_string_4_p_0(Stream_5, Var_44);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), ModeNum_15, &Var_54);
  mercury__io__write_string_4_p_0(Stream_5, Var_54);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", [");
  mercury__io__write_string_4_p_0(Stream_5, UnusedArgsStr_18);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
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
      MR_Integer Head_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_16_16;
      MR_Box STATE_VARIABLE_U_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Box next_value_of_STATE_VARIABLE_U_0_3;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_16_16);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 10))));
      func_1(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Head_9)), HeadVar__2_2, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_17_17);
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
parse_tree__parse_tree_out_pragma__mercury_format_item_impl_marker_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Box Stream_5,
  MR_Word ImplMarker_6,
  MR_Box STATE_VARIABLE_IO_0_13,
  MR_Box * STATE_VARIABLE_IO_14)
{
  MR_Word MarkerKind_8 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker_6, (MR_Integer) 0))) & (MR_Integer) 7);
  MR_Word PredSpec_9 = ((MR_Word) ((MR_hl_field(0, ImplMarker_6, (MR_Integer) 1))));
  MR_String MarkerKindStr_12 = ((&parse_tree__parse_tree_out_pragma_vector_common_9[0 + MarkerKind_8]))->parse_tree__parse_tree_out_pragma__vector_common_type_9_0__vct_9_f_0;
  MR_Word PFU_17;
  MR_Word PredName_18;
  MR_Word Arity_19;
  MR_Box STATE_VARIABLE_U_18_21;
  MR_Box STATE_VARIABLE_U_19_22;
  MR_Box STATE_VARIABLE_U_21_24;
  MR_Box STATE_VARIABLE_U_22_25;
  MR_Box STATE_VARIABLE_U_23_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ":- pragma ")), Stream_5, STATE_VARIABLE_IO_0_13, &STATE_VARIABLE_U_18_21);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (MarkerKindStr_12)), Stream_5, STATE_VARIABLE_U_18_21, &STATE_VARIABLE_U_19_22);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), Stream_5, STATE_VARIABLE_U_19_22, &STATE_VARIABLE_U_21_24);
  PFU_17 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 0))) & (MR_Integer) 3);
  PredName_18 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 1))));
  Arity_19 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 2))));
  switch (PFU_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_30;
        MR_Box STATE_VARIABLE_U_15_31;
        MR_Box STATE_VARIABLE_U_17_33;
        MR_Box STATE_VARIABLE_U_18_34;
        MR_Integer Arity_36;
        MR_Box STATE_VARIABLE_U_13_38;
        MR_Box STATE_VARIABLE_U_15_40;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_30 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Var_30)), Stream_5, STATE_VARIABLE_U_21_24, &STATE_VARIABLE_U_15_31);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), Stream_5, STATE_VARIABLE_U_15_31, &STATE_VARIABLE_U_17_33);
        Arity_36 = (MR_Integer) (Arity_19);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_16, (MR_Integer) 0, PredName_18, Stream_5, STATE_VARIABLE_U_17_33, &STATE_VARIABLE_U_13_38);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "/")), Stream_5, STATE_VARIABLE_U_13_38, &STATE_VARIABLE_U_15_40);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 10))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Arity_36)), Stream_5, STATE_VARIABLE_U_15_40, &STATE_VARIABLE_U_18_34);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), Stream_5, STATE_VARIABLE_U_18_34, &STATE_VARIABLE_U_22_25);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_41;
        MR_Box STATE_VARIABLE_U_15_42;
        MR_Box STATE_VARIABLE_U_17_44;
        MR_Box STATE_VARIABLE_U_18_45;
        MR_Integer Arity_47;
        MR_Box STATE_VARIABLE_U_13_49;
        MR_Box STATE_VARIABLE_U_15_51;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_41 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Var_41)), Stream_5, STATE_VARIABLE_U_21_24, &STATE_VARIABLE_U_15_42);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_9(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), Stream_5, STATE_VARIABLE_U_15_42, &STATE_VARIABLE_U_17_44);
        Arity_47 = (MR_Integer) (Arity_19);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_16, (MR_Integer) 0, PredName_18, Stream_5, STATE_VARIABLE_U_17_44, &STATE_VARIABLE_U_13_49);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "/")), Stream_5, STATE_VARIABLE_U_13_49, &STATE_VARIABLE_U_15_51);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 10))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Arity_47)), Stream_5, STATE_VARIABLE_U_15_51, &STATE_VARIABLE_U_18_45);
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_12(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), Stream_5, STATE_VARIABLE_U_18_45, &STATE_VARIABLE_U_22_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_52 = (MR_Integer) (Arity_19);
        MR_Box STATE_VARIABLE_U_13_54;
        MR_Box STATE_VARIABLE_U_15_56;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_16, (MR_Integer) 0, PredName_18, Stream_5, STATE_VARIABLE_U_21_24, &STATE_VARIABLE_U_13_54);
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_13(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "/")), Stream_5, STATE_VARIABLE_U_13_54, &STATE_VARIABLE_U_15_56);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 10))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Arity_52)), Stream_5, STATE_VARIABLE_U_15_56, &STATE_VARIABLE_U_22_25);
      }
      break;
  }
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_15(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "")), Stream_5, STATE_VARIABLE_U_22_25, &STATE_VARIABLE_U_23_26);
  func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_16(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ").\n")), Stream_5, STATE_VARIABLE_U_23_26, STATE_VARIABLE_IO_14);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ImplPragma_8)
{
  MR_Word Context_10;
  MR_Word Lang_11;

  Context_10 = parse_tree__prog_item__get_impl_pragma_context_1_f_0(ImplPragma_8);
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_10, Stream_7);
  Lang_11 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  switch (MR_tag((MR_Word) ImplPragma_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_12 = (MR_Word) ((MR_Word) (ImplPragma_8));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0(Stream_7, FDInfo_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FCInfo_13 = (MR_Word) (MR_body((MR_Word) (ImplPragma_8), (MR_Integer) 1));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0(Stream_7, FCInfo_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo_14 = (MR_Word) (MR_body((MR_Word) (ImplPragma_8), (MR_Integer) 2));
        MR_Box conv54_STATE_VARIABLE_IO_21;

        parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), Lang_11, FPEInfo_14, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv54_STATE_VARIABLE_IO_21);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExternalInfo_15 = ((MR_Word) ((MR_hl_field(3, ImplPragma_8, (MR_Integer) 1))));
            MR_Word PFNameArity_27 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_15, (MR_Integer) 0))));
            MR_Word MaybeBackend_28 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_15, (MR_Integer) 1))));
            MR_Word PorF_31 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_27, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredName_32 = ((MR_Word) ((MR_hl_field(0, PFNameArity_27, (MR_Integer) 1))));
            MR_Integer Arity_33;
            MR_String PorFStr_34;
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, PFNameArity_27, (MR_Integer) 2))));
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv1_STATE_VARIABLE_U_21_38;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv3_STATE_VARIABLE_U_22_39;
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv5_STATE_VARIABLE_U_24_41;
            MR_Box conv6_STATE_VARIABLE_U_25_42;
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv8_STATE_VARIABLE_U_27_44;
            void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv10_STATE_VARIABLE_U_28_45;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv18_STATE_VARIABLE_IO_21;

            Arity_33 = (MR_Integer) (Var_36);
            PorFStr_34 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PorF_31);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- pragma external_")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_21_38);
            func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (PorFStr_34)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_22_39);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_24_41);
            parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), PredName_32, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_25_42);
            func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_27_44);
            func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
            func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_33)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_28_45);
            if (!((MaybeBackend_28 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word Backend_35 = ((MR_Word) ((MR_hl_field(1, MaybeBackend_28, (MR_Integer) 0))));
              MR_String Var_48;
              void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
              MR_Box conv12_STATE_VARIABLE_U_30_47;
              void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv14_STATE_VARIABLE_U_32_49;
              void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv16_STATE_VARIABLE_U_34_51;

              func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ", [")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_30_47);
              switch (Backend_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_48 = (MR_String) "high_level_backend";
                  break;
                case (MR_Integer) 1:
                  Var_48 = (MR_String) "low_level_backend";
                  break;
              }
              func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
              func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Var_48)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_32_49);
              func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
              func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_34_51);
            }
            func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FactTableInfo_16 = ((MR_Word) ((MR_hl_field(3, ImplPragma_8, (MR_Integer) 1))));
            MR_Word PredSpec_53 = ((MR_Word) ((MR_hl_field(0, FactTableInfo_16, (MR_Integer) 0))));
            MR_String FileName_54 = ((MR_String) ((MR_hl_field(0, FactTableInfo_16, (MR_Integer) 1))));
            MR_Word PFU_57;
            MR_Word PredName_58;
            MR_Word UserArity_59;
            void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            MR_Box conv20_STATE_VARIABLE_U_18_61;
            void MR_CALL (* func_48)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv49_STATE_VARIABLE_U_21_64;
            void MR_CALL (* func_50)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv51_STATE_VARIABLE_U_22_65;
            void MR_CALL (* func_52)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv53_STATE_VARIABLE_IO_21;

            func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- pragma fact_table(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_18_61);
            PFU_57 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_53, (MR_Integer) 0))) & (MR_Integer) 3);
            PredName_58 = ((MR_Word) ((MR_hl_field(0, PredSpec_53, (MR_Integer) 1))));
            UserArity_59 = ((MR_Word) ((MR_hl_field(0, PredSpec_53, (MR_Integer) 2))));
            switch (PFU_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String Var_69;
                  MR_Integer Arity_75;
                  void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv22_STATE_VARIABLE_U_15_70;
                  void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv24_STATE_VARIABLE_U_17_72;
                  MR_Box conv25_STATE_VARIABLE_U_13_77;
                  void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv27_STATE_VARIABLE_U_15_79;
                  void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv29_STATE_VARIABLE_U_18_73;
                  void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv31_STATE_VARIABLE_U_19_62;

                  Var_69 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
                  func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_21(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Var_69)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_15_70);
                  func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_23(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_17_72);
                  Arity_75 = (MR_Integer) (UserArity_59);
                  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_58, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_13_77);
                  func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_15_79);
                  func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
                  func_28(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_75)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_18_73);
                  func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_30(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_U_19_62);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String Var_80;
                  MR_Integer Arity_86;
                  void MR_CALL (* func_32)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv33_STATE_VARIABLE_U_15_81;
                  void MR_CALL (* func_34)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv35_STATE_VARIABLE_U_17_83;
                  MR_Box conv36_STATE_VARIABLE_U_13_88;
                  void MR_CALL (* func_37)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv38_STATE_VARIABLE_U_15_90;
                  void MR_CALL (* func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv40_STATE_VARIABLE_U_18_84;
                  void MR_CALL (* func_41)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv42_STATE_VARIABLE_U_19_62;

                  Var_80 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
                  func_32 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_32(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Var_80)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_U_15_81);
                  func_34 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_34(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_U_17_83);
                  Arity_86 = (MR_Integer) (UserArity_59);
                  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_58, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_U_13_88);
                  func_37 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_37(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_U_15_90);
                  func_39 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
                  func_39(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_86)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_U_18_84);
                  func_41 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_41(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv42_STATE_VARIABLE_U_19_62);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer Arity_91 = (MR_Integer) (UserArity_59);
                  MR_Box conv43_STATE_VARIABLE_U_13_93;
                  void MR_CALL (* func_44)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv45_STATE_VARIABLE_U_15_95;
                  void MR_CALL (* func_46)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  MR_Box conv47_STATE_VARIABLE_U_19_62;

                  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_58, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv43_STATE_VARIABLE_U_13_93);
                  func_44 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
                  func_44(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv45_STATE_VARIABLE_U_15_95);
                  func_46 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
                  func_46(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_91)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv47_STATE_VARIABLE_U_19_62);
                }
                break;
            }
            func_48 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_48(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv49_STATE_VARIABLE_U_21_64);
            func_50 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 9))));
            func_50(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (FileName_54)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv51_STATE_VARIABLE_U_22_65);
            func_52 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
            func_52(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv53_STATE_VARIABLE_IO_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TabledInfo_17 = ((MR_Word) ((MR_hl_field(3, ImplPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(Stream_7, TabledInfo_17);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RequireTailrecPragma_18 = ((MR_Word) ((MR_hl_field(3, ImplPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(Stream_7, Lang_11, RequireTailrecPragma_18);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word RFSInfo_19 = ((MR_Word) ((MR_hl_field(3, ImplPragma_8, (MR_Integer) 1))));
            MR_Box conv55_STATE_VARIABLE_IO_21;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), RFSInfo_19, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv55_STATE_VARIABLE_IO_21);
          }
          break;
      }
      break;
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
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word RFSInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word Features0_8 = ((MR_Word) ((MR_hl_field(0, RFSInfo_5, (MR_Integer) 0))));
  MR_Word Features_11;
  MR_Box STATE_VARIABLE_U_15_15;
  MR_Word Var_16;
  MR_Box STATE_VARIABLE_U_18_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Features_11 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), Features0_8);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), S_6, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_require_feature_set_4_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_20));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 26))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)), ((MR_Box) (Var_16)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Features_11)), S_6, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_18_18);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) ").\n")), S_6, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_13);
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_misc__maybe_arg_tabling_method_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(
  MR_Word Stream_5,
  MR_Word Tabled_6)
{
  MR_Word TabledMethod_8 = ((MR_Word) ((MR_hl_field(0, Tabled_6, (MR_Integer) 0))));
  MR_Word PredOrProcSpec_9 = ((MR_Word) ((MR_hl_field(0, Tabled_6, (MR_Integer) 1))));
  MR_Word MaybeAttributes_10 = ((MR_Word) ((MR_hl_field(0, Tabled_6, (MR_Integer) 2))));
  MR_String PragmaName_13;
  MR_String AfterStr_29;
  MR_String PredOrProcSpecStr_67;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_17_70;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_18_71;
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv6_STATE_VARIABLE_U_20_73;
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv8_STATE_VARIABLE_U_21_74;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_22_75;
  void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv12_STATE_VARIABLE_IO_33;

  PragmaName_13 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_8);
  if ((MaybeAttributes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    AfterStr_29 = (MR_String) "";
  else
  {
    MR_Word Attributes_14 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_10, (MR_Integer) 0))));
    MR_Word Strictness_15 = ((MR_Word) ((MR_hl_field(0, Attributes_14, (MR_Integer) 0))));
    MR_Word MaybeSizeLimit_16 = ((MR_Word) ((MR_hl_field(0, Attributes_14, (MR_Integer) 1))));
    MR_Word Stats_17 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_14, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word AllowReset_18 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_14, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word WarnForIgnore_19 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_14, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Strs_35_35;
    MR_Word STATE_VARIABLE_Strs_50_50;
    MR_Word STATE_VARIABLE_Strs_51_51;
    MR_Word STATE_VARIABLE_Strs_53_53;

    switch (MR_tag((MR_Word) Strictness_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Strictness_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Strs_35_35 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Strs_35_35 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_4[30]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_21 = ((MR_Word) ((MR_hl_field(1, Strictness_15, (MR_Integer) 0))));
          MR_Word HiddenArgMethod_22 = ((MR_Unsigned) ((MR_hl_field(1, Strictness_15, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgStrs_23;
          MR_String ArgsStr_24;
          MR_String HiddenArgStr_25;
          MR_String SpecifiedStr_26;
          MR_String Var_40;
          MR_String Var_41;
          MR_String Var_43;

          ArgStrs_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[10]), Args_21);
          ArgsStr_24 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgStrs_23);
          switch (HiddenArgMethod_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              HiddenArgStr_25 = (MR_String) "hidden_arg_addr";
              break;
            case (MR_Integer) 0:
              HiddenArgStr_25 = (MR_String) "hidden_arg_value";
              break;
          }
          Var_43 = mercury__string__f_43_43_2_f_0(HiddenArgStr_25, (MR_String) ")");
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "], ", Var_43);
          Var_40 = mercury__string__f_43_43_2_f_0(ArgsStr_24, Var_41);
          SpecifiedStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", Var_40);
          {
            STATE_VARIABLE_Strs_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Strs_35_35, 0) = ((MR_Box) (SpecifiedStr_26));
            MR_hl_field(1, STATE_VARIABLE_Strs_35_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    if ((MaybeSizeLimit_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Strs_50_50 = STATE_VARIABLE_Strs_35_35;
    else
    {
      MR_Integer SizeLimit_27 = ((MR_Integer) ((MR_hl_field(1, MaybeSizeLimit_16, (MR_Integer) 0))));
      MR_String LimitStr_28;
      MR_String Var_47;
      MR_String Var_48;

      Var_48 = mercury__string__int_to_string_1_f_0(SizeLimit_27);
      Var_47 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) ")");
      LimitStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", Var_47);
      {
        STATE_VARIABLE_Strs_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Strs_50_50, 0) = ((MR_Box) (LimitStr_28));
        MR_hl_field(1, STATE_VARIABLE_Strs_50_50, 1) = ((MR_Box) (STATE_VARIABLE_Strs_35_35));
      }
    }
    switch (Stats_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_Strs_51_51 = STATE_VARIABLE_Strs_50_50;
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Strs_51_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Strs_51_51, 0) = ((MR_Box) ((MR_String) "statistics"));
          MR_hl_field(1, STATE_VARIABLE_Strs_51_51, 1) = ((MR_Box) (STATE_VARIABLE_Strs_50_50));
        }
        break;
    }
    switch (AllowReset_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Strs_53_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Strs_53_53, 0) = ((MR_Box) ((MR_String) "allow_reset"));
          MR_hl_field(1, STATE_VARIABLE_Strs_53_53, 1) = ((MR_Box) (STATE_VARIABLE_Strs_51_51));
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Strs_53_53 = STATE_VARIABLE_Strs_51_51;
        break;
    }
    switch (WarnForIgnore_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((STATE_VARIABLE_Strs_53_53 == (MR_Word) ((MR_Unsigned) 0U)))
          AfterStr_29 = (MR_String) "";
        else
        {
          MR_String Var_58;
          MR_String Var_59;

          Var_59 = mercury__string__join_list_2_f_0((MR_String) ", ", STATE_VARIABLE_Strs_53_53);
          Var_58 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) "]");
          AfterStr_29 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_58);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Strs_55_77;
          MR_String Var_79;
          MR_String Var_80;

          {
            STATE_VARIABLE_Strs_55_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Strs_55_77, 0) = ((MR_Box) ((MR_String) "disable_warning_if_ignored"));
            MR_hl_field(1, STATE_VARIABLE_Strs_55_77, 1) = ((MR_Box) (STATE_VARIABLE_Strs_53_53));
          }
          Var_80 = mercury__string__join_list_2_f_0((MR_String) ", ", STATE_VARIABLE_Strs_55_77);
          Var_79 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) "]");
          AfterStr_29 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_79);
        }
        break;
    }
  }
  PredOrProcSpecStr_67 = parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0((MR_Integer) 0, PredOrProcSpec_9);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_17_70);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (PragmaName_13)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_18_71);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_20_73);
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (PredOrProcSpecStr_67)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_21_74);
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (AfterStr_29)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_22_75);
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_33);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word RequireTR_8)
{
  MR_Word PredOrProcSpec_10 = ((MR_Word) ((MR_hl_field(0, RequireTR_8, (MR_Integer) 0))));
  MR_Word Warn_11 = ((MR_Word) ((MR_hl_field(0, RequireTR_8, (MR_Integer) 1))));
  MR_String ProcSpecStr_14;

  ProcSpecStr_14 = parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(Lang_7, PredOrProcSpec_10);
  if (((MR_tag((MR_Word) Warn_11)) == (MR_Integer) 1))
  {
    MR_Word WarnOrError_16 = ((((MR_Unsigned) ((MR_hl_field(1, Warn_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Type_17 = ((MR_Unsigned) ((MR_hl_field(1, Warn_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String WarnOrErrorStr_19;
    MR_String TypeStr_20;

    libs__compiler_util__warning_or_error_string_2_p_0(WarnOrError_16, &WarnOrErrorStr_19);
    parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(Type_17, &TypeStr_20);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma warn_tail_recursion(");
    mercury__io__write_string_4_p_0(Stream_6, ProcSpecStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", [");
    mercury__io__write_string_4_p_0(Stream_6, WarnOrErrorStr_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, TypeStr_20);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]).\n");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma warn_tail_recursion(");
    mercury__io__write_string_4_p_0(Stream_6, ProcSpecStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", [none]).\n");
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word PredOrProcSpec_5)
{
  MR_String PredOrProcSpecStr_6;
  MR_Word PFUMM_7 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_5, (MR_Integer) 0))));
  MR_Word PredName_8 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec_5, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) PFUMM_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_30 = ((MR_Word) ((MR_hl_field(0, PFUMM_7, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_30)) == (MR_Integer) 1))
        {
          MR_Word Arity_20 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_30, (MR_Integer) 0))));
          MR_Word State0_52;
          MR_Word State_53;
          MR_String Var_56;
          MR_Word STATE_VARIABLE_U_15_57;
          MR_Word STATE_VARIABLE_U_17_59;
          MR_Word STATE_VARIABLE_U_18_60;
          MR_Integer Arity_62;
          MR_Word STATE_VARIABLE_U_13_64;
          MR_Word STATE_VARIABLE_U_15_66;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_15_57;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_U_17_59;
          MR_Box conv16_STATE_VARIABLE_U_13_64;
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv18_STATE_VARIABLE_U_15_66;
          void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv20_STATE_VARIABLE_U_18_60;
          void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv22_State_53;

          State0_52 = mercury__string__builder__init_0_f_0();
          Var_56 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Var_56)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_52)), &conv13_STATE_VARIABLE_U_15_57);
          STATE_VARIABLE_U_15_57 = ((MR_Word) (conv13_STATE_VARIABLE_U_15_57));
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_57)), &conv15_STATE_VARIABLE_U_17_59);
          STATE_VARIABLE_U_17_59 = ((MR_Word) (conv15_STATE_VARIABLE_U_17_59));
          Arity_62 = (MR_Integer) (Arity_20);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_59)), &conv16_STATE_VARIABLE_U_13_64);
          STATE_VARIABLE_U_13_64 = ((MR_Word) (conv16_STATE_VARIABLE_U_13_64));
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_64)), &conv18_STATE_VARIABLE_U_15_66);
          STATE_VARIABLE_U_15_66 = ((MR_Word) (conv18_STATE_VARIABLE_U_15_66));
          func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
          func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_62)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_66)), &conv20_STATE_VARIABLE_U_18_60);
          STATE_VARIABLE_U_18_60 = ((MR_Word) (conv20_STATE_VARIABLE_U_18_60));
          func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_21(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_60)), &conv22_State_53);
          State_53 = ((MR_Word) (conv22_State_53));
          PredOrProcSpecStr_6 = mercury__string__builder__to_string_1_f_0(State_53);
        }
        else
        {
          MR_Word Modes_21 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_30, (MR_Integer) 0))));
          MR_Word InstVarSet_23;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
          PredOrProcSpecStr_6 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_4, InstVarSet_23, PredName_8, Modes_21, (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_10 = ((MR_Word) ((MR_hl_field(1, PFUMM_7, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_10)) == (MR_Integer) 1))
        {
          MR_Word Arity_12 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_10, (MR_Integer) 0))));
          MR_Word State0_37;
          MR_Word State_38;
          MR_String Var_41;
          MR_Word STATE_VARIABLE_U_15_42;
          MR_Word STATE_VARIABLE_U_17_44;
          MR_Word STATE_VARIABLE_U_18_45;
          MR_Integer Arity_47;
          MR_Word STATE_VARIABLE_U_13_49;
          MR_Word STATE_VARIABLE_U_15_51;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_STATE_VARIABLE_U_15_42;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_17_44;
          MR_Box conv4_STATE_VARIABLE_U_13_49;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv6_STATE_VARIABLE_U_15_51;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_18_45;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_State_38;

          State0_37 = mercury__string__builder__init_0_f_0();
          Var_41 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Var_41)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_37)), &conv1_STATE_VARIABLE_U_15_42);
          STATE_VARIABLE_U_15_42 = ((MR_Word) (conv1_STATE_VARIABLE_U_15_42));
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_42)), &conv3_STATE_VARIABLE_U_17_44);
          STATE_VARIABLE_U_17_44 = ((MR_Word) (conv3_STATE_VARIABLE_U_17_44));
          Arity_47 = (MR_Integer) (Arity_12);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_44)), &conv4_STATE_VARIABLE_U_13_49);
          STATE_VARIABLE_U_13_49 = ((MR_Word) (conv4_STATE_VARIABLE_U_13_49));
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_49)), &conv6_STATE_VARIABLE_U_15_51);
          STATE_VARIABLE_U_15_51 = ((MR_Word) (conv6_STATE_VARIABLE_U_15_51));
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_51)), &conv8_STATE_VARIABLE_U_18_45);
          STATE_VARIABLE_U_18_45 = ((MR_Word) (conv8_STATE_VARIABLE_U_18_45));
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_45)), &conv10_State_38);
          State_38 = ((MR_Word) (conv10_State_38));
          PredOrProcSpecStr_6 = mercury__string__builder__to_string_1_f_0(State_38);
        }
        else
        {
          MR_Word Modes_13 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_10, (MR_Integer) 0))));
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
        MR_Word PredArity_9 = ((MR_Word) ((MR_hl_field(2, PFUMM_7, (MR_Integer) 0))));
        MR_Word State0_67;
        MR_Word State_68;
        MR_Integer Arity_71;
        MR_Word STATE_VARIABLE_U_13_73;
        MR_Word STATE_VARIABLE_U_15_75;
        MR_Box conv23_STATE_VARIABLE_U_13_73;
        void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv25_STATE_VARIABLE_U_15_75;
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv27_State_68;

        State0_67 = mercury__string__builder__init_0_f_0();
        Arity_71 = (MR_Integer) (PredArity_9);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_67)), &conv23_STATE_VARIABLE_U_13_73);
        STATE_VARIABLE_U_13_73 = ((MR_Word) (conv23_STATE_VARIABLE_U_13_73));
        func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_73)), &conv25_STATE_VARIABLE_U_15_75);
        STATE_VARIABLE_U_15_75 = ((MR_Word) (conv25_STATE_VARIABLE_U_15_75));
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
        func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_71)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_75)), &conv27_State_68);
        State_68 = ((MR_Word) (conv27_State_68));
        PredOrProcSpecStr_6 = mercury__string__builder__to_string_1_f_0(State_68);
      }
      break;
  }
  return PredOrProcSpecStr_6;
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_46,
  MR_Word Lang_6,
  MR_Word FPE_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24)
{
  MR_Word ForeignLang_11 = ((MR_Unsigned) ((MR_hl_field(0, FPE_7, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word PredNameModesPF_12 = ((MR_Word) ((MR_hl_field(0, FPE_7, (MR_Integer) 2))));
  MR_String ExportName_13 = ((MR_String) ((MR_hl_field(0, FPE_7, (MR_Integer) 3))));
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, FPE_7, (MR_Integer) 4))));
  MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_12, (MR_Integer) 1))));
  MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_12, (MR_Integer) 2))));
  MR_Word InstVarSet_20;
  MR_Box STATE_VARIABLE_U_26_26;
  MR_Box STATE_VARIABLE_U_27_27;
  MR_Box STATE_VARIABLE_U_29_29;
  MR_Box STATE_VARIABLE_U_30_30;
  MR_Box STATE_VARIABLE_U_36_36;
  MR_Box STATE_VARIABLE_U_43_43;
  MR_Box STATE_VARIABLE_U_44_44;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), S_8, STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_26_26);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_pt_output_46, ForeignLang_11, S_8, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_46, SymName_18, S_8, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_30_30);
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_14, &InstVarSet_20);
  switch (PredOrFunc_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_21;
        MR_Word RetMode_22;
        MR_Box STATE_VARIABLE_U_32_32;
        MR_Box STATE_VARIABLE_U_33_33;
        MR_Box STATE_VARIABLE_U_35_35;
        MR_Box conv2_RetMode_22;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_19, &ArgModes_21, &conv2_RetMode_22);
        RetMode_22 = ((MR_Word) (conv2_RetMode_22));
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
        parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_46, Lang_6, InstVarSet_20, ArgModes_21, S_8, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) ") = ")), S_8, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_46, Lang_6, InstVarSet_20, RetMode_22, S_8, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box STATE_VARIABLE_U_38_38;
        MR_Box STATE_VARIABLE_U_39_39;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_5(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_38_38);
        parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_46, Lang_6, InstVarSet_20, Modes_19, S_8, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_36_36);
      }
      break;
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
  func_7(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_43_43);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
  func_8(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) (ExportName_13)), S_8, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_44_44);
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_46, (MR_Integer) 0)), (MR_Integer) 6))));
  func_9(((MR_Box) (TypeClassInfo_for_pt_output_46)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_44_44, STATE_VARIABLE_U_24);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0(
  MR_Word Stream_5,
  MR_Word FCInfo_6)
{
  MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_6, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_9 = ((MR_Word) ((MR_hl_field(0, FCInfo_6, (MR_Integer) 1))));
  MR_String LangStr_12;
  MR_String LorIStr_13;
  MR_Word State0_30;
  MR_Word State_31;

  LangStr_12 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_8);
  State0_30 = mercury__string__builder__init_0_f_0();
  if (((MR_tag((MR_Word) LiteralOrInclude_9)) == (MR_Integer) 1))
  {
    MR_String FileName_35 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_9, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_U_14_37;
    MR_Word STATE_VARIABLE_U_15_38;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_STATE_VARIABLE_U_14_37;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_15_38;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_State_31;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_30)), &conv1_STATE_VARIABLE_U_14_37);
    STATE_VARIABLE_U_14_37 = ((MR_Word) (conv1_STATE_VARIABLE_U_14_37));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 9))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (FileName_35)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_37)), &conv3_STATE_VARIABLE_U_15_38);
    STATE_VARIABLE_U_15_38 = ((MR_Word) (conv3_STATE_VARIABLE_U_15_38));
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_38)), &conv5_State_31);
    State_31 = ((MR_Word) (conv5_State_31));
  }
  else
  {
    MR_Word TypeInfo_16_46;
    MR_String Code_34 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_9, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_U_11_41;
    MR_Word STATE_VARIABLE_U_12_42;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv7_STATE_VARIABLE_U_11_41;
    MR_Box conv8_STATE_VARIABLE_U_12_42;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_State_31;

    func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_30)), &conv7_STATE_VARIABLE_U_11_41);
    STATE_VARIABLE_U_11_41 = ((MR_Word) (conv7_STATE_VARIABLE_U_11_41));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 3, &TypeInfo_16_46);
    mercury__string__foldl_4_p_0(TypeInfo_16_46, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[6]), Code_34, ((MR_Box) (STATE_VARIABLE_U_11_41)), &conv8_STATE_VARIABLE_U_12_42);
    STATE_VARIABLE_U_12_42 = ((MR_Word) (conv8_STATE_VARIABLE_U_12_42));
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_42)), &conv10_State_31);
    State_31 = ((MR_Word) (conv10_State_31));
  }
  LorIStr_13 = mercury__string__builder__to_string_1_f_0(State_31);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma foreign_code(");
  mercury__io__write_string_4_p_0(Stream_5, LangStr_12);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, LorIStr_13);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ").\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Char) (MR_Word) wrapper_arg_1), wrapper_arg_2, wrapper_arg_3);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0(
  MR_Word Stream_5,
  MR_Word FDInfo_6)
{
  MR_Word Lang_11 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  MR_Word IsLocal_12 = ((MR_Unsigned) ((MR_hl_field(0, FDInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word LiteralOrInclude_13 = ((MR_Word) ((MR_hl_field(0, FDInfo_6, (MR_Integer) 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_16_17;
  MR_Box conv2_STATE_VARIABLE_U_17_18;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_19_20;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_25_25;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_STATE_VARIABLE_IO_9;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_16_17);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), Lang_11, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_17_18);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_19_20);
  switch (IsLocal_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv6_STATE_VARIABLE_U_21_22;

        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_21_22);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv8_STATE_VARIABLE_U_21_22;

        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_21_22);
      }
      break;
  }
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_25_25);
  if (((MR_tag((MR_Word) LiteralOrInclude_13)) == (MR_Integer) 1))
  {
    MR_String FileName_29 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_13, (MR_Integer) 0))));
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv12_STATE_VARIABLE_U_14_31;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_15_32;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_26_26;

    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_14_31);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 9))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (FileName_29)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_15_32);
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_26_26);
  }
  else
  {
    MR_Word TypeInfo_16_40;
    MR_String Code_28 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_13, (MR_Integer) 0))));
    MR_Word Var_38;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv18_STATE_VARIABLE_U_11_35;
    MR_Box conv19_STATE_VARIABLE_U_12_36;
    void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv21_STATE_VARIABLE_U_26_26;

    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_11_35);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_8[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0_1));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (Stream_5));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 3, &TypeInfo_16_40);
    mercury__string__foldl_4_p_0(TypeInfo_16_40, Var_38, Code_28, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_12_36);
    func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
    func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_26_26);
  }
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_9);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Box Stream_5,
  MR_Word DeclMarker_6,
  MR_Box STATE_VARIABLE_IO_0_13,
  MR_Box * STATE_VARIABLE_IO_14)
{
  MR_Word MarkerKind_8 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker_6, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word PredSpec_9 = ((MR_Word) ((MR_hl_field(0, DeclMarker_6, (MR_Integer) 1))));
  MR_String MarkerKindStr_12;
  MR_Word PFU_17;
  MR_Word PredName_18;
  MR_Word Arity_19;
  MR_Box STATE_VARIABLE_U_18_21;
  MR_Box STATE_VARIABLE_U_19_22;
  MR_Box STATE_VARIABLE_U_21_24;
  MR_Box STATE_VARIABLE_U_22_25;
  MR_Box STATE_VARIABLE_U_23_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  switch (MarkerKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      MarkerKindStr_12 = (MR_String) "check_termination";
      break;
    case (MR_Integer) 1:
      MarkerKindStr_12 = (MR_String) "does_not_terminate";
      break;
    case (MR_Integer) 0:
      MarkerKindStr_12 = (MR_String) "terminates";
      break;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ":- pragma ")), Stream_5, STATE_VARIABLE_IO_0_13, &STATE_VARIABLE_U_18_21);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (MarkerKindStr_12)), Stream_5, STATE_VARIABLE_U_18_21, &STATE_VARIABLE_U_19_22);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), Stream_5, STATE_VARIABLE_U_19_22, &STATE_VARIABLE_U_21_24);
  PFU_17 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 0))) & (MR_Integer) 3);
  PredName_18 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 1))));
  Arity_19 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 2))));
  switch (PFU_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_30;
        MR_Box STATE_VARIABLE_U_15_31;
        MR_Box STATE_VARIABLE_U_17_33;
        MR_Box STATE_VARIABLE_U_18_34;
        MR_Integer Arity_36;
        MR_Box STATE_VARIABLE_U_13_38;
        MR_Box STATE_VARIABLE_U_15_40;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_30 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Var_30)), Stream_5, STATE_VARIABLE_U_21_24, &STATE_VARIABLE_U_15_31);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), Stream_5, STATE_VARIABLE_U_15_31, &STATE_VARIABLE_U_17_33);
        Arity_36 = (MR_Integer) (Arity_19);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_16, (MR_Integer) 0, PredName_18, Stream_5, STATE_VARIABLE_U_17_33, &STATE_VARIABLE_U_13_38);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "/")), Stream_5, STATE_VARIABLE_U_13_38, &STATE_VARIABLE_U_15_40);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 10))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Arity_36)), Stream_5, STATE_VARIABLE_U_15_40, &STATE_VARIABLE_U_18_34);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), Stream_5, STATE_VARIABLE_U_18_34, &STATE_VARIABLE_U_22_25);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_41;
        MR_Box STATE_VARIABLE_U_15_42;
        MR_Box STATE_VARIABLE_U_17_44;
        MR_Box STATE_VARIABLE_U_18_45;
        MR_Integer Arity_47;
        MR_Box STATE_VARIABLE_U_13_49;
        MR_Box STATE_VARIABLE_U_15_51;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_41 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Var_41)), Stream_5, STATE_VARIABLE_U_21_24, &STATE_VARIABLE_U_15_42);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_9(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), Stream_5, STATE_VARIABLE_U_15_42, &STATE_VARIABLE_U_17_44);
        Arity_47 = (MR_Integer) (Arity_19);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_16, (MR_Integer) 0, PredName_18, Stream_5, STATE_VARIABLE_U_17_44, &STATE_VARIABLE_U_13_49);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "/")), Stream_5, STATE_VARIABLE_U_13_49, &STATE_VARIABLE_U_15_51);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 10))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Arity_47)), Stream_5, STATE_VARIABLE_U_15_51, &STATE_VARIABLE_U_18_45);
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_12(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), Stream_5, STATE_VARIABLE_U_18_45, &STATE_VARIABLE_U_22_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_52 = (MR_Integer) (Arity_19);
        MR_Box STATE_VARIABLE_U_13_54;
        MR_Box STATE_VARIABLE_U_15_56;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_16, (MR_Integer) 0, PredName_18, Stream_5, STATE_VARIABLE_U_21_24, &STATE_VARIABLE_U_13_54);
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
        func_13(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "/")), Stream_5, STATE_VARIABLE_U_13_54, &STATE_VARIABLE_U_15_56);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 10))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Arity_52)), Stream_5, STATE_VARIABLE_U_15_56, &STATE_VARIABLE_U_22_25);
      }
      break;
  }
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_15(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "")), Stream_5, STATE_VARIABLE_U_22_25, &STATE_VARIABLE_U_23_26);
  func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, (MR_Integer) 0)), (MR_Integer) 6))));
  func_16(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ").\n")), Stream_5, STATE_VARIABLE_U_23_26, STATE_VARIABLE_IO_14);
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv13_Str_4;

  conv13_Str_4 = parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv13_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv11_Str_4;

  conv11_Str_4 = parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_Str_4));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DeclPragma_8)
{
  MR_Word Context_10;
  MR_Word Lang_11;

  Context_10 = parse_tree__prog_item__get_decl_pragma_context_1_f_0(DeclPragma_8);
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_10, Stream_7);
  Lang_11 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  switch (MR_tag((MR_Word) DeclPragma_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObsPred_12 = (MR_Word) ((MR_Word) (DeclPragma_8));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0(Stream_7, ObsPred_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ObsProc_13 = (MR_Word) (MR_body((MR_Word) (DeclPragma_8), (MR_Integer) 1));
        MR_Word PredNameModesPF_67 = ((MR_Word) ((MR_hl_field(0, ObsProc_13, (MR_Integer) 0))));
        MR_Word ObsoleteInFavourOf_68 = ((MR_Word) ((MR_hl_field(0, ObsProc_13, (MR_Integer) 1))));
        MR_String PredStr_71;
        MR_Word ObsoleteStrs_72;
        MR_String ObsoleteStr_73;
        MR_Word PredOrFunc_85 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_67, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SymName_86 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_67, (MR_Integer) 1))));
        MR_Word Modes_87 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_67, (MR_Integer) 2))));
        MR_Word InstVarSet_88;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_88);
        switch (PredOrFunc_85) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgModes_90;
              MR_Word ReturnArgMode_91;
              MR_Box conv12_ReturnArgMode_91;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_87, &FuncArgModes_90, &conv12_ReturnArgMode_91);
              ReturnArgMode_91 = ((MR_Word) (conv12_ReturnArgMode_91));
              PredStr_71 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_11, InstVarSet_88, SymName_86, FuncArgModes_90, ReturnArgMode_91, (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
          case (MR_Integer) 0:
            PredStr_71 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_11, InstVarSet_88, SymName_86, Modes_87, (MR_Word) ((MR_Unsigned) 0U));
            break;
        }
        ObsoleteStrs_72 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[9]), ObsoleteInFavourOf_68);
        ObsoleteStr_73 = mercury__string__join_list_2_f_0((MR_String) ", ", ObsoleteStrs_72);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma obsolete_proc(");
        mercury__io__write_string_4_p_0(Stream_7, PredStr_71);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", [");
        mercury__io__write_string_4_p_0(Stream_7, ObsoleteStr_73);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]).\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FormatCall_14 = (MR_Word) (MR_body((MR_Word) (DeclPragma_8), (MR_Integer) 2));
        MR_Word PredSpec_24 = ((MR_Word) ((MR_hl_field(0, FormatCall_14, (MR_Integer) 0))));
        MR_Word OoMFormatArgsSpecs_25 = ((MR_Word) ((MR_hl_field(0, FormatCall_14, (MR_Integer) 1))));
        MR_Word PF_28 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_24, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word PredName_29 = ((MR_Word) ((MR_hl_field(0, PredSpec_24, (MR_Integer) 1))));
        MR_Word Arity_30 = ((MR_Word) ((MR_hl_field(0, PredSpec_24, (MR_Integer) 2))));
        MR_String PredStr_31;
        MR_Word HeadFormatArgsSpec_32;
        MR_Word TailFormatArgsSpecs_33;
        MR_String SecondArgStr_34;
        MR_Word State0_52;
        MR_Word State_53;
        MR_String Var_56;
        MR_Word STATE_VARIABLE_U_15_57;
        MR_Word STATE_VARIABLE_U_17_59;
        MR_Word STATE_VARIABLE_U_18_60;
        MR_Integer Arity_62;
        MR_Word STATE_VARIABLE_U_13_64;
        MR_Word STATE_VARIABLE_U_15_66;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_15_57;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_17_59;
        MR_Box conv4_STATE_VARIABLE_U_13_64;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv6_STATE_VARIABLE_U_15_66;
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv8_STATE_VARIABLE_U_18_60;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv10_State_53;

        State0_52 = mercury__string__builder__init_0_f_0();
        Var_56 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PF_28);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Var_56)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_52)), &conv1_STATE_VARIABLE_U_15_57);
        STATE_VARIABLE_U_15_57 = ((MR_Word) (conv1_STATE_VARIABLE_U_15_57));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_57)), &conv3_STATE_VARIABLE_U_17_59);
        STATE_VARIABLE_U_17_59 = ((MR_Word) (conv3_STATE_VARIABLE_U_17_59));
        Arity_62 = (MR_Integer) (Arity_30);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_29, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_59)), &conv4_STATE_VARIABLE_U_13_64);
        STATE_VARIABLE_U_13_64 = ((MR_Word) (conv4_STATE_VARIABLE_U_13_64));
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_64)), &conv6_STATE_VARIABLE_U_15_66);
        STATE_VARIABLE_U_15_66 = ((MR_Word) (conv6_STATE_VARIABLE_U_15_66));
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_62)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_66)), &conv8_STATE_VARIABLE_U_18_60);
        STATE_VARIABLE_U_18_60 = ((MR_Word) (conv8_STATE_VARIABLE_U_18_60));
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_60)), &conv10_State_53);
        State_53 = ((MR_Word) (conv10_State_53));
        PredStr_31 = mercury__string__builder__to_string_1_f_0(State_53);
        HeadFormatArgsSpec_32 = ((MR_Word) ((MR_hl_field(0, OoMFormatArgsSpecs_25, (MR_Integer) 0))));
        TailFormatArgsSpecs_33 = ((MR_Word) ((MR_hl_field(0, OoMFormatArgsSpecs_25, (MR_Integer) 1))));
        if ((TailFormatArgsSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
          SecondArgStr_34 = parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(HeadFormatArgsSpec_32);
        else
        {
          MR_Word ArgsSpecsStrs_35;
          MR_String ArgsSpecsStr_36;
          MR_Word Var_38;
          MR_String Var_43;

          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (HeadFormatArgsSpec_32));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (TailFormatArgsSpecs_33));
          }
          ArgsSpecsStrs_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[8]), Var_38);
          ArgsSpecsStr_36 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsSpecsStrs_35);
          Var_43 = mercury__string__f_43_43_2_f_0(ArgsSpecsStr_36, (MR_String) "]");
          SecondArgStr_34 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_43);
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma format_call(");
        mercury__io__write_string_4_p_0(Stream_7, PredStr_31);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", [");
        mercury__io__write_string_4_p_0(Stream_7, SecondArgStr_34);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]).\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpec_15 = ((MR_Word) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(Stream_7, Lang_11, TypeSpec_15);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OISU_16 = ((MR_Word) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(Stream_7, OISU_16);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Term_17 = ((MR_Word) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_termination_5_p_0(Stream_7, Lang_11, Term_17);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Term2_18 = ((MR_Word) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0(Stream_7, Lang_11, Term2_18);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Sharing_19 = ((MR_Word) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0(Stream_7, Lang_11, Sharing_19);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reuse_20 = ((MR_Word) ((MR_hl_field(3, DeclPragma_8, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0(Stream_7, Lang_11, Reuse_20);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(
  MR_Word Stream_5,
  MR_Word OISU_6)
{
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, OISU_6, (MR_Integer) 0))));
  MR_Word CreatorPreds_12 = ((MR_Word) ((MR_hl_field(0, OISU_6, (MR_Integer) 1))));
  MR_Word MutatorPreds_13 = ((MR_Word) ((MR_hl_field(0, OISU_6, (MR_Integer) 2))));
  MR_Word DestructorPreds_14 = ((MR_Word) ((MR_hl_field(0, OISU_6, (MR_Integer) 3))));
  MR_Word TypeName_17;
  MR_Integer TypeArity_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_19_20;
  MR_Box conv2_STATE_VARIABLE_U_21_22;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_23_24;
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv6_STATE_VARIABLE_U_24_25;
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv8_STATE_VARIABLE_U_26_27;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_28_29;
  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv13_STATE_VARIABLE_U_31_32;
  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv15_STATE_VARIABLE_U_33_34;
  void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv18_STATE_VARIABLE_U_36_37;
  void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv20_STATE_VARIABLE_U_38_39;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_STATE_VARIABLE_U_41_42;
  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv25_STATE_VARIABLE_IO_9;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_19_20);
  TypeName_17 = ((MR_Word) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 0))));
  TypeArity_18 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, TypeName_17, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_21_22);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_23_24);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
  func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (TypeArity_18)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_24_25);
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_26_27);
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_28_29);
  if (!((CreatorPreds_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredSpec_47 = ((MR_Word) ((MR_hl_field(1, CreatorPreds_12, (MR_Integer) 0))));
    MR_Word PredSpecs_48 = ((MR_Word) ((MR_hl_field(1, CreatorPreds_12, (MR_Integer) 1))));
    MR_Box conv11_STATE_VARIABLE_U_29_30;

    parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), PredSpec_47, PredSpecs_48, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_29_30);
  }
  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_31_32);
  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_33_34);
  if (!((MutatorPreds_13 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredSpec_55 = ((MR_Word) ((MR_hl_field(1, MutatorPreds_13, (MR_Integer) 0))));
    MR_Word PredSpecs_56 = ((MR_Word) ((MR_hl_field(1, MutatorPreds_13, (MR_Integer) 1))));
    MR_Box conv16_STATE_VARIABLE_U_34_35;

    parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), PredSpec_55, PredSpecs_56, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_34_35);
  }
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_36_37);
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_38_39);
  if (!((DestructorPreds_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredSpec_63 = ((MR_Word) ((MR_hl_field(1, DestructorPreds_14, (MR_Integer) 0))));
    MR_Word PredSpecs_64 = ((MR_Word) ((MR_hl_field(1, DestructorPreds_14, (MR_Integer) 1))));
    MR_Box conv21_STATE_VARIABLE_U_39_40;

    parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), PredSpec_63, PredSpecs_64, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_39_40);
  }
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_41_42);
  func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
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
    MR_String Var_25;
    MR_Box STATE_VARIABLE_U_15_26;
    MR_Box STATE_VARIABLE_U_17_28;
    MR_Box STATE_VARIABLE_U_18_29;
    MR_Integer Arity_31;
    MR_Box STATE_VARIABLE_U_13_33;
    MR_Box STATE_VARIABLE_U_15_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "\t\t")), S_8, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
    PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_11 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 1))));
    UserArity_12 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 2))));
    Var_25 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_10);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (Var_25)), S_8, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_15_26);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_15_26, &STATE_VARIABLE_U_17_28);
    Arity_31 = (MR_Integer) (UserArity_12);
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_24, (MR_Integer) 0, PredName_11, S_8, STATE_VARIABLE_U_17_28, &STATE_VARIABLE_U_13_33);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));
    func_3(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "/")), S_8, STATE_VARIABLE_U_13_33, &STATE_VARIABLE_U_15_35);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 10))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (Arity_31)), S_8, STATE_VARIABLE_U_15_35, &STATE_VARIABLE_U_18_29);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));
    func_5(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_18_29, &STATE_VARIABLE_U_19_19);
    if ((PredSpecs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));

      func_6(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "\n")), S_8, STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_16);
    }
    else
    {
      MR_Word HeadPredSpec_13 = ((MR_Word) ((MR_hl_field(1, PredSpecs_7, (MR_Integer) 0))));
      MR_Word TailPredSpecs_14 = ((MR_Word) ((MR_hl_field(1, PredSpecs_7, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_23_23;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Word next_value_of_PredSpec_6;
      MR_Word next_value_of_PredSpecs_7;
      MR_Box next_value_of_STATE_VARIABLE_U_0_15;

      func_7(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ",\n")), S_8, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_PredSpec_6 = HeadPredSpec_13;
      next_value_of_PredSpecs_7 = TailPredSpecs_14;
      next_value_of_STATE_VARIABLE_U_0_15 = STATE_VARIABLE_U_23_23;
      PredSpec_6 = next_value_of_PredSpec_6;
      PredSpecs_7 = next_value_of_PredSpecs_7;
      STATE_VARIABLE_U_0_15 = next_value_of_STATE_VARIABLE_U_0_15;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(
  MR_Word FormatStringValues_3)
{
  MR_String Str_4;
  MR_Integer OrigFS_5 = ((MR_Integer) ((MR_hl_field(0, FormatStringValues_3, (MR_Integer) 0))));
  MR_Integer OrigVL_6 = ((MR_Integer) ((MR_hl_field(0, FormatStringValues_3, (MR_Integer) 1))));
  MR_String Var_16;
  MR_String Var_23;
  MR_String Var_25;
  MR_String Var_26;
  MR_String Var_33;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), OrigVL_6, &Var_16);
  Var_23 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) ")");
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_23);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), OrigFS_5, &Var_26);
  Var_33 = mercury__string__f_43_43_2_f_0(Var_26, Var_25);
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "format_string_values(", Var_33);
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv27_Str_4;

  conv27_Str_4 = parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv27_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0(
  MR_Word Stream_5,
  MR_Word ObsoletePred_6)
{
  MR_Word PredSpec_8 = ((MR_Word) ((MR_hl_field(0, ObsoletePred_6, (MR_Integer) 0))));
  MR_Word ObsoleteInFavourOf_9 = ((MR_Word) ((MR_hl_field(0, ObsoletePred_6, (MR_Integer) 1))));
  MR_Word PFU_12 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word PredName_13 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 1))));
  MR_Word Arity_14 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 2))));
  MR_String PredStr_15;
  MR_Word ObsoleteStrs_16;
  MR_String ObsoleteStr_17;
  MR_Word State0_40;
  MR_Word State_41;

  State0_40 = mercury__string__builder__init_0_f_0();
  switch (PFU_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_46;
        MR_Word STATE_VARIABLE_U_15_47;
        MR_Word STATE_VARIABLE_U_17_49;
        MR_Word STATE_VARIABLE_U_18_50;
        MR_Integer Arity_52;
        MR_Word STATE_VARIABLE_U_13_54;
        MR_Word STATE_VARIABLE_U_15_56;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_15_47;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_17_49;
        MR_Box conv4_STATE_VARIABLE_U_13_54;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv6_STATE_VARIABLE_U_15_56;
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv8_STATE_VARIABLE_U_18_50;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv10_State_41;

        Var_46 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Var_46)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_40)), &conv1_STATE_VARIABLE_U_15_47);
        STATE_VARIABLE_U_15_47 = ((MR_Word) (conv1_STATE_VARIABLE_U_15_47));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_47)), &conv3_STATE_VARIABLE_U_17_49);
        STATE_VARIABLE_U_17_49 = ((MR_Word) (conv3_STATE_VARIABLE_U_17_49));
        Arity_52 = (MR_Integer) (Arity_14);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_13, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_49)), &conv4_STATE_VARIABLE_U_13_54);
        STATE_VARIABLE_U_13_54 = ((MR_Word) (conv4_STATE_VARIABLE_U_13_54));
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_54)), &conv6_STATE_VARIABLE_U_15_56);
        STATE_VARIABLE_U_15_56 = ((MR_Word) (conv6_STATE_VARIABLE_U_15_56));
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_52)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_56)), &conv8_STATE_VARIABLE_U_18_50);
        STATE_VARIABLE_U_18_50 = ((MR_Word) (conv8_STATE_VARIABLE_U_18_50));
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_50)), &conv10_State_41);
        State_41 = ((MR_Word) (conv10_State_41));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_57;
        MR_Word STATE_VARIABLE_U_15_58;
        MR_Word STATE_VARIABLE_U_17_60;
        MR_Word STATE_VARIABLE_U_18_61;
        MR_Integer Arity_63;
        MR_Word STATE_VARIABLE_U_13_65;
        MR_Word STATE_VARIABLE_U_15_67;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv12_STATE_VARIABLE_U_15_58;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv14_STATE_VARIABLE_U_17_60;
        MR_Box conv15_STATE_VARIABLE_U_13_65;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_U_15_67;
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv19_STATE_VARIABLE_U_18_61;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv21_State_41;

        Var_57 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Var_57)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_40)), &conv12_STATE_VARIABLE_U_15_58);
        STATE_VARIABLE_U_15_58 = ((MR_Word) (conv12_STATE_VARIABLE_U_15_58));
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_58)), &conv14_STATE_VARIABLE_U_17_60);
        STATE_VARIABLE_U_17_60 = ((MR_Word) (conv14_STATE_VARIABLE_U_17_60));
        Arity_63 = (MR_Integer) (Arity_14);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_13, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_60)), &conv15_STATE_VARIABLE_U_13_65);
        STATE_VARIABLE_U_13_65 = ((MR_Word) (conv15_STATE_VARIABLE_U_13_65));
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_16(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_65)), &conv17_STATE_VARIABLE_U_15_67);
        STATE_VARIABLE_U_15_67 = ((MR_Word) (conv17_STATE_VARIABLE_U_15_67));
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
        func_18(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_63)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_67)), &conv19_STATE_VARIABLE_U_18_61);
        STATE_VARIABLE_U_18_61 = ((MR_Word) (conv19_STATE_VARIABLE_U_18_61));
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_61)), &conv21_State_41);
        State_41 = ((MR_Word) (conv21_State_41));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_68 = (MR_Integer) (Arity_14);
        MR_Word STATE_VARIABLE_U_13_70;
        MR_Word STATE_VARIABLE_U_15_72;
        MR_Box conv22_STATE_VARIABLE_U_13_70;
        void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv24_STATE_VARIABLE_U_15_72;
        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv26_State_41;

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0, PredName_13, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_40)), &conv22_STATE_VARIABLE_U_13_70);
        STATE_VARIABLE_U_13_70 = ((MR_Word) (conv22_STATE_VARIABLE_U_13_70));
        func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_23(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_70)), &conv24_STATE_VARIABLE_U_15_72);
        STATE_VARIABLE_U_15_72 = ((MR_Word) (conv24_STATE_VARIABLE_U_15_72));
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]), (MR_Integer) 0)), (MR_Integer) 10))));
        func_25(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[3]))), ((MR_Box) (Arity_68)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_72)), &conv26_State_41);
        State_41 = ((MR_Word) (conv26_State_41));
      }
      break;
  }
  PredStr_15 = mercury__string__builder__to_string_1_f_0(State_41);
  ObsoleteStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[7]), ObsoleteInFavourOf_9);
  ObsoleteStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", ObsoleteStrs_16);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma obsolete(");
  mercury__io__write_string_4_p_0(Stream_5, PredStr_15);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", [");
  mercury__io__write_string_4_p_0(Stream_5, ObsoleteStr_17);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]).\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word Reuse_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, Reuse_8, (MR_Integer) 0))));
  MR_Word HeadVars_11 = ((MR_Word) ((MR_hl_field(0, Reuse_8, (MR_Integer) 1))));
  MR_Word HeadVarTypes_12 = ((MR_Word) ((MR_hl_field(0, Reuse_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, Reuse_8, (MR_Integer) 3))));
  MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(0, Reuse_8, (MR_Integer) 4))));
  MR_Word MaybeStructureReuseDomain_15 = ((MR_Word) ((MR_hl_field(0, Reuse_8, (MR_Integer) 5))));
  MR_String PredStr_18;
  MR_Word Var_29;
  MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_38 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_39;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_39);
  switch (PredOrFunc_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_41;
        MR_Word ReturnArgMode_42;
        MR_Box conv0_ReturnArgMode_42;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_38, &FuncArgModes_41, &conv0_ReturnArgMode_42);
        ReturnArgMode_42 = ((MR_Word) (conv0_ReturnArgMode_42));
        PredStr_18 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_39, SymName_37, FuncArgModes_41, ReturnArgMode_42, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_18 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_39, SymName_37, Modes_38, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma structure_reuse(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_18);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  if ((HeadVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars, types");
  else
  {
    MR_Word Var_54;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars(");
    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, HeadVars_11, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "), ");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "types(");
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_struct_reuse_5_p_0_1));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (TVarSet_14));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_54, (MR_String) ", ", HeadVarTypes_12, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (VarSet_13));
  }
  parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_6_p_0(Stream_6, Var_29, TVarSet_14, MaybeStructureReuseDomain_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word Sharing_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, Sharing_8, (MR_Integer) 0))));
  MR_Word HeadVars_11 = ((MR_Word) ((MR_hl_field(0, Sharing_8, (MR_Integer) 1))));
  MR_Word HeadVarTypes_12 = ((MR_Word) ((MR_hl_field(0, Sharing_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, Sharing_8, (MR_Integer) 3))));
  MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(0, Sharing_8, (MR_Integer) 4))));
  MR_Word MaybeSharingAs_15 = ((MR_Word) ((MR_hl_field(0, Sharing_8, (MR_Integer) 5))));
  MR_String PredStr_18;
  MR_Word Var_29;
  MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_38 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_39;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_39);
  switch (PredOrFunc_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_41;
        MR_Word ReturnArgMode_42;
        MR_Box conv0_ReturnArgMode_42;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_38, &FuncArgModes_41, &conv0_ReturnArgMode_42);
        ReturnArgMode_42 = ((MR_Word) (conv0_ReturnArgMode_42));
        PredStr_18 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_39, SymName_37, FuncArgModes_41, ReturnArgMode_42, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_18 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_39, SymName_37, Modes_38, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma structure_sharing(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_18);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  if ((HeadVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars, types");
  else
  {
    MR_Word Var_54;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars(");
    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, HeadVars_11, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "), ");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "types(");
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_struct_sharing_5_p_0_1));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (TVarSet_14));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_54, (MR_String) ", ", HeadVarTypes_12, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (VarSet_13));
  }
  parse_tree__prog_ctgc__print_interface_structure_sharing_domain_6_p_0(Stream_6, Var_29, TVarSet_14, MaybeSharingAs_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_4;

  conv2_Str_4 = parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Str_4;

  conv1_Str_4 = parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word Term2_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, Term2_8, (MR_Integer) 0))));
  MR_Word MaybeSuccess_11 = ((MR_Word) ((MR_hl_field(0, Term2_8, (MR_Integer) 1))));
  MR_Word MaybeFailure_12 = ((MR_Word) ((MR_hl_field(0, Term2_8, (MR_Integer) 2))));
  MR_Word MaybeTermination_13 = ((MR_Word) ((MR_hl_field(0, Term2_8, (MR_Integer) 3))));
  MR_String PredStr_16;
  MR_String SuccessStr_17;
  MR_String FailureStr_18;
  MR_String TermStr_19;
  MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_47 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_48 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_49;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_49);
  switch (PredOrFunc_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_51;
        MR_Word ReturnArgMode_52;
        MR_Box conv0_ReturnArgMode_52;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_48, &FuncArgModes_51, &conv0_ReturnArgMode_52);
        ReturnArgMode_52 = ((MR_Word) (conv0_ReturnArgMode_52));
        PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_49, SymName_47, FuncArgModes_51, ReturnArgMode_52, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_49, SymName_47, Modes_48, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  if ((MaybeSuccess_11 == (MR_Word) ((MR_Unsigned) 0U)))
    SuccessStr_17 = (MR_String) "not_set";
  else
  {
    MR_Word ArgSizeConstraints_55 = ((MR_Word) ((MR_hl_field(1, MaybeSuccess_11, (MR_Integer) 0))));
    MR_Word ConstraintStrs_56;
    MR_String ConstraintsStr_57;
    MR_String Var_63;

    ConstraintStrs_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[5]), ArgSizeConstraints_55);
    ConstraintsStr_57 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_56);
    Var_63 = mercury__string__f_43_43_2_f_0(ConstraintsStr_57, (MR_String) "])");
    SuccessStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "constraints([", Var_63);
  }
  if ((MaybeFailure_12 == (MR_Word) ((MR_Unsigned) 0U)))
    FailureStr_18 = (MR_String) "not_set";
  else
  {
    MR_Word ArgSizeConstraints_65 = ((MR_Word) ((MR_hl_field(1, MaybeFailure_12, (MR_Integer) 0))));
    MR_Word ConstraintStrs_66;
    MR_String ConstraintsStr_67;
    MR_String Var_73;

    ConstraintStrs_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[6]), ArgSizeConstraints_65);
    ConstraintsStr_67 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_66);
    Var_73 = mercury__string__f_43_43_2_f_0(ConstraintsStr_67, (MR_String) "])");
    FailureStr_18 = mercury__string__f_43_43_2_f_0((MR_String) "constraints([", Var_73);
  }
  if ((MaybeTermination_13 == (MR_Word) ((MR_Unsigned) 0U)))
    TermStr_19 = (MR_String) "not_set";
  else
  {
    MR_Word Termination_75 = ((MR_Word) ((MR_hl_field(1, MaybeTermination_13, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Termination_75)) == (MR_Integer) 1))
      TermStr_19 = (MR_String) "can_loop";
    else
      TermStr_19 = (MR_String) "cannot_loop";
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma termination2_info(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_6, SuccessStr_17);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_6, FailureStr_18);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_6, TermStr_19);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word Term_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
  MR_Word MaybeArgSize_11 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
  MR_Word MaybeTermination_12 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 2))));
  MR_String PredStr_15;
  MR_String ArgSizeStr_16;
  MR_String TermStr_17;
  MR_Word PredOrFunc_42 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_43 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_44 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_45;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_45);
  switch (PredOrFunc_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_47;
        MR_Word ReturnArgMode_48;
        MR_Box conv0_ReturnArgMode_48;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_44, &FuncArgModes_47, &conv0_ReturnArgMode_48);
        ReturnArgMode_48 = ((MR_Word) (conv0_ReturnArgMode_48));
        PredStr_15 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_45, SymName_43, FuncArgModes_47, ReturnArgMode_48, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_15 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_45, SymName_43, Modes_44, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  ArgSizeStr_16 = parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Integer) 0, MaybeArgSize_11);
  TermStr_17 = parse_tree__parse_tree_out_pragma__maybe_termination_info_to_string_2_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Integer) 0, MaybeTermination_12);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma termination_info(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_6, ArgSizeStr_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_6, TermStr_17);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_termination_info_to_string_2_f_0(
  MR_Word TypeInfo_for_S_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word Verbose_4,
  MR_Word MaybeTerminationInfo_5)
{
  MR_String Str_6;

  if ((MaybeTerminationInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Str_6 = (MR_String) "not_set";
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, MaybeTerminationInfo_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
    {
      MR_Box ErrorInfo_8 = (MR_hl_field(1, Var_18, (MR_Integer) 0));

      switch (Verbose_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_6 = (MR_String) "can_loop";
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_14;
            MR_String Var_20;

            Var_14 = mercury__string__string_1_f_0(TypeInfo_for_T_17, ErrorInfo_8);
            Var_20 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ")");
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

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__bool_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word Verbose_4,
  MR_Word MaybeArgSizeInfo_5)
{
  MR_String Str_6;

  if ((MaybeArgSizeInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Str_6 = (MR_String) "not_set";
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, MaybeArgSizeInfo_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0))
    {
      MR_Integer Const_7 = ((MR_Integer) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      MR_Word UsedArgs_8 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
      MR_String Var_16;
      MR_String Var_30;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_40;
      MR_Word BoolStrs_42;
      MR_String Var_44;
      MR_String Var_49;

      BoolStrs_42 = mercury__list__map_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[4]), UsedArgs_8);
      Var_44 = mercury__string__join_list_2_f_0((MR_String) ", ", BoolStrs_42);
      Var_49 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "]");
      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_49);
      Var_30 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) ")");
      Var_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_30);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0]), Const_7, &Var_33);
      Var_40 = mercury__string__f_43_43_2_f_0(Var_33, Var_32);
      Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "finite(", Var_40);
    }
    else
    {
      MR_Box ErrorInfo_9 = (MR_hl_field(1, Var_25, (MR_Integer) 0));

      switch (Verbose_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_6 = (MR_String) "infinite";
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_22;
            MR_String Var_27;

            Var_22 = mercury__string__string_1_f_0(TypeInfo_for_T_24, ErrorInfo_9);
            Var_27 = mercury__string__f_43_43_2_f_0(Var_22, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "infinite(", Var_27);
          }
          break;
      }
    }
  }
  return Str_6;
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word TypeSpec_8)
{
  MR_Word PFUMM_10 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, (MR_Integer) 0))));
  MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, (MR_Integer) 1))));
  MR_Word TypeSubst_13 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, (MR_Integer) 3))));
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, (MR_Integer) 4))));
  MR_Word HeadTypeSubst_25;
  MR_Word TailTypeSubsts_26;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma type_spec(");
  switch (MR_tag((MR_Word) PFUMM_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_67 = ((MR_Word) ((MR_hl_field(0, PFUMM_10, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_67)) == (MR_Integer) 1))
        {
          MR_Word Arity_57 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_67, (MR_Integer) 0))));
          MR_String Var_89;
          MR_Integer Arity_95;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_15_90;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_U_17_92;
          MR_Box conv16_STATE_VARIABLE_U_13_97;
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv18_STATE_VARIABLE_U_15_99;
          void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv20_STATE_VARIABLE_U_18_93;
          void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv22_STATE_VARIABLE_IO_33_33;

          Var_89 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Var_89)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_15_90);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_17_92);
          Arity_95 = (MR_Integer) (Arity_57);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_11, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_13_97);
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_15_99);
          func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
          func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_95)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_18_93);
          func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_21(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_33_33);
        }
        else
        {
          MR_String PredStr_61;
          MR_Word Modes_102 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_67, (MR_Integer) 0))));
          MR_Word InstVarSet_103;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_103);
          PredStr_61 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_103, PredName_11, Modes_102, (MR_Word) ((MR_Unsigned) 0U));
          mercury__io__write_string_4_p_0(Stream_6, PredStr_61);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_18 = ((MR_Word) ((MR_hl_field(1, PFUMM_10, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_18)) == (MR_Integer) 1))
        {
          MR_Word Arity_23 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_18, (MR_Integer) 0))));
          MR_String Var_69;
          MR_Integer Arity_75;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_STATE_VARIABLE_U_15_70;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_17_72;
          MR_Box conv4_STATE_VARIABLE_U_13_77;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv6_STATE_VARIABLE_U_15_79;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_18_73;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_STATE_VARIABLE_IO_33_33;

          Var_69 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Var_69)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15_70);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_17_72);
          Arity_75 = (MR_Integer) (Arity_23);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_11, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_13_77);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_15_79);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_75)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_18_73);
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
          func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_33_33);
        }
        else
        {
          MR_String PredStr_22;
          MR_Word Modes_82 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_18, (MR_Integer) 0))));
          MR_Word InstVarSet_83;
          MR_Word FuncArgModes_85;
          MR_Word ReturnArgMode_86;
          MR_Box conv11_ReturnArgMode_86;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_83);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_82, &FuncArgModes_85, &conv11_ReturnArgMode_86);
          ReturnArgMode_86 = ((MR_Word) (conv11_ReturnArgMode_86));
          PredStr_22 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_83, PredName_11, FuncArgModes_85, ReturnArgMode_86, (MR_Word) ((MR_Unsigned) 0U));
          mercury__io__write_string_4_p_0(Stream_6, PredStr_22);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredArity_24 = ((MR_Word) ((MR_hl_field(2, PFUMM_10, (MR_Integer) 0))));
        MR_Integer Arity_109 = (MR_Integer) (PredArity_24);
        MR_Box conv23_STATE_VARIABLE_U_13_111;
        void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv25_STATE_VARIABLE_U_15_113;
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv27_STATE_VARIABLE_IO_33_33;

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0, PredName_11, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_13_111);
        func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
        func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_15_113);
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 10))));
        func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]))), ((MR_Box) (Arity_109)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_33_33);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  HeadTypeSubst_25 = ((MR_Word) ((MR_hl_field(0, TypeSubst_13, (MR_Integer) 0))));
  TailTypeSubsts_26 = ((MR_Word) ((MR_hl_field(0, TypeSubst_13, (MR_Integer) 1))));
  if ((TailTypeSubsts_26 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(VarSet_14, (MR_Integer) 0, HeadTypeSubst_25, Stream_6);
  else
  {
    MR_Word Var_42;
    MR_Word Var_44;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (VarSet_14));
      MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (HeadTypeSubst_25));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (TailTypeSubsts_26));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[2]), Var_42, (MR_String) ", ", Var_44, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__3_3,
  MR_Word Stream_11)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Type_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_7, VarNamePrint_8, Var_9, Stream_11);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = ");
  parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(VarSet_7, VarNamePrint_8, Type_10, Stream_11);
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
