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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 105 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 108 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 111 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 114 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 117 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 120 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 123 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 126 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 615 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_p_0(
#line 615 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41);

#line 650 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
#line 650 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 650 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 650 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseCond_8);

#line 525 "prog_ctgc.m"
static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
#line 525 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
#line 525 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2);

#line 502 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
#line 502 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Type_3,
#line 502 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2);

#line 499 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 499 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 499 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 499 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 481 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
#line 481 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3,
#line 481 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__SharingPair_4);

#line 467 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
#line 467 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
#line 467 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4);

#line 273 "prog_ctgc.m"
static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
#line 273 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
#line 273 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3);

#line 789 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 789 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 789 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 789 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 784 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
#line 784 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 784 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

#line 736 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 736 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 736 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 736 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 736 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 736 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 671 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 671 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 671 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0_1(
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 671 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 615 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0_1(
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 615 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 615 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 615 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 581 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
#line 581 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 581 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 581 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 581 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 552 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
#line 552 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 552 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 552 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 552 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 519 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
#line 519 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 519 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

#line 462 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
#line 462 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 462 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 462 "prog_ctgc.m"
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
    ((MR_Box) (parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0_1)),
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



#line 627 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 635 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 644 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 652 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 660 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 668 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 677 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 685 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 615 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_p_0(
#line 615 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41)
#line 615 "prog_ctgc.m"
{
#line 615 "prog_ctgc.m"
  {
#line 615 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 615 "prog_ctgc.m"
    {
#line 615 "prog_ctgc.m"
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__HeadVar__1_41)));
#line 615 "prog_ctgc.m"
      return;
    }
#line 615 "prog_ctgc.m"
  }
#line 615 "prog_ctgc.m"
}

#line 650 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
#line 650 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 650 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 650 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseCond_8)
#line 650 "prog_ctgc.m"
{
#line 653 "prog_ctgc.m"
  {
#line 653 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 653 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 0)));
#line 653 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__InUseNodes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 1)));
#line 653 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sharing_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 2)));
#line 653 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodesList_13;

#line 655 "prog_ctgc.m"
    {
#line 655 "prog_ctgc.m"
      parse_tree__prog_ctgc__DeadNodesList_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodes_10);
    }
#line 656 "prog_ctgc.m"
    {
#line 656 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "condition(");
    }
#line 657 "prog_ctgc.m"
    {
#line 657 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__DeadNodesList_13);
    }
#line 658 "prog_ctgc.m"
    {
#line 658 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 659 "prog_ctgc.m"
    {
#line 659 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__InUseNodes_11);
    }
#line 660 "prog_ctgc.m"
    {
#line 660 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 661 "prog_ctgc.m"
    {
#line 661 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__Sharing_12);
    }
#line 663 "prog_ctgc.m"
    {
#line 663 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 663 "prog_ctgc.m"
      return;
    }
#line 653 "prog_ctgc.m"
  }
#line 650 "prog_ctgc.m"
}

#line 525 "prog_ctgc.m"
static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
#line 525 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
#line 525 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2)
#line 525 "prog_ctgc.m"
{
#line 527 "prog_ctgc.m"
  {
#line 527 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 527 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__HeadVar__3_3;

#line 527 "prog_ctgc.m"
    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 527 "prog_ctgc.m"
      {
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
#line 527 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__Index_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 1)));
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_7_7;
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_9_9;
#line 527 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_10_10;
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_14_14;
#line 527 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_15_15;
#line 527 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__V_16_16;
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_17_17;
#line 527 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_19_19;
#line 527 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_20_20;

#line 529 "prog_ctgc.m"
        {
#line 529 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_10_10 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 0, parse_tree__prog_ctgc__ConsId_5);
        }
#line 531 "prog_ctgc.m"
        {
#line 531 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_util__cons_id_arity_1_f_0(parse_tree__prog_ctgc__ConsId_5);
        }
#line 531 "prog_ctgc.m"
        {
#line 531 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_15_15 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__V_16_16);
        }
#line 533 "prog_ctgc.m"
        {
#line 533 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_20_20 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__Index_6);
        }
#line 533 "prog_ctgc.m"
        {
#line 533 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_20_20));
#line 533 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
#line 533 "prog_ctgc.m"
        }
#line 532 "prog_ctgc.m"
        {
#line 532 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) ((MR_String) ","));
#line 532 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_19_19));
#line 532 "prog_ctgc.m"
        }
#line 531 "prog_ctgc.m"
        {
#line 531 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 531 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
#line 531 "prog_ctgc.m"
        }
#line 530 "prog_ctgc.m"
        {
#line 530 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 0) = ((MR_Box) ((MR_String) ","));
#line 530 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 530 "prog_ctgc.m"
        }
#line 529 "prog_ctgc.m"
        {
#line 529 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
#line 529 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_12_12));
#line 529 "prog_ctgc.m"
        }
#line 528 "prog_ctgc.m"
        {
#line 528 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 0) = ((MR_Box) ((MR_String) "sel("));
#line 528 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_9_9));
#line 528 "prog_ctgc.m"
        }
#line 528 "prog_ctgc.m"
        {
#line 528 "prog_ctgc.m"
          return parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_7_7);
        }
#line 527 "prog_ctgc.m"
      }
#line 527 "prog_ctgc.m"
    else
#line 536 "prog_ctgc.m"
      {
#line 536 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__TypeSel_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_26_26;
#line 536 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_28_28;
#line 536 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_29_29;

#line 538 "prog_ctgc.m"
        {
#line 538 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_29_29 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_ctgc__TVarSet_1, (MR_Integer) 0, parse_tree__prog_ctgc__TypeSel_25);
        }
#line 538 "prog_ctgc.m"
        {
#line 538 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_29_29));
#line 538 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
#line 538 "prog_ctgc.m"
        }
#line 537 "prog_ctgc.m"
        {
#line 537 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 0) = ((MR_Box) ((MR_String) "typesel("));
#line 537 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_28_28));
#line 537 "prog_ctgc.m"
        }
#line 537 "prog_ctgc.m"
        {
#line 537 "prog_ctgc.m"
          return parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_26_26);
        }
#line 536 "prog_ctgc.m"
      }
#line 527 "prog_ctgc.m"
    return parse_tree__prog_ctgc__HeadVar__3_3;
#line 527 "prog_ctgc.m"
  }
#line 525 "prog_ctgc.m"
}

#line 502 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
#line 502 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Type_3,
#line 502 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2)
#line 502 "prog_ctgc.m"
{
#line 504 "prog_ctgc.m"
  {
#line 504 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 504 "prog_ctgc.m"
    {
#line 504 "prog_ctgc.m"
      MR_Word base;
#line 504 "prog_ctgc.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__2_2 = base;
#line 504 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_3));
#line 504 "prog_ctgc.m"
    }
#line 504 "prog_ctgc.m"
  }
#line 502 "prog_ctgc.m"
}

#line 499 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 499 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 499 "prog_ctgc.m"
{
#line 499 "prog_ctgc.m"
  {
#line 499 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 499 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_HeadVar__2_2;

#line 499 "prog_ctgc.m"
    {
#line 499 "prog_ctgc.m"
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_HeadVar__2_2);
    }
#line 499 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_HeadVar__2_2));
#line 499 "prog_ctgc.m"
  }
#line 499 "prog_ctgc.m"
}

#line 499 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 499 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 499 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 499 "prog_ctgc.m"
{
#line 499 "prog_ctgc.m"
  {
#line 499 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 499 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__2_2;

#line 499 "prog_ctgc.m"
    {
#line 499 "prog_ctgc.m"
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__2_2);
    }
#line 499 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__2_2));
#line 499 "prog_ctgc.m"
  }
#line 499 "prog_ctgc.m"
}

#line 481 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
#line 481 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3,
#line 481 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__SharingPair_4)
#line 481 "prog_ctgc.m"
{
#line 484 "prog_ctgc.m"
  {
#line 484 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_20_32;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_33;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_24_36;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_37;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_20_55;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_56;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_24_59;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_60;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Left_5;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Right_6;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__LeftData_8;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RightData_9;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 484 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_11_11;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_17;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypesTerm_18;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__GenericVar_20;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ProgVar_22;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeTermsList_23;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Types_24;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_25;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_26_26;
#line 484 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_27_27;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_28_28;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_29_29;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_31_31;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_40;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypesTerm_41;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__GenericVar_43;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ProgVar_45;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeTermsList_46;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Types_47;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_48;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_49_49;
#line 484 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_50_50;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_51_51;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_52_52;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_53_53;
#line 484 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_54_54;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;
#line 494 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_19_19;
#line 495 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_21_21;
#line 494 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_42_42;
#line 495 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_44_44;

#line 485 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
      {
#line 485 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 485 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 485 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 485 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 485 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
          {
#line 485 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 485 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_11_11, (MR_String) "-") == 0);
#line 484 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
              {
#line 485 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 485 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                  {
#line 485 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 485 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 485 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 485 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                      {
#line 485 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
#line 485 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
#line 485 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                          {
#line 494 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Left_5)) == (MR_mktag((MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                              {
#line 494 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 2)));
#line 494 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                  {
#line 494 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_26_26, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_27_27, (MR_String) "cel") == 0);
#line 484 "prog_ctgc.m"
                                    if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                      {
#line 494 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                          {
#line 494 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__VarTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                            if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                              {
#line 494 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__TypesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "prog_ctgc.m"
                                                if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                  {
#line 495 "prog_ctgc.m"
                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_17)) == (MR_mktag((MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                    if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                                      {
#line 495 "prog_ctgc.m"
                                                        parse_tree__prog_ctgc__GenericVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                        parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 1)));
#line 1286 "parse_tree.prog_ctgc.c"
                                                        parse_tree__prog_ctgc__TypeCtorInfo_20_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1288 "parse_tree.prog_ctgc.c"
                                                        parse_tree__prog_ctgc__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 496 "prog_ctgc.m"
                                                        {
#line 496 "prog_ctgc.m"
                                                          mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_20_32, parse_tree__prog_ctgc__TypeCtorInfo_21_33, parse_tree__prog_ctgc__GenericVar_20, &parse_tree__prog_ctgc__ProgVar_22);
                                                        }
#line 497 "prog_ctgc.m"
                                                        {
#line 497 "prog_ctgc.m"
                                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_18, &parse_tree__prog_ctgc__TypeTermsList_23);
                                                        }
#line 484 "prog_ctgc.m"
                                                        if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                          {
#line 498 "prog_ctgc.m"
                                                            {
#line 498 "prog_ctgc.m"
                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__TypeTermsList_23, &parse_tree__prog_ctgc__Types_24);
                                                            }
#line 484 "prog_ctgc.m"
                                                            if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                              {
#line 499 "prog_ctgc.m"
                                                                parse_tree__prog_ctgc__V_31_31 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[4];
#line 1315 "parse_tree.prog_ctgc.c"
                                                                parse_tree__prog_ctgc__TypeCtorInfo_24_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1317 "parse_tree.prog_ctgc.c"
                                                                parse_tree__prog_ctgc__TypeCtorInfo_25_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 499 "prog_ctgc.m"
                                                                {
#line 499 "prog_ctgc.m"
                                                                  mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_24_36, parse_tree__prog_ctgc__TypeCtorInfo_25_37, parse_tree__prog_ctgc__V_31_31, parse_tree__prog_ctgc__Types_24, &parse_tree__prog_ctgc__Selector_25);
                                                                }
#line 494 "prog_ctgc.m"
                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Right_6)) == (MR_mktag((MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                                if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                                                  {
#line 494 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 2)));
#line 494 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                                    if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                                                      {
#line 494 "prog_ctgc.m"
                                                                        parse_tree__prog_ctgc__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_49_49, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                                        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_50_50, (MR_String) "cel") == 0);
#line 484 "prog_ctgc.m"
                                                                        if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                                          {
#line 494 "prog_ctgc.m"
                                                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                                                            if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                                                              {
#line 494 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__VarTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_51_51, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_51_51, (MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                                                                if (parse_tree__prog_ctgc__succeeded)
#line 494 "prog_ctgc.m"
                                                                                  {
#line 494 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__TypesTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 0)));
#line 494 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 1)));
#line 494 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "prog_ctgc.m"
                                                                                    if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                                                      {
#line 495 "prog_ctgc.m"
                                                                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_40)) == (MR_mktag((MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                                                        if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                                                                          {
#line 495 "prog_ctgc.m"
                                                                                            parse_tree__prog_ctgc__GenericVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_40, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                                            parse_tree__prog_ctgc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_40, (MR_Integer) 1)));
#line 1386 "parse_tree.prog_ctgc.c"
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_20_55 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1388 "parse_tree.prog_ctgc.c"
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_21_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 500 "prog_ctgc.m"
                                                                                            {
#line 500 "prog_ctgc.m"
                                                                                              parse_tree__prog_ctgc__LeftData_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_ctgc.m"
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_22));
#line 500 "prog_ctgc.m"
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_25));
#line 500 "prog_ctgc.m"
                                                                                            }
#line 496 "prog_ctgc.m"
                                                                                            {
#line 496 "prog_ctgc.m"
                                                                                              mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_20_55, parse_tree__prog_ctgc__TypeCtorInfo_21_56, parse_tree__prog_ctgc__GenericVar_43, &parse_tree__prog_ctgc__ProgVar_45);
                                                                                            }
#line 497 "prog_ctgc.m"
                                                                                            {
#line 497 "prog_ctgc.m"
                                                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_41, &parse_tree__prog_ctgc__TypeTermsList_46);
                                                                                            }
#line 484 "prog_ctgc.m"
                                                                                            if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                                                              {
#line 498 "prog_ctgc.m"
                                                                                                {
#line 498 "prog_ctgc.m"
                                                                                                  parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__TypeTermsList_46, &parse_tree__prog_ctgc__Types_47);
                                                                                                }
#line 484 "prog_ctgc.m"
                                                                                                if (parse_tree__prog_ctgc__succeeded)
#line 484 "prog_ctgc.m"
                                                                                                  {
#line 499 "prog_ctgc.m"
                                                                                                    parse_tree__prog_ctgc__V_54_54 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[5];
#line 1425 "parse_tree.prog_ctgc.c"
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_24_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1427 "parse_tree.prog_ctgc.c"
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_25_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 499 "prog_ctgc.m"
                                                                                                    {
#line 499 "prog_ctgc.m"
                                                                                                      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_24_59, parse_tree__prog_ctgc__TypeCtorInfo_25_60, parse_tree__prog_ctgc__V_54_54, parse_tree__prog_ctgc__Types_47, &parse_tree__prog_ctgc__Selector_48);
                                                                                                    }
#line 500 "prog_ctgc.m"
                                                                                                    {
#line 500 "prog_ctgc.m"
                                                                                                      parse_tree__prog_ctgc__RightData_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_45));
#line 500 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_48));
#line 500 "prog_ctgc.m"
                                                                                                    }
#line 488 "prog_ctgc.m"
                                                                                                    {
#line 488 "prog_ctgc.m"
                                                                                                      MR_Word base;
#line 488 "prog_ctgc.m"
                                                                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_ctgc.m"
                                                                                                      *parse_tree__prog_ctgc__SharingPair_4 = base;
#line 488 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__LeftData_8));
#line 488 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RightData_9));
#line 488 "prog_ctgc.m"
                                                                                                    }
#line 488 "prog_ctgc.m"
                                                                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 484 "prog_ctgc.m"
                                                                                                  }
#line 484 "prog_ctgc.m"
                                                                                              }
#line 495 "prog_ctgc.m"
                                                                                          }
#line 484 "prog_ctgc.m"
                                                                                      }
#line 494 "prog_ctgc.m"
                                                                                  }
#line 494 "prog_ctgc.m"
                                                                              }
#line 484 "prog_ctgc.m"
                                                                          }
#line 494 "prog_ctgc.m"
                                                                      }
#line 494 "prog_ctgc.m"
                                                                  }
#line 484 "prog_ctgc.m"
                                                              }
#line 484 "prog_ctgc.m"
                                                          }
#line 495 "prog_ctgc.m"
                                                      }
#line 484 "prog_ctgc.m"
                                                  }
#line 494 "prog_ctgc.m"
                                              }
#line 494 "prog_ctgc.m"
                                          }
#line 484 "prog_ctgc.m"
                                      }
#line 494 "prog_ctgc.m"
                                  }
#line 494 "prog_ctgc.m"
                              }
#line 484 "prog_ctgc.m"
                          }
#line 485 "prog_ctgc.m"
                      }
#line 485 "prog_ctgc.m"
                  }
#line 484 "prog_ctgc.m"
              }
#line 485 "prog_ctgc.m"
          }
#line 485 "prog_ctgc.m"
      }
#line 484 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 484 "prog_ctgc.m"
  }
#line 481 "prog_ctgc.m"
}

#line 467 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
#line 467 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
#line 467 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4)
#line 467 "prog_ctgc.m"
{
#line 469 "prog_ctgc.m"
  {
#line 469 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ListTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 469 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 469 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 469 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 470 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 470 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 470 "prog_ctgc.m"
      {
#line 470 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 0)));
#line 470 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 1)));
#line 470 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 2)));
#line 470 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 470 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 470 "prog_ctgc.m"
          {
#line 470 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 476 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
#line 478 "prog_ctgc.m"
              {
#line 478 "prog_ctgc.m"
                *parse_tree__prog_ctgc__ArgumentTerms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 478 "prog_ctgc.m"
              }
#line 476 "prog_ctgc.m"
            else
#line 476 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 472 "prog_ctgc.m"
              {
#line 472 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__FirstTerm_8;
#line 472 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__RestTerm_9;
#line 472 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__RestList_10;
#line 472 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_12_12;
#line 472 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;

#line 473 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 473 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 473 "prog_ctgc.m"
                  {
#line 473 "prog_ctgc.m"
                    parse_tree__prog_ctgc__FirstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 473 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 473 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 473 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 473 "prog_ctgc.m"
                      {
#line 473 "prog_ctgc.m"
                        parse_tree__prog_ctgc__RestTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 473 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 473 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 472 "prog_ctgc.m"
                          {
#line 474 "prog_ctgc.m"
                            {
#line 474 "prog_ctgc.m"
                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__RestTerm_9, &parse_tree__prog_ctgc__RestList_10);
                            }
#line 472 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 472 "prog_ctgc.m"
                              {
#line 475 "prog_ctgc.m"
                                {
#line 475 "prog_ctgc.m"
                                  MR_Word base;
#line 475 "prog_ctgc.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_ctgc.m"
                                  *parse_tree__prog_ctgc__ArgumentTerms_4 = base;
#line 475 "prog_ctgc.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__FirstTerm_8));
#line 475 "prog_ctgc.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RestList_10));
#line 475 "prog_ctgc.m"
                                }
#line 475 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 472 "prog_ctgc.m"
                              }
#line 472 "prog_ctgc.m"
                          }
#line 473 "prog_ctgc.m"
                      }
#line 473 "prog_ctgc.m"
                  }
#line 472 "prog_ctgc.m"
              }
#line 476 "prog_ctgc.m"
            else
#line 476 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 470 "prog_ctgc.m"
          }
#line 470 "prog_ctgc.m"
      }
#line 469 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 469 "prog_ctgc.m"
  }
#line 467 "prog_ctgc.m"
}

#line 273 "prog_ctgc.m"
static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
#line 273 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
#line 273 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 273 "prog_ctgc.m"
{
#line 293 "prog_ctgc.m"
  {
#line 293 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 293 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Datastructs_4;
#line 293 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 293 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 277 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 277 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 277 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 277 "prog_ctgc.m"
      {
#line 277 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 277 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 277 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 277 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 277 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 277 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 277 "prog_ctgc.m"
      }
#line 293 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 285 "prog_ctgc.m"
      {
#line 285 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__FirstDataTerm_8;
#line 285 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__RestDataTerm_9;
#line 280 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 280 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 280 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 280 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 280 "prog_ctgc.m"
          {
#line 281 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 281 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 281 "prog_ctgc.m"
              {
#line 281 "prog_ctgc.m"
                parse_tree__prog_ctgc__FirstDataTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 281 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 281 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 281 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 281 "prog_ctgc.m"
                  {
#line 281 "prog_ctgc.m"
                    parse_tree__prog_ctgc__RestDataTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 281 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 281 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_ctgc.m"
                  }
#line 281 "prog_ctgc.m"
              }
#line 280 "prog_ctgc.m"
          }
#line 285 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 283 "prog_ctgc.m"
          {
#line 283 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 283 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 283 "prog_ctgc.m"
            {
#line 283 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstDataTerm_8);
            }
#line 284 "prog_ctgc.m"
            {
#line 284 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestDataTerm_9);
            }
#line 283 "prog_ctgc.m"
            {
#line 283 "prog_ctgc.m"
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 283 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 283 "prog_ctgc.m"
            }
#line 283 "prog_ctgc.m"
          }
#line 285 "prog_ctgc.m"
        else
#line 289 "prog_ctgc.m"
          {
#line 286 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
#line 289 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 288 "prog_ctgc.m"
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "prog_ctgc.m"
            else
#line 290 "prog_ctgc.m"
              {
#line 290 "prog_ctgc.m"
                {
#line 290 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs");
                }
#line 290 "prog_ctgc.m"
              }
#line 289 "prog_ctgc.m"
          }
#line 285 "prog_ctgc.m"
      }
#line 293 "prog_ctgc.m"
    else
#line 294 "prog_ctgc.m"
      {
#line 294 "prog_ctgc.m"
        {
#line 294 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs (term not a functor)");
        }
#line 294 "prog_ctgc.m"
      }
#line 293 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Datastructs_4;
#line 293 "prog_ctgc.m"
  }
#line 273 "prog_ctgc.m"
}

#line 789 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 789 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 789 "prog_ctgc.m"
{
#line 789 "prog_ctgc.m"
  {
#line 789 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 789 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

#line 789 "prog_ctgc.m"
    {
#line 789 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
#line 789 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
#line 789 "prog_ctgc.m"
  }
#line 789 "prog_ctgc.m"
}

#line 165 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(
#line 165 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_1,
#line 165 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_2,
#line 165 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
#line 165 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
#line 165 "prog_ctgc.m"
{
#line 792 "prog_ctgc.m"
  {
#line 792 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 792 "prog_ctgc.m"
#line 792 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) {
#line 792 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 792 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 792 "prog_ctgc.m"
#line 792 "prog_ctgc.m"
        switch (MR_unmkbody(parse_tree__prog_ctgc__HeadVar__3_3)) {
#line 792 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 792 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "prog_ctgc.m"
            break;
#line 792 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 794 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 792 "prog_ctgc.m"
            break;
#line 792 "prog_ctgc.m"
        }
#line 792 "prog_ctgc.m"
        break;
#line 792 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 796 "prog_ctgc.m"
        {
#line 796 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_20;
#line 796 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Conds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 796 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__RenConds_12;
#line 796 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_17_17;

#line 789 "prog_ctgc.m"
          {
#line 789 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
#line 789 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1));
#line 789 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 789 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
#line 789 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
#line 789 "prog_ctgc.m"
          }
#line 1926 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeCtorInfo_12_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
#line 789 "prog_ctgc.m"
          {
#line 789 "prog_ctgc.m"
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__V_17_17, parse_tree__prog_ctgc__Conds_11, &parse_tree__prog_ctgc__RenConds_12);
          }
#line 796 "prog_ctgc.m"
          {
#line 796 "prog_ctgc.m"
            MR_Word base;
#line 796 "prog_ctgc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 796 "prog_ctgc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenConds_12));
#line 796 "prog_ctgc.m"
          }
#line 796 "prog_ctgc.m"
        }
#line 792 "prog_ctgc.m"
        break;
#line 792 "prog_ctgc.m"
    }
#line 792 "prog_ctgc.m"
  }
#line 165 "prog_ctgc.m"
}

#line 789 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 789 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 789 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 789 "prog_ctgc.m"
{
#line 789 "prog_ctgc.m"
  {
#line 789 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 789 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

#line 789 "prog_ctgc.m"
    {
#line 789 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
#line 789 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
#line 789 "prog_ctgc.m"
  }
#line 789 "prog_ctgc.m"
}

#line 161 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0(
#line 161 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 161 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 161 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Conds_7,
#line 161 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__RenConds_8)
#line 161 "prog_ctgc.m"
{
#line 788 "prog_ctgc.m"
  {
#line 788 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 788 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
#line 788 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;

#line 789 "prog_ctgc.m"
    {
#line 789 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
#line 789 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1));
#line 789 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 789 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 789 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 789 "prog_ctgc.m"
    }
#line 2024 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
#line 789 "prog_ctgc.m"
    {
#line 789 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_9_9, parse_tree__prog_ctgc__Conds_7, parse_tree__prog_ctgc__RenConds_8);
#line 789 "prog_ctgc.m"
      return;
    }
#line 788 "prog_ctgc.m"
  }
#line 161 "prog_ctgc.m"
}

#line 784 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
#line 784 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 784 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
#line 784 "prog_ctgc.m"
{
#line 784 "prog_ctgc.m"
  {
#line 784 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
#line 784 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_Data_8;

#line 784 "prog_ctgc.m"
    {
#line 784 "prog_ctgc.m"
      parse_tree__prog_ctgc__conv0_Data_8 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 784 "prog_ctgc.m"
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_Data_8));
#line 784 "prog_ctgc.m"
    return parse_tree__prog_ctgc__wrapper_arg_2;
#line 784 "prog_ctgc.m"
  }
#line 784 "prog_ctgc.m"
}

#line 157 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(
#line 157 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 157 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 157 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
#line 157 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
#line 157 "prog_ctgc.m"
{
#line 783 "prog_ctgc.m"
  {
#line 783 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__LiveNodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 1)));
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sharing_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 2)));
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenDeadNodes_10;
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenLiveNodes_11;
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenSharing_12;
#line 783 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;

#line 784 "prog_ctgc.m"
    {
#line 784 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[1]));
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1));
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 784 "prog_ctgc.m"
    }
#line 784 "prog_ctgc.m"
    {
#line 784 "prog_ctgc.m"
      parse_tree__prog_ctgc__RenDeadNodes_10 = mercury__set__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__DeadNodes_7);
    }
#line 785 "prog_ctgc.m"
    {
#line 785 "prog_ctgc.m"
      parse_tree__prog_ctgc__RenLiveNodes_11 = mercury__list__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__LiveNodes_8);
    }
#line 786 "prog_ctgc.m"
    {
#line 786 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(parse_tree__prog_ctgc__Dict_5, parse_tree__prog_ctgc__TypeSubst_6, parse_tree__prog_ctgc__Sharing_9, &parse_tree__prog_ctgc__RenSharing_12);
    }
#line 783 "prog_ctgc.m"
    {
#line 783 "prog_ctgc.m"
      MR_Word base;
#line 783 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 783 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 783 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenDeadNodes_10));
#line 783 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RenLiveNodes_11));
#line 783 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_ctgc__RenSharing_12));
#line 783 "prog_ctgc.m"
    }
#line 783 "prog_ctgc.m"
  }
#line 157 "prog_ctgc.m"
}

#line 736 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 736 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 736 "prog_ctgc.m"
{
#line 736 "prog_ctgc.m"
  {
#line 736 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 736 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 736 "prog_ctgc.m"
    {
#line 736 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 736 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 736 "prog_ctgc.m"
  }
#line 736 "prog_ctgc.m"
}

#line 153 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(
#line 153 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVars_6,
#line 153 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__NewHeadVars_7,
#line 153 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__NewTypes_8,
#line 153 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20,
#line 153 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21)
#line 153 "prog_ctgc.m"
{
#line 749 "prog_ctgc.m"
  {
#line 749 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 749 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20;
#line 749 "prog_ctgc.m"
    else
#line 751 "prog_ctgc.m"
      {
#line 751 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__MaybeTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 1)));
#line 751 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 0)));
#line 751 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24;

#line 756 "prog_ctgc.m"
#line 756 "prog_ctgc.m"
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22)) {
#line 756 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 756 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 755 "prog_ctgc.m"
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
#line 756 "prog_ctgc.m"
            break;
#line 756 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 759 "prog_ctgc.m"
            {
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeInfo_14_39;
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__SharingPairs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22, (MR_Integer) 0)));
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__VarRenaming_15;
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeSubst_18;
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__NewSharingPairs_19;
#line 759 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_35_35;
#line 768 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__UserSharingTypes_16;
#line 763 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_23_23;
#line 763 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc___UserSharingTVarSet_17;

#line 760 "prog_ctgc.m"
              {
#line 760 "prog_ctgc.m"
                mercury__map__from_corresponding_lists_3_p_0(parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__HeadVars_6, parse_tree__prog_ctgc__NewHeadVars_7, &parse_tree__prog_ctgc__VarRenaming_15);
              }
#line 763 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__MaybeTypes_11)) == (MR_mktag((MR_Integer) 1)));
#line 763 "prog_ctgc.m"
              if (parse_tree__prog_ctgc__succeeded)
#line 763 "prog_ctgc.m"
                {
#line 763 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeTypes_11, (MR_Integer) 0)));
#line 763 "prog_ctgc.m"
                  parse_tree__prog_ctgc__UserSharingTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 0)));
#line 763 "prog_ctgc.m"
                  parse_tree__prog_ctgc___UserSharingTVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 1)));
#line 763 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 763 "prog_ctgc.m"
                }
#line 768 "prog_ctgc.m"
              if (parse_tree__prog_ctgc__succeeded)
#line 766 "prog_ctgc.m"
                {
#line 766 "prog_ctgc.m"
                  parse_tree__prog_type__type_list_subsumes_det_3_p_0(parse_tree__prog_ctgc__UserSharingTypes_16, parse_tree__prog_ctgc__NewTypes_8, &parse_tree__prog_ctgc__TypeSubst_18);
                }
#line 768 "prog_ctgc.m"
              else
#line 769 "prog_ctgc.m"
                {
#line 769 "prog_ctgc.m"
                  {
#line 769 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypeSubst_18 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  }
#line 769 "prog_ctgc.m"
                }
#line 736 "prog_ctgc.m"
              {
#line 736 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 736 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1));
#line 736 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 3) = ((MR_Box) (parse_tree__prog_ctgc__VarRenaming_15));
#line 736 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_18));
#line 736 "prog_ctgc.m"
              }
#line 2312 "parse_tree.prog_ctgc.c"
              parse_tree__prog_ctgc__TypeInfo_14_39 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 736 "prog_ctgc.m"
              {
#line 736 "prog_ctgc.m"
                mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__V_35_35, parse_tree__prog_ctgc__SharingPairs_14, &parse_tree__prog_ctgc__NewSharingPairs_19);
              }
#line 773 "prog_ctgc.m"
              {
#line 773 "prog_ctgc.m"
                parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_ctgc.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24, 0) = ((MR_Box) (parse_tree__prog_ctgc__NewSharingPairs_19));
#line 773 "prog_ctgc.m"
              }
#line 759 "prog_ctgc.m"
            }
#line 756 "prog_ctgc.m"
            break;
#line 756 "prog_ctgc.m"
          case (MR_Integer) 2:
#line 757 "prog_ctgc.m"
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
#line 756 "prog_ctgc.m"
            break;
#line 756 "prog_ctgc.m"
        }
#line 775 "prog_ctgc.m"
        {
#line 775 "prog_ctgc.m"
          MR_Word base;
#line 775 "prog_ctgc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "prog_ctgc.m"
          *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = base;
#line 775 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24));
#line 775 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "prog_ctgc.m"
        }
#line 751 "prog_ctgc.m"
      }
#line 749 "prog_ctgc.m"
  }
#line 153 "prog_ctgc.m"
}

#line 736 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 736 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 736 "prog_ctgc.m"
{
#line 736 "prog_ctgc.m"
  {
#line 736 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 736 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 736 "prog_ctgc.m"
    {
#line 736 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 736 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 736 "prog_ctgc.m"
  }
#line 736 "prog_ctgc.m"
}

#line 149 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(
#line 149 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_1,
#line 149 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_2,
#line 149 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
#line 149 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
#line 149 "prog_ctgc.m"
{
#line 738 "prog_ctgc.m"
  {
#line 738 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 738 "prog_ctgc.m"
#line 738 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) {
#line 738 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 738 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 738 "prog_ctgc.m"
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
#line 738 "prog_ctgc.m"
        break;
#line 738 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 741 "prog_ctgc.m"
        {
#line 741 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeInfo_14_27;
#line 741 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 741 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_16;
#line 741 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_23_23;

#line 736 "prog_ctgc.m"
          {
#line 736 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 736 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1));
#line 736 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
#line 736 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
#line 736 "prog_ctgc.m"
          }
#line 2448 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeInfo_14_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 736 "prog_ctgc.m"
          {
#line 736 "prog_ctgc.m"
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__V_23_23, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15, &parse_tree__prog_ctgc__STATE_VARIABLE_List_16);
          }
#line 741 "prog_ctgc.m"
          {
#line 741 "prog_ctgc.m"
            MR_Word base;
#line 741 "prog_ctgc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 741 "prog_ctgc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_List_16));
#line 741 "prog_ctgc.m"
          }
#line 741 "prog_ctgc.m"
        }
#line 738 "prog_ctgc.m"
        break;
#line 738 "prog_ctgc.m"
      case (MR_Integer) 2:
#line 739 "prog_ctgc.m"
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
#line 738 "prog_ctgc.m"
        break;
#line 738 "prog_ctgc.m"
    }
#line 738 "prog_ctgc.m"
  }
#line 149 "prog_ctgc.m"
}

#line 736 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 736 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 736 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 736 "prog_ctgc.m"
{
#line 736 "prog_ctgc.m"
  {
#line 736 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 736 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 736 "prog_ctgc.m"
    {
#line 736 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 736 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 736 "prog_ctgc.m"
  }
#line 736 "prog_ctgc.m"
}

#line 146 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0(
#line 146 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 146 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 146 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8,
#line 146 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_List_9)
#line 146 "prog_ctgc.m"
{
#line 735 "prog_ctgc.m"
  {
#line 735 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 735 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_14_14;
#line 735 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;

#line 736 "prog_ctgc.m"
    {
#line 736 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 736 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1));
#line 736 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 736 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 736 "prog_ctgc.m"
    }
#line 2552 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_14_14 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 736 "prog_ctgc.m"
    {
#line 736 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__V_10_10, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8, parse_tree__prog_ctgc__STATE_VARIABLE_List_9);
#line 736 "prog_ctgc.m"
      return;
    }
#line 735 "prog_ctgc.m"
  }
#line 146 "prog_ctgc.m"
}

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 720 "prog_ctgc.m"
{
#line 720 "prog_ctgc.m"
  {
#line 720 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 720 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 720 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 720 "prog_ctgc.m"
  }
#line 720 "prog_ctgc.m"
}

#line 142 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(
#line 142 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 142 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 142 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12,
#line 142 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13)
#line 142 "prog_ctgc.m"
{
#line 730 "prog_ctgc.m"
  {
#line 730 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_25 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_34;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_45;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_54;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 0)));
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 1)));
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Da_10;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Db_11;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 0)));
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 1)));
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_22;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_23;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_40;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_41;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_42;
#line 730 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_43;
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_22;
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv2_Var_42;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_20)), &parse_tree__prog_ctgc__conv0_Var_22);
    }
#line 724 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_22 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_22);
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 720 "prog_ctgc.m"
    }
#line 2673 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_21, &parse_tree__prog_ctgc__Sel_23);
    }
#line 726 "prog_ctgc.m"
    {
#line 726 "prog_ctgc.m"
      parse_tree__prog_ctgc__Da_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_22));
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_23));
#line 726 "prog_ctgc.m"
    }
#line 723 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 0)));
#line 723 "prog_ctgc.m"
    parse_tree__prog_ctgc__Sel0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 1)));
#line 2694 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_15_45 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_40)), &parse_tree__prog_ctgc__conv2_Var_42);
    }
#line 724 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_42 = ((MR_Word) parse_tree__prog_ctgc__conv2_Var_42);
#line 2703 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_41, &parse_tree__prog_ctgc__Sel_43);
    }
#line 726 "prog_ctgc.m"
    {
#line 726 "prog_ctgc.m"
      parse_tree__prog_ctgc__Db_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_42));
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_43));
#line 726 "prog_ctgc.m"
    }
#line 734 "prog_ctgc.m"
    {
#line 734 "prog_ctgc.m"
      MR_Word base;
#line 734 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13 = base;
#line 734 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Da_10));
#line 734 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Db_11));
#line 734 "prog_ctgc.m"
    }
#line 730 "prog_ctgc.m"
  }
#line 142 "prog_ctgc.m"
}

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 720 "prog_ctgc.m"
{
#line 720 "prog_ctgc.m"
  {
#line 720 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 720 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 720 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 720 "prog_ctgc.m"
  }
#line 720 "prog_ctgc.m"
}

#line 139 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0(
#line 139 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 139 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Subst_6,
#line 139 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Data0_7)
#line 139 "prog_ctgc.m"
{
#line 722 "prog_ctgc.m"
  {
#line 722 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Data_8;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_19 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_28;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 0)));
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 1)));
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_16;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_17;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_24_24;
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_16;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_14)), &parse_tree__prog_ctgc__conv0_Var_16);
    }
#line 724 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_16 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_16);
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_3_f_0_1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
#line 720 "prog_ctgc.m"
    }
#line 2824 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__V_24_24, parse_tree__prog_ctgc__Sel0_15, &parse_tree__prog_ctgc__Sel_17);
    }
#line 726 "prog_ctgc.m"
    {
#line 726 "prog_ctgc.m"
      parse_tree__prog_ctgc__Data_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_16));
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_17));
#line 726 "prog_ctgc.m"
    }
#line 722 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Data_8;
#line 722 "prog_ctgc.m"
  }
#line 139 "prog_ctgc.m"
}

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 720 "prog_ctgc.m"
{
#line 720 "prog_ctgc.m"
  {
#line 720 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 720 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 720 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 720 "prog_ctgc.m"
  }
#line 720 "prog_ctgc.m"
}

#line 136 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0(
#line 136 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 136 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Subst_6,
#line 136 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12,
#line 136 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Data_13)
#line 136 "prog_ctgc.m"
{
#line 722 "prog_ctgc.m"
  {
#line 722 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_24;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 0)));
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 1)));
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_10;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_11;
#line 722 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_20_20;
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_10;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_8)), &parse_tree__prog_ctgc__conv0_Var_10);
    }
#line 724 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_10 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_10);
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_4_p_0_1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
#line 720 "prog_ctgc.m"
    }
#line 2933 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__V_20_20, parse_tree__prog_ctgc__Sel0_9, &parse_tree__prog_ctgc__Sel_11);
    }
#line 726 "prog_ctgc.m"
    {
#line 726 "prog_ctgc.m"
      MR_Word base;
#line 726 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_Data_13 = base;
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_10));
#line 726 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_11));
#line 726 "prog_ctgc.m"
    }
#line 722 "prog_ctgc.m"
  }
#line 136 "prog_ctgc.m"
}

#line 720 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 720 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 720 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 720 "prog_ctgc.m"
{
#line 720 "prog_ctgc.m"
  {
#line 720 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 720 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11;

#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11);
    }
#line 720 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11));
#line 720 "prog_ctgc.m"
  }
#line 720 "prog_ctgc.m"
}

#line 134 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0(
#line 134 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_4,
#line 134 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6,
#line 134 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7)
#line 134 "prog_ctgc.m"
{
#line 719 "prog_ctgc.m"
  {
#line 719 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 719 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
#line 719 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_8_8;

#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_selector_3_p_0_1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 720 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_4));
#line 720 "prog_ctgc.m"
    }
#line 3023 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 720 "prog_ctgc.m"
    {
#line 720 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_8_8, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7);
#line 720 "prog_ctgc.m"
      return;
    }
#line 719 "prog_ctgc.m"
  }
#line 134 "prog_ctgc.m"
}

#line 131 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_unit_selector_3_p_0(
#line 131 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Subst_4,
#line 131 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10,
#line 131 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11)
#line 131 "prog_ctgc.m"
{
#line 712 "prog_ctgc.m"
  {
#line 712 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 712 "prog_ctgc.m"
    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10)) == (MR_mktag((MR_Integer) 0))))
#line 712 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10;
#line 712 "prog_ctgc.m"
    else
#line 714 "prog_ctgc.m"
      {
#line 714 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Type0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10, (MR_Integer) 0)));
#line 714 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Type_9;

#line 715 "prog_ctgc.m"
        {
#line 715 "prog_ctgc.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_ctgc__Subst_4, parse_tree__prog_ctgc__Type0_8, &parse_tree__prog_ctgc__Type_9);
        }
#line 716 "prog_ctgc.m"
        {
#line 716 "prog_ctgc.m"
          MR_Word base;
#line 716 "prog_ctgc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 716 "prog_ctgc.m"
          *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = base;
#line 716 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_9));
#line 716 "prog_ctgc.m"
        }
#line 714 "prog_ctgc.m"
      }
#line 712 "prog_ctgc.m"
  }
#line 131 "prog_ctgc.m"
}

#line 671 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 671 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 671 "prog_ctgc.m"
{
#line 671 "prog_ctgc.m"
  {
#line 671 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 671 "prog_ctgc.m"
    {
#line 671 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 671 "prog_ctgc.m"
      return;
    }
#line 671 "prog_ctgc.m"
  }
#line 671 "prog_ctgc.m"
}

#line 123 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(
#line 123 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
#line 123 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
#line 123 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
#line 123 "prog_ctgc.m"
{
#line 695 "prog_ctgc.m"
  {
#line 695 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 695 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "prog_ctgc.m"
      {
#line 696 "prog_ctgc.m"
        {
#line 696 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "not_available");
#line 696 "prog_ctgc.m"
          return;
        }
#line 695 "prog_ctgc.m"
      }
#line 695 "prog_ctgc.m"
    else
#line 699 "prog_ctgc.m"
      {
#line 699 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 700 "prog_ctgc.m"
        {
#line 700 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
#line 679 "prog_ctgc.m"
        {
#line 679 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 683 "prog_ctgc.m"
#line 683 "prog_ctgc.m"
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__ReuseDomain_15)) {
#line 683 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 683 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 683 "prog_ctgc.m"
#line 683 "prog_ctgc.m"
            switch (MR_unmkbody(parse_tree__prog_ctgc__ReuseDomain_15)) {
#line 683 "prog_ctgc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 683 "prog_ctgc.m"
              case (MR_Integer) 0:
#line 681 "prog_ctgc.m"
                {
#line 682 "prog_ctgc.m"
                  {
#line 682 "prog_ctgc.m"
                    mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
                  }
#line 681 "prog_ctgc.m"
                }
#line 683 "prog_ctgc.m"
                break;
#line 683 "prog_ctgc.m"
              case (MR_Integer) 1:
#line 684 "prog_ctgc.m"
                {
#line 685 "prog_ctgc.m"
                  {
#line 685 "prog_ctgc.m"
                    mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
                  }
#line 684 "prog_ctgc.m"
                }
#line 683 "prog_ctgc.m"
                break;
#line 683 "prog_ctgc.m"
            }
#line 683 "prog_ctgc.m"
            break;
#line 683 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 687 "prog_ctgc.m"
            {
#line 687 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__ReuseConditions_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_15, (MR_Integer) 0)));
#line 687 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_55_55;

#line 688 "prog_ctgc.m"
              {
#line 688 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
              }
#line 671 "prog_ctgc.m"
              {
#line 671 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_1));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_2));
#line 671 "prog_ctgc.m"
              }
#line 670 "prog_ctgc.m"
              {
#line 670 "prog_ctgc.m"
                mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_36, (MR_String) ", ", parse_tree__prog_ctgc__V_55_55);
              }
#line 691 "prog_ctgc.m"
              {
#line 691 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 687 "prog_ctgc.m"
            }
#line 683 "prog_ctgc.m"
            break;
#line 683 "prog_ctgc.m"
        }
#line 693 "prog_ctgc.m"
        {
#line 693 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 703 "prog_ctgc.m"
        {
#line 703 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 703 "prog_ctgc.m"
          return;
        }
#line 699 "prog_ctgc.m"
      }
#line 695 "prog_ctgc.m"
  }
#line 123 "prog_ctgc.m"
}

#line 120 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(
#line 120 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
#line 120 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
#line 120 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
#line 120 "prog_ctgc.m"
{
#line 635 "prog_ctgc.m"
  {
#line 635 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 635 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "prog_ctgc.m"
      {
#line 636 "prog_ctgc.m"
        {
#line 636 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "not_available");
#line 636 "prog_ctgc.m"
          return;
        }
#line 635 "prog_ctgc.m"
      }
#line 635 "prog_ctgc.m"
    else
#line 638 "prog_ctgc.m"
      {
#line 638 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 639 "prog_ctgc.m"
        {
#line 639 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
#line 640 "prog_ctgc.m"
        {
#line 640 "prog_ctgc.m"
          parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_1, parse_tree__prog_ctgc__TypeVarSet_2, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__SharingAs_15);
        }
#line 642 "prog_ctgc.m"
        {
#line 642 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 642 "prog_ctgc.m"
          return;
        }
#line 638 "prog_ctgc.m"
      }
#line 635 "prog_ctgc.m"
  }
#line 120 "prog_ctgc.m"
}

#line 671 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0_1(
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 671 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 671 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 671 "prog_ctgc.m"
{
#line 671 "prog_ctgc.m"
  {
#line 671 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 671 "prog_ctgc.m"
    {
#line 671 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 671 "prog_ctgc.m"
      return;
    }
#line 671 "prog_ctgc.m"
  }
#line 671 "prog_ctgc.m"
}

#line 117 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(
#line 117 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
#line 117 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
#line 117 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
#line 117 "prog_ctgc.m"
{
#line 644 "prog_ctgc.m"
  {
#line 644 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 644 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "prog_ctgc.m"
      {
#line 645 "prog_ctgc.m"
        {
#line 645 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "% no reuse information available.\n");
#line 645 "prog_ctgc.m"
          return;
        }
#line 644 "prog_ctgc.m"
      }
#line 644 "prog_ctgc.m"
    else
#line 646 "prog_ctgc.m"
      {
#line 646 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ReuseAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 679 "prog_ctgc.m"
        {
#line 679 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "%\t ");
        }
#line 683 "prog_ctgc.m"
#line 683 "prog_ctgc.m"
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__ReuseAs_15)) {
#line 683 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 683 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 683 "prog_ctgc.m"
#line 683 "prog_ctgc.m"
            switch (MR_unmkbody(parse_tree__prog_ctgc__ReuseAs_15)) {
#line 683 "prog_ctgc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 683 "prog_ctgc.m"
              case (MR_Integer) 0:
#line 681 "prog_ctgc.m"
                {
#line 682 "prog_ctgc.m"
                  {
#line 682 "prog_ctgc.m"
                    mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
                  }
#line 681 "prog_ctgc.m"
                }
#line 683 "prog_ctgc.m"
                break;
#line 683 "prog_ctgc.m"
              case (MR_Integer) 1:
#line 684 "prog_ctgc.m"
                {
#line 685 "prog_ctgc.m"
                  {
#line 685 "prog_ctgc.m"
                    mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
                  }
#line 684 "prog_ctgc.m"
                }
#line 683 "prog_ctgc.m"
                break;
#line 683 "prog_ctgc.m"
            }
#line 683 "prog_ctgc.m"
            break;
#line 683 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 687 "prog_ctgc.m"
            {
#line 687 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__ReuseConditions_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseAs_15, (MR_Integer) 0)));
#line 687 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_51_51;

#line 688 "prog_ctgc.m"
              {
#line 688 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
              }
#line 671 "prog_ctgc.m"
              {
#line 671 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0_1));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_1));
#line 671 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_2));
#line 671 "prog_ctgc.m"
              }
#line 670 "prog_ctgc.m"
              {
#line 670 "prog_ctgc.m"
                mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_32, (MR_String) ", \n%\t ", parse_tree__prog_ctgc__V_51_51);
              }
#line 691 "prog_ctgc.m"
              {
#line 691 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 687 "prog_ctgc.m"
            }
#line 683 "prog_ctgc.m"
            break;
#line 683 "prog_ctgc.m"
        }
#line 693 "prog_ctgc.m"
        {
#line 693 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 693 "prog_ctgc.m"
          return;
        }
#line 646 "prog_ctgc.m"
      }
#line 644 "prog_ctgc.m"
  }
#line 117 "prog_ctgc.m"
}

#line 615 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0_1(
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 615 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 615 "prog_ctgc.m"
{
#line 615 "prog_ctgc.m"
  {
#line 615 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 615 "prog_ctgc.m"
    {
#line 615 "prog_ctgc.m"
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 615 "prog_ctgc.m"
      return;
    }
#line 615 "prog_ctgc.m"
  }
#line 615 "prog_ctgc.m"
}

#line 114 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(
#line 114 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
#line 114 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
#line 114 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
#line 114 "prog_ctgc.m"
{
#line 628 "prog_ctgc.m"
  {
#line 628 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 628 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "prog_ctgc.m"
      {
#line 629 "prog_ctgc.m"
        {
#line 629 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "% no sharing information available.\n");
#line 629 "prog_ctgc.m"
          return;
        }
#line 628 "prog_ctgc.m"
      }
#line 628 "prog_ctgc.m"
    else
#line 631 "prog_ctgc.m"
      {
#line 631 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 606 "prog_ctgc.m"
        {
#line 606 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "%\t ");
        }
#line 618 "prog_ctgc.m"
#line 618 "prog_ctgc.m"
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_15)) {
#line 618 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 618 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 619 "prog_ctgc.m"
            {
#line 620 "prog_ctgc.m"
              {
#line 620 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "bottom");
              }
#line 619 "prog_ctgc.m"
            }
#line 618 "prog_ctgc.m"
            break;
#line 618 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 622 "prog_ctgc.m"
            {
#line 622 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__SharingPairs_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_15, (MR_Integer) 0)));

#line 623 "prog_ctgc.m"
              {
#line 623 "prog_ctgc.m"
                parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_1, parse_tree__prog_ctgc__TypeVarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) "\n%\t", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_37);
              }
#line 622 "prog_ctgc.m"
            }
#line 618 "prog_ctgc.m"
            break;
#line 618 "prog_ctgc.m"
          case (MR_Integer) 2:
#line 608 "prog_ctgc.m"
            {
#line 608 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_54;
#line 608 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__Msgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_15, (MR_Integer) 0)));
#line 608 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_46_46;

#line 614 "prog_ctgc.m"
              {
#line 614 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "top([");
              }
#line 3627 "parse_tree.prog_ctgc.c"
              parse_tree__prog_ctgc__TypeCtorInfo_40_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
#line 615 "prog_ctgc.m"
              {
#line 615 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_46_46 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_54, parse_tree__prog_ctgc__Msgs_36);
              }
#line 615 "prog_ctgc.m"
              {
#line 615 "prog_ctgc.m"
                mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_54, parse_tree__prog_ctgc__V_46_46, (MR_String) "\n%\t", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[3]);
              }
#line 616 "prog_ctgc.m"
              {
#line 616 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 608 "prog_ctgc.m"
            }
#line 618 "prog_ctgc.m"
            break;
#line 618 "prog_ctgc.m"
        }
#line 626 "prog_ctgc.m"
        {
#line 626 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 626 "prog_ctgc.m"
          return;
        }
#line 631 "prog_ctgc.m"
      }
#line 628 "prog_ctgc.m"
  }
#line 114 "prog_ctgc.m"
}

#line 615 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 615 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 615 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 615 "prog_ctgc.m"
{
#line 615 "prog_ctgc.m"
  {
#line 615 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 615 "prog_ctgc.m"
    {
#line 615 "prog_ctgc.m"
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 615 "prog_ctgc.m"
      return;
    }
#line 615 "prog_ctgc.m"
  }
#line 615 "prog_ctgc.m"
}

#line 108 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(
#line 108 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_8,
#line 108 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_9,
#line 108 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__VerboseTop_10,
#line 108 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__MaybeThreshold_11,
#line 108 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__SharingAs_12)
#line 108 "prog_ctgc.m"
{
#line 596 "prog_ctgc.m"
  {
#line 596 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 606 "prog_ctgc.m"
    {
#line 606 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "");
    }
#line 618 "prog_ctgc.m"
#line 618 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_12)) {
#line 618 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 618 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 619 "prog_ctgc.m"
        {
#line 620 "prog_ctgc.m"
          {
#line 620 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "bottom");
          }
#line 619 "prog_ctgc.m"
        }
#line 618 "prog_ctgc.m"
        break;
#line 618 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 622 "prog_ctgc.m"
        {
#line 622 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__SharingPairs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

#line 623 "prog_ctgc.m"
          {
#line 623 "prog_ctgc.m"
            parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_8, parse_tree__prog_ctgc__TypeVarSet_9, parse_tree__prog_ctgc__MaybeThreshold_11, (MR_String) "[", (MR_String) ", ", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_32);
          }
#line 622 "prog_ctgc.m"
        }
#line 618 "prog_ctgc.m"
        break;
#line 618 "prog_ctgc.m"
      case (MR_Integer) 2:
#line 608 "prog_ctgc.m"
        {
#line 608 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Msgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

#line 612 "prog_ctgc.m"
#line 612 "prog_ctgc.m"
          switch (parse_tree__prog_ctgc__VerboseTop_10) {
#line 612 "prog_ctgc.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 612 "prog_ctgc.m"
            case (MR_Integer) 0:
#line 610 "prog_ctgc.m"
              {
#line 611 "prog_ctgc.m"
                {
#line 611 "prog_ctgc.m"
                  mercury__io__write_string_3_p_0((MR_String) "top");
                }
#line 610 "prog_ctgc.m"
              }
#line 612 "prog_ctgc.m"
              break;
#line 612 "prog_ctgc.m"
            case (MR_Integer) 1:
#line 613 "prog_ctgc.m"
              {
#line 613 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_49;
#line 613 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_41_41;

#line 614 "prog_ctgc.m"
                {
#line 614 "prog_ctgc.m"
                  mercury__io__write_string_3_p_0((MR_String) "top([");
                }
#line 3792 "parse_tree.prog_ctgc.c"
                parse_tree__prog_ctgc__TypeCtorInfo_40_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
#line 615 "prog_ctgc.m"
                {
#line 615 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_41_41 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__Msgs_31);
                }
#line 615 "prog_ctgc.m"
                {
#line 615 "prog_ctgc.m"
                  mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__V_41_41, (MR_String) ", ", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[2]);
                }
#line 616 "prog_ctgc.m"
                {
#line 616 "prog_ctgc.m"
                  mercury__io__write_string_3_p_0((MR_String) "])");
                }
#line 613 "prog_ctgc.m"
              }
#line 612 "prog_ctgc.m"
              break;
#line 612 "prog_ctgc.m"
          }
#line 608 "prog_ctgc.m"
        }
#line 618 "prog_ctgc.m"
        break;
#line 618 "prog_ctgc.m"
    }
#line 626 "prog_ctgc.m"
    {
#line 626 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "");
#line 626 "prog_ctgc.m"
      return;
    }
#line 596 "prog_ctgc.m"
  }
#line 108 "prog_ctgc.m"
}

#line 91 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_as_list_5_p_0(
#line 91 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 91 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 91 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__SharingPairs_8)
#line 91 "prog_ctgc.m"
{
#line 591 "prog_ctgc.m"
  {
#line 591 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 592 "prog_ctgc.m"
    {
#line 592 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) ",", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_8);
#line 592 "prog_ctgc.m"
      return;
    }
#line 591 "prog_ctgc.m"
  }
#line 91 "prog_ctgc.m"
}

#line 581 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
#line 581 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 581 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 581 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 581 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 581 "prog_ctgc.m"
{
#line 581 "prog_ctgc.m"
  {
#line 581 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 581 "prog_ctgc.m"
    {
#line 581 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_pair_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 581 "prog_ctgc.m"
      return;
    }
#line 581 "prog_ctgc.m"
  }
#line 581 "prog_ctgc.m"
}

#line 84 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0(
#line 84 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_10,
#line 84 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_11,
#line 84 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__MaybeLimit_12,
#line 84 "prog_ctgc.m"
  MR_String parse_tree__prog_ctgc__Start_13,
#line 84 "prog_ctgc.m"
  MR_String parse_tree__prog_ctgc__Sep_14,
#line 84 "prog_ctgc.m"
  MR_String parse_tree__prog_ctgc__End_15,
#line 84 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__SharingPairs0_16)
#line 84 "prog_ctgc.m"
{
#line 565 "prog_ctgc.m"
  {
#line 565 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 565 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_35_35;
#line 565 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_25_25;

#line 579 "prog_ctgc.m"
    {
#line 579 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Start_13);
    }
#line 581 "prog_ctgc.m"
    {
#line 581 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 581 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[1]));
#line 581 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1));
#line 581 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 581 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_10));
#line 581 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_11));
#line 581 "prog_ctgc.m"
    }
#line 3940 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_35_35 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 3942 "parse_tree.prog_ctgc.c"
    if ((parse_tree__prog_ctgc__MaybeLimit_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "prog_ctgc.m"
      {
#line 580 "prog_ctgc.m"
        mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs0_16, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
      }
#line 3949 "parse_tree.prog_ctgc.c"
    else
#line 3951 "parse_tree.prog_ctgc.c"
      {
#line 3953 "parse_tree.prog_ctgc.c"
        MR_Word parse_tree__prog_ctgc__TypeInfo_31_31 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 3955 "parse_tree.prog_ctgc.c"
        MR_Integer parse_tree__prog_ctgc__Limit_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeLimit_12, (MR_Integer) 0)));
#line 3957 "parse_tree.prog_ctgc.c"
        MR_Word parse_tree__prog_ctgc__SharingPairs_36;
#line 569 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__V_23_23;

#line 568 "prog_ctgc.m"
        {
#line 568 "prog_ctgc.m"
          mercury__list__take_upto_3_p_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__Limit_18, parse_tree__prog_ctgc__SharingPairs0_16, &parse_tree__prog_ctgc__SharingPairs_36);
        }
#line 580 "prog_ctgc.m"
        {
#line 580 "prog_ctgc.m"
          mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs_36, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
        }
#line 569 "prog_ctgc.m"
        {
#line 569 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_23_23 = mercury__list__length_1_f_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__SharingPairs0_16);
        }
#line 569 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__Limit_18 >= parse_tree__prog_ctgc__V_23_23);
#line 3979 "parse_tree.prog_ctgc.c"
        if (parse_tree__prog_ctgc__succeeded)
#line 587 "prog_ctgc.m"
          {
#line 587 "prog_ctgc.m"
          }
#line 3985 "parse_tree.prog_ctgc.c"
        else
#line 3987 "parse_tree.prog_ctgc.c"
          {
#line 584 "prog_ctgc.m"
            {
#line 584 "prog_ctgc.m"
              mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Sep_14);
            }
#line 585 "prog_ctgc.m"
            {
#line 585 "prog_ctgc.m"
              mercury__io__write_string_3_p_0((MR_String) "...");
            }
#line 3999 "parse_tree.prog_ctgc.c"
          }
#line 4001 "parse_tree.prog_ctgc.c"
      }
#line 589 "prog_ctgc.m"
    {
#line 589 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__End_15);
#line 589 "prog_ctgc.m"
      return;
    }
#line 565 "prog_ctgc.m"
  }
#line 84 "prog_ctgc.m"
}

#line 70 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_pair_5_p_0(
#line 70 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 70 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 70 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__SharingPair_8)
#line 70 "prog_ctgc.m"
{
#line 556 "prog_ctgc.m"
  {
#line 556 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 556 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 0)));
#line 556 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 1)));

#line 558 "prog_ctgc.m"
    {
#line 558 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "pair(");
    }
#line 559 "prog_ctgc.m"
    {
#line 559 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D1_10);
    }
#line 560 "prog_ctgc.m"
    {
#line 560 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 561 "prog_ctgc.m"
    {
#line 561 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D2_11);
    }
#line 562 "prog_ctgc.m"
    {
#line 562 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 562 "prog_ctgc.m"
      return;
    }
#line 556 "prog_ctgc.m"
  }
#line 70 "prog_ctgc.m"
}

#line 552 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
#line 552 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 552 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 552 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 552 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 552 "prog_ctgc.m"
{
#line 552 "prog_ctgc.m"
  {
#line 552 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 552 "prog_ctgc.m"
    {
#line 552 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 552 "prog_ctgc.m"
      return;
    }
#line 552 "prog_ctgc.m"
  }
#line 552 "prog_ctgc.m"
}

#line 67 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0(
#line 67 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 67 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 67 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Datastructs_8)
#line 67 "prog_ctgc.m"
{
#line 550 "prog_ctgc.m"
  {
#line 550 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 550 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_15_15;

#line 551 "prog_ctgc.m"
    {
#line 551 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 552 "prog_ctgc.m"
    {
#line 552 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 552 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
#line 552 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_datastructs_5_p_0_1));
#line 552 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 552 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_6));
#line 552 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_7));
#line 552 "prog_ctgc.m"
    }
#line 552 "prog_ctgc.m"
    {
#line 552 "prog_ctgc.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__Datastructs_8, (MR_String) ", ", parse_tree__prog_ctgc__V_15_15);
    }
#line 554 "prog_ctgc.m"
    {
#line 554 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
#line 554 "prog_ctgc.m"
      return;
    }
#line 550 "prog_ctgc.m"
  }
#line 67 "prog_ctgc.m"
}

#line 64 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_datastruct_5_p_0(
#line 64 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 64 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 64 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__DataStruct_8)
#line 64 "prog_ctgc.m"
{
#line 544 "prog_ctgc.m"
  {
#line 544 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 544 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__VarName_10;
#line 544 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
#line 544 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 544 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_17_17;
#line 544 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_21_21;
#line 545 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
#line 547 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_26_26;

#line 545 "prog_ctgc.m"
    {
#line 545 "prog_ctgc.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__V_13_13, &parse_tree__prog_ctgc__VarName_10);
    }
#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (parse_tree__prog_ctgc__VarName_10));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[6])));
#line 546 "prog_ctgc.m"
    }
#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) ((MR_String) "cel("));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
#line 546 "prog_ctgc.m"
    }
#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      mercury__io__write_strings_3_p_0(parse_tree__prog_ctgc__V_14_14);
    }
#line 547 "prog_ctgc.m"
    parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
#line 547 "prog_ctgc.m"
    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
#line 547 "prog_ctgc.m"
    {
#line 547 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_selector_4_p_0(parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__V_21_21);
    }
#line 548 "prog_ctgc.m"
    {
#line 548 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 548 "prog_ctgc.m"
      return;
    }
#line 544 "prog_ctgc.m"
  }
#line 64 "prog_ctgc.m"
}

#line 519 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
#line 519 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 519 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
#line 519 "prog_ctgc.m"
{
#line 519 "prog_ctgc.m"
  {
#line 519 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
#line 519 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 519 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__conv0_HeadVar__3_3;

#line 519 "prog_ctgc.m"
    {
#line 519 "prog_ctgc.m"
      parse_tree__prog_ctgc__conv0_HeadVar__3_3 = parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 519 "prog_ctgc.m"
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__3_3));
#line 519 "prog_ctgc.m"
    return parse_tree__prog_ctgc__wrapper_arg_2;
#line 519 "prog_ctgc.m"
  }
#line 519 "prog_ctgc.m"
}

#line 62 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0(
#line 62 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_5,
#line 62 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Selector_6)
#line 62 "prog_ctgc.m"
{
#line 541 "prog_ctgc.m"
  {
#line 541 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 541 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_10_10;

#line 515 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__Selector_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_10_10 = (MR_String) "[]";
#line 515 "prog_ctgc.m"
    else
#line 518 "prog_ctgc.m"
      {
#line 518 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SelectorStrings_17;
#line 518 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_18_18;
#line 518 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_19_19;
#line 518 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_21_21;
#line 518 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_22_22;

#line 519 "prog_ctgc.m"
        {
#line 519 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0]));
#line 519 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_selector_4_p_0_1));
#line 519 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__TVarSet_5));
#line 519 "prog_ctgc.m"
        }
#line 519 "prog_ctgc.m"
        {
#line 519 "prog_ctgc.m"
          parse_tree__prog_ctgc__SelectorStrings_17 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_ctgc__V_18_18, parse_tree__prog_ctgc__Selector_6);
        }
#line 521 "prog_ctgc.m"
        {
#line 521 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_22_22 = mercury__string__join_list_2_f_0((MR_String) ",", parse_tree__prog_ctgc__SelectorStrings_17);
        }
#line 521 "prog_ctgc.m"
        {
#line 521 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_22_22));
#line 521 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[5])));
#line 521 "prog_ctgc.m"
        }
#line 521 "prog_ctgc.m"
        {
#line 521 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) ((MR_String) "["));
#line 521 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_21_21));
#line 521 "prog_ctgc.m"
        }
#line 521 "prog_ctgc.m"
        {
#line 521 "prog_ctgc.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_ctgc__V_19_19, &parse_tree__prog_ctgc__V_10_10);
        }
#line 518 "prog_ctgc.m"
      }
#line 542 "prog_ctgc.m"
    {
#line 542 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__V_10_10);
#line 542 "prog_ctgc.m"
      return;
    }
#line 541 "prog_ctgc.m"
  }
#line 62 "prog_ctgc.m"
}

#line 462 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
#line 462 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 462 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 462 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 462 "prog_ctgc.m"
{
#line 462 "prog_ctgc.m"
  {
#line 462 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 462 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 462 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_SharingPair_4;

#line 462 "prog_ctgc.m"
    {
#line 462 "prog_ctgc.m"
      parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_SharingPair_4);
    }
#line 462 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 462 "prog_ctgc.m"
      {
#line 462 "prog_ctgc.m"
        *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_SharingPair_4));
#line 462 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 462 "prog_ctgc.m"
      }
#line 462 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 462 "prog_ctgc.m"
  }
#line 462 "prog_ctgc.m"
}

#line 54 "prog_ctgc.m"
MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0(
#line 54 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Varset_0_23,
#line 54 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_5,
#line 54 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__UserSharing_6)
#line 54 "prog_ctgc.m"
{
#line 425 "prog_ctgc.m"
  {
#line 425 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 425 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_62_62;
#line 425 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_63_63;
#line 425 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_64_64;
#line 425 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_70_70;

#line 425 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 425 "prog_ctgc.m"
      {
#line 425 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 0)));
#line 425 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 1)));
#line 425 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 2)));
#line 425 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 425 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 425 "prog_ctgc.m"
          {
#line 425 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_64_64, (MR_Integer) 0)));
#line 425 "prog_ctgc.m"
            if ((parse_tree__prog_ctgc__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "no_sharing") == 0))
#line 425 "prog_ctgc.m"
                {
#line 426 "prog_ctgc.m"
                  *parse_tree__prog_ctgc__UserSharing_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[4]);
#line 425 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 425 "prog_ctgc.m"
                }
#line 425 "prog_ctgc.m"
              else
#line 425 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "unknown_sharing") == 0))
#line 428 "prog_ctgc.m"
                {
#line 428 "prog_ctgc.m"
                  MR_String parse_tree__prog_ctgc__ContextString_9;
#line 428 "prog_ctgc.m"
                  MR_String parse_tree__prog_ctgc__Msg_10;
#line 428 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__Reason_11;
#line 428 "prog_ctgc.m"
                  MR_String parse_tree__prog_ctgc__V_41_41;
#line 428 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_43_43;
#line 428 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_44_44;

#line 429 "prog_ctgc.m"
                  {
#line 429 "prog_ctgc.m"
                    parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_ctgc__V_62_62, &parse_tree__prog_ctgc__ContextString_9);
                  }
#line 430 "prog_ctgc.m"
                  {
#line 430 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_41_41 = mercury__string__f_43_43_2_f_0(parse_tree__prog_ctgc__ContextString_9, (MR_String) ")");
                  }
#line 430 "prog_ctgc.m"
                  {
#line 430 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Msg_10 = mercury__string__f_43_43_2_f_0((MR_String) "user declared top(", parse_tree__prog_ctgc__V_41_41);
                  }
#line 431 "prog_ctgc.m"
                  {
#line 431 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Reason_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 431 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__Reason_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Msg_10));
#line 431 "prog_ctgc.m"
                  }
#line 433 "prog_ctgc.m"
                  {
#line 433 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_44_44 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__Reason_11)));
                  }
#line 432 "prog_ctgc.m"
                  {
#line 432 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__V_43_43, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_44_44));
#line 432 "prog_ctgc.m"
                  }
#line 432 "prog_ctgc.m"
                  {
#line 432 "prog_ctgc.m"
                    MR_Word base;
#line 432 "prog_ctgc.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_ctgc.m"
                    *parse_tree__prog_ctgc__UserSharing_6 = base;
#line 432 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_43_43));
#line 432 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "prog_ctgc.m"
                  }
#line 428 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 428 "prog_ctgc.m"
                }
#line 425 "prog_ctgc.m"
              else
#line 425 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 425 "prog_ctgc.m"
            else
#line 436 "prog_ctgc.m"
              {
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypesTerm_12;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__UserSharingTerm_13;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__MaybeUserTypes_19;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__Sharing_22;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_27_27;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_28_28;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_66_66;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_67_67;
#line 436 "prog_ctgc.m"
                MR_String parse_tree__prog_ctgc__V_69_69;
#line 436 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__SharingPairTerms_73;
#line 438 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_65_65;

#line 435 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "sharing") == 0);
#line 436 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 436 "prog_ctgc.m"
                  {
#line 436 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypesTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_63_63, (MR_Integer) 0)));
#line 436 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_63_63, (MR_Integer) 1)));
#line 436 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 436 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 436 "prog_ctgc.m"
                      {
#line 436 "prog_ctgc.m"
                        parse_tree__prog_ctgc__UserSharingTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 0)));
#line 436 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 1)));
#line 436 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 436 "prog_ctgc.m"
                          {
#line 438 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__TypesTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 438 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 438 "prog_ctgc.m"
                              {
#line 438 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 0)));
#line 438 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 1)));
#line 438 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 2)));
#line 438 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_67_67)) == (MR_mktag((MR_Integer) 0)));
#line 438 "prog_ctgc.m"
                                if (parse_tree__prog_ctgc__succeeded)
#line 438 "prog_ctgc.m"
                                  {
#line 438 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_67_67, (MR_Integer) 0)));
#line 444 "prog_ctgc.m"
                                    if ((strcmp(parse_tree__prog_ctgc__V_69_69, (MR_String) "no") == 0))
#line 446 "prog_ctgc.m"
                                      {
#line 446 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 446 "prog_ctgc.m"
                                      }
#line 444 "prog_ctgc.m"
                                    else
#line 444 "prog_ctgc.m"
                                    if ((strcmp(parse_tree__prog_ctgc__V_69_69, (MR_String) "yes") == 0))
#line 438 "prog_ctgc.m"
                                      {
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeCtorInfo_59_59;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeInfo_60_60;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeCtorInfo_61_61;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__Types_17;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeVars_18;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__V_33_33;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__V_35_35;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__V_36_36;
#line 438 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53;

#line 439 "prog_ctgc.m"
                                        {
#line 439 "prog_ctgc.m"
                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__V_66_66, &parse_tree__prog_ctgc__Types_17);
                                        }
#line 438 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 438 "prog_ctgc.m"
                                          {
#line 4654 "parse_tree.prog_ctgc.c"
                                            parse_tree__prog_ctgc__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 440 "prog_ctgc.m"
                                            {
#line 440 "prog_ctgc.m"
                                              mercury__term__vars_list_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__V_66_66, &parse_tree__prog_ctgc__TypeVars_18);
                                            }
#line 4661 "parse_tree.prog_ctgc.c"
                                            parse_tree__prog_ctgc__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[0];
#line 441 "prog_ctgc.m"
                                            {
#line 441 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__V_33_33 = mercury__set__list_to_set_1_f_0(parse_tree__prog_ctgc__TypeInfo_60_60, parse_tree__prog_ctgc__TypeVars_18);
                                            }
#line 441 "prog_ctgc.m"
                                            {
#line 441 "prog_ctgc.m"
                                              mercury__varset__select_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__V_33_33, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_0_23, &parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53);
                                            }
#line 4673 "parse_tree.prog_ctgc.c"
                                            parse_tree__prog_ctgc__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 443 "prog_ctgc.m"
                                            {
#line 443 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__V_36_36 = mercury__varset__coerce_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__TypeCtorInfo_61_61, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53);
                                            }
#line 442 "prog_ctgc.m"
                                            {
#line 442 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_ctgc.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (parse_tree__prog_ctgc__Types_17));
#line 442 "prog_ctgc.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
#line 442 "prog_ctgc.m"
                                            }
#line 442 "prog_ctgc.m"
                                            {
#line 442 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_ctgc.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeUserTypes_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_35_35));
#line 442 "prog_ctgc.m"
                                            }
#line 442 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 438 "prog_ctgc.m"
                                          }
#line 438 "prog_ctgc.m"
                                      }
#line 444 "prog_ctgc.m"
                                    else
#line 444 "prog_ctgc.m"
                                      parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 436 "prog_ctgc.m"
                                    if (parse_tree__prog_ctgc__succeeded)
#line 436 "prog_ctgc.m"
                                      {
#line 456 "prog_ctgc.m"
                                        {
#line 456 "prog_ctgc.m"
                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__UserSharingTerm_13, &parse_tree__prog_ctgc__SharingPairTerms_73);
                                        }
#line 436 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 436 "prog_ctgc.m"
                                          {
#line 460 "prog_ctgc.m"
                                            if ((parse_tree__prog_ctgc__SharingPairTerms_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "prog_ctgc.m"
                                              {
#line 459 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 459 "prog_ctgc.m"
                                              }
#line 460 "prog_ctgc.m"
                                            else
#line 461 "prog_ctgc.m"
                                              {
#line 461 "prog_ctgc.m"
                                                MR_Word parse_tree__prog_ctgc__SharingPairs_76;

#line 462 "prog_ctgc.m"
                                                {
#line 462 "prog_ctgc.m"
                                                  parse_tree__prog_ctgc__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[3], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[1], parse_tree__prog_ctgc__SharingPairTerms_73, &parse_tree__prog_ctgc__SharingPairs_76);
                                                }
#line 461 "prog_ctgc.m"
                                                if (parse_tree__prog_ctgc__succeeded)
#line 461 "prog_ctgc.m"
                                                  {
#line 464 "prog_ctgc.m"
                                                    {
#line 464 "prog_ctgc.m"
                                                      parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_ctgc.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Sharing_22, 0) = ((MR_Box) (parse_tree__prog_ctgc__SharingPairs_76));
#line 464 "prog_ctgc.m"
                                                    }
#line 464 "prog_ctgc.m"
                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 461 "prog_ctgc.m"
                                                  }
#line 461 "prog_ctgc.m"
                                              }
#line 436 "prog_ctgc.m"
                                            if (parse_tree__prog_ctgc__succeeded)
#line 436 "prog_ctgc.m"
                                              {
#line 449 "prog_ctgc.m"
                                                {
#line 449 "prog_ctgc.m"
                                                  MR_Word base;
#line 449 "prog_ctgc.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "prog_ctgc.m"
                                                  *parse_tree__prog_ctgc__UserSharing_6 = base;
#line 449 "prog_ctgc.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_22));
#line 449 "prog_ctgc.m"
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__MaybeUserTypes_19));
#line 449 "prog_ctgc.m"
                                                }
#line 449 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 436 "prog_ctgc.m"
                                              }
#line 436 "prog_ctgc.m"
                                          }
#line 436 "prog_ctgc.m"
                                      }
#line 438 "prog_ctgc.m"
                                  }
#line 438 "prog_ctgc.m"
                              }
#line 436 "prog_ctgc.m"
                          }
#line 436 "prog_ctgc.m"
                      }
#line 436 "prog_ctgc.m"
                  }
#line 436 "prog_ctgc.m"
              }
#line 425 "prog_ctgc.m"
          }
#line 425 "prog_ctgc.m"
      }
#line 425 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 425 "prog_ctgc.m"
  }
#line 54 "prog_ctgc.m"
}

#line 52 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_domain_1_f_0(
#line 52 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_18,
#line 52 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 52 "prog_ctgc.m"
{
#line 416 "prog_ctgc.m"
  {
#line 416 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 416 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseDomain_4;
#line 416 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 416 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 397 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;
#line 397 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 397 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 397 "prog_ctgc.m"
      {
#line 397 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 397 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 397 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 397 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 397 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 397 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
#line 397 "prog_ctgc.m"
      }
#line 416 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 403 "prog_ctgc.m"
      {
#line 400 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_no_reuse") == 0);
#line 403 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 402 "prog_ctgc.m"
          parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "prog_ctgc.m"
        else
#line 407 "prog_ctgc.m"
          {
#line 404 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_only_unconditional_reuse") == 0);
#line 407 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 406 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 407 "prog_ctgc.m"
            else
#line 413 "prog_ctgc.m"
              {
#line 413 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__ReuseConditionsTerm_8;
#line 408 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_10_10;

#line 408 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_conditional_reuse") == 0);
#line 408 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 408 "prog_ctgc.m"
                  {
#line 409 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 409 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 409 "prog_ctgc.m"
                      {
#line 409 "prog_ctgc.m"
                        parse_tree__prog_ctgc__ReuseConditionsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 409 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 409 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "prog_ctgc.m"
                      }
#line 408 "prog_ctgc.m"
                  }
#line 413 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 411 "prog_ctgc.m"
                  {
#line 411 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_11_11;

#line 412 "prog_ctgc.m"
                    {
#line 412 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_11_11 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__ReuseConditionsTerm_8);
                    }
#line 411 "prog_ctgc.m"
                    {
#line 411 "prog_ctgc.m"
                      parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_11_11));
#line 411 "prog_ctgc.m"
                    }
#line 411 "prog_ctgc.m"
                  }
#line 413 "prog_ctgc.m"
                else
#line 414 "prog_ctgc.m"
                  {
#line 414 "prog_ctgc.m"
                    {
#line 414 "prog_ctgc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain");
                    }
#line 414 "prog_ctgc.m"
                  }
#line 413 "prog_ctgc.m"
              }
#line 407 "prog_ctgc.m"
          }
#line 403 "prog_ctgc.m"
      }
#line 416 "prog_ctgc.m"
    else
#line 417 "prog_ctgc.m"
      {
#line 417 "prog_ctgc.m"
        {
#line 417 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain (term not a functor)");
        }
#line 417 "prog_ctgc.m"
      }
#line 416 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseDomain_4;
#line 416 "prog_ctgc.m"
  }
#line 52 "prog_ctgc.m"
}

#line 50 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(
#line 50 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
#line 50 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 50 "prog_ctgc.m"
{
#line 390 "prog_ctgc.m"
  {
#line 390 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 390 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseConditions_4;
#line 390 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 390 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 375 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 375 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 375 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 375 "prog_ctgc.m"
      {
#line 375 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 375 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 375 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 375 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 375 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 375 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 375 "prog_ctgc.m"
      }
#line 390 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 383 "prog_ctgc.m"
      {
#line 383 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__FirstTupleTerm_8;
#line 383 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__RestTuplesTerm_9;
#line 378 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 378 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 378 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 378 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 378 "prog_ctgc.m"
          {
#line 379 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 379 "prog_ctgc.m"
              {
#line 379 "prog_ctgc.m"
                parse_tree__prog_ctgc__FirstTupleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 379 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 379 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 379 "prog_ctgc.m"
                  {
#line 379 "prog_ctgc.m"
                    parse_tree__prog_ctgc__RestTuplesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 379 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 379 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_ctgc.m"
                  }
#line 379 "prog_ctgc.m"
              }
#line 378 "prog_ctgc.m"
          }
#line 383 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 381 "prog_ctgc.m"
          {
#line 381 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 381 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 381 "prog_ctgc.m"
            {
#line 381 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstTupleTerm_8);
            }
#line 382 "prog_ctgc.m"
            {
#line 382 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestTuplesTerm_9);
            }
#line 381 "prog_ctgc.m"
            {
#line 381 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 381 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 381 "prog_ctgc.m"
            }
#line 381 "prog_ctgc.m"
          }
#line 383 "prog_ctgc.m"
        else
#line 387 "prog_ctgc.m"
          {
#line 384 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
#line 387 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 386 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "prog_ctgc.m"
            else
#line 388 "prog_ctgc.m"
              {
#line 388 "prog_ctgc.m"
                {
#line 388 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions");
                }
#line 388 "prog_ctgc.m"
              }
#line 387 "prog_ctgc.m"
          }
#line 383 "prog_ctgc.m"
      }
#line 390 "prog_ctgc.m"
    else
#line 391 "prog_ctgc.m"
      {
#line 391 "prog_ctgc.m"
        {
#line 391 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions (term not a functor)");
        }
#line 391 "prog_ctgc.m"
      }
#line 390 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseConditions_4;
#line 390 "prog_ctgc.m"
  }
#line 50 "prog_ctgc.m"
}

#line 48 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(
#line 48 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_25,
#line 48 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 48 "prog_ctgc.m"
{
#line 368 "prog_ctgc.m"
  {
#line 368 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 368 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseCondition_4;
#line 368 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 368 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 353 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_15_15;
#line 353 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 353 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 353 "prog_ctgc.m"
      {
#line 353 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 353 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 353 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 353 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 353 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 353 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, (MR_Integer) 0)));
#line 353 "prog_ctgc.m"
      }
#line 368 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 365 "prog_ctgc.m"
      {
#line 365 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__DeadNodesTerm_8;
#line 365 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__InUseNodesTerm_9;
#line 365 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingTerm_10;
#line 356 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_16_16;
#line 356 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_17_17;
#line 356 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_18_18;

#line 356 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "condition") == 0);
#line 356 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 356 "prog_ctgc.m"
          {
#line 357 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 357 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 357 "prog_ctgc.m"
              {
#line 357 "prog_ctgc.m"
                parse_tree__prog_ctgc__DeadNodesTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 357 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 357 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 357 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 357 "prog_ctgc.m"
                  {
#line 357 "prog_ctgc.m"
                    parse_tree__prog_ctgc__InUseNodesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 0)));
#line 357 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 1)));
#line 357 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 357 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 357 "prog_ctgc.m"
                      {
#line 357 "prog_ctgc.m"
                        parse_tree__prog_ctgc__SharingTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 0)));
#line 357 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 1)));
#line 357 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "prog_ctgc.m"
                      }
#line 357 "prog_ctgc.m"
                  }
#line 357 "prog_ctgc.m"
              }
#line 356 "prog_ctgc.m"
          }
#line 365 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 359 "prog_ctgc.m"
          {
#line 359 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__DeadNodesList_11;
#line 359 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__DeadNodes_12;
#line 359 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__InUseNodes_13;
#line 359 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__Sharing_14;

#line 359 "prog_ctgc.m"
            {
#line 359 "prog_ctgc.m"
              parse_tree__prog_ctgc__DeadNodesList_11 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__DeadNodesTerm_8);
            }
#line 360 "prog_ctgc.m"
            {
#line 360 "prog_ctgc.m"
              parse_tree__prog_ctgc__DeadNodes_12 = mercury__set__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodesList_11);
            }
#line 361 "prog_ctgc.m"
            {
#line 361 "prog_ctgc.m"
              parse_tree__prog_ctgc__InUseNodes_13 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__InUseNodesTerm_9);
            }
#line 362 "prog_ctgc.m"
            {
#line 362 "prog_ctgc.m"
              parse_tree__prog_ctgc__Sharing_14 = parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__SharingTerm_10);
            }
#line 363 "prog_ctgc.m"
            {
#line 363 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseCondition_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 363 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__DeadNodes_12));
#line 363 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__InUseNodes_13));
#line 363 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 2) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_14));
#line 363 "prog_ctgc.m"
            }
#line 359 "prog_ctgc.m"
          }
#line 365 "prog_ctgc.m"
        else
#line 366 "prog_ctgc.m"
          {
#line 366 "prog_ctgc.m"
            {
#line 366 "prog_ctgc.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition");
            }
#line 366 "prog_ctgc.m"
          }
#line 365 "prog_ctgc.m"
      }
#line 368 "prog_ctgc.m"
    else
#line 369 "prog_ctgc.m"
      {
#line 369 "prog_ctgc.m"
        {
#line 369 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition (term not a functor)");
        }
#line 369 "prog_ctgc.m"
      }
#line 368 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseCondition_4;
#line 368 "prog_ctgc.m"
  }
#line 48 "prog_ctgc.m"
}

#line 46 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(
#line 46 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_17,
#line 46 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 46 "prog_ctgc.m"
{
#line 346 "prog_ctgc.m"
  {
#line 346 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 346 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingAs_4;
#line 346 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingAs0_8;
#line 331 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 331 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;
#line 331 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_6_6;
#line 331 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc___Context_7;

#line 331 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 331 "prog_ctgc.m"
      {
#line 331 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 331 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 331 "prog_ctgc.m"
        parse_tree__prog_ctgc___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 331 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 331 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 331 "prog_ctgc.m"
          {
#line 331 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
#line 335 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 333 "prog_ctgc.m"
              {
#line 333 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;

#line 334 "prog_ctgc.m"
                {
#line 334 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_17, parse_tree__prog_ctgc__Term_3);
                }
#line 334 "prog_ctgc.m"
                {
#line 334 "prog_ctgc.m"
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 334 "prog_ctgc.m"
                }
#line 333 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 333 "prog_ctgc.m"
              }
#line 335 "prog_ctgc.m"
            else
#line 335 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "top") == 0))
#line 339 "prog_ctgc.m"
              {
#line 339 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_10_10;

#line 341 "prog_ctgc.m"
                {
#line 341 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_10_10 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_ctgc_scalar_common_3[0]))));
                }
#line 340 "prog_ctgc.m"
                {
#line 340 "prog_ctgc.m"
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
#line 340 "prog_ctgc.m"
                }
#line 339 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 339 "prog_ctgc.m"
              }
#line 335 "prog_ctgc.m"
            else
#line 335 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "bottom") == 0))
#line 337 "prog_ctgc.m"
              {
#line 337 "prog_ctgc.m"
                parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 337 "prog_ctgc.m"
              }
#line 335 "prog_ctgc.m"
            else
#line 335 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 331 "prog_ctgc.m"
          }
#line 331 "prog_ctgc.m"
      }
#line 346 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 345 "prog_ctgc.m"
      parse_tree__prog_ctgc__SharingAs_4 = parse_tree__prog_ctgc__SharingAs0_8;
#line 346 "prog_ctgc.m"
    else
#line 347 "prog_ctgc.m"
      {
#line 347 "prog_ctgc.m"
        {
#line 347 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_domain\'/1", (MR_String) "error while parsing structure sharing domain");
        }
#line 347 "prog_ctgc.m"
      }
#line 346 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingAs_4;
#line 346 "prog_ctgc.m"
  }
#line 46 "prog_ctgc.m"
}

#line 44 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(
#line 44 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_19,
#line 44 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 44 "prog_ctgc.m"
{
#line 324 "prog_ctgc.m"
  {
#line 324 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 324 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPairs_4;
#line 324 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPairs0_10;
#line 312 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 312 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 312 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 312 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 312 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 312 "prog_ctgc.m"
      {
#line 312 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 312 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 312 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 312 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 312 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 312 "prog_ctgc.m"
          {
#line 312 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 318 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
#line 320 "prog_ctgc.m"
              {
#line 320 "prog_ctgc.m"
                parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 320 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 320 "prog_ctgc.m"
              }
#line 318 "prog_ctgc.m"
            else
#line 318 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 314 "prog_ctgc.m"
              {
#line 314 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__SharingPairTerm_8;
#line 314 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__Rest_9;
#line 314 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_12_12;
#line 314 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;
#line 314 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_14_14;
#line 314 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_15_15;

#line 315 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 315 "prog_ctgc.m"
                  {
#line 315 "prog_ctgc.m"
                    parse_tree__prog_ctgc__SharingPairTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 315 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 315 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 315 "prog_ctgc.m"
                      {
#line 315 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 315 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 315 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 314 "prog_ctgc.m"
                          {
#line 316 "prog_ctgc.m"
                            {
#line 316 "prog_ctgc.m"
                              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__SharingPairTerm_8);
                            }
#line 317 "prog_ctgc.m"
                            {
#line 317 "prog_ctgc.m"
                              parse_tree__prog_ctgc__V_15_15 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__Rest_9);
                            }
#line 316 "prog_ctgc.m"
                            {
#line 316 "prog_ctgc.m"
                              parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 316 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 316 "prog_ctgc.m"
                            }
#line 316 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 314 "prog_ctgc.m"
                          }
#line 315 "prog_ctgc.m"
                      }
#line 315 "prog_ctgc.m"
                  }
#line 314 "prog_ctgc.m"
              }
#line 318 "prog_ctgc.m"
            else
#line 318 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 312 "prog_ctgc.m"
          }
#line 312 "prog_ctgc.m"
      }
#line 324 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 323 "prog_ctgc.m"
      parse_tree__prog_ctgc__SharingPairs_4 = parse_tree__prog_ctgc__SharingPairs0_10;
#line 324 "prog_ctgc.m"
    else
#line 325 "prog_ctgc.m"
      {
#line 325 "prog_ctgc.m"
        {
#line 325 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing\'/1", (MR_String) "error while parsing list of structure sharing pairs");
        }
#line 325 "prog_ctgc.m"
      }
#line 324 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingPairs_4;
#line 324 "prog_ctgc.m"
  }
#line 44 "prog_ctgc.m"
}

#line 42 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(
#line 42 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_18,
#line 42 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 42 "prog_ctgc.m"
{
#line 305 "prog_ctgc.m"
  {
#line 305 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 305 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPair_4;
#line 305 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__First_8;
#line 305 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Second_9;
#line 300 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 300 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 300 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 300 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 300 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 300 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 300 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 300 "prog_ctgc.m"
      {
#line 300 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 300 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 300 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 300 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 300 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 300 "prog_ctgc.m"
          {
#line 300 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 301 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "pair") == 0);
#line 300 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 300 "prog_ctgc.m"
              {
#line 302 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 302 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 302 "prog_ctgc.m"
                  {
#line 302 "prog_ctgc.m"
                    parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 302 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 302 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 302 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 302 "prog_ctgc.m"
                      {
#line 302 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 302 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 302 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "prog_ctgc.m"
                      }
#line 302 "prog_ctgc.m"
                  }
#line 300 "prog_ctgc.m"
              }
#line 300 "prog_ctgc.m"
          }
#line 300 "prog_ctgc.m"
      }
#line 305 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 304 "prog_ctgc.m"
      {
#line 304 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_13_13;
#line 304 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_14_14;

#line 304 "prog_ctgc.m"
        {
#line 304 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
        }
#line 304 "prog_ctgc.m"
        {
#line 304 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Second_9);
        }
#line 304 "prog_ctgc.m"
        {
#line 304 "prog_ctgc.m"
          parse_tree__prog_ctgc__SharingPair_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 304 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 304 "prog_ctgc.m"
        }
#line 304 "prog_ctgc.m"
      }
#line 305 "prog_ctgc.m"
    else
#line 306 "prog_ctgc.m"
      {
#line 306 "prog_ctgc.m"
        {
#line 306 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_pair\'/1", (MR_String) "error while parsing structure sharing pair");
        }
#line 306 "prog_ctgc.m"
      }
#line 305 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingPair_4;
#line 305 "prog_ctgc.m"
  }
#line 42 "prog_ctgc.m"
}

#line 40 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_1_f_0(
#line 40 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_20,
#line 40 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 40 "prog_ctgc.m"
{
#line 269 "prog_ctgc.m"
  {
#line 269 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 269 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Datastruct_4;
#line 269 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SelectorTerm_9;
#line 269 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_10;
#line 262 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 262 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 262 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_8;
#line 262 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 262 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;
#line 262 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 262 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;
#line 265 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;

#line 262 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 262 "prog_ctgc.m"
      {
#line 262 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 262 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 262 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 262 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 262 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 262 "prog_ctgc.m"
          {
#line 262 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 263 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "cel") == 0);
#line 262 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 262 "prog_ctgc.m"
              {
#line 264 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 264 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 264 "prog_ctgc.m"
                  {
#line 264 "prog_ctgc.m"
                    parse_tree__prog_ctgc__VarTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 264 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 264 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 264 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 264 "prog_ctgc.m"
                      {
#line 264 "prog_ctgc.m"
                        parse_tree__prog_ctgc__SelectorTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
#line 264 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
#line 264 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 262 "prog_ctgc.m"
                          {
#line 265 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_8)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 265 "prog_ctgc.m"
                              {
#line 265 "prog_ctgc.m"
                                parse_tree__prog_ctgc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_8, (MR_Integer) 0)));
#line 265 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_8, (MR_Integer) 1)));
#line 265 "prog_ctgc.m"
                              }
#line 262 "prog_ctgc.m"
                          }
#line 264 "prog_ctgc.m"
                      }
#line 264 "prog_ctgc.m"
                  }
#line 262 "prog_ctgc.m"
              }
#line 262 "prog_ctgc.m"
          }
#line 262 "prog_ctgc.m"
      }
#line 269 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 267 "prog_ctgc.m"
      {
#line 267 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_15_15;
#line 267 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_16_16;

#line 267 "prog_ctgc.m"
        {
#line 267 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_15_15 = mercury__term__coerce_var_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__Var_10);
        }
#line 268 "prog_ctgc.m"
        {
#line 268 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_ctgc__parse_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_20, parse_tree__prog_ctgc__SelectorTerm_9);
        }
#line 267 "prog_ctgc.m"
        {
#line 267 "prog_ctgc.m"
          parse_tree__prog_ctgc__Datastruct_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Datastruct_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 267 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Datastruct_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_16_16));
#line 267 "prog_ctgc.m"
        }
#line 267 "prog_ctgc.m"
      }
#line 269 "prog_ctgc.m"
    else
#line 270 "prog_ctgc.m"
      {
#line 270 "prog_ctgc.m"
        {
#line 270 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct\'/1", (MR_String) "error while parsing datastruct.");
        }
#line 270 "prog_ctgc.m"
      }
#line 269 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Datastruct_4;
#line 269 "prog_ctgc.m"
  }
#line 40 "prog_ctgc.m"
}

#line 38 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_selector_1_f_0(
#line 38 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_18,
#line 38 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 38 "prog_ctgc.m"
{
#line 256 "prog_ctgc.m"
  {
#line 256 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 256 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_4;
#line 256 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 256 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 247 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 247 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 247 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 247 "prog_ctgc.m"
      {
#line 247 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 247 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 247 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 247 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 247 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 247 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 247 "prog_ctgc.m"
      }
#line 256 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 253 "prog_ctgc.m"
      {
#line 253 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__First_8;
#line 253 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Rest_9;
#line 249 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 249 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 249 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 249 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 249 "prog_ctgc.m"
          {
#line 250 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 250 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 250 "prog_ctgc.m"
              {
#line 250 "prog_ctgc.m"
                parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 250 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 250 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 250 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 250 "prog_ctgc.m"
                  {
#line 250 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 250 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 250 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_ctgc.m"
                  }
#line 250 "prog_ctgc.m"
              }
#line 249 "prog_ctgc.m"
          }
#line 253 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 252 "prog_ctgc.m"
          {
#line 252 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 252 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 252 "prog_ctgc.m"
            {
#line 252 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_unit_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
            }
#line 252 "prog_ctgc.m"
            {
#line 252 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Rest_9);
            }
#line 252 "prog_ctgc.m"
            {
#line 252 "prog_ctgc.m"
              parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Selector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 252 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Selector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 252 "prog_ctgc.m"
            }
#line 252 "prog_ctgc.m"
          }
#line 253 "prog_ctgc.m"
        else
#line 254 "prog_ctgc.m"
          parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "prog_ctgc.m"
      }
#line 256 "prog_ctgc.m"
    else
#line 257 "prog_ctgc.m"
      {
#line 257 "prog_ctgc.m"
        {
#line 257 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_selector\'/1", (MR_String) "term not a functor");
        }
#line 257 "prog_ctgc.m"
      }
#line 256 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Selector_4;
#line 256 "prog_ctgc.m"
  }
#line 38 "prog_ctgc.m"
}

#line 36 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_unit_selector_1_f_0(
#line 36 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_63,
#line 36 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 36 "prog_ctgc.m"
{
#line 242 "prog_ctgc.m"
  {
#line 242 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 242 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__UnitSelector_4;
#line 242 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 242 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 195 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 195 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 195 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 195 "prog_ctgc.m"
      {
#line 195 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 195 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 195 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 195 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 195 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 195 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, (MR_Integer) 0)));
#line 195 "prog_ctgc.m"
      }
#line 242 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 229 "prog_ctgc.m"
      {
#line 229 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ConsTerm_8;
#line 229 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ArityTerm_9;
#line 229 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__PosTerm_10;
#line 201 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_31_31;
#line 201 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_32_32;
#line 201 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_33_33;

#line 201 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "sel") == 0);
#line 201 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 201 "prog_ctgc.m"
          {
#line 202 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 202 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 202 "prog_ctgc.m"
              {
#line 202 "prog_ctgc.m"
                parse_tree__prog_ctgc__ConsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 202 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 202 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 202 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 202 "prog_ctgc.m"
                  {
#line 202 "prog_ctgc.m"
                    parse_tree__prog_ctgc__ArityTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 0)));
#line 202 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 1)));
#line 202 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 202 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 202 "prog_ctgc.m"
                      {
#line 202 "prog_ctgc.m"
                        parse_tree__prog_ctgc__PosTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 0)));
#line 202 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 1)));
#line 202 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "prog_ctgc.m"
                      }
#line 202 "prog_ctgc.m"
                  }
#line 202 "prog_ctgc.m"
              }
#line 201 "prog_ctgc.m"
          }
#line 229 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 211 "prog_ctgc.m"
          {
#line 211 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__ConsIdName_11;
#line 211 "prog_ctgc.m"
            MR_Integer parse_tree__prog_ctgc__Arity_12;
#line 211 "prog_ctgc.m"
            MR_Integer parse_tree__prog_ctgc__Pos_15;
#line 205 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_34_34;
#line 205 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_35_35;
#line 206 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 206 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;
#line 207 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_16_16;
#line 207 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_17_17;

#line 205 "prog_ctgc.m"
            {
#line 205 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_ctgc__TypeInfo_for_T_63, parse_tree__prog_ctgc__ConsTerm_8, &parse_tree__prog_ctgc__ConsIdName_11);
            }
#line 205 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 205 "prog_ctgc.m"
              {
#line 206 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ArityTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 206 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 206 "prog_ctgc.m"
                  {
#line 206 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 0)));
#line 206 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 1)));
#line 206 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 2)));
#line 206 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 206 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 206 "prog_ctgc.m"
                      {
#line 206 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_34_34, (MR_Integer) 0)));
#line 207 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__PosTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 207 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 207 "prog_ctgc.m"
                          {
#line 207 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 0)));
#line 207 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 1)));
#line 207 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 2)));
#line 207 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 207 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 207 "prog_ctgc.m"
                              parse_tree__prog_ctgc__Pos_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_35_35, (MR_Integer) 0)));
#line 207 "prog_ctgc.m"
                          }
#line 206 "prog_ctgc.m"
                      }
#line 206 "prog_ctgc.m"
                  }
#line 205 "prog_ctgc.m"
              }
#line 211 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 209 "prog_ctgc.m"
              {
#line 209 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__ConsId_18;
#line 209 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_36_36;

#line 209 "prog_ctgc.m"
                {
#line 209 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_36_36 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 209 "prog_ctgc.m"
                {
#line 209 "prog_ctgc.m"
                  parse_tree__prog_ctgc__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 209 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__ConsIdName_11));
#line 209 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 2) = ((MR_Box) (parse_tree__prog_ctgc__Arity_12));
#line 209 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
#line 209 "prog_ctgc.m"
                }
#line 210 "prog_ctgc.m"
                {
#line 210 "prog_ctgc.m"
                  parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_18));
#line 210 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__Pos_15));
#line 210 "prog_ctgc.m"
                }
#line 209 "prog_ctgc.m"
              }
#line 211 "prog_ctgc.m"
            else
#line 216 "prog_ctgc.m"
              {
#line 216 "prog_ctgc.m"
                MR_Integer parse_tree__prog_ctgc__Int_19;
#line 212 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_37_37;
#line 212 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_20_20;
#line 212 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_21_21;

#line 212 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 212 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 212 "prog_ctgc.m"
                  {
#line 212 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 212 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 212 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 212 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 212 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 212 "prog_ctgc.m"
                      parse_tree__prog_ctgc__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_37_37, (MR_Integer) 0)));
#line 212 "prog_ctgc.m"
                  }
#line 216 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 214 "prog_ctgc.m"
                  {
#line 214 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__ConsId_57;

#line 214 "prog_ctgc.m"
                    {
#line 214 "prog_ctgc.m"
                      parse_tree__prog_ctgc__ConsId_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 214 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_57, 1) = ((MR_Box) (parse_tree__prog_ctgc__Int_19));
#line 214 "prog_ctgc.m"
                    }
#line 215 "prog_ctgc.m"
                    {
#line 215 "prog_ctgc.m"
                      parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_57));
#line 215 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 215 "prog_ctgc.m"
                    }
#line 214 "prog_ctgc.m"
                  }
#line 216 "prog_ctgc.m"
                else
#line 221 "prog_ctgc.m"
                  {
#line 221 "prog_ctgc.m"
                    MR_Float parse_tree__prog_ctgc__Float_22;
#line 217 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_39_39;
#line 217 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_23_23;
#line 217 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_24_24;

#line 217 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 217 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 217 "prog_ctgc.m"
                      {
#line 217 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 217 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 217 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 217 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 217 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 217 "prog_ctgc.m"
                          parse_tree__prog_ctgc__Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 1)));
#line 217 "prog_ctgc.m"
                      }
#line 221 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 219 "prog_ctgc.m"
                      {
#line 219 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__ConsId_58;

#line 219 "prog_ctgc.m"
                        {
#line 219 "prog_ctgc.m"
                          parse_tree__prog_ctgc__ConsId_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 219 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 1) = MR_box_float(parse_tree__prog_ctgc__Float_22);
#line 219 "prog_ctgc.m"
                        }
#line 220 "prog_ctgc.m"
                        {
#line 220 "prog_ctgc.m"
                          parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_58));
#line 220 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 220 "prog_ctgc.m"
                        }
#line 219 "prog_ctgc.m"
                      }
#line 221 "prog_ctgc.m"
                    else
#line 226 "prog_ctgc.m"
                      {
#line 226 "prog_ctgc.m"
                        MR_String parse_tree__prog_ctgc__Str_25;
#line 222 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_41_41;
#line 222 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_26_26;
#line 222 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_27_27;

#line 222 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 222 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 222 "prog_ctgc.m"
                          {
#line 222 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 222 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 222 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 222 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 222 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 222 "prog_ctgc.m"
                              parse_tree__prog_ctgc__Str_25 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 1)));
#line 222 "prog_ctgc.m"
                          }
#line 226 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 224 "prog_ctgc.m"
                          {
#line 224 "prog_ctgc.m"
                            MR_Word parse_tree__prog_ctgc__ConsId_59;

#line 224 "prog_ctgc.m"
                            {
#line 224 "prog_ctgc.m"
                              parse_tree__prog_ctgc__ConsId_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 224 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 1) = ((MR_Box) (parse_tree__prog_ctgc__Str_25));
#line 224 "prog_ctgc.m"
                            }
#line 225 "prog_ctgc.m"
                            {
#line 225 "prog_ctgc.m"
                              parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_59));
#line 225 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 225 "prog_ctgc.m"
                            }
#line 224 "prog_ctgc.m"
                          }
#line 226 "prog_ctgc.m"
                        else
#line 227 "prog_ctgc.m"
                          {
#line 227 "prog_ctgc.m"
                            {
#line 227 "prog_ctgc.m"
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "unknown cons_id in unit selector");
                            }
#line 227 "prog_ctgc.m"
                          }
#line 226 "prog_ctgc.m"
                      }
#line 221 "prog_ctgc.m"
                  }
#line 216 "prog_ctgc.m"
              }
#line 211 "prog_ctgc.m"
          }
#line 229 "prog_ctgc.m"
        else
#line 238 "prog_ctgc.m"
          {
#line 238 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__TypeSelectorTerm_28;
#line 230 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_46_46;

#line 230 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "typesel") == 0);
#line 230 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 230 "prog_ctgc.m"
              {
#line 231 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 231 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 231 "prog_ctgc.m"
                  {
#line 231 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypeSelectorTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 231 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 231 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "prog_ctgc.m"
                  }
#line 230 "prog_ctgc.m"
              }
#line 238 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 235 "prog_ctgc.m"
              {
#line 235 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypeSelector_29;
#line 233 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_47_47;

#line 233 "prog_ctgc.m"
                {
#line 233 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_47_47 = mercury__term__coerce_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_63, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_ctgc__TypeSelectorTerm_28);
                }
#line 233 "prog_ctgc.m"
                {
#line 233 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_ctgc__V_47_47, &parse_tree__prog_ctgc__TypeSelector_29);
                }
#line 235 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 234 "prog_ctgc.m"
                  {
#line 234 "prog_ctgc.m"
                    parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 234 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__TypeSelector_29));
#line 234 "prog_ctgc.m"
                  }
#line 235 "prog_ctgc.m"
                else
#line 236 "prog_ctgc.m"
                  {
#line 236 "prog_ctgc.m"
                    {
#line 236 "prog_ctgc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "error in parsing type selector");
                    }
#line 236 "prog_ctgc.m"
                  }
#line 235 "prog_ctgc.m"
              }
#line 238 "prog_ctgc.m"
            else
#line 239 "prog_ctgc.m"
              {
#line 239 "prog_ctgc.m"
                {
#line 239 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "selector is neither sel/3 nor typesel/1.");
                }
#line 239 "prog_ctgc.m"
              }
#line 238 "prog_ctgc.m"
          }
#line 229 "prog_ctgc.m"
      }
#line 242 "prog_ctgc.m"
    else
#line 243 "prog_ctgc.m"
      {
#line 243 "prog_ctgc.m"
        {
#line 243 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "term not a functor");
        }
#line 243 "prog_ctgc.m"
      }
#line 242 "prog_ctgc.m"
    return parse_tree__prog_ctgc__UnitSelector_4;
#line 242 "prog_ctgc.m"
  }
#line 36 "prog_ctgc.m"
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
