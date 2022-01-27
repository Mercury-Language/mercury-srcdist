/*
** Automatically generated from `prog_ctgc.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 106 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 109 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 112 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 115 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 118 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 121 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 124 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 127 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 609 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__609__1_3_p_0(
#line 609 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41);

#line 639 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
#line 639 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 639 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 639 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseCond_8);

#line 519 "prog_ctgc.m"
static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
#line 519 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
#line 519 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2);

#line 496 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
#line 496 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Type_3,
#line 496 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2);

#line 493 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 493 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 493 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 493 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 475 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
#line 475 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3,
#line 475 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__SharingPair_4);

#line 461 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
#line 461 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
#line 461 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4);

#line 273 "prog_ctgc.m"
static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
#line 273 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
#line 273 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3);

#line 777 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 777 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 777 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 777 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 772 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
#line 772 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 772 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

#line 724 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 724 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 724 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 724 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 724 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 724 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 660 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 660 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 660 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0_1(
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 660 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 609 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0_1(
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 609 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 609 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 609 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 575 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
#line 575 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 575 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 575 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 575 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 546 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
#line 546 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 546 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 546 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 546 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 513 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
#line 513 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 513 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

#line 456 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
#line 456 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 456 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 456 "prog_ctgc.m"
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



#line 628 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 636 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 645 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 653 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 661 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 669 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 678 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 686 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 609 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__609__1_3_p_0(
#line 609 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41)
#line 609 "prog_ctgc.m"
{
#line 609 "prog_ctgc.m"
  {
#line 609 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 609 "prog_ctgc.m"
    {
#line 609 "prog_ctgc.m"
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__HeadVar__1_41)));
    }
#line 609 "prog_ctgc.m"
  }
#line 609 "prog_ctgc.m"
}

#line 639 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
#line 639 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 639 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 639 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseCond_8)
#line 639 "prog_ctgc.m"
{
#line 642 "prog_ctgc.m"
  {
#line 642 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 642 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 0)));
#line 642 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__InUseNodes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 1)));
#line 642 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sharing_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 2)));
#line 642 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodesList_13;

#line 644 "prog_ctgc.m"
    {
#line 644 "prog_ctgc.m"
      parse_tree__prog_ctgc__DeadNodesList_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodes_10);
    }
#line 645 "prog_ctgc.m"
    {
#line 645 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "condition(");
    }
#line 646 "prog_ctgc.m"
    {
#line 646 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__DeadNodesList_13);
    }
#line 647 "prog_ctgc.m"
    {
#line 647 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 648 "prog_ctgc.m"
    {
#line 648 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__InUseNodes_11);
    }
#line 649 "prog_ctgc.m"
    {
#line 649 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 650 "prog_ctgc.m"
    {
#line 650 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__Sharing_12);
    }
#line 652 "prog_ctgc.m"
    {
#line 652 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 642 "prog_ctgc.m"
  }
#line 639 "prog_ctgc.m"
}

#line 519 "prog_ctgc.m"
static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
#line 519 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
#line 519 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2)
#line 519 "prog_ctgc.m"
{
#line 521 "prog_ctgc.m"
  {
#line 521 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 521 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__HeadVar__3_3;

#line 521 "prog_ctgc.m"
    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 521 "prog_ctgc.m"
      {
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
#line 521 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__Index_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 1)));
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_7_7;
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_9_9;
#line 521 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_10_10;
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_14_14;
#line 521 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_15_15;
#line 521 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__V_16_16;
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_17_17;
#line 521 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_19_19;
#line 521 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_20_20;

#line 523 "prog_ctgc.m"
        {
#line 523 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_10_10 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 0, parse_tree__prog_ctgc__ConsId_5);
        }
#line 525 "prog_ctgc.m"
        {
#line 525 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_util__cons_id_arity_1_f_0(parse_tree__prog_ctgc__ConsId_5);
        }
#line 525 "prog_ctgc.m"
        {
#line 525 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_15_15 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__V_16_16);
        }
#line 527 "prog_ctgc.m"
        {
#line 527 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_20_20 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__Index_6);
        }
#line 527 "prog_ctgc.m"
        {
#line 527 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_20_20));
#line 527 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
#line 527 "prog_ctgc.m"
        }
#line 526 "prog_ctgc.m"
        {
#line 526 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) ((MR_String) ","));
#line 526 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_19_19));
#line 526 "prog_ctgc.m"
        }
#line 525 "prog_ctgc.m"
        {
#line 525 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 525 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
#line 525 "prog_ctgc.m"
        }
#line 524 "prog_ctgc.m"
        {
#line 524 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 0) = ((MR_Box) ((MR_String) ","));
#line 524 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 524 "prog_ctgc.m"
        }
#line 523 "prog_ctgc.m"
        {
#line 523 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
#line 523 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_12_12));
#line 523 "prog_ctgc.m"
        }
#line 522 "prog_ctgc.m"
        {
#line 522 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 0) = ((MR_Box) ((MR_String) "sel("));
#line 522 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_9_9));
#line 522 "prog_ctgc.m"
        }
#line 522 "prog_ctgc.m"
        {
#line 522 "prog_ctgc.m"
          parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_7_7);
        }
#line 521 "prog_ctgc.m"
      }
#line 521 "prog_ctgc.m"
    else
#line 530 "prog_ctgc.m"
      {
#line 530 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__TypeSel_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
#line 530 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_26_26;
#line 530 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_28_28;
#line 530 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_29_29;

#line 532 "prog_ctgc.m"
        {
#line 532 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_29_29 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_ctgc__TVarSet_1, (MR_Integer) 0, parse_tree__prog_ctgc__TypeSel_25);
        }
#line 532 "prog_ctgc.m"
        {
#line 532 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_29_29));
#line 532 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
#line 532 "prog_ctgc.m"
        }
#line 531 "prog_ctgc.m"
        {
#line 531 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 0) = ((MR_Box) ((MR_String) "typesel("));
#line 531 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_28_28));
#line 531 "prog_ctgc.m"
        }
#line 531 "prog_ctgc.m"
        {
#line 531 "prog_ctgc.m"
          parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_26_26);
        }
#line 530 "prog_ctgc.m"
      }
#line 521 "prog_ctgc.m"
    return parse_tree__prog_ctgc__HeadVar__3_3;
#line 521 "prog_ctgc.m"
  }
#line 519 "prog_ctgc.m"
}

#line 496 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
#line 496 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Type_3,
#line 496 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2)
#line 496 "prog_ctgc.m"
{
#line 498 "prog_ctgc.m"
  {
#line 498 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 498 "prog_ctgc.m"
    {
#line 498 "prog_ctgc.m"
      MR_Word base;
#line 498 "prog_ctgc.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__2_2 = base;
#line 498 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_3));
#line 498 "prog_ctgc.m"
    }
#line 498 "prog_ctgc.m"
  }
#line 496 "prog_ctgc.m"
}

#line 493 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 493 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 493 "prog_ctgc.m"
{
#line 493 "prog_ctgc.m"
  {
#line 493 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 493 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_HeadVar__2_2;

#line 493 "prog_ctgc.m"
    {
#line 493 "prog_ctgc.m"
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_HeadVar__2_2);
    }
#line 493 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_HeadVar__2_2));
#line 493 "prog_ctgc.m"
  }
#line 493 "prog_ctgc.m"
}

#line 493 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 493 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 493 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 493 "prog_ctgc.m"
{
#line 493 "prog_ctgc.m"
  {
#line 493 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 493 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__2_2;

#line 493 "prog_ctgc.m"
    {
#line 493 "prog_ctgc.m"
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__2_2);
    }
#line 493 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__2_2));
#line 493 "prog_ctgc.m"
  }
#line 493 "prog_ctgc.m"
}

#line 475 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
#line 475 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3,
#line 475 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__SharingPair_4)
#line 475 "prog_ctgc.m"
{
#line 478 "prog_ctgc.m"
  {
#line 478 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_20_32;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_33;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_24_36;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_37;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_20_55;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_56;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_24_59;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_60;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Left_5;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Right_6;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__LeftData_8;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RightData_9;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 478 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_11_11;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_17;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypesTerm_18;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__GenericVar_20;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ProgVar_22;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeTermsList_23;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Types_24;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_25;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_26_26;
#line 478 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_27_27;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_28_28;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_29_29;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_31_31;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_40;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypesTerm_41;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__GenericVar_43;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ProgVar_45;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeTermsList_46;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Types_47;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_48;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_49_49;
#line 478 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_50_50;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_51_51;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_52_52;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_53_53;
#line 478 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_54_54;
#line 479 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;
#line 488 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_19_19;
#line 489 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_21_21;
#line 488 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_42_42;
#line 489 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_44_44;

#line 479 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 479 "prog_ctgc.m"
      {
#line 479 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 479 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 479 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 479 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 479 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 479 "prog_ctgc.m"
          {
#line 479 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 479 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_11_11, (MR_String) "-") == 0);
#line 478 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
              {
#line 479 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 479 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 479 "prog_ctgc.m"
                  {
#line 479 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 479 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 479 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 479 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 479 "prog_ctgc.m"
                      {
#line 479 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
#line 479 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
#line 479 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                          {
#line 488 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Left_5)) == (MR_mktag((MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                              {
#line 488 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 2)));
#line 488 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                  {
#line 488 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_26_26, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_27_27, (MR_String) "cel") == 0);
#line 478 "prog_ctgc.m"
                                    if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                      {
#line 488 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                          {
#line 488 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__VarTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                            if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                              {
#line 488 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__TypesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "prog_ctgc.m"
                                                if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                  {
#line 489 "prog_ctgc.m"
                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_17)) == (MR_mktag((MR_Integer) 1)));
#line 489 "prog_ctgc.m"
                                                    if (parse_tree__prog_ctgc__succeeded)
#line 489 "prog_ctgc.m"
                                                      {
#line 489 "prog_ctgc.m"
                                                        parse_tree__prog_ctgc__GenericVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 0)));
#line 489 "prog_ctgc.m"
                                                        parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 1)));
#line 1283 "parse_tree.prog_ctgc.c"
                                                        parse_tree__prog_ctgc__TypeCtorInfo_20_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1285 "parse_tree.prog_ctgc.c"
                                                        parse_tree__prog_ctgc__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 490 "prog_ctgc.m"
                                                        {
#line 490 "prog_ctgc.m"
                                                          mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_20_32, parse_tree__prog_ctgc__TypeCtorInfo_21_33, parse_tree__prog_ctgc__GenericVar_20, &parse_tree__prog_ctgc__ProgVar_22);
                                                        }
#line 491 "prog_ctgc.m"
                                                        {
#line 491 "prog_ctgc.m"
                                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_18, &parse_tree__prog_ctgc__TypeTermsList_23);
                                                        }
#line 478 "prog_ctgc.m"
                                                        if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                          {
#line 492 "prog_ctgc.m"
                                                            {
#line 492 "prog_ctgc.m"
                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__TypeTermsList_23, &parse_tree__prog_ctgc__Types_24);
                                                            }
#line 478 "prog_ctgc.m"
                                                            if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                              {
#line 493 "prog_ctgc.m"
                                                                parse_tree__prog_ctgc__V_31_31 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[4];
#line 1312 "parse_tree.prog_ctgc.c"
                                                                parse_tree__prog_ctgc__TypeCtorInfo_24_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1314 "parse_tree.prog_ctgc.c"
                                                                parse_tree__prog_ctgc__TypeCtorInfo_25_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 493 "prog_ctgc.m"
                                                                {
#line 493 "prog_ctgc.m"
                                                                  mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_24_36, parse_tree__prog_ctgc__TypeCtorInfo_25_37, parse_tree__prog_ctgc__V_31_31, parse_tree__prog_ctgc__Types_24, &parse_tree__prog_ctgc__Selector_25);
                                                                }
#line 488 "prog_ctgc.m"
                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Right_6)) == (MR_mktag((MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                                if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                                                  {
#line 488 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 2)));
#line 488 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                                    if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                                                      {
#line 488 "prog_ctgc.m"
                                                                        parse_tree__prog_ctgc__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_49_49, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                                        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_50_50, (MR_String) "cel") == 0);
#line 478 "prog_ctgc.m"
                                                                        if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                                          {
#line 488 "prog_ctgc.m"
                                                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                                                            if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                                                              {
#line 488 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__VarTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_51_51, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_51_51, (MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                                                                if (parse_tree__prog_ctgc__succeeded)
#line 488 "prog_ctgc.m"
                                                                                  {
#line 488 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__TypesTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 0)));
#line 488 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 1)));
#line 488 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "prog_ctgc.m"
                                                                                    if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                                                      {
#line 489 "prog_ctgc.m"
                                                                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_40)) == (MR_mktag((MR_Integer) 1)));
#line 489 "prog_ctgc.m"
                                                                                        if (parse_tree__prog_ctgc__succeeded)
#line 489 "prog_ctgc.m"
                                                                                          {
#line 489 "prog_ctgc.m"
                                                                                            parse_tree__prog_ctgc__GenericVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_40, (MR_Integer) 0)));
#line 489 "prog_ctgc.m"
                                                                                            parse_tree__prog_ctgc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_40, (MR_Integer) 1)));
#line 1383 "parse_tree.prog_ctgc.c"
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_20_55 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1385 "parse_tree.prog_ctgc.c"
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_21_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 494 "prog_ctgc.m"
                                                                                            {
#line 494 "prog_ctgc.m"
                                                                                              parse_tree__prog_ctgc__LeftData_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_ctgc.m"
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_22));
#line 494 "prog_ctgc.m"
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_25));
#line 494 "prog_ctgc.m"
                                                                                            }
#line 490 "prog_ctgc.m"
                                                                                            {
#line 490 "prog_ctgc.m"
                                                                                              mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_20_55, parse_tree__prog_ctgc__TypeCtorInfo_21_56, parse_tree__prog_ctgc__GenericVar_43, &parse_tree__prog_ctgc__ProgVar_45);
                                                                                            }
#line 491 "prog_ctgc.m"
                                                                                            {
#line 491 "prog_ctgc.m"
                                                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_41, &parse_tree__prog_ctgc__TypeTermsList_46);
                                                                                            }
#line 478 "prog_ctgc.m"
                                                                                            if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                                                              {
#line 492 "prog_ctgc.m"
                                                                                                {
#line 492 "prog_ctgc.m"
                                                                                                  parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__TypeTermsList_46, &parse_tree__prog_ctgc__Types_47);
                                                                                                }
#line 478 "prog_ctgc.m"
                                                                                                if (parse_tree__prog_ctgc__succeeded)
#line 478 "prog_ctgc.m"
                                                                                                  {
#line 493 "prog_ctgc.m"
                                                                                                    parse_tree__prog_ctgc__V_54_54 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[5];
#line 1422 "parse_tree.prog_ctgc.c"
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_24_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1424 "parse_tree.prog_ctgc.c"
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_25_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 493 "prog_ctgc.m"
                                                                                                    {
#line 493 "prog_ctgc.m"
                                                                                                      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_24_59, parse_tree__prog_ctgc__TypeCtorInfo_25_60, parse_tree__prog_ctgc__V_54_54, parse_tree__prog_ctgc__Types_47, &parse_tree__prog_ctgc__Selector_48);
                                                                                                    }
#line 494 "prog_ctgc.m"
                                                                                                    {
#line 494 "prog_ctgc.m"
                                                                                                      parse_tree__prog_ctgc__RightData_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_45));
#line 494 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_48));
#line 494 "prog_ctgc.m"
                                                                                                    }
#line 482 "prog_ctgc.m"
                                                                                                    {
#line 482 "prog_ctgc.m"
                                                                                                      MR_Word base;
#line 482 "prog_ctgc.m"
                                                                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_ctgc.m"
                                                                                                      *parse_tree__prog_ctgc__SharingPair_4 = base;
#line 482 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__LeftData_8));
#line 482 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RightData_9));
#line 482 "prog_ctgc.m"
                                                                                                    }
#line 482 "prog_ctgc.m"
                                                                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 478 "prog_ctgc.m"
                                                                                                  }
#line 478 "prog_ctgc.m"
                                                                                              }
#line 489 "prog_ctgc.m"
                                                                                          }
#line 478 "prog_ctgc.m"
                                                                                      }
#line 488 "prog_ctgc.m"
                                                                                  }
#line 488 "prog_ctgc.m"
                                                                              }
#line 478 "prog_ctgc.m"
                                                                          }
#line 488 "prog_ctgc.m"
                                                                      }
#line 488 "prog_ctgc.m"
                                                                  }
#line 478 "prog_ctgc.m"
                                                              }
#line 478 "prog_ctgc.m"
                                                          }
#line 489 "prog_ctgc.m"
                                                      }
#line 478 "prog_ctgc.m"
                                                  }
#line 488 "prog_ctgc.m"
                                              }
#line 488 "prog_ctgc.m"
                                          }
#line 478 "prog_ctgc.m"
                                      }
#line 488 "prog_ctgc.m"
                                  }
#line 488 "prog_ctgc.m"
                              }
#line 478 "prog_ctgc.m"
                          }
#line 479 "prog_ctgc.m"
                      }
#line 479 "prog_ctgc.m"
                  }
#line 478 "prog_ctgc.m"
              }
#line 479 "prog_ctgc.m"
          }
#line 479 "prog_ctgc.m"
      }
#line 478 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 478 "prog_ctgc.m"
  }
#line 475 "prog_ctgc.m"
}

#line 461 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
#line 461 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
#line 461 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4)
#line 461 "prog_ctgc.m"
{
#line 463 "prog_ctgc.m"
  {
#line 463 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ListTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 463 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 463 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 463 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 464 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 464 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 464 "prog_ctgc.m"
      {
#line 464 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 0)));
#line 464 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 1)));
#line 464 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 2)));
#line 464 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 464 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 464 "prog_ctgc.m"
          {
#line 464 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 470 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
#line 472 "prog_ctgc.m"
              {
#line 472 "prog_ctgc.m"
                *parse_tree__prog_ctgc__ArgumentTerms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 472 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 472 "prog_ctgc.m"
              }
#line 470 "prog_ctgc.m"
            else
#line 470 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 466 "prog_ctgc.m"
              {
#line 466 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__FirstTerm_8;
#line 466 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__RestTerm_9;
#line 466 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__RestList_10;
#line 466 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_12_12;
#line 466 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;

#line 467 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 467 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 467 "prog_ctgc.m"
                  {
#line 467 "prog_ctgc.m"
                    parse_tree__prog_ctgc__FirstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 467 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 467 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 467 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 467 "prog_ctgc.m"
                      {
#line 467 "prog_ctgc.m"
                        parse_tree__prog_ctgc__RestTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 467 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 467 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 466 "prog_ctgc.m"
                          {
#line 468 "prog_ctgc.m"
                            {
#line 468 "prog_ctgc.m"
                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__RestTerm_9, &parse_tree__prog_ctgc__RestList_10);
                            }
#line 466 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 466 "prog_ctgc.m"
                              {
#line 469 "prog_ctgc.m"
                                {
#line 469 "prog_ctgc.m"
                                  MR_Word base;
#line 469 "prog_ctgc.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_ctgc.m"
                                  *parse_tree__prog_ctgc__ArgumentTerms_4 = base;
#line 469 "prog_ctgc.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__FirstTerm_8));
#line 469 "prog_ctgc.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RestList_10));
#line 469 "prog_ctgc.m"
                                }
#line 469 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 466 "prog_ctgc.m"
                              }
#line 466 "prog_ctgc.m"
                          }
#line 467 "prog_ctgc.m"
                      }
#line 467 "prog_ctgc.m"
                  }
#line 466 "prog_ctgc.m"
              }
#line 470 "prog_ctgc.m"
            else
#line 470 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 464 "prog_ctgc.m"
          }
#line 464 "prog_ctgc.m"
      }
#line 463 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 463 "prog_ctgc.m"
  }
#line 461 "prog_ctgc.m"
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
#line 276 "prog_ctgc.m"
  {
#line 276 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 276 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Datastructs_4;
#line 276 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 276 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 276 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 276 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 276 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 276 "prog_ctgc.m"
      {
#line 276 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 276 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 276 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 276 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 276 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 276 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 276 "prog_ctgc.m"
      }
#line 276 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 277 "prog_ctgc.m"
      {
#line 277 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__FirstDataTerm_8;
#line 277 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__RestDataTerm_9;
#line 278 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 278 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 278 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 278 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 278 "prog_ctgc.m"
          {
#line 279 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 279 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 279 "prog_ctgc.m"
              {
#line 279 "prog_ctgc.m"
                parse_tree__prog_ctgc__FirstDataTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 279 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 279 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 279 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 279 "prog_ctgc.m"
                  {
#line 279 "prog_ctgc.m"
                    parse_tree__prog_ctgc__RestDataTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 279 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 279 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_ctgc.m"
                  }
#line 279 "prog_ctgc.m"
              }
#line 278 "prog_ctgc.m"
          }
#line 277 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 281 "prog_ctgc.m"
          {
#line 281 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 281 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 281 "prog_ctgc.m"
            {
#line 281 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstDataTerm_8);
            }
#line 282 "prog_ctgc.m"
            {
#line 282 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestDataTerm_9);
            }
#line 281 "prog_ctgc.m"
            {
#line 281 "prog_ctgc.m"
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 281 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 281 "prog_ctgc.m"
            }
#line 281 "prog_ctgc.m"
          }
#line 277 "prog_ctgc.m"
        else
#line 283 "prog_ctgc.m"
          {
#line 284 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
#line 283 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 286 "prog_ctgc.m"
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "prog_ctgc.m"
            else
#line 288 "prog_ctgc.m"
              {
#line 288 "prog_ctgc.m"
                {
#line 288 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs");
                }
#line 288 "prog_ctgc.m"
              }
#line 283 "prog_ctgc.m"
          }
#line 277 "prog_ctgc.m"
      }
#line 276 "prog_ctgc.m"
    else
#line 292 "prog_ctgc.m"
      {
#line 292 "prog_ctgc.m"
        {
#line 292 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs (term not a functor)");
        }
#line 292 "prog_ctgc.m"
      }
#line 276 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Datastructs_4;
#line 276 "prog_ctgc.m"
  }
#line 273 "prog_ctgc.m"
}

#line 777 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 777 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 777 "prog_ctgc.m"
{
#line 777 "prog_ctgc.m"
  {
#line 777 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 777 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

#line 777 "prog_ctgc.m"
    {
#line 777 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
#line 777 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
#line 777 "prog_ctgc.m"
  }
#line 777 "prog_ctgc.m"
}

#line 164 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(
#line 164 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_1,
#line 164 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_2,
#line 164 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
#line 164 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
#line 164 "prog_ctgc.m"
{
#line 780 "prog_ctgc.m"
  {
#line 780 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 780 "prog_ctgc.m"
#line 780 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) {
#line 780 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 780 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 780 "prog_ctgc.m"
#line 780 "prog_ctgc.m"
        switch (MR_unmkbody(parse_tree__prog_ctgc__HeadVar__3_3)) {
#line 780 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 780 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 780 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "prog_ctgc.m"
            break;
#line 780 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 782 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 780 "prog_ctgc.m"
            break;
#line 780 "prog_ctgc.m"
        }
#line 780 "prog_ctgc.m"
        break;
#line 780 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 784 "prog_ctgc.m"
        {
#line 784 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_20;
#line 784 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Conds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 784 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__RenConds_12;
#line 784 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_17_17;

#line 777 "prog_ctgc.m"
          {
#line 777 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
#line 777 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1));
#line 777 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
#line 777 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
#line 777 "prog_ctgc.m"
          }
#line 1923 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeCtorInfo_12_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
#line 777 "prog_ctgc.m"
          {
#line 777 "prog_ctgc.m"
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__V_17_17, parse_tree__prog_ctgc__Conds_11, &parse_tree__prog_ctgc__RenConds_12);
          }
#line 784 "prog_ctgc.m"
          {
#line 784 "prog_ctgc.m"
            MR_Word base;
#line 784 "prog_ctgc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 784 "prog_ctgc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenConds_12));
#line 784 "prog_ctgc.m"
          }
#line 784 "prog_ctgc.m"
        }
#line 780 "prog_ctgc.m"
        break;
#line 780 "prog_ctgc.m"
    }
#line 780 "prog_ctgc.m"
  }
#line 164 "prog_ctgc.m"
}

#line 777 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 777 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 777 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 777 "prog_ctgc.m"
{
#line 777 "prog_ctgc.m"
  {
#line 777 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 777 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

#line 777 "prog_ctgc.m"
    {
#line 777 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
#line 777 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
#line 777 "prog_ctgc.m"
  }
#line 777 "prog_ctgc.m"
}

#line 160 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0(
#line 160 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 160 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 160 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Conds_7,
#line 160 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__RenConds_8)
#line 160 "prog_ctgc.m"
{
#line 776 "prog_ctgc.m"
  {
#line 776 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 776 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
#line 776 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;

#line 777 "prog_ctgc.m"
    {
#line 777 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
#line 777 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1));
#line 777 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 777 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 777 "prog_ctgc.m"
    }
#line 2021 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
#line 777 "prog_ctgc.m"
    {
#line 777 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_9_9, parse_tree__prog_ctgc__Conds_7, parse_tree__prog_ctgc__RenConds_8);
    }
#line 776 "prog_ctgc.m"
  }
#line 160 "prog_ctgc.m"
}

#line 772 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
#line 772 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 772 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
#line 772 "prog_ctgc.m"
{
#line 772 "prog_ctgc.m"
  {
#line 772 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
#line 772 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 772 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_Data_8;

#line 772 "prog_ctgc.m"
    {
#line 772 "prog_ctgc.m"
      parse_tree__prog_ctgc__conv0_Data_8 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 772 "prog_ctgc.m"
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_Data_8));
#line 772 "prog_ctgc.m"
    return parse_tree__prog_ctgc__wrapper_arg_2;
#line 772 "prog_ctgc.m"
  }
#line 772 "prog_ctgc.m"
}

#line 156 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(
#line 156 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 156 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 156 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
#line 156 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
#line 156 "prog_ctgc.m"
{
#line 771 "prog_ctgc.m"
  {
#line 771 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__LiveNodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 1)));
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sharing_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 2)));
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenDeadNodes_10;
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenLiveNodes_11;
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenSharing_12;
#line 771 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;

#line 772 "prog_ctgc.m"
    {
#line 772 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 772 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[1]));
#line 772 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1));
#line 772 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 772 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 772 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 772 "prog_ctgc.m"
    }
#line 772 "prog_ctgc.m"
    {
#line 772 "prog_ctgc.m"
      parse_tree__prog_ctgc__RenDeadNodes_10 = mercury__set__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__DeadNodes_7);
    }
#line 773 "prog_ctgc.m"
    {
#line 773 "prog_ctgc.m"
      parse_tree__prog_ctgc__RenLiveNodes_11 = mercury__list__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__LiveNodes_8);
    }
#line 774 "prog_ctgc.m"
    {
#line 774 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(parse_tree__prog_ctgc__Dict_5, parse_tree__prog_ctgc__TypeSubst_6, parse_tree__prog_ctgc__Sharing_9, &parse_tree__prog_ctgc__RenSharing_12);
    }
#line 771 "prog_ctgc.m"
    {
#line 771 "prog_ctgc.m"
      MR_Word base;
#line 771 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 771 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 771 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenDeadNodes_10));
#line 771 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RenLiveNodes_11));
#line 771 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_ctgc__RenSharing_12));
#line 771 "prog_ctgc.m"
    }
#line 771 "prog_ctgc.m"
  }
#line 156 "prog_ctgc.m"
}

#line 724 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 724 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 724 "prog_ctgc.m"
{
#line 724 "prog_ctgc.m"
  {
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 724 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 724 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 724 "prog_ctgc.m"
  }
#line 724 "prog_ctgc.m"
}

#line 152 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(
#line 152 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVars_6,
#line 152 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__NewHeadVars_7,
#line 152 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__NewTypes_8,
#line 152 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20,
#line 152 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21)
#line 152 "prog_ctgc.m"
{
#line 737 "prog_ctgc.m"
  {
#line 737 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 737 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20;
#line 737 "prog_ctgc.m"
    else
#line 739 "prog_ctgc.m"
      {
#line 739 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__MaybeTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 1)));
#line 739 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 0)));
#line 739 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24;

#line 744 "prog_ctgc.m"
#line 744 "prog_ctgc.m"
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22)) {
#line 744 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 744 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 743 "prog_ctgc.m"
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
#line 744 "prog_ctgc.m"
            break;
#line 744 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 747 "prog_ctgc.m"
            {
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeInfo_14_39;
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__SharingPairs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22, (MR_Integer) 0)));
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__VarRenaming_15;
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeSubst_18;
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__NewSharingPairs_19;
#line 747 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_35_35;
#line 750 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__UserSharingTypes_16;
#line 751 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_23_23;
#line 751 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc___UserSharingTVarSet_17;

#line 748 "prog_ctgc.m"
              {
#line 748 "prog_ctgc.m"
                mercury__map__from_corresponding_lists_3_p_0(parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__HeadVars_6, parse_tree__prog_ctgc__NewHeadVars_7, &parse_tree__prog_ctgc__VarRenaming_15);
              }
#line 751 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__MaybeTypes_11)) == (MR_mktag((MR_Integer) 1)));
#line 751 "prog_ctgc.m"
              if (parse_tree__prog_ctgc__succeeded)
#line 751 "prog_ctgc.m"
                {
#line 751 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeTypes_11, (MR_Integer) 0)));
#line 751 "prog_ctgc.m"
                  parse_tree__prog_ctgc__UserSharingTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 0)));
#line 751 "prog_ctgc.m"
                  parse_tree__prog_ctgc___UserSharingTVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 1)));
#line 751 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 751 "prog_ctgc.m"
                }
#line 750 "prog_ctgc.m"
              if (parse_tree__prog_ctgc__succeeded)
#line 754 "prog_ctgc.m"
                {
#line 754 "prog_ctgc.m"
                  parse_tree__prog_type__type_list_subsumes_det_3_p_0(parse_tree__prog_ctgc__UserSharingTypes_16, parse_tree__prog_ctgc__NewTypes_8, &parse_tree__prog_ctgc__TypeSubst_18);
                }
#line 750 "prog_ctgc.m"
              else
#line 757 "prog_ctgc.m"
                {
#line 757 "prog_ctgc.m"
                  {
#line 757 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypeSubst_18 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  }
#line 757 "prog_ctgc.m"
                }
#line 724 "prog_ctgc.m"
              {
#line 724 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 724 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1));
#line 724 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 724 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 3) = ((MR_Box) (parse_tree__prog_ctgc__VarRenaming_15));
#line 724 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_18));
#line 724 "prog_ctgc.m"
              }
#line 2307 "parse_tree.prog_ctgc.c"
              parse_tree__prog_ctgc__TypeInfo_14_39 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 724 "prog_ctgc.m"
              {
#line 724 "prog_ctgc.m"
                mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__V_35_35, parse_tree__prog_ctgc__SharingPairs_14, &parse_tree__prog_ctgc__NewSharingPairs_19);
              }
#line 761 "prog_ctgc.m"
              {
#line 761 "prog_ctgc.m"
                parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_ctgc.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24, 0) = ((MR_Box) (parse_tree__prog_ctgc__NewSharingPairs_19));
#line 761 "prog_ctgc.m"
              }
#line 747 "prog_ctgc.m"
            }
#line 744 "prog_ctgc.m"
            break;
#line 744 "prog_ctgc.m"
          case (MR_Integer) 2:
#line 745 "prog_ctgc.m"
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
#line 744 "prog_ctgc.m"
            break;
#line 744 "prog_ctgc.m"
        }
#line 763 "prog_ctgc.m"
        {
#line 763 "prog_ctgc.m"
          MR_Word base;
#line 763 "prog_ctgc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "prog_ctgc.m"
          *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = base;
#line 763 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24));
#line 763 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "prog_ctgc.m"
        }
#line 739 "prog_ctgc.m"
      }
#line 737 "prog_ctgc.m"
  }
#line 152 "prog_ctgc.m"
}

#line 724 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 724 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 724 "prog_ctgc.m"
{
#line 724 "prog_ctgc.m"
  {
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 724 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 724 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 724 "prog_ctgc.m"
  }
#line 724 "prog_ctgc.m"
}

#line 148 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(
#line 148 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_1,
#line 148 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_2,
#line 148 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3,
#line 148 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__4_4)
#line 148 "prog_ctgc.m"
{
#line 726 "prog_ctgc.m"
  {
#line 726 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 726 "prog_ctgc.m"
#line 726 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) {
#line 726 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 726 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 726 "prog_ctgc.m"
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
#line 726 "prog_ctgc.m"
        break;
#line 726 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 729 "prog_ctgc.m"
        {
#line 729 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeInfo_14_27;
#line 729 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 729 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_16;
#line 729 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_23_23;

#line 724 "prog_ctgc.m"
          {
#line 724 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 724 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1));
#line 724 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 724 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
#line 724 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
#line 724 "prog_ctgc.m"
          }
#line 2443 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeInfo_14_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 724 "prog_ctgc.m"
          {
#line 724 "prog_ctgc.m"
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__V_23_23, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15, &parse_tree__prog_ctgc__STATE_VARIABLE_List_16);
          }
#line 729 "prog_ctgc.m"
          {
#line 729 "prog_ctgc.m"
            MR_Word base;
#line 729 "prog_ctgc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 729 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 729 "prog_ctgc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_List_16));
#line 729 "prog_ctgc.m"
          }
#line 729 "prog_ctgc.m"
        }
#line 726 "prog_ctgc.m"
        break;
#line 726 "prog_ctgc.m"
      case (MR_Integer) 2:
#line 727 "prog_ctgc.m"
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
#line 726 "prog_ctgc.m"
        break;
#line 726 "prog_ctgc.m"
    }
#line 726 "prog_ctgc.m"
  }
#line 148 "prog_ctgc.m"
}

#line 724 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 724 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 724 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 724 "prog_ctgc.m"
{
#line 724 "prog_ctgc.m"
  {
#line 724 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 724 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 724 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 724 "prog_ctgc.m"
  }
#line 724 "prog_ctgc.m"
}

#line 145 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0(
#line 145 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 145 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 145 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8,
#line 145 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_List_9)
#line 145 "prog_ctgc.m"
{
#line 723 "prog_ctgc.m"
  {
#line 723 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_14_14;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;

#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 724 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1));
#line 724 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 724 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 724 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 724 "prog_ctgc.m"
    }
#line 2547 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_14_14 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 724 "prog_ctgc.m"
    {
#line 724 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__V_10_10, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8, parse_tree__prog_ctgc__STATE_VARIABLE_List_9);
    }
#line 723 "prog_ctgc.m"
  }
#line 145 "prog_ctgc.m"
}

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 708 "prog_ctgc.m"
{
#line 708 "prog_ctgc.m"
  {
#line 708 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 708 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 708 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 708 "prog_ctgc.m"
  }
#line 708 "prog_ctgc.m"
}

#line 141 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(
#line 141 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 141 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_6,
#line 141 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12,
#line 141 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13)
#line 141 "prog_ctgc.m"
{
#line 718 "prog_ctgc.m"
  {
#line 718 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_25 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_34;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_45;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_54;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 0)));
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 1)));
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Da_10;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Db_11;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 0)));
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 1)));
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_22;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_23;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_40;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_41;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_42;
#line 718 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_43;
#line 712 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_22;
#line 712 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv2_Var_42;

#line 712 "prog_ctgc.m"
    {
#line 712 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_20)), &parse_tree__prog_ctgc__conv0_Var_22);
    }
#line 712 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_22 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_22);
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 708 "prog_ctgc.m"
    }
#line 2666 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_21, &parse_tree__prog_ctgc__Sel_23);
    }
#line 714 "prog_ctgc.m"
    {
#line 714 "prog_ctgc.m"
      parse_tree__prog_ctgc__Da_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_22));
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_23));
#line 714 "prog_ctgc.m"
    }
#line 711 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 0)));
#line 711 "prog_ctgc.m"
    parse_tree__prog_ctgc__Sel0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 1)));
#line 2687 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_15_45 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 712 "prog_ctgc.m"
    {
#line 712 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_40)), &parse_tree__prog_ctgc__conv2_Var_42);
    }
#line 712 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_42 = ((MR_Word) parse_tree__prog_ctgc__conv2_Var_42);
#line 2696 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_41, &parse_tree__prog_ctgc__Sel_43);
    }
#line 714 "prog_ctgc.m"
    {
#line 714 "prog_ctgc.m"
      parse_tree__prog_ctgc__Db_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_42));
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_43));
#line 714 "prog_ctgc.m"
    }
#line 722 "prog_ctgc.m"
    {
#line 722 "prog_ctgc.m"
      MR_Word base;
#line 722 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13 = base;
#line 722 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Da_10));
#line 722 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Db_11));
#line 722 "prog_ctgc.m"
    }
#line 718 "prog_ctgc.m"
  }
#line 141 "prog_ctgc.m"
}

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 708 "prog_ctgc.m"
{
#line 708 "prog_ctgc.m"
  {
#line 708 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 708 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 708 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 708 "prog_ctgc.m"
  }
#line 708 "prog_ctgc.m"
}

#line 138 "prog_ctgc.m"
MR_Word MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0(
#line 138 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 138 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Subst_6,
#line 138 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Data0_7)
#line 138 "prog_ctgc.m"
{
#line 710 "prog_ctgc.m"
  {
#line 710 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Data_8;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_19 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_28;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 0)));
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 1)));
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_16;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_17;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_24_24;
#line 712 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_16;

#line 712 "prog_ctgc.m"
    {
#line 712 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_14)), &parse_tree__prog_ctgc__conv0_Var_16);
    }
#line 712 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_16 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_16);
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_3_f_0_1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
#line 708 "prog_ctgc.m"
    }
#line 2817 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__V_24_24, parse_tree__prog_ctgc__Sel0_15, &parse_tree__prog_ctgc__Sel_17);
    }
#line 714 "prog_ctgc.m"
    {
#line 714 "prog_ctgc.m"
      parse_tree__prog_ctgc__Data_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_16));
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_17));
#line 714 "prog_ctgc.m"
    }
#line 710 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Data_8;
#line 710 "prog_ctgc.m"
  }
#line 138 "prog_ctgc.m"
}

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 708 "prog_ctgc.m"
{
#line 708 "prog_ctgc.m"
  {
#line 708 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 708 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 708 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 708 "prog_ctgc.m"
  }
#line 708 "prog_ctgc.m"
}

#line 135 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0(
#line 135 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Dict_5,
#line 135 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Subst_6,
#line 135 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12,
#line 135 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Data_13)
#line 135 "prog_ctgc.m"
{
#line 710 "prog_ctgc.m"
  {
#line 710 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_24;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 0)));
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 1)));
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_10;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_11;
#line 710 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_20_20;
#line 712 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_10;

#line 712 "prog_ctgc.m"
    {
#line 712 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_8)), &parse_tree__prog_ctgc__conv0_Var_10);
    }
#line 712 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_10 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_10);
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_4_p_0_1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
#line 708 "prog_ctgc.m"
    }
#line 2926 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__V_20_20, parse_tree__prog_ctgc__Sel0_9, &parse_tree__prog_ctgc__Sel_11);
    }
#line 714 "prog_ctgc.m"
    {
#line 714 "prog_ctgc.m"
      MR_Word base;
#line 714 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_Data_13 = base;
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_10));
#line 714 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_11));
#line 714 "prog_ctgc.m"
    }
#line 710 "prog_ctgc.m"
  }
#line 135 "prog_ctgc.m"
}

#line 708 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 708 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 708 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 708 "prog_ctgc.m"
{
#line 708 "prog_ctgc.m"
  {
#line 708 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 708 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11;

#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11);
    }
#line 708 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11));
#line 708 "prog_ctgc.m"
  }
#line 708 "prog_ctgc.m"
}

#line 133 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0(
#line 133 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeSubst_4,
#line 133 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6,
#line 133 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7)
#line 133 "prog_ctgc.m"
{
#line 707 "prog_ctgc.m"
  {
#line 707 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 707 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
#line 707 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_8_8;

#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_selector_3_p_0_1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_4));
#line 708 "prog_ctgc.m"
    }
#line 3016 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 708 "prog_ctgc.m"
    {
#line 708 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_8_8, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7);
    }
#line 707 "prog_ctgc.m"
  }
#line 133 "prog_ctgc.m"
}

#line 130 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__rename_unit_selector_3_p_0(
#line 130 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Subst_4,
#line 130 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10,
#line 130 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11)
#line 130 "prog_ctgc.m"
{
#line 700 "prog_ctgc.m"
  {
#line 700 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 700 "prog_ctgc.m"
    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10)) == (MR_mktag((MR_Integer) 0))))
#line 700 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10;
#line 700 "prog_ctgc.m"
    else
#line 702 "prog_ctgc.m"
      {
#line 702 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Type0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10, (MR_Integer) 0)));
#line 702 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Type_9;

#line 703 "prog_ctgc.m"
        {
#line 703 "prog_ctgc.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_ctgc__Subst_4, parse_tree__prog_ctgc__Type0_8, &parse_tree__prog_ctgc__Type_9);
        }
#line 704 "prog_ctgc.m"
        {
#line 704 "prog_ctgc.m"
          MR_Word base;
#line 704 "prog_ctgc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_ctgc.m"
          *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = base;
#line 704 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_9));
#line 704 "prog_ctgc.m"
        }
#line 702 "prog_ctgc.m"
      }
#line 700 "prog_ctgc.m"
  }
#line 130 "prog_ctgc.m"
}

#line 660 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 660 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 660 "prog_ctgc.m"
{
#line 660 "prog_ctgc.m"
  {
#line 660 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 660 "prog_ctgc.m"
    {
#line 660 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 660 "prog_ctgc.m"
  }
#line 660 "prog_ctgc.m"
}

#line 122 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0(
#line 122 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
#line 122 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
#line 122 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
#line 122 "prog_ctgc.m"
{
#line 684 "prog_ctgc.m"
  {
#line 684 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 684 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "prog_ctgc.m"
      {
#line 685 "prog_ctgc.m"
        {
#line 685 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "not_available");
        }
#line 684 "prog_ctgc.m"
      }
#line 684 "prog_ctgc.m"
    else
#line 687 "prog_ctgc.m"
      {
#line 687 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 688 "prog_ctgc.m"
        {
#line 688 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
#line 668 "prog_ctgc.m"
        {
#line 668 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 672 "prog_ctgc.m"
#line 672 "prog_ctgc.m"
        switch (MR_tag((MR_Word) parse_tree__prog_ctgc__ReuseDomain_15)) {
#line 672 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 672 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 672 "prog_ctgc.m"
#line 672 "prog_ctgc.m"
            switch (MR_unmkbody(parse_tree__prog_ctgc__ReuseDomain_15)) {
#line 672 "prog_ctgc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 672 "prog_ctgc.m"
              case (MR_Integer) 0:
#line 670 "prog_ctgc.m"
                {
#line 671 "prog_ctgc.m"
                  {
#line 671 "prog_ctgc.m"
                    mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
                  }
#line 670 "prog_ctgc.m"
                }
#line 672 "prog_ctgc.m"
                break;
#line 672 "prog_ctgc.m"
              case (MR_Integer) 1:
#line 673 "prog_ctgc.m"
                {
#line 674 "prog_ctgc.m"
                  {
#line 674 "prog_ctgc.m"
                    mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
                  }
#line 673 "prog_ctgc.m"
                }
#line 672 "prog_ctgc.m"
                break;
#line 672 "prog_ctgc.m"
            }
#line 672 "prog_ctgc.m"
            break;
#line 672 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 676 "prog_ctgc.m"
            {
#line 676 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__ReuseConditions_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_15, (MR_Integer) 0)));
#line 676 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_55_55;

#line 677 "prog_ctgc.m"
              {
#line 677 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
              }
#line 660 "prog_ctgc.m"
              {
#line 660 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
#line 660 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1));
#line 660 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 660 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_1));
#line 660 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_2));
#line 660 "prog_ctgc.m"
              }
#line 659 "prog_ctgc.m"
              {
#line 659 "prog_ctgc.m"
                mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_36, (MR_String) ", ", parse_tree__prog_ctgc__V_55_55);
              }
#line 680 "prog_ctgc.m"
              {
#line 680 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 676 "prog_ctgc.m"
            }
#line 672 "prog_ctgc.m"
            break;
#line 672 "prog_ctgc.m"
        }
#line 682 "prog_ctgc.m"
        {
#line 682 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 691 "prog_ctgc.m"
        {
#line 691 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 687 "prog_ctgc.m"
      }
#line 684 "prog_ctgc.m"
  }
#line 122 "prog_ctgc.m"
}

#line 119 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_p_0(
#line 119 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_1,
#line 119 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_2,
#line 119 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__3_3)
#line 119 "prog_ctgc.m"
{
#line 626 "prog_ctgc.m"
  {
#line 626 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 626 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "prog_ctgc.m"
      {
#line 627 "prog_ctgc.m"
        {
#line 627 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "not_available");
        }
#line 626 "prog_ctgc.m"
      }
#line 626 "prog_ctgc.m"
    else
#line 629 "prog_ctgc.m"
      {
#line 629 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 630 "prog_ctgc.m"
        {
#line 630 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
#line 631 "prog_ctgc.m"
        {
#line 631 "prog_ctgc.m"
          parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_1, parse_tree__prog_ctgc__TypeVarSet_2, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__SharingAs_15);
        }
#line 633 "prog_ctgc.m"
        {
#line 633 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 629 "prog_ctgc.m"
      }
#line 626 "prog_ctgc.m"
  }
#line 119 "prog_ctgc.m"
}

#line 660 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0_1(
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 660 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 660 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 660 "prog_ctgc.m"
{
#line 660 "prog_ctgc.m"
  {
#line 660 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 660 "prog_ctgc.m"
    {
#line 660 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 660 "prog_ctgc.m"
  }
#line 660 "prog_ctgc.m"
}

#line 116 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0(
#line 116 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 116 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 116 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseAs_8)
#line 116 "prog_ctgc.m"
{
#line 635 "prog_ctgc.m"
  {
#line 635 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 668 "prog_ctgc.m"
    {
#line 668 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "%\t ");
    }
#line 672 "prog_ctgc.m"
#line 672 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__ReuseAs_8)) {
#line 672 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 672 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 672 "prog_ctgc.m"
#line 672 "prog_ctgc.m"
        switch (MR_unmkbody(parse_tree__prog_ctgc__ReuseAs_8)) {
#line 672 "prog_ctgc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 672 "prog_ctgc.m"
          case (MR_Integer) 0:
#line 670 "prog_ctgc.m"
            {
#line 671 "prog_ctgc.m"
              {
#line 671 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
              }
#line 670 "prog_ctgc.m"
            }
#line 672 "prog_ctgc.m"
            break;
#line 672 "prog_ctgc.m"
          case (MR_Integer) 1:
#line 673 "prog_ctgc.m"
            {
#line 674 "prog_ctgc.m"
              {
#line 674 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
              }
#line 673 "prog_ctgc.m"
            }
#line 672 "prog_ctgc.m"
            break;
#line 672 "prog_ctgc.m"
        }
#line 672 "prog_ctgc.m"
        break;
#line 672 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 676 "prog_ctgc.m"
        {
#line 676 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__ReuseConditions_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseAs_8, (MR_Integer) 0)));
#line 676 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_44_44;

#line 677 "prog_ctgc.m"
          {
#line 677 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
          }
#line 660 "prog_ctgc.m"
          {
#line 660 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
#line 660 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0_1));
#line 660 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 660 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_6));
#line 660 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_44_44, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_7));
#line 660 "prog_ctgc.m"
          }
#line 659 "prog_ctgc.m"
          {
#line 659 "prog_ctgc.m"
            mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_25, (MR_String) ", \n%\t ", parse_tree__prog_ctgc__V_44_44);
          }
#line 680 "prog_ctgc.m"
          {
#line 680 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "])");
          }
#line 676 "prog_ctgc.m"
        }
#line 672 "prog_ctgc.m"
        break;
#line 672 "prog_ctgc.m"
    }
#line 682 "prog_ctgc.m"
    {
#line 682 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 635 "prog_ctgc.m"
  }
#line 116 "prog_ctgc.m"
}

#line 609 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0_1(
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 609 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 609 "prog_ctgc.m"
{
#line 609 "prog_ctgc.m"
  {
#line 609 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 609 "prog_ctgc.m"
    {
#line 609 "prog_ctgc.m"
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__609__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 609 "prog_ctgc.m"
  }
#line 609 "prog_ctgc.m"
}

#line 114 "prog_ctgc.m"
void MR_CALL 
parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0(
#line 114 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 114 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 114 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__SharingAs_8)
#line 114 "prog_ctgc.m"
{
#line 622 "prog_ctgc.m"
  {
#line 622 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 600 "prog_ctgc.m"
    {
#line 600 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "%\t ");
    }
#line 612 "prog_ctgc.m"
#line 612 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_8)) {
#line 612 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 613 "prog_ctgc.m"
        {
#line 614 "prog_ctgc.m"
          {
#line 614 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "bottom");
          }
#line 613 "prog_ctgc.m"
        }
#line 612 "prog_ctgc.m"
        break;
#line 612 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 616 "prog_ctgc.m"
        {
#line 616 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__SharingPairs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_8, (MR_Integer) 0)));

#line 617 "prog_ctgc.m"
          {
#line 617 "prog_ctgc.m"
            parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) "\n%\t", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_30);
          }
#line 616 "prog_ctgc.m"
        }
#line 612 "prog_ctgc.m"
        break;
#line 612 "prog_ctgc.m"
      case (MR_Integer) 2:
#line 602 "prog_ctgc.m"
        {
#line 602 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_47;
#line 602 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Msgs_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_8, (MR_Integer) 0)));
#line 602 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_39_39;

#line 608 "prog_ctgc.m"
          {
#line 608 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "top([");
          }
#line 3560 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeCtorInfo_40_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
#line 609 "prog_ctgc.m"
          {
#line 609 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_39_39 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_47, parse_tree__prog_ctgc__Msgs_29);
          }
#line 609 "prog_ctgc.m"
          {
#line 609 "prog_ctgc.m"
            mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_47, parse_tree__prog_ctgc__V_39_39, (MR_String) "\n%\t", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[3]);
          }
#line 610 "prog_ctgc.m"
          {
#line 610 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "])");
          }
#line 602 "prog_ctgc.m"
        }
#line 612 "prog_ctgc.m"
        break;
#line 612 "prog_ctgc.m"
    }
#line 620 "prog_ctgc.m"
    {
#line 620 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 622 "prog_ctgc.m"
  }
#line 114 "prog_ctgc.m"
}

#line 609 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 609 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 609 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 609 "prog_ctgc.m"
{
#line 609 "prog_ctgc.m"
  {
#line 609 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 609 "prog_ctgc.m"
    {
#line 609 "prog_ctgc.m"
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__609__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 609 "prog_ctgc.m"
  }
#line 609 "prog_ctgc.m"
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
#line 590 "prog_ctgc.m"
  {
#line 590 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 600 "prog_ctgc.m"
    {
#line 600 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "");
    }
#line 612 "prog_ctgc.m"
#line 612 "prog_ctgc.m"
    switch (MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_12)) {
#line 612 "prog_ctgc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "prog_ctgc.m"
      case (MR_Integer) 0:
#line 613 "prog_ctgc.m"
        {
#line 614 "prog_ctgc.m"
          {
#line 614 "prog_ctgc.m"
            mercury__io__write_string_3_p_0((MR_String) "bottom");
          }
#line 613 "prog_ctgc.m"
        }
#line 612 "prog_ctgc.m"
        break;
#line 612 "prog_ctgc.m"
      case (MR_Integer) 1:
#line 616 "prog_ctgc.m"
        {
#line 616 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__SharingPairs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

#line 617 "prog_ctgc.m"
          {
#line 617 "prog_ctgc.m"
            parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_8, parse_tree__prog_ctgc__TypeVarSet_9, parse_tree__prog_ctgc__MaybeThreshold_11, (MR_String) "[", (MR_String) ", ", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_32);
          }
#line 616 "prog_ctgc.m"
        }
#line 612 "prog_ctgc.m"
        break;
#line 612 "prog_ctgc.m"
      case (MR_Integer) 2:
#line 602 "prog_ctgc.m"
        {
#line 602 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Msgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

#line 606 "prog_ctgc.m"
#line 606 "prog_ctgc.m"
          switch (parse_tree__prog_ctgc__VerboseTop_10) {
#line 606 "prog_ctgc.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 606 "prog_ctgc.m"
            case (MR_Integer) 0:
#line 604 "prog_ctgc.m"
              {
#line 605 "prog_ctgc.m"
                {
#line 605 "prog_ctgc.m"
                  mercury__io__write_string_3_p_0((MR_String) "top");
                }
#line 604 "prog_ctgc.m"
              }
#line 606 "prog_ctgc.m"
              break;
#line 606 "prog_ctgc.m"
            case (MR_Integer) 1:
#line 607 "prog_ctgc.m"
              {
#line 607 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_49;
#line 607 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_41_41;

#line 608 "prog_ctgc.m"
                {
#line 608 "prog_ctgc.m"
                  mercury__io__write_string_3_p_0((MR_String) "top([");
                }
#line 3719 "parse_tree.prog_ctgc.c"
                parse_tree__prog_ctgc__TypeCtorInfo_40_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
#line 609 "prog_ctgc.m"
                {
#line 609 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_41_41 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__Msgs_31);
                }
#line 609 "prog_ctgc.m"
                {
#line 609 "prog_ctgc.m"
                  mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__V_41_41, (MR_String) ", ", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[2]);
                }
#line 610 "prog_ctgc.m"
                {
#line 610 "prog_ctgc.m"
                  mercury__io__write_string_3_p_0((MR_String) "])");
                }
#line 607 "prog_ctgc.m"
              }
#line 606 "prog_ctgc.m"
              break;
#line 606 "prog_ctgc.m"
          }
#line 602 "prog_ctgc.m"
        }
#line 612 "prog_ctgc.m"
        break;
#line 612 "prog_ctgc.m"
    }
#line 620 "prog_ctgc.m"
    {
#line 620 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "");
    }
#line 590 "prog_ctgc.m"
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
#line 585 "prog_ctgc.m"
  {
#line 585 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 586 "prog_ctgc.m"
    {
#line 586 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) ",", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_8);
    }
#line 585 "prog_ctgc.m"
  }
#line 91 "prog_ctgc.m"
}

#line 575 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
#line 575 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 575 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 575 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 575 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 575 "prog_ctgc.m"
{
#line 575 "prog_ctgc.m"
  {
#line 575 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 575 "prog_ctgc.m"
    {
#line 575 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_pair_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 575 "prog_ctgc.m"
  }
#line 575 "prog_ctgc.m"
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
#line 559 "prog_ctgc.m"
  {
#line 559 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 559 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_35_35;
#line 559 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_25_25;

#line 573 "prog_ctgc.m"
    {
#line 573 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Start_13);
    }
#line 575 "prog_ctgc.m"
    {
#line 575 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[1]));
#line 575 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1));
#line 575 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 575 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_10));
#line 575 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_11));
#line 575 "prog_ctgc.m"
    }
#line 3861 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_35_35 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 3863 "parse_tree.prog_ctgc.c"
    if ((parse_tree__prog_ctgc__MaybeLimit_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "prog_ctgc.m"
      {
#line 574 "prog_ctgc.m"
        mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs0_16, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
      }
#line 3870 "parse_tree.prog_ctgc.c"
    else
#line 3872 "parse_tree.prog_ctgc.c"
      {
#line 3874 "parse_tree.prog_ctgc.c"
        MR_Word parse_tree__prog_ctgc__TypeInfo_31_31 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 3876 "parse_tree.prog_ctgc.c"
        MR_Integer parse_tree__prog_ctgc__Limit_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeLimit_12, (MR_Integer) 0)));
#line 3878 "parse_tree.prog_ctgc.c"
        MR_Word parse_tree__prog_ctgc__SharingPairs_36;
#line 563 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__V_23_23;

#line 562 "prog_ctgc.m"
        {
#line 562 "prog_ctgc.m"
          mercury__list__take_upto_3_p_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__Limit_18, parse_tree__prog_ctgc__SharingPairs0_16, &parse_tree__prog_ctgc__SharingPairs_36);
        }
#line 574 "prog_ctgc.m"
        {
#line 574 "prog_ctgc.m"
          mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs_36, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
        }
#line 563 "prog_ctgc.m"
        {
#line 563 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_23_23 = mercury__list__length_1_f_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__SharingPairs0_16);
        }
#line 563 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__Limit_18 >= parse_tree__prog_ctgc__V_23_23);
#line 3900 "parse_tree.prog_ctgc.c"
        if (parse_tree__prog_ctgc__succeeded)
#line 581 "prog_ctgc.m"
          {
#line 581 "prog_ctgc.m"
          }
#line 3906 "parse_tree.prog_ctgc.c"
        else
#line 3908 "parse_tree.prog_ctgc.c"
          {
#line 578 "prog_ctgc.m"
            {
#line 578 "prog_ctgc.m"
              mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Sep_14);
            }
#line 579 "prog_ctgc.m"
            {
#line 579 "prog_ctgc.m"
              mercury__io__write_string_3_p_0((MR_String) "...");
            }
#line 3920 "parse_tree.prog_ctgc.c"
          }
#line 3922 "parse_tree.prog_ctgc.c"
      }
#line 583 "prog_ctgc.m"
    {
#line 583 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__End_15);
    }
#line 559 "prog_ctgc.m"
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
#line 550 "prog_ctgc.m"
  {
#line 550 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 550 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 0)));
#line 550 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 1)));

#line 552 "prog_ctgc.m"
    {
#line 552 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "pair(");
    }
#line 553 "prog_ctgc.m"
    {
#line 553 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D1_10);
    }
#line 554 "prog_ctgc.m"
    {
#line 554 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 555 "prog_ctgc.m"
    {
#line 555 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D2_11);
    }
#line 556 "prog_ctgc.m"
    {
#line 556 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 550 "prog_ctgc.m"
  }
#line 70 "prog_ctgc.m"
}

#line 546 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
#line 546 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 546 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 546 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 546 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 546 "prog_ctgc.m"
{
#line 546 "prog_ctgc.m"
  {
#line 546 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 546 "prog_ctgc.m"
  }
#line 546 "prog_ctgc.m"
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
#line 544 "prog_ctgc.m"
  {
#line 544 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 544 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_15_15;

#line 545 "prog_ctgc.m"
    {
#line 545 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_datastructs_5_p_0_1));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_6));
#line 546 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_7));
#line 546 "prog_ctgc.m"
    }
#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__Datastructs_8, (MR_String) ", ", parse_tree__prog_ctgc__V_15_15);
    }
#line 548 "prog_ctgc.m"
    {
#line 548 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
#line 544 "prog_ctgc.m"
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
#line 538 "prog_ctgc.m"
  {
#line 538 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 538 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__VarName_10;
#line 538 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
#line 538 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 538 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_17_17;
#line 538 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_21_21;
#line 539 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
#line 541 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_26_26;

#line 539 "prog_ctgc.m"
    {
#line 539 "prog_ctgc.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__V_13_13, &parse_tree__prog_ctgc__VarName_10);
    }
#line 540 "prog_ctgc.m"
    {
#line 540 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (parse_tree__prog_ctgc__VarName_10));
#line 540 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[6])));
#line 540 "prog_ctgc.m"
    }
#line 540 "prog_ctgc.m"
    {
#line 540 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) ((MR_String) "cel("));
#line 540 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
#line 540 "prog_ctgc.m"
    }
#line 540 "prog_ctgc.m"
    {
#line 540 "prog_ctgc.m"
      mercury__io__write_strings_3_p_0(parse_tree__prog_ctgc__V_14_14);
    }
#line 541 "prog_ctgc.m"
    parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
#line 541 "prog_ctgc.m"
    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
#line 541 "prog_ctgc.m"
    {
#line 541 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_selector_4_p_0(parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__V_21_21);
    }
#line 542 "prog_ctgc.m"
    {
#line 542 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 538 "prog_ctgc.m"
  }
#line 64 "prog_ctgc.m"
}

#line 513 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
#line 513 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 513 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
#line 513 "prog_ctgc.m"
{
#line 513 "prog_ctgc.m"
  {
#line 513 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
#line 513 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 513 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__conv0_HeadVar__3_3;

#line 513 "prog_ctgc.m"
    {
#line 513 "prog_ctgc.m"
      parse_tree__prog_ctgc__conv0_HeadVar__3_3 = parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 513 "prog_ctgc.m"
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__3_3));
#line 513 "prog_ctgc.m"
    return parse_tree__prog_ctgc__wrapper_arg_2;
#line 513 "prog_ctgc.m"
  }
#line 513 "prog_ctgc.m"
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
#line 535 "prog_ctgc.m"
  {
#line 535 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 535 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_10_10;

#line 509 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__Selector_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_10_10 = (MR_String) "[]";
#line 509 "prog_ctgc.m"
    else
#line 512 "prog_ctgc.m"
      {
#line 512 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SelectorStrings_17;
#line 512 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_18_18;
#line 512 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_19_19;
#line 512 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_21_21;
#line 512 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_22_22;

#line 513 "prog_ctgc.m"
        {
#line 513 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0]));
#line 513 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_selector_4_p_0_1));
#line 513 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 513 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__TVarSet_5));
#line 513 "prog_ctgc.m"
        }
#line 513 "prog_ctgc.m"
        {
#line 513 "prog_ctgc.m"
          parse_tree__prog_ctgc__SelectorStrings_17 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_ctgc__V_18_18, parse_tree__prog_ctgc__Selector_6);
        }
#line 515 "prog_ctgc.m"
        {
#line 515 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_22_22 = mercury__string__join_list_2_f_0((MR_String) ",", parse_tree__prog_ctgc__SelectorStrings_17);
        }
#line 515 "prog_ctgc.m"
        {
#line 515 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_22_22));
#line 515 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[5])));
#line 515 "prog_ctgc.m"
        }
#line 515 "prog_ctgc.m"
        {
#line 515 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) ((MR_String) "["));
#line 515 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_21_21));
#line 515 "prog_ctgc.m"
        }
#line 515 "prog_ctgc.m"
        {
#line 515 "prog_ctgc.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_ctgc__V_19_19, &parse_tree__prog_ctgc__V_10_10);
        }
#line 512 "prog_ctgc.m"
      }
#line 536 "prog_ctgc.m"
    {
#line 536 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__V_10_10);
    }
#line 535 "prog_ctgc.m"
  }
#line 62 "prog_ctgc.m"
}

#line 456 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
#line 456 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 456 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 456 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 456 "prog_ctgc.m"
{
#line 456 "prog_ctgc.m"
  {
#line 456 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 456 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 456 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_SharingPair_4;

#line 456 "prog_ctgc.m"
    {
#line 456 "prog_ctgc.m"
      parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_SharingPair_4);
    }
#line 456 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 456 "prog_ctgc.m"
      {
#line 456 "prog_ctgc.m"
        *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_SharingPair_4));
#line 456 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 456 "prog_ctgc.m"
      }
#line 456 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 456 "prog_ctgc.m"
  }
#line 456 "prog_ctgc.m"
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
#line 419 "prog_ctgc.m"
  {
#line 419 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 419 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_62_62;
#line 419 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_63_63;
#line 419 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_64_64;
#line 419 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_70_70;

#line 419 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 419 "prog_ctgc.m"
      {
#line 419 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 0)));
#line 419 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 1)));
#line 419 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 2)));
#line 419 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 419 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 419 "prog_ctgc.m"
          {
#line 419 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_64_64, (MR_Integer) 0)));
#line 419 "prog_ctgc.m"
            if ((parse_tree__prog_ctgc__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "no_sharing") == 0))
#line 419 "prog_ctgc.m"
                {
#line 420 "prog_ctgc.m"
                  *parse_tree__prog_ctgc__UserSharing_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[4]);
#line 419 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 419 "prog_ctgc.m"
                }
#line 419 "prog_ctgc.m"
              else
#line 419 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "unknown_sharing") == 0))
#line 422 "prog_ctgc.m"
                {
#line 422 "prog_ctgc.m"
                  MR_String parse_tree__prog_ctgc__ContextString_9;
#line 422 "prog_ctgc.m"
                  MR_String parse_tree__prog_ctgc__Msg_10;
#line 422 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__Reason_11;
#line 422 "prog_ctgc.m"
                  MR_String parse_tree__prog_ctgc__V_41_41;
#line 422 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_43_43;
#line 422 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_44_44;

#line 423 "prog_ctgc.m"
                  {
#line 423 "prog_ctgc.m"
                    parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_ctgc__V_62_62, &parse_tree__prog_ctgc__ContextString_9);
                  }
#line 424 "prog_ctgc.m"
                  {
#line 424 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_41_41 = mercury__string__f_43_43_2_f_0(parse_tree__prog_ctgc__ContextString_9, (MR_String) ")");
                  }
#line 424 "prog_ctgc.m"
                  {
#line 424 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Msg_10 = mercury__string__f_43_43_2_f_0((MR_String) "user declared top(", parse_tree__prog_ctgc__V_41_41);
                  }
#line 425 "prog_ctgc.m"
                  {
#line 425 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Reason_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__Reason_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Msg_10));
#line 425 "prog_ctgc.m"
                  }
#line 427 "prog_ctgc.m"
                  {
#line 427 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_44_44 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__Reason_11)));
                  }
#line 426 "prog_ctgc.m"
                  {
#line 426 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__V_43_43, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_44_44));
#line 426 "prog_ctgc.m"
                  }
#line 426 "prog_ctgc.m"
                  {
#line 426 "prog_ctgc.m"
                    MR_Word base;
#line 426 "prog_ctgc.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_ctgc.m"
                    *parse_tree__prog_ctgc__UserSharing_6 = base;
#line 426 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_43_43));
#line 426 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "prog_ctgc.m"
                  }
#line 422 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 422 "prog_ctgc.m"
                }
#line 419 "prog_ctgc.m"
              else
#line 419 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 419 "prog_ctgc.m"
            else
#line 430 "prog_ctgc.m"
              {
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypesTerm_12;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__UserSharingTerm_13;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__MaybeUserTypes_19;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__Sharing_22;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_27_27;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_28_28;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_66_66;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_67_67;
#line 430 "prog_ctgc.m"
                MR_String parse_tree__prog_ctgc__V_69_69;
#line 430 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__SharingPairTerms_73;
#line 432 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_65_65;

#line 429 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "sharing") == 0);
#line 430 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 430 "prog_ctgc.m"
                  {
#line 430 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypesTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_63_63, (MR_Integer) 0)));
#line 430 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_63_63, (MR_Integer) 1)));
#line 430 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 430 "prog_ctgc.m"
                      {
#line 430 "prog_ctgc.m"
                        parse_tree__prog_ctgc__UserSharingTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 0)));
#line 430 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 1)));
#line 430 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 430 "prog_ctgc.m"
                          {
#line 432 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__TypesTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 432 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 432 "prog_ctgc.m"
                              {
#line 432 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 0)));
#line 432 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 1)));
#line 432 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 2)));
#line 432 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_67_67)) == (MR_mktag((MR_Integer) 0)));
#line 432 "prog_ctgc.m"
                                if (parse_tree__prog_ctgc__succeeded)
#line 432 "prog_ctgc.m"
                                  {
#line 432 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_67_67, (MR_Integer) 0)));
#line 438 "prog_ctgc.m"
                                    if ((strcmp(parse_tree__prog_ctgc__V_69_69, (MR_String) "no") == 0))
#line 440 "prog_ctgc.m"
                                      {
#line 440 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 440 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 440 "prog_ctgc.m"
                                      }
#line 438 "prog_ctgc.m"
                                    else
#line 438 "prog_ctgc.m"
                                    if ((strcmp(parse_tree__prog_ctgc__V_69_69, (MR_String) "yes") == 0))
#line 432 "prog_ctgc.m"
                                      {
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeCtorInfo_59_59;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeInfo_60_60;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeCtorInfo_61_61;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__Types_17;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__TypeVars_18;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__V_33_33;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__V_35_35;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__V_36_36;
#line 432 "prog_ctgc.m"
                                        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53;

#line 433 "prog_ctgc.m"
                                        {
#line 433 "prog_ctgc.m"
                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__V_66_66, &parse_tree__prog_ctgc__Types_17);
                                        }
#line 432 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 432 "prog_ctgc.m"
                                          {
#line 4563 "parse_tree.prog_ctgc.c"
                                            parse_tree__prog_ctgc__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 434 "prog_ctgc.m"
                                            {
#line 434 "prog_ctgc.m"
                                              mercury__term__vars_list_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__V_66_66, &parse_tree__prog_ctgc__TypeVars_18);
                                            }
#line 4570 "parse_tree.prog_ctgc.c"
                                            parse_tree__prog_ctgc__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[0];
#line 435 "prog_ctgc.m"
                                            {
#line 435 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__V_33_33 = mercury__set__list_to_set_1_f_0(parse_tree__prog_ctgc__TypeInfo_60_60, parse_tree__prog_ctgc__TypeVars_18);
                                            }
#line 435 "prog_ctgc.m"
                                            {
#line 435 "prog_ctgc.m"
                                              mercury__varset__select_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__V_33_33, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_0_23, &parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53);
                                            }
#line 4582 "parse_tree.prog_ctgc.c"
                                            parse_tree__prog_ctgc__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 437 "prog_ctgc.m"
                                            {
#line 437 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__V_36_36 = mercury__varset__coerce_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__TypeCtorInfo_61_61, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53);
                                            }
#line 436 "prog_ctgc.m"
                                            {
#line 436 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_ctgc.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (parse_tree__prog_ctgc__Types_17));
#line 436 "prog_ctgc.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
#line 436 "prog_ctgc.m"
                                            }
#line 436 "prog_ctgc.m"
                                            {
#line 436 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_ctgc.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeUserTypes_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_35_35));
#line 436 "prog_ctgc.m"
                                            }
#line 436 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 432 "prog_ctgc.m"
                                          }
#line 432 "prog_ctgc.m"
                                      }
#line 438 "prog_ctgc.m"
                                    else
#line 438 "prog_ctgc.m"
                                      parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 430 "prog_ctgc.m"
                                    if (parse_tree__prog_ctgc__succeeded)
#line 430 "prog_ctgc.m"
                                      {
#line 450 "prog_ctgc.m"
                                        {
#line 450 "prog_ctgc.m"
                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__UserSharingTerm_13, &parse_tree__prog_ctgc__SharingPairTerms_73);
                                        }
#line 430 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 430 "prog_ctgc.m"
                                          {
#line 454 "prog_ctgc.m"
                                            if ((parse_tree__prog_ctgc__SharingPairTerms_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "prog_ctgc.m"
                                              {
#line 453 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 453 "prog_ctgc.m"
                                              }
#line 454 "prog_ctgc.m"
                                            else
#line 455 "prog_ctgc.m"
                                              {
#line 455 "prog_ctgc.m"
                                                MR_Word parse_tree__prog_ctgc__SharingPairs_76;

#line 456 "prog_ctgc.m"
                                                {
#line 456 "prog_ctgc.m"
                                                  parse_tree__prog_ctgc__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[3], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[1], parse_tree__prog_ctgc__SharingPairTerms_73, &parse_tree__prog_ctgc__SharingPairs_76);
                                                }
#line 455 "prog_ctgc.m"
                                                if (parse_tree__prog_ctgc__succeeded)
#line 455 "prog_ctgc.m"
                                                  {
#line 458 "prog_ctgc.m"
                                                    {
#line 458 "prog_ctgc.m"
                                                      parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 458 "prog_ctgc.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Sharing_22, 0) = ((MR_Box) (parse_tree__prog_ctgc__SharingPairs_76));
#line 458 "prog_ctgc.m"
                                                    }
#line 458 "prog_ctgc.m"
                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 455 "prog_ctgc.m"
                                                  }
#line 455 "prog_ctgc.m"
                                              }
#line 430 "prog_ctgc.m"
                                            if (parse_tree__prog_ctgc__succeeded)
#line 430 "prog_ctgc.m"
                                              {
#line 443 "prog_ctgc.m"
                                                {
#line 443 "prog_ctgc.m"
                                                  MR_Word base;
#line 443 "prog_ctgc.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_ctgc.m"
                                                  *parse_tree__prog_ctgc__UserSharing_6 = base;
#line 443 "prog_ctgc.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_22));
#line 443 "prog_ctgc.m"
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__MaybeUserTypes_19));
#line 443 "prog_ctgc.m"
                                                }
#line 443 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 430 "prog_ctgc.m"
                                              }
#line 430 "prog_ctgc.m"
                                          }
#line 430 "prog_ctgc.m"
                                      }
#line 432 "prog_ctgc.m"
                                  }
#line 432 "prog_ctgc.m"
                              }
#line 430 "prog_ctgc.m"
                          }
#line 430 "prog_ctgc.m"
                      }
#line 430 "prog_ctgc.m"
                  }
#line 430 "prog_ctgc.m"
              }
#line 419 "prog_ctgc.m"
          }
#line 419 "prog_ctgc.m"
      }
#line 419 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 419 "prog_ctgc.m"
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
#line 390 "prog_ctgc.m"
  {
#line 390 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 390 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseDomain_4;
#line 390 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 390 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 391 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;
#line 391 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 391 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 391 "prog_ctgc.m"
      {
#line 391 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 391 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 391 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 391 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 391 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 391 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
#line 391 "prog_ctgc.m"
      }
#line 390 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 393 "prog_ctgc.m"
      {
#line 394 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_no_reuse") == 0);
#line 393 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 396 "prog_ctgc.m"
          parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 393 "prog_ctgc.m"
        else
#line 397 "prog_ctgc.m"
          {
#line 398 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_only_unconditional_reuse") == 0);
#line 397 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 400 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 397 "prog_ctgc.m"
            else
#line 401 "prog_ctgc.m"
              {
#line 401 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__ReuseConditionsTerm_8;
#line 402 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_10_10;

#line 402 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_conditional_reuse") == 0);
#line 402 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 402 "prog_ctgc.m"
                  {
#line 403 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 403 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 403 "prog_ctgc.m"
                      {
#line 403 "prog_ctgc.m"
                        parse_tree__prog_ctgc__ReuseConditionsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 403 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 403 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "prog_ctgc.m"
                      }
#line 402 "prog_ctgc.m"
                  }
#line 401 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 405 "prog_ctgc.m"
                  {
#line 405 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_11_11;

#line 406 "prog_ctgc.m"
                    {
#line 406 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_11_11 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__ReuseConditionsTerm_8);
                    }
#line 405 "prog_ctgc.m"
                    {
#line 405 "prog_ctgc.m"
                      parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_11_11));
#line 405 "prog_ctgc.m"
                    }
#line 405 "prog_ctgc.m"
                  }
#line 401 "prog_ctgc.m"
                else
#line 408 "prog_ctgc.m"
                  {
#line 408 "prog_ctgc.m"
                    {
#line 408 "prog_ctgc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain");
                    }
#line 408 "prog_ctgc.m"
                  }
#line 401 "prog_ctgc.m"
              }
#line 397 "prog_ctgc.m"
          }
#line 393 "prog_ctgc.m"
      }
#line 390 "prog_ctgc.m"
    else
#line 411 "prog_ctgc.m"
      {
#line 411 "prog_ctgc.m"
        {
#line 411 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain (term not a functor)");
        }
#line 411 "prog_ctgc.m"
      }
#line 390 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseDomain_4;
#line 390 "prog_ctgc.m"
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
#line 370 "prog_ctgc.m"
  {
#line 370 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 370 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseConditions_4;
#line 370 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 370 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 370 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 370 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 370 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 370 "prog_ctgc.m"
      {
#line 370 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 370 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 370 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 370 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 370 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 370 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 370 "prog_ctgc.m"
      }
#line 370 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 371 "prog_ctgc.m"
      {
#line 371 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__FirstTupleTerm_8;
#line 371 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__RestTuplesTerm_9;
#line 372 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 372 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 372 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 372 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 372 "prog_ctgc.m"
          {
#line 373 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 373 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 373 "prog_ctgc.m"
              {
#line 373 "prog_ctgc.m"
                parse_tree__prog_ctgc__FirstTupleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 373 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 373 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 373 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 373 "prog_ctgc.m"
                  {
#line 373 "prog_ctgc.m"
                    parse_tree__prog_ctgc__RestTuplesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 373 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 373 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "prog_ctgc.m"
                  }
#line 373 "prog_ctgc.m"
              }
#line 372 "prog_ctgc.m"
          }
#line 371 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 375 "prog_ctgc.m"
          {
#line 375 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 375 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 375 "prog_ctgc.m"
            {
#line 375 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstTupleTerm_8);
            }
#line 376 "prog_ctgc.m"
            {
#line 376 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestTuplesTerm_9);
            }
#line 375 "prog_ctgc.m"
            {
#line 375 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 375 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 375 "prog_ctgc.m"
            }
#line 375 "prog_ctgc.m"
          }
#line 371 "prog_ctgc.m"
        else
#line 377 "prog_ctgc.m"
          {
#line 378 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
#line 377 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 380 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "prog_ctgc.m"
            else
#line 382 "prog_ctgc.m"
              {
#line 382 "prog_ctgc.m"
                {
#line 382 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions");
                }
#line 382 "prog_ctgc.m"
              }
#line 377 "prog_ctgc.m"
          }
#line 371 "prog_ctgc.m"
      }
#line 370 "prog_ctgc.m"
    else
#line 385 "prog_ctgc.m"
      {
#line 385 "prog_ctgc.m"
        {
#line 385 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions (term not a functor)");
        }
#line 385 "prog_ctgc.m"
      }
#line 370 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseConditions_4;
#line 370 "prog_ctgc.m"
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
#line 350 "prog_ctgc.m"
  {
#line 350 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseCondition_4;
#line 350 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 350 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 350 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_15_15;
#line 350 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 350 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 350 "prog_ctgc.m"
      {
#line 350 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 350 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 350 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 350 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 350 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, (MR_Integer) 0)));
#line 350 "prog_ctgc.m"
      }
#line 350 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 351 "prog_ctgc.m"
      {
#line 351 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__DeadNodesTerm_8;
#line 351 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__InUseNodesTerm_9;
#line 351 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingTerm_10;
#line 352 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_16_16;
#line 352 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_17_17;
#line 352 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_18_18;

#line 352 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "condition") == 0);
#line 352 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 352 "prog_ctgc.m"
          {
#line 353 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 353 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 353 "prog_ctgc.m"
              {
#line 353 "prog_ctgc.m"
                parse_tree__prog_ctgc__DeadNodesTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 353 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 353 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 353 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 353 "prog_ctgc.m"
                  {
#line 353 "prog_ctgc.m"
                    parse_tree__prog_ctgc__InUseNodesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 0)));
#line 353 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 1)));
#line 353 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 353 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 353 "prog_ctgc.m"
                      {
#line 353 "prog_ctgc.m"
                        parse_tree__prog_ctgc__SharingTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 0)));
#line 353 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 1)));
#line 353 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_ctgc.m"
                      }
#line 353 "prog_ctgc.m"
                  }
#line 353 "prog_ctgc.m"
              }
#line 352 "prog_ctgc.m"
          }
#line 351 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 355 "prog_ctgc.m"
          {
#line 355 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__DeadNodesList_11;
#line 355 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__DeadNodes_12;
#line 355 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__InUseNodes_13;
#line 355 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__Sharing_14;

#line 355 "prog_ctgc.m"
            {
#line 355 "prog_ctgc.m"
              parse_tree__prog_ctgc__DeadNodesList_11 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__DeadNodesTerm_8);
            }
#line 356 "prog_ctgc.m"
            {
#line 356 "prog_ctgc.m"
              parse_tree__prog_ctgc__DeadNodes_12 = mercury__set__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodesList_11);
            }
#line 357 "prog_ctgc.m"
            {
#line 357 "prog_ctgc.m"
              parse_tree__prog_ctgc__InUseNodes_13 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__InUseNodesTerm_9);
            }
#line 358 "prog_ctgc.m"
            {
#line 358 "prog_ctgc.m"
              parse_tree__prog_ctgc__Sharing_14 = parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__SharingTerm_10);
            }
#line 359 "prog_ctgc.m"
            {
#line 359 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseCondition_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 359 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__DeadNodes_12));
#line 359 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__InUseNodes_13));
#line 359 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 2) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_14));
#line 359 "prog_ctgc.m"
            }
#line 355 "prog_ctgc.m"
          }
#line 351 "prog_ctgc.m"
        else
#line 362 "prog_ctgc.m"
          {
#line 362 "prog_ctgc.m"
            {
#line 362 "prog_ctgc.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition");
            }
#line 362 "prog_ctgc.m"
          }
#line 351 "prog_ctgc.m"
      }
#line 350 "prog_ctgc.m"
    else
#line 365 "prog_ctgc.m"
      {
#line 365 "prog_ctgc.m"
        {
#line 365 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition (term not a functor)");
        }
#line 365 "prog_ctgc.m"
      }
#line 350 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseCondition_4;
#line 350 "prog_ctgc.m"
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
#line 328 "prog_ctgc.m"
  {
#line 328 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 328 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingAs_4;
#line 328 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingAs0_8;
#line 329 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 329 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;
#line 329 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_6_6;
#line 329 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc___Context_7;

#line 329 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 329 "prog_ctgc.m"
      {
#line 329 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 329 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 329 "prog_ctgc.m"
        parse_tree__prog_ctgc___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 329 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 329 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 329 "prog_ctgc.m"
          {
#line 329 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
#line 333 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 331 "prog_ctgc.m"
              {
#line 331 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;

#line 332 "prog_ctgc.m"
                {
#line 332 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_17, parse_tree__prog_ctgc__Term_3);
                }
#line 332 "prog_ctgc.m"
                {
#line 332 "prog_ctgc.m"
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 332 "prog_ctgc.m"
                }
#line 331 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 331 "prog_ctgc.m"
              }
#line 333 "prog_ctgc.m"
            else
#line 333 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "top") == 0))
#line 337 "prog_ctgc.m"
              {
#line 337 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_10_10;

#line 339 "prog_ctgc.m"
                {
#line 339 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_10_10 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_ctgc_scalar_common_3[0]))));
                }
#line 338 "prog_ctgc.m"
                {
#line 338 "prog_ctgc.m"
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
#line 338 "prog_ctgc.m"
                }
#line 337 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 337 "prog_ctgc.m"
              }
#line 333 "prog_ctgc.m"
            else
#line 333 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "bottom") == 0))
#line 335 "prog_ctgc.m"
              {
#line 335 "prog_ctgc.m"
                parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 335 "prog_ctgc.m"
              }
#line 333 "prog_ctgc.m"
            else
#line 333 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 329 "prog_ctgc.m"
          }
#line 329 "prog_ctgc.m"
      }
#line 328 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 343 "prog_ctgc.m"
      parse_tree__prog_ctgc__SharingAs_4 = parse_tree__prog_ctgc__SharingAs0_8;
#line 328 "prog_ctgc.m"
    else
#line 345 "prog_ctgc.m"
      {
#line 345 "prog_ctgc.m"
        {
#line 345 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_domain\'/1", (MR_String) "error while parsing structure sharing domain");
        }
#line 345 "prog_ctgc.m"
      }
#line 328 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingAs_4;
#line 328 "prog_ctgc.m"
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
#line 309 "prog_ctgc.m"
  {
#line 309 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 309 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPairs_4;
#line 309 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPairs0_10;
#line 310 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 310 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 310 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 310 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 310 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 310 "prog_ctgc.m"
      {
#line 310 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 310 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 310 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 310 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 310 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 310 "prog_ctgc.m"
          {
#line 310 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 316 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
#line 318 "prog_ctgc.m"
              {
#line 318 "prog_ctgc.m"
                parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 318 "prog_ctgc.m"
              }
#line 316 "prog_ctgc.m"
            else
#line 316 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 312 "prog_ctgc.m"
              {
#line 312 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__SharingPairTerm_8;
#line 312 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__Rest_9;
#line 312 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_12_12;
#line 312 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;
#line 312 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_14_14;
#line 312 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_15_15;

#line 313 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 313 "prog_ctgc.m"
                  {
#line 313 "prog_ctgc.m"
                    parse_tree__prog_ctgc__SharingPairTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 313 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 313 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 313 "prog_ctgc.m"
                      {
#line 313 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 313 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 313 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 312 "prog_ctgc.m"
                          {
#line 314 "prog_ctgc.m"
                            {
#line 314 "prog_ctgc.m"
                              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__SharingPairTerm_8);
                            }
#line 315 "prog_ctgc.m"
                            {
#line 315 "prog_ctgc.m"
                              parse_tree__prog_ctgc__V_15_15 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__Rest_9);
                            }
#line 314 "prog_ctgc.m"
                            {
#line 314 "prog_ctgc.m"
                              parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 314 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 314 "prog_ctgc.m"
                            }
#line 314 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 312 "prog_ctgc.m"
                          }
#line 313 "prog_ctgc.m"
                      }
#line 313 "prog_ctgc.m"
                  }
#line 312 "prog_ctgc.m"
              }
#line 316 "prog_ctgc.m"
            else
#line 316 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 310 "prog_ctgc.m"
          }
#line 310 "prog_ctgc.m"
      }
#line 309 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 321 "prog_ctgc.m"
      parse_tree__prog_ctgc__SharingPairs_4 = parse_tree__prog_ctgc__SharingPairs0_10;
#line 309 "prog_ctgc.m"
    else
#line 323 "prog_ctgc.m"
      {
#line 323 "prog_ctgc.m"
        {
#line 323 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing\'/1", (MR_String) "error while parsing list of structure sharing pairs");
        }
#line 323 "prog_ctgc.m"
      }
#line 309 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingPairs_4;
#line 309 "prog_ctgc.m"
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
#line 297 "prog_ctgc.m"
  {
#line 297 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 297 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPair_4;
#line 297 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__First_8;
#line 297 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Second_9;
#line 298 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 298 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 298 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 298 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 298 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 298 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 298 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 298 "prog_ctgc.m"
      {
#line 298 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 298 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 298 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 298 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 298 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 298 "prog_ctgc.m"
          {
#line 298 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 299 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "pair") == 0);
#line 298 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 298 "prog_ctgc.m"
              {
#line 300 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 300 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 300 "prog_ctgc.m"
                  {
#line 300 "prog_ctgc.m"
                    parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 300 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 300 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 300 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 300 "prog_ctgc.m"
                      {
#line 300 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 300 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 300 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_ctgc.m"
                      }
#line 300 "prog_ctgc.m"
                  }
#line 298 "prog_ctgc.m"
              }
#line 298 "prog_ctgc.m"
          }
#line 298 "prog_ctgc.m"
      }
#line 297 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 302 "prog_ctgc.m"
      {
#line 302 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_13_13;
#line 302 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_14_14;

#line 302 "prog_ctgc.m"
        {
#line 302 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
        }
#line 302 "prog_ctgc.m"
        {
#line 302 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Second_9);
        }
#line 302 "prog_ctgc.m"
        {
#line 302 "prog_ctgc.m"
          parse_tree__prog_ctgc__SharingPair_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 302 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 302 "prog_ctgc.m"
        }
#line 302 "prog_ctgc.m"
      }
#line 297 "prog_ctgc.m"
    else
#line 304 "prog_ctgc.m"
      {
#line 304 "prog_ctgc.m"
        {
#line 304 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_pair\'/1", (MR_String) "error while parsing structure sharing pair");
        }
#line 304 "prog_ctgc.m"
      }
#line 297 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingPair_4;
#line 297 "prog_ctgc.m"
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
#line 261 "prog_ctgc.m"
  {
#line 261 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 261 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Datastruct_4;
#line 261 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SelectorTerm_9;
#line 261 "prog_ctgc.m"
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
#line 261 "prog_ctgc.m"
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
#line 261 "prog_ctgc.m"
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
#line 261 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Datastruct_4;
#line 261 "prog_ctgc.m"
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
#line 247 "prog_ctgc.m"
  {
#line 247 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 247 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_4;
#line 247 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 247 "prog_ctgc.m"
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
#line 247 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 248 "prog_ctgc.m"
      {
#line 248 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__First_8;
#line 248 "prog_ctgc.m"
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
#line 248 "prog_ctgc.m"
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
#line 248 "prog_ctgc.m"
        else
#line 254 "prog_ctgc.m"
          parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "prog_ctgc.m"
      }
#line 247 "prog_ctgc.m"
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
#line 247 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Selector_4;
#line 247 "prog_ctgc.m"
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
#line 194 "prog_ctgc.m"
  {
#line 194 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 194 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__UnitSelector_4;
#line 194 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 194 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 194 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 194 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 194 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 194 "prog_ctgc.m"
      {
#line 194 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 194 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 194 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 194 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 194 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 194 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, (MR_Integer) 0)));
#line 194 "prog_ctgc.m"
      }
#line 194 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 198 "prog_ctgc.m"
      {
#line 198 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ConsTerm_8;
#line 198 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ArityTerm_9;
#line 198 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__PosTerm_10;
#line 199 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_31_31;
#line 199 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_32_32;
#line 199 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_33_33;

#line 199 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "sel") == 0);
#line 199 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 199 "prog_ctgc.m"
          {
#line 200 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 200 "prog_ctgc.m"
              {
#line 200 "prog_ctgc.m"
                parse_tree__prog_ctgc__ConsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 200 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 200 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 200 "prog_ctgc.m"
                  {
#line 200 "prog_ctgc.m"
                    parse_tree__prog_ctgc__ArityTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 0)));
#line 200 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 1)));
#line 200 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 200 "prog_ctgc.m"
                      {
#line 200 "prog_ctgc.m"
                        parse_tree__prog_ctgc__PosTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 0)));
#line 200 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 1)));
#line 200 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_ctgc.m"
                      }
#line 200 "prog_ctgc.m"
                  }
#line 200 "prog_ctgc.m"
              }
#line 199 "prog_ctgc.m"
          }
#line 198 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 202 "prog_ctgc.m"
          {
#line 202 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__ConsIdName_11;
#line 202 "prog_ctgc.m"
            MR_Integer parse_tree__prog_ctgc__Arity_12;
#line 202 "prog_ctgc.m"
            MR_Integer parse_tree__prog_ctgc__Pos_15;
#line 203 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_34_34;
#line 203 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_35_35;
#line 204 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 204 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;
#line 205 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_16_16;
#line 205 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_17_17;

#line 203 "prog_ctgc.m"
            {
#line 203 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_ctgc__TypeInfo_for_T_63, parse_tree__prog_ctgc__ConsTerm_8, &parse_tree__prog_ctgc__ConsIdName_11);
            }
#line 203 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 203 "prog_ctgc.m"
              {
#line 204 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ArityTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 204 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 204 "prog_ctgc.m"
                  {
#line 204 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 0)));
#line 204 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 1)));
#line 204 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 2)));
#line 204 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 204 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 204 "prog_ctgc.m"
                      {
#line 204 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_34_34, (MR_Integer) 0)));
#line 205 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__PosTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 205 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 205 "prog_ctgc.m"
                          {
#line 205 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 0)));
#line 205 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 1)));
#line 205 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 2)));
#line 205 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 205 "prog_ctgc.m"
                              parse_tree__prog_ctgc__Pos_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_35_35, (MR_Integer) 0)));
#line 205 "prog_ctgc.m"
                          }
#line 204 "prog_ctgc.m"
                      }
#line 204 "prog_ctgc.m"
                  }
#line 203 "prog_ctgc.m"
              }
#line 202 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 207 "prog_ctgc.m"
              {
#line 207 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__ConsId_18;
#line 207 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_36_36;

#line 207 "prog_ctgc.m"
                {
#line 207 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_36_36 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 207 "prog_ctgc.m"
                {
#line 207 "prog_ctgc.m"
                  parse_tree__prog_ctgc__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 207 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 207 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__ConsIdName_11));
#line 207 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 2) = ((MR_Box) (parse_tree__prog_ctgc__Arity_12));
#line 207 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
#line 207 "prog_ctgc.m"
                }
#line 208 "prog_ctgc.m"
                {
#line 208 "prog_ctgc.m"
                  parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_18));
#line 208 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__Pos_15));
#line 208 "prog_ctgc.m"
                }
#line 207 "prog_ctgc.m"
              }
#line 202 "prog_ctgc.m"
            else
#line 209 "prog_ctgc.m"
              {
#line 209 "prog_ctgc.m"
                MR_Integer parse_tree__prog_ctgc__Int_19;
#line 210 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_37_37;
#line 210 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_20_20;
#line 210 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_21_21;

#line 210 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 210 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 210 "prog_ctgc.m"
                  {
#line 210 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 210 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 210 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 210 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 210 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 210 "prog_ctgc.m"
                      parse_tree__prog_ctgc__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_37_37, (MR_Integer) 0)));
#line 210 "prog_ctgc.m"
                  }
#line 209 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 212 "prog_ctgc.m"
                  {
#line 212 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__ConsId_57;

#line 212 "prog_ctgc.m"
                    {
#line 212 "prog_ctgc.m"
                      parse_tree__prog_ctgc__ConsId_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 212 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_57, 1) = ((MR_Box) (parse_tree__prog_ctgc__Int_19));
#line 212 "prog_ctgc.m"
                    }
#line 213 "prog_ctgc.m"
                    {
#line 213 "prog_ctgc.m"
                      parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_57));
#line 213 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 213 "prog_ctgc.m"
                    }
#line 212 "prog_ctgc.m"
                  }
#line 209 "prog_ctgc.m"
                else
#line 214 "prog_ctgc.m"
                  {
#line 214 "prog_ctgc.m"
                    MR_Float parse_tree__prog_ctgc__Float_22;
#line 215 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_39_39;
#line 215 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_23_23;
#line 215 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_24_24;

#line 215 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 215 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 215 "prog_ctgc.m"
                      {
#line 215 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 215 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 215 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 215 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 215 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 215 "prog_ctgc.m"
                          parse_tree__prog_ctgc__Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 1)));
#line 215 "prog_ctgc.m"
                      }
#line 214 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 217 "prog_ctgc.m"
                      {
#line 217 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__ConsId_58;

#line 217 "prog_ctgc.m"
                        {
#line 217 "prog_ctgc.m"
                          parse_tree__prog_ctgc__ConsId_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 217 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 1) = MR_box_float(parse_tree__prog_ctgc__Float_22);
#line 217 "prog_ctgc.m"
                        }
#line 218 "prog_ctgc.m"
                        {
#line 218 "prog_ctgc.m"
                          parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_58));
#line 218 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 218 "prog_ctgc.m"
                        }
#line 217 "prog_ctgc.m"
                      }
#line 214 "prog_ctgc.m"
                    else
#line 219 "prog_ctgc.m"
                      {
#line 219 "prog_ctgc.m"
                        MR_String parse_tree__prog_ctgc__Str_25;
#line 220 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_41_41;
#line 220 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_26_26;
#line 220 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_27_27;

#line 220 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 220 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 220 "prog_ctgc.m"
                          {
#line 220 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 220 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 220 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 220 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 220 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 220 "prog_ctgc.m"
                              parse_tree__prog_ctgc__Str_25 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 1)));
#line 220 "prog_ctgc.m"
                          }
#line 219 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 222 "prog_ctgc.m"
                          {
#line 222 "prog_ctgc.m"
                            MR_Word parse_tree__prog_ctgc__ConsId_59;

#line 222 "prog_ctgc.m"
                            {
#line 222 "prog_ctgc.m"
                              parse_tree__prog_ctgc__ConsId_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 222 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 1) = ((MR_Box) (parse_tree__prog_ctgc__Str_25));
#line 222 "prog_ctgc.m"
                            }
#line 223 "prog_ctgc.m"
                            {
#line 223 "prog_ctgc.m"
                              parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 223 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_59));
#line 223 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 223 "prog_ctgc.m"
                            }
#line 222 "prog_ctgc.m"
                          }
#line 219 "prog_ctgc.m"
                        else
#line 225 "prog_ctgc.m"
                          {
#line 225 "prog_ctgc.m"
                            {
#line 225 "prog_ctgc.m"
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "unknown cons_id in unit selector");
                            }
#line 225 "prog_ctgc.m"
                          }
#line 219 "prog_ctgc.m"
                      }
#line 214 "prog_ctgc.m"
                  }
#line 209 "prog_ctgc.m"
              }
#line 202 "prog_ctgc.m"
          }
#line 198 "prog_ctgc.m"
        else
#line 227 "prog_ctgc.m"
          {
#line 227 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__TypeSelectorTerm_28;
#line 228 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_46_46;

#line 228 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "typesel") == 0);
#line 228 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 228 "prog_ctgc.m"
              {
#line 229 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 229 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 229 "prog_ctgc.m"
                  {
#line 229 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypeSelectorTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 229 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 229 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_ctgc.m"
                  }
#line 228 "prog_ctgc.m"
              }
#line 227 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 231 "prog_ctgc.m"
              {
#line 231 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypeSelector_29;
#line 232 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_47_47;

#line 232 "prog_ctgc.m"
                {
#line 232 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_47_47 = mercury__term__coerce_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_63, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_ctgc__TypeSelectorTerm_28);
                }
#line 232 "prog_ctgc.m"
                {
#line 232 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_ctgc__V_47_47, &parse_tree__prog_ctgc__TypeSelector_29);
                }
#line 231 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 234 "prog_ctgc.m"
                  {
#line 234 "prog_ctgc.m"
                    parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 234 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__TypeSelector_29));
#line 234 "prog_ctgc.m"
                  }
#line 231 "prog_ctgc.m"
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
#line 231 "prog_ctgc.m"
              }
#line 227 "prog_ctgc.m"
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
#line 227 "prog_ctgc.m"
          }
#line 198 "prog_ctgc.m"
      }
#line 194 "prog_ctgc.m"
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
#line 194 "prog_ctgc.m"
    return parse_tree__prog_ctgc__UnitSelector_4;
#line 194 "prog_ctgc.m"
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
