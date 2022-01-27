/*
** Automatically generated from `prog_ctgc.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.prog_ctgc. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_ctgc__init
ENDINIT
*/

#include "parse_tree.prog_ctgc.mih"


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
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__610__1_3_p_0(
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41);

static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__ReuseCond_8);

static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
  MR_Word parse_tree__prog_ctgc__Type_3,
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
  MR_Word parse_tree__prog_ctgc__Term_3,
  MR_Word * parse_tree__prog_ctgc__SharingPair_4);

static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4);

static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
  MR_Word parse_tree__prog_ctgc__Term_3);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_1[8][2];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_6[3][8];

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_7[3][7];




static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ", ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "from parse_structure_sharing_domain"))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_6[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_ctgc_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__610__1_3_p_0(
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__HeadVar__1_41)));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__ReuseCond_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__DeadNodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__InUseNodes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__Sharing_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 2)));
    MR_Word parse_tree__prog_ctgc__DeadNodesList_13;

    {
      parse_tree__prog_ctgc__DeadNodesList_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodes_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "condition(");
    }
    {
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__DeadNodesList_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__InUseNodes_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__Sharing_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_String parse_tree__prog_ctgc__HeadVar__3_3;

    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_ctgc__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_ctgc__Index_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_ctgc__V_7_7;
        MR_Word parse_tree__prog_ctgc__V_9_9;
        MR_String parse_tree__prog_ctgc__V_10_10;
        MR_Word parse_tree__prog_ctgc__V_12_12;
        MR_Word parse_tree__prog_ctgc__V_14_14;
        MR_String parse_tree__prog_ctgc__V_15_15;
        MR_Integer parse_tree__prog_ctgc__V_16_16;
        MR_Word parse_tree__prog_ctgc__V_17_17;
        MR_Word parse_tree__prog_ctgc__V_19_19;
        MR_String parse_tree__prog_ctgc__V_20_20;

        {
          parse_tree__prog_ctgc__V_10_10 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 0, parse_tree__prog_ctgc__ConsId_5);
        }
        {
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_util__cons_id_arity_1_f_0(parse_tree__prog_ctgc__ConsId_5);
        }
        {
          parse_tree__prog_ctgc__V_15_15 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__V_16_16);
        }
        {
          parse_tree__prog_ctgc__V_20_20 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__Index_6);
        }
        {
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_20_20));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
        }
        {
          parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) ((MR_String) ","));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_19_19));
        }
        {
          parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
        }
        {
          parse_tree__prog_ctgc__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 0) = ((MR_Box) ((MR_String) ","));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
        }
        {
          parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_12_12));
        }
        {
          parse_tree__prog_ctgc__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 0) = ((MR_Box) ((MR_String) "sel("));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_9_9));
        }
        {
          parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_7_7);
        }
      }
    else
      {
        MR_Word parse_tree__prog_ctgc__TypeSel_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_ctgc__V_26_26;
        MR_Word parse_tree__prog_ctgc__V_28_28;
        MR_String parse_tree__prog_ctgc__V_29_29;

        {
          parse_tree__prog_ctgc__V_29_29 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_ctgc__TVarSet_1, (MR_Integer) 0, parse_tree__prog_ctgc__TypeSel_25);
        }
        {
          parse_tree__prog_ctgc__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_29_29));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
        }
        {
          parse_tree__prog_ctgc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 0) = ((MR_Box) ((MR_String) "typesel("));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_28_28));
        }
        {
          parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_26_26);
        }
      }
    return parse_tree__prog_ctgc__HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
  MR_Word parse_tree__prog_ctgc__Type_3,
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_ctgc__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_3));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv1_HeadVar__2_2;

    {
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_HeadVar__2_2);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__2_2;

    {
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__2_2);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
  MR_Word parse_tree__prog_ctgc__Term_3,
  MR_Word * parse_tree__prog_ctgc__SharingPair_4)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_33;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_22_34;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_37;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_26_38;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_57;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_22_58;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_61;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_26_62;
    MR_Word parse_tree__prog_ctgc__Left_5;
    MR_Word parse_tree__prog_ctgc__Right_6;
    MR_Word parse_tree__prog_ctgc__LeftData_8;
    MR_Word parse_tree__prog_ctgc__RightData_9;
    MR_Word parse_tree__prog_ctgc__V_10_10;
    MR_String parse_tree__prog_ctgc__V_11_11;
    MR_Word parse_tree__prog_ctgc__V_12_12;
    MR_Word parse_tree__prog_ctgc__V_13_13;
    MR_Word parse_tree__prog_ctgc__V_14_14;
    MR_Word parse_tree__prog_ctgc__VarTerm_17;
    MR_Word parse_tree__prog_ctgc__TypesTerm_18;
    MR_Word parse_tree__prog_ctgc__GenericVar_20;
    MR_Word parse_tree__prog_ctgc__ProgVar_22;
    MR_Word parse_tree__prog_ctgc__TypeTermsList_23;
    MR_Word parse_tree__prog_ctgc__Types_24;
    MR_Word parse_tree__prog_ctgc__Selector_25;
    MR_Word parse_tree__prog_ctgc__V_26_26;
    MR_String parse_tree__prog_ctgc__V_27_27;
    MR_Word parse_tree__prog_ctgc__V_28_28;
    MR_Word parse_tree__prog_ctgc__V_29_29;
    MR_Word parse_tree__prog_ctgc__V_30_30;
    MR_Word parse_tree__prog_ctgc__V_31_31;
    MR_Word parse_tree__prog_ctgc__V_32_32;
    MR_Word parse_tree__prog_ctgc__VarTerm_41;
    MR_Word parse_tree__prog_ctgc__TypesTerm_42;
    MR_Word parse_tree__prog_ctgc__GenericVar_44;
    MR_Word parse_tree__prog_ctgc__ProgVar_46;
    MR_Word parse_tree__prog_ctgc__TypeTermsList_47;
    MR_Word parse_tree__prog_ctgc__Types_48;
    MR_Word parse_tree__prog_ctgc__Selector_49;
    MR_Word parse_tree__prog_ctgc__V_50_50;
    MR_String parse_tree__prog_ctgc__V_51_51;
    MR_Word parse_tree__prog_ctgc__V_52_52;
    MR_Word parse_tree__prog_ctgc__V_53_53;
    MR_Word parse_tree__prog_ctgc__V_54_54;
    MR_Word parse_tree__prog_ctgc__V_55_55;
    MR_Word parse_tree__prog_ctgc__V_56_56;
    MR_Word parse_tree__prog_ctgc__V_7_7;
    MR_Word parse_tree__prog_ctgc__V_19_19;
    MR_Word parse_tree__prog_ctgc__V_21_21;
    MR_Word parse_tree__prog_ctgc__V_43_43;
    MR_Word parse_tree__prog_ctgc__V_45_45;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_11_11, (MR_String) "-") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Left_5)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_ctgc__succeeded)
                              {
                                parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 0)));
                                parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 1)));
                                parse_tree__prog_ctgc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 2)));
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_26_26)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_ctgc__succeeded)
                                  {
                                    parse_tree__prog_ctgc__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_26_26, (MR_Integer) 0)));
                                    parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_27_27, (MR_String) "cel") == 0);
                                    if (parse_tree__prog_ctgc__succeeded)
                                      {
                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                                        if (parse_tree__prog_ctgc__succeeded)
                                          {
                                            parse_tree__prog_ctgc__VarTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 0)));
                                            parse_tree__prog_ctgc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 1)));
                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                                            if (parse_tree__prog_ctgc__succeeded)
                                              {
                                                parse_tree__prog_ctgc__TypesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 0)));
                                                parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 1)));
                                                parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (parse_tree__prog_ctgc__succeeded)
                                                  {
                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_17)) == (MR_mktag((MR_Integer) 1)));
                                                    if (parse_tree__prog_ctgc__succeeded)
                                                      {
                                                        parse_tree__prog_ctgc__GenericVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 0)));
                                                        parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 1)));
                                                        parse_tree__prog_ctgc__TypeCtorInfo_21_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                                        parse_tree__prog_ctgc__TypeCtorInfo_22_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                                        {
                                                          mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_21_33, parse_tree__prog_ctgc__TypeCtorInfo_22_34, parse_tree__prog_ctgc__GenericVar_20, &parse_tree__prog_ctgc__ProgVar_22);
                                                        }
                                                        {
                                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_18, &parse_tree__prog_ctgc__TypeTermsList_23);
                                                        }
                                                        if (parse_tree__prog_ctgc__succeeded)
                                                          {
                                                            parse_tree__prog_ctgc__V_31_31 = (MR_Integer) 1;
                                                            {
                                                              parse_tree__prog_ctgc__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(parse_tree__prog_ctgc__V_31_31, parse_tree__prog_ctgc__TypeTermsList_23, &parse_tree__prog_ctgc__Types_24);
                                                            }
                                                            if (parse_tree__prog_ctgc__succeeded)
                                                              {
                                                                parse_tree__prog_ctgc__V_32_32 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[4];
                                                                parse_tree__prog_ctgc__TypeCtorInfo_25_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                                                                parse_tree__prog_ctgc__TypeCtorInfo_26_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
                                                                {
                                                                  mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_25_37, parse_tree__prog_ctgc__TypeCtorInfo_26_38, parse_tree__prog_ctgc__V_32_32, parse_tree__prog_ctgc__Types_24, &parse_tree__prog_ctgc__Selector_25);
                                                                }
                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Right_6)) == (MR_mktag((MR_Integer) 0)));
                                                                if (parse_tree__prog_ctgc__succeeded)
                                                                  {
                                                                    parse_tree__prog_ctgc__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 0)));
                                                                    parse_tree__prog_ctgc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 1)));
                                                                    parse_tree__prog_ctgc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 2)));
                                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_50_50)) == (MR_mktag((MR_Integer) 0)));
                                                                    if (parse_tree__prog_ctgc__succeeded)
                                                                      {
                                                                        parse_tree__prog_ctgc__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_50_50, (MR_Integer) 0)));
                                                                        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_51_51, (MR_String) "cel") == 0);
                                                                        if (parse_tree__prog_ctgc__succeeded)
                                                                          {
                                                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
                                                                            if (parse_tree__prog_ctgc__succeeded)
                                                                              {
                                                                                parse_tree__prog_ctgc__VarTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 0)));
                                                                                parse_tree__prog_ctgc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 1)));
                                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_53_53)) == (MR_mktag((MR_Integer) 1)));
                                                                                if (parse_tree__prog_ctgc__succeeded)
                                                                                  {
                                                                                    parse_tree__prog_ctgc__TypesTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_53_53, (MR_Integer) 0)));
                                                                                    parse_tree__prog_ctgc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_53_53, (MR_Integer) 1)));
                                                                                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                    if (parse_tree__prog_ctgc__succeeded)
                                                                                      {
                                                                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_41)) == (MR_mktag((MR_Integer) 1)));
                                                                                        if (parse_tree__prog_ctgc__succeeded)
                                                                                          {
                                                                                            parse_tree__prog_ctgc__GenericVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_41, (MR_Integer) 0)));
                                                                                            parse_tree__prog_ctgc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_41, (MR_Integer) 1)));
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_21_57 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_22_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                                                                            {
                                                                                              parse_tree__prog_ctgc__LeftData_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_22));
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_25));
                                                                                            }
                                                                                            {
                                                                                              mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_21_57, parse_tree__prog_ctgc__TypeCtorInfo_22_58, parse_tree__prog_ctgc__GenericVar_44, &parse_tree__prog_ctgc__ProgVar_46);
                                                                                            }
                                                                                            {
                                                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_42, &parse_tree__prog_ctgc__TypeTermsList_47);
                                                                                            }
                                                                                            if (parse_tree__prog_ctgc__succeeded)
                                                                                              {
                                                                                                parse_tree__prog_ctgc__V_55_55 = (MR_Integer) 1;
                                                                                                {
                                                                                                  parse_tree__prog_ctgc__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(parse_tree__prog_ctgc__V_55_55, parse_tree__prog_ctgc__TypeTermsList_47, &parse_tree__prog_ctgc__Types_48);
                                                                                                }
                                                                                                if (parse_tree__prog_ctgc__succeeded)
                                                                                                  {
                                                                                                    parse_tree__prog_ctgc__V_56_56 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[5];
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_25_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_26_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
                                                                                                    {
                                                                                                      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_25_61, parse_tree__prog_ctgc__TypeCtorInfo_26_62, parse_tree__prog_ctgc__V_56_56, parse_tree__prog_ctgc__Types_48, &parse_tree__prog_ctgc__Selector_49);
                                                                                                    }
                                                                                                    {
                                                                                                      parse_tree__prog_ctgc__RightData_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_46));
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_49));
                                                                                                    }
                                                                                                    {
                                                                                                      MR_Word base;
                                                                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                                      *parse_tree__prog_ctgc__SharingPair_4 = base;
                                                                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__LeftData_8));
                                                                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RightData_9));
                                                                                                    }
                                                                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
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
    return parse_tree__prog_ctgc__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ListTerm_3)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_11_11;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
              {
                *parse_tree__prog_ctgc__ArgumentTerms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
              {
                MR_Word parse_tree__prog_ctgc__FirstTerm_8;
                MR_Word parse_tree__prog_ctgc__RestTerm_9;
                MR_Word parse_tree__prog_ctgc__RestList_10;
                MR_Word parse_tree__prog_ctgc__V_12_12;
                MR_Word parse_tree__prog_ctgc__V_13_13;

                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__FirstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__RestTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            {
                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__RestTerm_9, &parse_tree__prog_ctgc__RestList_10);
                            }
                            if (parse_tree__prog_ctgc__succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *parse_tree__prog_ctgc__ArgumentTerms_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__FirstTerm_8));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RestList_10));
                                }
                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
            else
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
          }
      }
    return parse_tree__prog_ctgc__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__Datastructs_4;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_10_10;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__FirstDataTerm_8;
        MR_Word parse_tree__prog_ctgc__RestDataTerm_9;
        MR_Word parse_tree__prog_ctgc__V_11_11;
        MR_Word parse_tree__prog_ctgc__V_12_12;

        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__FirstDataTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__RestDataTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (parse_tree__prog_ctgc__succeeded)
          {
            MR_Word parse_tree__prog_ctgc__V_13_13;
            MR_Word parse_tree__prog_ctgc__V_14_14;

            {
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstDataTerm_8);
            }
            {
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestDataTerm_9);
            }
            {
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
            }
          }
        else
          {
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs");
                }
              }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs (term not a functor)");
        }
      }
    return parse_tree__prog_ctgc__Datastructs_4;
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

    {
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_1,
  MR_Word parse_tree__prog_ctgc__TypeSubst_2,
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__prog_ctgc__HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_20;
          MR_Word parse_tree__prog_ctgc__Conds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_ctgc__RenConds_12;
          MR_Word parse_tree__prog_ctgc__V_17_17;

          {
            parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
          }
          parse_tree__prog_ctgc__TypeCtorInfo_12_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
          {
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__V_17_17, parse_tree__prog_ctgc__Conds_11, &parse_tree__prog_ctgc__RenConds_12);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenConds_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

    {
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_5,
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
  MR_Word parse_tree__prog_ctgc__Conds_7,
  MR_Word * parse_tree__prog_ctgc__RenConds_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_ctgc__V_9_9;

    {
      parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
    }
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_9_9, parse_tree__prog_ctgc__Conds_7, parse_tree__prog_ctgc__RenConds_8);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_Data_8;

    {
      parse_tree__prog_ctgc__conv0_Data_8 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_Data_8));
    return parse_tree__prog_ctgc__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_5,
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
    MR_Word parse_tree__prog_ctgc__DeadNodes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__LiveNodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__Sharing_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 2)));
    MR_Word parse_tree__prog_ctgc__RenDeadNodes_10;
    MR_Word parse_tree__prog_ctgc__RenLiveNodes_11;
    MR_Word parse_tree__prog_ctgc__RenSharing_12;
    MR_Word parse_tree__prog_ctgc__V_13_13;

    {
      parse_tree__prog_ctgc__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
    }
    {
      parse_tree__prog_ctgc__RenDeadNodes_10 = mercury__set__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__DeadNodes_7);
    }
    {
      parse_tree__prog_ctgc__RenLiveNodes_11 = mercury__list__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__LiveNodes_8);
    }
    {
      parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(parse_tree__prog_ctgc__Dict_5, parse_tree__prog_ctgc__TypeSubst_6, parse_tree__prog_ctgc__Sharing_9, &parse_tree__prog_ctgc__RenSharing_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_ctgc__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenDeadNodes_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RenLiveNodes_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_ctgc__RenSharing_12));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

    {
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(
  MR_Word parse_tree__prog_ctgc__HeadVars_6,
  MR_Word parse_tree__prog_ctgc__NewHeadVars_7,
  MR_Word parse_tree__prog_ctgc__NewTypes_8,
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20,
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    if ((parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20;
    else
      {
        MR_Word parse_tree__prog_ctgc__MaybeTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 1)));
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 0)));
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24;

        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_ctgc__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
              MR_Word parse_tree__prog_ctgc__TypeInfo_14_39;
              MR_Word parse_tree__prog_ctgc__SharingPairs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22, (MR_Integer) 0)));
              MR_Word parse_tree__prog_ctgc__VarRenaming_15;
              MR_Word parse_tree__prog_ctgc__TypeSubst_18;
              MR_Word parse_tree__prog_ctgc__NewSharingPairs_19;
              MR_Word parse_tree__prog_ctgc__V_35_35;
              MR_Word parse_tree__prog_ctgc__UserSharingTypes_16;
              MR_Word parse_tree__prog_ctgc__V_23_23;
              MR_Word parse_tree__prog_ctgc___UserSharingTVarSet_17;

              {
                mercury__map__from_corresponding_lists_3_p_0(parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__HeadVars_6, parse_tree__prog_ctgc__NewHeadVars_7, &parse_tree__prog_ctgc__VarRenaming_15);
              }
              parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__MaybeTypes_11)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_ctgc__succeeded)
                {
                  parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeTypes_11, (MR_Integer) 0)));
                  parse_tree__prog_ctgc__UserSharingTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 0)));
                  parse_tree__prog_ctgc___UserSharingTVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 1)));
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
                }
              if (parse_tree__prog_ctgc__succeeded)
                {
                  parse_tree__prog_type__type_list_subsumes_det_3_p_0(parse_tree__prog_ctgc__UserSharingTypes_16, parse_tree__prog_ctgc__NewTypes_8, &parse_tree__prog_ctgc__TypeSubst_18);
                }
              else
                {
                  {
                    parse_tree__prog_ctgc__TypeSubst_18 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  }
                }
              {
                parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 3) = ((MR_Box) (parse_tree__prog_ctgc__VarRenaming_15));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_18));
              }
              parse_tree__prog_ctgc__TypeInfo_14_39 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
              {
                mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__V_35_35, parse_tree__prog_ctgc__SharingPairs_14, &parse_tree__prog_ctgc__NewSharingPairs_19);
              }
              {
                parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24, 0) = ((MR_Box) (parse_tree__prog_ctgc__NewSharingPairs_19));
              }
            }
            break;
          case (MR_Integer) 2:
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

    {
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_1,
  MR_Word parse_tree__prog_ctgc__TypeSubst_2,
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_ctgc__TypeInfo_14_27;
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_16;
          MR_Word parse_tree__prog_ctgc__V_23_23;

          {
            parse_tree__prog_ctgc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
          }
          parse_tree__prog_ctgc__TypeInfo_14_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
          {
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__V_23_23, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15, &parse_tree__prog_ctgc__STATE_VARIABLE_List_16);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_List_16));
          }
        }
        break;
      case (MR_Integer) 2:
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

    {
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_5,
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8,
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_List_9)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeInfo_14_14;
    MR_Word parse_tree__prog_ctgc__V_10_10;

    {
      parse_tree__prog_ctgc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
    }
    parse_tree__prog_ctgc__TypeInfo_14_14 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__V_10_10, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8, parse_tree__prog_ctgc__STATE_VARIABLE_List_9);
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

    {
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_5,
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12,
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_25 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_34;
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_45;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_54;
    MR_Word parse_tree__prog_ctgc__D1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__Da_10;
    MR_Word parse_tree__prog_ctgc__Db_11;
    MR_Word parse_tree__prog_ctgc__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__Sel0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__Var_22;
    MR_Word parse_tree__prog_ctgc__Sel_23;
    MR_Word parse_tree__prog_ctgc__V_30_30;
    MR_Word parse_tree__prog_ctgc__Var0_40;
    MR_Word parse_tree__prog_ctgc__Sel0_41;
    MR_Word parse_tree__prog_ctgc__Var_42;
    MR_Word parse_tree__prog_ctgc__Sel_43;
    MR_Box parse_tree__prog_ctgc__conv0_Var_22;
    MR_Box parse_tree__prog_ctgc__conv2_Var_42;

    {
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_20)), &parse_tree__prog_ctgc__conv0_Var_22);
    }
    parse_tree__prog_ctgc__Var_22 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_22);
    {
      parse_tree__prog_ctgc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
    }
    parse_tree__prog_ctgc__TypeCtorInfo_12_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_21, &parse_tree__prog_ctgc__Sel_23);
    }
    {
      parse_tree__prog_ctgc__Da_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_22));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_23));
    }
    parse_tree__prog_ctgc__Var0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 0)));
    parse_tree__prog_ctgc__Sel0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 1)));
    parse_tree__prog_ctgc__TypeInfo_15_45 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
    {
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_40)), &parse_tree__prog_ctgc__conv2_Var_42);
    }
    parse_tree__prog_ctgc__Var_42 = ((MR_Word) parse_tree__prog_ctgc__conv2_Var_42);
    parse_tree__prog_ctgc__TypeCtorInfo_12_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_41, &parse_tree__prog_ctgc__Sel_43);
    }
    {
      parse_tree__prog_ctgc__Db_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_42));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Da_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Db_11));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

    {
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0(
  MR_Word parse_tree__prog_ctgc__Dict_5,
  MR_Word parse_tree__prog_ctgc__Subst_6,
  MR_Word parse_tree__prog_ctgc__Data0_7)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__Data_8;
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_19 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_28;
    MR_Word parse_tree__prog_ctgc__Var0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__Sel0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__Var_16;
    MR_Word parse_tree__prog_ctgc__Sel_17;
    MR_Word parse_tree__prog_ctgc__V_24_24;
    MR_Box parse_tree__prog_ctgc__conv0_Var_16;

    {
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_14)), &parse_tree__prog_ctgc__conv0_Var_16);
    }
    parse_tree__prog_ctgc__Var_16 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_16);
    {
      parse_tree__prog_ctgc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_3_f_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
    }
    parse_tree__prog_ctgc__TypeCtorInfo_12_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__V_24_24, parse_tree__prog_ctgc__Sel0_15, &parse_tree__prog_ctgc__Sel_17);
    }
    {
      parse_tree__prog_ctgc__Data_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_16));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_17));
    }
    return parse_tree__prog_ctgc__Data_8;
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

    {
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0(
  MR_Word parse_tree__prog_ctgc__Dict_5,
  MR_Word parse_tree__prog_ctgc__Subst_6,
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12,
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Data_13)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_24;
    MR_Word parse_tree__prog_ctgc__Var0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__Sel0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__Var_10;
    MR_Word parse_tree__prog_ctgc__Sel_11;
    MR_Word parse_tree__prog_ctgc__V_20_20;
    MR_Box parse_tree__prog_ctgc__conv0_Var_10;

    {
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_8)), &parse_tree__prog_ctgc__conv0_Var_10);
    }
    parse_tree__prog_ctgc__Var_10 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_10);
    {
      parse_tree__prog_ctgc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
    }
    parse_tree__prog_ctgc__TypeCtorInfo_12_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__V_20_20, parse_tree__prog_ctgc__Sel0_9, &parse_tree__prog_ctgc__Sel_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_ctgc__STATE_VARIABLE_Data_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_11));
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11;

    {
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11);
    }
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11));
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0(
  MR_Word parse_tree__prog_ctgc__TypeSubst_4,
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6,
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_ctgc__V_8_8;

    {
      parse_tree__prog_ctgc__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_selector_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_4));
    }
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_8_8, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7);
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__rename_unit_selector_3_p_0(
  MR_Word parse_tree__prog_ctgc__Subst_4,
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10,
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10;
    else
      {
        MR_Word parse_tree__prog_ctgc__Type0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10, (MR_Integer) 0)));
        MR_Word parse_tree__prog_ctgc__Type_9;

        {
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_ctgc__Subst_4, parse_tree__prog_ctgc__Type0_8, &parse_tree__prog_ctgc__Type_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_9));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

    {
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_available");
        }
      }
    else
      {
        MR_Word parse_tree__prog_ctgc__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "");
        }
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__ReuseDomain_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(parse_tree__prog_ctgc__ReuseDomain_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_ctgc__ReuseConditions_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_15, (MR_Integer) 0)));
              MR_Word parse_tree__prog_ctgc__V_55_55;

              {
                mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
              }
              {
                parse_tree__prog_ctgc__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_2));
              }
              {
                mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_36, (MR_String) ", ", parse_tree__prog_ctgc__V_55_55);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "not_available");
        }
      }
    else
      {
        MR_Word parse_tree__prog_ctgc__SharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
        {
          parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_1, parse_tree__prog_ctgc__TypeVarSet_2, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__SharingAs_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

    {
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__ReuseAs_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "%\t ");
    }
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__ReuseAs_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__prog_ctgc__ReuseAs_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_ctgc__ReuseConditions_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseAs_8, (MR_Integer) 0)));
          MR_Word parse_tree__prog_ctgc__V_44_44;

          {
            mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
          }
          {
            parse_tree__prog_ctgc__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_6));
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_7));
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_25, (MR_String) ", \n%\t ", parse_tree__prog_ctgc__V_44_44);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "])");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

    {
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__610__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__SharingAs_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "%\t ");
    }
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "bottom");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_ctgc__SharingPairs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_8, (MR_Integer) 0)));

          {
            parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) "\n%\t", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_30);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_47;
          MR_Word parse_tree__prog_ctgc__Msgs_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_8, (MR_Integer) 0)));
          MR_Word parse_tree__prog_ctgc__V_39_39;

          {
            mercury__io__write_string_3_p_0((MR_String) "top([");
          }
          parse_tree__prog_ctgc__TypeCtorInfo_40_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
          {
            parse_tree__prog_ctgc__V_39_39 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_47, parse_tree__prog_ctgc__Msgs_29);
          }
          {
            mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_47, parse_tree__prog_ctgc__V_39_39, (MR_String) "\n%\t", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[3]);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "])");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

    {
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__610__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_8,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_9,
  MR_Word parse_tree__prog_ctgc__VerboseTop_10,
  MR_Word parse_tree__prog_ctgc__MaybeThreshold_11,
  MR_Word parse_tree__prog_ctgc__SharingAs_12)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "");
    }
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "bottom");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_ctgc__SharingPairs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

          {
            parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_8, parse_tree__prog_ctgc__TypeVarSet_9, parse_tree__prog_ctgc__MaybeThreshold_11, (MR_String) "[", (MR_String) ", ", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_32);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_ctgc__Msgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

          switch (parse_tree__prog_ctgc__VerboseTop_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "top");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_49;
                MR_Word parse_tree__prog_ctgc__V_41_41;

                {
                  mercury__io__write_string_3_p_0((MR_String) "top([");
                }
                parse_tree__prog_ctgc__TypeCtorInfo_40_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
                {
                  parse_tree__prog_ctgc__V_41_41 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__Msgs_31);
                }
                {
                  mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__V_41_41, (MR_String) ", ", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[2]);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "])");
                }
              }
              break;
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "");
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_as_list_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__SharingPairs_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;

    {
      parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) ",", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_8);
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

    {
      parse_tree__prog_ctgc__print_structure_sharing_pair_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_10,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_11,
  MR_Word parse_tree__prog_ctgc__MaybeLimit_12,
  MR_String parse_tree__prog_ctgc__Start_13,
  MR_String parse_tree__prog_ctgc__Sep_14,
  MR_String parse_tree__prog_ctgc__End_15,
  MR_Word parse_tree__prog_ctgc__SharingPairs0_16)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__TypeInfo_35_35;
    MR_Word parse_tree__prog_ctgc__V_25_25;

    {
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Start_13);
    }
    {
      parse_tree__prog_ctgc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_10));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_11));
    }
    parse_tree__prog_ctgc__TypeInfo_35_35 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
    if ((parse_tree__prog_ctgc__MaybeLimit_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs0_16, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
      }
    else
      {
        MR_Word parse_tree__prog_ctgc__TypeInfo_31_31 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
        MR_Integer parse_tree__prog_ctgc__Limit_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeLimit_12, (MR_Integer) 0)));
        MR_Word parse_tree__prog_ctgc__SharingPairs_36;
        MR_Integer parse_tree__prog_ctgc__V_23_23;

        {
          mercury__list__take_upto_3_p_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__Limit_18, parse_tree__prog_ctgc__SharingPairs0_16, &parse_tree__prog_ctgc__SharingPairs_36);
        }
        {
          mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs_36, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
        }
        {
          parse_tree__prog_ctgc__V_23_23 = mercury__list__length_1_f_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__SharingPairs0_16);
        }
        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__Limit_18 >= parse_tree__prog_ctgc__V_23_23);
        if (parse_tree__prog_ctgc__succeeded)
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Sep_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "...");
            }
          }
      }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__End_15);
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_pair_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__SharingPair_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__D1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) "pair(");
    }
    {
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D1_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D2_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

    {
      parse_tree__prog_ctgc__print_datastruct_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__Datastructs_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Word parse_tree__prog_ctgc__V_15_15;

    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      parse_tree__prog_ctgc__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_datastructs_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__Datastructs_8, (MR_String) ", ", parse_tree__prog_ctgc__V_15_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_datastruct_5_p_0(
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
  MR_Word parse_tree__prog_ctgc__DataStruct_8)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_String parse_tree__prog_ctgc__VarName_10;
    MR_Word parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__V_14_14;
    MR_Word parse_tree__prog_ctgc__V_17_17;
    MR_Word parse_tree__prog_ctgc__V_21_21;
    MR_Word parse_tree__prog_ctgc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
    MR_Word parse_tree__prog_ctgc__V_26_26;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__V_13_13, &parse_tree__prog_ctgc__VarName_10);
    }
    {
      parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (parse_tree__prog_ctgc__VarName_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[6])));
    }
    {
      parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) ((MR_String) "cel("));
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
    }
    {
      mercury__io__write_strings_3_p_0(parse_tree__prog_ctgc__V_14_14);
    }
    parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
    {
      parse_tree__prog_ctgc__print_selector_4_p_0(parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__V_21_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_String parse_tree__prog_ctgc__conv0_HeadVar__3_3;

    {
      parse_tree__prog_ctgc__conv0_HeadVar__3_3 = parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__3_3));
    return parse_tree__prog_ctgc__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0(
  MR_Word parse_tree__prog_ctgc__TVarSet_5,
  MR_Word parse_tree__prog_ctgc__Selector_6)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_String parse_tree__prog_ctgc__V_10_10;

    if ((parse_tree__prog_ctgc__Selector_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_ctgc__V_10_10 = (MR_String) "[]";
    else
      {
        MR_Word parse_tree__prog_ctgc__SelectorStrings_17;
        MR_Word parse_tree__prog_ctgc__V_18_18;
        MR_Word parse_tree__prog_ctgc__V_19_19;
        MR_Word parse_tree__prog_ctgc__V_21_21;
        MR_String parse_tree__prog_ctgc__V_22_22;

        {
          parse_tree__prog_ctgc__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_selector_4_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__TVarSet_5));
        }
        {
          parse_tree__prog_ctgc__SelectorStrings_17 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_ctgc__V_18_18, parse_tree__prog_ctgc__Selector_6);
        }
        {
          parse_tree__prog_ctgc__V_22_22 = mercury__string__join_list_2_f_0((MR_String) ",", parse_tree__prog_ctgc__SelectorStrings_17);
        }
        {
          parse_tree__prog_ctgc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_22_22));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[5])));
        }
        {
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) ((MR_String) "["));
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_21_21));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__prog_ctgc__V_19_19, &parse_tree__prog_ctgc__V_10_10);
        }
      }
    {
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__V_10_10);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
  MR_Box parse_tree__prog_ctgc__closure_arg,
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded;
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
    MR_Word parse_tree__prog_ctgc__conv0_SharingPair_4;

    {
      parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_SharingPair_4);
    }
    if (parse_tree__prog_ctgc__succeeded)
      {
        *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_SharingPair_4));
        parse_tree__prog_ctgc__succeeded = MR_TRUE;
      }
    return parse_tree__prog_ctgc__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0(
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Varset_0_23,
  MR_Word parse_tree__prog_ctgc__Term_5,
  MR_Word * parse_tree__prog_ctgc__UserSharing_6)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__V_63_63;
    MR_Word parse_tree__prog_ctgc__V_64_64;
    MR_Word parse_tree__prog_ctgc__V_65_65;
    MR_String parse_tree__prog_ctgc__V_71_71;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 0)));
        parse_tree__prog_ctgc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_65_65)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_65_65, (MR_Integer) 0)));
            if ((parse_tree__prog_ctgc__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((strcmp(parse_tree__prog_ctgc__V_71_71, (MR_String) "no_sharing") == 0))
                {
                  *parse_tree__prog_ctgc__UserSharing_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[4]);
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
                }
              else
              if ((strcmp(parse_tree__prog_ctgc__V_71_71, (MR_String) "unknown_sharing") == 0))
                {
                  MR_String parse_tree__prog_ctgc__ContextString_9;
                  MR_String parse_tree__prog_ctgc__Msg_10;
                  MR_Word parse_tree__prog_ctgc__Reason_11;
                  MR_String parse_tree__prog_ctgc__V_42_42;
                  MR_Word parse_tree__prog_ctgc__V_44_44;
                  MR_Word parse_tree__prog_ctgc__V_45_45;

                  {
                    parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_ctgc__V_63_63, &parse_tree__prog_ctgc__ContextString_9);
                  }
                  {
                    parse_tree__prog_ctgc__V_42_42 = mercury__string__f_43_43_2_f_0(parse_tree__prog_ctgc__ContextString_9, (MR_String) ")");
                  }
                  {
                    parse_tree__prog_ctgc__Msg_10 = mercury__string__f_43_43_2_f_0((MR_String) "user declared top(", parse_tree__prog_ctgc__V_42_42);
                  }
                  {
                    parse_tree__prog_ctgc__Reason_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__Reason_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Msg_10));
                  }
                  {
                    parse_tree__prog_ctgc__V_45_45 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__Reason_11)));
                  }
                  {
                    parse_tree__prog_ctgc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__V_44_44, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_45_45));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_ctgc__UserSharing_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_44_44));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
                }
              else
                parse_tree__prog_ctgc__succeeded = MR_FALSE;
            else
              {
                MR_Word parse_tree__prog_ctgc__TypesTerm_12;
                MR_Word parse_tree__prog_ctgc__UserSharingTerm_13;
                MR_Word parse_tree__prog_ctgc__MaybeUserTypes_19;
                MR_Word parse_tree__prog_ctgc__Sharing_22;
                MR_Word parse_tree__prog_ctgc__V_27_27;
                MR_Word parse_tree__prog_ctgc__V_28_28;
                MR_Word parse_tree__prog_ctgc__V_67_67;
                MR_Word parse_tree__prog_ctgc__V_68_68;
                MR_String parse_tree__prog_ctgc__V_70_70;
                MR_Word parse_tree__prog_ctgc__SharingPairTerms_74;
                MR_Word parse_tree__prog_ctgc__V_66_66;

                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_71_71, (MR_String) "sharing") == 0);
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__TypesTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_64_64, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_64_64, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__UserSharingTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__TypesTerm_12)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_ctgc__succeeded)
                              {
                                parse_tree__prog_ctgc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 0)));
                                parse_tree__prog_ctgc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 1)));
                                parse_tree__prog_ctgc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 2)));
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_68_68)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_ctgc__succeeded)
                                  {
                                    parse_tree__prog_ctgc__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_68_68, (MR_Integer) 0)));
                                    if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "no") == 0))
                                      {
                                        parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                        parse_tree__prog_ctgc__succeeded = MR_TRUE;
                                      }
                                    else
                                    if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "yes") == 0))
                                      {
                                        MR_Word parse_tree__prog_ctgc__TypeCtorInfo_60_60;
                                        MR_Word parse_tree__prog_ctgc__TypeInfo_61_61;
                                        MR_Word parse_tree__prog_ctgc__TypeCtorInfo_62_62;
                                        MR_Word parse_tree__prog_ctgc__Types_17;
                                        MR_Word parse_tree__prog_ctgc__TypeVars_18;
                                        MR_Word parse_tree__prog_ctgc__V_34_34;
                                        MR_Word parse_tree__prog_ctgc__V_36_36;
                                        MR_Word parse_tree__prog_ctgc__V_37_37;
                                        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Varset_35_54;

                                        {
                                          parse_tree__prog_ctgc__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0((MR_Integer) 1, parse_tree__prog_ctgc__V_67_67, &parse_tree__prog_ctgc__Types_17);
                                        }
                                        if (parse_tree__prog_ctgc__succeeded)
                                          {
                                            parse_tree__prog_ctgc__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                            {
                                              mercury__term__vars_list_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_60_60, parse_tree__prog_ctgc__V_67_67, &parse_tree__prog_ctgc__TypeVars_18);
                                            }
                                            parse_tree__prog_ctgc__TypeInfo_61_61 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[0];
                                            {
                                              parse_tree__prog_ctgc__V_34_34 = mercury__set__list_to_set_1_f_0(parse_tree__prog_ctgc__TypeInfo_61_61, parse_tree__prog_ctgc__TypeVars_18);
                                            }
                                            {
                                              mercury__varset__select_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_60_60, parse_tree__prog_ctgc__V_34_34, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_0_23, &parse_tree__prog_ctgc__STATE_VARIABLE_Varset_35_54);
                                            }
                                            parse_tree__prog_ctgc__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                                            {
                                              parse_tree__prog_ctgc__V_37_37 = mercury__varset__coerce_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_60_60, parse_tree__prog_ctgc__TypeCtorInfo_62_62, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_35_54);
                                            }
                                            {
                                              parse_tree__prog_ctgc__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_36_36, 0) = ((MR_Box) (parse_tree__prog_ctgc__Types_17));
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_36_36, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_37_37));
                                            }
                                            {
                                              parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeUserTypes_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
                                            }
                                            parse_tree__prog_ctgc__succeeded = MR_TRUE;
                                          }
                                      }
                                    else
                                      parse_tree__prog_ctgc__succeeded = MR_FALSE;
                                    if (parse_tree__prog_ctgc__succeeded)
                                      {
                                        {
                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__UserSharingTerm_13, &parse_tree__prog_ctgc__SharingPairTerms_74);
                                        }
                                        if (parse_tree__prog_ctgc__succeeded)
                                          {
                                            if ((parse_tree__prog_ctgc__SharingPairTerms_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word parse_tree__prog_ctgc__SharingPairs_77;

                                                {
                                                  parse_tree__prog_ctgc__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[3], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[1], parse_tree__prog_ctgc__SharingPairTerms_74, &parse_tree__prog_ctgc__SharingPairs_77);
                                                }
                                                if (parse_tree__prog_ctgc__succeeded)
                                                  {
                                                    {
                                                      parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Sharing_22, 0) = ((MR_Box) (parse_tree__prog_ctgc__SharingPairs_77));
                                                    }
                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
                                                  }
                                              }
                                            if (parse_tree__prog_ctgc__succeeded)
                                              {
                                                {
                                                  MR_Word base;
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  *parse_tree__prog_ctgc__UserSharing_6 = base;
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_22));
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__MaybeUserTypes_19));
                                                }
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
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
    return parse_tree__prog_ctgc__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_domain_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_18,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__ReuseDomain_4;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_9_9;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_no_reuse") == 0);
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_only_unconditional_reuse") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            else
              {
                MR_Word parse_tree__prog_ctgc__ReuseConditionsTerm_8;
                MR_Word parse_tree__prog_ctgc__V_10_10;

                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_conditional_reuse") == 0);
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__ReuseConditionsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    MR_Word parse_tree__prog_ctgc__V_11_11;

                    {
                      parse_tree__prog_ctgc__V_11_11 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__ReuseConditionsTerm_8);
                    }
                    {
                      parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_11_11));
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain");
                    }
                  }
              }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain (term not a functor)");
        }
      }
    return parse_tree__prog_ctgc__ReuseDomain_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__ReuseConditions_4;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_10_10;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__FirstTupleTerm_8;
        MR_Word parse_tree__prog_ctgc__RestTuplesTerm_9;
        MR_Word parse_tree__prog_ctgc__V_11_11;
        MR_Word parse_tree__prog_ctgc__V_12_12;

        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__FirstTupleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__RestTuplesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (parse_tree__prog_ctgc__succeeded)
          {
            MR_Word parse_tree__prog_ctgc__V_13_13;
            MR_Word parse_tree__prog_ctgc__V_14_14;

            {
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstTupleTerm_8);
            }
            {
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestTuplesTerm_9);
            }
            {
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
            }
          }
        else
          {
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions");
                }
              }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions (term not a functor)");
        }
      }
    return parse_tree__prog_ctgc__ReuseConditions_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_25,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__ReuseCondition_4;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_15_15;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_15_15)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, (MR_Integer) 0)));
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__DeadNodesTerm_8;
        MR_Word parse_tree__prog_ctgc__InUseNodesTerm_9;
        MR_Word parse_tree__prog_ctgc__SharingTerm_10;
        MR_Word parse_tree__prog_ctgc__V_16_16;
        MR_Word parse_tree__prog_ctgc__V_17_17;
        MR_Word parse_tree__prog_ctgc__V_18_18;

        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "condition") == 0);
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__DeadNodesTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__InUseNodesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_17_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__SharingTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (parse_tree__prog_ctgc__succeeded)
          {
            MR_Word parse_tree__prog_ctgc__DeadNodesList_11;
            MR_Word parse_tree__prog_ctgc__DeadNodes_12;
            MR_Word parse_tree__prog_ctgc__InUseNodes_13;
            MR_Word parse_tree__prog_ctgc__Sharing_14;

            {
              parse_tree__prog_ctgc__DeadNodesList_11 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__DeadNodesTerm_8);
            }
            {
              parse_tree__prog_ctgc__DeadNodes_12 = mercury__set__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodesList_11);
            }
            {
              parse_tree__prog_ctgc__InUseNodes_13 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__InUseNodesTerm_9);
            }
            {
              parse_tree__prog_ctgc__Sharing_14 = parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__SharingTerm_10);
            }
            {
              parse_tree__prog_ctgc__ReuseCondition_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__DeadNodes_12));
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__InUseNodes_13));
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 2) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_14));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition");
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition (term not a functor)");
        }
      }
    return parse_tree__prog_ctgc__ReuseCondition_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_17,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__SharingAs_4;
    MR_Word parse_tree__prog_ctgc__SharingAs0_8;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__V_9_9;
    MR_Word parse_tree__prog_ctgc__V_6_6;
    MR_Word parse_tree__prog_ctgc___Context_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
              {
                MR_Word parse_tree__prog_ctgc__V_13_13;

                {
                  parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_17, parse_tree__prog_ctgc__Term_3);
                }
                {
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
                }
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "top") == 0))
              {
                MR_Word parse_tree__prog_ctgc__V_10_10;

                {
                  parse_tree__prog_ctgc__V_10_10 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_ctgc_scalar_common_3[0]))));
                }
                {
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
                }
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "bottom") == 0))
              {
                parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
              }
            else
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
          }
      }
    if (parse_tree__prog_ctgc__succeeded)
      parse_tree__prog_ctgc__SharingAs_4 = parse_tree__prog_ctgc__SharingAs0_8;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_domain\'/1", (MR_String) "error while parsing structure sharing domain");
        }
      }
    return parse_tree__prog_ctgc__SharingAs_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__SharingPairs_4;
    MR_Word parse_tree__prog_ctgc__SharingPairs0_10;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_11_11;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
              {
                parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
              {
                MR_Word parse_tree__prog_ctgc__SharingPairTerm_8;
                MR_Word parse_tree__prog_ctgc__Rest_9;
                MR_Word parse_tree__prog_ctgc__V_12_12;
                MR_Word parse_tree__prog_ctgc__V_13_13;
                MR_Word parse_tree__prog_ctgc__V_14_14;
                MR_Word parse_tree__prog_ctgc__V_15_15;

                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__SharingPairTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            {
                              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__SharingPairTerm_8);
                            }
                            {
                              parse_tree__prog_ctgc__V_15_15 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__Rest_9);
                            }
                            {
                              parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
                            }
                            parse_tree__prog_ctgc__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            else
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
          }
      }
    if (parse_tree__prog_ctgc__succeeded)
      parse_tree__prog_ctgc__SharingPairs_4 = parse_tree__prog_ctgc__SharingPairs0_10;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing\'/1", (MR_String) "error while parsing list of structure sharing pairs");
        }
      }
    return parse_tree__prog_ctgc__SharingPairs_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_18,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__SharingPair_4;
    MR_Word parse_tree__prog_ctgc__First_8;
    MR_Word parse_tree__prog_ctgc__Second_9;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_10_10;
    MR_Word parse_tree__prog_ctgc__V_11_11;
    MR_Word parse_tree__prog_ctgc__V_12_12;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "pair") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__V_13_13;
        MR_Word parse_tree__prog_ctgc__V_14_14;

        {
          parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
        }
        {
          parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Second_9);
        }
        {
          parse_tree__prog_ctgc__SharingPair_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_pair\'/1", (MR_String) "error while parsing structure sharing pair");
        }
      }
    return parse_tree__prog_ctgc__SharingPair_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_20,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__Datastruct_4;
    MR_Word parse_tree__prog_ctgc__SelectorTerm_9;
    MR_Word parse_tree__prog_ctgc__Var_10;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__VarTerm_8;
    MR_Word parse_tree__prog_ctgc__V_12_12;
    MR_Word parse_tree__prog_ctgc__V_13_13;
    MR_Word parse_tree__prog_ctgc__V_14_14;
    MR_Word parse_tree__prog_ctgc__V_7_7;
    MR_Word parse_tree__prog_ctgc__V_11_11;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "cel") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__VarTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__SelectorTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_8)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_ctgc__succeeded)
                              {
                                parse_tree__prog_ctgc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_8, (MR_Integer) 0)));
                                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_8, (MR_Integer) 1)));
                              }
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__V_15_15;
        MR_Word parse_tree__prog_ctgc__V_16_16;

        {
          parse_tree__prog_ctgc__V_15_15 = mercury__term__coerce_var_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__Var_10);
        }
        {
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_ctgc__parse_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_20, parse_tree__prog_ctgc__SelectorTerm_9);
        }
        {
          parse_tree__prog_ctgc__Datastruct_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Datastruct_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Datastruct_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_16_16));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct\'/1", (MR_String) "error while parsing datastruct.");
        }
      }
    return parse_tree__prog_ctgc__Datastruct_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_selector_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_18,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__Selector_4;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_10_10;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__First_8;
        MR_Word parse_tree__prog_ctgc__Rest_9;
        MR_Word parse_tree__prog_ctgc__V_11_11;
        MR_Word parse_tree__prog_ctgc__V_12_12;

        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (parse_tree__prog_ctgc__succeeded)
          {
            MR_Word parse_tree__prog_ctgc__V_13_13;
            MR_Word parse_tree__prog_ctgc__V_14_14;

            {
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_unit_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
            }
            {
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Rest_9);
            }
            {
              parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Selector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Selector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
            }
          }
        else
          parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_selector\'/1", (MR_String) "term not a functor");
        }
      }
    return parse_tree__prog_ctgc__Selector_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_unit_selector_1_f_0(
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_64,
  MR_Word parse_tree__prog_ctgc__Term_3)
{
  {
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_ctgc__UnitSelector_4;
    MR_String parse_tree__prog_ctgc__Cons_5;
    MR_Word parse_tree__prog_ctgc__Args_6;
    MR_Word parse_tree__prog_ctgc__V_30_30;
    MR_Word parse_tree__prog_ctgc__V_7_7;

    if (parse_tree__prog_ctgc__succeeded)
      {
        parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_30_30)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_ctgc__succeeded)
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, (MR_Integer) 0)));
      }
    if (parse_tree__prog_ctgc__succeeded)
      {
        MR_Word parse_tree__prog_ctgc__ConsTerm_8;
        MR_Word parse_tree__prog_ctgc__ArityTerm_9;
        MR_Word parse_tree__prog_ctgc__PosTerm_10;
        MR_Word parse_tree__prog_ctgc__V_31_31;
        MR_Word parse_tree__prog_ctgc__V_32_32;
        MR_Word parse_tree__prog_ctgc__V_33_33;

        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "sel") == 0);
        if (parse_tree__prog_ctgc__succeeded)
          {
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__ConsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                parse_tree__prog_ctgc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_31_31)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__ArityTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__PosTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (parse_tree__prog_ctgc__succeeded)
          {
            MR_Word parse_tree__prog_ctgc__ConsIdName_11;
            MR_Integer parse_tree__prog_ctgc__Arity_12;
            MR_Integer parse_tree__prog_ctgc__Pos_15;
            MR_Word parse_tree__prog_ctgc__V_34_34;
            MR_Word parse_tree__prog_ctgc__V_35_35;
            MR_Word parse_tree__prog_ctgc__V_13_13;
            MR_Word parse_tree__prog_ctgc__V_14_14;
            MR_Word parse_tree__prog_ctgc__V_16_16;
            MR_Word parse_tree__prog_ctgc__V_17_17;

            {
              parse_tree__prog_ctgc__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_ctgc__TypeInfo_for_T_64, parse_tree__prog_ctgc__ConsTerm_8, &parse_tree__prog_ctgc__ConsIdName_11);
            }
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ArityTerm_9)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 2)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_34_34, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__PosTerm_10)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            parse_tree__prog_ctgc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 0)));
                            parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 1)));
                            parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 2)));
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_ctgc__succeeded)
                              parse_tree__prog_ctgc__Pos_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_35_35, (MR_Integer) 0)));
                          }
                      }
                  }
              }
            if (parse_tree__prog_ctgc__succeeded)
              {
                MR_Word parse_tree__prog_ctgc__ConsId_18;
                MR_Word parse_tree__prog_ctgc__V_36_36;

                {
                  parse_tree__prog_ctgc__V_36_36 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
                {
                  parse_tree__prog_ctgc__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__ConsIdName_11));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 2) = ((MR_Box) (parse_tree__prog_ctgc__Arity_12));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
                }
                {
                  parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_18));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__Pos_15));
                }
              }
            else
              {
                MR_Integer parse_tree__prog_ctgc__Int_19;
                MR_Word parse_tree__prog_ctgc__V_37_37;
                MR_Word parse_tree__prog_ctgc__V_20_20;
                MR_Word parse_tree__prog_ctgc__V_21_21;

                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_37_37)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_ctgc__succeeded)
                      parse_tree__prog_ctgc__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_37_37, (MR_Integer) 0)));
                  }
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    MR_Word parse_tree__prog_ctgc__ConsId_58;

                    {
                      parse_tree__prog_ctgc__ConsId_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 1) = ((MR_Box) (parse_tree__prog_ctgc__Int_19));
                    }
                    {
                      parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_58));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                else
                  {
                    MR_Float parse_tree__prog_ctgc__Float_22;
                    MR_Word parse_tree__prog_ctgc__V_39_39;
                    MR_Word parse_tree__prog_ctgc__V_23_23;
                    MR_Word parse_tree__prog_ctgc__V_24_24;

                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        parse_tree__prog_ctgc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
                        parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
                        parse_tree__prog_ctgc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
                        parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (parse_tree__prog_ctgc__succeeded)
                          parse_tree__prog_ctgc__Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 1)));
                      }
                    if (parse_tree__prog_ctgc__succeeded)
                      {
                        MR_Word parse_tree__prog_ctgc__ConsId_59;

                        {
                          parse_tree__prog_ctgc__ConsId_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 1) = MR_box_float(parse_tree__prog_ctgc__Float_22);
                        }
                        {
                          parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_59));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
                        }
                      }
                    else
                      {
                        MR_String parse_tree__prog_ctgc__Str_25;
                        MR_Word parse_tree__prog_ctgc__V_41_41;
                        MR_Word parse_tree__prog_ctgc__V_26_26;
                        MR_Word parse_tree__prog_ctgc__V_27_27;

                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            parse_tree__prog_ctgc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
                            parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
                            parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
                            parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (parse_tree__prog_ctgc__succeeded)
                              parse_tree__prog_ctgc__Str_25 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 1)));
                          }
                        if (parse_tree__prog_ctgc__succeeded)
                          {
                            MR_Word parse_tree__prog_ctgc__ConsId_60;

                            {
                              parse_tree__prog_ctgc__ConsId_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_60, 1) = ((MR_Box) (parse_tree__prog_ctgc__Str_25));
                            }
                            {
                              parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_60));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "unknown cons_id in unit selector");
                            }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Word parse_tree__prog_ctgc__TypeSelectorTerm_28;
            MR_Word parse_tree__prog_ctgc__V_46_46;

            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "typesel") == 0);
            if (parse_tree__prog_ctgc__succeeded)
              {
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__TypeSelectorTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
                    parse_tree__prog_ctgc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (parse_tree__prog_ctgc__succeeded)
              {
                MR_Word parse_tree__prog_ctgc__TypeSelector_29;
                MR_Word parse_tree__prog_ctgc__V_48_48;

                {
                  parse_tree__prog_ctgc__V_48_48 = mercury__term__coerce_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_64, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_ctgc__TypeSelectorTerm_28);
                }
                {
                  parse_tree__prog_ctgc__succeeded = parse_tree__parse_type_name__maybe_parse_type_3_p_0((MR_Integer) 1, parse_tree__prog_ctgc__V_48_48, &parse_tree__prog_ctgc__TypeSelector_29);
                }
                if (parse_tree__prog_ctgc__succeeded)
                  {
                    parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__TypeSelector_29));
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "error in parsing type selector");
                    }
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "selector is neither sel/3 nor typesel/1.");
                }
              }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "term not a functor");
        }
      }
    return parse_tree__prog_ctgc__UnitSelector_4;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_ctgc. */
