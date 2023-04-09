/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version rotd-2023-04-09
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
  MR_Word TypeClassInfo_for_output_11,
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
  MR_Word TypeClassInfo_for_output_16,
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
  MR_Word TypeClassInfo_for_output_18,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_4_p_0(
  MR_Word TypeClassInfo_for_output_22,
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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word Lang_6,
  MR_Word FPEInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22);

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
  MR_Word TypeClassInfo_for_output_51,
  MR_Word Lang_6,
  MR_Word FPInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word Lang_1,
  MR_Word InstVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
  MR_Word Attrs_4,
  MR_Word VarSet_5);

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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(
  MR_Word Stream_5,
  MR_Word OISUInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word PredSpec_6,
  MR_Word PredSpecs_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(
  MR_Word FormatStringValues_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ObsoleteProcInfo_8);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0(
  MR_Word Stream_5,
  MR_Word ObsoletePredInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_String PragmaName_7,
  MR_Word PredSpec0_8,
  MR_String AfterStr_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

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


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[13][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[27][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[2][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[9][5];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_6[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_7[3][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[1][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_12[1][6];


struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s {
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s parse_tree__parse_tree_out_pragma_vector_common_8[20];

struct parse_tree__parse_tree_out_pragma__vector_common_type_10_0_s {
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_10_0_s parse_tree__parse_tree_out_pragma_vector_common_10[8];



static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[0])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[3])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[5])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[6])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_5[8])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__arg_size_constr_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[27][2] = {
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
    ((MR_Box) ((MR_String) "will_not_throw_exception")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "ordinary_despite_detism")),
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
    ((MR_Box) ((MR_String) "may_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "may_not_duplicate")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "may_export_body")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "may_not_export_body")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "])")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "fast_loose")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[2][9] = {
  /* row   0 */
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
  /* row   1 */
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[9][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_6[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_7[3][8] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][7] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[2])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))
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


static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s parse_tree__parse_tree_out_pragma_vector_common_8[20] = {
  /* row   0 */   { (MR_String) "not_tabled_for_io" },
  /* row   1 */   { (MR_String) "tabled_for_io" },
  /* row   2 */   { (MR_String) "tabled_for_io_unitize" },
  /* row   3 */   { (MR_String) "tabled_for_descendant_io" },
  /* row   4 */   { (MR_String) "inline" },
  /* row   5 */   { (MR_String) "no_inline" },
  /* row   6 */   { (MR_String) "promise_pure" },
  /* row   7 */   { (MR_String) "promise_semipure" },
  /* row   8 */   { (MR_String) "promise_equivalent_clauses" },
  /* row   9 */   { (MR_String) "terminates" },
  /* row  10 */   { (MR_String) "does_not_terminate" },
  /* row  11 */   { (MR_String) "mode_check_clauses" },
  /* row  12 */   { (MR_String) "concurrency" },
  /* row  13 */   { (MR_String) "single_prec_float" },
  /* row  14 */   { (MR_String) "double_prec_float" },
  /* row  15 */   { (MR_String) "memo" },
  /* row  16 */   { (MR_String) "parallel_conj" },
  /* row  17 */   { (MR_String) "trailing" },
  /* row  18 */   { (MR_String) "strict_sequential" },
  /* row  19 */   { (MR_String) "conservative_gc" },
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_10_0_s parse_tree__parse_tree_out_pragma_vector_common_10[8] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[17])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[15])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[16])) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[20])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[19])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[18])) },
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
  MR_Word TypeClassInfo_for_output_11,
  MR_Word Feature_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_String Str_8 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[12 + Feature_5]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_output_11)), ((MR_Box) (Str_8)), S_6, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
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
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), VarId_3, &Var_16);
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
  TermStrs_8 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[12]), Terms_5);
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
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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
        MR_Word Var_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

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
  MR_Word TypeClassInfo_for_output_16,
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 7))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (MR_Word) ((MR_Char) 92)), S_5, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 7))));
    func_1(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (MR_Word) (QuoteChar_8)), S_5, STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_10);
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
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 7))));

      func_2(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (MR_Word) (Char_6)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
    }
    else
    {
      MR_String Var_15;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (Var_15)), S_5, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_proc_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word FPInfo_5)
{
  MR_String String_6;
  MR_Box conv0_String_6;

  parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Lang_4, FPInfo_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
  String_6 = ((MR_String) (conv0_String_6));
  return String_6;
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word FPInfo_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_7, FPInfo_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
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
  MR_String String_4;
  MR_Word Lang_8;
  MR_Word IsLocal_9;
  MR_Word LiteralOrInclude_10;
  MR_String STATE_VARIABLE_U_14_12;
  MR_String STATE_VARIABLE_U_15_13;
  MR_String STATE_VARIABLE_U_17_15;
  MR_String STATE_VARIABLE_U_19_17;
  MR_String STATE_VARIABLE_U_23_20;
  MR_String STATE_VARIABLE_U_24_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_14_12;
  MR_Box conv2_STATE_VARIABLE_U_15_13;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_17_15;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_23_20;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_String_4;

  Lang_8 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  IsLocal_9 = ((MR_Unsigned) ((MR_hl_field(0, FDInfo_3, (MR_Integer) 0))) & (MR_Integer) 1);
  LiteralOrInclude_10 = ((MR_Word) ((MR_hl_field(0, FDInfo_3, (MR_Integer) 1))));
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_14_12);
  STATE_VARIABLE_U_14_12 = ((MR_String) (conv1_STATE_VARIABLE_U_14_12));
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Lang_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_12)), &conv2_STATE_VARIABLE_U_15_13);
  STATE_VARIABLE_U_15_13 = ((MR_String) (conv2_STATE_VARIABLE_U_15_13));
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_13)), &conv4_STATE_VARIABLE_U_17_15);
  STATE_VARIABLE_U_17_15 = ((MR_String) (conv4_STATE_VARIABLE_U_17_15));
  switch (IsLocal_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv6_STATE_VARIABLE_U_19_17;

        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_15)), &conv6_STATE_VARIABLE_U_19_17);
        STATE_VARIABLE_U_19_17 = ((MR_String) (conv6_STATE_VARIABLE_U_19_17));
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv8_STATE_VARIABLE_U_19_17;

        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_15)), &conv8_STATE_VARIABLE_U_19_17);
        STATE_VARIABLE_U_19_17 = ((MR_String) (conv8_STATE_VARIABLE_U_19_17));
      }
      break;
  }
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_17)), &conv10_STATE_VARIABLE_U_23_20);
  STATE_VARIABLE_U_23_20 = ((MR_String) (conv10_STATE_VARIABLE_U_23_20));
  if (((MR_tag((MR_Word) LiteralOrInclude_10)) == (MR_Integer) 1))
  {
    MR_String FileName_24 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_10, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_U_14_26;
    MR_String STATE_VARIABLE_U_15_27;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv12_STATE_VARIABLE_U_14_26;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_15_27;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_24_21;

    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_20)), &conv12_STATE_VARIABLE_U_14_26);
    STATE_VARIABLE_U_14_26 = ((MR_String) (conv12_STATE_VARIABLE_U_14_26));
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 21))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (FileName_24)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_26)), &conv14_STATE_VARIABLE_U_15_27);
    STATE_VARIABLE_U_15_27 = ((MR_String) (conv14_STATE_VARIABLE_U_15_27));
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_27)), &conv16_STATE_VARIABLE_U_24_21);
    STATE_VARIABLE_U_24_21 = ((MR_String) (conv16_STATE_VARIABLE_U_24_21));
  }
  else
  {
    MR_Word TypeInfo_16_35;
    MR_String Code_23 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_10, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_U_11_30;
    MR_String STATE_VARIABLE_U_12_31;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv18_STATE_VARIABLE_U_11_30;
    MR_Box conv19_STATE_VARIABLE_U_12_31;
    void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv21_STATE_VARIABLE_U_24_21;

    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_20)), &conv18_STATE_VARIABLE_U_11_30);
    STATE_VARIABLE_U_11_30 = ((MR_String) (conv18_STATE_VARIABLE_U_11_30));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 2, &TypeInfo_16_35);
    mercury__string__foldl_4_p_0(TypeInfo_16_35, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[7]), Code_23, ((MR_Box) (STATE_VARIABLE_U_11_30)), &conv19_STATE_VARIABLE_U_12_31);
    STATE_VARIABLE_U_12_31 = ((MR_String) (conv19_STATE_VARIABLE_U_12_31));
    func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_31)), &conv21_STATE_VARIABLE_U_24_21);
    STATE_VARIABLE_U_24_21 = ((MR_String) (conv21_STATE_VARIABLE_U_24_21));
  }
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_21)), &conv23_String_4);
  String_4 = ((MR_String) (conv23_String_4));
  return String_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_decl_pred_pf_name_arity_to_string_3_f_0(
  MR_String PragmaName_5,
  MR_Word PredSpec_6,
  MR_String MaybeAfter_7)
{
  MR_String String_8;
  MR_Word PredOrFunc_12;
  MR_Word PredName_13;
  MR_Word Arity_14;
  MR_String STATE_VARIABLE_U_18_16;
  MR_String STATE_VARIABLE_U_19_17;
  MR_String STATE_VARIABLE_U_21_19;
  MR_String STATE_VARIABLE_U_22_20;
  MR_String STATE_VARIABLE_U_23_21;
  MR_String Var_23;
  MR_String STATE_VARIABLE_U_15_24;
  MR_String STATE_VARIABLE_U_17_26;
  MR_String STATE_VARIABLE_U_18_27;
  MR_Integer Arity_29;
  MR_String STATE_VARIABLE_U_13_31;
  MR_String STATE_VARIABLE_U_15_33;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_18_16;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_19_17;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_21_19;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_15_24;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv9_STATE_VARIABLE_U_17_26;
  MR_Box conv10_STATE_VARIABLE_U_13_31;
  void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv12_STATE_VARIABLE_U_15_33;
  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv14_STATE_VARIABLE_U_18_27;
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv16_STATE_VARIABLE_U_22_20;
  void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv18_STATE_VARIABLE_U_23_21;
  void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv20_String_8;

  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_18_16);
  STATE_VARIABLE_U_18_16 = ((MR_String) (conv1_STATE_VARIABLE_U_18_16));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (PragmaName_5)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_16)), &conv3_STATE_VARIABLE_U_19_17);
  STATE_VARIABLE_U_19_17 = ((MR_String) (conv3_STATE_VARIABLE_U_19_17));
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_17)), &conv5_STATE_VARIABLE_U_21_19);
  STATE_VARIABLE_U_21_19 = ((MR_String) (conv5_STATE_VARIABLE_U_21_19));
  PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 0))) & (MR_Integer) 1);
  PredName_13 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 1))));
  Arity_14 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 2))));
  Var_23 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_12);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_23)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_19)), &conv7_STATE_VARIABLE_U_15_24);
  STATE_VARIABLE_U_15_24 = ((MR_String) (conv7_STATE_VARIABLE_U_15_24));
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_24)), &conv9_STATE_VARIABLE_U_17_26);
  STATE_VARIABLE_U_17_26 = ((MR_String) (conv9_STATE_VARIABLE_U_17_26));
  Arity_29 = (MR_Integer) (Arity_14);
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_13, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_26)), &conv10_STATE_VARIABLE_U_13_31);
  STATE_VARIABLE_U_13_31 = ((MR_String) (conv10_STATE_VARIABLE_U_13_31));
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_31)), &conv12_STATE_VARIABLE_U_15_33);
  STATE_VARIABLE_U_15_33 = ((MR_String) (conv12_STATE_VARIABLE_U_15_33));
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
  func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_29)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_33)), &conv14_STATE_VARIABLE_U_18_27);
  STATE_VARIABLE_U_18_27 = ((MR_String) (conv14_STATE_VARIABLE_U_18_27));
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_27)), &conv16_STATE_VARIABLE_U_22_20);
  STATE_VARIABLE_U_22_20 = ((MR_String) (conv16_STATE_VARIABLE_U_22_20));
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (MaybeAfter_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_20)), &conv18_STATE_VARIABLE_U_23_21);
  STATE_VARIABLE_U_23_21 = ((MR_String) (conv18_STATE_VARIABLE_U_23_21));
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_21)), &conv20_String_8);
  String_8 = ((MR_String) (conv20_String_8));
  return String_8;
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
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
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

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18_19);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_8)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_19_20);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_21_22);
  PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 0))) & (MR_Integer) 1);
  PredName_16 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 1))));
  Arity_17 = ((MR_Word) ((MR_hl_field(0, PredSpec_9, (MR_Integer) 2))));
  Var_26 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_15);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_26)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_15_27);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_17_29);
  Arity_32 = (MR_Integer) (Arity_17);
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_16, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_13_34);
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_15_36);
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
  func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_32)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_18_30);
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22_23);
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (MaybeAfter_10)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_23_24);
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_13);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_pred_marker_4_p_0(
  MR_Word Stream_5,
  MR_Word PredMarker_6)
{
  MR_Word PredSpec_8 = ((MR_Word) ((MR_hl_field(0, PredMarker_6, (MR_Integer) 0))));
  MR_Word PredMarkerKind_9 = ((MR_Unsigned) ((MR_hl_field(0, PredMarker_6, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_String PragmaName_10 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[4 + PredMarkerKind_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
  MR_Word PredOrFunc_15;
  MR_Word PredName_16;
  MR_Word Arity_17;
  MR_String Var_26;
  MR_Integer Arity_32;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
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
  MR_Box conv20_STATE_VARIABLE_IO_12;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18_19);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_10)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_19_20);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_21_22);
  PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 0))) & (MR_Integer) 1);
  PredName_16 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 1))));
  Arity_17 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 2))));
  Var_26 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_15);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_26)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_15_27);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_17_29);
  Arity_32 = (MR_Integer) (Arity_17);
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_16, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_13_34);
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_15_36);
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
  func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_32)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_18_30);
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22_23);
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_23_24);
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_12);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_generated_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemGenPragma_8)
{
  MR_Word Pragma_10 = ((MR_Word) ((MR_hl_field(0, ItemGenPragma_8, (MR_Integer) 0))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, ItemGenPragma_8, (MR_Integer) 1))));

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

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_4_p_0(
  MR_Word Stream_5,
  MR_Word TablingInfo_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, TablingInfo_6, (MR_Integer) 0))));
  MR_Word MM_TablingStatus_9 = ((MR_Unsigned) ((MR_hl_field(0, TablingInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_12;
  MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_14;
  MR_String SymNameStr_15;
  MR_String MMStr_16;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_42;
  MR_String Var_52;

  Arity_12 = (MR_Integer) (Var_19);
  PorFStr_14 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
  SymNameStr_15 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
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

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_4_p_0(
  MR_Word Stream_5,
  MR_Word TrailingInfo_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, TrailingInfo_6, (MR_Integer) 0))));
  MR_Word TrailingStatus_9 = ((MR_Unsigned) ((MR_hl_field(0, TrailingInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_12;
  MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_14;
  MR_String SymNameStr_15;
  MR_String TrailStr_16;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_42;
  MR_String Var_52;

  Arity_12 = (MR_Integer) (Var_19);
  PorFStr_14 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
  SymNameStr_15 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
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

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(
  MR_Word Stream_5,
  MR_Word ExceptionsInfo_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, ExceptionsInfo_6, (MR_Integer) 0))));
  MR_Word ThrowStatus_9 = ((MR_Word) ((MR_hl_field(0, ExceptionsInfo_6, (MR_Integer) 1))));
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_12;
  MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_14;
  MR_String SymNameStr_15;
  MR_String ThrowStr_16;
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_43;
  MR_String Var_53;

  Arity_12 = (MR_Integer) (Var_20);
  PorFStr_14 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
  SymNameStr_15 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
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
        MR_Word ExceptionType_17 = ((MR_Unsigned) ((MR_hl_field(1, ThrowStatus_9, (MR_Integer) 0))) & (MR_Integer) 1);

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

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(
  MR_Word Stream_5,
  MR_Word UnusedArgsInfo_6)
{
  MR_Word PredNameArityPFMn_8 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, (MR_Integer) 0))));
  MR_Word UnusedArgs_9 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, (MR_Integer) 1))));
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 1))));
  MR_Integer Arity_12;
  MR_Integer ModeNum_13 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 3))));
  MR_String PorFStr_14;
  MR_String SymNameStr_15;
  MR_String UnusedArgsStr_16;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_8, (MR_Integer) 2))));
  MR_String Var_42;
  MR_String Var_52;

  Arity_12 = (MR_Integer) (Var_19);
  PorFStr_14 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
  SymNameStr_15 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SymName_11);
  if ((UnusedArgs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    UnusedArgsStr_16 = (MR_String) "";
  else
  {
    MR_Integer Head_69 = ((MR_Integer) ((MR_hl_field(1, UnusedArgs_9, (MR_Integer) 0))));
    MR_Word Tail_70 = ((MR_Word) ((MR_hl_field(1, UnusedArgs_9, (MR_Integer) 1))));
    MR_String STATE_VARIABLE_U_15_74;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_STATE_VARIABLE_U_15_74;
    MR_Box conv2_UnusedArgsStr_16;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Head_69)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_74);
    STATE_VARIABLE_U_15_74 = ((MR_String) (conv1_STATE_VARIABLE_U_15_74));
    parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), Tail_70, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_74)), &conv2_UnusedArgsStr_16);
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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_4_p_0(
  MR_Word TypeClassInfo_for_output_18,
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Box next_value_of_STATE_VARIABLE_U_0_3;

      func_0(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_16_16);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 8))));
      func_1(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) (Head_9)), HeadVar__2_2, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_17_17);
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

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_pragma__mercury_format_required_feature_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_impl_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemImplPragma_8)
{
  MR_Word Pragma_10 = ((MR_Word) ((MR_hl_field(0, ItemImplPragma_8, (MR_Integer) 0))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, ItemImplPragma_8, (MR_Integer) 1))));
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
        MR_Box conv21_STATE_VARIABLE_IO_25;

        parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_13, FPInfo_16, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_25);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo_17 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv22_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_13, FPEInfo_17, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExternalInfo_18 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Word PFNameArity_79 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_18, (MR_Integer) 0))));
            MR_Word MaybeBackend_80 = ((MR_Word) ((MR_hl_field(0, ExternalInfo_18, (MR_Integer) 1))));
            MR_Word PorF_81 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_79, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredName_82 = ((MR_Word) ((MR_hl_field(0, PFNameArity_79, (MR_Integer) 1))));
            MR_Integer Arity_83;
            MR_String PorFStr_84;
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, PFNameArity_79, (MR_Integer) 2))));
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv2_STATE_VARIABLE_U_19_88;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv4_STATE_VARIABLE_U_20_89;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv6_STATE_VARIABLE_U_22_91;
            MR_Box conv7_STATE_VARIABLE_U_23_92;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv9_STATE_VARIABLE_U_25_94;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv11_STATE_VARIABLE_U_26_95;
            void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv19_STATE_VARIABLE_IO_25;

            Arity_83 = (MR_Integer) (Var_86);
            PorFStr_84 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PorF_81);
            func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma external_")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_19_88);
            func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PorFStr_84)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_20_89);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_22_91);
            parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredName_82, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_23_92);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_25_94);
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
            func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_83)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_26_95);
            if (!((MaybeBackend_80 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word Backend_85 = ((MR_Word) ((MR_hl_field(1, MaybeBackend_80, (MR_Integer) 0))));
              MR_String Var_98;
              void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
              MR_Box conv13_STATE_VARIABLE_U_28_97;
              void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv15_STATE_VARIABLE_U_30_99;
              void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv17_STATE_VARIABLE_U_32_101;

              func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", [")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_28_97);
              switch (Backend_85) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_98 = (MR_String) "high_level_backend";
                  break;
                case (MR_Integer) 1:
                  Var_98 = (MR_String) "low_level_backend";
                  break;
              }
              func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
              func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_98)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_30_99);
              func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
              func_16(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_32_101);
            }
            func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_18(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FactTableInfo_19 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv20_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), FactTableInfo_19, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TabledInfo_21 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_4_p_0(Stream_7, TabledInfo_21);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word PredSpec_20 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv23_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "inline", PredSpec_20, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word PredSpec_60 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv26_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "no_inline", PredSpec_60, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word PredSpec_61 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv0_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "consider_used", PredSpec_61, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word PredSpec_63 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv24_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "mode_check_clauses", PredSpec_63, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word PredSpec_62 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv25_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "no_determinism_warning", PredSpec_62, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word RequireTailrecPragma_22 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(Stream_7, Lang_13, RequireTailrecPragma_22);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word PredSpec_64 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv28_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "promise_pure", PredSpec_64, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word PredSpec_65 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv29_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "promise_semipure", PredSpec_65, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word PredSpec_66 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv27_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "promise_equivalent_clauses", PredSpec_66, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word RFSInfo_23 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Word Features0_104 = (MR_Word) (RFSInfo_23);
            MR_Word Features_105;
            void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv31_STATE_VARIABLE_U_13_107;
            void MR_CALL (* func_32)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv33_STATE_VARIABLE_U_16_110;
            void MR_CALL (* func_34)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv35_STATE_VARIABLE_IO_25;

            Features_105 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), Features0_104);
            func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_30(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_U_13_107);
            func_32 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 26))));
            func_32(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_11[0])), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Features_105)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_U_16_110);
            func_34 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_34(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_IO_25);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_4_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word FactTableInfo_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_Word PredSpec_8 = ((MR_Word) ((MR_hl_field(0, FactTableInfo_5, (MR_Integer) 0))));
  MR_String FileName_9 = ((MR_String) ((MR_hl_field(0, FactTableInfo_5, (MR_Integer) 1))));
  MR_Word PFU_10;
  MR_Word PredName_11;
  MR_Word UserArity_12;
  MR_Box STATE_VARIABLE_U_16_16;
  MR_Box STATE_VARIABLE_U_17_17;
  MR_Box STATE_VARIABLE_U_19_19;
  MR_Box STATE_VARIABLE_U_20_20;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ":- pragma fact_table(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_16_16);
  PFU_10 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
  PredName_11 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 1))));
  UserArity_12 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 2))));
  switch (PFU_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_25;
        MR_Box STATE_VARIABLE_U_15_26;
        MR_Box STATE_VARIABLE_U_17_28;
        MR_Box STATE_VARIABLE_U_18_29;
        MR_Integer Arity_31;
        MR_Box STATE_VARIABLE_U_13_33;
        MR_Box STATE_VARIABLE_U_15_35;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_25 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (Var_25)), S_6, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_15_26);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) "(")), S_6, STATE_VARIABLE_U_15_26, &STATE_VARIABLE_U_17_28);
        Arity_31 = (MR_Integer) (UserArity_12);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, PredName_11, S_6, STATE_VARIABLE_U_17_28, &STATE_VARIABLE_U_13_33);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) "/")), S_6, STATE_VARIABLE_U_13_33, &STATE_VARIABLE_U_15_35);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 8))));
        func_4(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (Arity_31)), S_6, STATE_VARIABLE_U_15_35, &STATE_VARIABLE_U_18_29);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_18_29, &STATE_VARIABLE_U_17_17);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_36;
        MR_Box STATE_VARIABLE_U_15_37;
        MR_Box STATE_VARIABLE_U_17_39;
        MR_Box STATE_VARIABLE_U_18_40;
        MR_Integer Arity_42;
        MR_Box STATE_VARIABLE_U_13_44;
        MR_Box STATE_VARIABLE_U_15_46;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_36 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (Var_36)), S_6, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_15_37);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) "(")), S_6, STATE_VARIABLE_U_15_37, &STATE_VARIABLE_U_17_39);
        Arity_42 = (MR_Integer) (UserArity_12);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, PredName_11, S_6, STATE_VARIABLE_U_17_39, &STATE_VARIABLE_U_13_44);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) "/")), S_6, STATE_VARIABLE_U_13_44, &STATE_VARIABLE_U_15_46);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 8))));
        func_9(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (Arity_42)), S_6, STATE_VARIABLE_U_15_46, &STATE_VARIABLE_U_18_40);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_10(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_18_40, &STATE_VARIABLE_U_17_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_47 = (MR_Integer) (UserArity_12);
        MR_Box STATE_VARIABLE_U_13_49;
        MR_Box STATE_VARIABLE_U_15_51;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, PredName_11, S_6, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_13_49);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) "/")), S_6, STATE_VARIABLE_U_13_49, &STATE_VARIABLE_U_15_51);
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 8))));
        func_12(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (Arity_47)), S_6, STATE_VARIABLE_U_15_51, &STATE_VARIABLE_U_17_17);
      }
      break;
  }
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
  func_13(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ", ")), S_6, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 21))));
  func_14(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (FileName_9)), S_6, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_20_20);
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
  func_15(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ").\n")), S_6, STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_14);
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
  MR_Word TabledInfo_6)
{
  MR_Word TabledMethod_8 = ((MR_Word) ((MR_hl_field(0, TabledInfo_6, (MR_Integer) 0))));
  MR_Word PredOrProcSpec_9 = ((MR_Word) ((MR_hl_field(0, TabledInfo_6, (MR_Integer) 1))));
  MR_Word MaybeAttributes_10 = ((MR_Word) ((MR_hl_field(0, TabledInfo_6, (MR_Integer) 2))));
  MR_String PragmaName_11;
  MR_String AfterStr_27;
  MR_String PredOrProcSpecStr_65;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_17_68;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_18_69;
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv6_STATE_VARIABLE_U_20_71;
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv8_STATE_VARIABLE_U_21_72;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_22_73;
  void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv12_STATE_VARIABLE_IO_31;

  PragmaName_11 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_8);
  if ((MaybeAttributes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    AfterStr_27 = (MR_String) "";
  else
  {
    MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_10, (MR_Integer) 0))));
    MR_Word Strictness_13 = ((MR_Word) ((MR_hl_field(0, Attributes_12, (MR_Integer) 0))));
    MR_Word MaybeSizeLimit_14 = ((MR_Word) ((MR_hl_field(0, Attributes_12, (MR_Integer) 1))));
    MR_Word Stats_15 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word AllowReset_16 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_12, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word WarnForIgnore_17 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Strs_33_33;
    MR_Word STATE_VARIABLE_Strs_48_48;
    MR_Word STATE_VARIABLE_Strs_49_49;
    MR_Word STATE_VARIABLE_Strs_51_51;

    switch (MR_tag((MR_Word) Strictness_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Strictness_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Strs_33_33 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Strs_33_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[26]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_19 = ((MR_Word) ((MR_hl_field(1, Strictness_13, (MR_Integer) 0))));
          MR_Word HiddenArgMethod_20 = ((MR_Unsigned) ((MR_hl_field(1, Strictness_13, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgStrs_21;
          MR_String ArgsStr_22;
          MR_String HiddenArgStr_23;
          MR_String SpecifiedStr_24;
          MR_String Var_38;
          MR_String Var_39;
          MR_String Var_41;

          ArgStrs_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[11]), Args_19);
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
          Var_41 = mercury__string__f_43_43_2_f_0(HiddenArgStr_23, (MR_String) ")");
          Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "], ", Var_41);
          Var_38 = mercury__string__f_43_43_2_f_0(ArgsStr_22, Var_39);
          SpecifiedStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", Var_38);
          {
            STATE_VARIABLE_Strs_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Strs_33_33, 0) = ((MR_Box) (SpecifiedStr_24));
            MR_hl_field(1, STATE_VARIABLE_Strs_33_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    if ((MaybeSizeLimit_14 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Strs_48_48 = STATE_VARIABLE_Strs_33_33;
    else
    {
      MR_Integer SizeLimit_25 = ((MR_Integer) ((MR_hl_field(1, MaybeSizeLimit_14, (MR_Integer) 0))));
      MR_String LimitStr_26;
      MR_String Var_45;
      MR_String Var_46;

      Var_46 = mercury__string__int_to_string_1_f_0(SizeLimit_25);
      Var_45 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ")");
      LimitStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", Var_45);
      {
        STATE_VARIABLE_Strs_48_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Strs_48_48, 0) = ((MR_Box) (LimitStr_26));
        MR_hl_field(1, STATE_VARIABLE_Strs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_Strs_33_33));
      }
    }
    switch (Stats_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_Strs_49_49 = STATE_VARIABLE_Strs_48_48;
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) ((MR_String) "statistics"));
          MR_hl_field(1, STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (STATE_VARIABLE_Strs_48_48));
        }
        break;
    }
    switch (AllowReset_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Strs_51_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Strs_51_51, 0) = ((MR_Box) ((MR_String) "allow_reset"));
          MR_hl_field(1, STATE_VARIABLE_Strs_51_51, 1) = ((MR_Box) (STATE_VARIABLE_Strs_49_49));
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
          MR_Word STATE_VARIABLE_Strs_53_75;
          MR_String Var_77;
          MR_String Var_78;

          {
            STATE_VARIABLE_Strs_53_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Strs_53_75, 0) = ((MR_Box) ((MR_String) "disable_warning_if_ignored"));
            MR_hl_field(1, STATE_VARIABLE_Strs_53_75, 1) = ((MR_Box) (STATE_VARIABLE_Strs_51_51));
          }
          Var_78 = mercury__string__join_list_2_f_0((MR_String) ", ", STATE_VARIABLE_Strs_53_75);
          Var_77 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "]");
          AfterStr_27 = mercury__string__f_43_43_2_f_0((MR_String) ", [", Var_77);
        }
        break;
    }
  }
  PredOrProcSpecStr_65 = parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0((MR_Integer) 0, PredOrProcSpec_9);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_17_68);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PragmaName_11)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_18_69);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_20_71);
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (PredOrProcSpecStr_65)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_21_72);
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (AfterStr_27)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_22_73);
  func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_31);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_rec_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word RequireTR_8)
{
  MR_Word PredOrProcSpec_10 = ((MR_Word) ((MR_hl_field(0, RequireTR_8, (MR_Integer) 0))));
  MR_Word Info_11 = ((MR_Word) ((MR_hl_field(0, RequireTR_8, (MR_Integer) 1))));
  MR_String ProcSpecStr_12;

  ProcSpecStr_12 = parse_tree__parse_tree_out_pragma__pred_or_proc_pfumm_name_to_string_2_f_0(Lang_7, PredOrProcSpec_10);
  if (((MR_tag((MR_Word) Info_11)) == (MR_Integer) 1))
  {
    MR_Word WarnOrError_14 = ((((MR_Unsigned) ((MR_hl_field(1, Info_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Type_15 = ((MR_Unsigned) ((MR_hl_field(1, Info_11, (MR_Integer) 0))) & (MR_Integer) 1);
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
          MR_String Var_54;
          MR_String STATE_VARIABLE_U_15_55;
          MR_String STATE_VARIABLE_U_17_57;
          MR_String STATE_VARIABLE_U_18_58;
          MR_Integer Arity_60;
          MR_String STATE_VARIABLE_U_13_62;
          MR_String STATE_VARIABLE_U_15_64;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_15_55;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_U_17_57;
          MR_Box conv16_STATE_VARIABLE_U_13_62;
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv18_STATE_VARIABLE_U_15_64;
          void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv20_STATE_VARIABLE_U_18_58;
          void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv22_PredOrProcSpecStr_6;

          Var_54 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_54)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv13_STATE_VARIABLE_U_15_55);
          STATE_VARIABLE_U_15_55 = ((MR_String) (conv13_STATE_VARIABLE_U_15_55));
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_55)), &conv15_STATE_VARIABLE_U_17_57);
          STATE_VARIABLE_U_17_57 = ((MR_String) (conv15_STATE_VARIABLE_U_17_57));
          Arity_60 = (MR_Integer) (Arity_20);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_57)), &conv16_STATE_VARIABLE_U_13_62);
          STATE_VARIABLE_U_13_62 = ((MR_String) (conv16_STATE_VARIABLE_U_13_62));
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_62)), &conv18_STATE_VARIABLE_U_15_64);
          STATE_VARIABLE_U_15_64 = ((MR_String) (conv18_STATE_VARIABLE_U_15_64));
          func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_60)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_64)), &conv20_STATE_VARIABLE_U_18_58);
          STATE_VARIABLE_U_18_58 = ((MR_String) (conv20_STATE_VARIABLE_U_18_58));
          func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_21(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_58)), &conv22_PredOrProcSpecStr_6);
          PredOrProcSpecStr_6 = ((MR_String) (conv22_PredOrProcSpecStr_6));
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
          MR_String Var_40;
          MR_String STATE_VARIABLE_U_15_41;
          MR_String STATE_VARIABLE_U_17_43;
          MR_String STATE_VARIABLE_U_18_44;
          MR_Integer Arity_46;
          MR_String STATE_VARIABLE_U_13_48;
          MR_String STATE_VARIABLE_U_15_50;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_STATE_VARIABLE_U_15_41;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_17_43;
          MR_Box conv4_STATE_VARIABLE_U_13_48;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv6_STATE_VARIABLE_U_15_50;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_18_44;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_PredOrProcSpecStr_6;

          Var_40 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_40)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_41);
          STATE_VARIABLE_U_15_41 = ((MR_String) (conv1_STATE_VARIABLE_U_15_41));
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_41)), &conv3_STATE_VARIABLE_U_17_43);
          STATE_VARIABLE_U_17_43 = ((MR_String) (conv3_STATE_VARIABLE_U_17_43));
          Arity_46 = (MR_Integer) (Arity_12);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_43)), &conv4_STATE_VARIABLE_U_13_48);
          STATE_VARIABLE_U_13_48 = ((MR_String) (conv4_STATE_VARIABLE_U_13_48));
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_48)), &conv6_STATE_VARIABLE_U_15_50);
          STATE_VARIABLE_U_15_50 = ((MR_String) (conv6_STATE_VARIABLE_U_15_50));
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_46)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_50)), &conv8_STATE_VARIABLE_U_18_44);
          STATE_VARIABLE_U_18_44 = ((MR_String) (conv8_STATE_VARIABLE_U_18_44));
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_44)), &conv10_PredOrProcSpecStr_6);
          PredOrProcSpecStr_6 = ((MR_String) (conv10_PredOrProcSpecStr_6));
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
        MR_Integer Arity_68;
        MR_String STATE_VARIABLE_U_13_70;
        MR_String STATE_VARIABLE_U_15_72;
        MR_Box conv23_STATE_VARIABLE_U_13_70;
        void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv25_STATE_VARIABLE_U_15_72;
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv27_PredOrProcSpecStr_6;

        Arity_68 = (MR_Integer) (PredArity_9);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv23_STATE_VARIABLE_U_13_70);
        STATE_VARIABLE_U_13_70 = ((MR_String) (conv23_STATE_VARIABLE_U_13_70));
        func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_70)), &conv25_STATE_VARIABLE_U_15_72);
        STATE_VARIABLE_U_15_72 = ((MR_String) (conv25_STATE_VARIABLE_U_15_72));
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
        func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_68)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_72)), &conv27_PredOrProcSpecStr_6);
        PredOrProcSpecStr_6 = ((MR_String) (conv27_PredOrProcSpecStr_6));
      }
      break;
  }
  return PredOrProcSpecStr_6;
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_5_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word Lang_6,
  MR_Word FPEInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22)
{
  MR_Word ForeignLang_11 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word PredNameModesPF_12 = ((MR_Word) ((MR_hl_field(0, FPEInfo_7, (MR_Integer) 2))));
  MR_String ExportName_13 = ((MR_String) ((MR_hl_field(0, FPEInfo_7, (MR_Integer) 3))));
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, FPEInfo_7, (MR_Integer) 4))));
  MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_12, (MR_Integer) 1))));
  MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_12, (MR_Integer) 2))));
  MR_Word InstVarSet_18;
  MR_Box STATE_VARIABLE_U_24_24;
  MR_Box STATE_VARIABLE_U_25_25;
  MR_Box STATE_VARIABLE_U_27_27;
  MR_Box STATE_VARIABLE_U_28_28;
  MR_Box STATE_VARIABLE_U_34_34;
  MR_Box STATE_VARIABLE_U_41_41;
  MR_Box STATE_VARIABLE_U_42_42;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), S_8, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_24_24);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_output_44, ForeignLang_11, S_8, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_27_27);
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_44, SymName_16, S_8, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_28_28);
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_14, &InstVarSet_18);
  switch (PredOrFunc_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_19;
        MR_Word RetMode_20;
        MR_Box STATE_VARIABLE_U_30_30;
        MR_Box STATE_VARIABLE_U_31_31;
        MR_Box STATE_VARIABLE_U_33_33;
        MR_Box conv2_RetMode_20;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &ArgModes_19, &conv2_RetMode_20);
        RetMode_20 = ((MR_Word) (conv2_RetMode_20));
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_44, Lang_6, InstVarSet_18, ArgModes_19, S_8, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ") = ")), S_8, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_44, Lang_6, InstVarSet_18, RetMode_20, S_8, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_34_34);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box STATE_VARIABLE_U_36_36;
        MR_Box STATE_VARIABLE_U_37_37;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_5(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_36_36);
        parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_44, Lang_6, InstVarSet_18, Modes_17, S_8, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_37_37);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_34_34);
      }
      break;
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_41_41);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
  func_8(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) (ExportName_13)), S_8, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_42_42);
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5))));
  func_9(((MR_Box) (TypeClassInfo_for_output_44)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_42_42, STATE_VARIABLE_U_22);
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
  MR_Word TypeClassInfo_for_output_51,
  MR_Word Lang_6,
  MR_Word FPInfo_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  MR_Word TypeInfo_16_67;
  MR_Word Attributes_10 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 0))));
  MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 1))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Vars0_13 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 3))));
  MR_Word ProgVarSet_14 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 4))));
  MR_Word InstVarSet_15 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 5))));
  MR_Word PragmaCode_16 = ((MR_Word) ((MR_hl_field(0, FPInfo_7, (MR_Integer) 6))));
  MR_Word ForeignLang_17;
  MR_String C_Code_23;
  MR_Box STATE_VARIABLE_U_28_28;
  MR_Box STATE_VARIABLE_U_29_29;
  MR_Box STATE_VARIABLE_U_31_31;
  MR_Box STATE_VARIABLE_U_32_32;
  MR_Box STATE_VARIABLE_U_43_43;
  MR_Box STATE_VARIABLE_U_45_45;
  MR_Box STATE_VARIABLE_U_46_46;
  MR_Box STATE_VARIABLE_U_48_48;
  MR_Box STATE_VARIABLE_U_49_49;
  MR_Box STATE_VARIABLE_U_13_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Box STATE_VARIABLE_U_17_58;
  MR_Box STATE_VARIABLE_U_11_62;
  MR_Box STATE_VARIABLE_U_12_63;
  MR_Word Var_65;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), S_8, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
  ForeignLang_17 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_10);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(TypeClassInfo_for_output_51, ForeignLang_17, S_8, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_29_29);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_51, PredName_11, S_8, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_32_32);
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Vars_18;
        MR_Box STATE_VARIABLE_U_38_38;
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Box STATE_VARIABLE_U_41_41;
        MR_Word Var_155;
        MR_String VarName_159;
        MR_Word Mode_160;
        MR_Box STATE_VARIABLE_U_30_166;
        MR_Box STATE_VARIABLE_U_32_168;
        MR_Box conv2_Var_155;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars0_13, &Vars_18, &conv2_Var_155);
        Var_155 = ((MR_Word) (conv2_Var_155));
        if ((Vars_18 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_38_38 = STATE_VARIABLE_U_32_32;
        else
        {
          MR_Box STATE_VARIABLE_U_35_35;
          MR_Box STATE_VARIABLE_U_36_36;
          MR_Word Var_77;
          MR_Word Vars_78;
          MR_String VarName_81;
          MR_Word Mode_82;
          MR_Box STATE_VARIABLE_U_30_88;
          MR_Box STATE_VARIABLE_U_32_90;
          MR_Box STATE_VARIABLE_U_33_91;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_3(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_35_35);
          Var_77 = ((MR_Word) ((MR_hl_field(1, Vars_18, (MR_Integer) 0))));
          Vars_78 = ((MR_Word) ((MR_hl_field(1, Vars_18, (MR_Integer) 1))));
          VarName_81 = ((MR_String) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
          Mode_82 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 2))));
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          func_4(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) (VarName_81)), S_8, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_30_88);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          func_5(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_88, &STATE_VARIABLE_U_32_90);
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Mode_82, S_8, STATE_VARIABLE_U_32_90, &STATE_VARIABLE_U_33_91);
          if ((Vars_78 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_36_36 = STATE_VARIABLE_U_33_91;
          else
          {
            MR_Box STATE_VARIABLE_U_35_93;
            MR_Word Var_129;
            MR_Word Vars_130;
            MR_String VarName_133;
            MR_Word Mode_134;
            MR_Box STATE_VARIABLE_U_30_140;
            MR_Box STATE_VARIABLE_U_32_142;
            MR_Box STATE_VARIABLE_U_33_143;
            MR_Box STATE_VARIABLE_U_35_145;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_6(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_91, &STATE_VARIABLE_U_35_93);
            Var_129 = ((MR_Word) ((MR_hl_field(1, Vars_78, (MR_Integer) 0))));
            Vars_130 = ((MR_Word) ((MR_hl_field(1, Vars_78, (MR_Integer) 1))));
            VarName_133 = ((MR_String) ((MR_hl_field(0, Var_129, (MR_Integer) 1))));
            Mode_134 = ((MR_Word) ((MR_hl_field(0, Var_129, (MR_Integer) 2))));
            func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
            func_7(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) (VarName_133)), S_8, STATE_VARIABLE_U_35_93, &STATE_VARIABLE_U_30_140);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
            func_8(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_140, &STATE_VARIABLE_U_32_142);
            parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Mode_134, S_8, STATE_VARIABLE_U_32_142, &STATE_VARIABLE_U_33_143);
            if ((Vars_130 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_U_35_145 = STATE_VARIABLE_U_33_143;
            else
            {
              void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));

              func_9(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_143, &STATE_VARIABLE_U_35_145);
            }
            parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Vars_130, S_8, STATE_VARIABLE_U_35_145, &STATE_VARIABLE_U_36_36);
          }
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          func_10(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
        }
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) " = (")), S_8, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
        VarName_159 = ((MR_String) ((MR_hl_field(0, Var_155, (MR_Integer) 1))));
        Mode_160 = ((MR_Word) ((MR_hl_field(0, Var_155, (MR_Integer) 2))));
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_12(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) (VarName_159)), S_8, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_30_166);
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_13(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_166, &STATE_VARIABLE_U_32_168);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Mode_160, S_8, STATE_VARIABLE_U_32_168, &STATE_VARIABLE_U_41_41);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_14(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
      }
      break;
    case (MR_Integer) 0:
      if ((Vars0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_43_43 = STATE_VARIABLE_U_32_32;
      else
      {
        MR_Box STATE_VARIABLE_U_35_260;
        MR_Box STATE_VARIABLE_U_36_261;
        MR_Word Var_263;
        MR_Word Vars_264;
        MR_String VarName_266;
        MR_Word Mode_267;
        MR_Box STATE_VARIABLE_U_30_269;
        MR_Box STATE_VARIABLE_U_32_271;
        MR_Box STATE_VARIABLE_U_33_272;
        void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_15(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_35_260);
        Var_263 = ((MR_Word) ((MR_hl_field(1, Vars0_13, (MR_Integer) 0))));
        Vars_264 = ((MR_Word) ((MR_hl_field(1, Vars0_13, (MR_Integer) 1))));
        VarName_266 = ((MR_String) ((MR_hl_field(0, Var_263, (MR_Integer) 1))));
        Mode_267 = ((MR_Word) ((MR_hl_field(0, Var_263, (MR_Integer) 2))));
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_16(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) (VarName_266)), S_8, STATE_VARIABLE_U_35_260, &STATE_VARIABLE_U_30_269);
        func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_17(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_269, &STATE_VARIABLE_U_32_271);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Mode_267, S_8, STATE_VARIABLE_U_32_271, &STATE_VARIABLE_U_33_272);
        if ((Vars_264 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_36_261 = STATE_VARIABLE_U_33_272;
        else
        {
          MR_Box STATE_VARIABLE_U_35_232;
          MR_Word Var_233;
          MR_Word Vars_234;
          MR_String VarName_236;
          MR_Word Mode_237;
          MR_Box STATE_VARIABLE_U_30_239;
          MR_Box STATE_VARIABLE_U_32_241;
          MR_Box STATE_VARIABLE_U_33_242;
          MR_Box STATE_VARIABLE_U_35_244;
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_18(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_272, &STATE_VARIABLE_U_35_232);
          Var_233 = ((MR_Word) ((MR_hl_field(1, Vars_264, (MR_Integer) 0))));
          Vars_234 = ((MR_Word) ((MR_hl_field(1, Vars_264, (MR_Integer) 1))));
          VarName_236 = ((MR_String) ((MR_hl_field(0, Var_233, (MR_Integer) 1))));
          Mode_237 = ((MR_Word) ((MR_hl_field(0, Var_233, (MR_Integer) 2))));
          func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          func_19(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) (VarName_236)), S_8, STATE_VARIABLE_U_35_232, &STATE_VARIABLE_U_30_239);
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
          func_20(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) " :: ")), S_8, STATE_VARIABLE_U_30_239, &STATE_VARIABLE_U_32_241);
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Mode_237, S_8, STATE_VARIABLE_U_32_241, &STATE_VARIABLE_U_33_242);
          if ((Vars_234 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_35_244 = STATE_VARIABLE_U_33_242;
          else
          {
            void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));

            func_21(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_33_242, &STATE_VARIABLE_U_35_244);
          }
          parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(TypeClassInfo_for_output_51, Lang_6, InstVarSet_15, Vars_234, S_8, STATE_VARIABLE_U_35_244, &STATE_VARIABLE_U_36_261);
        }
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
        func_22(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_36_261, &STATE_VARIABLE_U_43_43);
      }
      break;
  }
  func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_23(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
  func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_24(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) "[")), S_8, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_13_54);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[1]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_1));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (TypeClassInfo_for_output_51));
  }
  Var_57 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(Attributes_10, ProgVarSet_14);
  func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 26))));
  func_25(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (Var_55)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_57)), S_8, STATE_VARIABLE_U_13_54, &STATE_VARIABLE_U_17_58);
  func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_26(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) "]")), S_8, STATE_VARIABLE_U_17_58, &STATE_VARIABLE_U_46_46);
  func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_27(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ", ")), S_8, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
  C_Code_23 = ((MR_String) ((MR_hl_field(0, PragmaCode_16, (MR_Integer) 0))));
  func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_28(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) "\"")), S_8, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_11_62);
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_5_p_0_2));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeClassInfo_for_output_51));
    MR_hl_field(0, Var_65, 4) = S_8;
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_output_51, (MR_Integer) 2, &TypeInfo_16_67);
  mercury__string__foldl_4_p_0(TypeInfo_16_67, Var_65, C_Code_23, STATE_VARIABLE_U_11_62, &STATE_VARIABLE_U_12_63);
  func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_29(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) "\"")), S_8, STATE_VARIABLE_U_12_63, &STATE_VARIABLE_U_49_49);
  func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_51, (MR_Integer) 0)), (MR_Integer) 5))));
  func_30(((MR_Box) (TypeClassInfo_for_output_51)), ((MR_Box) ((MR_String) ").\n")), S_8, STATE_VARIABLE_U_49_49, STATE_VARIABLE_U_26);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_output_36,
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_U_0_6;

      func_0(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (VarName_23)), HeadVar__5_5, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_30_30);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) " :: ")), HeadVar__5_5, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_36, Lang_1, InstVarSet_3, Mode_24, HeadVar__5_5, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
      if ((Vars_19 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_U_35_35 = STATE_VARIABLE_U_33_33;
      else
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ", ")), HeadVar__5_5, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
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
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_2(
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
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
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
  TabledForIOStr_26 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[0 + TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
  switch (Purity_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      PurityStrList_27 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      PurityStrList_27 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[2]));
      break;
    case (MR_Integer) 1:
      PurityStrList_27 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[3]));
      break;
  }
  switch (Terminates_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      TerminatesStrList_28 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      TerminatesStrList_28 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[4]));
      break;
    case (MR_Integer) 0:
      TerminatesStrList_28 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[5]));
      break;
  }
  if ((UserSharing_12 == (MR_Word) ((MR_Unsigned) 0U)))
    UserSharingStrList_32 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Sharing_29 = ((MR_Word) ((MR_hl_field(1, UserSharing_12, (MR_Integer) 0))));
    MR_Word MaybeTypes_30 = ((MR_Word) ((MR_hl_field(1, UserSharing_12, (MR_Integer) 1))));
    MR_String String_31;

    switch (MR_tag((MR_Word) Sharing_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_31 = (MR_String) "no_sharing";
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingPairs_111 = ((MR_Word) ((MR_hl_field(1, Sharing_29, (MR_Integer) 0))));
          MR_Word TypeVarSet_113;
          MR_String MaybeTypesStr_116;
          MR_Word SharingPairStrs_117;
          MR_String SharingPairListStr_118;
          MR_Word Var_126;
          MR_Word Var_128;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_133;

          if ((MaybeTypes_30 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeTypesStr_116 = (MR_String) "no";
            TypeVarSet_113 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
          }
          else
          {
            MR_Word Types_112;
            MR_Word TypeStrs_114;
            MR_String TypeListStr_115;
            MR_Word Var_119 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_30, (MR_Integer) 0))));
            MR_Word Var_120;
            MR_String Var_124;

            Types_112 = ((MR_Word) ((MR_hl_field(0, Var_119, (MR_Integer) 0))));
            TypeVarSet_113 = ((MR_Word) ((MR_hl_field(0, Var_119, (MR_Integer) 1))));
            {
              Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_120, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[0]));
              MR_hl_field(0, Var_120, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1));
              MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_120, 3) = ((MR_Box) (TypeVarSet_113));
              MR_hl_field(0, Var_120, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            TypeStrs_114 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_120, Types_112);
            TypeListStr_115 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_114);
            Var_124 = mercury__string__f_43_43_2_f_0(TypeListStr_115, (MR_String) ")");
            MaybeTypesStr_116 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", Var_124);
          }
          {
            Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_126, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[1]));
            MR_hl_field(0, Var_126, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_2));
            MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_126, 3) = ((MR_Box) (VarSet_5));
            MR_hl_field(0, Var_126, 4) = ((MR_Box) (TypeVarSet_113));
          }
          SharingPairStrs_117 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_126, SharingPairs_111);
          SharingPairListStr_118 = mercury__string__join_list_2_f_0((MR_String) ", ", SharingPairStrs_117);
          {
            Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_133, 0) = ((MR_Box) (SharingPairListStr_118));
            MR_hl_field(1, Var_133, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[25])));
          }
          {
            Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_131, 0) = ((MR_Box) ((MR_String) ", ["));
            MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_133));
          }
          {
            Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_130, 0) = ((MR_Box) (MaybeTypesStr_116));
            MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
          }
          {
            Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_128, 0) = ((MR_Box) ((MR_String) "sharing("));
            MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_130));
          }
          String_31 = mercury__string__append_list_1_f_0(Var_128);
        }
        break;
      case (MR_Integer) 2:
        String_31 = (MR_String) "unknown_sharing";
        break;
    }
    {
      UserSharingStrList_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UserSharingStrList_32, 0) = ((MR_Box) (String_31));
      MR_hl_field(1, UserSharingStrList_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  switch (Exceptions_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ExceptionsStrList_33 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      ExceptionsStrList_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[6]));
      break;
  }
  switch (OrdinaryDespiteDetism_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      OrdinaryDespiteDetismStrList_34 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      OrdinaryDespiteDetismStrList_34 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[7]));
      break;
  }
  switch (MayModifyTrail_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MayModifyTrailStrList_35 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[8]));
      break;
    case (MR_Integer) 1:
      MayModifyTrailStrList_35 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[9]));
      break;
  }
  switch (MayCallMM_Tabled_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      MayCallMM_TabledStrList_36 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      MayCallMM_TabledStrList_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[10]));
      break;
    case (MR_Integer) 1:
      MayCallMM_TabledStrList_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[11]));
      break;
  }
  switch (BoxPolicy_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      BoxPolicyStrList_37 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[12]));
      break;
    case (MR_Integer) 0:
      BoxPolicyStrList_37 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  switch (AffectsLiveness_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AffectsLivenessStrList_38 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[13]));
      break;
    case (MR_Integer) 2:
      AffectsLivenessStrList_38 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      AffectsLivenessStrList_38 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[14]));
      break;
  }
  AllocatesMemoryStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_10[0 + AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_10_0__vct_10_f_0;
  RegistersRootsStrList_40 = ((&parse_tree__parse_tree_out_pragma_vector_common_10[4 + RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_10_0__vct_10_f_0;
  if ((MaybeMayDuplicate_21 == (MR_Word) ((MR_Unsigned) 0U)))
    MayDuplicateStrList_42 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MayDuplicate_41 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_21, (MR_Integer) 0))));

    switch (MayDuplicate_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayDuplicateStrList_42 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[21]));
        break;
      case (MR_Integer) 1:
        MayDuplicateStrList_42 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[22]));
        break;
    }
  }
  if ((MaybeMayExportBody_22 == (MR_Word) ((MR_Unsigned) 0U)))
    MayExportBodyStrList_44 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MayExportBody_43 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_22, (MR_Integer) 0))));

    switch (MayExportBody_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayExportBodyStrList_44 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[23]));
        break;
      case (MR_Integer) 1:
        MayExportBodyStrList_44 = (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pragma_scalar_common_2[24]));
        break;
    }
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (TabledForIOStr_26));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (PurityStrList_27));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (ThreadSafeStr_25));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (MayCallMercuryStr_24));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
  }
  Var_107 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[10]), ExtraAttributes_23);
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
  MR_String LangStr_10;
  MR_String LorIStr_11;

  LangStr_10 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_8);
  if (((MR_tag((MR_Word) LiteralOrInclude_9)) == (MR_Integer) 1))
  {
    MR_String FileName_32 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_9, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_U_14_34;
    MR_String STATE_VARIABLE_U_15_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_U_14_34;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_15_35;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_LorIStr_11;

    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_14_34);
    STATE_VARIABLE_U_14_34 = ((MR_String) (conv1_STATE_VARIABLE_U_14_34));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 21))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (FileName_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_34)), &conv3_STATE_VARIABLE_U_15_35);
    STATE_VARIABLE_U_15_35 = ((MR_String) (conv3_STATE_VARIABLE_U_15_35));
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_35)), &conv5_LorIStr_11);
    LorIStr_11 = ((MR_String) (conv5_LorIStr_11));
  }
  else
  {
    MR_Word TypeInfo_16_43;
    MR_String Code_31 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_9, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_U_11_38;
    MR_String STATE_VARIABLE_U_12_39;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv7_STATE_VARIABLE_U_11_38;
    MR_Box conv8_STATE_VARIABLE_U_12_39;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_LorIStr_11;

    func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv7_STATE_VARIABLE_U_11_38);
    STATE_VARIABLE_U_11_38 = ((MR_String) (conv7_STATE_VARIABLE_U_11_38));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 2, &TypeInfo_16_43);
    mercury__string__foldl_4_p_0(TypeInfo_16_43, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_5[4]), Code_31, ((MR_Box) (STATE_VARIABLE_U_11_38)), &conv8_STATE_VARIABLE_U_12_39);
    STATE_VARIABLE_U_12_39 = ((MR_String) (conv8_STATE_VARIABLE_U_12_39));
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_39)), &conv10_LorIStr_11);
    LorIStr_11 = ((MR_String) (conv10_LorIStr_11));
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma foreign_code(");
  mercury__io__write_string_4_p_0(Stream_5, LangStr_10);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_5, LorIStr_11);
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
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_U_14_15;
  MR_Box conv2_STATE_VARIABLE_U_15_16;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_17_18;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_23_23;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_STATE_VARIABLE_IO_9;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_14_15);
  parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), Lang_11, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_15_16);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_17_18);
  switch (IsLocal_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv6_STATE_VARIABLE_U_19_20;

        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_19_20);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv8_STATE_VARIABLE_U_19_20;

        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "local")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_19_20);
      }
      break;
  }
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_23_23);
  if (((MR_tag((MR_Word) LiteralOrInclude_13)) == (MR_Integer) 1))
  {
    MR_String FileName_27 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_13, (MR_Integer) 0))));
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv12_STATE_VARIABLE_U_14_29;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_15_30;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_24_24;

    func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_14_29);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 21))));
    func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (FileName_27)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_15_30);
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_24_24);
  }
  else
  {
    MR_Word TypeInfo_16_38;
    MR_String Code_26 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_13, (MR_Integer) 0))));
    MR_Word Var_36;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv18_STATE_VARIABLE_U_11_33;
    MR_Box conv19_STATE_VARIABLE_U_12_34;
    void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv21_STATE_VARIABLE_U_24_24;

    func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_11_33);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_7[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_4_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (Stream_5));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 2, &TypeInfo_16_38);
    mercury__string__foldl_4_p_0(TypeInfo_16_38, Var_36, Code_26, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_12_34);
    func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_24_24);
  }
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_9);
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv13_Str_4;

  conv13_Str_4 = parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv13_Str_4));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_decl_pragma_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemDeclPragma_8)
{
  MR_Word Pragma_10 = ((MR_Word) ((MR_hl_field(0, ItemDeclPragma_8, (MR_Integer) 0))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, ItemDeclPragma_8, (MR_Integer) 1))));
  MR_Word Lang_13;

  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_11, Stream_7);
  Lang_13 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Info_6);
  switch (MR_tag((MR_Word) Pragma_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObsPredInfo_14 = (MR_Word) ((MR_Word) (Pragma_10));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_pred_4_p_0(Stream_7, ObsPredInfo_14);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ObsProcInfo_15 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 1));

        parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0(Stream_7, Lang_13, ObsProcInfo_15);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FormatCallInfo_16 = (MR_Word) (MR_body((MR_Word) (Pragma_10), (MR_Integer) 2));
        MR_Word PredSpec_50 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_16, (MR_Integer) 0))));
        MR_Word OoMFormatArgsSpecs_51 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_16, (MR_Integer) 1))));
        MR_Word PF_52 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_50, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word PredName_53 = ((MR_Word) ((MR_hl_field(0, PredSpec_50, (MR_Integer) 1))));
        MR_Word Arity_54 = ((MR_Word) ((MR_hl_field(0, PredSpec_50, (MR_Integer) 2))));
        MR_String PredStr_55;
        MR_Word HeadFormatArgsSpec_56;
        MR_Word TailFormatArgsSpecs_57;
        MR_String SecondArgStr_58;
        MR_String Var_79;
        MR_String STATE_VARIABLE_U_15_80;
        MR_String STATE_VARIABLE_U_17_82;
        MR_String STATE_VARIABLE_U_18_83;
        MR_Integer Arity_85;
        MR_String STATE_VARIABLE_U_13_87;
        MR_String STATE_VARIABLE_U_15_89;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_15_80;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_17_82;
        MR_Box conv6_STATE_VARIABLE_U_13_87;
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv8_STATE_VARIABLE_U_15_89;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv10_STATE_VARIABLE_U_18_83;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv12_PredStr_55;

        Var_79 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PF_52);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_79)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv3_STATE_VARIABLE_U_15_80);
        STATE_VARIABLE_U_15_80 = ((MR_String) (conv3_STATE_VARIABLE_U_15_80));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_80)), &conv5_STATE_VARIABLE_U_17_82);
        STATE_VARIABLE_U_17_82 = ((MR_String) (conv5_STATE_VARIABLE_U_17_82));
        Arity_85 = (MR_Integer) (Arity_54);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_53, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_82)), &conv6_STATE_VARIABLE_U_13_87);
        STATE_VARIABLE_U_13_87 = ((MR_String) (conv6_STATE_VARIABLE_U_13_87));
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_87)), &conv8_STATE_VARIABLE_U_15_89);
        STATE_VARIABLE_U_15_89 = ((MR_String) (conv8_STATE_VARIABLE_U_15_89));
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
        func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_85)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_89)), &conv10_STATE_VARIABLE_U_18_83);
        STATE_VARIABLE_U_18_83 = ((MR_String) (conv10_STATE_VARIABLE_U_18_83));
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_83)), &conv12_PredStr_55);
        PredStr_55 = ((MR_String) (conv12_PredStr_55));
        HeadFormatArgsSpec_56 = ((MR_Word) ((MR_hl_field(0, OoMFormatArgsSpecs_51, (MR_Integer) 0))));
        TailFormatArgsSpecs_57 = ((MR_Word) ((MR_hl_field(0, OoMFormatArgsSpecs_51, (MR_Integer) 1))));
        if ((TailFormatArgsSpecs_57 == (MR_Word) ((MR_Unsigned) 0U)))
          SecondArgStr_58 = parse_tree__parse_tree_out_pragma__format_string_values_to_string_1_f_0(HeadFormatArgsSpec_56);
        else
        {
          MR_Word ArgsSpecsStrs_59;
          MR_String ArgsSpecsStr_60;
          MR_Word Var_62;
          MR_String Var_67;

          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (HeadFormatArgsSpec_56));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (TailFormatArgsSpecs_57));
          }
          ArgsSpecsStrs_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[9]), Var_62);
          ArgsSpecsStr_60 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsSpecsStrs_59);
          Var_67 = mercury__string__f_43_43_2_f_0(ArgsSpecsStr_60, (MR_String) "]");
          SecondArgStr_58 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_67);
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- pragma format_call(");
        mercury__io__write_string_4_p_0(Stream_7, PredStr_55);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", [");
        mercury__io__write_string_4_p_0(Stream_7, SecondArgStr_58);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]).\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecInfo_17 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(Stream_7, Lang_13, TypeSpecInfo_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OISUInfo_18 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(Stream_7, OISUInfo_18);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredSpec_19 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv14_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "terminates", PredSpec_19, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word PredSpec_45 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "does_not_terminate", PredSpec_45, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word PredSpec_46 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));
            MR_Box conv0_STATE_VARIABLE_IO_25;

            parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_String) "check_termination", PredSpec_46, (MR_String) "", ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TermInfo_20 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(Stream_7, Lang_13, TermInfo_20);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Term2Info_21 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(Stream_7, Lang_13, Term2Info_21);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word SharingInfo_22 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(Stream_7, Lang_13, SharingInfo_22);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ReuseInfo_23 = ((MR_Word) ((MR_hl_field(3, Pragma_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(Stream_7, Lang_13, ReuseInfo_23);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_4_p_0(
  MR_Word Stream_5,
  MR_Word OISUInfo_6)
{
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, OISUInfo_6, (MR_Integer) 0))));
  MR_Word CreatorPreds_12 = ((MR_Word) ((MR_hl_field(0, OISUInfo_6, (MR_Integer) 1))));
  MR_Word MutatorPreds_13 = ((MR_Word) ((MR_hl_field(0, OISUInfo_6, (MR_Integer) 2))));
  MR_Word DestructorPreds_14 = ((MR_Word) ((MR_hl_field(0, OISUInfo_6, (MR_Integer) 3))));
  MR_Word TypeName_15;
  MR_Integer TypeArity_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_U_17_18;
  MR_Box conv2_STATE_VARIABLE_U_19_20;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_U_21_22;
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv6_STATE_VARIABLE_U_22_23;
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv8_STATE_VARIABLE_U_24_25;
  void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv10_STATE_VARIABLE_U_26_27;
  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv13_STATE_VARIABLE_U_29_30;
  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv15_STATE_VARIABLE_U_31_32;
  void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv18_STATE_VARIABLE_U_34_35;
  void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv20_STATE_VARIABLE_U_36_37;
  void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv23_STATE_VARIABLE_U_39_40;
  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv25_STATE_VARIABLE_IO_9;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_17_18);
  TypeName_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 0))));
  TypeArity_16 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, TypeName_15, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_19_20);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_21_22);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
  func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (TypeArity_16)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_22_23);
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_24_25);
  func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_26_27);
  if (!((CreatorPreds_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredSpec_45 = ((MR_Word) ((MR_hl_field(1, CreatorPreds_12, (MR_Integer) 0))));
    MR_Word PredSpecs_46 = ((MR_Word) ((MR_hl_field(1, CreatorPreds_12, (MR_Integer) 1))));
    MR_Box conv11_STATE_VARIABLE_U_27_28;

    parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredSpec_45, PredSpecs_46, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_27_28);
  }
  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_29_30);
  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_31_32);
  if (!((MutatorPreds_13 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredSpec_53 = ((MR_Word) ((MR_hl_field(1, MutatorPreds_13, (MR_Integer) 0))));
    MR_Word PredSpecs_54 = ((MR_Word) ((MR_hl_field(1, MutatorPreds_13, (MR_Integer) 1))));
    MR_Box conv16_STATE_VARIABLE_U_32_33;

    parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredSpec_53, PredSpecs_54, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_32_33);
  }
  func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_34_35);
  func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_36_37);
  if (!((DestructorPreds_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredSpec_61 = ((MR_Word) ((MR_hl_field(1, DestructorPreds_14, (MR_Integer) 0))));
    MR_Word PredSpecs_62 = ((MR_Word) ((MR_hl_field(1, DestructorPreds_14, (MR_Integer) 1))));
    MR_Box conv21_STATE_VARIABLE_U_37_38;

    parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), PredSpec_61, PredSpecs_62, ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_37_38);
  }
  func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_39_40);
  func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_pf_name_arity_list_lag_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "\t\t")), S_8, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
    PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_11 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 1))));
    UserArity_12 = ((MR_Word) ((MR_hl_field(0, PredSpec_6, (MR_Integer) 2))));
    Var_25 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_10);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) (Var_25)), S_8, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_15_26);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_15_26, &STATE_VARIABLE_U_17_28);
    Arity_31 = (MR_Integer) (UserArity_12);
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_24, (MR_Integer) 0, PredName_11, S_8, STATE_VARIABLE_U_17_28, &STATE_VARIABLE_U_13_33);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "/")), S_8, STATE_VARIABLE_U_13_33, &STATE_VARIABLE_U_15_35);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 8))));
    func_4(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) (Arity_31)), S_8, STATE_VARIABLE_U_15_35, &STATE_VARIABLE_U_18_29);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_18_29, &STATE_VARIABLE_U_19_19);
    if ((PredSpecs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));

      func_6(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "\n")), S_8, STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_16);
    }
    else
    {
      MR_Word HeadPredSpec_13 = ((MR_Word) ((MR_hl_field(1, PredSpecs_7, (MR_Integer) 0))));
      MR_Word TailPredSpecs_14 = ((MR_Word) ((MR_hl_field(1, PredSpecs_7, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_23_23;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_PredSpec_6;
      MR_Word next_value_of_PredSpecs_7;
      MR_Box next_value_of_STATE_VARIABLE_U_0_15;

      func_7(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ",\n")), S_8, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_23_23);
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

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), OrigVL_6, &Var_16);
  Var_23 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) ")");
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_23);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), OrigFS_5, &Var_26);
  Var_33 = mercury__string__f_43_43_2_f_0(Var_26, Var_25);
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "format_string_values(", Var_33);
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Str_4;

  conv1_Str_4 = parse_tree__parse_tree_out_pragma__wrapped_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_obsolete_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ObsoleteProcInfo_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_8, (MR_Integer) 0))));
  MR_Word ObsoleteInFavourOf_11 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_8, (MR_Integer) 1))));
  MR_String PredStr_12;
  MR_Word ObsoleteStrs_13;
  MR_String ObsoleteStr_14;
  MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_38 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_39 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
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
        PredStr_12 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_40, SymName_38, FuncArgModes_42, ReturnArgMode_43, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_12 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_40, SymName_38, Modes_39, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  ObsoleteStrs_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[8]), ObsoleteInFavourOf_11);
  ObsoleteStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", ObsoleteStrs_13);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma obsolete_proc(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_12);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", [");
  mercury__io__write_string_4_p_0(Stream_6, ObsoleteStr_14);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]).\n");
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
  MR_Word ObsoletePredInfo_6)
{
  MR_Word PredSpec_8 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_6, (MR_Integer) 0))));
  MR_Word ObsoleteInFavourOf_9 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_6, (MR_Integer) 1))));
  MR_Word PFU_10 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 1))));
  MR_Word Arity_12 = ((MR_Word) ((MR_hl_field(0, PredSpec_8, (MR_Integer) 2))));
  MR_String PredStr_13;
  MR_Word ObsoleteStrs_14;
  MR_String ObsoleteStr_15;

  switch (PFU_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_43;
        MR_String STATE_VARIABLE_U_15_44;
        MR_String STATE_VARIABLE_U_17_46;
        MR_String STATE_VARIABLE_U_18_47;
        MR_Integer Arity_49;
        MR_String STATE_VARIABLE_U_13_51;
        MR_String STATE_VARIABLE_U_15_53;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_15_44;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_17_46;
        MR_Box conv4_STATE_VARIABLE_U_13_51;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv6_STATE_VARIABLE_U_15_53;
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv8_STATE_VARIABLE_U_18_47;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv10_PredStr_13;

        Var_43 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_43)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_15_44);
        STATE_VARIABLE_U_15_44 = ((MR_String) (conv1_STATE_VARIABLE_U_15_44));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_44)), &conv3_STATE_VARIABLE_U_17_46);
        STATE_VARIABLE_U_17_46 = ((MR_String) (conv3_STATE_VARIABLE_U_17_46));
        Arity_49 = (MR_Integer) (Arity_12);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_46)), &conv4_STATE_VARIABLE_U_13_51);
        STATE_VARIABLE_U_13_51 = ((MR_String) (conv4_STATE_VARIABLE_U_13_51));
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_51)), &conv6_STATE_VARIABLE_U_15_53);
        STATE_VARIABLE_U_15_53 = ((MR_String) (conv6_STATE_VARIABLE_U_15_53));
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
        func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_49)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_53)), &conv8_STATE_VARIABLE_U_18_47);
        STATE_VARIABLE_U_18_47 = ((MR_String) (conv8_STATE_VARIABLE_U_18_47));
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_47)), &conv10_PredStr_13);
        PredStr_13 = ((MR_String) (conv10_PredStr_13));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_54;
        MR_String STATE_VARIABLE_U_15_55;
        MR_String STATE_VARIABLE_U_17_57;
        MR_String STATE_VARIABLE_U_18_58;
        MR_Integer Arity_60;
        MR_String STATE_VARIABLE_U_13_62;
        MR_String STATE_VARIABLE_U_15_64;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv12_STATE_VARIABLE_U_15_55;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv14_STATE_VARIABLE_U_17_57;
        MR_Box conv15_STATE_VARIABLE_U_13_62;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_U_15_64;
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv19_STATE_VARIABLE_U_18_58;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv21_PredStr_13;

        Var_54 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Var_54)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv12_STATE_VARIABLE_U_15_55);
        STATE_VARIABLE_U_15_55 = ((MR_String) (conv12_STATE_VARIABLE_U_15_55));
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_55)), &conv14_STATE_VARIABLE_U_17_57);
        STATE_VARIABLE_U_17_57 = ((MR_String) (conv14_STATE_VARIABLE_U_17_57));
        Arity_60 = (MR_Integer) (Arity_12);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_57)), &conv15_STATE_VARIABLE_U_13_62);
        STATE_VARIABLE_U_13_62 = ((MR_String) (conv15_STATE_VARIABLE_U_13_62));
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_16(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_62)), &conv17_STATE_VARIABLE_U_15_64);
        STATE_VARIABLE_U_15_64 = ((MR_String) (conv17_STATE_VARIABLE_U_15_64));
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
        func_18(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_60)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_64)), &conv19_STATE_VARIABLE_U_18_58);
        STATE_VARIABLE_U_18_58 = ((MR_String) (conv19_STATE_VARIABLE_U_18_58));
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_58)), &conv21_PredStr_13);
        PredStr_13 = ((MR_String) (conv21_PredStr_13));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_65 = (MR_Integer) (Arity_12);
        MR_String STATE_VARIABLE_U_13_67;
        MR_String STATE_VARIABLE_U_15_69;
        MR_Box conv22_STATE_VARIABLE_U_13_67;
        void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv24_STATE_VARIABLE_U_15_69;
        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv26_PredStr_13;

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0, PredName_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv22_STATE_VARIABLE_U_13_67);
        STATE_VARIABLE_U_13_67 = ((MR_String) (conv22_STATE_VARIABLE_U_13_67));
        func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_23(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_67)), &conv24_STATE_VARIABLE_U_15_69);
        STATE_VARIABLE_U_15_69 = ((MR_String) (conv24_STATE_VARIABLE_U_15_69));
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
        func_25(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))), ((MR_Box) (Arity_65)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_69)), &conv26_PredStr_13);
        PredStr_13 = ((MR_String) (conv26_PredStr_13));
      }
      break;
  }
  ObsoleteStrs_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[7]), ObsoleteInFavourOf_9);
  ObsoleteStr_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ObsoleteStrs_14);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- pragma obsolete(");
  mercury__io__write_string_4_p_0(Stream_5, PredStr_13);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", [");
  mercury__io__write_string_4_p_0(Stream_5, ObsoleteStr_15);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]).\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_decl_pred_pfu_name_arity_6_p_0(
  MR_Word TypeClassInfo_for_output_25,
  MR_String PragmaName_7,
  MR_Word PredSpec0_8,
  MR_String AfterStr_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  MR_Word PFU_12;
  MR_Word PredName_13;
  MR_Word Arity_14;
  MR_Box STATE_VARIABLE_U_18_18;
  MR_Box STATE_VARIABLE_U_19_19;
  MR_Box STATE_VARIABLE_U_21_21;
  MR_Box STATE_VARIABLE_U_22_22;
  MR_Box STATE_VARIABLE_U_23_23;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ":- pragma ")), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (PragmaName_7)), S_10, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_19_19);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
  PFU_12 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec0_8, (MR_Integer) 0))) & (MR_Integer) 3);
  PredName_13 = ((MR_Word) ((MR_hl_field(0, PredSpec0_8, (MR_Integer) 1))));
  Arity_14 = ((MR_Word) ((MR_hl_field(0, PredSpec0_8, (MR_Integer) 2))));
  switch (PFU_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_28;
        MR_Box STATE_VARIABLE_U_15_29;
        MR_Box STATE_VARIABLE_U_17_31;
        MR_Box STATE_VARIABLE_U_18_32;
        MR_Integer Arity_34;
        MR_Box STATE_VARIABLE_U_13_36;
        MR_Box STATE_VARIABLE_U_15_38;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_28 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Var_28)), S_10, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_15_29);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_15_29, &STATE_VARIABLE_U_17_31);
        Arity_34 = (MR_Integer) (Arity_14);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_25, (MR_Integer) 0, PredName_13, S_10, STATE_VARIABLE_U_17_31, &STATE_VARIABLE_U_13_36);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_36, &STATE_VARIABLE_U_15_38);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 8))));
        func_6(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Arity_34)), S_10, STATE_VARIABLE_U_15_38, &STATE_VARIABLE_U_18_32);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_18_32, &STATE_VARIABLE_U_22_22);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_39;
        MR_Box STATE_VARIABLE_U_15_40;
        MR_Box STATE_VARIABLE_U_17_42;
        MR_Box STATE_VARIABLE_U_18_43;
        MR_Integer Arity_45;
        MR_Box STATE_VARIABLE_U_13_47;
        MR_Box STATE_VARIABLE_U_15_49;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_39 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Var_39)), S_10, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_15_40);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_9(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_15_40, &STATE_VARIABLE_U_17_42);
        Arity_45 = (MR_Integer) (Arity_14);
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_25, (MR_Integer) 0, PredName_13, S_10, STATE_VARIABLE_U_17_42, &STATE_VARIABLE_U_13_47);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_10(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_47, &STATE_VARIABLE_U_15_49);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 8))));
        func_11(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Arity_45)), S_10, STATE_VARIABLE_U_15_49, &STATE_VARIABLE_U_18_43);
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_12(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_18_43, &STATE_VARIABLE_U_22_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_50 = (MR_Integer) (Arity_14);
        MR_Box STATE_VARIABLE_U_13_52;
        MR_Box STATE_VARIABLE_U_15_54;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_25, (MR_Integer) 0, PredName_13, S_10, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_13_52);
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
        func_13(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) "/")), S_10, STATE_VARIABLE_U_13_52, &STATE_VARIABLE_U_15_54);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 8))));
        func_14(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (Arity_50)), S_10, STATE_VARIABLE_U_15_54, &STATE_VARIABLE_U_22_22);
      }
      break;
  }
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
  func_15(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) (AfterStr_9)), S_10, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
  func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_25, (MR_Integer) 0)), (MR_Integer) 5))));
  func_16(((MR_Box) (TypeClassInfo_for_output_25)), ((MR_Box) ((MR_String) ").\n")), S_10, STATE_VARIABLE_U_23_23, STATE_VARIABLE_U_16);
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0_1(
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
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word ReuseInfo_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_8, (MR_Integer) 0))));
  MR_Word HeadVars_11 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_8, (MR_Integer) 1))));
  MR_Word HeadVarTypes_12 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_8, (MR_Integer) 3))));
  MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_8, (MR_Integer) 4))));
  MR_Word MaybeStructureReuseDomain_15 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_8, (MR_Integer) 5))));
  MR_String PredStr_16;
  MR_Word Var_27;
  MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_36 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_37;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_37);
  switch (PredOrFunc_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_39;
        MR_Word ReturnArgMode_40;
        MR_Box conv0_ReturnArgMode_40;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_36, &FuncArgModes_39, &conv0_ReturnArgMode_40);
        ReturnArgMode_40 = ((MR_Word) (conv0_ReturnArgMode_40));
        PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_37, SymName_35, FuncArgModes_39, ReturnArgMode_40, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_37, SymName_35, Modes_36, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma structure_reuse(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  if ((HeadVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars, types");
  else
  {
    MR_Word Var_52;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars(");
    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, HeadVars_11, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "), ");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "types(");
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0_1));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (TVarSet_14));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_52, (MR_String) ", ", HeadVarTypes_12, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (VarSet_13));
  }
  parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_6_p_0(Stream_6, Var_27, TVarSet_14, MaybeStructureReuseDomain_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0_1(
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
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word SharingInfo_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, SharingInfo_8, (MR_Integer) 0))));
  MR_Word HeadVars_11 = ((MR_Word) ((MR_hl_field(0, SharingInfo_8, (MR_Integer) 1))));
  MR_Word HeadVarTypes_12 = ((MR_Word) ((MR_hl_field(0, SharingInfo_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, SharingInfo_8, (MR_Integer) 3))));
  MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(0, SharingInfo_8, (MR_Integer) 4))));
  MR_Word MaybeSharingAs_15 = ((MR_Word) ((MR_hl_field(0, SharingInfo_8, (MR_Integer) 5))));
  MR_String PredStr_16;
  MR_Word Var_27;
  MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_36 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_37;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_37);
  switch (PredOrFunc_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_39;
        MR_Word ReturnArgMode_40;
        MR_Box conv0_ReturnArgMode_40;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_36, &FuncArgModes_39, &conv0_ReturnArgMode_40);
        ReturnArgMode_40 = ((MR_Word) (conv0_ReturnArgMode_40));
        PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_37, SymName_35, FuncArgModes_39, ReturnArgMode_40, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_16 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_37, SymName_35, Modes_36, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma structure_sharing(");
  mercury__io__write_string_4_p_0(Stream_6, PredStr_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  if ((HeadVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars, types");
  else
  {
    MR_Word Var_52;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars(");
    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, HeadVars_11, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "), ");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "types(");
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0_1));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (TVarSet_14));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_52, (MR_String) ", ", HeadVarTypes_12, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (VarSet_13));
  }
  parse_tree__prog_ctgc__print_interface_structure_sharing_domain_6_p_0(Stream_6, Var_27, TVarSet_14, MaybeSharingAs_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ").\n");
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_2(
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
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0_1(
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
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word Term2Info_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, Term2Info_8, (MR_Integer) 0))));
  MR_Word MaybeSuccess_11 = ((MR_Word) ((MR_hl_field(0, Term2Info_8, (MR_Integer) 1))));
  MR_Word MaybeFailure_12 = ((MR_Word) ((MR_hl_field(0, Term2Info_8, (MR_Integer) 2))));
  MR_Word MaybeTermination_13 = ((MR_Word) ((MR_hl_field(0, Term2Info_8, (MR_Integer) 3))));
  MR_String PredStr_14;
  MR_String SuccessStr_15;
  MR_String FailureStr_16;
  MR_String TermStr_17;
  MR_Word PredOrFunc_44 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_45 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_46 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
  MR_Word InstVarSet_47;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_47);
  switch (PredOrFunc_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_49;
        MR_Word ReturnArgMode_50;
        MR_Box conv0_ReturnArgMode_50;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_46, &FuncArgModes_49, &conv0_ReturnArgMode_50);
        ReturnArgMode_50 = ((MR_Word) (conv0_ReturnArgMode_50));
        PredStr_14 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_47, SymName_45, FuncArgModes_49, ReturnArgMode_50, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_14 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_47, SymName_45, Modes_46, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
  if ((MaybeSuccess_11 == (MR_Word) ((MR_Unsigned) 0U)))
    SuccessStr_15 = (MR_String) "not_set";
  else
  {
    MR_Word ArgSizeConstraints_53 = ((MR_Word) ((MR_hl_field(1, MaybeSuccess_11, (MR_Integer) 0))));
    MR_Word ConstraintStrs_54;
    MR_String ConstraintsStr_55;
    MR_String Var_61;

    ConstraintStrs_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[5]), ArgSizeConstraints_53);
    ConstraintsStr_55 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_54);
    Var_61 = mercury__string__f_43_43_2_f_0(ConstraintsStr_55, (MR_String) "])");
    SuccessStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "constraints([", Var_61);
  }
  if ((MaybeFailure_12 == (MR_Word) ((MR_Unsigned) 0U)))
    FailureStr_16 = (MR_String) "not_set";
  else
  {
    MR_Word ArgSizeConstraints_63 = ((MR_Word) ((MR_hl_field(1, MaybeFailure_12, (MR_Integer) 0))));
    MR_Word ConstraintStrs_64;
    MR_String ConstraintsStr_65;
    MR_String Var_71;

    ConstraintStrs_64 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[6]), ArgSizeConstraints_63);
    ConstraintsStr_65 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_64);
    Var_71 = mercury__string__f_43_43_2_f_0(ConstraintsStr_65, (MR_String) "])");
    FailureStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "constraints([", Var_71);
  }
  if ((MaybeTermination_13 == (MR_Word) ((MR_Unsigned) 0U)))
    TermStr_17 = (MR_String) "not_set";
  else
  {
    MR_Word Termination_73 = ((MR_Word) ((MR_hl_field(1, MaybeTermination_13, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Termination_73)) == (MR_Integer) 1))
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

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Word TermInfo_8)
{
  MR_Word PredNameModesPF_10 = ((MR_Word) ((MR_hl_field(0, TermInfo_8, (MR_Integer) 0))));
  MR_Word MaybeArgSize_11 = ((MR_Word) ((MR_hl_field(0, TermInfo_8, (MR_Integer) 1))));
  MR_Word MaybeTermination_12 = ((MR_Word) ((MR_hl_field(0, TermInfo_8, (MR_Integer) 2))));
  MR_String PredStr_13;
  MR_String ArgSizeStr_14;
  MR_String TermStr_15;
  MR_Word PredOrFunc_40 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_41 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 1))));
  MR_Word Modes_42 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_10, (MR_Integer) 2))));
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
        PredStr_13 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_43, SymName_41, FuncArgModes_45, ReturnArgMode_46, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 0:
      PredStr_13 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_43, SymName_41, Modes_42, (MR_Word) ((MR_Unsigned) 0U));
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
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0]), Const_7, &Var_33);
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
  MR_Word TypeSpecInfo_8)
{
  MR_Word PFUMM_10 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_8, (MR_Integer) 0))));
  MR_Word PredName_11 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_8, (MR_Integer) 1))));
  MR_Word TypeSubst_13 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_8, (MR_Integer) 3))));
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_8, (MR_Integer) 4))));
  MR_Word HeadTypeSubst_23;
  MR_Word TailTypeSubsts_24;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- pragma type_spec(");
  switch (MR_tag((MR_Word) PFUMM_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_65 = ((MR_Word) ((MR_hl_field(0, PFUMM_10, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_65)) == (MR_Integer) 1))
        {
          MR_Word Arity_55 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_65, (MR_Integer) 0))));
          MR_String Var_87;
          MR_Integer Arity_93;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_15_88;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_U_17_90;
          MR_Box conv16_STATE_VARIABLE_U_13_95;
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv18_STATE_VARIABLE_U_15_97;
          void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv20_STATE_VARIABLE_U_18_91;
          void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv22_STATE_VARIABLE_IO_31_31;

          Var_87 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 0);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_87)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_15_88);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_14(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_17_90);
          Arity_93 = (MR_Integer) (Arity_55);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_11, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_13_95);
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_15_97);
          func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_19(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_93)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_18_91);
          func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_21(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_31_31);
        }
        else
        {
          MR_String PredStr_59;
          MR_Word Modes_100 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_65, (MR_Integer) 0))));
          MR_Word InstVarSet_101;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_101);
          PredStr_59 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(Lang_7, InstVarSet_101, PredName_11, Modes_100, (MR_Word) ((MR_Unsigned) 0U));
          mercury__io__write_string_4_p_0(Stream_6, PredStr_59);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_16 = ((MR_Word) ((MR_hl_field(1, PFUMM_10, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_16)) == (MR_Integer) 1))
        {
          MR_Word Arity_21 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_16, (MR_Integer) 0))));
          MR_String Var_67;
          MR_Integer Arity_73;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_STATE_VARIABLE_U_15_68;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_17_70;
          MR_Box conv4_STATE_VARIABLE_U_13_75;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv6_STATE_VARIABLE_U_15_77;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_18_71;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_STATE_VARIABLE_IO_31_31;

          Var_67 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0((MR_Integer) 1);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Var_67)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15_68);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_17_70);
          Arity_73 = (MR_Integer) (Arity_21);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_11, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_13_75);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_15_77);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
          func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_73)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_18_71);
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_31_31);
        }
        else
        {
          MR_String PredStr_20;
          MR_Word Modes_80 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_16, (MR_Integer) 0))));
          MR_Word InstVarSet_81;
          MR_Word FuncArgModes_83;
          MR_Word ReturnArgMode_84;
          MR_Box conv11_ReturnArgMode_84;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_81);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_80, &FuncArgModes_83, &conv11_ReturnArgMode_84);
          ReturnArgMode_84 = ((MR_Word) (conv11_ReturnArgMode_84));
          PredStr_20 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(Lang_7, InstVarSet_81, PredName_11, FuncArgModes_83, ReturnArgMode_84, (MR_Word) ((MR_Unsigned) 0U));
          mercury__io__write_string_4_p_0(Stream_6, PredStr_20);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredArity_22 = ((MR_Word) ((MR_hl_field(2, PFUMM_10, (MR_Integer) 0))));
        MR_Integer Arity_107 = (MR_Integer) (PredArity_22);
        MR_Box conv23_STATE_VARIABLE_U_13_109;
        void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv25_STATE_VARIABLE_U_15_111;
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv27_STATE_VARIABLE_IO_31_31;

        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0, PredName_11, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_13_109);
        func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_15_111);
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
        func_26(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))), ((MR_Box) (Arity_107)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_31_31);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  HeadTypeSubst_23 = ((MR_Word) ((MR_hl_field(0, TypeSubst_13, (MR_Integer) 0))));
  TailTypeSubsts_24 = ((MR_Word) ((MR_hl_field(0, TypeSubst_13, (MR_Integer) 1))));
  if ((TailTypeSubsts_24 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_pragma__mercury_output_type_subst_6_p_0(VarSet_14, (MR_Integer) 0, HeadTypeSubst_23, Stream_6);
  else
  {
    MR_Word Var_40;
    MR_Word Var_42;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (VarSet_14));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (HeadTypeSubst_23));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (TailTypeSubsts_24));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pragma_scalar_common_1[2]), Var_40, (MR_String) ", ", Var_42, Stream_6);
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
