/*
** Automatically generated from `prog_ctgc.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 142 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 145 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 148 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 157 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 616 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__616__1_3_p_0(
#line 616 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41);

#line 651 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
#line 651 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 651 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 651 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseCond_8);

#line 526 "prog_ctgc.m"
static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
#line 526 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
#line 526 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2);

#line 503 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
#line 503 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Type_3,
#line 503 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2);

#line 500 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 500 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 500 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 500 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 482 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
#line 482 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3,
#line 482 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__SharingPair_4);

#line 468 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
#line 468 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
#line 468 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4);

#line 274 "prog_ctgc.m"
static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
#line 274 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
#line 274 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3);

#line 790 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 790 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 790 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 790 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 785 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
#line 785 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 785 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

#line 737 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 737 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 737 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 737 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 737 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 737 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2);

#line 672 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 672 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 672 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0_1(
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 672 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 616 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0_1(
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 616 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 616 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 616 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 582 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
#line 582 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 582 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 582 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 582 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 553 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
#line 553 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 553 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 553 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 553 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3);

#line 520 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
#line 520 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 520 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1);

#line 463 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
#line 463 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 463 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 463 "prog_ctgc.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 669 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 677 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 686 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 694 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_ctgc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 702 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 710 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 719 "parse_tree.prog_ctgc.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 727 "parse_tree.prog_ctgc.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_ctgc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_ctgc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 616 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__616__1_3_p_0(
#line 616 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__1_41)
#line 616 "prog_ctgc.m"
{
#line 616 "prog_ctgc.m"
  {
#line 616 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 616 "prog_ctgc.m"
    {
#line 616 "prog_ctgc.m"
      mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__HeadVar__1_41)));
#line 616 "prog_ctgc.m"
      return;
    }
#line 616 "prog_ctgc.m"
  }
#line 616 "prog_ctgc.m"
}

#line 651 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(
#line 651 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ProgVarSet_6,
#line 651 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeVarSet_7,
#line 651 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ReuseCond_8)
#line 651 "prog_ctgc.m"
{
#line 654 "prog_ctgc.m"
  {
#line 654 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 654 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 0)));
#line 654 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__InUseNodes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 1)));
#line 654 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sharing_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCond_8, (MR_Integer) 2)));
#line 654 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodesList_13;

#line 656 "prog_ctgc.m"
    {
#line 656 "prog_ctgc.m"
      parse_tree__prog_ctgc__DeadNodesList_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodes_10);
    }
#line 657 "prog_ctgc.m"
    {
#line 657 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "condition(");
    }
#line 658 "prog_ctgc.m"
    {
#line 658 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__DeadNodesList_13);
    }
#line 659 "prog_ctgc.m"
    {
#line 659 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 660 "prog_ctgc.m"
    {
#line 660 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastructs_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__InUseNodes_11);
    }
#line 661 "prog_ctgc.m"
    {
#line 661 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 662 "prog_ctgc.m"
    {
#line 662 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__Sharing_12);
    }
#line 664 "prog_ctgc.m"
    {
#line 664 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 664 "prog_ctgc.m"
      return;
    }
#line 654 "prog_ctgc.m"
  }
#line 651 "prog_ctgc.m"
}

#line 526 "prog_ctgc.m"
static MR_String MR_CALL 
parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(
#line 526 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TVarSet_1,
#line 526 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__HeadVar__2_2)
#line 526 "prog_ctgc.m"
{
#line 528 "prog_ctgc.m"
  {
#line 528 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 528 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__HeadVar__3_3;

#line 528 "prog_ctgc.m"
    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 528 "prog_ctgc.m"
      {
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
#line 528 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__Index_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 1)));
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_7_7;
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_9_9;
#line 528 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_10_10;
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_14_14;
#line 528 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_15_15;
#line 528 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__V_16_16;
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_17_17;
#line 528 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_19_19;
#line 528 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_20_20;

#line 530 "prog_ctgc.m"
        {
#line 530 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_10_10 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 0, parse_tree__prog_ctgc__ConsId_5);
        }
#line 532 "prog_ctgc.m"
        {
#line 532 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_util__cons_id_arity_1_f_0(parse_tree__prog_ctgc__ConsId_5);
        }
#line 532 "prog_ctgc.m"
        {
#line 532 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_15_15 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__V_16_16);
        }
#line 534 "prog_ctgc.m"
        {
#line 534 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_20_20 = mercury__string__int_to_string_1_f_0(parse_tree__prog_ctgc__Index_6);
        }
#line 534 "prog_ctgc.m"
        {
#line 534 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_20_20));
#line 534 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
#line 534 "prog_ctgc.m"
        }
#line 533 "prog_ctgc.m"
        {
#line 533 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) ((MR_String) ","));
#line 533 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_19_19));
#line 533 "prog_ctgc.m"
        }
#line 532 "prog_ctgc.m"
        {
#line 532 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 532 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
#line 532 "prog_ctgc.m"
        }
#line 531 "prog_ctgc.m"
        {
#line 531 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 0) = ((MR_Box) ((MR_String) ","));
#line 531 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 531 "prog_ctgc.m"
        }
#line 530 "prog_ctgc.m"
        {
#line 530 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
#line 530 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_12_12));
#line 530 "prog_ctgc.m"
        }
#line 529 "prog_ctgc.m"
        {
#line 529 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 0) = ((MR_Box) ((MR_String) "sel("));
#line 529 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_7_7, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_9_9));
#line 529 "prog_ctgc.m"
        }
#line 529 "prog_ctgc.m"
        {
#line 529 "prog_ctgc.m"
          return parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_7_7);
        }
#line 528 "prog_ctgc.m"
      }
#line 528 "prog_ctgc.m"
    else
#line 537 "prog_ctgc.m"
      {
#line 537 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__TypeSel_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__2_2, (MR_Integer) 0)));
#line 537 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_26_26;
#line 537 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_28_28;
#line 537 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_29_29;

#line 539 "prog_ctgc.m"
        {
#line 539 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_29_29 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_ctgc__TVarSet_1, (MR_Integer) 0, parse_tree__prog_ctgc__TypeSel_25);
        }
#line 539 "prog_ctgc.m"
        {
#line 539 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_29_29));
#line 539 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[7])));
#line 539 "prog_ctgc.m"
        }
#line 538 "prog_ctgc.m"
        {
#line 538 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 0) = ((MR_Box) ((MR_String) "typesel("));
#line 538 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_26_26, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_28_28));
#line 538 "prog_ctgc.m"
        }
#line 538 "prog_ctgc.m"
        {
#line 538 "prog_ctgc.m"
          return parse_tree__prog_ctgc__HeadVar__3_3 = mercury__string__append_list_1_f_0(parse_tree__prog_ctgc__V_26_26);
        }
#line 537 "prog_ctgc.m"
      }
#line 528 "prog_ctgc.m"
    return parse_tree__prog_ctgc__HeadVar__3_3;
#line 528 "prog_ctgc.m"
  }
#line 526 "prog_ctgc.m"
}

#line 503 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(
#line 503 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Type_3,
#line 503 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__HeadVar__2_2)
#line 503 "prog_ctgc.m"
{
#line 505 "prog_ctgc.m"
  {
#line 505 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 505 "prog_ctgc.m"
    {
#line 505 "prog_ctgc.m"
      MR_Word base;
#line 505 "prog_ctgc.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__2_2 = base;
#line 505 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_3));
#line 505 "prog_ctgc.m"
    }
#line 505 "prog_ctgc.m"
  }
#line 503 "prog_ctgc.m"
}

#line 500 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_2(
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 500 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 500 "prog_ctgc.m"
{
#line 500 "prog_ctgc.m"
  {
#line 500 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 500 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_HeadVar__2_2;

#line 500 "prog_ctgc.m"
    {
#line 500 "prog_ctgc.m"
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_HeadVar__2_2);
    }
#line 500 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_HeadVar__2_2));
#line 500 "prog_ctgc.m"
  }
#line 500 "prog_ctgc.m"
}

#line 500 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0_1(
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 500 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 500 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 500 "prog_ctgc.m"
{
#line 500 "prog_ctgc.m"
  {
#line 500 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 500 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__2_2;

#line 500 "prog_ctgc.m"
    {
#line 500 "prog_ctgc.m"
      parse_tree__prog_ctgc__mer_type_to_typesel_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__2_2);
    }
#line 500 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__2_2));
#line 500 "prog_ctgc.m"
  }
#line 500 "prog_ctgc.m"
}

#line 482 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(
#line 482 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3,
#line 482 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__SharingPair_4)
#line 482 "prog_ctgc.m"
{
#line 485 "prog_ctgc.m"
  {
#line 485 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_20_32;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_33;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_24_36;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_37;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_20_55;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_21_56;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_24_59;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_25_60;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Left_5;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Right_6;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__LeftData_8;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RightData_9;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 485 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_11_11;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_17;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypesTerm_18;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__GenericVar_20;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ProgVar_22;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeTermsList_23;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Types_24;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_25;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_26_26;
#line 485 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_27_27;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_28_28;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_29_29;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_31_31;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_40;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypesTerm_41;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__GenericVar_43;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ProgVar_45;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeTermsList_46;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Types_47;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_48;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_49_49;
#line 485 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_50_50;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_51_51;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_52_52;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_53_53;
#line 485 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_54_54;
#line 486 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;
#line 495 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_19_19;
#line 496 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_21_21;
#line 495 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_42_42;
#line 496 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_44_44;

#line 486 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 486 "prog_ctgc.m"
      {
#line 486 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 486 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 486 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 486 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 486 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 486 "prog_ctgc.m"
          {
#line 486 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 486 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_11_11, (MR_String) "-") == 0);
#line 485 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
              {
#line 486 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 486 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 486 "prog_ctgc.m"
                  {
#line 486 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 486 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 486 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 486 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 486 "prog_ctgc.m"
                      {
#line 486 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
#line 486 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
#line 486 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                          {
#line 495 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Left_5)) == (MR_mktag((MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                              {
#line 495 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Left_5, (MR_Integer) 2)));
#line 495 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                  {
#line 495 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_26_26, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_27_27, (MR_String) "cel") == 0);
#line 485 "prog_ctgc.m"
                                    if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                      {
#line 495 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                          {
#line 495 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__VarTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_28_28, (MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                            if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                              {
#line 495 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__TypesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_29_29, (MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "prog_ctgc.m"
                                                if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                  {
#line 496 "prog_ctgc.m"
                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_17)) == (MR_mktag((MR_Integer) 1)));
#line 496 "prog_ctgc.m"
                                                    if (parse_tree__prog_ctgc__succeeded)
#line 496 "prog_ctgc.m"
                                                      {
#line 496 "prog_ctgc.m"
                                                        parse_tree__prog_ctgc__GenericVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 0)));
#line 496 "prog_ctgc.m"
                                                        parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_17, (MR_Integer) 1)));
#line 1328 "parse_tree.prog_ctgc.c"
                                                        parse_tree__prog_ctgc__TypeCtorInfo_20_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1330 "parse_tree.prog_ctgc.c"
                                                        parse_tree__prog_ctgc__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 497 "prog_ctgc.m"
                                                        {
#line 497 "prog_ctgc.m"
                                                          mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_20_32, parse_tree__prog_ctgc__TypeCtorInfo_21_33, parse_tree__prog_ctgc__GenericVar_20, &parse_tree__prog_ctgc__ProgVar_22);
                                                        }
#line 498 "prog_ctgc.m"
                                                        {
#line 498 "prog_ctgc.m"
                                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_18, &parse_tree__prog_ctgc__TypeTermsList_23);
                                                        }
#line 485 "prog_ctgc.m"
                                                        if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                          {
#line 499 "prog_ctgc.m"
                                                            {
#line 499 "prog_ctgc.m"
                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__TypeTermsList_23, &parse_tree__prog_ctgc__Types_24);
                                                            }
#line 485 "prog_ctgc.m"
                                                            if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                              {
#line 500 "prog_ctgc.m"
                                                                parse_tree__prog_ctgc__V_31_31 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[4];
#line 1357 "parse_tree.prog_ctgc.c"
                                                                parse_tree__prog_ctgc__TypeCtorInfo_24_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1359 "parse_tree.prog_ctgc.c"
                                                                parse_tree__prog_ctgc__TypeCtorInfo_25_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 500 "prog_ctgc.m"
                                                                {
#line 500 "prog_ctgc.m"
                                                                  mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_24_36, parse_tree__prog_ctgc__TypeCtorInfo_25_37, parse_tree__prog_ctgc__V_31_31, parse_tree__prog_ctgc__Types_24, &parse_tree__prog_ctgc__Selector_25);
                                                                }
#line 495 "prog_ctgc.m"
                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Right_6)) == (MR_mktag((MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                                                  {
#line 495 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Right_6, (MR_Integer) 2)));
#line 495 "prog_ctgc.m"
                                                                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                    if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                                                      {
#line 495 "prog_ctgc.m"
                                                                        parse_tree__prog_ctgc__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_49_49, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_50_50, (MR_String) "cel") == 0);
#line 485 "prog_ctgc.m"
                                                                        if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                                          {
#line 495 "prog_ctgc.m"
                                                                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                                            if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                                                              {
#line 495 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__VarTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_51_51, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_51_51, (MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                                                if (parse_tree__prog_ctgc__succeeded)
#line 495 "prog_ctgc.m"
                                                                                  {
#line 495 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__TypesTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 0)));
#line 495 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_52_52, (MR_Integer) 1)));
#line 495 "prog_ctgc.m"
                                                                                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "prog_ctgc.m"
                                                                                    if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                                                      {
#line 496 "prog_ctgc.m"
                                                                                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_40)) == (MR_mktag((MR_Integer) 1)));
#line 496 "prog_ctgc.m"
                                                                                        if (parse_tree__prog_ctgc__succeeded)
#line 496 "prog_ctgc.m"
                                                                                          {
#line 496 "prog_ctgc.m"
                                                                                            parse_tree__prog_ctgc__GenericVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_40, (MR_Integer) 0)));
#line 496 "prog_ctgc.m"
                                                                                            parse_tree__prog_ctgc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_40, (MR_Integer) 1)));
#line 1428 "parse_tree.prog_ctgc.c"
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_20_55 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1430 "parse_tree.prog_ctgc.c"
                                                                                            parse_tree__prog_ctgc__TypeCtorInfo_21_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 501 "prog_ctgc.m"
                                                                                            {
#line 501 "prog_ctgc.m"
                                                                                              parse_tree__prog_ctgc__LeftData_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_ctgc.m"
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_22));
#line 501 "prog_ctgc.m"
                                                                                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__LeftData_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_25));
#line 501 "prog_ctgc.m"
                                                                                            }
#line 497 "prog_ctgc.m"
                                                                                            {
#line 497 "prog_ctgc.m"
                                                                                              mercury__term__coerce_var_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_20_55, parse_tree__prog_ctgc__TypeCtorInfo_21_56, parse_tree__prog_ctgc__GenericVar_43, &parse_tree__prog_ctgc__ProgVar_45);
                                                                                            }
#line 498 "prog_ctgc.m"
                                                                                            {
#line 498 "prog_ctgc.m"
                                                                                              parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__TypesTerm_41, &parse_tree__prog_ctgc__TypeTermsList_46);
                                                                                            }
#line 485 "prog_ctgc.m"
                                                                                            if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                                                              {
#line 499 "prog_ctgc.m"
                                                                                                {
#line 499 "prog_ctgc.m"
                                                                                                  parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__TypeTermsList_46, &parse_tree__prog_ctgc__Types_47);
                                                                                                }
#line 485 "prog_ctgc.m"
                                                                                                if (parse_tree__prog_ctgc__succeeded)
#line 485 "prog_ctgc.m"
                                                                                                  {
#line 500 "prog_ctgc.m"
                                                                                                    parse_tree__prog_ctgc__V_54_54 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[5];
#line 1467 "parse_tree.prog_ctgc.c"
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_24_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1469 "parse_tree.prog_ctgc.c"
                                                                                                    parse_tree__prog_ctgc__TypeCtorInfo_25_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 500 "prog_ctgc.m"
                                                                                                    {
#line 500 "prog_ctgc.m"
                                                                                                      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_24_59, parse_tree__prog_ctgc__TypeCtorInfo_25_60, parse_tree__prog_ctgc__V_54_54, parse_tree__prog_ctgc__Types_47, &parse_tree__prog_ctgc__Selector_48);
                                                                                                    }
#line 501 "prog_ctgc.m"
                                                                                                    {
#line 501 "prog_ctgc.m"
                                                                                                      parse_tree__prog_ctgc__RightData_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 0) = ((MR_Box) (parse_tree__prog_ctgc__ProgVar_45));
#line 501 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__RightData_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__Selector_48));
#line 501 "prog_ctgc.m"
                                                                                                    }
#line 489 "prog_ctgc.m"
                                                                                                    {
#line 489 "prog_ctgc.m"
                                                                                                      MR_Word base;
#line 489 "prog_ctgc.m"
                                                                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "prog_ctgc.m"
                                                                                                      *parse_tree__prog_ctgc__SharingPair_4 = base;
#line 489 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__LeftData_8));
#line 489 "prog_ctgc.m"
                                                                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RightData_9));
#line 489 "prog_ctgc.m"
                                                                                                    }
#line 489 "prog_ctgc.m"
                                                                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 485 "prog_ctgc.m"
                                                                                                  }
#line 485 "prog_ctgc.m"
                                                                                              }
#line 496 "prog_ctgc.m"
                                                                                          }
#line 485 "prog_ctgc.m"
                                                                                      }
#line 495 "prog_ctgc.m"
                                                                                  }
#line 495 "prog_ctgc.m"
                                                                              }
#line 485 "prog_ctgc.m"
                                                                          }
#line 495 "prog_ctgc.m"
                                                                      }
#line 495 "prog_ctgc.m"
                                                                  }
#line 485 "prog_ctgc.m"
                                                              }
#line 485 "prog_ctgc.m"
                                                          }
#line 496 "prog_ctgc.m"
                                                      }
#line 485 "prog_ctgc.m"
                                                  }
#line 495 "prog_ctgc.m"
                                              }
#line 495 "prog_ctgc.m"
                                          }
#line 485 "prog_ctgc.m"
                                      }
#line 495 "prog_ctgc.m"
                                  }
#line 495 "prog_ctgc.m"
                              }
#line 485 "prog_ctgc.m"
                          }
#line 486 "prog_ctgc.m"
                      }
#line 486 "prog_ctgc.m"
                  }
#line 485 "prog_ctgc.m"
              }
#line 486 "prog_ctgc.m"
          }
#line 486 "prog_ctgc.m"
      }
#line 485 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 485 "prog_ctgc.m"
  }
#line 482 "prog_ctgc.m"
}

#line 468 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(
#line 468 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__ListTerm_3,
#line 468 "prog_ctgc.m"
  MR_Word * parse_tree__prog_ctgc__ArgumentTerms_4)
#line 468 "prog_ctgc.m"
{
#line 470 "prog_ctgc.m"
  {
#line 470 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ListTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 470 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 470 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 470 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 471 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 471 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 471 "prog_ctgc.m"
      {
#line 471 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 0)));
#line 471 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 1)));
#line 471 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ListTerm_3, (MR_Integer) 2)));
#line 471 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 471 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 471 "prog_ctgc.m"
          {
#line 471 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 477 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
#line 479 "prog_ctgc.m"
              {
#line 479 "prog_ctgc.m"
                *parse_tree__prog_ctgc__ArgumentTerms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 479 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 479 "prog_ctgc.m"
              }
#line 477 "prog_ctgc.m"
            else
#line 477 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 473 "prog_ctgc.m"
                {
#line 473 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__FirstTerm_8;
#line 473 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__RestTerm_9;
#line 473 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__RestList_10;
#line 473 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_12_12;
#line 473 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_13_13;

#line 474 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 474 "prog_ctgc.m"
                  if (parse_tree__prog_ctgc__succeeded)
#line 474 "prog_ctgc.m"
                    {
#line 474 "prog_ctgc.m"
                      parse_tree__prog_ctgc__FirstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 474 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 474 "prog_ctgc.m"
                      parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 474 "prog_ctgc.m"
                      if (parse_tree__prog_ctgc__succeeded)
#line 474 "prog_ctgc.m"
                        {
#line 474 "prog_ctgc.m"
                          parse_tree__prog_ctgc__RestTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 474 "prog_ctgc.m"
                          parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 474 "prog_ctgc.m"
                          parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "prog_ctgc.m"
                          if (parse_tree__prog_ctgc__succeeded)
#line 473 "prog_ctgc.m"
                            {
#line 475 "prog_ctgc.m"
                              {
#line 475 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__RestTerm_9, &parse_tree__prog_ctgc__RestList_10);
                              }
#line 473 "prog_ctgc.m"
                              if (parse_tree__prog_ctgc__succeeded)
#line 473 "prog_ctgc.m"
                                {
#line 476 "prog_ctgc.m"
                                  {
#line 476 "prog_ctgc.m"
                                    MR_Word base;
#line 476 "prog_ctgc.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_ctgc.m"
                                    *parse_tree__prog_ctgc__ArgumentTerms_4 = base;
#line 476 "prog_ctgc.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__FirstTerm_8));
#line 476 "prog_ctgc.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RestList_10));
#line 476 "prog_ctgc.m"
                                  }
#line 476 "prog_ctgc.m"
                                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 473 "prog_ctgc.m"
                                }
#line 473 "prog_ctgc.m"
                            }
#line 474 "prog_ctgc.m"
                        }
#line 474 "prog_ctgc.m"
                    }
#line 473 "prog_ctgc.m"
                }
#line 477 "prog_ctgc.m"
              else
#line 477 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 471 "prog_ctgc.m"
          }
#line 471 "prog_ctgc.m"
      }
#line 470 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 470 "prog_ctgc.m"
  }
#line 468 "prog_ctgc.m"
}

#line 274 "prog_ctgc.m"
static MR_Word MR_CALL 
parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(
#line 274 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__TypeInfo_for_T_21,
#line 274 "prog_ctgc.m"
  MR_Word parse_tree__prog_ctgc__Term_3)
#line 274 "prog_ctgc.m"
{
#line 294 "prog_ctgc.m"
  {
#line 294 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 294 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Datastructs_4;
#line 294 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 294 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 278 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 278 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 278 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 278 "prog_ctgc.m"
      {
#line 278 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 278 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 278 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 278 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 278 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 278 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 278 "prog_ctgc.m"
      }
#line 294 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 286 "prog_ctgc.m"
      {
#line 286 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__FirstDataTerm_8;
#line 286 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__RestDataTerm_9;
#line 281 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 281 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 281 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 281 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 281 "prog_ctgc.m"
          {
#line 282 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 282 "prog_ctgc.m"
              {
#line 282 "prog_ctgc.m"
                parse_tree__prog_ctgc__FirstDataTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 282 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 282 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 282 "prog_ctgc.m"
                  {
#line 282 "prog_ctgc.m"
                    parse_tree__prog_ctgc__RestDataTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 282 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 282 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_ctgc.m"
                  }
#line 282 "prog_ctgc.m"
              }
#line 281 "prog_ctgc.m"
          }
#line 286 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 284 "prog_ctgc.m"
          {
#line 284 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 284 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 284 "prog_ctgc.m"
            {
#line 284 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstDataTerm_8);
            }
#line 285 "prog_ctgc.m"
            {
#line 285 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestDataTerm_9);
            }
#line 284 "prog_ctgc.m"
            {
#line 284 "prog_ctgc.m"
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 284 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Datastructs_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 284 "prog_ctgc.m"
            }
#line 284 "prog_ctgc.m"
          }
#line 286 "prog_ctgc.m"
        else
#line 290 "prog_ctgc.m"
          {
#line 287 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
#line 290 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 289 "prog_ctgc.m"
              parse_tree__prog_ctgc__Datastructs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 290 "prog_ctgc.m"
            else
#line 291 "prog_ctgc.m"
              {
#line 291 "prog_ctgc.m"
                {
#line 291 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs");
                }
#line 291 "prog_ctgc.m"
              }
#line 290 "prog_ctgc.m"
          }
#line 286 "prog_ctgc.m"
      }
#line 294 "prog_ctgc.m"
    else
#line 295 "prog_ctgc.m"
      {
#line 295 "prog_ctgc.m"
        {
#line 295 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct_list\'/1", (MR_String) "error while parsing list of datastructs (term not a functor)");
        }
#line 295 "prog_ctgc.m"
      }
#line 294 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Datastructs_4;
#line 294 "prog_ctgc.m"
  }
#line 274 "prog_ctgc.m"
}

#line 790 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1(
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 790 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 790 "prog_ctgc.m"
{
#line 790 "prog_ctgc.m"
  {
#line 790 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 790 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

#line 790 "prog_ctgc.m"
    {
#line 790 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
#line 790 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
#line 790 "prog_ctgc.m"
  }
#line 790 "prog_ctgc.m"
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
#line 793 "prog_ctgc.m"
  {
#line 793 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 793 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "prog_ctgc.m"
    else
#line 793 "prog_ctgc.m"
      if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 795 "prog_ctgc.m"
        *parse_tree__prog_ctgc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 793 "prog_ctgc.m"
      else
#line 797 "prog_ctgc.m"
        {
#line 797 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_20;
#line 797 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Conds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 797 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__RenConds_12;
#line 797 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_17_17;

#line 790 "prog_ctgc.m"
          {
#line 790 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
#line 790 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0_1));
#line 790 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 790 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
#line 790 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_17_17, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
#line 790 "prog_ctgc.m"
          }
#line 1950 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeCtorInfo_12_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
#line 790 "prog_ctgc.m"
          {
#line 790 "prog_ctgc.m"
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__TypeCtorInfo_12_20, parse_tree__prog_ctgc__V_17_17, parse_tree__prog_ctgc__Conds_11, &parse_tree__prog_ctgc__RenConds_12);
          }
#line 797 "prog_ctgc.m"
          {
#line 797 "prog_ctgc.m"
            MR_Word base;
#line 797 "prog_ctgc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 797 "prog_ctgc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenConds_12));
#line 797 "prog_ctgc.m"
          }
#line 797 "prog_ctgc.m"
        }
#line 793 "prog_ctgc.m"
  }
#line 165 "prog_ctgc.m"
}

#line 790 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1(
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 790 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 790 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 790 "prog_ctgc.m"
{
#line 790 "prog_ctgc.m"
  {
#line 790 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 790 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_HeadVar__4_4;

#line 790 "prog_ctgc.m"
    {
#line 790 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_HeadVar__4_4);
    }
#line 790 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__4_4));
#line 790 "prog_ctgc.m"
  }
#line 790 "prog_ctgc.m"
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
#line 789 "prog_ctgc.m"
  {
#line 789 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 789 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
#line 789 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;

#line 790 "prog_ctgc.m"
    {
#line 790 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[2]));
#line 790 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_p_0_1));
#line 790 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 790 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 790 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 790 "prog_ctgc.m"
    }
#line 2044 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
#line 790 "prog_ctgc.m"
    {
#line 790 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_9_9, parse_tree__prog_ctgc__Conds_7, parse_tree__prog_ctgc__RenConds_8);
#line 790 "prog_ctgc.m"
      return;
    }
#line 789 "prog_ctgc.m"
  }
#line 161 "prog_ctgc.m"
}

#line 785 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1(
#line 785 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 785 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
#line 785 "prog_ctgc.m"
{
#line 785 "prog_ctgc.m"
  {
#line 785 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
#line 785 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 785 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_Data_8;

#line 785 "prog_ctgc.m"
    {
#line 785 "prog_ctgc.m"
      parse_tree__prog_ctgc__conv0_Data_8 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 785 "prog_ctgc.m"
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_Data_8));
#line 785 "prog_ctgc.m"
    return parse_tree__prog_ctgc__wrapper_arg_2;
#line 785 "prog_ctgc.m"
  }
#line 785 "prog_ctgc.m"
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
#line 784 "prog_ctgc.m"
  {
#line 784 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__DeadNodes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__LiveNodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 1)));
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sharing_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 2)));
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenDeadNodes_10;
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenLiveNodes_11;
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__RenSharing_12;
#line 784 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;

#line 785 "prog_ctgc.m"
    {
#line 785 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[1]));
#line 785 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_reuse_condition_4_p_0_1));
#line 785 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 785 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 785 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_13_13, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 785 "prog_ctgc.m"
    }
#line 785 "prog_ctgc.m"
    {
#line 785 "prog_ctgc.m"
      parse_tree__prog_ctgc__RenDeadNodes_10 = mercury__set__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__DeadNodes_7);
    }
#line 786 "prog_ctgc.m"
    {
#line 786 "prog_ctgc.m"
      parse_tree__prog_ctgc__RenLiveNodes_11 = mercury__list__map_2_f_0(parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__TypeCtorInfo_15_15, parse_tree__prog_ctgc__V_13_13, parse_tree__prog_ctgc__LiveNodes_8);
    }
#line 787 "prog_ctgc.m"
    {
#line 787 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(parse_tree__prog_ctgc__Dict_5, parse_tree__prog_ctgc__TypeSubst_6, parse_tree__prog_ctgc__Sharing_9, &parse_tree__prog_ctgc__RenSharing_12);
    }
#line 784 "prog_ctgc.m"
    {
#line 784 "prog_ctgc.m"
      MR_Word base;
#line 784 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__RenDeadNodes_10));
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__RenLiveNodes_11));
#line 784 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_ctgc__RenSharing_12));
#line 784 "prog_ctgc.m"
    }
#line 784 "prog_ctgc.m"
  }
#line 157 "prog_ctgc.m"
}

#line 737 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1(
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 737 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 737 "prog_ctgc.m"
{
#line 737 "prog_ctgc.m"
  {
#line 737 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 737 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 737 "prog_ctgc.m"
    {
#line 737 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 737 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 737 "prog_ctgc.m"
  }
#line 737 "prog_ctgc.m"
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
#line 750 "prog_ctgc.m"
  {
#line 750 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 750 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20;
#line 750 "prog_ctgc.m"
    else
#line 752 "prog_ctgc.m"
      {
#line 752 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__MaybeTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 1)));
#line 752 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_0_20, (MR_Integer) 0)));
#line 752 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24;

#line 757 "prog_ctgc.m"
        if ((parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "prog_ctgc.m"
          parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
#line 757 "prog_ctgc.m"
        else
#line 757 "prog_ctgc.m"
          if (((MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22)) == (MR_mktag((MR_Integer) 1))))
#line 760 "prog_ctgc.m"
            {
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeInfo_14_39;
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__SharingPairs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22, (MR_Integer) 0)));
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__VarRenaming_15;
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeSubst_18;
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__NewSharingPairs_19;
#line 760 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_35_35;
#line 769 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__UserSharingTypes_16;
#line 764 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_23_23;
#line 764 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc___UserSharingTVarSet_17;

#line 761 "prog_ctgc.m"
              {
#line 761 "prog_ctgc.m"
                mercury__map__from_corresponding_lists_3_p_0(parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__TypeInfo_27_27, parse_tree__prog_ctgc__HeadVars_6, parse_tree__prog_ctgc__NewHeadVars_7, &parse_tree__prog_ctgc__VarRenaming_15);
              }
#line 764 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__MaybeTypes_11)) == (MR_mktag((MR_Integer) 1)));
#line 764 "prog_ctgc.m"
              if (parse_tree__prog_ctgc__succeeded)
#line 764 "prog_ctgc.m"
                {
#line 764 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeTypes_11, (MR_Integer) 0)));
#line 764 "prog_ctgc.m"
                  parse_tree__prog_ctgc__UserSharingTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 0)));
#line 764 "prog_ctgc.m"
                  parse_tree__prog_ctgc___UserSharingTVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, (MR_Integer) 1)));
#line 764 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 764 "prog_ctgc.m"
                }
#line 769 "prog_ctgc.m"
              if (parse_tree__prog_ctgc__succeeded)
#line 767 "prog_ctgc.m"
                {
#line 767 "prog_ctgc.m"
                  parse_tree__prog_type__type_list_subsumes_det_3_p_0(parse_tree__prog_ctgc__UserSharingTypes_16, parse_tree__prog_ctgc__NewTypes_8, &parse_tree__prog_ctgc__TypeSubst_18);
                }
#line 769 "prog_ctgc.m"
              else
#line 770 "prog_ctgc.m"
                {
#line 770 "prog_ctgc.m"
                  {
#line 770 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypeSubst_18 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  }
#line 770 "prog_ctgc.m"
                }
#line 737 "prog_ctgc.m"
              {
#line 737 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 737 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0_1));
#line 737 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 3) = ((MR_Box) (parse_tree__prog_ctgc__VarRenaming_15));
#line 737 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_18));
#line 737 "prog_ctgc.m"
              }
#line 2327 "parse_tree.prog_ctgc.c"
              parse_tree__prog_ctgc__TypeInfo_14_39 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 737 "prog_ctgc.m"
              {
#line 737 "prog_ctgc.m"
                mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__TypeInfo_14_39, parse_tree__prog_ctgc__V_35_35, parse_tree__prog_ctgc__SharingPairs_14, &parse_tree__prog_ctgc__NewSharingPairs_19);
              }
#line 774 "prog_ctgc.m"
              {
#line 774 "prog_ctgc.m"
                parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 774 "prog_ctgc.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24, 0) = ((MR_Box) (parse_tree__prog_ctgc__NewSharingPairs_19));
#line 774 "prog_ctgc.m"
              }
#line 760 "prog_ctgc.m"
            }
#line 757 "prog_ctgc.m"
          else
#line 758 "prog_ctgc.m"
            parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24 = parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_22_22;
#line 776 "prog_ctgc.m"
        {
#line 776 "prog_ctgc.m"
          MR_Word base;
#line 776 "prog_ctgc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_ctgc.m"
          *parse_tree__prog_ctgc__STATE_VARIABLE_UserSharing_21 = base;
#line 776 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_SharingDomain_24_24));
#line 776 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "prog_ctgc.m"
        }
#line 752 "prog_ctgc.m"
      }
#line 750 "prog_ctgc.m"
  }
#line 153 "prog_ctgc.m"
}

#line 737 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1(
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 737 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 737 "prog_ctgc.m"
{
#line 737 "prog_ctgc.m"
  {
#line 737 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 737 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 737 "prog_ctgc.m"
    {
#line 737 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 737 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 737 "prog_ctgc.m"
  }
#line 737 "prog_ctgc.m"
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
#line 739 "prog_ctgc.m"
  {
#line 739 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 739 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "prog_ctgc.m"
      *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
#line 739 "prog_ctgc.m"
    else
#line 739 "prog_ctgc.m"
      if (((MR_tag((MR_Word) parse_tree__prog_ctgc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 742 "prog_ctgc.m"
        {
#line 742 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__TypeInfo_14_27;
#line 742 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));
#line 742 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_List_16;
#line 742 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__V_23_23;

#line 737 "prog_ctgc.m"
          {
#line 737 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 737 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0_1));
#line 737 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_1));
#line 737 "prog_ctgc.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_23_23, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_2));
#line 737 "prog_ctgc.m"
          }
#line 2452 "parse_tree.prog_ctgc.c"
          parse_tree__prog_ctgc__TypeInfo_14_27 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 737 "prog_ctgc.m"
          {
#line 737 "prog_ctgc.m"
            mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__TypeInfo_14_27, parse_tree__prog_ctgc__V_23_23, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_15, &parse_tree__prog_ctgc__STATE_VARIABLE_List_16);
          }
#line 742 "prog_ctgc.m"
          {
#line 742 "prog_ctgc.m"
            MR_Word base;
#line 742 "prog_ctgc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_ctgc.m"
            *parse_tree__prog_ctgc__HeadVar__4_4 = base;
#line 742 "prog_ctgc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__STATE_VARIABLE_List_16));
#line 742 "prog_ctgc.m"
          }
#line 742 "prog_ctgc.m"
        }
#line 739 "prog_ctgc.m"
      else
#line 740 "prog_ctgc.m"
        *parse_tree__prog_ctgc__HeadVar__4_4 = parse_tree__prog_ctgc__HeadVar__3_3;
#line 739 "prog_ctgc.m"
  }
#line 149 "prog_ctgc.m"
}

#line 737 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1(
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 737 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 737 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 737 "prog_ctgc.m"
{
#line 737 "prog_ctgc.m"
  {
#line 737 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 737 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13;

#line 737 "prog_ctgc.m"
    {
#line 737 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13);
    }
#line 737 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_Pair_13));
#line 737 "prog_ctgc.m"
  }
#line 737 "prog_ctgc.m"
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
#line 736 "prog_ctgc.m"
  {
#line 736 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 736 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_14_14;
#line 736 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;

#line 737 "prog_ctgc.m"
    {
#line 737 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_7[0]));
#line 737 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_4_p_0_1));
#line 737 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 3) = ((MR_Box) (parse_tree__prog_ctgc__Dict_5));
#line 737 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 737 "prog_ctgc.m"
    }
#line 2550 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_14_14 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 737 "prog_ctgc.m"
    {
#line 737 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__TypeInfo_14_14, parse_tree__prog_ctgc__V_10_10, parse_tree__prog_ctgc__STATE_VARIABLE_List_0_8, parse_tree__prog_ctgc__STATE_VARIABLE_List_9);
#line 737 "prog_ctgc.m"
      return;
    }
#line 736 "prog_ctgc.m"
  }
#line 146 "prog_ctgc.m"
}

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 721 "prog_ctgc.m"
{
#line 721 "prog_ctgc.m"
  {
#line 721 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 721 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 721 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 721 "prog_ctgc.m"
  }
#line 721 "prog_ctgc.m"
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
#line 731 "prog_ctgc.m"
  {
#line 731 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_25 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_34;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_45;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_54;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 0)));
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Pair_0_12, (MR_Integer) 1)));
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Da_10;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Db_11;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 0)));
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D1_8, (MR_Integer) 1)));
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_22;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_23;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_40;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_41;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_42;
#line 731 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_43;
#line 725 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_22;
#line 725 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv2_Var_42;

#line 725 "prog_ctgc.m"
    {
#line 725 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__TypeInfo_15_25, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_20)), &parse_tree__prog_ctgc__conv0_Var_22);
    }
#line 725 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_22 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_22);
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_structure_sharing_pair_4_p_0_1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_6));
#line 721 "prog_ctgc.m"
    }
#line 2671 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__TypeCtorInfo_12_34, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_21, &parse_tree__prog_ctgc__Sel_23);
    }
#line 727 "prog_ctgc.m"
    {
#line 727 "prog_ctgc.m"
      parse_tree__prog_ctgc__Da_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_22));
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Da_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_23));
#line 727 "prog_ctgc.m"
    }
#line 724 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 0)));
#line 724 "prog_ctgc.m"
    parse_tree__prog_ctgc__Sel0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__D2_9, (MR_Integer) 1)));
#line 2692 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_15_45 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 725 "prog_ctgc.m"
    {
#line 725 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__TypeInfo_15_45, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_40)), &parse_tree__prog_ctgc__conv2_Var_42);
    }
#line 725 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_42 = ((MR_Word) parse_tree__prog_ctgc__conv2_Var_42);
#line 2701 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__TypeCtorInfo_12_54, parse_tree__prog_ctgc__V_30_30, parse_tree__prog_ctgc__Sel0_41, &parse_tree__prog_ctgc__Sel_43);
    }
#line 727 "prog_ctgc.m"
    {
#line 727 "prog_ctgc.m"
      parse_tree__prog_ctgc__Db_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_42));
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Db_11, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_43));
#line 727 "prog_ctgc.m"
    }
#line 735 "prog_ctgc.m"
    {
#line 735 "prog_ctgc.m"
      MR_Word base;
#line 735 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_Pair_13 = base;
#line 735 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Da_10));
#line 735 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Db_11));
#line 735 "prog_ctgc.m"
    }
#line 731 "prog_ctgc.m"
  }
#line 142 "prog_ctgc.m"
}

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_3_f_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 721 "prog_ctgc.m"
{
#line 721 "prog_ctgc.m"
  {
#line 721 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 721 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 721 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 721 "prog_ctgc.m"
  }
#line 721 "prog_ctgc.m"
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
#line 723 "prog_ctgc.m"
  {
#line 723 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Data_8;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_19 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_28;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 0)));
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data0_7, (MR_Integer) 1)));
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_16;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_17;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_24_24;
#line 725 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_16;

#line 725 "prog_ctgc.m"
    {
#line 725 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__TypeInfo_15_19, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_14)), &parse_tree__prog_ctgc__conv0_Var_16);
    }
#line 725 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_16 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_16);
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_3_f_0_1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_24_24, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
#line 721 "prog_ctgc.m"
    }
#line 2822 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__TypeCtorInfo_12_28, parse_tree__prog_ctgc__V_24_24, parse_tree__prog_ctgc__Sel0_15, &parse_tree__prog_ctgc__Sel_17);
    }
#line 727 "prog_ctgc.m"
    {
#line 727 "prog_ctgc.m"
      parse_tree__prog_ctgc__Data_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_16));
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Data_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_17));
#line 727 "prog_ctgc.m"
    }
#line 723 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Data_8;
#line 723 "prog_ctgc.m"
  }
#line 139 "prog_ctgc.m"
}

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_datastruct_4_p_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 721 "prog_ctgc.m"
{
#line 721 "prog_ctgc.m"
  {
#line 721 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 721 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11;

#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11);
    }
#line 721 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv1_STATE_VARIABLE_UnitSelector_11));
#line 721 "prog_ctgc.m"
  }
#line 721 "prog_ctgc.m"
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
#line 723 "prog_ctgc.m"
  {
#line 723 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[1];
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_24;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 0)));
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__STATE_VARIABLE_Data_0_12, (MR_Integer) 1)));
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_10;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Sel_11;
#line 723 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_20_20;
#line 725 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__conv0_Var_10;

#line 725 "prog_ctgc.m"
    {
#line 725 "prog_ctgc.m"
      mercury__map__lookup_3_p_0(parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__TypeInfo_15_15, parse_tree__prog_ctgc__Dict_5, ((MR_Box) (parse_tree__prog_ctgc__Var0_8)), &parse_tree__prog_ctgc__conv0_Var_10);
    }
#line 725 "prog_ctgc.m"
    parse_tree__prog_ctgc__Var_10 = ((MR_Word) parse_tree__prog_ctgc__conv0_Var_10);
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_datastruct_4_p_0_1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_20_20, 3) = ((MR_Box) (parse_tree__prog_ctgc__Subst_6));
#line 721 "prog_ctgc.m"
    }
#line 2931 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__TypeCtorInfo_12_24, parse_tree__prog_ctgc__V_20_20, parse_tree__prog_ctgc__Sel0_9, &parse_tree__prog_ctgc__Sel_11);
    }
#line 727 "prog_ctgc.m"
    {
#line 727 "prog_ctgc.m"
      MR_Word base;
#line 727 "prog_ctgc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_Data_13 = base;
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Var_10));
#line 727 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__Sel_11));
#line 727 "prog_ctgc.m"
    }
#line 723 "prog_ctgc.m"
  }
#line 136 "prog_ctgc.m"
}

#line 721 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__rename_selector_3_p_0_1(
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 721 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 721 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 721 "prog_ctgc.m"
{
#line 721 "prog_ctgc.m"
  {
#line 721 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 721 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11;

#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__rename_unit_selector_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11);
    }
#line 721 "prog_ctgc.m"
    *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_STATE_VARIABLE_UnitSelector_11));
#line 721 "prog_ctgc.m"
  }
#line 721 "prog_ctgc.m"
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
#line 720 "prog_ctgc.m"
  {
#line 720 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 720 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeCtorInfo_12_12;
#line 720 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_8_8;

#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[2]));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 1) = ((MR_Box) (parse_tree__prog_ctgc__rename_selector_3_p_0_1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_8_8, 3) = ((MR_Box) (parse_tree__prog_ctgc__TypeSubst_4));
#line 721 "prog_ctgc.m"
    }
#line 3021 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 721 "prog_ctgc.m"
    {
#line 721 "prog_ctgc.m"
      mercury__list__map_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__TypeCtorInfo_12_12, parse_tree__prog_ctgc__V_8_8, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_0_6, parse_tree__prog_ctgc__STATE_VARIABLE_Selector_7);
#line 721 "prog_ctgc.m"
      return;
    }
#line 720 "prog_ctgc.m"
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
#line 713 "prog_ctgc.m"
  {
#line 713 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 713 "prog_ctgc.m"
    if (((MR_tag((MR_Word) parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10)) == (MR_mktag((MR_Integer) 0))))
#line 713 "prog_ctgc.m"
      *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10;
#line 713 "prog_ctgc.m"
    else
#line 715 "prog_ctgc.m"
      {
#line 715 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Type0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_0_10, (MR_Integer) 0)));
#line 715 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Type_9;

#line 716 "prog_ctgc.m"
        {
#line 716 "prog_ctgc.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_ctgc__Subst_4, parse_tree__prog_ctgc__Type0_8, &parse_tree__prog_ctgc__Type_9);
        }
#line 717 "prog_ctgc.m"
        {
#line 717 "prog_ctgc.m"
          MR_Word base;
#line 717 "prog_ctgc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_ctgc.m"
          *parse_tree__prog_ctgc__STATE_VARIABLE_UnitSelector_11 = base;
#line 717 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Type_9));
#line 717 "prog_ctgc.m"
        }
#line 715 "prog_ctgc.m"
      }
#line 713 "prog_ctgc.m"
  }
#line 131 "prog_ctgc.m"
}

#line 672 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1(
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 672 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 672 "prog_ctgc.m"
{
#line 672 "prog_ctgc.m"
  {
#line 672 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 672 "prog_ctgc.m"
    {
#line 672 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 672 "prog_ctgc.m"
      return;
    }
#line 672 "prog_ctgc.m"
  }
#line 672 "prog_ctgc.m"
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
#line 696 "prog_ctgc.m"
  {
#line 696 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 696 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "prog_ctgc.m"
      {
#line 697 "prog_ctgc.m"
        {
#line 697 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "not_available");
#line 697 "prog_ctgc.m"
          return;
        }
#line 696 "prog_ctgc.m"
      }
#line 696 "prog_ctgc.m"
    else
#line 700 "prog_ctgc.m"
      {
#line 700 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 701 "prog_ctgc.m"
        {
#line 701 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
#line 680 "prog_ctgc.m"
        {
#line 680 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 684 "prog_ctgc.m"
        if ((parse_tree__prog_ctgc__ReuseDomain_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "prog_ctgc.m"
          {
#line 683 "prog_ctgc.m"
            {
#line 683 "prog_ctgc.m"
              mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
            }
#line 682 "prog_ctgc.m"
          }
#line 684 "prog_ctgc.m"
        else
#line 684 "prog_ctgc.m"
          if ((parse_tree__prog_ctgc__ReuseDomain_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 685 "prog_ctgc.m"
            {
#line 686 "prog_ctgc.m"
              {
#line 686 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
              }
#line 685 "prog_ctgc.m"
            }
#line 684 "prog_ctgc.m"
          else
#line 688 "prog_ctgc.m"
            {
#line 688 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__ReuseConditions_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_15, (MR_Integer) 0)));
#line 688 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_55_55;

#line 689 "prog_ctgc.m"
              {
#line 689 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
              }
#line 672 "prog_ctgc.m"
              {
#line 672 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_p_0_1));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_1));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_55_55, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_2));
#line 672 "prog_ctgc.m"
              }
#line 671 "prog_ctgc.m"
              {
#line 671 "prog_ctgc.m"
                mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_36, (MR_String) ", ", parse_tree__prog_ctgc__V_55_55);
              }
#line 692 "prog_ctgc.m"
              {
#line 692 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 688 "prog_ctgc.m"
            }
#line 694 "prog_ctgc.m"
        {
#line 694 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "");
        }
#line 704 "prog_ctgc.m"
        {
#line 704 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 704 "prog_ctgc.m"
          return;
        }
#line 700 "prog_ctgc.m"
      }
#line 696 "prog_ctgc.m"
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
#line 636 "prog_ctgc.m"
  {
#line 636 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 636 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "prog_ctgc.m"
      {
#line 637 "prog_ctgc.m"
        {
#line 637 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "not_available");
#line 637 "prog_ctgc.m"
          return;
        }
#line 636 "prog_ctgc.m"
      }
#line 636 "prog_ctgc.m"
    else
#line 639 "prog_ctgc.m"
      {
#line 639 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 640 "prog_ctgc.m"
        {
#line 640 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "yes(");
        }
#line 641 "prog_ctgc.m"
        {
#line 641 "prog_ctgc.m"
          parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0(parse_tree__prog_ctgc__ProgVarSet_1, parse_tree__prog_ctgc__TypeVarSet_2, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_ctgc__SharingAs_15);
        }
#line 643 "prog_ctgc.m"
        {
#line 643 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 643 "prog_ctgc.m"
          return;
        }
#line 639 "prog_ctgc.m"
      }
#line 636 "prog_ctgc.m"
  }
#line 120 "prog_ctgc.m"
}

#line 672 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0_1(
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 672 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 672 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 672 "prog_ctgc.m"
{
#line 672 "prog_ctgc.m"
  {
#line 672 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 672 "prog_ctgc.m"
    {
#line 672 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_reuse_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 672 "prog_ctgc.m"
      return;
    }
#line 672 "prog_ctgc.m"
  }
#line 672 "prog_ctgc.m"
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
#line 645 "prog_ctgc.m"
  {
#line 645 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 645 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "prog_ctgc.m"
      {
#line 646 "prog_ctgc.m"
        {
#line 646 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "% no reuse information available.\n");
#line 646 "prog_ctgc.m"
          return;
        }
#line 645 "prog_ctgc.m"
      }
#line 645 "prog_ctgc.m"
    else
#line 647 "prog_ctgc.m"
      {
#line 647 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ReuseAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 680 "prog_ctgc.m"
        {
#line 680 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "%\t ");
        }
#line 684 "prog_ctgc.m"
        if ((parse_tree__prog_ctgc__ReuseAs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "prog_ctgc.m"
          {
#line 683 "prog_ctgc.m"
            {
#line 683 "prog_ctgc.m"
              mercury__io__write_string_3_p_0((MR_String) "has_no_reuse");
            }
#line 682 "prog_ctgc.m"
          }
#line 684 "prog_ctgc.m"
        else
#line 684 "prog_ctgc.m"
          if ((parse_tree__prog_ctgc__ReuseAs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 685 "prog_ctgc.m"
            {
#line 686 "prog_ctgc.m"
              {
#line 686 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_only_unconditional_reuse");
              }
#line 685 "prog_ctgc.m"
            }
#line 684 "prog_ctgc.m"
          else
#line 688 "prog_ctgc.m"
            {
#line 688 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__ReuseConditions_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseAs_15, (MR_Integer) 0)));
#line 688 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_51_51;

#line 689 "prog_ctgc.m"
              {
#line 689 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "has_conditional_reuse([");
              }
#line 672 "prog_ctgc.m"
              {
#line 672 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[2]));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 1) = ((MR_Box) (parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0_1));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_1));
#line 672 "prog_ctgc.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_51_51, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_2));
#line 672 "prog_ctgc.m"
              }
#line 671 "prog_ctgc.m"
              {
#line 671 "prog_ctgc.m"
                mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0, parse_tree__prog_ctgc__ReuseConditions_32, (MR_String) ", \n%\t ", parse_tree__prog_ctgc__V_51_51);
              }
#line 692 "prog_ctgc.m"
              {
#line 692 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 688 "prog_ctgc.m"
            }
#line 694 "prog_ctgc.m"
        {
#line 694 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 694 "prog_ctgc.m"
          return;
        }
#line 647 "prog_ctgc.m"
      }
#line 645 "prog_ctgc.m"
  }
#line 117 "prog_ctgc.m"
}

#line 616 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0_1(
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 616 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 616 "prog_ctgc.m"
{
#line 616 "prog_ctgc.m"
  {
#line 616 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 616 "prog_ctgc.m"
    {
#line 616 "prog_ctgc.m"
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__616__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 616 "prog_ctgc.m"
      return;
    }
#line 616 "prog_ctgc.m"
  }
#line 616 "prog_ctgc.m"
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
#line 629 "prog_ctgc.m"
  {
#line 629 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 629 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "prog_ctgc.m"
      {
#line 630 "prog_ctgc.m"
        {
#line 630 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "% no sharing information available.\n");
#line 630 "prog_ctgc.m"
          return;
        }
#line 629 "prog_ctgc.m"
      }
#line 629 "prog_ctgc.m"
    else
#line 632 "prog_ctgc.m"
      {
#line 632 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingAs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__HeadVar__3_3, (MR_Integer) 0)));

#line 607 "prog_ctgc.m"
        {
#line 607 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "%\t ");
        }
#line 619 "prog_ctgc.m"
        if ((parse_tree__prog_ctgc__SharingAs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "prog_ctgc.m"
          {
#line 621 "prog_ctgc.m"
            {
#line 621 "prog_ctgc.m"
              mercury__io__write_string_3_p_0((MR_String) "bottom");
            }
#line 620 "prog_ctgc.m"
          }
#line 619 "prog_ctgc.m"
        else
#line 619 "prog_ctgc.m"
          if (((MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_15)) == (MR_mktag((MR_Integer) 1))))
#line 623 "prog_ctgc.m"
            {
#line 623 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__SharingPairs_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_15, (MR_Integer) 0)));

#line 624 "prog_ctgc.m"
              {
#line 624 "prog_ctgc.m"
                parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_1, parse_tree__prog_ctgc__TypeVarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) "\n%\t", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_37);
              }
#line 623 "prog_ctgc.m"
            }
#line 619 "prog_ctgc.m"
          else
#line 609 "prog_ctgc.m"
            {
#line 609 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_54;
#line 609 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__Msgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_15, (MR_Integer) 0)));
#line 609 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_46_46;

#line 615 "prog_ctgc.m"
              {
#line 615 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "top([");
              }
#line 3574 "parse_tree.prog_ctgc.c"
              parse_tree__prog_ctgc__TypeCtorInfo_40_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
#line 616 "prog_ctgc.m"
              {
#line 616 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_46_46 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_54, parse_tree__prog_ctgc__Msgs_36);
              }
#line 616 "prog_ctgc.m"
              {
#line 616 "prog_ctgc.m"
                mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_54, parse_tree__prog_ctgc__V_46_46, (MR_String) "\n%\t", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[3]);
              }
#line 617 "prog_ctgc.m"
              {
#line 617 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 609 "prog_ctgc.m"
            }
#line 627 "prog_ctgc.m"
        {
#line 627 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 627 "prog_ctgc.m"
          return;
        }
#line 632 "prog_ctgc.m"
      }
#line 629 "prog_ctgc.m"
  }
#line 114 "prog_ctgc.m"
}

#line 616 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_domain_7_p_0_1(
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 616 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 616 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 616 "prog_ctgc.m"
{
#line 616 "prog_ctgc.m"
  {
#line 616 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 616 "prog_ctgc.m"
    {
#line 616 "prog_ctgc.m"
      parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__616__1_3_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 616 "prog_ctgc.m"
      return;
    }
#line 616 "prog_ctgc.m"
  }
#line 616 "prog_ctgc.m"
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
#line 597 "prog_ctgc.m"
  {
#line 597 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 607 "prog_ctgc.m"
    {
#line 607 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "");
    }
#line 619 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__SharingAs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "prog_ctgc.m"
      {
#line 621 "prog_ctgc.m"
        {
#line 621 "prog_ctgc.m"
          mercury__io__write_string_3_p_0((MR_String) "bottom");
        }
#line 620 "prog_ctgc.m"
      }
#line 619 "prog_ctgc.m"
    else
#line 619 "prog_ctgc.m"
      if (((MR_tag((MR_Word) parse_tree__prog_ctgc__SharingAs_12)) == (MR_mktag((MR_Integer) 1))))
#line 623 "prog_ctgc.m"
        {
#line 623 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__SharingPairs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

#line 624 "prog_ctgc.m"
          {
#line 624 "prog_ctgc.m"
            parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_8, parse_tree__prog_ctgc__TypeVarSet_9, parse_tree__prog_ctgc__MaybeThreshold_11, (MR_String) "[", (MR_String) ", ", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_32);
          }
#line 623 "prog_ctgc.m"
        }
#line 619 "prog_ctgc.m"
      else
#line 609 "prog_ctgc.m"
        {
#line 609 "prog_ctgc.m"
          MR_Word parse_tree__prog_ctgc__Msgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs_12, (MR_Integer) 0)));

#line 613 "prog_ctgc.m"
          if ((parse_tree__prog_ctgc__VerboseTop_10 == (MR_Integer) 0))
#line 611 "prog_ctgc.m"
            {
#line 612 "prog_ctgc.m"
              {
#line 612 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "top");
              }
#line 611 "prog_ctgc.m"
            }
#line 613 "prog_ctgc.m"
          else
#line 614 "prog_ctgc.m"
            {
#line 614 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__TypeCtorInfo_40_49;
#line 614 "prog_ctgc.m"
              MR_Word parse_tree__prog_ctgc__V_41_41;

#line 615 "prog_ctgc.m"
              {
#line 615 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "top([");
              }
#line 3721 "parse_tree.prog_ctgc.c"
              parse_tree__prog_ctgc__TypeCtorInfo_40_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0;
#line 616 "prog_ctgc.m"
              {
#line 616 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_41_41 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__Msgs_31);
              }
#line 616 "prog_ctgc.m"
              {
#line 616 "prog_ctgc.m"
                mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeCtorInfo_40_49, parse_tree__prog_ctgc__V_41_41, (MR_String) ", ", (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[2]);
              }
#line 617 "prog_ctgc.m"
              {
#line 617 "prog_ctgc.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 614 "prog_ctgc.m"
            }
#line 609 "prog_ctgc.m"
        }
#line 627 "prog_ctgc.m"
    {
#line 627 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "");
#line 627 "prog_ctgc.m"
      return;
    }
#line 597 "prog_ctgc.m"
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
#line 592 "prog_ctgc.m"
  {
#line 592 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;

#line 593 "prog_ctgc.m"
    {
#line 593 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_9_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "[", (MR_String) ",", (MR_String) "]", parse_tree__prog_ctgc__SharingPairs_8);
#line 593 "prog_ctgc.m"
      return;
    }
#line 592 "prog_ctgc.m"
  }
#line 91 "prog_ctgc.m"
}

#line 582 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1(
#line 582 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 582 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 582 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 582 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 582 "prog_ctgc.m"
{
#line 582 "prog_ctgc.m"
  {
#line 582 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 582 "prog_ctgc.m"
    {
#line 582 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_structure_sharing_pair_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 582 "prog_ctgc.m"
      return;
    }
#line 582 "prog_ctgc.m"
  }
#line 582 "prog_ctgc.m"
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
#line 566 "prog_ctgc.m"
  {
#line 566 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 566 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__TypeInfo_35_35;
#line 566 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_25_25;

#line 580 "prog_ctgc.m"
    {
#line 580 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Start_13);
    }
#line 582 "prog_ctgc.m"
    {
#line 582 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 582 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[1]));
#line 582 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_structure_sharing_9_p_0_1));
#line 582 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 582 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_10));
#line 582 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_25_25, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_11));
#line 582 "prog_ctgc.m"
    }
#line 3861 "parse_tree.prog_ctgc.c"
    parse_tree__prog_ctgc__TypeInfo_35_35 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0];
#line 3863 "parse_tree.prog_ctgc.c"
    if ((parse_tree__prog_ctgc__MaybeLimit_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "prog_ctgc.m"
      {
#line 581 "prog_ctgc.m"
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
#line 570 "prog_ctgc.m"
        MR_Integer parse_tree__prog_ctgc__V_23_23;

#line 569 "prog_ctgc.m"
        {
#line 569 "prog_ctgc.m"
          mercury__list__take_upto_3_p_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__Limit_18, parse_tree__prog_ctgc__SharingPairs0_16, &parse_tree__prog_ctgc__SharingPairs_36);
        }
#line 581 "prog_ctgc.m"
        {
#line 581 "prog_ctgc.m"
          mercury__io__write_list_5_p_0(parse_tree__prog_ctgc__TypeInfo_35_35, parse_tree__prog_ctgc__SharingPairs_36, parse_tree__prog_ctgc__Sep_14, parse_tree__prog_ctgc__V_25_25);
        }
#line 570 "prog_ctgc.m"
        {
#line 570 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_23_23 = mercury__list__length_1_f_0(parse_tree__prog_ctgc__TypeInfo_31_31, parse_tree__prog_ctgc__SharingPairs0_16);
        }
#line 570 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__Limit_18 >= parse_tree__prog_ctgc__V_23_23);
#line 3900 "parse_tree.prog_ctgc.c"
        if (parse_tree__prog_ctgc__succeeded)
#line 588 "prog_ctgc.m"
          {
#line 588 "prog_ctgc.m"
          }
#line 3906 "parse_tree.prog_ctgc.c"
        else
#line 3908 "parse_tree.prog_ctgc.c"
          {
#line 585 "prog_ctgc.m"
            {
#line 585 "prog_ctgc.m"
              mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__Sep_14);
            }
#line 586 "prog_ctgc.m"
            {
#line 586 "prog_ctgc.m"
              mercury__io__write_string_3_p_0((MR_String) "...");
            }
#line 3920 "parse_tree.prog_ctgc.c"
          }
#line 3922 "parse_tree.prog_ctgc.c"
      }
#line 590 "prog_ctgc.m"
    {
#line 590 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__End_15);
#line 590 "prog_ctgc.m"
      return;
    }
#line 566 "prog_ctgc.m"
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
#line 557 "prog_ctgc.m"
  {
#line 557 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 557 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 0)));
#line 557 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__D2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_8, (MR_Integer) 1)));

#line 559 "prog_ctgc.m"
    {
#line 559 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "pair(");
    }
#line 560 "prog_ctgc.m"
    {
#line 560 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D1_10);
    }
#line 561 "prog_ctgc.m"
    {
#line 561 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 562 "prog_ctgc.m"
    {
#line 562 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__D2_11);
    }
#line 563 "prog_ctgc.m"
    {
#line 563 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 563 "prog_ctgc.m"
      return;
    }
#line 557 "prog_ctgc.m"
  }
#line 70 "prog_ctgc.m"
}

#line 553 "prog_ctgc.m"
static void MR_CALL 
parse_tree__prog_ctgc__print_datastructs_5_p_0_1(
#line 553 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 553 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 553 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_2,
#line 553 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_3)
#line 553 "prog_ctgc.m"
{
#line 553 "prog_ctgc.m"
  {
#line 553 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;

#line 553 "prog_ctgc.m"
    {
#line 553 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_datastruct_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
#line 553 "prog_ctgc.m"
      return;
    }
#line 553 "prog_ctgc.m"
  }
#line 553 "prog_ctgc.m"
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
#line 551 "prog_ctgc.m"
  {
#line 551 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 551 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_15_15;

#line 552 "prog_ctgc.m"
    {
#line 552 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 553 "prog_ctgc.m"
    {
#line 553 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 553 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_6[0]));
#line 553 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_datastructs_5_p_0_1));
#line 553 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 553 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 3) = ((MR_Box) (parse_tree__prog_ctgc__ProgVarSet_6));
#line 553 "prog_ctgc.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, 4) = ((MR_Box) (parse_tree__prog_ctgc__TypeVarSet_7));
#line 553 "prog_ctgc.m"
    }
#line 553 "prog_ctgc.m"
    {
#line 553 "prog_ctgc.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__Datastructs_8, (MR_String) ", ", parse_tree__prog_ctgc__V_15_15);
    }
#line 555 "prog_ctgc.m"
    {
#line 555 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
#line 555 "prog_ctgc.m"
      return;
    }
#line 551 "prog_ctgc.m"
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
#line 545 "prog_ctgc.m"
  {
#line 545 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 545 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__VarName_10;
#line 545 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
#line 545 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 545 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_17_17;
#line 545 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_21_21;
#line 546 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
#line 548 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_26_26;

#line 546 "prog_ctgc.m"
    {
#line 546 "prog_ctgc.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__ProgVarSet_6, parse_tree__prog_ctgc__V_13_13, &parse_tree__prog_ctgc__VarName_10);
    }
#line 547 "prog_ctgc.m"
    {
#line 547 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 0) = ((MR_Box) (parse_tree__prog_ctgc__VarName_10));
#line 547 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[6])));
#line 547 "prog_ctgc.m"
    }
#line 547 "prog_ctgc.m"
    {
#line 547 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 0) = ((MR_Box) ((MR_String) "cel("));
#line 547 "prog_ctgc.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_14_14, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_17_17));
#line 547 "prog_ctgc.m"
    }
#line 547 "prog_ctgc.m"
    {
#line 547 "prog_ctgc.m"
      mercury__io__write_strings_3_p_0(parse_tree__prog_ctgc__V_14_14);
    }
#line 548 "prog_ctgc.m"
    parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 0)));
#line 548 "prog_ctgc.m"
    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__DataStruct_8, (MR_Integer) 1)));
#line 548 "prog_ctgc.m"
    {
#line 548 "prog_ctgc.m"
      parse_tree__prog_ctgc__print_selector_4_p_0(parse_tree__prog_ctgc__TypeVarSet_7, parse_tree__prog_ctgc__V_21_21);
    }
#line 549 "prog_ctgc.m"
    {
#line 549 "prog_ctgc.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 549 "prog_ctgc.m"
      return;
    }
#line 545 "prog_ctgc.m"
  }
#line 64 "prog_ctgc.m"
}

#line 520 "prog_ctgc.m"
static MR_Box MR_CALL 
parse_tree__prog_ctgc__print_selector_4_p_0_1(
#line 520 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 520 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1)
#line 520 "prog_ctgc.m"
{
#line 520 "prog_ctgc.m"
  {
#line 520 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__wrapper_arg_2;
#line 520 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 520 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__conv0_HeadVar__3_3;

#line 520 "prog_ctgc.m"
    {
#line 520 "prog_ctgc.m"
      parse_tree__prog_ctgc__conv0_HeadVar__3_3 = parse_tree__prog_ctgc__unit_selector_to_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1));
    }
#line 520 "prog_ctgc.m"
    parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_HeadVar__3_3));
#line 520 "prog_ctgc.m"
    return parse_tree__prog_ctgc__wrapper_arg_2;
#line 520 "prog_ctgc.m"
  }
#line 520 "prog_ctgc.m"
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
#line 542 "prog_ctgc.m"
  {
#line 542 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 542 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_10_10;

#line 516 "prog_ctgc.m"
    if ((parse_tree__prog_ctgc__Selector_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "prog_ctgc.m"
      parse_tree__prog_ctgc__V_10_10 = (MR_String) "[]";
#line 516 "prog_ctgc.m"
    else
#line 519 "prog_ctgc.m"
      {
#line 519 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SelectorStrings_17;
#line 519 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_18_18;
#line 519 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_19_19;
#line 519 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_21_21;
#line 519 "prog_ctgc.m"
        MR_String parse_tree__prog_ctgc__V_22_22;

#line 520 "prog_ctgc.m"
        {
#line 520 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 520 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 0) = ((MR_Box) (&parse_tree__prog_ctgc_scalar_common_5[0]));
#line 520 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__print_selector_4_p_0_1));
#line 520 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 520 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_18_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__TVarSet_5));
#line 520 "prog_ctgc.m"
        }
#line 520 "prog_ctgc.m"
        {
#line 520 "prog_ctgc.m"
          parse_tree__prog_ctgc__SelectorStrings_17 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_ctgc__V_18_18, parse_tree__prog_ctgc__Selector_6);
        }
#line 522 "prog_ctgc.m"
        {
#line 522 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_22_22 = mercury__string__join_list_2_f_0((MR_String) ",", parse_tree__prog_ctgc__SelectorStrings_17);
        }
#line 522 "prog_ctgc.m"
        {
#line 522 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_22_22));
#line 522 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[5])));
#line 522 "prog_ctgc.m"
        }
#line 522 "prog_ctgc.m"
        {
#line 522 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 0) = ((MR_Box) ((MR_String) "["));
#line 522 "prog_ctgc.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_19_19, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_21_21));
#line 522 "prog_ctgc.m"
        }
#line 522 "prog_ctgc.m"
        {
#line 522 "prog_ctgc.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_ctgc__V_19_19, &parse_tree__prog_ctgc__V_10_10);
        }
#line 519 "prog_ctgc.m"
      }
#line 543 "prog_ctgc.m"
    {
#line 543 "prog_ctgc.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_ctgc__V_10_10);
#line 543 "prog_ctgc.m"
      return;
    }
#line 542 "prog_ctgc.m"
  }
#line 62 "prog_ctgc.m"
}

#line 463 "prog_ctgc.m"
static MR_bool MR_CALL 
parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0_1(
#line 463 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__closure_arg,
#line 463 "prog_ctgc.m"
  MR_Box parse_tree__prog_ctgc__wrapper_arg_1,
#line 463 "prog_ctgc.m"
  MR_Box * parse_tree__prog_ctgc__wrapper_arg_2)
#line 463 "prog_ctgc.m"
{
#line 463 "prog_ctgc.m"
  {
#line 463 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded;
#line 463 "prog_ctgc.m"
    MR_Box parse_tree__prog_ctgc__closure = parse_tree__prog_ctgc__closure_arg;
#line 463 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__conv0_SharingPair_4;

#line 463 "prog_ctgc.m"
    {
#line 463 "prog_ctgc.m"
      parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_p_0(((MR_Word) parse_tree__prog_ctgc__wrapper_arg_1), &parse_tree__prog_ctgc__conv0_SharingPair_4);
    }
#line 463 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 463 "prog_ctgc.m"
      {
#line 463 "prog_ctgc.m"
        *parse_tree__prog_ctgc__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_ctgc__conv0_SharingPair_4));
#line 463 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 463 "prog_ctgc.m"
      }
#line 463 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 463 "prog_ctgc.m"
  }
#line 463 "prog_ctgc.m"
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
#line 426 "prog_ctgc.m"
  {
#line 426 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 426 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_62_62;
#line 426 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_63_63;
#line 426 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_64_64;
#line 426 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__V_70_70;

#line 426 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 426 "prog_ctgc.m"
      {
#line 426 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 0)));
#line 426 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 1)));
#line 426 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_5, (MR_Integer) 2)));
#line 426 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 426 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 426 "prog_ctgc.m"
          {
#line 426 "prog_ctgc.m"
            parse_tree__prog_ctgc__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_64_64, (MR_Integer) 0)));
#line 426 "prog_ctgc.m"
            if ((parse_tree__prog_ctgc__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "no_sharing") == 0))
#line 426 "prog_ctgc.m"
                {
#line 427 "prog_ctgc.m"
                  *parse_tree__prog_ctgc__UserSharing_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_ctgc_scalar_common_1[4]);
#line 426 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 426 "prog_ctgc.m"
                }
#line 426 "prog_ctgc.m"
              else
#line 426 "prog_ctgc.m"
                if ((strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "unknown_sharing") == 0))
#line 429 "prog_ctgc.m"
                  {
#line 429 "prog_ctgc.m"
                    MR_String parse_tree__prog_ctgc__ContextString_9;
#line 429 "prog_ctgc.m"
                    MR_String parse_tree__prog_ctgc__Msg_10;
#line 429 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__Reason_11;
#line 429 "prog_ctgc.m"
                    MR_String parse_tree__prog_ctgc__V_41_41;
#line 429 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_43_43;
#line 429 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_44_44;

#line 430 "prog_ctgc.m"
                    {
#line 430 "prog_ctgc.m"
                      parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_ctgc__V_62_62, &parse_tree__prog_ctgc__ContextString_9);
                    }
#line 431 "prog_ctgc.m"
                    {
#line 431 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_41_41 = mercury__string__f_43_43_2_f_0(parse_tree__prog_ctgc__ContextString_9, (MR_String) ")");
                    }
#line 431 "prog_ctgc.m"
                    {
#line 431 "prog_ctgc.m"
                      parse_tree__prog_ctgc__Msg_10 = mercury__string__f_43_43_2_f_0((MR_String) "user declared top(", parse_tree__prog_ctgc__V_41_41);
                    }
#line 432 "prog_ctgc.m"
                    {
#line 432 "prog_ctgc.m"
                      parse_tree__prog_ctgc__Reason_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__Reason_11, 0) = ((MR_Box) (parse_tree__prog_ctgc__Msg_10));
#line 432 "prog_ctgc.m"
                    }
#line 434 "prog_ctgc.m"
                    {
#line 434 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_44_44 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (parse_tree__prog_ctgc__Reason_11)));
                    }
#line 433 "prog_ctgc.m"
                    {
#line 433 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__V_43_43, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_44_44));
#line 433 "prog_ctgc.m"
                    }
#line 433 "prog_ctgc.m"
                    {
#line 433 "prog_ctgc.m"
                      MR_Word base;
#line 433 "prog_ctgc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_ctgc.m"
                      *parse_tree__prog_ctgc__UserSharing_6 = base;
#line 433 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_43_43));
#line 433 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "prog_ctgc.m"
                    }
#line 429 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 429 "prog_ctgc.m"
                  }
#line 426 "prog_ctgc.m"
                else
#line 426 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 426 "prog_ctgc.m"
            else
#line 437 "prog_ctgc.m"
              {
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypesTerm_12;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__UserSharingTerm_13;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__MaybeUserTypes_19;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__Sharing_22;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_27_27;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_28_28;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_66_66;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_67_67;
#line 437 "prog_ctgc.m"
                MR_String parse_tree__prog_ctgc__V_69_69;
#line 437 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__SharingPairTerms_73;
#line 439 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_65_65;

#line 436 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__V_70_70, (MR_String) "sharing") == 0);
#line 437 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 437 "prog_ctgc.m"
                  {
#line 437 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypesTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_63_63, (MR_Integer) 0)));
#line 437 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_63_63, (MR_Integer) 1)));
#line 437 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 437 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 437 "prog_ctgc.m"
                      {
#line 437 "prog_ctgc.m"
                        parse_tree__prog_ctgc__UserSharingTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 0)));
#line 437 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_27_27, (MR_Integer) 1)));
#line 437 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 437 "prog_ctgc.m"
                          {
#line 439 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__TypesTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 439 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 439 "prog_ctgc.m"
                              {
#line 439 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 0)));
#line 439 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 1)));
#line 439 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__TypesTerm_12, (MR_Integer) 2)));
#line 439 "prog_ctgc.m"
                                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_67_67)) == (MR_mktag((MR_Integer) 0)));
#line 439 "prog_ctgc.m"
                                if (parse_tree__prog_ctgc__succeeded)
#line 439 "prog_ctgc.m"
                                  {
#line 439 "prog_ctgc.m"
                                    parse_tree__prog_ctgc__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_67_67, (MR_Integer) 0)));
#line 445 "prog_ctgc.m"
                                    if ((strcmp(parse_tree__prog_ctgc__V_69_69, (MR_String) "no") == 0))
#line 447 "prog_ctgc.m"
                                      {
#line 447 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 447 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 447 "prog_ctgc.m"
                                      }
#line 445 "prog_ctgc.m"
                                    else
#line 445 "prog_ctgc.m"
                                      if ((strcmp(parse_tree__prog_ctgc__V_69_69, (MR_String) "yes") == 0))
#line 439 "prog_ctgc.m"
                                        {
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_59_59;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__TypeInfo_60_60;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__TypeCtorInfo_61_61;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__Types_17;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__TypeVars_18;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__V_33_33;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__V_35_35;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__V_36_36;
#line 439 "prog_ctgc.m"
                                          MR_Word parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53;

#line 440 "prog_ctgc.m"
                                          {
#line 440 "prog_ctgc.m"
                                            parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_ctgc__V_66_66, &parse_tree__prog_ctgc__Types_17);
                                          }
#line 439 "prog_ctgc.m"
                                          if (parse_tree__prog_ctgc__succeeded)
#line 439 "prog_ctgc.m"
                                            {
#line 4575 "parse_tree.prog_ctgc.c"
                                              parse_tree__prog_ctgc__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 441 "prog_ctgc.m"
                                              {
#line 441 "prog_ctgc.m"
                                                mercury__term__vars_list_2_p_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__V_66_66, &parse_tree__prog_ctgc__TypeVars_18);
                                              }
#line 4582 "parse_tree.prog_ctgc.c"
                                              parse_tree__prog_ctgc__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_ctgc_scalar_common_1[0];
#line 442 "prog_ctgc.m"
                                              {
#line 442 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__V_33_33 = mercury__set__list_to_set_1_f_0(parse_tree__prog_ctgc__TypeInfo_60_60, parse_tree__prog_ctgc__TypeVars_18);
                                              }
#line 442 "prog_ctgc.m"
                                              {
#line 442 "prog_ctgc.m"
                                                mercury__varset__select_3_p_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__V_33_33, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_0_23, &parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53);
                                              }
#line 4594 "parse_tree.prog_ctgc.c"
                                              parse_tree__prog_ctgc__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 444 "prog_ctgc.m"
                                              {
#line 444 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__V_36_36 = mercury__varset__coerce_1_f_0(parse_tree__prog_ctgc__TypeCtorInfo_59_59, parse_tree__prog_ctgc__TypeCtorInfo_61_61, parse_tree__prog_ctgc__STATE_VARIABLE_Varset_34_53);
                                              }
#line 443 "prog_ctgc.m"
                                              {
#line 443 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_ctgc.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 0) = ((MR_Box) (parse_tree__prog_ctgc__Types_17));
#line 443 "prog_ctgc.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_35_35, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
#line 443 "prog_ctgc.m"
                                              }
#line 443 "prog_ctgc.m"
                                              {
#line 443 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__MaybeUserTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_ctgc.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__MaybeUserTypes_19, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_35_35));
#line 443 "prog_ctgc.m"
                                              }
#line 443 "prog_ctgc.m"
                                              parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 439 "prog_ctgc.m"
                                            }
#line 439 "prog_ctgc.m"
                                        }
#line 445 "prog_ctgc.m"
                                      else
#line 445 "prog_ctgc.m"
                                        parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 437 "prog_ctgc.m"
                                    if (parse_tree__prog_ctgc__succeeded)
#line 437 "prog_ctgc.m"
                                      {
#line 457 "prog_ctgc.m"
                                        {
#line 457 "prog_ctgc.m"
                                          parse_tree__prog_ctgc__succeeded = parse_tree__prog_ctgc__get_list_term_arguments_2_p_0(parse_tree__prog_ctgc__UserSharingTerm_13, &parse_tree__prog_ctgc__SharingPairTerms_73);
                                        }
#line 437 "prog_ctgc.m"
                                        if (parse_tree__prog_ctgc__succeeded)
#line 437 "prog_ctgc.m"
                                          {
#line 461 "prog_ctgc.m"
                                            if ((parse_tree__prog_ctgc__SharingPairTerms_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "prog_ctgc.m"
                                              {
#line 460 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 460 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 460 "prog_ctgc.m"
                                              }
#line 461 "prog_ctgc.m"
                                            else
#line 462 "prog_ctgc.m"
                                              {
#line 462 "prog_ctgc.m"
                                                MR_Word parse_tree__prog_ctgc__SharingPairs_76;

#line 463 "prog_ctgc.m"
                                                {
#line 463 "prog_ctgc.m"
                                                  parse_tree__prog_ctgc__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_ctgc_scalar_common_1[3], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[0], (MR_Word) &parse_tree__prog_ctgc_scalar_common_2[1], parse_tree__prog_ctgc__SharingPairTerms_73, &parse_tree__prog_ctgc__SharingPairs_76);
                                                }
#line 462 "prog_ctgc.m"
                                                if (parse_tree__prog_ctgc__succeeded)
#line 462 "prog_ctgc.m"
                                                  {
#line 465 "prog_ctgc.m"
                                                    {
#line 465 "prog_ctgc.m"
                                                      parse_tree__prog_ctgc__Sharing_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_ctgc.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Sharing_22, 0) = ((MR_Box) (parse_tree__prog_ctgc__SharingPairs_76));
#line 465 "prog_ctgc.m"
                                                    }
#line 465 "prog_ctgc.m"
                                                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 462 "prog_ctgc.m"
                                                  }
#line 462 "prog_ctgc.m"
                                              }
#line 437 "prog_ctgc.m"
                                            if (parse_tree__prog_ctgc__succeeded)
#line 437 "prog_ctgc.m"
                                              {
#line 450 "prog_ctgc.m"
                                                {
#line 450 "prog_ctgc.m"
                                                  MR_Word base;
#line 450 "prog_ctgc.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "prog_ctgc.m"
                                                  *parse_tree__prog_ctgc__UserSharing_6 = base;
#line 450 "prog_ctgc.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_22));
#line 450 "prog_ctgc.m"
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_ctgc__MaybeUserTypes_19));
#line 450 "prog_ctgc.m"
                                                }
#line 450 "prog_ctgc.m"
                                                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 437 "prog_ctgc.m"
                                              }
#line 437 "prog_ctgc.m"
                                          }
#line 437 "prog_ctgc.m"
                                      }
#line 439 "prog_ctgc.m"
                                  }
#line 439 "prog_ctgc.m"
                              }
#line 437 "prog_ctgc.m"
                          }
#line 437 "prog_ctgc.m"
                      }
#line 437 "prog_ctgc.m"
                  }
#line 437 "prog_ctgc.m"
              }
#line 426 "prog_ctgc.m"
          }
#line 426 "prog_ctgc.m"
      }
#line 426 "prog_ctgc.m"
    return parse_tree__prog_ctgc__succeeded;
#line 426 "prog_ctgc.m"
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
#line 417 "prog_ctgc.m"
  {
#line 417 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 417 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseDomain_4;
#line 417 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 417 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 398 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;
#line 398 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 398 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 398 "prog_ctgc.m"
      {
#line 398 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 398 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 398 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 398 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 398 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 398 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
#line 398 "prog_ctgc.m"
      }
#line 417 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 404 "prog_ctgc.m"
      {
#line 401 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_no_reuse") == 0);
#line 404 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 403 "prog_ctgc.m"
          parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 404 "prog_ctgc.m"
        else
#line 408 "prog_ctgc.m"
          {
#line 405 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_only_unconditional_reuse") == 0);
#line 408 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 407 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 408 "prog_ctgc.m"
            else
#line 414 "prog_ctgc.m"
              {
#line 414 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__ReuseConditionsTerm_8;
#line 409 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_10_10;

#line 409 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "has_conditional_reuse") == 0);
#line 409 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 409 "prog_ctgc.m"
                  {
#line 410 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 410 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 410 "prog_ctgc.m"
                      {
#line 410 "prog_ctgc.m"
                        parse_tree__prog_ctgc__ReuseConditionsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 410 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 410 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "prog_ctgc.m"
                      }
#line 409 "prog_ctgc.m"
                  }
#line 414 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 412 "prog_ctgc.m"
                  {
#line 412 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_11_11;

#line 413 "prog_ctgc.m"
                    {
#line 413 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_11_11 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__ReuseConditionsTerm_8);
                    }
#line 412 "prog_ctgc.m"
                    {
#line 412 "prog_ctgc.m"
                      parse_tree__prog_ctgc__ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseDomain_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_11_11));
#line 412 "prog_ctgc.m"
                    }
#line 412 "prog_ctgc.m"
                  }
#line 414 "prog_ctgc.m"
                else
#line 415 "prog_ctgc.m"
                  {
#line 415 "prog_ctgc.m"
                    {
#line 415 "prog_ctgc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain");
                    }
#line 415 "prog_ctgc.m"
                  }
#line 414 "prog_ctgc.m"
              }
#line 408 "prog_ctgc.m"
          }
#line 404 "prog_ctgc.m"
      }
#line 417 "prog_ctgc.m"
    else
#line 418 "prog_ctgc.m"
      {
#line 418 "prog_ctgc.m"
        {
#line 418 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_domain\'/1", (MR_String) "error while parsing reuse domain (term not a functor)");
        }
#line 418 "prog_ctgc.m"
      }
#line 417 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseDomain_4;
#line 417 "prog_ctgc.m"
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
#line 391 "prog_ctgc.m"
  {
#line 391 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 391 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseConditions_4;
#line 391 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 391 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 376 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 376 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 376 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 376 "prog_ctgc.m"
      {
#line 376 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 376 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 376 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 376 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 376 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 376 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 376 "prog_ctgc.m"
      }
#line 391 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 384 "prog_ctgc.m"
      {
#line 384 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__FirstTupleTerm_8;
#line 384 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__RestTuplesTerm_9;
#line 379 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 379 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 379 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 379 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 379 "prog_ctgc.m"
          {
#line 380 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 380 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 380 "prog_ctgc.m"
              {
#line 380 "prog_ctgc.m"
                parse_tree__prog_ctgc__FirstTupleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 380 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 380 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 380 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 380 "prog_ctgc.m"
                  {
#line 380 "prog_ctgc.m"
                    parse_tree__prog_ctgc__RestTuplesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 380 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 380 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "prog_ctgc.m"
                  }
#line 380 "prog_ctgc.m"
              }
#line 379 "prog_ctgc.m"
          }
#line 384 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 382 "prog_ctgc.m"
          {
#line 382 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 382 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 382 "prog_ctgc.m"
            {
#line 382 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_reuse_condition_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__FirstTupleTerm_8);
            }
#line 383 "prog_ctgc.m"
            {
#line 383 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_21, parse_tree__prog_ctgc__RestTuplesTerm_9);
            }
#line 382 "prog_ctgc.m"
            {
#line 382 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 382 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__ReuseConditions_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 382 "prog_ctgc.m"
            }
#line 382 "prog_ctgc.m"
          }
#line 384 "prog_ctgc.m"
        else
#line 388 "prog_ctgc.m"
          {
#line 385 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0);
#line 388 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 387 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseConditions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "prog_ctgc.m"
            else
#line 389 "prog_ctgc.m"
              {
#line 389 "prog_ctgc.m"
                {
#line 389 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions");
                }
#line 389 "prog_ctgc.m"
              }
#line 388 "prog_ctgc.m"
          }
#line 384 "prog_ctgc.m"
      }
#line 391 "prog_ctgc.m"
    else
#line 392 "prog_ctgc.m"
      {
#line 392 "prog_ctgc.m"
        {
#line 392 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_conditions\'/1", (MR_String) "error while parsing reuse conditions (term not a functor)");
        }
#line 392 "prog_ctgc.m"
      }
#line 391 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseConditions_4;
#line 391 "prog_ctgc.m"
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
#line 369 "prog_ctgc.m"
  {
#line 369 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 369 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__ReuseCondition_4;
#line 369 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 369 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 354 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_15_15;
#line 354 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 354 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 354 "prog_ctgc.m"
      {
#line 354 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 354 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 354 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 354 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 354 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 354 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_15_15, (MR_Integer) 0)));
#line 354 "prog_ctgc.m"
      }
#line 369 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 366 "prog_ctgc.m"
      {
#line 366 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__DeadNodesTerm_8;
#line 366 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__InUseNodesTerm_9;
#line 366 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__SharingTerm_10;
#line 357 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_16_16;
#line 357 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_17_17;
#line 357 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_18_18;

#line 357 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "condition") == 0);
#line 357 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 357 "prog_ctgc.m"
          {
#line 358 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 358 "prog_ctgc.m"
              {
#line 358 "prog_ctgc.m"
                parse_tree__prog_ctgc__DeadNodesTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 358 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 358 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 358 "prog_ctgc.m"
                  {
#line 358 "prog_ctgc.m"
                    parse_tree__prog_ctgc__InUseNodesTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 0)));
#line 358 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_16_16, (MR_Integer) 1)));
#line 358 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 358 "prog_ctgc.m"
                      {
#line 358 "prog_ctgc.m"
                        parse_tree__prog_ctgc__SharingTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 0)));
#line 358 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_17_17, (MR_Integer) 1)));
#line 358 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_ctgc.m"
                      }
#line 358 "prog_ctgc.m"
                  }
#line 358 "prog_ctgc.m"
              }
#line 357 "prog_ctgc.m"
          }
#line 366 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 360 "prog_ctgc.m"
          {
#line 360 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__DeadNodesList_11;
#line 360 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__DeadNodes_12;
#line 360 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__InUseNodes_13;
#line 360 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__Sharing_14;

#line 360 "prog_ctgc.m"
            {
#line 360 "prog_ctgc.m"
              parse_tree__prog_ctgc__DeadNodesList_11 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__DeadNodesTerm_8);
            }
#line 361 "prog_ctgc.m"
            {
#line 361 "prog_ctgc.m"
              parse_tree__prog_ctgc__DeadNodes_12 = mercury__set__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, parse_tree__prog_ctgc__DeadNodesList_11);
            }
#line 362 "prog_ctgc.m"
            {
#line 362 "prog_ctgc.m"
              parse_tree__prog_ctgc__InUseNodes_13 = parse_tree__prog_ctgc__parse_datastruct_list_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__InUseNodesTerm_9);
            }
#line 363 "prog_ctgc.m"
            {
#line 363 "prog_ctgc.m"
              parse_tree__prog_ctgc__Sharing_14 = parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_25, parse_tree__prog_ctgc__SharingTerm_10);
            }
#line 364 "prog_ctgc.m"
            {
#line 364 "prog_ctgc.m"
              parse_tree__prog_ctgc__ReuseCondition_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__DeadNodes_12));
#line 364 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__InUseNodes_13));
#line 364 "prog_ctgc.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ReuseCondition_4, 2) = ((MR_Box) (parse_tree__prog_ctgc__Sharing_14));
#line 364 "prog_ctgc.m"
            }
#line 360 "prog_ctgc.m"
          }
#line 366 "prog_ctgc.m"
        else
#line 367 "prog_ctgc.m"
          {
#line 367 "prog_ctgc.m"
            {
#line 367 "prog_ctgc.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition");
            }
#line 367 "prog_ctgc.m"
          }
#line 366 "prog_ctgc.m"
      }
#line 369 "prog_ctgc.m"
    else
#line 370 "prog_ctgc.m"
      {
#line 370 "prog_ctgc.m"
        {
#line 370 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_reuse_condition\'/1", (MR_String) "error while parsing reuse condition (term not a functor)");
        }
#line 370 "prog_ctgc.m"
      }
#line 369 "prog_ctgc.m"
    return parse_tree__prog_ctgc__ReuseCondition_4;
#line 369 "prog_ctgc.m"
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
#line 347 "prog_ctgc.m"
  {
#line 347 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 347 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingAs_4;
#line 347 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingAs0_8;
#line 332 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 332 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_9_9;
#line 332 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_6_6;
#line 332 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc___Context_7;

#line 332 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 332 "prog_ctgc.m"
      {
#line 332 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 332 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 332 "prog_ctgc.m"
        parse_tree__prog_ctgc___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 332 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 332 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 332 "prog_ctgc.m"
          {
#line 332 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_9_9, (MR_Integer) 0)));
#line 336 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 334 "prog_ctgc.m"
              {
#line 334 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_13_13;

#line 335 "prog_ctgc.m"
                {
#line 335 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_17, parse_tree__prog_ctgc__Term_3);
                }
#line 335 "prog_ctgc.m"
                {
#line 335 "prog_ctgc.m"
                  parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 335 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 335 "prog_ctgc.m"
                }
#line 334 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 334 "prog_ctgc.m"
              }
#line 336 "prog_ctgc.m"
            else
#line 336 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "top") == 0))
#line 340 "prog_ctgc.m"
                {
#line 340 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_10_10;

#line 342 "prog_ctgc.m"
                  {
#line 342 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_10_10 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_top_feedback_0, ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_ctgc_scalar_common_3[0]))));
                  }
#line 341 "prog_ctgc.m"
                  {
#line 341 "prog_ctgc.m"
                    parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__SharingAs0_8, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_10_10));
#line 341 "prog_ctgc.m"
                  }
#line 340 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 340 "prog_ctgc.m"
                }
#line 336 "prog_ctgc.m"
              else
#line 336 "prog_ctgc.m"
                if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "bottom") == 0))
#line 338 "prog_ctgc.m"
                  {
#line 338 "prog_ctgc.m"
                    parse_tree__prog_ctgc__SharingAs0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 338 "prog_ctgc.m"
                  }
#line 336 "prog_ctgc.m"
                else
#line 336 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 332 "prog_ctgc.m"
          }
#line 332 "prog_ctgc.m"
      }
#line 347 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 346 "prog_ctgc.m"
      parse_tree__prog_ctgc__SharingAs_4 = parse_tree__prog_ctgc__SharingAs0_8;
#line 347 "prog_ctgc.m"
    else
#line 348 "prog_ctgc.m"
      {
#line 348 "prog_ctgc.m"
        {
#line 348 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_domain\'/1", (MR_String) "error while parsing structure sharing domain");
        }
#line 348 "prog_ctgc.m"
      }
#line 347 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingAs_4;
#line 347 "prog_ctgc.m"
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
#line 325 "prog_ctgc.m"
  {
#line 325 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 325 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPairs_4;
#line 325 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPairs0_10;
#line 313 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 313 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 313 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 313 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 313 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 313 "prog_ctgc.m"
      {
#line 313 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 313 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 313 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 313 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 313 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 313 "prog_ctgc.m"
          {
#line 313 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 319 "prog_ctgc.m"
            if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[]") == 0))
#line 321 "prog_ctgc.m"
              {
#line 321 "prog_ctgc.m"
                parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 321 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 321 "prog_ctgc.m"
              }
#line 319 "prog_ctgc.m"
            else
#line 319 "prog_ctgc.m"
              if ((strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0))
#line 315 "prog_ctgc.m"
                {
#line 315 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__SharingPairTerm_8;
#line 315 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__Rest_9;
#line 315 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_12_12;
#line 315 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_13_13;
#line 315 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_14_14;
#line 315 "prog_ctgc.m"
                  MR_Word parse_tree__prog_ctgc__V_15_15;

#line 316 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_ctgc.m"
                  if (parse_tree__prog_ctgc__succeeded)
#line 316 "prog_ctgc.m"
                    {
#line 316 "prog_ctgc.m"
                      parse_tree__prog_ctgc__SharingPairTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 316 "prog_ctgc.m"
                      parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 316 "prog_ctgc.m"
                      parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_ctgc.m"
                      if (parse_tree__prog_ctgc__succeeded)
#line 316 "prog_ctgc.m"
                        {
#line 316 "prog_ctgc.m"
                          parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 316 "prog_ctgc.m"
                          parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 1)));
#line 316 "prog_ctgc.m"
                          parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "prog_ctgc.m"
                          if (parse_tree__prog_ctgc__succeeded)
#line 315 "prog_ctgc.m"
                            {
#line 317 "prog_ctgc.m"
                              {
#line 317 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_structure_sharing_pair_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__SharingPairTerm_8);
                              }
#line 318 "prog_ctgc.m"
                              {
#line 318 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_15_15 = parse_tree__prog_ctgc__parse_structure_sharing_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_19, parse_tree__prog_ctgc__Rest_9);
                              }
#line 317 "prog_ctgc.m"
                              {
#line 317 "prog_ctgc.m"
                                parse_tree__prog_ctgc__SharingPairs0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_ctgc.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 317 "prog_ctgc.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__SharingPairs0_10, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 317 "prog_ctgc.m"
                              }
#line 317 "prog_ctgc.m"
                              parse_tree__prog_ctgc__succeeded = MR_TRUE;
#line 315 "prog_ctgc.m"
                            }
#line 316 "prog_ctgc.m"
                        }
#line 316 "prog_ctgc.m"
                    }
#line 315 "prog_ctgc.m"
                }
#line 319 "prog_ctgc.m"
              else
#line 319 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = MR_FALSE;
#line 313 "prog_ctgc.m"
          }
#line 313 "prog_ctgc.m"
      }
#line 325 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 324 "prog_ctgc.m"
      parse_tree__prog_ctgc__SharingPairs_4 = parse_tree__prog_ctgc__SharingPairs0_10;
#line 325 "prog_ctgc.m"
    else
#line 326 "prog_ctgc.m"
      {
#line 326 "prog_ctgc.m"
        {
#line 326 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing\'/1", (MR_String) "error while parsing list of structure sharing pairs");
        }
#line 326 "prog_ctgc.m"
      }
#line 325 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingPairs_4;
#line 325 "prog_ctgc.m"
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
#line 306 "prog_ctgc.m"
  {
#line 306 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 306 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SharingPair_4;
#line 306 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__First_8;
#line 306 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Second_9;
#line 301 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 301 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 301 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 301 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;
#line 301 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 301 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 301 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 301 "prog_ctgc.m"
      {
#line 301 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 301 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 301 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 301 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 301 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 301 "prog_ctgc.m"
          {
#line 301 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 302 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "pair") == 0);
#line 301 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 301 "prog_ctgc.m"
              {
#line 303 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 303 "prog_ctgc.m"
                  {
#line 303 "prog_ctgc.m"
                    parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 303 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 303 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 303 "prog_ctgc.m"
                      {
#line 303 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 303 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 303 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "prog_ctgc.m"
                      }
#line 303 "prog_ctgc.m"
                  }
#line 301 "prog_ctgc.m"
              }
#line 301 "prog_ctgc.m"
          }
#line 301 "prog_ctgc.m"
      }
#line 306 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 305 "prog_ctgc.m"
      {
#line 305 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_13_13;
#line 305 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_14_14;

#line 305 "prog_ctgc.m"
        {
#line 305 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
        }
#line 305 "prog_ctgc.m"
        {
#line 305 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_datastruct_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Second_9);
        }
#line 305 "prog_ctgc.m"
        {
#line 305 "prog_ctgc.m"
          parse_tree__prog_ctgc__SharingPair_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 305 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__SharingPair_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 305 "prog_ctgc.m"
        }
#line 305 "prog_ctgc.m"
      }
#line 306 "prog_ctgc.m"
    else
#line 307 "prog_ctgc.m"
      {
#line 307 "prog_ctgc.m"
        {
#line 307 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_structure_sharing_pair\'/1", (MR_String) "error while parsing structure sharing pair");
        }
#line 307 "prog_ctgc.m"
      }
#line 306 "prog_ctgc.m"
    return parse_tree__prog_ctgc__SharingPair_4;
#line 306 "prog_ctgc.m"
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
#line 270 "prog_ctgc.m"
  {
#line 270 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 270 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Datastruct_4;
#line 270 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__SelectorTerm_9;
#line 270 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Var_10;
#line 263 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 263 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 263 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__VarTerm_8;
#line 263 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_12_12;
#line 263 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_13_13;
#line 263 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_14_14;
#line 263 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;
#line 266 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_11_11;

#line 263 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 263 "prog_ctgc.m"
      {
#line 263 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 263 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 263 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 263 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 263 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 263 "prog_ctgc.m"
          {
#line 263 "prog_ctgc.m"
            parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_12_12, (MR_Integer) 0)));
#line 264 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "cel") == 0);
#line 263 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 263 "prog_ctgc.m"
              {
#line 265 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 265 "prog_ctgc.m"
                  {
#line 265 "prog_ctgc.m"
                    parse_tree__prog_ctgc__VarTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 265 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 265 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 265 "prog_ctgc.m"
                      {
#line 265 "prog_ctgc.m"
                        parse_tree__prog_ctgc__SelectorTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 0)));
#line 265 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_13_13, (MR_Integer) 1)));
#line 265 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 263 "prog_ctgc.m"
                          {
#line 266 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__VarTerm_8)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 266 "prog_ctgc.m"
                              {
#line 266 "prog_ctgc.m"
                                parse_tree__prog_ctgc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_8, (MR_Integer) 0)));
#line 266 "prog_ctgc.m"
                                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__VarTerm_8, (MR_Integer) 1)));
#line 266 "prog_ctgc.m"
                              }
#line 263 "prog_ctgc.m"
                          }
#line 265 "prog_ctgc.m"
                      }
#line 265 "prog_ctgc.m"
                  }
#line 263 "prog_ctgc.m"
              }
#line 263 "prog_ctgc.m"
          }
#line 263 "prog_ctgc.m"
      }
#line 270 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 268 "prog_ctgc.m"
      {
#line 268 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_15_15;
#line 268 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_16_16;

#line 268 "prog_ctgc.m"
        {
#line 268 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_15_15 = mercury__term__coerce_var_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_ctgc__Var_10);
        }
#line 269 "prog_ctgc.m"
        {
#line 269 "prog_ctgc.m"
          parse_tree__prog_ctgc__V_16_16 = parse_tree__prog_ctgc__parse_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_20, parse_tree__prog_ctgc__SelectorTerm_9);
        }
#line 268 "prog_ctgc.m"
        {
#line 268 "prog_ctgc.m"
          parse_tree__prog_ctgc__Datastruct_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Datastruct_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_15_15));
#line 268 "prog_ctgc.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Datastruct_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_16_16));
#line 268 "prog_ctgc.m"
        }
#line 268 "prog_ctgc.m"
      }
#line 270 "prog_ctgc.m"
    else
#line 271 "prog_ctgc.m"
      {
#line 271 "prog_ctgc.m"
        {
#line 271 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_datastruct\'/1", (MR_String) "error while parsing datastruct.");
        }
#line 271 "prog_ctgc.m"
      }
#line 270 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Datastruct_4;
#line 270 "prog_ctgc.m"
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
#line 257 "prog_ctgc.m"
  {
#line 257 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 257 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Selector_4;
#line 257 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 257 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 248 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_10_10;
#line 248 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 248 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 248 "prog_ctgc.m"
      {
#line 248 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 248 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 248 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 248 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 248 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 248 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_10_10, (MR_Integer) 0)));
#line 248 "prog_ctgc.m"
      }
#line 257 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 254 "prog_ctgc.m"
      {
#line 254 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__First_8;
#line 254 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__Rest_9;
#line 250 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_11_11;
#line 250 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_12_12;

#line 250 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "[|]") == 0);
#line 250 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 250 "prog_ctgc.m"
          {
#line 251 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 251 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 251 "prog_ctgc.m"
              {
#line 251 "prog_ctgc.m"
                parse_tree__prog_ctgc__First_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 251 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 251 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 251 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 251 "prog_ctgc.m"
                  {
#line 251 "prog_ctgc.m"
                    parse_tree__prog_ctgc__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 0)));
#line 251 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_11_11, (MR_Integer) 1)));
#line 251 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "prog_ctgc.m"
                  }
#line 251 "prog_ctgc.m"
              }
#line 250 "prog_ctgc.m"
          }
#line 254 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 253 "prog_ctgc.m"
          {
#line 253 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 253 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;

#line 253 "prog_ctgc.m"
            {
#line 253 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_13_13 = parse_tree__prog_ctgc__parse_unit_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__First_8);
            }
#line 253 "prog_ctgc.m"
            {
#line 253 "prog_ctgc.m"
              parse_tree__prog_ctgc__V_14_14 = parse_tree__prog_ctgc__parse_selector_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_18, parse_tree__prog_ctgc__Rest_9);
            }
#line 253 "prog_ctgc.m"
            {
#line 253 "prog_ctgc.m"
              parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Selector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__V_13_13));
#line 253 "prog_ctgc.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Selector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__V_14_14));
#line 253 "prog_ctgc.m"
            }
#line 253 "prog_ctgc.m"
          }
#line 254 "prog_ctgc.m"
        else
#line 255 "prog_ctgc.m"
          parse_tree__prog_ctgc__Selector_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "prog_ctgc.m"
      }
#line 257 "prog_ctgc.m"
    else
#line 258 "prog_ctgc.m"
      {
#line 258 "prog_ctgc.m"
        {
#line 258 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_selector\'/1", (MR_String) "term not a functor");
        }
#line 258 "prog_ctgc.m"
      }
#line 257 "prog_ctgc.m"
    return parse_tree__prog_ctgc__Selector_4;
#line 257 "prog_ctgc.m"
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
#line 243 "prog_ctgc.m"
  {
#line 243 "prog_ctgc.m"
    MR_bool parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 243 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__UnitSelector_4;
#line 243 "prog_ctgc.m"
    MR_String parse_tree__prog_ctgc__Cons_5;
#line 243 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__Args_6;
#line 196 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_30_30;
#line 196 "prog_ctgc.m"
    MR_Word parse_tree__prog_ctgc__V_7_7;

#line 196 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 196 "prog_ctgc.m"
      {
#line 196 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 0)));
#line 196 "prog_ctgc.m"
        parse_tree__prog_ctgc__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 1)));
#line 196 "prog_ctgc.m"
        parse_tree__prog_ctgc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__Term_3, (MR_Integer) 2)));
#line 196 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 196 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 196 "prog_ctgc.m"
          parse_tree__prog_ctgc__Cons_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__V_30_30, (MR_Integer) 0)));
#line 196 "prog_ctgc.m"
      }
#line 243 "prog_ctgc.m"
    if (parse_tree__prog_ctgc__succeeded)
#line 230 "prog_ctgc.m"
      {
#line 230 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ConsTerm_8;
#line 230 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__ArityTerm_9;
#line 230 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__PosTerm_10;
#line 202 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_31_31;
#line 202 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_32_32;
#line 202 "prog_ctgc.m"
        MR_Word parse_tree__prog_ctgc__V_33_33;

#line 202 "prog_ctgc.m"
        parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "sel") == 0);
#line 202 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 202 "prog_ctgc.m"
          {
#line 203 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 203 "prog_ctgc.m"
              {
#line 203 "prog_ctgc.m"
                parse_tree__prog_ctgc__ConsTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 203 "prog_ctgc.m"
                parse_tree__prog_ctgc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 203 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 203 "prog_ctgc.m"
                  {
#line 203 "prog_ctgc.m"
                    parse_tree__prog_ctgc__ArityTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 0)));
#line 203 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_31_31, (MR_Integer) 1)));
#line 203 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 203 "prog_ctgc.m"
                      {
#line 203 "prog_ctgc.m"
                        parse_tree__prog_ctgc__PosTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 0)));
#line 203 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_32_32, (MR_Integer) 1)));
#line 203 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "prog_ctgc.m"
                      }
#line 203 "prog_ctgc.m"
                  }
#line 203 "prog_ctgc.m"
              }
#line 202 "prog_ctgc.m"
          }
#line 230 "prog_ctgc.m"
        if (parse_tree__prog_ctgc__succeeded)
#line 212 "prog_ctgc.m"
          {
#line 212 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__ConsIdName_11;
#line 212 "prog_ctgc.m"
            MR_Integer parse_tree__prog_ctgc__Arity_12;
#line 212 "prog_ctgc.m"
            MR_Integer parse_tree__prog_ctgc__Pos_15;
#line 206 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_34_34;
#line 206 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_35_35;
#line 207 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_13_13;
#line 207 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_14_14;
#line 208 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_16_16;
#line 208 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_17_17;

#line 206 "prog_ctgc.m"
            {
#line 206 "prog_ctgc.m"
              parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_ctgc__TypeInfo_for_T_63, parse_tree__prog_ctgc__ConsTerm_8, &parse_tree__prog_ctgc__ConsIdName_11);
            }
#line 206 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 206 "prog_ctgc.m"
              {
#line 207 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ArityTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 207 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 207 "prog_ctgc.m"
                  {
#line 207 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 0)));
#line 207 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 1)));
#line 207 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ArityTerm_9, (MR_Integer) 2)));
#line 207 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 207 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 207 "prog_ctgc.m"
                      {
#line 207 "prog_ctgc.m"
                        parse_tree__prog_ctgc__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_34_34, (MR_Integer) 0)));
#line 208 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__PosTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 208 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 208 "prog_ctgc.m"
                          {
#line 208 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 0)));
#line 208 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 1)));
#line 208 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__PosTerm_10, (MR_Integer) 2)));
#line 208 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 208 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 208 "prog_ctgc.m"
                              parse_tree__prog_ctgc__Pos_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_35_35, (MR_Integer) 0)));
#line 208 "prog_ctgc.m"
                          }
#line 207 "prog_ctgc.m"
                      }
#line 207 "prog_ctgc.m"
                  }
#line 206 "prog_ctgc.m"
              }
#line 212 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 210 "prog_ctgc.m"
              {
#line 210 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__ConsId_18;
#line 210 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_36_36;

#line 210 "prog_ctgc.m"
                {
#line 210 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_36_36 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 210 "prog_ctgc.m"
                {
#line 210 "prog_ctgc.m"
                  parse_tree__prog_ctgc__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 210 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 1) = ((MR_Box) (parse_tree__prog_ctgc__ConsIdName_11));
#line 210 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 2) = ((MR_Box) (parse_tree__prog_ctgc__Arity_12));
#line 210 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_18, 3) = ((MR_Box) (parse_tree__prog_ctgc__V_36_36));
#line 210 "prog_ctgc.m"
                }
#line 211 "prog_ctgc.m"
                {
#line 211 "prog_ctgc.m"
                  parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_18));
#line 211 "prog_ctgc.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) (parse_tree__prog_ctgc__Pos_15));
#line 211 "prog_ctgc.m"
                }
#line 210 "prog_ctgc.m"
              }
#line 212 "prog_ctgc.m"
            else
#line 217 "prog_ctgc.m"
              {
#line 217 "prog_ctgc.m"
                MR_Integer parse_tree__prog_ctgc__Int_19;
#line 213 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_37_37;
#line 213 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_20_20;
#line 213 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_21_21;

#line 213 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 213 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 213 "prog_ctgc.m"
                  {
#line 213 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 213 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 213 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 213 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 213 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 213 "prog_ctgc.m"
                      parse_tree__prog_ctgc__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__V_37_37, (MR_Integer) 0)));
#line 213 "prog_ctgc.m"
                  }
#line 217 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 215 "prog_ctgc.m"
                  {
#line 215 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__ConsId_57;

#line 215 "prog_ctgc.m"
                    {
#line 215 "prog_ctgc.m"
                      parse_tree__prog_ctgc__ConsId_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 215 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_57, 1) = ((MR_Box) (parse_tree__prog_ctgc__Int_19));
#line 215 "prog_ctgc.m"
                    }
#line 216 "prog_ctgc.m"
                    {
#line 216 "prog_ctgc.m"
                      parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_57));
#line 216 "prog_ctgc.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 216 "prog_ctgc.m"
                    }
#line 215 "prog_ctgc.m"
                  }
#line 217 "prog_ctgc.m"
                else
#line 222 "prog_ctgc.m"
                  {
#line 222 "prog_ctgc.m"
                    MR_Float parse_tree__prog_ctgc__Float_22;
#line 218 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_39_39;
#line 218 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_23_23;
#line 218 "prog_ctgc.m"
                    MR_Word parse_tree__prog_ctgc__V_24_24;

#line 218 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 218 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 218 "prog_ctgc.m"
                      {
#line 218 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 218 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 218 "prog_ctgc.m"
                        parse_tree__prog_ctgc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 218 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_ctgc__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 218 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 218 "prog_ctgc.m"
                          parse_tree__prog_ctgc__Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__V_39_39, (MR_Integer) 1)));
#line 218 "prog_ctgc.m"
                      }
#line 222 "prog_ctgc.m"
                    if (parse_tree__prog_ctgc__succeeded)
#line 220 "prog_ctgc.m"
                      {
#line 220 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__ConsId_58;

#line 220 "prog_ctgc.m"
                        {
#line 220 "prog_ctgc.m"
                          parse_tree__prog_ctgc__ConsId_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 220 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_58, 1) = MR_box_float(parse_tree__prog_ctgc__Float_22);
#line 220 "prog_ctgc.m"
                        }
#line 221 "prog_ctgc.m"
                        {
#line 221 "prog_ctgc.m"
                          parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_58));
#line 221 "prog_ctgc.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 221 "prog_ctgc.m"
                        }
#line 220 "prog_ctgc.m"
                      }
#line 222 "prog_ctgc.m"
                    else
#line 227 "prog_ctgc.m"
                      {
#line 227 "prog_ctgc.m"
                        MR_String parse_tree__prog_ctgc__Str_25;
#line 223 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_41_41;
#line 223 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_26_26;
#line 223 "prog_ctgc.m"
                        MR_Word parse_tree__prog_ctgc__V_27_27;

#line 223 "prog_ctgc.m"
                        parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__ConsTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 223 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 223 "prog_ctgc.m"
                          {
#line 223 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 0)));
#line 223 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 1)));
#line 223 "prog_ctgc.m"
                            parse_tree__prog_ctgc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__ConsTerm_8, (MR_Integer) 2)));
#line 223 "prog_ctgc.m"
                            parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__V_41_41)) == (MR_mktag((MR_Integer) 2)));
#line 223 "prog_ctgc.m"
                            if (parse_tree__prog_ctgc__succeeded)
#line 223 "prog_ctgc.m"
                              parse_tree__prog_ctgc__Str_25 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_ctgc__V_41_41, (MR_Integer) 0)));
#line 223 "prog_ctgc.m"
                          }
#line 227 "prog_ctgc.m"
                        if (parse_tree__prog_ctgc__succeeded)
#line 225 "prog_ctgc.m"
                          {
#line 225 "prog_ctgc.m"
                            MR_Word parse_tree__prog_ctgc__ConsId_59;

#line 225 "prog_ctgc.m"
                            {
#line 225 "prog_ctgc.m"
                              parse_tree__prog_ctgc__ConsId_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 225 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_ctgc__ConsId_59, 1) = ((MR_Box) (parse_tree__prog_ctgc__Str_25));
#line 225 "prog_ctgc.m"
                            }
#line 226 "prog_ctgc.m"
                            {
#line 226 "prog_ctgc.m"
                              parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__ConsId_59));
#line 226 "prog_ctgc.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_ctgc__UnitSelector_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 226 "prog_ctgc.m"
                            }
#line 225 "prog_ctgc.m"
                          }
#line 227 "prog_ctgc.m"
                        else
#line 228 "prog_ctgc.m"
                          {
#line 228 "prog_ctgc.m"
                            {
#line 228 "prog_ctgc.m"
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "unknown cons_id in unit selector");
                            }
#line 228 "prog_ctgc.m"
                          }
#line 227 "prog_ctgc.m"
                      }
#line 222 "prog_ctgc.m"
                  }
#line 217 "prog_ctgc.m"
              }
#line 212 "prog_ctgc.m"
          }
#line 230 "prog_ctgc.m"
        else
#line 239 "prog_ctgc.m"
          {
#line 239 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__TypeSelectorTerm_28;
#line 231 "prog_ctgc.m"
            MR_Word parse_tree__prog_ctgc__V_46_46;

#line 231 "prog_ctgc.m"
            parse_tree__prog_ctgc__succeeded = (strcmp(parse_tree__prog_ctgc__Cons_5, (MR_String) "typesel") == 0);
#line 231 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 231 "prog_ctgc.m"
              {
#line 232 "prog_ctgc.m"
                parse_tree__prog_ctgc__succeeded = ((MR_tag((MR_Word) parse_tree__prog_ctgc__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 232 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 232 "prog_ctgc.m"
                  {
#line 232 "prog_ctgc.m"
                    parse_tree__prog_ctgc__TypeSelectorTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 0)));
#line 232 "prog_ctgc.m"
                    parse_tree__prog_ctgc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__Args_6, (MR_Integer) 1)));
#line 232 "prog_ctgc.m"
                    parse_tree__prog_ctgc__succeeded = (parse_tree__prog_ctgc__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_ctgc.m"
                  }
#line 231 "prog_ctgc.m"
              }
#line 239 "prog_ctgc.m"
            if (parse_tree__prog_ctgc__succeeded)
#line 236 "prog_ctgc.m"
              {
#line 236 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__TypeSelector_29;
#line 234 "prog_ctgc.m"
                MR_Word parse_tree__prog_ctgc__V_47_47;

#line 234 "prog_ctgc.m"
                {
#line 234 "prog_ctgc.m"
                  parse_tree__prog_ctgc__V_47_47 = mercury__term__coerce_1_f_0(parse_tree__prog_ctgc__TypeInfo_for_T_63, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_ctgc__TypeSelectorTerm_28);
                }
#line 234 "prog_ctgc.m"
                {
#line 234 "prog_ctgc.m"
                  parse_tree__prog_ctgc__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_ctgc__V_47_47, &parse_tree__prog_ctgc__TypeSelector_29);
                }
#line 236 "prog_ctgc.m"
                if (parse_tree__prog_ctgc__succeeded)
#line 235 "prog_ctgc.m"
                  {
#line 235 "prog_ctgc.m"
                    parse_tree__prog_ctgc__UnitSelector_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 235 "prog_ctgc.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_ctgc__UnitSelector_4, 0) = ((MR_Box) (parse_tree__prog_ctgc__TypeSelector_29));
#line 235 "prog_ctgc.m"
                  }
#line 236 "prog_ctgc.m"
                else
#line 237 "prog_ctgc.m"
                  {
#line 237 "prog_ctgc.m"
                    {
#line 237 "prog_ctgc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "error in parsing type selector");
                    }
#line 237 "prog_ctgc.m"
                  }
#line 236 "prog_ctgc.m"
              }
#line 239 "prog_ctgc.m"
            else
#line 240 "prog_ctgc.m"
              {
#line 240 "prog_ctgc.m"
                {
#line 240 "prog_ctgc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "selector is neither sel/3 nor typesel/1.");
                }
#line 240 "prog_ctgc.m"
              }
#line 239 "prog_ctgc.m"
          }
#line 230 "prog_ctgc.m"
      }
#line 243 "prog_ctgc.m"
    else
#line 244 "prog_ctgc.m"
      {
#line 244 "prog_ctgc.m"
        {
#line 244 "prog_ctgc.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_ctgc", (MR_String) "function \140parse_tree.prog_ctgc.parse_unit_selector\'/1", (MR_String) "term not a functor");
        }
#line 244 "prog_ctgc.m"
      }
#line 243 "prog_ctgc.m"
    return parse_tree__prog_ctgc__UnitSelector_4;
#line 243 "prog_ctgc.m"
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
