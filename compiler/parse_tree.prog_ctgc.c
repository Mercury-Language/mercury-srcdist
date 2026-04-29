/*
** Automatically generated from `prog_ctgc.m'
** by the Mercury compiler,
** version rotd-2026-04-29
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


// :- module parse_tree.prog_ctgc.
// :- implementation.

/*
INIT mercury__parse_tree__prog_ctgc__init
ENDINIT
*/

#include "parse_tree.prog_ctgc.mih"


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
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_String MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__func__do_format_structure_sharing_domain__632__1_1_f_0(
  MR_Word HeadVar__1_45);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word ReuseCond_10,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word SharingPairs_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13);

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_pair_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word SharingPair_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15);

static MR_Box MR_CALL 
parse_tree__prog_ctgc__format_datastruct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_ctgc__format_datastruct_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word DataStruct_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
  MR_Word TVarSet_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
  MR_Word Type_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SharingPair_4);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
  MR_Word ListTerm_3,
  MR_Word * ArgumentTerms_4);

static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Term_3);


static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_2[5][3];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_4[3][5];

static /* final */ const MR_Integer parse_tree__prog_ctgc_scalar_common_5[1][3];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_6[3][10];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_7[1][8];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_8[2][6];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_9[3][7];




static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 10U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "from parse_structure_sharing_domain")) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 9U) },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Integer parse_tree__prog_ctgc_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_6[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_8[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_9[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_String MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__func__do_format_structure_sharing_domain__632__1_1_f_0(
  MR_Word HeadVar__1_45)
{
  MR_String HeadVar__2_46;

  HeadVar__2_46 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (HeadVar__1_45)));
  return HeadVar__2_46;
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_structure_sharing_pair_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_datastruct_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word ReuseCond_10,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  MR_Word TypeInfo_29_41;
  MR_Word TypeInfo_29_51;
  MR_Word DeadNodes_12 = ((MR_Word) ((MR_hl_field(0, ReuseCond_10, 0))));
  MR_Word InUseNodes_13 = ((MR_Word) ((MR_hl_field(0, ReuseCond_10, 1))));
  MR_Word Sharing_14 = ((MR_Word) ((MR_hl_field(0, ReuseCond_10, 2))));
  MR_Word DeadNodesList_15;
  MR_Box STATE_VARIABLE_U_1_19;
  MR_Box STATE_VARIABLE_U_2_20;
  MR_Box STATE_VARIABLE_U_3_22;
  MR_Box STATE_VARIABLE_U_4_23;
  MR_Box STATE_VARIABLE_U_5_25;
  MR_Box STATE_VARIABLE_U_6_28;
  MR_Box STATE_VARIABLE_U_1_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Box STATE_VARIABLE_U_2_36;
  MR_Box STATE_VARIABLE_U_1_43;
  MR_Box STATE_VARIABLE_U_2_46;
  MR_Box STATE_VARIABLE_U_1_58;
  MR_Box STATE_VARIABLE_U_2_60;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  DeadNodesList_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), DeadNodes_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "condition(")), S_7, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_1_19);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "[")), S_7, STATE_VARIABLE_U_1_19, &STATE_VARIABLE_U_1_33);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_30));
    MR_hl_field(0, Var_34, 4) = S_7;
    MR_hl_field(0, Var_34, 5) = ((MR_Box) (VarNameSrc_8));
    MR_hl_field(0, Var_34, 6) = ((MR_Box) (TypeVarSet_9));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_2));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_30));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_String) ", "));
    MR_hl_field(0, Var_35, 5) = S_7;
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_30, (MR_Integer) 3, &TypeInfo_29_41);
  mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), TypeInfo_29_41, Var_34, Var_35, DeadNodesList_15, STATE_VARIABLE_U_1_33, &STATE_VARIABLE_U_2_36);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_2_36, &STATE_VARIABLE_U_2_20);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_3(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_2_20, &STATE_VARIABLE_U_3_22);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "[")), S_7, STATE_VARIABLE_U_3_22, &STATE_VARIABLE_U_1_43);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_30, (MR_Integer) 3, &TypeInfo_29_51);
  mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), TypeInfo_29_51, Var_34, Var_35, InUseNodes_13, STATE_VARIABLE_U_1_43, &STATE_VARIABLE_U_2_46);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_5(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_2_46, &STATE_VARIABLE_U_4_23);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_6(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_4_23, &STATE_VARIABLE_U_5_25);
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_7(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "")), S_7, STATE_VARIABLE_U_5_25, &STATE_VARIABLE_U_1_58);
  switch (MR_tag((MR_Word) Sharing_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));

        func_8(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "bottom")), S_7, STATE_VARIABLE_U_1_58, &STATE_VARIABLE_U_2_60);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_42_87;
        MR_Word SharingPairs_74 = ((MR_Word) ((MR_hl_field(1, Sharing_14, 0))));
        MR_Box STATE_VARIABLE_U_1_77;
        MR_Word Var_78;
        MR_Box STATE_VARIABLE_U_4_83;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_9(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "[")), S_7, STATE_VARIABLE_U_1_58, &STATE_VARIABLE_U_1_77);
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
          MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0_3));
          MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_78, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_30));
          MR_hl_field(0, Var_78, 4) = S_7;
          MR_hl_field(0, Var_78, 5) = ((MR_Box) (VarNameSrc_8));
          MR_hl_field(0, Var_78, 6) = ((MR_Box) (TypeVarSet_9));
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_30, (MR_Integer) 3, &TypeInfo_42_87);
        mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), TypeInfo_42_87, Var_78, Var_35, SharingPairs_74, STATE_VARIABLE_U_1_77, &STATE_VARIABLE_U_4_83);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_4_83, &STATE_VARIABLE_U_2_60);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));

        func_11(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "top")), S_7, STATE_VARIABLE_U_1_58, &STATE_VARIABLE_U_2_60);
      }
      break;
  }
  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_12(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) "")), S_7, STATE_VARIABLE_U_2_60, &STATE_VARIABLE_U_6_28);
  func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, 0)), 6))));
  func_13(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_6_28, STATE_VARIABLE_U_17);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_structure_sharing_pair_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word SharingPairs_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word TypeInfo_42_33;
  MR_Box STATE_VARIABLE_U_1_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Box STATE_VARIABLE_U_4_29;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) "[")), S_7, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_23);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_24, 4) = S_7;
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (VarNameSrc_8));
    MR_hl_field(0, Var_24, 6) = ((MR_Box) (TypeVarSet_9));
  }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_structure_sharing_as_list_6_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_18));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_String) ","));
    MR_hl_field(0, Var_25, 5) = S_7;
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 3, &TypeInfo_42_33);
  mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), TypeInfo_42_33, Var_24, Var_25, SharingPairs_10, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_4_29);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_4_29, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_structure_sharing_pair_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word SharingPair_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_Word D1_12 = ((MR_Word) ((MR_hl_field(0, SharingPair_10, 0))));
  MR_Word D2_13 = ((MR_Word) ((MR_hl_field(0, SharingPair_10, 1))));
  MR_Box STATE_VARIABLE_U_1_17;
  MR_Box STATE_VARIABLE_U_2_18;
  MR_Box STATE_VARIABLE_U_3_20;
  MR_Box STATE_VARIABLE_U_4_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "pair(")), S_7, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_17);
  parse_tree__prog_ctgc__format_datastruct_6_p_0(TypeClassInfo_for_pt_output_23, S_7, VarNameSrc_8, TypeVarSet_9, D1_12, STATE_VARIABLE_U_1_17, &STATE_VARIABLE_U_2_18);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_2_18, &STATE_VARIABLE_U_3_20);
  parse_tree__prog_ctgc__format_datastruct_6_p_0(TypeClassInfo_for_pt_output_23, S_7, VarNameSrc_8, TypeVarSet_9, D2_13, STATE_VARIABLE_U_3_20, &STATE_VARIABLE_U_4_21);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_4_21, STATE_VARIABLE_U_15);
}

static MR_Box MR_CALL 
parse_tree__prog_ctgc__format_datastruct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_ctgc__format_datastruct_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word DataStruct_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_String VarName_12;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, DataStruct_10, 0))));
  MR_Box STATE_VARIABLE_U_1_17;
  MR_Box STATE_VARIABLE_U_2_18;
  MR_Box STATE_VARIABLE_U_3_20;
  MR_Word Var_21;
  MR_Box STATE_VARIABLE_U_4_22;
  MR_String Var_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__var_db__lookup_var_name_in_source_3_p_0(VarNameSrc_8, Var_15, &VarName_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "cel(")), S_7, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_1_17);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (VarName_12)), S_7, STATE_VARIABLE_U_1_17, &STATE_VARIABLE_U_2_18);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_2_18, &STATE_VARIABLE_U_3_20);
  Var_21 = ((MR_Word) ((MR_hl_field(0, DataStruct_10, 1))));
  if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_27 = (MR_String) "[]";
  else
  {
    MR_Word SelectorStrings_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_String Var_33;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_8[1]));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_datastruct_6_p_0_1));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_29, 3) = ((MR_Box) (TypeVarSet_9));
    }
    SelectorStrings_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_21);
    Var_33 = mercury__string__join_list_2_f_0((MR_String) ",", SelectorStrings_28);
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_1[5])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
    }
    mercury__string__append_list_2_p_0(Var_30, &Var_27);
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Var_27)), S_7, STATE_VARIABLE_U_3_20, &STATE_VARIABLE_U_4_22);
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
  func_5(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_4_22, STATE_VARIABLE_U_14);
}

static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
  MR_Word TVarSet_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer Index_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word Var_7;
    MR_Word Var_9;
    MR_String Var_10;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_String Var_16;
    MR_Integer Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_String Var_21;

    Var_10 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 0, ConsId_5);
    Var_17 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_5);
    Var_16 = mercury__string__int_to_string_1_f_0(Var_17);
    Var_21 = mercury__string__int_to_string_1_f_0(Index_6);
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_1[6])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_String) ","));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) ((MR_String) ","));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_7, 0) = ((MR_Box) ((MR_String) "sel("));
      MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_9));
    }
    HeadVar__3_3 = mercury__string__append_list_1_f_0(Var_7);
  }
  else
  {
    MR_Word TypeSel_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_27;
    MR_Word Var_29;
    MR_String Var_30;

    Var_30 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_1, (MR_Integer) 0, TypeSel_26);
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_1[6])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "typesel("));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
    }
    HeadVar__3_3 = mercury__string__append_list_1_f_0(Var_27);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
  MR_Word Type_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Type_3));
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SharingPair_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_22_31;
  MR_Word TypeCtorInfo_23_32;
  MR_Word TypeCtorInfo_26_33;
  MR_Word TypeCtorInfo_27_34;
  MR_Word TypeCtorInfo_22_51;
  MR_Word TypeCtorInfo_23_52;
  MR_Word TypeCtorInfo_26_53;
  MR_Word TypeCtorInfo_27_54;
  MR_Word Left_5;
  MR_Word Right_6;
  MR_Word LeftData_8;
  MR_Word RightData_9;
  MR_Word Var_10;
  MR_String Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word VarTerm_15;
  MR_Word TypesTerm_16;
  MR_Word GenericVar_18;
  MR_Word ProgVar_20;
  MR_Word TypeTermsList_21;
  MR_Word Types_22;
  MR_Word Selector_23;
  MR_Word Var_24;
  MR_String Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word VarTerm_35;
  MR_Word TypesTerm_36;
  MR_Word GenericVar_38;
  MR_Word ProgVar_40;
  MR_Word TypeTermsList_41;
  MR_Word Types_42;
  MR_Word Selector_43;
  MR_Word Var_44;
  MR_String Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_10, 0))));
      succeeded = (strcmp(Var_11, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Left_5 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Right_6 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
            succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Left_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_24 = ((MR_Word) ((MR_hl_field(0, Left_5, 0))));
                Var_26 = ((MR_Word) ((MR_hl_field(0, Left_5, 1))));
                succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_25 = ((MR_String) ((MR_hl_field(0, Var_24, 0))));
                  succeeded = (strcmp(Var_25, (MR_String) "cel") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      VarTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
                      Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
                      succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        TypesTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
                        Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 1))));
                        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) VarTerm_15)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            GenericVar_18 = ((MR_Word) ((MR_hl_field(1, VarTerm_15, 0))));
                            TypeCtorInfo_22_31 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            TypeCtorInfo_23_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            mercury__term__coerce_var_2_p_0(TypeCtorInfo_22_31, TypeCtorInfo_23_32, GenericVar_18, &ProgVar_20);
                            succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(TypesTerm_16, &TypeTermsList_21);
                            if (succeeded)
                            {
                              Var_29 = (MR_Word) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_3[2]));
                              succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(Var_29, TypeTermsList_21, &Types_22);
                              if (succeeded)
                              {
                                Var_30 = (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[3]);
                                TypeCtorInfo_26_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                                TypeCtorInfo_27_34 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0);
                                mercury__list__map_3_p_0(TypeCtorInfo_26_33, TypeCtorInfo_27_34, Var_30, Types_22, &Selector_23);
                                succeeded = ((MR_tag((MR_Word) Right_6)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_44 = ((MR_Word) ((MR_hl_field(0, Right_6, 0))));
                                  Var_46 = ((MR_Word) ((MR_hl_field(0, Right_6, 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_45 = ((MR_String) ((MR_hl_field(0, Var_44, 0))));
                                    succeeded = (strcmp(Var_45, (MR_String) "cel") == 0);
                                    if (succeeded)
                                    {
                                      succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        VarTerm_35 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
                                        Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
                                        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          TypesTerm_36 = ((MR_Word) ((MR_hl_field(1, Var_47, 0))));
                                          Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, 1))));
                                          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = ((MR_tag((MR_Word) VarTerm_35)) == (MR_Integer) 1);
                                            if (succeeded)
                                            {
                                              GenericVar_38 = ((MR_Word) ((MR_hl_field(1, VarTerm_35, 0))));
                                              TypeCtorInfo_22_51 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                              TypeCtorInfo_23_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                              {
                                                LeftData_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                                MR_hl_field(0, LeftData_8, 0) = ((MR_Box) (ProgVar_20));
                                                MR_hl_field(0, LeftData_8, 1) = ((MR_Box) (Selector_23));
                                              }
                                              mercury__term__coerce_var_2_p_0(TypeCtorInfo_22_51, TypeCtorInfo_23_52, GenericVar_38, &ProgVar_40);
                                              succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(TypesTerm_36, &TypeTermsList_41);
                                              if (succeeded)
                                              {
                                                Var_49 = (MR_Word) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_3[2]));
                                                succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(Var_49, TypeTermsList_41, &Types_42);
                                                if (succeeded)
                                                {
                                                  Var_50 = (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[4]);
                                                  TypeCtorInfo_26_53 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                                                  TypeCtorInfo_27_54 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0);
                                                  mercury__list__map_3_p_0(TypeCtorInfo_26_53, TypeCtorInfo_27_54, Var_50, Types_42, &Selector_43);
                                                  {
                                                    RightData_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(0, RightData_9, 0) = ((MR_Box) (ProgVar_40));
                                                    MR_hl_field(0, RightData_9, 1) = ((MR_Box) (Selector_43));
                                                  }
                                                  {
                                                    MR_Word base;
                                                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                                    *SharingPair_4 = base;
                                                    MR_hl_field(0, base, 0) = ((MR_Box) (LeftData_8));
                                                    MR_hl_field(0, base, 1) = ((MR_Box) (RightData_9));
                                                  }
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(
  MR_Word Dict_1,
  MR_Word TypeSubst_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__3_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Conds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word RenConds_12;
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_9[2]));
          MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1));
          MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_13, 3) = ((MR_Box) (Dict_1));
          MR_hl_field(0, Var_13, 4) = ((MR_Box) (TypeSubst_2));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), Var_13, Conds_11, &RenConds_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (RenConds_12));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0(
  MR_Word Dict_5,
  MR_Word TypeSubst_6,
  MR_Word Conds_7,
  MR_Word * RenConds_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_9[2]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Dict_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (TypeSubst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), Var_9, Conds_7, RenConds_8);
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Data_13;

  parse_tree__prog_ctgc__rename_datastruct_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Data_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Data_13));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(
  MR_Word Dict_5,
  MR_Word TypeSubst_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word DeadNodes_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word LiveNodes_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word Sharing_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
  MR_Word RenDeadNodes_10;
  MR_Word RenLiveNodes_11;
  MR_Word RenSharing_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_9[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Dict_5));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (TypeSubst_6));
  }
  mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_13, DeadNodes_7, &RenDeadNodes_10);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_13, LiveNodes_8, &RenLiveNodes_11);
  parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(Dict_5, TypeSubst_6, Sharing_9, &RenSharing_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RenDeadNodes_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (RenLiveNodes_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (RenSharing_12));
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Pair_13;

  parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Pair_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Pair_13));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(
  MR_Word HeadVars_6,
  MR_Word NewHeadVars_7,
  MR_Word NewTypes_8,
  MR_Word STATE_VARIABLE_UserSharing_0_20,
  MR_Word * STATE_VARIABLE_UserSharing_21)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_UserSharing_0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UserSharing_21 = STATE_VARIABLE_UserSharing_0_20;
  else
  {
    MR_Word MaybeTypes_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_UserSharing_0_20, 1))));
    MR_Word STATE_VARIABLE_SharingDomain_1_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_UserSharing_0_20, 0))));
    MR_Word STATE_VARIABLE_SharingDomain_2_24;

    switch (MR_tag((MR_Word) STATE_VARIABLE_SharingDomain_1_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_SharingDomain_2_24 = STATE_VARIABLE_SharingDomain_1_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingPairs_14 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_SharingDomain_1_22, 0))));
          MR_Word VarRenaming_15;
          MR_Word TypeSubst_18;
          MR_Word NewSharingPairs_19;
          MR_Word Var_30;
          MR_Word UserSharingTypes_16;
          MR_Word Var_23;

          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), HeadVars_6, NewHeadVars_7, &VarRenaming_15);
          succeeded = (MaybeTypes_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_23 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_11, 0))));
            UserSharingTypes_16 = ((MR_Word) ((MR_hl_field(0, Var_23, 0))));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(UserSharingTypes_16, NewTypes_8, &TypeSubst_18);
          else
            TypeSubst_18 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_9[0]));
            MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1));
            MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_30, 3) = ((MR_Box) (VarRenaming_15));
            MR_hl_field(0, Var_30, 4) = ((MR_Box) (TypeSubst_18));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), Var_30, SharingPairs_14, &NewSharingPairs_19);
          {
            STATE_VARIABLE_SharingDomain_2_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_SharingDomain_2_24, 0) = ((MR_Box) (NewSharingPairs_19));
          }
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_SharingDomain_2_24 = STATE_VARIABLE_SharingDomain_1_22;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_UserSharing_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_SharingDomain_2_24));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Pair_13;

  parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Pair_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Pair_13));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(
  MR_Word Dict_1,
  MR_Word TypeSubst_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__4_4 = HeadVar__3_3;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_List_0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word STATE_VARIABLE_List_16;
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_9[0]));
          MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1));
          MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_17, 3) = ((MR_Box) (Dict_1));
          MR_hl_field(0, Var_17, 4) = ((MR_Box) (TypeSubst_2));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), Var_17, STATE_VARIABLE_List_0_15, &STATE_VARIABLE_List_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_List_16));
        }
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__4_4 = HeadVar__3_3;
      break;
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Pair_13;

  parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Pair_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Pair_13));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0(
  MR_Word Dict_5,
  MR_Word TypeSubst_6,
  MR_Word STATE_VARIABLE_List_0_8,
  MR_Word * STATE_VARIABLE_List_9)
{
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_9[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Dict_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (TypeSubst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), Var_10, STATE_VARIABLE_List_0_8, STATE_VARIABLE_List_9);
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_UnitSelector_11;

  parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_UnitSelector_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_UnitSelector_11));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(
  MR_Word Dict_5,
  MR_Word TypeSubst_6,
  MR_Word STATE_VARIABLE_Pair_0_12,
  MR_Word * STATE_VARIABLE_Pair_13)
{
  MR_Word D1_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Pair_0_12, 0))));
  MR_Word D2_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Pair_0_12, 1))));
  MR_Word Da_10;
  MR_Word Db_11;
  MR_Word Var0_14 = ((MR_Word) ((MR_hl_field(0, D1_8, 0))));
  MR_Word Sel0_15 = ((MR_Word) ((MR_hl_field(0, D1_8, 1))));
  MR_Word Var_16;
  MR_Word Sel_17;
  MR_Word Var_19;
  MR_Word Var0_21;
  MR_Word Sel0_22;
  MR_Word Var_23;
  MR_Word Sel_24;
  MR_Box conv0_Var_16;
  MR_Box conv2_Var_23;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), Dict_5, ((MR_Box) (Var0_14)), &conv0_Var_16);
  Var_16 = ((MR_Word) (conv0_Var_16));
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_8[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeSubst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), Var_19, Sel0_15, &Sel_17);
  {
    Da_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Da_10, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, Da_10, 1) = ((MR_Box) (Sel_17));
  }
  Var0_21 = ((MR_Word) ((MR_hl_field(0, D2_9, 0))));
  Sel0_22 = ((MR_Word) ((MR_hl_field(0, D2_9, 1))));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), Dict_5, ((MR_Box) (Var0_21)), &conv2_Var_23);
  Var_23 = ((MR_Word) (conv2_Var_23));
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), Var_19, Sel0_22, &Sel_24);
  {
    Db_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Db_11, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Db_11, 1) = ((MR_Box) (Sel_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Pair_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Da_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Db_11));
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_UnitSelector_11;

  parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_UnitSelector_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_UnitSelector_11));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0(
  MR_Word Dict_5,
  MR_Word Subst_6,
  MR_Word STATE_VARIABLE_Data_0_12,
  MR_Word * STATE_VARIABLE_Data_13)
{
  MR_Word Var0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Data_0_12, 0))));
  MR_Word Sel0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Data_0_12, 1))));
  MR_Word Var_10;
  MR_Word Sel_11;
  MR_Word Var_15;
  MR_Box conv0_Var_10;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[1]), Dict_5, ((MR_Box) (Var0_8)), &conv0_Var_10);
  Var_10 = ((MR_Word) (conv0_Var_10));
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_8[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_4_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Subst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), Var_15, Sel0_9, &Sel_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Data_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Sel_11));
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UnitSelector_11;

  parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_UnitSelector_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_UnitSelector_11));
}

void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0(
  MR_Word TypeSubst_4,
  MR_Word STATE_VARIABLE_Selector_0_6,
  MR_Word * STATE_VARIABLE_Selector_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_8[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_selector_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (TypeSubst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), Var_8, STATE_VARIABLE_Selector_0_6, STATE_VARIABLE_Selector_7);
}

void MR_CALL 
parse_tree__prog_ctgc__rename_unit_selector_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_UnitSelector_0_10,
  MR_Word * STATE_VARIABLE_UnitSelector_11)
{
  if (((MR_tag((MR_Word) STATE_VARIABLE_UnitSelector_0_10)) == (MR_Integer) 0))
    *STATE_VARIABLE_UnitSelector_11 = STATE_VARIABLE_UnitSelector_0_10;
  else
  {
    MR_Word Type0_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_UnitSelector_0_10, 0))));
    MR_Word Type_9;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, Type0_8, &Type_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_UnitSelector_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

void MR_CALL 
parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word MaybeReuseDomain_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  if ((MaybeReuseDomain_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "not_available")), S_7, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  }
  else
  {
    MR_Word ReuseDomain_12 = ((MR_Word) ((MR_hl_field(1, MaybeReuseDomain_10, 0))));
    MR_Box STATE_VARIABLE_U_2_18;
    MR_Box STATE_VARIABLE_U_3_22;
    MR_Box STATE_VARIABLE_U_1_26;
    MR_Box STATE_VARIABLE_U_2_28;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_1(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "yes(")), S_7, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_2_18);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "")), S_7, STATE_VARIABLE_U_2_18, &STATE_VARIABLE_U_1_26);
    switch (MR_tag((MR_Word) ReuseDomain_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ReuseDomain_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));

              func_5(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "has_no_reuse")), S_7, STATE_VARIABLE_U_1_26, &STATE_VARIABLE_U_2_28);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "has_only_unconditional_reuse")), S_7, STATE_VARIABLE_U_1_26, &STATE_VARIABLE_U_2_28);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_26_38;
          MR_Word ReuseConditions_25 = ((MR_Word) ((MR_hl_field(1, ReuseDomain_12, 0))));
          MR_Box STATE_VARIABLE_U_4_31;
          MR_Box STATE_VARIABLE_U_5_32;
          MR_Word Var_34;
          MR_Word Var_35;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_3(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "has_conditional_reuse([")), S_7, STATE_VARIABLE_U_1_26, &STATE_VARIABLE_U_4_31);
          {
            Var_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[1]));
            MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0_1));
            MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_24));
            MR_hl_field(0, Var_34, 4) = S_7;
            MR_hl_field(0, Var_34, 5) = ((MR_Box) (VarNameSrc_8));
            MR_hl_field(0, Var_34, 6) = ((MR_Box) (TypeVarSet_9));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
            MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_interface_maybe_structure_reuse_domain_6_p_0_2));
            MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_35, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_24));
            MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_String) ", "));
            MR_hl_field(0, Var_35, 5) = S_7;
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_24, (MR_Integer) 3, &TypeInfo_26_38);
          mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), TypeInfo_26_38, Var_34, Var_35, ReuseConditions_25, STATE_VARIABLE_U_4_31, &STATE_VARIABLE_U_5_32);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "])")), S_7, STATE_VARIABLE_U_5_32, &STATE_VARIABLE_U_2_28);
        }
        break;
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    func_7(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "")), S_7, STATE_VARIABLE_U_2_28, &STATE_VARIABLE_U_3_22);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    func_8(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_3_22, STATE_VARIABLE_U_14);
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_structure_reuse_condition_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word ReuseAs_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Box STATE_VARIABLE_U_1_19;
  MR_Box STATE_VARIABLE_U_2_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "%\t ")), S_7, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_19);
  switch (MR_tag((MR_Word) ReuseAs_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ReuseAs_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));

            func_3(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "has_no_reuse")), S_7, STATE_VARIABLE_U_1_19, &STATE_VARIABLE_U_2_21);
          }
          break;
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));

            func_4(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "has_only_unconditional_reuse")), S_7, STATE_VARIABLE_U_1_19, &STATE_VARIABLE_U_2_21);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_26_31;
        MR_Word ReuseConditions_18 = ((MR_Word) ((MR_hl_field(1, ReuseAs_10, 0))));
        MR_Box STATE_VARIABLE_U_4_24;
        MR_Box STATE_VARIABLE_U_5_25;
        MR_Word Var_27;
        MR_Word Var_28;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "has_conditional_reuse([")), S_7, STATE_VARIABLE_U_1_19, &STATE_VARIABLE_U_4_24);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[1]));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0_1));
          MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_27, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_17));
          MR_hl_field(0, Var_27, 4) = S_7;
          MR_hl_field(0, Var_27, 5) = ((MR_Box) (VarNameSrc_8));
          MR_hl_field(0, Var_27, 6) = ((MR_Box) (TypeVarSet_9));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0_2));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_17));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_String) ", \n%\t "));
          MR_hl_field(0, Var_28, 5) = S_7;
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_17, (MR_Integer) 3, &TypeInfo_26_31);
        mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), TypeInfo_26_31, Var_27, Var_28, ReuseConditions_18, STATE_VARIABLE_U_4_24, &STATE_VARIABLE_U_5_25);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "])")), S_7, STATE_VARIABLE_U_5_25, &STATE_VARIABLE_U_2_21);
      }
      break;
  }
  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
  func_5(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\n")), S_7, STATE_VARIABLE_U_2_21, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_structure_sharing_pair_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

void MR_CALL 
parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word MaybeSharingAs_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  if ((MaybeSharingAs_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "not_available")), S_7, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  }
  else
  {
    MR_Word SharingAs_12 = ((MR_Word) ((MR_hl_field(1, MaybeSharingAs_10, 0))));
    MR_Box STATE_VARIABLE_U_2_18;
    MR_Box STATE_VARIABLE_U_3_21;
    MR_Box STATE_VARIABLE_U_1_30;
    MR_Box STATE_VARIABLE_U_2_32;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_1(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "yes(")), S_7, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_2_18);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "")), S_7, STATE_VARIABLE_U_2_18, &STATE_VARIABLE_U_1_30);
    switch (MR_tag((MR_Word) SharingAs_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

          func_3(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "bottom")), S_7, STATE_VARIABLE_U_1_30, &STATE_VARIABLE_U_2_32);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_42_59;
          MR_Word SharingPairs_46 = ((MR_Word) ((MR_hl_field(1, SharingAs_12, 0))));
          MR_Box STATE_VARIABLE_U_1_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Box STATE_VARIABLE_U_4_55;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_4(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "[")), S_7, STATE_VARIABLE_U_1_30, &STATE_VARIABLE_U_1_49);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0_1));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_23));
            MR_hl_field(0, Var_50, 4) = S_7;
            MR_hl_field(0, Var_50, 5) = ((MR_Box) (VarNameSrc_8));
            MR_hl_field(0, Var_50, 6) = ((MR_Box) (TypeVarSet_9));
          }
          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
            MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__prog_ctgc__format_interface_structure_sharing_domain_6_p_0_2));
            MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_23));
            MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_String) ", "));
            MR_hl_field(0, Var_51, 5) = S_7;
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_23, (MR_Integer) 3, &TypeInfo_42_59);
          mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), TypeInfo_42_59, Var_50, Var_51, SharingPairs_46, STATE_VARIABLE_U_1_49, &STATE_VARIABLE_U_4_55);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
          func_5(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_4_55, &STATE_VARIABLE_U_2_32);
        }
        break;
      case (MR_Integer) 2:
        {
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

          func_6(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "top")), S_7, STATE_VARIABLE_U_1_30, &STATE_VARIABLE_U_2_32);
        }
        break;
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
    func_7(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "")), S_7, STATE_VARIABLE_U_2_32, &STATE_VARIABLE_U_3_21);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
    func_8(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_3_21, STATE_VARIABLE_U_14);
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static MR_Box MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__2_46;

  conv4_HeadVar__2_46 = parse_tree__prog_ctgc__IntroducedFrom__func__do_format_structure_sharing_domain__632__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_46));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_output__add_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_ctgc__format_structure_sharing_pair_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Box S_7,
  MR_Word VarNameSrc_8,
  MR_Word TypeVarSet_9,
  MR_Word SharingAs_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Box STATE_VARIABLE_U_1_23;
  MR_Box STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "%\t ")), S_7, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_23);
  switch (MR_tag((MR_Word) SharingAs_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "bottom")), S_7, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_2_25);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_42_52;
        MR_Word SharingPairs_39 = ((MR_Word) ((MR_hl_field(1, SharingAs_10, 0))));
        MR_Box STATE_VARIABLE_U_1_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Box STATE_VARIABLE_U_4_48;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "[")), S_7, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_1_42);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_1));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_19));
          MR_hl_field(0, Var_43, 4) = S_7;
          MR_hl_field(0, Var_43, 5) = ((MR_Box) (VarNameSrc_8));
          MR_hl_field(0, Var_43, 6) = ((MR_Box) (TypeVarSet_9));
        }
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
          MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_2));
          MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_44, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_19));
          MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_String) "\n%\t"));
          MR_hl_field(0, Var_44, 5) = S_7;
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_19, (MR_Integer) 3, &TypeInfo_42_52);
        mercury__list__gap_foldl_5_p_0((MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), TypeInfo_42_52, Var_43, Var_44, SharingPairs_39, STATE_VARIABLE_U_1_42, &STATE_VARIABLE_U_4_48);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_4_48, &STATE_VARIABLE_U_2_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Msgs_20 = ((MR_Word) ((MR_hl_field(2, SharingAs_10, 0))));
        MR_Word MsgStrs_21;
        MR_Word Var_27;
        MR_Box STATE_VARIABLE_U_3_29;
        MR_Word Var_30;
        MR_Box STATE_VARIABLE_U_4_31;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_27 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), Msgs_20);
        MsgStrs_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[2]), Var_27);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "top([")), S_7, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_3_29);
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0_4));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_19));
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 25))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)), ((MR_Box) (Var_30)), ((MR_Box) ((MR_String) "\n%\t")), ((MR_Box) (MsgStrs_21)), S_7, STATE_VARIABLE_U_3_29, &STATE_VARIABLE_U_4_31);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "])")), S_7, STATE_VARIABLE_U_4_31, &STATE_VARIABLE_U_2_25);
      }
      break;
  }
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
  func_8(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) ((MR_String) "\n")), S_7, STATE_VARIABLE_U_2_25, STATE_VARIABLE_U_13);
}

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_SharingPair_4;

  succeeded = parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_SharingPair_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_SharingPair_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0(
  MR_Word STATE_VARIABLE_Varset_0_23,
  MR_Word Term_5,
  MR_Word * UserSharing_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_String Var_65;

  if (succeeded)
  {
    Var_59 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_65 = ((MR_String) ((MR_hl_field(0, Var_59, 0))));
      if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((strcmp(Var_65, (MR_String) "no_sharing") == 0))
        {
          *UserSharing_6 = (MR_Word) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_1[4]));
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Var_65, (MR_String) "unknown_sharing") == 0))
        {
          MR_String ContextStr_9;
          MR_String Msg_10;
          MR_Word Reason_11;
          MR_String Var_33;
          MR_Word Var_35;
          MR_Word Var_36;

          ContextStr_9 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Var_57);
          Var_33 = mercury__string__f_43_43_2_f_0(ContextStr_9, (MR_String) ")");
          Msg_10 = mercury__string__f_43_43_2_f_0((MR_String) "user declared top(", Var_33);
          {
            Reason_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Reason_11, 0) = ((MR_Box) (Msg_10));
          }
          Var_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Reason_11)));
          {
            Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_35, 0) = ((MR_Box) (Var_36));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *UserSharing_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      else
      {
        MR_Word TypesTerm_12;
        MR_Word UserSharingTerm_13;
        MR_Word MaybeUserTypes_19;
        MR_Word Sharing_22;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_String Var_64;
        MR_Word SharingPairTerms_66;

        succeeded = (strcmp(Var_65, (MR_String) "sharing") == 0);
        if (succeeded)
        {
          TypesTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_58, 0))));
          Var_41 = ((MR_Word) ((MR_hl_field(1, Var_58, 1))));
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UserSharingTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
            succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TypesTerm_12)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_62 = ((MR_Word) ((MR_hl_field(0, TypesTerm_12, 0))));
                Var_61 = ((MR_Word) ((MR_hl_field(0, TypesTerm_12, 1))));
                succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_64 = ((MR_String) ((MR_hl_field(0, Var_62, 0))));
                  if ((strcmp(Var_64, (MR_String) "no") == 0))
                  {
                    MaybeUserTypes_19 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  if ((strcmp(Var_64, (MR_String) "yes") == 0))
                  {
                    MR_Word TypeCtorInfo_54_54;
                    MR_Word TypeInfo_55_55;
                    MR_Word TypeCtorInfo_56_56;
                    MR_Word Types_17;
                    MR_Word TypeVars_18;
                    MR_Word Var_47;
                    MR_Word STATE_VARIABLE_Varset_1_48;
                    MR_Word Var_49;
                    MR_Word Var_50;

                    succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0((MR_Word) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_3[2])), Var_61, &Types_17);
                    if (succeeded)
                    {
                      TypeCtorInfo_54_54 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                      mercury__term_vars__vars_in_terms_2_p_0(TypeCtorInfo_54_54, Var_61, &TypeVars_18);
                      TypeInfo_55_55 = (MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[0]);
                      Var_47 = mercury__set__list_to_set_1_f_0(TypeInfo_55_55, TypeVars_18);
                      mercury__varset__select_3_p_0(TypeCtorInfo_54_54, Var_47, STATE_VARIABLE_Varset_0_23, &STATE_VARIABLE_Varset_1_48);
                      TypeCtorInfo_56_56 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
                      Var_50 = mercury__varset__coerce_1_f_0(TypeCtorInfo_54_54, TypeCtorInfo_56_56, STATE_VARIABLE_Varset_1_48);
                      {
                        Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_49, 0) = ((MR_Box) (Types_17));
                        MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_50));
                      }
                      {
                        MaybeUserTypes_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeUserTypes_19, 0) = ((MR_Box) (Var_49));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(UserSharingTerm_13, &SharingPairTerms_66);
                    if (succeeded)
                    {
                      if ((SharingPairTerms_66 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        Sharing_22 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word SharingPairs_67;

                        succeeded = mercury__list__map_3_p_2((MR_Word) (&parse_tree__prog_ctgc_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_ctgc_scalar_common_2[1]), SharingPairTerms_66, &SharingPairs_67);
                        if (succeeded)
                        {
                          {
                            Sharing_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Sharing_22, 0) = ((MR_Box) (SharingPairs_67));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *UserSharing_6 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Sharing_22));
                          MR_hl_field(1, base, 1) = ((MR_Box) (MaybeUserTypes_19));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
  MR_Word ListTerm_3,
  MR_Word * ArgumentTerms_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ListTerm_3)) == (MR_Integer) 0);
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_11;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(0, ListTerm_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, ListTerm_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_11, 0))));
      if ((strcmp(Cons_5, (MR_String) "[]") == 0))
      {
        *ArgumentTerms_4 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Cons_5, (MR_String) "[|]") == 0))
      {
        MR_Word FirstTerm_8;
        MR_Word RestTerm_9;
        MR_Word RestList_10;
        MR_Word Var_12;
        MR_Word Var_13;

        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FirstTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
          succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RestTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
            Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
            succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(RestTerm_9, &RestList_10);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *ArgumentTerms_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (FirstTerm_8));
                  MR_hl_field(1, base, 1) = ((MR_Box) (RestList_10));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      else
        succeeded = MR_FALSE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_domain_1_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word ReuseDomain_4;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
    if (succeeded)
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_9, 0))));
  }
  if (succeeded)
  {
    succeeded = (strcmp(Cons_5, (MR_String) "has_no_reuse") == 0);
    if (succeeded)
      ReuseDomain_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (strcmp(Cons_5, (MR_String) "has_only_unconditional_reuse") == 0);
      if (succeeded)
        ReuseDomain_4 = (MR_Word) ((MR_Unsigned) 4U);
      else
      {
        MR_Word ReuseConditionsTerm_8;
        MR_Word Var_10;

        succeeded = (strcmp(Cons_5, (MR_String) "has_conditional_reuse") == 0);
        if (succeeded)
        {
          succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ReuseConditionsTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
            Var_10 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
            succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_11;

          Var_11 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(TypeInfo_for_T_16, ReuseConditionsTerm_8);
          {
            ReuseDomain_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ReuseDomain_4, 0) = ((MR_Box) (Var_11));
          }
        }
        else
          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain");
      }
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain (term not a functor)");
  return ReuseDomain_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word ReuseConditions_4;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_10;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_10, 0))));
  }
  if (succeeded)
  {
    MR_Word FirstTupleTerm_8;
    MR_Word RestTuplesTerm_9;
    MR_Word Var_11;
    MR_Word Var_12;

    succeeded = (strcmp(Cons_5, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FirstTupleTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
        Var_11 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RestTuplesTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Word Var_14;

      Var_13 = parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(TypeInfo_for_T_19, FirstTupleTerm_8);
      Var_14 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(TypeInfo_for_T_19, RestTuplesTerm_9);
      {
        ReuseConditions_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ReuseConditions_4, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, ReuseConditions_4, 1) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      succeeded = (strcmp(Cons_5, (MR_String) "[]") == 0);
      if (succeeded)
        ReuseConditions_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions");
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions (term not a functor)");
  return ReuseConditions_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word ReuseCondition_4;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_15;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
    if (succeeded)
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_15, 0))));
  }
  if (succeeded)
  {
    MR_Word DeadNodesTerm_8;
    MR_Word InUseNodesTerm_9;
    MR_Word SharingTerm_10;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    succeeded = (strcmp(Cons_5, (MR_String) "condition") == 0);
    if (succeeded)
    {
      succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        DeadNodesTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
        Var_16 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
        succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InUseNodesTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_16, 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(1, Var_16, 1))));
          succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SharingTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_17, 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, 1))));
            succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word DeadNodesList_11;
      MR_Word DeadNodes_12;
      MR_Word InUseNodes_13;
      MR_Word Sharing_14;

      DeadNodesList_11 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(TypeInfo_for_T_23, DeadNodesTerm_8);
      DeadNodes_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), DeadNodesList_11);
      InUseNodes_13 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(TypeInfo_for_T_23, InUseNodesTerm_9);
      Sharing_14 = parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(TypeInfo_for_T_23, SharingTerm_10);
      {
        ReuseCondition_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ReuseCondition_4, 0) = ((MR_Box) (DeadNodes_12));
        MR_hl_field(0, ReuseCondition_4, 1) = ((MR_Box) (InUseNodes_13));
        MR_hl_field(0, ReuseCondition_4, 2) = ((MR_Box) (Sharing_14));
      }
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition");
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition (term not a functor)");
  return ReuseCondition_4;
}

static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Datastructs_4;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_10;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_10, 0))));
  }
  if (succeeded)
  {
    MR_Word FirstDataTerm_8;
    MR_Word RestDataTerm_9;
    MR_Word Var_11;
    MR_Word Var_12;

    succeeded = (strcmp(Cons_5, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FirstDataTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
        Var_11 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RestDataTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Word Var_14;

      Var_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(TypeInfo_for_T_19, FirstDataTerm_8);
      Var_14 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(TypeInfo_for_T_19, RestDataTerm_9);
      {
        Datastructs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Datastructs_4, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Datastructs_4, 1) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      succeeded = (strcmp(Cons_5, (MR_String) "[]") == 0);
      if (succeeded)
        Datastructs_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs");
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs (term not a functor)");
  return Datastructs_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word SharingAs_4;
  MR_Word SharingAs0_8;
  MR_String Cons_5;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_9, 0))));
      if ((strcmp(Cons_5, (MR_String) "[|]") == 0))
      {
        MR_Word Var_10;

        Var_10 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(TypeInfo_for_T_16, Term_3);
        {
          SharingAs0_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SharingAs0_8, 0) = ((MR_Box) (Var_10));
        }
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Cons_5, (MR_String) "top") == 0))
      {
        MR_Word Var_11;

        Var_11 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (MR_mkword(2, &parse_tree__prog_ctgc_scalar_common_3[1]))));
        {
          SharingAs0_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, SharingAs0_8, 0) = ((MR_Box) (Var_11));
        }
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Cons_5, (MR_String) "bottom") == 0))
      {
        SharingAs0_8 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    SharingAs_4 = SharingAs0_8;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_domain\'/1", (MR_String) "error while parsing structure sharing domain");
  return SharingAs_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word SharingPairs_4;
  MR_Word SharingPairs0_10;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_11;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_11, 0))));
      if ((strcmp(Cons_5, (MR_String) "[]") == 0))
      {
        SharingPairs0_10 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Cons_5, (MR_String) "[|]") == 0))
      {
        MR_Word SharingPairTerm_8;
        MR_Word Rest_9;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word Var_15;

        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SharingPairTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
          succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Rest_9 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
            Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
            succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_14 = parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(TypeInfo_for_T_18, SharingPairTerm_8);
              Var_15 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(TypeInfo_for_T_18, Rest_9);
              {
                SharingPairs0_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SharingPairs0_10, 0) = ((MR_Box) (Var_14));
                MR_hl_field(1, SharingPairs0_10, 1) = ((MR_Box) (Var_15));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    SharingPairs_4 = SharingPairs0_10;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing\'/1", (MR_String) "error while parsing list of structure sharing pairs");
  return SharingPairs_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word SharingPair_4;
  MR_Word First_8;
  MR_Word Second_9;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_10, 0))));
      succeeded = (strcmp(Cons_5, (MR_String) "pair") == 0);
      if (succeeded)
      {
        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          First_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
          Var_11 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Second_9 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
            Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
            succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_13;
    MR_Word Var_14;

    Var_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(TypeInfo_for_T_17, First_8);
    Var_14 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(TypeInfo_for_T_17, Second_9);
    {
      SharingPair_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SharingPair_4, 0) = ((MR_Box) (Var_13));
      MR_hl_field(0, SharingPair_4, 1) = ((MR_Box) (Var_14));
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_pair\'/1", (MR_String) "error while parsing structure sharing pair");
  return SharingPair_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_1_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Datastruct_4;
  MR_Word SelectorTerm_9;
  MR_Word Var_10;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word VarTerm_8;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_12, 0))));
      succeeded = (strcmp(Cons_5, (MR_String) "cel") == 0);
      if (succeeded)
      {
        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SelectorTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
            succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) VarTerm_8)) == (MR_Integer) 1);
              if (succeeded)
                Var_10 = ((MR_Word) ((MR_hl_field(1, VarTerm_8, 0))));
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_15;
    MR_Word Var_16;

    Var_15 = mercury__term__coerce_var_1_f_0(TypeInfo_for_T_19, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10);
    Var_16 = parse_tree__prog_ctgc__parse_selector_1_f_0(TypeInfo_for_T_19, SelectorTerm_9);
    {
      Datastruct_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Datastruct_4, 0) = ((MR_Box) (Var_15));
      MR_hl_field(0, Datastruct_4, 1) = ((MR_Box) (Var_16));
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct\'/1", (MR_String) "error while parsing datastruct.");
  return Datastruct_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_selector_1_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Selector_4;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_10;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_10, 0))));
  }
  if (succeeded)
  {
    MR_Word First_8;
    MR_Word Rest_9;
    MR_Word Var_11;
    MR_Word Var_12;

    succeeded = (strcmp(Cons_5, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        First_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
        Var_11 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Rest_9 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Word Var_14;

      Var_13 = parse_tree__prog_ctgc__parse_unit_selector_1_f_0(TypeInfo_for_T_17, First_8);
      Var_14 = parse_tree__prog_ctgc__parse_selector_1_f_0(TypeInfo_for_T_17, Rest_9);
      {
        Selector_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Selector_4, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Selector_4, 1) = ((MR_Box) (Var_14));
      }
    }
    else
      Selector_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_selector\'/1", (MR_String) "term not a functor");
  return Selector_4;
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_unit_selector_1_f_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word UnitSelector_4;
  MR_String Cons_5;
  MR_Word Args_6;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
    if (succeeded)
      Cons_5 = ((MR_String) ((MR_hl_field(0, Var_24, 0))));
  }
  if (succeeded)
  {
    MR_Word ConsTerm_8;
    MR_Word ArityTerm_9;
    MR_Word PosTerm_10;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    succeeded = (strcmp(Cons_5, (MR_String) "sel") == 0);
    if (succeeded)
    {
      succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConsTerm_8 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArityTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PosTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ConsIdName_11;
      MR_Integer Arity_12;
      MR_Integer Pos_13;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeInfo_for_T_51, ConsTerm_8, &ConsIdName_11);
      if (succeeded)
      {
        succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeInfo_for_T_51, ArityTerm_9, &Arity_12);
        if (succeeded)
          succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeInfo_for_T_51, PosTerm_10, &Pos_13);
      }
      if (succeeded)
      {
        MR_Word ConsId_14;
        MR_Word Var_28;
        MR_Word Var_29;

        Var_29 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (ConsIdName_11));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (Arity_12));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) (Var_29));
        }
        ConsId_14 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_28)));
        {
          UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnitSelector_4, 0) = ((MR_Box) (ConsId_14));
          MR_hl_field(0, UnitSelector_4, 1) = ((MR_Box) (Pos_13));
        }
      }
      else
      {
        MR_Integer Int_15;

        succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeInfo_for_T_51, ConsTerm_8, &Int_15);
        if (succeeded)
        {
          MR_Word Var_30;
          MR_Word ConsId_48;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (Int_15));
          }
          {
            ConsId_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, ConsId_48, 1) = ((MR_Box) (Var_30));
          }
          {
            UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UnitSelector_4, 0) = ((MR_Box) (ConsId_48));
            MR_hl_field(0, UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
          }
        }
        else
        {
          MR_Float Float_16;
          MR_Word Var_32;

          succeeded = ((MR_tag((MR_Word) ConsTerm_8)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(0, ConsTerm_8, 0))));
            succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, 0)))) == (MR_Integer) 0)));
            if (succeeded)
              Float_16 = MR_unbox_float((MR_hl_field(3, Var_32, 1)));
          }
          if (succeeded)
          {
            MR_Word ConsId_49;

            {
              ConsId_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsId_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, ConsId_49, 1) = MR_box_float(Float_16);
            }
            {
              UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UnitSelector_4, 0) = ((MR_Box) (ConsId_49));
              MR_hl_field(0, UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          else
          {
            MR_String Str_19;
            MR_Word Var_34;

            succeeded = ((MR_tag((MR_Word) ConsTerm_8)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_34 = ((MR_Word) ((MR_hl_field(0, ConsTerm_8, 0))));
              succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 2);
              if (succeeded)
                Str_19 = ((MR_String) ((MR_hl_field(2, Var_34, 0))));
            }
            if (succeeded)
            {
              MR_Word ConsId_50;

              {
                ConsId_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ConsId_50, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, ConsId_50, 1) = ((MR_Box) (Str_19));
              }
              {
                UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, UnitSelector_4, 0) = ((MR_Box) (ConsId_50));
                MR_hl_field(0, UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            else
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "unknown cons_id in unit selector");
          }
        }
      }
    }
    else
    {
      MR_Word TypeSelectorTerm_22;
      MR_Word Var_38;

      succeeded = (strcmp(Cons_5, (MR_String) "typesel") == 0);
      if (succeeded)
      {
        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeSelectorTerm_22 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));
          Var_38 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
          succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word TypeSelector_23;
        MR_Word Var_40;

        Var_40 = mercury__term__coerce_1_f_0(TypeInfo_for_T_51, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeSelectorTerm_22);
        succeeded = parse_tree__parse_type_name__maybe_parse_type_3_p_0((MR_Word) (MR_mkword(1, &parse_tree__prog_ctgc_scalar_common_3[0])), Var_40, &TypeSelector_23);
        if (succeeded)
          {
            UnitSelector_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, UnitSelector_4, 0) = ((MR_Box) (TypeSelector_23));
          }
        else
          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "error in parsing type selector");
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "selector is neither sel/3 nor typesel/1.");
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "term not a functor");
  return UnitSelector_4;
}

void mercury__parse_tree__prog_ctgc__init(void)
{
}

void mercury__parse_tree__prog_ctgc__init_type_tables(void)
{
}

void mercury__parse_tree__prog_ctgc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_ctgc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_ctgc.
