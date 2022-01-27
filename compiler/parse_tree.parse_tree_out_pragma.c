/*
** Automatically generated from `parse_tree_out_pragma.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module parse_tree.parse_tree_out_pragma. */
/* :- implementation. */

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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_recursion_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__RequireTR_6);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31,
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_17,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_1[27][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_2[8][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pragma_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_4[6][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_5[3][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[3][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[1][1];


/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[4];

/* sealed */ struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s {
  const MR_Word parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s parse_tree__parse_tree_out_pragma_vector_common_8[8];



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
    ((MR_Box) ((MR_String) "promise_pure")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "promise_semipure")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "does_not_terminate")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "terminates")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "will_not_throw_exception")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "ordinary_despite_detism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "may_modify_trail")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "will_not_modify_trail")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "may_call_mm_tabled")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "will_not_call_mm_tabled")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "always_boxed")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "affects_liveness")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "doesnt_affect_liveness")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "allocates_bounded_memory")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "allocates_unbounded_memory")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "doesnt_allocate_memory")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "doesnt_have_roots")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "doesnt_register_roots")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "registers_roots")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "may_duplicate")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "may_not_duplicate")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "])")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "fast_loose")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_9[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[1])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[2])),
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
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_6[2][8] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_9[2][5] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_10[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pragma_scalar_common_11[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_7_0_s parse_tree__parse_tree_out_pragma_vector_common_7[4] = {
  /* row 0 */   {     (MR_String) "not_tabled_for_io" },
  /* row 1 */   {     (MR_String) "tabled_for_io" },
  /* row 2 */   {     (MR_String) "tabled_for_io_unitize" },
  /* row 3 */   {     (MR_String) "tabled_for_descendant_io" },
};

static /* final */ const struct parse_tree__parse_tree_out_pragma__vector_common_type_8_0_s parse_tree__parse_tree_out_pragma_vector_common_8[8] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[19]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[17]) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[18]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[22]) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[21]) },
  /* row 6 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[20]) },
  /* row 7 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_pragma__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_tree_out_pragma__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pragma__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_1,
  MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_3,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

        if ((parse_tree__parse_tree_out_pragma__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_6 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5;
        else
          {
            MR_Word parse_tree__parse_tree_out_pragma__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_pragma__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__4_4, (MR_Integer) 1)));
            MR_String parse_tree__parse_tree_out_pragma__VarName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 1)));
            MR_Word parse_tree__parse_tree_out_pragma__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 2)));
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32;
            MR_Word parse_tree__parse_tree_out_pragma___Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_16, (MR_Integer) 3)));
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_20)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
            }
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34, parse_tree__parse_tree_out_pragma__Lang_1, parse_tree__parse_tree_out_pragma__InstVarSet_3, parse_tree__parse_tree_out_pragma__Mode_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30);
            }
            if ((parse_tree__parse_tree_out_pragma__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
            else
              {
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_pragma__Vars_17;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32;

              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_5 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_5;
              parse_tree__parse_tree_out_pragma__HeadVar__4_4 = parse_tree__parse_tree_out_pragma__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

    switch (parse_tree__parse_tree_out_pragma__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "concurrency")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 7:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "conservative_gc")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "double_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "memo")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "parallel_conj")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "single_prec_float")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 6:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "strict_sequential")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_44), ((MR_Box) ((MR_String) "trailing")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_required_feature_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17,
  MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0;
    MR_Word parse_tree__parse_tree_out_pragma__Features0_6 = (MR_Word) parse_tree__parse_tree_out_pragma__RFSInfo_4;
    MR_Word parse_tree__parse_tree_out_pragma__Features_7;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11;
    MR_Word parse_tree__parse_tree_out_pragma__V_13_13;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pragma__Features_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18, parse_tree__parse_tree_out_pragma__Features0_6);
    }
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma require_feature_set(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_8, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11);
    }
    {
      parse_tree__parse_tree_out_pragma__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_13_13, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17));
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 19)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeCtorInfo_18_18)), ((MR_Box) (parse_tree__parse_tree_out_pragma__Features_7)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__ArgSizeTerm_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Integer parse_tree__parse_tree_out_pragma__VarId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__Coefficient_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ArgSizeTerm_4, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) "term(");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__VarId_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Coefficient_7);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__write_arg_size_term_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Constraint_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__Terms_6;
    MR_Word parse_tree__parse_tree_out_pragma__Constant_7;
    MR_String parse_tree__parse_tree_out_pragma__OpStr_8;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Constraint_4)) == (MR_mktag((MR_Integer) 1))))
      {
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "eq(";
      }
    else
      {
        parse_tree__parse_tree_out_pragma__Terms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 0)));
        parse_tree__parse_tree_out_pragma__Constant_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Constraint_4, (MR_Integer) 1)));
        parse_tree__parse_tree_out_pragma__OpStr_8 = (MR_String) "le(";
      }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__OpStr_8);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 91);
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0, parse_tree__parse_tree_out_pragma__Terms_6, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[7]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "], ");
    }
    {
      libs__rat__write_rat_3_p_0(parse_tree__parse_tree_out_pragma__Constant_7);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_2(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__write_arg_size_constr_3_p_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__Term2Info_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredModesPF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSuccess_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeFailure_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Term2Info_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__PredName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredModesPF_8, (MR_Integer) 2)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_15;
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_16;
          MR_Word parse_tree__parse_tree_out_pragma__V_21_21;
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_16;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_13, &parse_tree__parse_tree_out_pragma__FuncModeList_15, &parse_tree__parse_tree_out_pragma__conv0_RetMode_16);
          }
          parse_tree__parse_tree_out_pragma__RetMode_16 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_16);
          {
            parse_tree__parse_tree_out_pragma__V_21_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__V_21_21, parse_tree__parse_tree_out_pragma__PredName_12, parse_tree__parse_tree_out_pragma__FuncModeList_15, parse_tree__parse_tree_out_pragma__RetMode_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_out_pragma__V_24_24;

          {
            parse_tree__parse_tree_out_pragma__V_24_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__V_24_24, parse_tree__parse_tree_out_pragma__PredName_12, parse_tree__parse_tree_out_pragma__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeSuccess_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSuccess_9, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_46, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[5]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeFailure_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__ArgSizeInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeFailure_10, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "constaints(");
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 91);
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0, parse_tree__parse_tree_out_pragma__ArgSizeInfo_68, (MR_String) ", ", (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[6]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeTermination_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__Termination_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTermination_11, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pragma__TerminationStr_91;

        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Termination_89)) == (MR_mktag((MR_Integer) 1))))
          parse_tree__parse_tree_out_pragma__TerminationStr_91 = (MR_String) "can_loop";
        else
          parse_tree__parse_tree_out_pragma__TerminationStr_91 = (MR_String) "cannot_loop";
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__TerminationStr_91);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out_pragma__UsedArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            switch (parse_tree__parse_tree_out_pragma__UsedArg_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "no");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "yes");
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__UsedArgs_8;

              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__TermInfo_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TermInfo_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_8, (MR_Integer) 2)));

    {
      parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17, parse_tree__parse_tree_out_pragma__TypeCtorInfo_17_17, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__PredOrFunc_13, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__MaybeArgSize_9, parse_tree__parse_tree_out_pragma__MaybeTermination_10);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20,
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_5,
  MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_6,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
        MR_Word parse_tree__parse_tree_out_pragma__PredName_25;
        MR_Integer parse_tree__parse_tree_out_pragma__Arity_26;
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28;
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\t\t")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
        }
        parse_tree__parse_tree_out_pragma__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 0)));
        parse_tree__parse_tree_out_pragma__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_5, (MR_Integer) 1)));
        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28);
        }
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30);
        }
        parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 8)));
        {
          parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_26)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
        }
        if ((parse_tree__parse_tree_out_pragma__PredNameArities_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) "\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
            }
          }
        else
          {
            MR_Word parse_tree__parse_tree_out_pragma__HeadPredNameArity_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_pragma__TailPredNameArities_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__PredNameArities_6, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ",\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5 = parse_tree__parse_tree_out_pragma__HeadPredNameArity_8;
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6 = parse_tree__parse_tree_out_pragma__TailPredNameArities_9;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;

              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_10;
              parse_tree__parse_tree_out_pragma__PredNameArities_6 = parse_tree__parse_tree_out_pragma__PredNameArities__tmp_copy_6;
              parse_tree__parse_tree_out_pragma__PredNameArity_5 = parse_tree__parse_tree_out_pragma__PredNameArity__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__CreatorPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__MutatorPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__DestructorPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__OISUInfo_4, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_18;
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_19;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21;
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7;

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma oisu(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_15_21);
    }
    parse_tree__parse_tree_out_pragma__TypeName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 0)));
    parse_tree__parse_tree_out_pragma__TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_14, (MR_Integer) 1)));
    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_17_23);
    }
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_19_25);
    }
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_19)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_20_26);
    }
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ",\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_22_28);
    }
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tcreators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_24_30);
    }
    if ((parse_tree__parse_tree_out_pragma__CreatorPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__CreatorPreds_15, (MR_Integer) 1)));
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31;

        {
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_49, parse_tree__parse_tree_out_pragma__PredNameArities_50, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_U_25_31);
        }
      }
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv13_STATE_VARIABLE_U_27_33);
    }
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tmutators([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv15_STATE_VARIABLE_U_29_35);
    }
    if ((parse_tree__parse_tree_out_pragma__MutatorPreds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MutatorPreds_16, (MR_Integer) 1)));
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36;

        {
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_58, parse_tree__parse_tree_out_pragma__PredNameArities_59, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_30_36);
        }
      }
    parse_tree__parse_tree_out_pragma__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t]),\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_32_38);
    }
    parse_tree__parse_tree_out_pragma__func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_19(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\tdestructors([\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv20_STATE_VARIABLE_U_34_40);
    }
    if ((parse_tree__parse_tree_out_pragma__DestructorPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__PredNameArities_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__DestructorPreds_17, (MR_Integer) 1)));
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41;

        {
          parse_tree__parse_tree_out_pragma__mercury_format_pred_name_arity_list_lag_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__PredNameArity_67, parse_tree__parse_tree_out_pragma__PredNameArities_68, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_35_41);
        }
      }
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\t])\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_U_37_43);
    }
    parse_tree__parse_tree_out_pragma__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_24(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv25_STATE_VARIABLE_IO_7);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_4, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma reserve_tag(");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__TypeArity_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24,
  MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 0)));
    MR_String parse_tree__parse_tree_out_pragma__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FactTableInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ":- pragma fact_table(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_9)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 13)));
    {
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

    {
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__EvalMethod_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityMPF_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAttributes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 1)));
    MR_String parse_tree__parse_tree_out_pragma__PragmaName_13;
    MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_28;
    MR_Word parse_tree__parse_tree_out_pragma___Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TabledInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma___MaybePorF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityMPF_7, (MR_Integer) 2)));

    {
      parse_tree__parse_tree_out_pragma__PragmaName_13 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(parse_tree__parse_tree_out_pragma__EvalMethod_6);
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeAttributes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__Attributes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAttributes_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__Strictness_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out_pragma__Stats_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 2)));
        MR_Word parse_tree__parse_tree_out_pragma__AllowReset_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_14, (MR_Integer) 3)));
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
        MR_Word parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Strictness_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__Strictness_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33;
                break;
              case (MR_Integer) 1:
                {
                  parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[26]);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_pragma__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_pragma__HiddenArgMethod_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Strictness_15, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__ArgStrs_22;
              MR_String parse_tree__parse_tree_out_pragma__ArgsStr_23;
              MR_String parse_tree__parse_tree_out_pragma__HiddenArgStr_24;
              MR_String parse_tree__parse_tree_out_pragma__SpecifiedStr_25;
              MR_String parse_tree__parse_tree_out_pragma__V_37_37;
              MR_String parse_tree__parse_tree_out_pragma__V_38_38;
              MR_String parse_tree__parse_tree_out_pragma__V_40_40;

              {
                parse_tree__parse_tree_out_pragma__ArgStrs_22 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[4], parse_tree__parse_tree_out_pragma__Args_20);
              }
              {
                parse_tree__parse_tree_out_pragma__ArgsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__ArgStrs_22);
              }
              switch (parse_tree__parse_tree_out_pragma__HiddenArgMethod_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_addr";
                  break;
                case (MR_Integer) 0:
                  parse_tree__parse_tree_out_pragma__HiddenArgStr_24 = (MR_String) "hidden_arg_value";
                  break;
              }
              {
                parse_tree__parse_tree_out_pragma__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__HiddenArgStr_24, (MR_String) ")");
              }
              {
                parse_tree__parse_tree_out_pragma__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "], ", parse_tree__parse_tree_out_pragma__V_40_40);
              }
              {
                parse_tree__parse_tree_out_pragma__V_37_37 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__ArgsStr_23, parse_tree__parse_tree_out_pragma__V_38_38);
              }
              {
                parse_tree__parse_tree_out_pragma__SpecifiedStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "specified([", parse_tree__parse_tree_out_pragma__V_37_37);
              }
              {
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SpecifiedStr_25));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_33_33));
              }
            }
            break;
        }
        if ((parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43;
        else
          {
            MR_Integer parse_tree__parse_tree_out_pragma__SizeLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeSizeLimit_16, (MR_Integer) 0)));
            MR_String parse_tree__parse_tree_out_pragma__LimitStr_27;
            MR_String parse_tree__parse_tree_out_pragma__V_46_46;
            MR_String parse_tree__parse_tree_out_pragma__V_47_47;

            {
              parse_tree__parse_tree_out_pragma__V_47_47 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_pragma__SizeLimit_26);
            }
            {
              parse_tree__parse_tree_out_pragma__V_46_46 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_47_47, (MR_String) ")");
            }
            {
              parse_tree__parse_tree_out_pragma__LimitStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "limit(", parse_tree__parse_tree_out_pragma__V_46_46);
            }
            {
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__LimitStr_27));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_43_43));
            }
          }
        switch (parse_tree__parse_tree_out_pragma__Stats_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49;
            break;
          case (MR_Integer) 0:
            {
              {
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 0) = ((MR_Box) ((MR_String) "statistics"));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_49_49));
              }
            }
            break;
        }
        switch (parse_tree__parse_tree_out_pragma__AllowReset_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 0) = ((MR_Box) ((MR_String) "allow_reset"));
                MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50));
              }
            }
            break;
          case (MR_Integer) 1:
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_50_50;
            break;
        }
        if ((parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String parse_tree__parse_tree_out_pragma__V_54_54;
            MR_String parse_tree__parse_tree_out_pragma__V_56_56;
            MR_String parse_tree__parse_tree_out_pragma__V_57_57;

            {
              parse_tree__parse_tree_out_pragma__V_57_57 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__STATE_VARIABLE_Strs_52_52);
            }
            {
              parse_tree__parse_tree_out_pragma__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_57_57, (MR_String) "]");
            }
            {
              parse_tree__parse_tree_out_pragma__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "[", parse_tree__parse_tree_out_pragma__V_56_56);
            }
            {
              parse_tree__parse_tree_out_pragma__MaybeAfter_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_28, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_54_54));
            }
          }
      }
    {
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__PredName_10, parse_tree__parse_tree_out_pragma__Arity_11, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PragmaName_13, parse_tree__parse_tree_out_pragma__MaybeAfter_28);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_recursion_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__RequireTR_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__Proc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__RequireTR_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__Info_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__RequireTR_6, (MR_Integer) 1)));
    MR_String parse_tree__parse_tree_out_pragma__ProcSpecStr_10;
    MR_Word parse_tree__parse_tree_out_pragma__Pred_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Proc_8, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Proc_8, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybePredOrFunc_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Proc_8, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeMode_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Proc_8, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_54;

    if ((parse_tree__parse_tree_out_pragma__MaybePredOrFunc_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__PredOrFunc_54 = (MR_Integer) 0;
    else
      parse_tree__parse_tree_out_pragma__PredOrFunc_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePredOrFunc_52, (MR_Integer) 0)));
    if ((parse_tree__parse_tree_out_pragma__MaybeMode_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_55;
        MR_String parse_tree__parse_tree_out_pragma__V_66_66;
        MR_String parse_tree__parse_tree_out_pragma__V_72_72;
        MR_String parse_tree__parse_tree_out_pragma__V_80_80;

        switch (parse_tree__parse_tree_out_pragma__PredOrFunc_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              parse_tree__parse_tree_out_pragma__DeclaredArity_55 = (parse_tree__parse_tree_out_pragma__Arity_51 - (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 0:
            parse_tree__parse_tree_out_pragma__DeclaredArity_55 = parse_tree__parse_tree_out_pragma__Arity_51;
            break;
        }
        {
          parse_tree__parse_tree_out_pragma__V_66_66 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(parse_tree__parse_tree_out_pragma__Pred_50);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_11[0], parse_tree__parse_tree_out_pragma__DeclaredArity_55, &parse_tree__parse_tree_out_pragma__V_72_72);
        }
        {
          parse_tree__parse_tree_out_pragma__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_out_pragma__V_72_72);
        }
        {
          parse_tree__parse_tree_out_pragma__ProcSpecStr_10 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__V_66_66, parse_tree__parse_tree_out_pragma__V_80_80);
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__ModeList_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeMode_53, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_57;

        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_57);
        }
        switch (parse_tree__parse_tree_out_pragma__PredOrFunc_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_58;
              MR_Word parse_tree__parse_tree_out_pragma__RetMode_59;
              MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_59;

              {
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_56, &parse_tree__parse_tree_out_pragma__FuncModeList_58, &parse_tree__parse_tree_out_pragma__conv0_RetMode_59);
              }
              parse_tree__parse_tree_out_pragma__RetMode_59 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_59);
              {
                parse_tree__parse_tree_out_pragma__ProcSpecStr_10 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InitVarSet_57, parse_tree__parse_tree_out_pragma__Pred_50, parse_tree__parse_tree_out_pragma__FuncModeList_58, parse_tree__parse_tree_out_pragma__RetMode_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                parse_tree__parse_tree_out_pragma__ProcSpecStr_10 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InitVarSet_57, parse_tree__parse_tree_out_pragma__Pred_50, parse_tree__parse_tree_out_pragma__ModeList_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
        }
      }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Info_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_tree_out_pragma__WarnOrError_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Info_9, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word parse_tree__parse_tree_out_pragma__Type_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Info_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_String parse_tree__parse_tree_out_pragma__WarnOrErrorStr_15;
        MR_String parse_tree__parse_tree_out_pragma__TypeStr_16;
        MR_Word parse_tree__parse_tree_out_pragma__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Info_9, (MR_Integer) 1)));

        {
          libs__compiler_util__warning_or_error_string_2_p_0(parse_tree__parse_tree_out_pragma__WarnOrError_12, &parse_tree__parse_tree_out_pragma__WarnOrErrorStr_15);
        }
        {
          parse_tree__prog_data_pragma__require_tailrec_type_string_2_p_0(parse_tree__parse_tree_out_pragma__Type_13, &parse_tree__parse_tree_out_pragma__TypeStr_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":- pragma warn_tail_recursion(");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__ProcSpecStr_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", [");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__WarnOrErrorStr_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeStr_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "]).\n");
        }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) ":- pragma warn_tail_recursion(");
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_pragma__ProcSpecStr_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", [none]).\n");
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_pragma__succeeded;

        if ((parse_tree__parse_tree_out_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2;
        else
          {
            MR_Integer parse_tree__parse_tree_out_pragma__First_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_pragma__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13);
            }
            parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 8)));
            {
              parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_pragma__Rest_8;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;

              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_2 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0__tmp_copy_2;
              parse_tree__parse_tree_out_pragma__HeadVar__1_1 = parse_tree__parse_tree_out_pragma__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_6,
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));

    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Var_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_6, parse_tree__parse_tree_out_pragma__VarNamePrint_7, parse_tree__parse_tree_out_pragma__Type_9);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31,
  MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PorF_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeBackend_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExternalInfo_4, (MR_Integer) 3)));
    MR_String parse_tree__parse_tree_out_pragma__PorFStr_10;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pragma__PorFStr_10 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__parse_tree_out_pragma__PorF_8);
    }
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) ":- pragma external_")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__PorFStr_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
    }
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_pragma__PredName_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
    }
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__Arity_7)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeBackend_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__Backend_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeBackend_9, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
        MR_String parse_tree__parse_tree_out_pragma__V_25_25;
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) ", [")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
        }
        switch (parse_tree__parse_tree_out_pragma__Backend_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__parse_tree_out_pragma__V_25_25 = (MR_String) "high_level_backend";
            break;
          case (MR_Integer) 1:
            parse_tree__parse_tree_out_pragma__V_25_25 = (MR_String) "low_level_backend";
            break;
        }
        parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_25_25)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
        }
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
        }
      }
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));
    MR_String parse_tree__parse_tree_out_pragma__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__SymName_4, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
    }
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) " - ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 13)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__String_5)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28,
  MR_Word parse_tree__parse_tree_out_pragma__FEInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_9;
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_10;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34;
    MR_Word parse_tree__parse_tree_out_pragma__V_36_36;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ":- pragma foreign_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_11, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_14, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17);
    }
    parse_tree__parse_tree_out_pragma__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
    parse_tree__parse_tree_out_pragma__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19);
    }
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34);
    }
    {
      parse_tree__parse_tree_out_pragma__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_36_36, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28));
    }
    parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 19)));
    {
      parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Values_8)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_36_36)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37);
    }
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_sym_name_string_pair_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32,
  MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__Overrides_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FEEInfo_4, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__TypeName_10;
    MR_Integer parse_tree__parse_tree_out_pragma__TypeArity_11;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
    MR_Word parse_tree__parse_tree_out_pragma__MaybePrefix_37;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54;
    MR_Word parse_tree__parse_tree_out_pragma__V_56_56;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Word parse_tree__parse_tree_out_pragma__V_48_48;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ":- pragma foreign_export_enum(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, parse_tree__parse_tree_out_pragma__Lang_6, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_16, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18);
    }
    parse_tree__parse_tree_out_pragma__TypeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 0)));
    parse_tree__parse_tree_out_pragma__TypeArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeCtor_7, (MR_Integer) 1)));
    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__TypeName_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "/")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22);
    }
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeArity_11)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
    }
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25);
    }
    parse_tree__parse_tree_out_pragma__MaybePrefix_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 0)));
    parse_tree__parse_tree_out_pragma__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Attributes_8, (MR_Integer) 1)));
    parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40);
    }
    if ((parse_tree__parse_tree_out_pragma__MaybePrefix_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40;
    else
      {
        MR_String parse_tree__parse_tree_out_pragma__Prefix_38 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePrefix_37, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42;
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "prefix(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_40, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42);
        }
        parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 13)));
        {
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (parse_tree__parse_tree_out_pragma__Prefix_38)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_42, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43);
        }
        parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
        {
          parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 41)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_14_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45);
        }
      }
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_16_45, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
    parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28);
    }
    parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 91)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54);
    }
    {
      parse_tree__parse_tree_out_pragma__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_56_56, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32));
    }
    parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 19)));
    {
      parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_2[2])), ((MR_Box) (parse_tree__parse_tree_out_pragma__Overrides_9)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_56_56)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_54, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57);
    }
    parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) (MR_Word) ((MR_Char) 93)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_57, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
    parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_32), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_6,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_17,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 1)));
    MR_String parse_tree__parse_tree_out_pragma__ExportName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPEInfo_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__ModeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_9, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_14;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_14);
    }
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ":- pragma foreign_export(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_17, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_pragma__ForeignLang_8, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_21, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_pragma__Name_11, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24);
    }
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__ArgModes_15;
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_16;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34;
          MR_Box parse_tree__parse_tree_out_pragma__conv2_RetMode_16;
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__ArgModes_15, &parse_tree__parse_tree_out_pragma__conv2_RetMode_16);
          }
          parse_tree__parse_tree_out_pragma__RetMode_16 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_RetMode_16);
          parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_14, parse_tree__parse_tree_out_pragma__ArgModes_15, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_31, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32);
          }
          parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ") = ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_14, parse_tree__parse_tree_out_pragma__RetMode_16, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_14, parse_tree__parse_tree_out_pragma__ModeList_12, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
          }
          parse_tree__parse_tree_out_pragma__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35);
          }
        }
        break;
    }
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37);
    }
    parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) (parse_tree__parse_tree_out_pragma__ExportName_10)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
    }
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_18);
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__HeadVar__2_2;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "refers_to_llds_stack";
            break;
          case (MR_Integer) 1:
            parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "needs_call_standard_output_registers";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__HeadVar__1_1, (MR_Integer) 0)));

          switch (parse_tree__parse_tree_out_pragma__V_5_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "high_level_backend";
              break;
            case (MR_Integer) 1:
              parse_tree__parse_tree_out_pragma__HeadVar__2_2 = (MR_String) "low_level_backend";
              break;
          }
        }
        break;
    }
    return parse_tree__parse_tree_out_pragma__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_4,
  MR_Word parse_tree__parse_tree_out_pragma__UnitSelector_5)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__String_6;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__UnitSelector_5)) == (MR_mktag((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "function \140parse_tree.parse_tree_out_pragma.unit_selector_to_string\'/2", (MR_String) "termsel in user-annotated sharing");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnitSelector_5, (MR_Integer) 0)));

        {
          parse_tree__parse_tree_out_pragma__String_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeVarSet_4, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__Type_7);
        }
      }
    return parse_tree__parse_tree_out_pragma__String_6;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
    MR_String parse_tree__parse_tree_out_pragma__conv0_String_6;

    {
      parse_tree__parse_tree_out_pragma__conv0_String_6 = parse_tree__parse_tree_out_pragma__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_String_6));
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
  MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_6,
  MR_Word parse_tree__parse_tree_out_pragma__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__Str_9;
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word parse_tree__parse_tree_out_pragma__DataA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__DataB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__VarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__SelectorA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataA_7, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__SelectorB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__DataB_8, (MR_Integer) 1)));
    MR_String parse_tree__parse_tree_out_pragma__VarStrA_14;
    MR_String parse_tree__parse_tree_out_pragma__VarStrB_15;
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrA_16;
    MR_String parse_tree__parse_tree_out_pragma__SelectorStrB_17;
    MR_String parse_tree__parse_tree_out_pragma__StrA_18;
    MR_String parse_tree__parse_tree_out_pragma__StrB_19;
    MR_String parse_tree__parse_tree_out_pragma__V_23_23;
    MR_String parse_tree__parse_tree_out_pragma__V_24_24;
    MR_String parse_tree__parse_tree_out_pragma__V_26_26;
    MR_String parse_tree__parse_tree_out_pragma__V_29_29;
    MR_String parse_tree__parse_tree_out_pragma__V_30_30;
    MR_String parse_tree__parse_tree_out_pragma__V_32_32;
    MR_String parse_tree__parse_tree_out_pragma__V_34_34;
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_40;
    MR_Word parse_tree__parse_tree_out_pragma__V_41_41;
    MR_Word parse_tree__parse_tree_out_pragma__UnitStrs_50;

    {
      parse_tree__parse_tree_out_pragma__VarStrA_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarA_10);
    }
    {
      parse_tree__parse_tree_out_pragma__VarStrB_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_36_36, parse_tree__parse_tree_out_pragma__VarSet_5, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__VarB_12);
    }
    {
      parse_tree__parse_tree_out_pragma__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_41_41, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_6));
    }
    {
      parse_tree__parse_tree_out_pragma__UnitStrs_40 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorA_11);
    }
    {
      parse_tree__parse_tree_out_pragma__SelectorStrA_16 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_40);
    }
    {
      parse_tree__parse_tree_out_pragma__UnitStrs_50 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_41_41, parse_tree__parse_tree_out_pragma__SelectorB_13);
    }
    {
      parse_tree__parse_tree_out_pragma__SelectorStrB_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__UnitStrs_50);
    }
    {
      parse_tree__parse_tree_out_pragma__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrA_16, (MR_String) "])");
    }
    {
      parse_tree__parse_tree_out_pragma__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_26_26);
    }
    {
      parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrA_14, parse_tree__parse_tree_out_pragma__V_24_24);
    }
    {
      parse_tree__parse_tree_out_pragma__StrA_18 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_23_23);
    }
    {
      parse_tree__parse_tree_out_pragma__V_32_32 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__SelectorStrB_17, (MR_String) "])");
    }
    {
      parse_tree__parse_tree_out_pragma__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", [", parse_tree__parse_tree_out_pragma__V_32_32);
    }
    {
      parse_tree__parse_tree_out_pragma__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__VarStrB_15, parse_tree__parse_tree_out_pragma__V_30_30);
    }
    {
      parse_tree__parse_tree_out_pragma__StrB_19 = mercury__string__f_43_43_2_f_0((MR_String) "cel(", parse_tree__parse_tree_out_pragma__V_29_29);
    }
    {
      parse_tree__parse_tree_out_pragma__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " - ", parse_tree__parse_tree_out_pragma__StrB_19);
    }
    {
      parse_tree__parse_tree_out_pragma__Str_9 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__StrA_18, parse_tree__parse_tree_out_pragma__V_34_34);
    }
    return parse_tree__parse_tree_out_pragma__Str_9;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
    MR_String parse_tree__parse_tree_out_pragma__conv1_Str_9;

    {
      parse_tree__parse_tree_out_pragma__conv1_Str_9 = parse_tree__parse_tree_out_pragma__sharing_pair_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv1_Str_9));
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4;

    {
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__4_4));
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5,
  MR_Word parse_tree__parse_tree_out_pragma__Sharing_6,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_7)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__String_8;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Sharing_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "no_sharing";
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Sharing_6, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_12;
          MR_String parse_tree__parse_tree_out_pragma__MaybeTypesStr_15;
          MR_Word parse_tree__parse_tree_out_pragma__SharingPairStrs_16;
          MR_String parse_tree__parse_tree_out_pragma__SharingPairListStr_17;
          MR_Word parse_tree__parse_tree_out_pragma__V_25_25;
          MR_Word parse_tree__parse_tree_out_pragma__V_27_27;
          MR_Word parse_tree__parse_tree_out_pragma__V_29_29;
          MR_Word parse_tree__parse_tree_out_pragma__V_30_30;
          MR_Word parse_tree__parse_tree_out_pragma__V_32_32;

          if ((parse_tree__parse_tree_out_pragma__MaybeTypes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = (MR_String) "no";
              {
                parse_tree__parse_tree_out_pragma__TypeVarSet_12 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
            }
          else
            {
              MR_Word parse_tree__parse_tree_out_pragma__Types_11;
              MR_Word parse_tree__parse_tree_out_pragma__TypeStrs_13;
              MR_String parse_tree__parse_tree_out_pragma__TypeListStr_14;
              MR_Word parse_tree__parse_tree_out_pragma__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTypes_7, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_pragma__V_19_19;
              MR_String parse_tree__parse_tree_out_pragma__V_23_23;

              parse_tree__parse_tree_out_pragma__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 0)));
              parse_tree__parse_tree_out_pragma__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_18_18, (MR_Integer) 1)));
              {
                parse_tree__parse_tree_out_pragma__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                parse_tree__parse_tree_out_pragma__TypeStrs_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_19_19, parse_tree__parse_tree_out_pragma__Types_11);
              }
              {
                parse_tree__parse_tree_out_pragma__TypeListStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__TypeStrs_13);
              }
              {
                parse_tree__parse_tree_out_pragma__V_23_23 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeListStr_14, (MR_String) ")");
              }
              {
                parse_tree__parse_tree_out_pragma__MaybeTypesStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "yes(", parse_tree__parse_tree_out_pragma__V_23_23);
              }
            }
          {
            parse_tree__parse_tree_out_pragma__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_5));
            MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_25_25, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_12));
          }
          {
            parse_tree__parse_tree_out_pragma__SharingPairStrs_16 = mercury__list__map_2_f_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_tree_out_pragma__V_25_25, parse_tree__parse_tree_out_pragma__SharingPairs_10);
          }
          {
            parse_tree__parse_tree_out_pragma__SharingPairListStr_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__parse_tree_out_pragma__SharingPairStrs_16);
          }
          {
            parse_tree__parse_tree_out_pragma__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__SharingPairListStr_17));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[25])));
          }
          {
            parse_tree__parse_tree_out_pragma__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 0) = ((MR_Box) ((MR_String) ", ["));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_30_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_32_32));
          }
          {
            parse_tree__parse_tree_out_pragma__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MaybeTypesStr_15));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_29_29, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_30_30));
          }
          {
            parse_tree__parse_tree_out_pragma__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 0) = ((MR_Box) ((MR_String) "sharing("));
            MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_29_29));
          }
          {
            parse_tree__parse_tree_out_pragma__String_8 = mercury__string__append_list_1_f_0(parse_tree__parse_tree_out_pragma__V_27_27);
          }
        }
        break;
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_pragma__String_8 = (MR_String) "unknown_sharing";
        break;
    }
    return parse_tree__parse_tree_out_pragma__String_8;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2;
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;
    MR_String parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2;

    {
      parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2 = parse_tree__parse_tree_out_pragma__extra_attribute_to_string_1_f_0(((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
    parse_tree__parse_tree_out_pragma__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_tree_out_pragma__conv0_HeadVar__2_2));
    return parse_tree__parse_tree_out_pragma__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__Attrs_4,
  MR_Word parse_tree__parse_tree_out_pragma__VarSet_5)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__StringList_6;
    MR_Word parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101;
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMercury_7;
    MR_Word parse_tree__parse_tree_out_pragma__ThreadSafe_8;
    MR_Word parse_tree__parse_tree_out_pragma__TabledForIO_9;
    MR_Word parse_tree__parse_tree_out_pragma__Purity_10;
    MR_Word parse_tree__parse_tree_out_pragma__Terminates_11;
    MR_Word parse_tree__parse_tree_out_pragma__UserSharing_12;
    MR_Word parse_tree__parse_tree_out_pragma__Exceptions_13;
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14;
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrail_15;
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16;
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicy_17;
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLiveness_18;
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemory_19;
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRoots_20;
    MR_Word parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21;
    MR_Word parse_tree__parse_tree_out_pragma__ExtraAttributes_22;
    MR_String parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23;
    MR_String parse_tree__parse_tree_out_pragma__ThreadSafeStr_24;
    MR_String parse_tree__parse_tree_out_pragma__TabledForIOStr_25;
    MR_Word parse_tree__parse_tree_out_pragma__PurityStrList_26;
    MR_Word parse_tree__parse_tree_out_pragma__TerminatesStrList_27;
    MR_Word parse_tree__parse_tree_out_pragma__UserSharingStrList_31;
    MR_Word parse_tree__parse_tree_out_pragma__ExceptionsStrList_32;
    MR_Word parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33;
    MR_Word parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34;
    MR_Word parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35;
    MR_Word parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36;
    MR_Word parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37;
    MR_Word parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38;
    MR_Word parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39;
    MR_Word parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41;
    MR_Word parse_tree__parse_tree_out_pragma__V_85_85;
    MR_Word parse_tree__parse_tree_out_pragma__V_86_86;
    MR_Word parse_tree__parse_tree_out_pragma__V_87_87;
    MR_Word parse_tree__parse_tree_out_pragma__V_88_88;
    MR_Word parse_tree__parse_tree_out_pragma__V_89_89;
    MR_Word parse_tree__parse_tree_out_pragma__V_90_90;
    MR_Word parse_tree__parse_tree_out_pragma__V_91_91;
    MR_Word parse_tree__parse_tree_out_pragma__V_92_92;
    MR_Word parse_tree__parse_tree_out_pragma__V_93_93;
    MR_Word parse_tree__parse_tree_out_pragma__V_94_94;
    MR_Word parse_tree__parse_tree_out_pragma__V_95_95;
    MR_Word parse_tree__parse_tree_out_pragma__V_96_96;
    MR_Word parse_tree__parse_tree_out_pragma__V_97_97;
    MR_Word parse_tree__parse_tree_out_pragma__V_98_98;
    MR_Word parse_tree__parse_tree_out_pragma__V_99_99;

    {
      parse_tree__parse_tree_out_pragma__MayCallMercury_7 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__ThreadSafe_8 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__TabledForIO_9 = parse_tree__prog_data_foreign__get_tabled_for_io_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__Purity_10 = parse_tree__prog_data_foreign__get_purity_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__Terminates_11 = parse_tree__prog_data_foreign__get_terminates_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__UserSharing_12 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__Exceptions_13 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14 = parse_tree__prog_data_foreign__get_ordinary_despite_detism_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__MayModifyTrail_15 = parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__BoxPolicy_17 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__AffectsLiveness_18 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__AllocatesMemory_19 = parse_tree__prog_data_foreign__get_allocates_memory_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__RegistersRoots_20 = parse_tree__prog_data_foreign__get_registers_roots_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    {
      parse_tree__parse_tree_out_pragma__ExtraAttributes_22 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(parse_tree__parse_tree_out_pragma__Attrs_4);
    }
    switch (parse_tree__parse_tree_out_pragma__MayCallMercury_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "may_call_mercury";
        break;
      case (MR_Integer) 1:
        parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23 = (MR_String) "will_not_call_mercury";
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__ThreadSafe_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "maybe_thread_safe";
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "not_thread_safe";
        break;
      case (MR_Integer) 1:
        parse_tree__parse_tree_out_pragma__ThreadSafeStr_24 = (MR_String) "thread_safe";
        break;
    }
    parse_tree__parse_tree_out_pragma__TabledForIOStr_25 = ((&parse_tree__parse_tree_out_pragma_vector_common_7[0 + parse_tree__parse_tree_out_pragma__TabledForIO_9]))->parse_tree__parse_tree_out_pragma__vector_common_type_7_0__vct_7_f_0;
    switch (parse_tree__parse_tree_out_pragma__Purity_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[4]);
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__PurityStrList_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[5]);
        }
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__Terminates_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[6]);
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pragma__TerminatesStrList_27 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[7]);
        }
        break;
    }
    if ((parse_tree__parse_tree_out_pragma__UserSharing_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__Sharing_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__MaybeTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharing_12, (MR_Integer) 1)));
        MR_String parse_tree__parse_tree_out_pragma__String_30;

        {
          parse_tree__parse_tree_out_pragma__String_30 = parse_tree__parse_tree_out_pragma__user_annotated_sharing_to_string_3_f_0(parse_tree__parse_tree_out_pragma__VarSet_5, parse_tree__parse_tree_out_pragma__Sharing_28, parse_tree__parse_tree_out_pragma__MaybeTypes_29);
        }
        {
          parse_tree__parse_tree_out_pragma__UserSharingStrList_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__String_30));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UserSharingStrList_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    switch (parse_tree__parse_tree_out_pragma__Exceptions_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pragma__ExceptionsStrList_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[8]);
        }
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetism_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[9]);
        }
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__MayModifyTrail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[10]);
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[11]);
        }
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__MayCallMM_Tabled_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[12]);
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[13]);
        }
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__BoxPolicy_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[14]);
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    switch (parse_tree__parse_tree_out_pragma__AffectsLiveness_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[15]);
        }
        break;
      case (MR_Integer) 2:
        parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[16]);
        }
        break;
    }
    parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[0 + parse_tree__parse_tree_out_pragma__AllocatesMemory_19]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
    parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39 = ((&parse_tree__parse_tree_out_pragma_vector_common_8[4 + parse_tree__parse_tree_out_pragma__RegistersRoots_20]))->parse_tree__parse_tree_out_pragma__vector_common_type_8_0__vct_8_f_0;
    if ((parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__MayDuplicate_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeMayDuplicate_21, (MR_Integer) 0)));

        switch (parse_tree__parse_tree_out_pragma__MayDuplicate_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[23]);
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pragma_scalar_common_1[24]);
            }
            break;
        }
      }
    parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__parse_tree_out_pragma__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TabledForIOStr_25));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_87_87, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__PurityStrList_26));
    }
    {
      parse_tree__parse_tree_out_pragma__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__ThreadSafeStr_24));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_86_86, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_87_87));
    }
    {
      parse_tree__parse_tree_out_pragma__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 0) = ((MR_Box) (parse_tree__parse_tree_out_pragma__MayCallMercuryStr_23));
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_85_85, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__V_86_86));
    }
    {
      parse_tree__parse_tree_out_pragma__V_99_99 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0, parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[3], parse_tree__parse_tree_out_pragma__ExtraAttributes_22);
    }
    {
      parse_tree__parse_tree_out_pragma__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayDuplicateStrList_41, parse_tree__parse_tree_out_pragma__V_99_99);
    }
    {
      parse_tree__parse_tree_out_pragma__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__RegistersRootsStrList_39, parse_tree__parse_tree_out_pragma__V_98_98);
    }
    {
      parse_tree__parse_tree_out_pragma__V_96_96 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AllocatesMemoryStrList_38, parse_tree__parse_tree_out_pragma__V_97_97);
    }
    {
      parse_tree__parse_tree_out_pragma__V_95_95 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__AffectsLivenessStrList_37, parse_tree__parse_tree_out_pragma__V_96_96);
    }
    {
      parse_tree__parse_tree_out_pragma__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__BoxPolicyStrList_36, parse_tree__parse_tree_out_pragma__V_95_95);
    }
    {
      parse_tree__parse_tree_out_pragma__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayCallMM_TabledStrList_35, parse_tree__parse_tree_out_pragma__V_94_94);
    }
    {
      parse_tree__parse_tree_out_pragma__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__MayModifyTrailStrList_34, parse_tree__parse_tree_out_pragma__V_93_93);
    }
    {
      parse_tree__parse_tree_out_pragma__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__OrdinaryDespiteDetismStrList_33, parse_tree__parse_tree_out_pragma__V_92_92);
    }
    {
      parse_tree__parse_tree_out_pragma__V_90_90 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__ExceptionsStrList_32, parse_tree__parse_tree_out_pragma__V_91_91);
    }
    {
      parse_tree__parse_tree_out_pragma__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__UserSharingStrList_31, parse_tree__parse_tree_out_pragma__V_90_90);
    }
    {
      parse_tree__parse_tree_out_pragma__V_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__TerminatesStrList_27, parse_tree__parse_tree_out_pragma__V_89_89);
    }
    {
      parse_tree__parse_tree_out_pragma__StringList_6 = mercury__list__f_43_43_2_f_0(parse_tree__parse_tree_out_pragma__TypeCtorInfo_101_101, parse_tree__parse_tree_out_pragma__V_85_85, parse_tree__parse_tree_out_pragma__V_88_88);
    }
    return parse_tree__parse_tree_out_pragma__StringList_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_info__add_string_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_String) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_88;
    MR_Word parse_tree__parse_tree_out_pragma__Attributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__PredName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__ProgVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out_pragma__PragmaCode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FPInfo_6, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out_pragma__ForeignLang_15;
    MR_String parse_tree__parse_tree_out_pragma__C_Code_21;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58;
    MR_Word parse_tree__parse_tree_out_pragma__V_59_59;
    MR_Word parse_tree__parse_tree_out_pragma__V_61_61;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74;
    MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75;
    MR_Word parse_tree__parse_tree_out_pragma__V_82_82;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_23)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_24)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_26)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_27)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Word parse_tree__parse_tree_out_pragma__V_22_22;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_28)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_29)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_30)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ":- pragma foreign_proc(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26);
    }
    {
      parse_tree__parse_tree_out_pragma__ForeignLang_15 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(parse_tree__parse_tree_out_pragma__Attributes_8);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__ForeignLang_15, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27);
    }
    parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__PredName_9, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_29, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30);
    }
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__Vars_16;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39;
          MR_Word parse_tree__parse_tree_out_pragma__Var_179;
          MR_String parse_tree__parse_tree_out_pragma__VarName_183;
          MR_Word parse_tree__parse_tree_out_pragma__Mode_184;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_190;
          MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_192;
          MR_Box parse_tree__parse_tree_out_pragma__conv2_Var_179;
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word parse_tree__parse_tree_out_pragma___Var_182;
          MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_185;
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, parse_tree__parse_tree_out_pragma__Vars0_11, &parse_tree__parse_tree_out_pragma__Vars_16, &parse_tree__parse_tree_out_pragma__conv2_Var_179);
          }
          parse_tree__parse_tree_out_pragma__Var_179 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv2_Var_179);
          if ((parse_tree__parse_tree_out_pragma__Vars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
          else
            {
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34;
              MR_Word parse_tree__parse_tree_out_pragma__Var_98;
              MR_Word parse_tree__parse_tree_out_pragma__Vars_99;
              MR_String parse_tree__parse_tree_out_pragma__VarName_102;
              MR_Word parse_tree__parse_tree_out_pragma__Mode_103;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_109;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_111;
              MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_112;
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Word parse_tree__parse_tree_out_pragma___Var_101;
              MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_104;
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33);
              }
              parse_tree__parse_tree_out_pragma__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars_16, (MR_Integer) 0)));
              parse_tree__parse_tree_out_pragma__Vars_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars_16, (MR_Integer) 1)));
              parse_tree__parse_tree_out_pragma___Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_98, (MR_Integer) 0)));
              parse_tree__parse_tree_out_pragma__VarName_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_98, (MR_Integer) 1)));
              parse_tree__parse_tree_out_pragma__Mode_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_98, (MR_Integer) 2)));
              parse_tree__parse_tree_out_pragma___BoxPolicy_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_98, (MR_Integer) 3)));
              parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_102)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_109);
              }
              parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_109, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_111);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Mode_103, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_111, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_112);
              }
              if ((parse_tree__parse_tree_out_pragma__Vars_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_112;
              else
                {
                  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_114;
                  MR_Word parse_tree__parse_tree_out_pragma__Var_152;
                  MR_Word parse_tree__parse_tree_out_pragma__Vars_153;
                  MR_String parse_tree__parse_tree_out_pragma__VarName_156;
                  MR_Word parse_tree__parse_tree_out_pragma__Mode_157;
                  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_163;
                  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_165;
                  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_166;
                  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_168;
                  void MR_CALL (* parse_tree__parse_tree_out_pragma__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_pragma___Var_155;
                  MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_158;
                  void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* parse_tree__parse_tree_out_pragma__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    parse_tree__parse_tree_out_pragma__func_6(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_112, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_114);
                  }
                  parse_tree__parse_tree_out_pragma__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars_99, (MR_Integer) 0)));
                  parse_tree__parse_tree_out_pragma__Vars_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars_99, (MR_Integer) 1)));
                  parse_tree__parse_tree_out_pragma___Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_152, (MR_Integer) 0)));
                  parse_tree__parse_tree_out_pragma__VarName_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_152, (MR_Integer) 1)));
                  parse_tree__parse_tree_out_pragma__Mode_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_152, (MR_Integer) 2)));
                  parse_tree__parse_tree_out_pragma___BoxPolicy_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_152, (MR_Integer) 3)));
                  parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_156)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_114, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_163);
                  }
                  parse_tree__parse_tree_out_pragma__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    parse_tree__parse_tree_out_pragma__func_8(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_163, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_165);
                  }
                  {
                    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Mode_157, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_165, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_166);
                  }
                  if ((parse_tree__parse_tree_out_pragma__Vars_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_168 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_166;
                  else
                    {
                      void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));

                      {
                        parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_166, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_168);
                      }
                    }
                  {
                    parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars_153, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_168, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34);
                  }
                }
              parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36);
              }
            }
          parse_tree__parse_tree_out_pragma__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " = (")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38);
          }
          parse_tree__parse_tree_out_pragma___Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_179, (MR_Integer) 0)));
          parse_tree__parse_tree_out_pragma__VarName_183 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_179, (MR_Integer) 1)));
          parse_tree__parse_tree_out_pragma__Mode_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_179, (MR_Integer) 2)));
          parse_tree__parse_tree_out_pragma___BoxPolicy_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_179, (MR_Integer) 3)));
          parse_tree__parse_tree_out_pragma__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_12(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_183)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_190);
          }
          parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_190, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_192);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Mode_184, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_192, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39);
          }
          parse_tree__parse_tree_out_pragma__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pragma__func_14(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_39_39, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((parse_tree__parse_tree_out_pragma__Vars0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30;
        else
          {
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_260;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_261;
            MR_Word parse_tree__parse_tree_out_pragma__Var_263;
            MR_Word parse_tree__parse_tree_out_pragma__Vars_264;
            MR_String parse_tree__parse_tree_out_pragma__VarName_266;
            MR_Word parse_tree__parse_tree_out_pragma__Mode_267;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_269;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_271;
            MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_272;
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Word parse_tree__parse_tree_out_pragma___Var_225;
            MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_226;
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_260);
            }
            parse_tree__parse_tree_out_pragma__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars0_11, (MR_Integer) 0)));
            parse_tree__parse_tree_out_pragma__Vars_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars0_11, (MR_Integer) 1)));
            parse_tree__parse_tree_out_pragma___Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_263, (MR_Integer) 0)));
            parse_tree__parse_tree_out_pragma__VarName_266 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_263, (MR_Integer) 1)));
            parse_tree__parse_tree_out_pragma__Mode_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_263, (MR_Integer) 2)));
            parse_tree__parse_tree_out_pragma___BoxPolicy_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_263, (MR_Integer) 3)));
            parse_tree__parse_tree_out_pragma__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_pragma__func_16(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_266)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_33_260, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_269);
            }
            parse_tree__parse_tree_out_pragma__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_269, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_271);
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Mode_267, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_271, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_272);
            }
            if ((parse_tree__parse_tree_out_pragma__Vars_264 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_261 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_272;
            else
              {
                MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_232;
                MR_Word parse_tree__parse_tree_out_pragma__Var_233;
                MR_Word parse_tree__parse_tree_out_pragma__Vars_234;
                MR_String parse_tree__parse_tree_out_pragma__VarName_236;
                MR_Word parse_tree__parse_tree_out_pragma__Mode_237;
                MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_239;
                MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_241;
                MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_242;
                MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_244;
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_18)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
                MR_Word parse_tree__parse_tree_out_pragma___Var_227;
                MR_Word parse_tree__parse_tree_out_pragma___BoxPolicy_228;
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_19)(MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__parse_tree_out_pragma__func_18(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_272, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_232);
                }
                parse_tree__parse_tree_out_pragma__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars_264, (MR_Integer) 0)));
                parse_tree__parse_tree_out_pragma__Vars_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__Vars_264, (MR_Integer) 1)));
                parse_tree__parse_tree_out_pragma___Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_233, (MR_Integer) 0)));
                parse_tree__parse_tree_out_pragma__VarName_236 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_233, (MR_Integer) 1)));
                parse_tree__parse_tree_out_pragma__Mode_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_233, (MR_Integer) 2)));
                parse_tree__parse_tree_out_pragma___BoxPolicy_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__Var_233, (MR_Integer) 3)));
                parse_tree__parse_tree_out_pragma__func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  parse_tree__parse_tree_out_pragma__func_19(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (parse_tree__parse_tree_out_pragma__VarName_236)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_232, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_239);
                }
                parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) " :: ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_239, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_241);
                }
                {
                  parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Mode_237, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_29_241, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_242);
                }
                if ((parse_tree__parse_tree_out_pragma__Vars_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_244 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_242;
                else
                  {
                    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_21)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      parse_tree__parse_tree_out_pragma__func_21(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_242, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_244);
                    }
                  }
                {
                  parse_tree__parse_tree_out_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_118_97_114_115_95_95_91_51_93_95_48_6_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__InstVarSet_13, parse_tree__parse_tree_out_pragma__Vars_234, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_32_244, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_261);
                }
              }
            parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_34_261, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41);
            }
          }
        break;
    }
    parse_tree__parse_tree_out_pragma__func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_23(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43);
    }
    parse_tree__parse_tree_out_pragma__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_24(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "[")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58);
    }
    {
      parse_tree__parse_tree_out_pragma__V_59_59 = parse_tree__parse_tree_out_pragma__foreign_proc_attributes_to_strings_2_f_0(parse_tree__parse_tree_out_pragma__Attributes_8, parse_tree__parse_tree_out_pragma__ProgVarSet_12);
    }
    {
      parse_tree__parse_tree_out_pragma__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_61_61, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
    }
    parse_tree__parse_tree_out_pragma__func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 19)));
    {
      parse_tree__parse_tree_out_pragma__func_25(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_59_59)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_61_61)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_58, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62);
    }
    parse_tree__parse_tree_out_pragma__func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_26(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "]")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_62, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44);
    }
    parse_tree__parse_tree_out_pragma__func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_27(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_44_44, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46);
    }
    parse_tree__parse_tree_out_pragma__C_Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 0)));
    parse_tree__parse_tree_out_pragma__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PragmaCode_14, (MR_Integer) 1)));
    parse_tree__parse_tree_out_pragma__func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_28(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_46_46, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74);
    }
    {
      parse_tree__parse_tree_out_pragma__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_82_82, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_88);
    }
    {
      mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_88, parse_tree__parse_tree_out_pragma__V_82_82, parse_tree__parse_tree_out_pragma__C_Code_21, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_74, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75);
    }
    parse_tree__parse_tree_out_pragma__func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_29(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) "\"")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_75, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47);
    }
    parse_tree__parse_tree_out_pragma__func_30 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_30(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_50), ((MR_Box) ((MR_String) ").\n")), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_47_47, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_24);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15,
  MR_Char parse_tree__parse_tree_out_pragma__Char_4,
  MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7,
  MR_Box * parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Char parse_tree__parse_tree_out_pragma__QuoteChar_6;

    switch (parse_tree__parse_tree_out_pragma__Char_4) {
      default:
        parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 98;
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 34;
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 39;
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          parse_tree__parse_tree_out_pragma__QuoteChar_6 = (MR_Char) 92;
          parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
        }
        break;
    }
    if (parse_tree__parse_tree_out_pragma__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) ((MR_Char) 92)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, &parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10);
        }
        parse_tree__parse_tree_out_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));
        {
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__QuoteChar_6)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_10, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
        }
      }
    else
      {
        switch (parse_tree__parse_tree_out_pragma__Char_4) {
          default:
            parse_tree__parse_tree_out_pragma__succeeded = MR_FALSE;
            break;
          case (MR_Char) 9:
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
            break;
          case (MR_Char) 10:
            parse_tree__parse_tree_out_pragma__succeeded = MR_TRUE;
            break;
        }
        if (!(parse_tree__parse_tree_out_pragma__succeeded))
          {
            {
              parse_tree__parse_tree_out_pragma__succeeded = mercury__term_io__is_mercury_punctuation_char_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
            if (!(parse_tree__parse_tree_out_pragma__succeeded))
              {
                parse_tree__parse_tree_out_pragma__succeeded = mercury__char__is_alnum_1_p_0(parse_tree__parse_tree_out_pragma__Char_4);
              }
          }
        if (parse_tree__parse_tree_out_pragma__succeeded)
          {
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 7)));

            {
              parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_pragma__Char_4)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
            }
          }
        else
          {
            MR_String parse_tree__parse_tree_out_pragma__V_13_13;
            void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_pragma__V_13_13 = mercury__term_io__mercury_escape_char_1_f_0(parse_tree__parse_tree_out_pragma__Char_4);
            }
            parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_pragma__V_13_13)), parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_0_7, parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_8);
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__FCInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18;
    MR_Word parse_tree__parse_tree_out_pragma__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FCInfo_4, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_code(");
    }
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pragma__Lang_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_12_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__parse_tree_out_pragma__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15;

        {
          parse_tree__parse_tree_out_pragma__func_1(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_11_26);
        }
        parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 13)));
        {
          parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_24)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_12_27);
        }
        parse_tree__parse_tree_out_pragma__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_IO_15_15);
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_50;
        MR_String parse_tree__parse_tree_out_pragma__Code_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_7, (MR_Integer) 0)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36;
        MR_Box parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15;

        {
          parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_9_36);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_50);
        }
        {
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_50, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[2], parse_tree__parse_tree_out_pragma__Code_23, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv9_STATE_VARIABLE_U_10_37);
        }
        parse_tree__parse_tree_out_pragma__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_10(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv11_STATE_VARIABLE_IO_15_15);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_S_25,
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26,
  MR_Word parse_tree__parse_tree_out_pragma__Verbose_5,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

    if ((parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTerminationInfo_6, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_27_27)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box parse_tree__parse_tree_out_pragma__Error_9 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_27_27, (MR_Integer) 0));

            {
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
            }
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_26, parse_tree__parse_tree_out_pragma__Error_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32,
  MR_Word parse_tree__parse_tree_out_pragma__Verbose_5,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;

    if ((parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeArgSizeInfo_6, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__V_33_33)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer parse_tree__parse_tree_out_pragma__Const_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "finite(");
            }
            {
              mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Const_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            if ((parse_tree__parse_tree_out_pragma__UsedArgs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
              }
            else
              {
                MR_Word parse_tree__parse_tree_out_pragma__UsedArg_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 0)));
                MR_Word parse_tree__parse_tree_out_pragma__UsedArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UsedArgs_10, (MR_Integer) 1)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
                switch (parse_tree__parse_tree_out_pragma__UsedArg_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "no");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "yes");
                      }
                    }
                    break;
                }
                {
                  parse_tree__parse_tree_out_pragma__write_used_comma_args_3_p_0(parse_tree__parse_tree_out_pragma__UsedArgs_40);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
              }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_Box parse_tree__parse_tree_out_pragma__Error_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__V_33_33, (MR_Integer) 0));

            {
              mercury__io__write_string_3_p_0((MR_String) "infinite");
            }
            switch (parse_tree__parse_tree_out_pragma__Verbose_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    mercury__io__write_3_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_32, parse_tree__parse_tree_out_pragma__Error_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_7,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeVarSet_8,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTVarSet_9,
  MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_10)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ReuseInfo_10, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_19;
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_20;
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_21;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_reuse(");
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_19);
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_20);
        }
      }
    else
      parse_tree__parse_tree_out_pragma__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_8, (MR_Integer) 0)));
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_21);
        }
      }
    else
      parse_tree__parse_tree_out_pragma__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_9, (MR_Integer) 0)));
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_22;
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_23;
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_23;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_17, &parse_tree__parse_tree_out_pragma__FuncModeList_22, &parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          }
          parse_tree__parse_tree_out_pragma__RetMode_23 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__FuncModeList_22, parse_tree__parse_tree_out_pragma__RetMode_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__Modes_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((parse_tree__parse_tree_out_pragma__HeadVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__V_62_62;

        {
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
        {
          parse_tree__parse_tree_out_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_21));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_14, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_62_62);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_20, parse_tree__parse_tree_out_pragma__TypeVarSet_21, parse_tree__parse_tree_out_pragma__MaybeStructureReuseDomain_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_7,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeVarSet_8,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTVarSet_9,
  MR_Word parse_tree__parse_tree_out_pragma__SharingInfo_10)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameModesPF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__HeadVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeSharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__SharingInfo_10, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameModesPF_12, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_19;
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_20;
    MR_Word parse_tree__parse_tree_out_pragma__TypeVarSet_21;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma structure_sharing(");
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_19);
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeVarSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &parse_tree__parse_tree_out_pragma__VarSet_20);
        }
      }
    else
      parse_tree__parse_tree_out_pragma__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeVarSet_8, (MR_Integer) 0)));
    if ((parse_tree__parse_tree_out_pragma__MaybeTVarSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_pragma__TypeVarSet_21);
        }
      }
    else
      parse_tree__parse_tree_out_pragma__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeTVarSet_9, (MR_Integer) 0)));
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_22;
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_23;
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_23;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_17, &parse_tree__parse_tree_out_pragma__FuncModeList_22, &parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          }
          parse_tree__parse_tree_out_pragma__RetMode_23 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_23);
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__FuncModeList_22, parse_tree__parse_tree_out_pragma__RetMode_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InitVarSet_19, parse_tree__parse_tree_out_pragma__SymName_16, parse_tree__parse_tree_out_pragma__Modes_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((parse_tree__parse_tree_out_pragma__HeadVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "vars, types");
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__V_62_62;

        {
          mercury__io__write_string_3_p_0((MR_String) "vars(");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_pragma__VarSet_20, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__HeadVars_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "), ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "types(");
        }
        {
          parse_tree__parse_tree_out_pragma__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__TypeVarSet_21));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_tree_out_pragma__HeadVarTypes_14, (MR_String) ",", parse_tree__parse_tree_out_pragma__V_62_62);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(parse_tree__parse_tree_out_pragma__VarSet_20, parse_tree__parse_tree_out_pragma__TypeVarSet_21, parse_tree__parse_tree_out_pragma__MaybeSharingAs_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37,
  MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_for_S_38,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_9,
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10,
  MR_Word parse_tree__parse_tree_out_pragma__SymName_11,
  MR_Word parse_tree__parse_tree_out_pragma__ModeList_12,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeArgSize_13,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeTermination_14)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__InitVarSet_16;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination_info(");
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InitVarSet_16);
    }
    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FuncModeList_17;
          MR_Word parse_tree__parse_tree_out_pragma__RetMode_18;
          MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_18;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__ModeList_12, &parse_tree__parse_tree_out_pragma__FuncModeList_17, &parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
          }
          parse_tree__parse_tree_out_pragma__RetMode_18 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_18);
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pragma__Lang_9, parse_tree__parse_tree_out_pragma__InitVarSet_16, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__FuncModeList_17, parse_tree__parse_tree_out_pragma__RetMode_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(parse_tree__parse_tree_out_pragma__Lang_9, parse_tree__parse_tree_out_pragma__InitVarSet_16, parse_tree__parse_tree_out_pragma__SymName_11, parse_tree__parse_tree_out_pragma__ModeList_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeArgSize_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_for_S_38, parse_tree__parse_tree_out_pragma__TypeInfo_for_T_37, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__MaybeTermination_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TablingInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__MM_TablingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TablingInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma mm_tabling_info(");
    }
    {
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    switch (parse_tree__parse_tree_out_pragma__MM_TablingStatus_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_conditional");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_may_call");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mm_tabled_will_not_call");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__TrailingInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__TrailingStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TrailingInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma trailing_info(");
    }
    {
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    switch (parse_tree__parse_tree_out_pragma__TrailingStatus_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "conditional");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "may_modify_trail");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "will_not_modify_trail");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__ExceptionsInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__ThrowStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ExceptionsInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma exceptions(");
    }
    {
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__parse_tree_out_pragma__ThrowStatus_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "will_not_throw");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "conditional");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__ExceptionType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__ThrowStatus_7, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "may_throw(");
          }
          switch (parse_tree__parse_tree_out_pragma__ExceptionType_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "type_exception)");
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "user_exception)");
                }
              }
              break;
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31;
    MR_Word parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__UnusedArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__UnusedArgsInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 0)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 2)));
    MR_Integer parse_tree__parse_tree_out_pragma__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArityPFMn_6, (MR_Integer) 3)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma unused_args(");
    }
    {
      parse_tree__prog_out__write_pred_or_func_3_p_0(parse_tree__parse_tree_out_pragma__PredOrFunc_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__SymName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__ModeNum_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", [");
    }
    parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
    if ((parse_tree__parse_tree_out_pragma__UnusedArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Integer parse_tree__parse_tree_out_pragma__First_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__UnusedArgs_7, (MR_Integer) 1)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8)));
        MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40;
        MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28;

        {
          parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31), ((MR_Box) (parse_tree__parse_tree_out_pragma__First_35)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_40);
        }
        {
          parse_tree__parse_tree_out_pragma__mercury_format_int_list_2_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_pragma__Rest_36, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_28_28);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_output_type_subst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__VarNamePrint_6,
  MR_Word parse_tree__parse_tree_out_pragma__Lang_7,
  MR_Word parse_tree__parse_tree_out_pragma__TypeSpecInfo_8)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__PredName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__SpecName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 1)));
    MR_Integer parse_tree__parse_tree_out_pragma__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_pragma__MaybeModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out_pragma__Subst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out_pragma__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out_pragma__V_52_52;
    MR_Word parse_tree__parse_tree_out_pragma__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeSpecInfo_8, (MR_Integer) 7)));

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma type_spec(");
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
        {
          mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_pragma__Arity_12);
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeModes_14, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_20;

        if ((parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_pragma", (MR_String) "predicate \140parse_tree.parse_tree_out_pragma.mercury_output_pragma_type_spec\'/5", (MR_String) "no pred_or_func");
              return;
            }
          }
        else
          parse_tree__parse_tree_out_pragma__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybePredOrFunc_13, (MR_Integer) 0)));
        switch (parse_tree__parse_tree_out_pragma__PredOrFunc_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FuncModes_21;
              MR_Word parse_tree__parse_tree_out_pragma__RetMode_22;
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_23;
              MR_Box parse_tree__parse_tree_out_pragma__conv0_RetMode_22;

              {
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pragma__Modes_18, &parse_tree__parse_tree_out_pragma__FuncModes_21, &parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
              }
              parse_tree__parse_tree_out_pragma__RetMode_22 = ((MR_Word) parse_tree__parse_tree_out_pragma__conv0_RetMode_22);
              {
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_23);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__FuncModes_21);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") = ");
              }
              {
                parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_23, parse_tree__parse_tree_out_pragma__RetMode_22);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_pragma__InstVarSet_60;

              {
                parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_pragma__PredName_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &parse_tree__parse_tree_out_pragma__InstVarSet_60);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(parse_tree__parse_tree_out_pragma__Lang_7, parse_tree__parse_tree_out_pragma__InstVarSet_60, parse_tree__parse_tree_out_pragma__Modes_18);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ", (");
    }
    {
      parse_tree__parse_tree_out_pragma__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pragma_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 3) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarSet_16));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__V_52_52, 4) = ((MR_Box) (parse_tree__parse_tree_out_pragma__VarNamePrint_6));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_2[0], parse_tree__parse_tree_out_pragma__Subst_15, (MR_String) ", ", parse_tree__parse_tree_out_pragma__V_52_52);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "), ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__SpecName_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_proc_to_string_2_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_4,
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_5)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__String_6;
    MR_Box parse_tree__parse_tree_out_pragma__conv0_String_6;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1], parse_tree__parse_tree_out_pragma__Lang_4, parse_tree__parse_tree_out_pragma__FPInfo_5, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv0_String_6);
    }
    parse_tree__parse_tree_out_pragma__String_6 = ((MR_String) parse_tree__parse_tree_out_pragma__conv0_String_6);
    return parse_tree__parse_tree_out_pragma__String_6;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Lang_5,
  MR_Word parse_tree__parse_tree_out_pragma__FPInfo_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_5, parse_tree__parse_tree_out_pragma__FPInfo_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__FIMinfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__FIM_6 = (MR_Word) parse_tree__parse_tree_out_pragma__FIMinfo_4;
    MR_Word parse_tree__parse_tree_out_pragma__Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FIM_6, (MR_Integer) 1)));
    MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13;

    {
      mercury__io__write_string_3_p_0((MR_String) ":- pragma foreign_import_module(");
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_7, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_13_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 1, parse_tree__parse_tree_out_pragma__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_foreign_decl_to_string_1_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_3)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__String_4;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
    MR_Word parse_tree__parse_tree_out_pragma__Lang_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) & (MR_Integer) 3);
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_3, (MR_Integer) 1)));
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15;
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv23_String_4;

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_15);
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, parse_tree__parse_tree_out_pragma__Lang_11, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_15)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16 = ((MR_String) parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_16);
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_13_16)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18 = ((MR_String) parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_18);
    switch (parse_tree__parse_tree_out_pragma__IsLocal_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22;

          {
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "exported")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
          }
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_22);
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22;

          {
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "local")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_15_18)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
          }
          parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_22);
        }
        break;
    }
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_19_22)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_24);
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__parse_tree_out_pragma__FileName_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35;
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25;

        {
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_35);
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 13)));
        {
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_33)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_11_35)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_36);
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_12_36)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_25);
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_59;
        MR_String parse_tree__parse_tree_out_pragma__Code_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_13, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45;
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45;
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25;

        {
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_24)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45 = ((MR_String) parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_45);
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_59);
        }
        {
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_59, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[1], parse_tree__parse_tree_out_pragma__Code_32, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_9_45)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46 = ((MR_String) parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_46);
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_10_46)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25 = ((MR_String) parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_25);
      }
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_22_25)), &parse_tree__parse_tree_out_pragma__conv23_String_4);
    }
    parse_tree__parse_tree_out_pragma__String_4 = ((MR_String) parse_tree__parse_tree_out_pragma__conv23_String_4);
    return parse_tree__parse_tree_out_pragma__String_4;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0_1(
  MR_Box parse_tree__parse_tree_out_pragma__closure_arg,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pragma__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pragma__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pragma__closure = parse_tree__parse_tree_out_pragma__closure_arg;

    {
      parse_tree__parse_tree_out_pragma__mercury_format_escaped_char_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__parse_tree_out_pragma__wrapper_arg_1), parse_tree__parse_tree_out_pragma__wrapper_arg_2, parse_tree__parse_tree_out_pragma__wrapper_arg_3);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__FDInfo_4)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
    MR_Word parse_tree__parse_tree_out_pragma__Lang_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) & (MR_Integer) 3);
    MR_Word parse_tree__parse_tree_out_pragma__IsLocal_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word parse_tree__parse_tree_out_pragma__LiteralOrInclude_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__FDInfo_4, (MR_Integer) 1)));
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18;
    MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_22)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7;

    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ":- pragma foreign_decl(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_12_18);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, parse_tree__parse_tree_out_pragma__Lang_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_U_13_19);
    }
    parse_tree__parse_tree_out_pragma__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_3(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_U_15_21);
    }
    switch (parse_tree__parse_tree_out_pragma__IsLocal_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25;

          {
            parse_tree__parse_tree_out_pragma__func_5(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "exported")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_19_25);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25;

          {
            parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "local")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_19_25);
          }
        }
        break;
    }
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_21_27);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__LiteralOrInclude_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__parse_tree_out_pragma__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28;

        {
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "include_file(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_11_38);
        }
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 13)));
        {
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__parse_tree_out_pragma__FileName_36)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_12_39);
        }
        parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_U_22_28);
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pragma__TypeInfo_15_62;
        MR_String parse_tree__parse_tree_out_pragma__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__LiteralOrInclude_16, (MR_Integer) 0)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_17)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48;
        MR_Box parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_20)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28;

        {
          parse_tree__parse_tree_out_pragma__func_17(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv18_STATE_VARIABLE_U_9_48);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 1, &parse_tree__parse_tree_out_pragma__TypeInfo_15_62);
        }
        {
          mercury__string__foldl_4_p_0(parse_tree__parse_tree_out_pragma__TypeInfo_15_62, (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_5[0], parse_tree__parse_tree_out_pragma__Code_35, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv19_STATE_VARIABLE_U_10_49);
        }
        parse_tree__parse_tree_out_pragma__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_20(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv21_STATE_VARIABLE_U_22_28);
        }
      }
    parse_tree__parse_tree_out_pragma__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_22(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_9), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv23_STATE_VARIABLE_IO_7);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_pragma_decl_to_string_5_f_0(
  MR_Word parse_tree__parse_tree_out_pragma__PredName_7,
  MR_Integer parse_tree__parse_tree_out_pragma__Arity_8,
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_9,
  MR_String parse_tree__parse_tree_out_pragma__PragmaName_10,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_11)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_String parse_tree__parse_tree_out_pragma__String_12;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[1];
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_23;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
    MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30;
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv16_String_12;

    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__DeclaredArity_23 = (parse_tree__parse_tree_out_pragma__Arity_8 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__DeclaredArity_23 = parse_tree__parse_tree_out_pragma__Arity_8;
        break;
    }
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27 = ((MR_String) parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_27);
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_10)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_20_27)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28 = ((MR_String) parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_28);
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_21_28)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30 = ((MR_String) parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_30);
    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_7, ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_23_30)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32 = ((MR_String) parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_32);
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "/")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_25_32)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34 = ((MR_String) parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_34);
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_23)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_27_34)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
    }
    parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35 = ((MR_String) parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_35);
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35;
    else
      {
        MR_String parse_tree__parse_tree_out_pragma__After_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_11, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38;

        {
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_28_35)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37 = ((MR_String) parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_37);
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_24)), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_30_37)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
        }
        parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38 = ((MR_String) parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_38);
      }
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) (parse_tree__parse_tree_out_pragma__STATE_VARIABLE_U_31_38)), &parse_tree__parse_tree_out_pragma__conv16_String_12);
    }
    parse_tree__parse_tree_out_pragma__String_12 = ((MR_String) parse_tree__parse_tree_out_pragma__conv16_String_12);
    return parse_tree__parse_tree_out_pragma__String_12;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__PredName_8,
  MR_Integer parse_tree__parse_tree_out_pragma__Arity_9,
  MR_Word parse_tree__parse_tree_out_pragma__PredOrFunc_10,
  MR_String parse_tree__parse_tree_out_pragma__PragmaName_11,
  MR_Word parse_tree__parse_tree_out_pragma__MaybeAfter_12)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17 = (MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0];
    MR_Integer parse_tree__parse_tree_out_pragma__DeclaredArity_26;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33;
    MR_Box parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38;
    void MR_CALL (* parse_tree__parse_tree_out_pragma__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15;

    switch (parse_tree__parse_tree_out_pragma__PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_pragma__DeclaredArity_26 = (parse_tree__parse_tree_out_pragma__Arity_9 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pragma__DeclaredArity_26 = parse_tree__parse_tree_out_pragma__Arity_9;
        break;
    }
    parse_tree__parse_tree_out_pragma__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_0(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ":- pragma ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_U_20_30);
    }
    parse_tree__parse_tree_out_pragma__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_2(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__PragmaName_11)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_U_21_31);
    }
    parse_tree__parse_tree_out_pragma__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_4(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_U_23_33);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0, parse_tree__parse_tree_out_pragma__PredName_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv6_STATE_VARIABLE_U_25_35);
    }
    parse_tree__parse_tree_out_pragma__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_7(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv8_STATE_VARIABLE_U_27_37);
    }
    parse_tree__parse_tree_out_pragma__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_pragma__func_9(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__DeclaredArity_26)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv10_STATE_VARIABLE_U_28_38);
    }
    if ((parse_tree__parse_tree_out_pragma__MaybeAfter_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_String parse_tree__parse_tree_out_pragma__After_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pragma__MaybeAfter_12, (MR_Integer) 0)));
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40;
        void MR_CALL (* parse_tree__parse_tree_out_pragma__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41;

        {
          parse_tree__parse_tree_out_pragma__func_11(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv12_STATE_VARIABLE_U_30_40);
        }
        parse_tree__parse_tree_out_pragma__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pragma__func_13(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_pragma__After_27)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv14_STATE_VARIABLE_U_31_41);
        }
      }
    parse_tree__parse_tree_out_pragma__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pragma__func_15(((MR_Box) parse_tree__parse_tree_out_pragma__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ").\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv16_STATE_VARIABLE_IO_15);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pragma__mercury_output_item_pragma_4_p_0(
  MR_Word parse_tree__parse_tree_out_pragma__Info_5,
  MR_Word parse_tree__parse_tree_out_pragma__ItemPragma_6)
{
  {
    MR_bool parse_tree__parse_tree_out_pragma__succeeded;
    MR_Word parse_tree__parse_tree_out_pragma__Pragma_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_pragma__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_pragma__Lang_12;
    MR_Word parse_tree__parse_tree_out_pragma__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 1)));
    MR_Integer parse_tree__parse_tree_out_pragma___SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__ItemPragma_6, (MR_Integer) 3)));

    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out_pragma__Info_5, parse_tree__parse_tree_out_pragma__Context_10);
    }
    {
      parse_tree__parse_tree_out_pragma__Lang_12 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(parse_tree__parse_tree_out_pragma__Info_5);
    }
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FDInfo_13 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8), (MR_Integer) 0);

          {
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_decl_3_p_0(parse_tree__parse_tree_out_pragma__FDInfo_13);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FCInfo_14 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_pragma__Pragma_8), (MR_Integer) 1);

          {
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_code_3_p_0(parse_tree__parse_tree_out_pragma__FCInfo_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_out_pragma__FPInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 0)));

          {
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__FPInfo_16);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FPEInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_IO_41;

              {
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_proc_export_4_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__FPEInfo_17, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv4_STATE_VARIABLE_IO_41);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FEEInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_IO_41;

              {
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_export_enum_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FEEInfo_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv3_STATE_VARIABLE_IO_41);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FEInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_41;

              {
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_foreign_enum_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FEInfo_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv2_STATE_VARIABLE_IO_41);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_tree_out_pragma__ExternalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_41;

              {
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_external_proc_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__ExternalInfo_20, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv0_STATE_VARIABLE_IO_41);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__parse_tree_out_pragma__TypeSpecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0((MR_Integer) 0, parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__TypeSpecInfo_21);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_23, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_23, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_24, parse_tree__parse_tree_out_pragma__Arity_25, (MR_Integer) 0, (MR_String) "inline", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_118, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_118, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_119, parse_tree__parse_tree_out_pragma__Arity_120, (MR_Integer) 0, (MR_String) "no_inline", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_121, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_121, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_122, parse_tree__parse_tree_out_pragma__Arity_123, (MR_Integer) 0, (MR_String) "consider_used", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word parse_tree__parse_tree_out_pragma__UnusedArgsInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(parse_tree__parse_tree_out_pragma__UnusedArgsInfo_26);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word parse_tree__parse_tree_out_pragma__ExceptionsInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(parse_tree__parse_tree_out_pragma__ExceptionsInfo_27);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word parse_tree__parse_tree_out_pragma__TrailingInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(parse_tree__parse_tree_out_pragma__TrailingInfo_28);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word parse_tree__parse_tree_out_pragma__TablingInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(parse_tree__parse_tree_out_pragma__TablingInfo_29);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_124, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_124, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_125, parse_tree__parse_tree_out_pragma__Arity_126, (MR_Integer) 0, (MR_String) "obsolete", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_127, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_127, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_128, parse_tree__parse_tree_out_pragma__Arity_129, (MR_Integer) 0, (MR_String) "no_determinism_warning", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word parse_tree__parse_tree_out_pragma__RequireTailrecPragma_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_tail_recursion_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__RequireTailrecPragma_30);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word parse_tree__parse_tree_out_pragma__TabledInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_tabled_3_p_0(parse_tree__parse_tree_out_pragma__TabledInfo_31);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FactTableInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_IO_41;

              {
                parse_tree__parse_tree_out_pragma__mercury_format_pragma_fact_table_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__FactTableInfo_32, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv1_STATE_VARIABLE_IO_41);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word parse_tree__parse_tree_out_pragma__OISUInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_oisu_3_p_0(parse_tree__parse_tree_out_pragma__OISUInfo_34);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_130, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_130, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_131, parse_tree__parse_tree_out_pragma__Arity_132, (MR_Integer) 0, (MR_String) "promise_equivalent_clauses", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_133, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_133, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_134, parse_tree__parse_tree_out_pragma__Arity_135, (MR_Integer) 0, (MR_String) "promise_pure", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_136, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_136, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_137, parse_tree__parse_tree_out_pragma__Arity_138, (MR_Integer) 0, (MR_String) "promise_semipure", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word parse_tree__parse_tree_out_pragma__TermInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__TermInfo_35);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word parse_tree__parse_tree_out_pragma__Term2Info_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_4_p_0(parse_tree__parse_tree_out_pragma__Lang_12, parse_tree__parse_tree_out_pragma__Term2Info_36);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_139, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_139, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_140, parse_tree__parse_tree_out_pragma__Arity_141, (MR_Integer) 0, (MR_String) "terminates", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_142, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_142, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_143, parse_tree__parse_tree_out_pragma__Arity_144, (MR_Integer) 0, (MR_String) "does_not_terminate", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_145, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_145, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_146, parse_tree__parse_tree_out_pragma__Arity_147, (MR_Integer) 0, (MR_String) "check_termination", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word parse_tree__parse_tree_out_pragma__PredNameArity_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_pragma__Pred_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_148, (MR_Integer) 0)));
              MR_Integer parse_tree__parse_tree_out_pragma__Arity_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pragma__PredNameArity_148, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(parse_tree__parse_tree_out_pragma__Pred_149, parse_tree__parse_tree_out_pragma__Arity_150, (MR_Integer) 0, (MR_String) "mode_check_clauses", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word parse_tree__parse_tree_out_pragma__SharingInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__SharingInfo_37);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word parse_tree__parse_tree_out_pragma__ReuseInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0(parse_tree__parse_tree_out_pragma__Lang_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pragma__ReuseInfo_38);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word parse_tree__parse_tree_out_pragma__FIMInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(parse_tree__parse_tree_out_pragma__FIMInfo_15);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word parse_tree__parse_tree_out_pragma__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_reserve_tag_3_p_0(parse_tree__parse_tree_out_pragma__TypeCtor_33);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word parse_tree__parse_tree_out_pragma__RFSInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_pragma__Pragma_8, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_41;

              {
                parse_tree__parse_tree_out_pragma__mercury_output_pragma_require_feature_set_3_p_0((MR_Word) &parse_tree__parse_tree_out_pragma_scalar_common_1[0], parse_tree__parse_tree_out_pragma__RFSInfo_39, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pragma__conv5_STATE_VARIABLE_IO_41);
              }
            }
            break;
        }
        break;
    }
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

/* :- end_module parse_tree.parse_tree_out_pragma. */
