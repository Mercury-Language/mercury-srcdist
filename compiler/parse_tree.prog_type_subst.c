/*
** Automatically generated from `prog_type_subst.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module parse_tree.prog_type_subst. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_type_subst__init
ENDINIT
*/

#include "parse_tree.prog_type_subst.mih"


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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 129 "parse_tree.prog_type_subst.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 132 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 135 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 138 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0;

#line 141 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 373 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
#line 373 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind0_4,
#line 373 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__ArgTypes_5,
#line 373 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Kind_6);

#line 334 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
#line 334 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_4,
#line 334 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Args_5,
#line 334 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6);

#line 134 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_6,
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar0_7,
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind_8,
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11,
#line 134 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12);

#line 435 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 435 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 432 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 432 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 428 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 428 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 435 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 435 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 432 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 432 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 428 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 428 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 319 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 319 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 316 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 316 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 313 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 313 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 330 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0_1(
#line 330 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 330 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 330 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 327 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_vartypes_3_p_0_1(
#line 327 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 327 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 327 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 324 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0_1(
#line 324 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 324 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 324 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 319 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 319 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 316 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 316 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 313 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 313 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 175 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
#line 175 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 175 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 175 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 172 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
#line 172 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 172 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 172 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 169 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
#line 169 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 169 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 169 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 131 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_2,
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_3,
#line 131 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_4);


static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_4[5][6];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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



#line 495 "parse_tree.prog_type_subst.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 503 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 512 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 520 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

#line 529 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 373 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
#line 373 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind0_4,
#line 373 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__ArgTypes_5,
#line 373 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Kind_6)
#line 373 "prog_type_subst.m"
{
#line 378 "prog_type_subst.m"
  while (MR_TRUE)
#line 378 "prog_type_subst.m"
    {
#line 378 "prog_type_subst.m"
      /* tailcall optimized into a loop */
#line 378 "prog_type_subst.m"
      {
#line 378 "prog_type_subst.m"
        MR_bool parse_tree__prog_type_subst__succeeded;

#line 378 "prog_type_subst.m"
        if ((parse_tree__prog_type_subst__ArgTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Kind_6 = parse_tree__prog_type_subst__Kind0_4;
#line 378 "prog_type_subst.m"
        else
#line 381 "prog_type_subst.m"
          {
#line 381 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__HeadArgType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__ArgTypes_5, (MR_Integer) 0)));
#line 381 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TailArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__ArgTypes_5, (MR_Integer) 1)));

#line 385 "prog_type_subst.m"
            if ((parse_tree__prog_type_subst__Kind0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "prog_type_subst.m"
              {
#line 384 "prog_type_subst.m"
                {
#line 384 "prog_type_subst.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "too many args in apply_n");
#line 384 "prog_type_subst.m"
                  return;
                }
#line 383 "prog_type_subst.m"
              }
#line 385 "prog_type_subst.m"
            else
#line 385 "prog_type_subst.m"
              if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Kind0_4)) == (MR_mktag((MR_Integer) 1))))
#line 386 "prog_type_subst.m"
                {
#line 386 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__KindA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Kind0_4, (MR_Integer) 0)));
#line 386 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__KindB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Kind0_4, (MR_Integer) 1)));
#line 387 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_21_21;

#line 387 "prog_type_subst.m"
                  {
#line 387 "prog_type_subst.m"
                    parse_tree__prog_type_subst__V_21_21 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__HeadArgType_7);
                  }
#line 387 "prog_type_subst.m"
                  {
#line 387 "prog_type_subst.m"
                    parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__KindA_9, parse_tree__prog_type_subst__V_21_21);
                  }
#line 389 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 388 "prog_type_subst.m"
                    {
#line 388 "prog_type_subst.m"
                      /* direct tailcall eliminated */
#line 388 "prog_type_subst.m"
                      {
#line 388 "prog_type_subst.m"
                        MR_Word parse_tree__prog_type_subst__Kind0__tmp_copy_4 = parse_tree__prog_type_subst__KindB_10;
#line 388 "prog_type_subst.m"
                        MR_Word parse_tree__prog_type_subst__ArgTypes__tmp_copy_5 = parse_tree__prog_type_subst__TailArgTypes_8;

#line 388 "prog_type_subst.m"
                        parse_tree__prog_type_subst__ArgTypes_5 = parse_tree__prog_type_subst__ArgTypes__tmp_copy_5;
#line 388 "prog_type_subst.m"
                        parse_tree__prog_type_subst__Kind0_4 = parse_tree__prog_type_subst__Kind0__tmp_copy_4;
#line 388 "prog_type_subst.m"
                      }
#line 388 "prog_type_subst.m"
                      continue;
#line 388 "prog_type_subst.m"
                    }
#line 389 "prog_type_subst.m"
                  else
#line 390 "prog_type_subst.m"
                    {
#line 390 "prog_type_subst.m"
                      {
#line 390 "prog_type_subst.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "kind error in apply_n");
#line 390 "prog_type_subst.m"
                        return;
                      }
#line 390 "prog_type_subst.m"
                    }
#line 386 "prog_type_subst.m"
                }
#line 385 "prog_type_subst.m"
              else
#line 393 "prog_type_subst.m"
                {
#line 394 "prog_type_subst.m"
                  {
#line 394 "prog_type_subst.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "unbound kind variable");
#line 394 "prog_type_subst.m"
                    return;
                  }
#line 393 "prog_type_subst.m"
                }
#line 381 "prog_type_subst.m"
          }
#line 378 "prog_type_subst.m"
      }
#line 378 "prog_type_subst.m"
      break;
#line 378 "prog_type_subst.m"
    }
#line 373 "prog_type_subst.m"
}

#line 334 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
#line 334 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_4,
#line 334 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Args_5,
#line 334 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 334 "prog_type_subst.m"
{
#line 339 "prog_type_subst.m"
  while (MR_TRUE)
#line 339 "prog_type_subst.m"
    {
#line 339 "prog_type_subst.m"
      /* tailcall optimized into a loop */
#line 339 "prog_type_subst.m"
      {
#line 339 "prog_type_subst.m"
        MR_bool parse_tree__prog_type_subst__succeeded;

#line 339 "prog_type_subst.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) == (MR_mktag((MR_Integer) 1))))
#line 343 "prog_type_subst.m"
          {
#line 343 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)));
#line 343 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 343 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__V_26_26;
#line 343 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Kind0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));
#line 343 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Kind_28;

#line 344 "prog_type_subst.m"
            {
#line 344 "prog_type_subst.m"
              parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_27, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_28);
            }
#line 345 "prog_type_subst.m"
            {
#line 345 "prog_type_subst.m"
              parse_tree__prog_type_subst__V_26_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_11, parse_tree__prog_type_subst__Args_5);
            }
#line 345 "prog_type_subst.m"
            {
#line 345 "prog_type_subst.m"
              MR_Word base;
#line 345 "prog_type_subst.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "prog_type_subst.m"
              *parse_tree__prog_type_subst__Type_6 = base;
#line 345 "prog_type_subst.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
#line 345 "prog_type_subst.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__V_26_26));
#line 345 "prog_type_subst.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_28));
#line 345 "prog_type_subst.m"
            }
#line 343 "prog_type_subst.m"
          }
#line 339 "prog_type_subst.m"
        else
#line 339 "prog_type_subst.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) == (MR_mktag((MR_Integer) 0))))
#line 339 "prog_type_subst.m"
            {
#line 339 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)));
#line 339 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 339 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_9;

#line 340 "prog_type_subst.m"
              {
#line 340 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_8, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_9);
              }
#line 341 "prog_type_subst.m"
              {
#line 341 "prog_type_subst.m"
                MR_Word base;
#line 341 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 341 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 341 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
#line 341 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_5));
#line 341 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_9));
#line 341 "prog_type_subst.m"
              }
#line 339 "prog_type_subst.m"
            }
#line 339 "prog_type_subst.m"
          else
#line 339 "prog_type_subst.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 362 "prog_type_subst.m"
              {
#line 362 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__V_21_21;
#line 362 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__TVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 362 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Kind0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 3)));
#line 362 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Kind_34;
#line 362 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));

#line 363 "prog_type_subst.m"
                {
#line 363 "prog_type_subst.m"
                  parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_33, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_34);
                }
#line 364 "prog_type_subst.m"
                {
#line 364 "prog_type_subst.m"
                  parse_tree__prog_type_subst__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_35, parse_tree__prog_type_subst__Args_5);
                }
#line 364 "prog_type_subst.m"
                {
#line 364 "prog_type_subst.m"
                  MR_Word base;
#line 364 "prog_type_subst.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 364 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = base;
#line 364 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 364 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_32));
#line 364 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__V_21_21));
#line 364 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_34));
#line 364 "prog_type_subst.m"
                }
#line 362 "prog_type_subst.m"
              }
#line 339 "prog_type_subst.m"
            else
#line 339 "prog_type_subst.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 366 "prog_type_subst.m"
                {
#line 366 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 366 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));

#line 370 "prog_type_subst.m"
                  /* direct tailcall eliminated */
#line 370 "prog_type_subst.m"
                  {
#line 370 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Type0__tmp_copy_4 = parse_tree__prog_type_subst__BaseType0_19;

#line 370 "prog_type_subst.m"
                    parse_tree__prog_type_subst__Type0_4 = parse_tree__prog_type_subst__Type0__tmp_copy_4;
#line 370 "prog_type_subst.m"
                  }
#line 370 "prog_type_subst.m"
                  continue;
#line 366 "prog_type_subst.m"
                }
#line 339 "prog_type_subst.m"
              else
#line 339 "prog_type_subst.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 358 "prog_type_subst.m"
                  {
#line 358 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__V_22_22;
#line 358 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Kind0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));
#line 358 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Kind_30;
#line 358 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));

#line 359 "prog_type_subst.m"
                    {
#line 359 "prog_type_subst.m"
                      parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_29, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_30);
                    }
#line 360 "prog_type_subst.m"
                    {
#line 360 "prog_type_subst.m"
                      parse_tree__prog_type_subst__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_31, parse_tree__prog_type_subst__Args_5);
                    }
#line 360 "prog_type_subst.m"
                    {
#line 360 "prog_type_subst.m"
                      MR_Word base;
#line 360 "prog_type_subst.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 360 "prog_type_subst.m"
                      *parse_tree__prog_type_subst__Type_6 = base;
#line 360 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 360 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__V_22_22));
#line 360 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_30));
#line 360 "prog_type_subst.m"
                    }
#line 358 "prog_type_subst.m"
                  }
#line 339 "prog_type_subst.m"
                else
#line 349 "prog_type_subst.m"
                  {
#line 352 "prog_type_subst.m"
                    if ((parse_tree__prog_type_subst__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "prog_type_subst.m"
                      {
#line 351 "prog_type_subst.m"
                      }
#line 352 "prog_type_subst.m"
                    else
#line 353 "prog_type_subst.m"
                      {
#line 354 "prog_type_subst.m"
                        {
#line 354 "prog_type_subst.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
#line 354 "prog_type_subst.m"
                          return;
                        }
#line 353 "prog_type_subst.m"
                      }
#line 356 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_4;
#line 349 "prog_type_subst.m"
                  }
#line 339 "prog_type_subst.m"
      }
#line 339 "prog_type_subst.m"
      break;
#line 339 "prog_type_subst.m"
    }
#line 334 "prog_type_subst.m"
}

#line 134 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_6,
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar0_7,
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind_8,
#line 134 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11,
#line 134 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12)
#line 134 "prog_type_subst.m"
{
#line 137 "prog_type_subst.m"
  {
#line 137 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 137 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TVar_10;
#line 146 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TVar1_19;
#line 144 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_8_20 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 144 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_TVar1_19;

#line 144 "prog_type_subst.m"
    {
#line 144 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_20, parse_tree__prog_type_subst__TypeInfo_8_20, parse_tree__prog_type_subst__Renaming_6, ((MR_Box) (parse_tree__prog_type_subst__TVar0_7)), &parse_tree__prog_type_subst__conv0_TVar1_19);
    }
#line 144 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 144 "prog_type_subst.m"
      {
#line 144 "prog_type_subst.m"
        parse_tree__prog_type_subst__TVar1_19 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_19);
#line 144 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 144 "prog_type_subst.m"
      }
#line 146 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 145 "prog_type_subst.m"
      parse_tree__prog_type_subst__TVar_10 = parse_tree__prog_type_subst__TVar1_19;
#line 146 "prog_type_subst.m"
    else
#line 147 "prog_type_subst.m"
      parse_tree__prog_type_subst__TVar_10 = parse_tree__prog_type_subst__TVar0_7;
#line 139 "prog_type_subst.m"
    {
#line 139 "prog_type_subst.m"
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, ((MR_Box) (parse_tree__prog_type_subst__TVar_10)), ((MR_Box) (parse_tree__prog_type_subst__Kind_8)), parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11, parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12);
#line 139 "prog_type_subst.m"
      return;
    }
#line 137 "prog_type_subst.m"
  }
#line 134 "prog_type_subst.m"
}

#line 435 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 435 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 435 "prog_type_subst.m"
{
#line 435 "prog_type_subst.m"
  {
#line 435 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 435 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 435 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 435 "prog_type_subst.m"
  }
#line 435 "prog_type_subst.m"
}

#line 116 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(
#line 116 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 116 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10,
#line 116 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11)
#line 116 "prog_type_subst.m"
{
#line 454 "prog_type_subst.m"
  {
#line 454 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_21;
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_30;
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistCs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivCs_8;
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistCs_9;
#line 454 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_17_17;

#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1));
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 435 "prog_type_subst.m"
    }
#line 1063 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__UnivCs0_6, &parse_tree__prog_type_subst__UnivCs_8);
    }
#line 1070 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__ExistCs0_7, &parse_tree__prog_type_subst__ExistCs_9);
    }
#line 458 "prog_type_subst.m"
    {
#line 458 "prog_type_subst.m"
      MR_Word base;
#line 458 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11 = base;
#line 458 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UnivCs_8));
#line 458 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistCs_9));
#line 458 "prog_type_subst.m"
    }
#line 454 "prog_type_subst.m"
  }
#line 116 "prog_type_subst.m"
}

#line 432 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 432 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 432 "prog_type_subst.m"
{
#line 432 "prog_type_subst.m"
  {
#line 432 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 432 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 432 "prog_type_subst.m"
  }
#line 432 "prog_type_subst.m"
}

#line 113 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(
#line 113 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 113 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__HeadVar__2_2,
#line 113 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__HeadVar__3_3)
#line 113 "prog_type_subst.m"
{
#line 449 "prog_type_subst.m"
  {
#line 449 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_17;
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_26;
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UniversalCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__HeadVar__2_2, (MR_Integer) 0)));
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistentialCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__HeadVar__2_2, (MR_Integer) 1)));
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UniversalCs_7;
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistentialCs_8;
#line 449 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_13_13;

#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1));
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 432 "prog_type_subst.m"
    }
#line 1170 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_17, parse_tree__prog_type_subst__TypeCtorInfo_12_17, parse_tree__prog_type_subst__V_13_13, parse_tree__prog_type_subst__UniversalCs0_5, &parse_tree__prog_type_subst__UniversalCs_7);
    }
#line 1177 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_26, parse_tree__prog_type_subst__TypeCtorInfo_12_26, parse_tree__prog_type_subst__V_13_13, parse_tree__prog_type_subst__ExistentialCs0_6, &parse_tree__prog_type_subst__ExistentialCs_8);
    }
#line 449 "prog_type_subst.m"
    {
#line 449 "prog_type_subst.m"
      MR_Word base;
#line 449 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "prog_type_subst.m"
      *parse_tree__prog_type_subst__HeadVar__3_3 = base;
#line 449 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UniversalCs_7));
#line 449 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistentialCs_8));
#line 449 "prog_type_subst.m"
    }
#line 449 "prog_type_subst.m"
  }
#line 113 "prog_type_subst.m"
}

#line 428 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 428 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 428 "prog_type_subst.m"
{
#line 428 "prog_type_subst.m"
  {
#line 428 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 428 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 428 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 428 "prog_type_subst.m"
  }
#line 428 "prog_type_subst.m"
}

#line 110 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(
#line 110 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 110 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10,
#line 110 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11)
#line 110 "prog_type_subst.m"
{
#line 439 "prog_type_subst.m"
  {
#line 439 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_21;
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_30;
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivConstraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistConstraints0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivConstraints_8;
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistConstraints_9;
#line 439 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_17_17;

#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1));
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 428 "prog_type_subst.m"
    }
#line 1277 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__UnivConstraints0_6, &parse_tree__prog_type_subst__UnivConstraints_8);
    }
#line 1284 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__ExistConstraints0_7, &parse_tree__prog_type_subst__ExistConstraints_9);
    }
#line 445 "prog_type_subst.m"
    {
#line 445 "prog_type_subst.m"
      MR_Word base;
#line 445 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11 = base;
#line 445 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UnivConstraints_8));
#line 445 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistConstraints_9));
#line 445 "prog_type_subst.m"
    }
#line 439 "prog_type_subst.m"
  }
#line 110 "prog_type_subst.m"
}

#line 435 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 435 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 435 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 435 "prog_type_subst.m"
{
#line 435 "prog_type_subst.m"
  {
#line 435 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 435 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 435 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 435 "prog_type_subst.m"
  }
#line 435 "prog_type_subst.m"
}

#line 105 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(
#line 105 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 105 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
#line 105 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
#line 105 "prog_type_subst.m"
{
#line 434 "prog_type_subst.m"
  {
#line 434 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 434 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
#line 434 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1));
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 435 "prog_type_subst.m"
    }
#line 1374 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 435 "prog_type_subst.m"
    {
#line 435 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
#line 435 "prog_type_subst.m"
      return;
    }
#line 434 "prog_type_subst.m"
  }
#line 105 "prog_type_subst.m"
}

#line 432 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 432 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 432 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 432 "prog_type_subst.m"
{
#line 432 "prog_type_subst.m"
  {
#line 432 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 432 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 432 "prog_type_subst.m"
  }
#line 432 "prog_type_subst.m"
}

#line 102 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(
#line 102 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 102 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
#line 102 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
#line 102 "prog_type_subst.m"
{
#line 431 "prog_type_subst.m"
  {
#line 431 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 431 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
#line 431 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1));
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 432 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 432 "prog_type_subst.m"
    }
#line 1452 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 432 "prog_type_subst.m"
    {
#line 432 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
#line 432 "prog_type_subst.m"
      return;
    }
#line 431 "prog_type_subst.m"
  }
#line 102 "prog_type_subst.m"
}

#line 428 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 428 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 428 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 428 "prog_type_subst.m"
{
#line 428 "prog_type_subst.m"
  {
#line 428 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 428 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 428 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 428 "prog_type_subst.m"
  }
#line 428 "prog_type_subst.m"
}

#line 99 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(
#line 99 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 99 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
#line 99 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
#line 99 "prog_type_subst.m"
{
#line 427 "prog_type_subst.m"
  {
#line 427 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1));
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 428 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 428 "prog_type_subst.m"
    }
#line 1530 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 428 "prog_type_subst.m"
    {
#line 428 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
#line 428 "prog_type_subst.m"
      return;
    }
#line 427 "prog_type_subst.m"
  }
#line 99 "prog_type_subst.m"
}

#line 319 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 319 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 319 "prog_type_subst.m"
{
#line 319 "prog_type_subst.m"
  {
#line 319 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 319 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 319 "prog_type_subst.m"
    {
#line 319 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 319 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 319 "prog_type_subst.m"
  }
#line 319 "prog_type_subst.m"
}

#line 94 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(
#line 94 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 94 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
#line 94 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
#line 94 "prog_type_subst.m"
{
#line 420 "prog_type_subst.m"
  {
#line 420 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 420 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
#line 420 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
#line 420 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
#line 420 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types_8;
#line 420 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_15_15;

#line 319 "prog_type_subst.m"
    {
#line 319 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1));
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 319 "prog_type_subst.m"
    }
#line 1614 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 319 "prog_type_subst.m"
    {
#line 319 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__V_15_15, parse_tree__prog_type_subst__Types0_7, &parse_tree__prog_type_subst__Types_8);
    }
#line 423 "prog_type_subst.m"
    {
#line 423 "prog_type_subst.m"
      MR_Word base;
#line 423 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
#line 423 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
#line 423 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Types_8));
#line 423 "prog_type_subst.m"
    }
#line 420 "prog_type_subst.m"
  }
#line 94 "prog_type_subst.m"
}

#line 316 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 316 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 316 "prog_type_subst.m"
{
#line 316 "prog_type_subst.m"
  {
#line 316 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 316 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 316 "prog_type_subst.m"
    {
#line 316 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 316 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 316 "prog_type_subst.m"
  }
#line 316 "prog_type_subst.m"
}

#line 91 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(
#line 91 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 91 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
#line 91 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
#line 91 "prog_type_subst.m"
{
#line 415 "prog_type_subst.m"
  {
#line 415 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 415 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
#line 415 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
#line 415 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
#line 415 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types_8;
#line 415 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_15_15;

#line 316 "prog_type_subst.m"
    {
#line 316 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1));
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 316 "prog_type_subst.m"
    }
#line 1710 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 316 "prog_type_subst.m"
    {
#line 316 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__V_15_15, parse_tree__prog_type_subst__Types0_7, &parse_tree__prog_type_subst__Types_8);
    }
#line 418 "prog_type_subst.m"
    {
#line 418 "prog_type_subst.m"
      MR_Word base;
#line 418 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
#line 418 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
#line 418 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Types_8));
#line 418 "prog_type_subst.m"
    }
#line 415 "prog_type_subst.m"
  }
#line 91 "prog_type_subst.m"
}

#line 313 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 313 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 313 "prog_type_subst.m"
{
#line 313 "prog_type_subst.m"
  {
#line 313 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 313 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 313 "prog_type_subst.m"
    {
#line 313 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 313 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 313 "prog_type_subst.m"
  }
#line 313 "prog_type_subst.m"
}

#line 88 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(
#line 88 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 88 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
#line 88 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
#line 88 "prog_type_subst.m"
{
#line 409 "prog_type_subst.m"
  {
#line 409 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassArgTypes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassArgTypes_8;
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_15_15;

#line 313 "prog_type_subst.m"
    {
#line 313 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1));
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 313 "prog_type_subst.m"
    }
#line 1806 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 313 "prog_type_subst.m"
    {
#line 313 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__V_15_15, parse_tree__prog_type_subst__ClassArgTypes0_7, &parse_tree__prog_type_subst__ClassArgTypes_8);
    }
#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      MR_Word base;
#line 413 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ClassArgTypes_8));
#line 413 "prog_type_subst.m"
    }
#line 409 "prog_type_subst.m"
  }
#line 88 "prog_type_subst.m"
}

#line 330 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0_1(
#line 330 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 330 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 330 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 330 "prog_type_subst.m"
{
#line 330 "prog_type_subst.m"
  {
#line 330 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 330 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 330 "prog_type_subst.m"
    {
#line 330 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 330 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 330 "prog_type_subst.m"
  }
#line 330 "prog_type_subst.m"
}

#line 80 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0(
#line 80 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 80 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_0_6,
#line 80 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_7)
#line 80 "prog_type_subst.m"
{
#line 329 "prog_type_subst.m"
  {
#line 329 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 329 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 330 "prog_type_subst.m"
    {
#line 330 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 330 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0_1));
#line 330 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 330 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 330 "prog_type_subst.m"
    }
#line 330 "prog_type_subst.m"
    {
#line 330 "prog_type_subst.m"
      parse_tree__prog_data__transform_var_types_3_p_0(parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_7);
#line 330 "prog_type_subst.m"
      return;
    }
#line 329 "prog_type_subst.m"
  }
#line 80 "prog_type_subst.m"
}

#line 327 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_vartypes_3_p_0_1(
#line 327 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 327 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 327 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 327 "prog_type_subst.m"
{
#line 327 "prog_type_subst.m"
  {
#line 327 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 327 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 327 "prog_type_subst.m"
    {
#line 327 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 327 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 327 "prog_type_subst.m"
  }
#line 327 "prog_type_subst.m"
}

#line 77 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_vartypes_3_p_0(
#line 77 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 77 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_0_6,
#line 77 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_7)
#line 77 "prog_type_subst.m"
{
#line 326 "prog_type_subst.m"
  {
#line 326 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 326 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 327 "prog_type_subst.m"
    {
#line 327 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 327 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_vartypes_3_p_0_1));
#line 327 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 327 "prog_type_subst.m"
    }
#line 327 "prog_type_subst.m"
    {
#line 327 "prog_type_subst.m"
      parse_tree__prog_data__transform_var_types_3_p_0(parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_7);
#line 327 "prog_type_subst.m"
      return;
    }
#line 326 "prog_type_subst.m"
  }
#line 77 "prog_type_subst.m"
}

#line 324 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0_1(
#line 324 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 324 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 324 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 324 "prog_type_subst.m"
{
#line 324 "prog_type_subst.m"
  {
#line 324 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 324 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 324 "prog_type_subst.m"
    {
#line 324 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 324 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 324 "prog_type_subst.m"
  }
#line 324 "prog_type_subst.m"
}

#line 74 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0(
#line 74 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 74 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_0_6,
#line 74 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_7)
#line 74 "prog_type_subst.m"
{
#line 323 "prog_type_subst.m"
  {
#line 323 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 323 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 324 "prog_type_subst.m"
    {
#line 324 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
#line 324 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0_1));
#line 324 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 324 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 324 "prog_type_subst.m"
    }
#line 324 "prog_type_subst.m"
    {
#line 324 "prog_type_subst.m"
      parse_tree__prog_data__transform_var_types_3_p_0(parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_VarTypes_7);
#line 324 "prog_type_subst.m"
      return;
    }
#line 323 "prog_type_subst.m"
  }
#line 74 "prog_type_subst.m"
}

#line 319 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 319 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 319 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 319 "prog_type_subst.m"
{
#line 319 "prog_type_subst.m"
  {
#line 319 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 319 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 319 "prog_type_subst.m"
    {
#line 319 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 319 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 319 "prog_type_subst.m"
  }
#line 319 "prog_type_subst.m"
}

#line 69 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(
#line 69 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 69 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Types0_5,
#line 69 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_6)
#line 69 "prog_type_subst.m"
{
#line 318 "prog_type_subst.m"
  {
#line 318 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 318 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
#line 318 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 319 "prog_type_subst.m"
    {
#line 319 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1));
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 319 "prog_type_subst.m"
    }
#line 2118 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 319 "prog_type_subst.m"
    {
#line 319 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
#line 319 "prog_type_subst.m"
      return;
    }
#line 318 "prog_type_subst.m"
  }
#line 69 "prog_type_subst.m"
}

#line 316 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 316 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 316 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 316 "prog_type_subst.m"
{
#line 316 "prog_type_subst.m"
  {
#line 316 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 316 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 316 "prog_type_subst.m"
    {
#line 316 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 316 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 316 "prog_type_subst.m"
  }
#line 316 "prog_type_subst.m"
}

#line 66 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(
#line 66 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 66 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Types0_5,
#line 66 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_6)
#line 66 "prog_type_subst.m"
{
#line 315 "prog_type_subst.m"
  {
#line 315 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 315 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
#line 315 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 316 "prog_type_subst.m"
    {
#line 316 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1));
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 316 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 316 "prog_type_subst.m"
    }
#line 2196 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 316 "prog_type_subst.m"
    {
#line 316 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
#line 316 "prog_type_subst.m"
      return;
    }
#line 315 "prog_type_subst.m"
  }
#line 66 "prog_type_subst.m"
}

#line 313 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 313 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 313 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 313 "prog_type_subst.m"
{
#line 313 "prog_type_subst.m"
  {
#line 313 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 313 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 313 "prog_type_subst.m"
    {
#line 313 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 313 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 313 "prog_type_subst.m"
  }
#line 313 "prog_type_subst.m"
}

#line 63 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(
#line 63 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 63 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Types0_5,
#line 63 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_6)
#line 63 "prog_type_subst.m"
{
#line 312 "prog_type_subst.m"
  {
#line 312 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 312 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
#line 312 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 313 "prog_type_subst.m"
    {
#line 313 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1));
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 313 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 313 "prog_type_subst.m"
    }
#line 2274 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 313 "prog_type_subst.m"
    {
#line 313 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
#line 313 "prog_type_subst.m"
      return;
    }
#line 312 "prog_type_subst.m"
  }
#line 63 "prog_type_subst.m"
}

#line 58 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(
#line 58 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 58 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_5,
#line 58 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 58 "prog_type_subst.m"
{
#line 265 "prog_type_subst.m"
  while (MR_TRUE)
#line 265 "prog_type_subst.m"
    {
#line 265 "prog_type_subst.m"
      /* tailcall optimized into a loop */
#line 265 "prog_type_subst.m"
      {
#line 265 "prog_type_subst.m"
        MR_bool parse_tree__prog_type_subst__succeeded;

#line 265 "prog_type_subst.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 2))))
#line 278 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 265 "prog_type_subst.m"
        else
#line 265 "prog_type_subst.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 1))))
#line 273 "prog_type_subst.m"
            {
#line 273 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 273 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 273 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_13;
#line 273 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 274 "prog_type_subst.m"
              {
#line 274 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_12, &parse_tree__prog_type_subst__Args_13);
              }
#line 275 "prog_type_subst.m"
              {
#line 275 "prog_type_subst.m"
                MR_Word base;
#line 275 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 275 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 275 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_11));
#line 275 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_13));
#line 275 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_25));
#line 275 "prog_type_subst.m"
              }
#line 273 "prog_type_subst.m"
            }
#line 265 "prog_type_subst.m"
          else
#line 265 "prog_type_subst.m"
            if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 0))))
#line 265 "prog_type_subst.m"
              {
#line 265 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 265 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 269 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Type1_9;
#line 266 "prog_type_subst.m"
                MR_Box parse_tree__prog_type_subst__conv0_Type1_9;

#line 266 "prog_type_subst.m"
                {
#line 266 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type1_9);
                }
#line 266 "prog_type_subst.m"
                if (parse_tree__prog_type_subst__succeeded)
#line 266 "prog_type_subst.m"
                  {
#line 266 "prog_type_subst.m"
                    parse_tree__prog_type_subst__Type1_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type1_9);
#line 266 "prog_type_subst.m"
                    parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 266 "prog_type_subst.m"
                  }
#line 269 "prog_type_subst.m"
                if (parse_tree__prog_type_subst__succeeded)
#line 267 "prog_type_subst.m"
                  {
#line 267 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Type2_10;
#line 401 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__V_46_46;

#line 401 "prog_type_subst.m"
                    {
#line 401 "prog_type_subst.m"
                      parse_tree__prog_type_subst__V_46_46 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__Type1_9);
                    }
#line 401 "prog_type_subst.m"
                    {
#line 401 "prog_type_subst.m"
                      parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__Kind_8, parse_tree__prog_type_subst__V_46_46);
                    }
#line 403 "prog_type_subst.m"
                    if (parse_tree__prog_type_subst__succeeded)
#line 402 "prog_type_subst.m"
                      parse_tree__prog_type_subst__Type2_10 = parse_tree__prog_type_subst__Type1_9;
#line 403 "prog_type_subst.m"
                    else
#line 404 "prog_type_subst.m"
                      {
#line 404 "prog_type_subst.m"
                        {
#line 404 "prog_type_subst.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
#line 404 "prog_type_subst.m"
                          return;
                        }
#line 404 "prog_type_subst.m"
                      }
#line 268 "prog_type_subst.m"
                    /* direct tailcall eliminated */
#line 268 "prog_type_subst.m"
                    {
#line 268 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Type0__tmp_copy_5 = parse_tree__prog_type_subst__Type2_10;

#line 268 "prog_type_subst.m"
                      parse_tree__prog_type_subst__Type0_5 = parse_tree__prog_type_subst__Type0__tmp_copy_5;
#line 268 "prog_type_subst.m"
                    }
#line 268 "prog_type_subst.m"
                    continue;
#line 267 "prog_type_subst.m"
                  }
#line 269 "prog_type_subst.m"
                else
#line 270 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 265 "prog_type_subst.m"
              }
#line 265 "prog_type_subst.m"
            else
#line 265 "prog_type_subst.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 296 "prog_type_subst.m"
                {
#line 296 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__TVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 296 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 296 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 296 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args_34;
#line 301 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__AppliedType0_21;
#line 298 "prog_type_subst.m"
                  MR_Box parse_tree__prog_type_subst__conv1_AppliedType0_21;

#line 297 "prog_type_subst.m"
                  {
#line 297 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_33, &parse_tree__prog_type_subst__Args_34);
                  }
#line 298 "prog_type_subst.m"
                  {
#line 298 "prog_type_subst.m"
                    parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_31)), &parse_tree__prog_type_subst__conv1_AppliedType0_21);
                  }
#line 298 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 298 "prog_type_subst.m"
                    {
#line 298 "prog_type_subst.m"
                      parse_tree__prog_type_subst__AppliedType0_21 = ((MR_Word) parse_tree__prog_type_subst__conv1_AppliedType0_21);
#line 298 "prog_type_subst.m"
                      parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 298 "prog_type_subst.m"
                    }
#line 301 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 299 "prog_type_subst.m"
                    {
#line 299 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__AppliedType_22;

#line 299 "prog_type_subst.m"
                      {
#line 299 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__AppliedType0_21, &parse_tree__prog_type_subst__AppliedType_22);
                      }
#line 300 "prog_type_subst.m"
                      {
#line 300 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_type_args_3_p_0(parse_tree__prog_type_subst__AppliedType_22, parse_tree__prog_type_subst__Args_34, parse_tree__prog_type_subst__Type_6);
#line 300 "prog_type_subst.m"
                        return;
                      }
#line 299 "prog_type_subst.m"
                    }
#line 301 "prog_type_subst.m"
                  else
#line 302 "prog_type_subst.m"
                    {
#line 302 "prog_type_subst.m"
                      MR_Word base;
#line 302 "prog_type_subst.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 302 "prog_type_subst.m"
                      *parse_tree__prog_type_subst__Type_6 = base;
#line 302 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_31));
#line 302 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_34));
#line 302 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_32));
#line 302 "prog_type_subst.m"
                    }
#line 296 "prog_type_subst.m"
                }
#line 265 "prog_type_subst.m"
              else
#line 265 "prog_type_subst.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 280 "prog_type_subst.m"
                  {
#line 280 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__MaybeReturn0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 280 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 280 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__MaybeReturn_20;
#line 280 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 280 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Args_27;

#line 281 "prog_type_subst.m"
                    {
#line 281 "prog_type_subst.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_26, &parse_tree__prog_type_subst__Args_27);
                    }
#line 286 "prog_type_subst.m"
                    if ((parse_tree__prog_type_subst__MaybeReturn0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "prog_type_subst.m"
                      parse_tree__prog_type_subst__MaybeReturn_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "prog_type_subst.m"
                    else
#line 283 "prog_type_subst.m"
                      {
#line 283 "prog_type_subst.m"
                        MR_Word parse_tree__prog_type_subst__Return0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn0_15, (MR_Integer) 0)));
#line 283 "prog_type_subst.m"
                        MR_Word parse_tree__prog_type_subst__Return_19;

#line 284 "prog_type_subst.m"
                        {
#line 284 "prog_type_subst.m"
                          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Return0_18, &parse_tree__prog_type_subst__Return_19);
                        }
#line 285 "prog_type_subst.m"
                        {
#line 285 "prog_type_subst.m"
                          parse_tree__prog_type_subst__MaybeReturn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_type_subst.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn_20, 0) = ((MR_Box) (parse_tree__prog_type_subst__Return_19));
#line 285 "prog_type_subst.m"
                        }
#line 283 "prog_type_subst.m"
                      }
#line 290 "prog_type_subst.m"
                    {
#line 290 "prog_type_subst.m"
                      MR_Word base;
#line 290 "prog_type_subst.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_type_subst.m"
                      *parse_tree__prog_type_subst__Type_6 = base;
#line 290 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_27));
#line 290 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__MaybeReturn_20));
#line 290 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Purity_16));
#line 290 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 290 "prog_type_subst.m"
                    }
#line 280 "prog_type_subst.m"
                  }
#line 265 "prog_type_subst.m"
                else
#line 265 "prog_type_subst.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 305 "prog_type_subst.m"
                    {
#line 305 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__BaseType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 305 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__BaseType_24;
#line 305 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Kind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 306 "prog_type_subst.m"
                      {
#line 306 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__BaseType0_23, &parse_tree__prog_type_subst__BaseType_24);
                      }
#line 307 "prog_type_subst.m"
                      {
#line 307 "prog_type_subst.m"
                        MR_Word base;
#line 307 "prog_type_subst.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "prog_type_subst.m"
                        *parse_tree__prog_type_subst__Type_6 = base;
#line 307 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 307 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_24));
#line 307 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_35));
#line 307 "prog_type_subst.m"
                      }
#line 305 "prog_type_subst.m"
                    }
#line 265 "prog_type_subst.m"
                  else
#line 292 "prog_type_subst.m"
                    {
#line 292 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Kind_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 292 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 292 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Args_30;

#line 293 "prog_type_subst.m"
                      {
#line 293 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_29, &parse_tree__prog_type_subst__Args_30);
                      }
#line 294 "prog_type_subst.m"
                      {
#line 294 "prog_type_subst.m"
                        MR_Word base;
#line 294 "prog_type_subst.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_type_subst.m"
                        *parse_tree__prog_type_subst__Type_6 = base;
#line 294 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 294 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_30));
#line 294 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_28));
#line 294 "prog_type_subst.m"
                      }
#line 292 "prog_type_subst.m"
                    }
#line 265 "prog_type_subst.m"
      }
#line 265 "prog_type_subst.m"
      break;
#line 265 "prog_type_subst.m"
    }
#line 58 "prog_type_subst.m"
}

#line 56 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(
#line 56 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 56 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_5,
#line 56 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 56 "prog_type_subst.m"
{
#line 220 "prog_type_subst.m"
  {
#line 220 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;

#line 220 "prog_type_subst.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 2))))
#line 232 "prog_type_subst.m"
      *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 220 "prog_type_subst.m"
    else
#line 220 "prog_type_subst.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 1))))
#line 227 "prog_type_subst.m"
        {
#line 227 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 227 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 227 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args_12;
#line 227 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Kind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 228 "prog_type_subst.m"
          {
#line 228 "prog_type_subst.m"
            parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_11, &parse_tree__prog_type_subst__Args_12);
          }
#line 229 "prog_type_subst.m"
          {
#line 229 "prog_type_subst.m"
            MR_Word base;
#line 229 "prog_type_subst.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 229 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = base;
#line 229 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
#line 229 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_12));
#line 229 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_23));
#line 229 "prog_type_subst.m"
          }
#line 227 "prog_type_subst.m"
        }
#line 220 "prog_type_subst.m"
      else
#line 220 "prog_type_subst.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 0))))
#line 220 "prog_type_subst.m"
          {
#line 220 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 220 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 223 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Type1_9;
#line 221 "prog_type_subst.m"
            MR_Box parse_tree__prog_type_subst__conv0_Type1_9;

#line 221 "prog_type_subst.m"
            {
#line 221 "prog_type_subst.m"
              parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type1_9);
            }
#line 221 "prog_type_subst.m"
            if (parse_tree__prog_type_subst__succeeded)
#line 221 "prog_type_subst.m"
              {
#line 221 "prog_type_subst.m"
                parse_tree__prog_type_subst__Type1_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type1_9);
#line 221 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 221 "prog_type_subst.m"
              }
#line 223 "prog_type_subst.m"
            if (parse_tree__prog_type_subst__succeeded)
#line 403 "prog_type_subst.m"
              {
#line 401 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__V_44_44;

#line 401 "prog_type_subst.m"
                {
#line 401 "prog_type_subst.m"
                  parse_tree__prog_type_subst__V_44_44 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__Type1_9);
                }
#line 401 "prog_type_subst.m"
                {
#line 401 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__Kind_8, parse_tree__prog_type_subst__V_44_44);
                }
#line 403 "prog_type_subst.m"
                if (parse_tree__prog_type_subst__succeeded)
#line 402 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type1_9;
#line 403 "prog_type_subst.m"
                else
#line 404 "prog_type_subst.m"
                  {
#line 404 "prog_type_subst.m"
                    {
#line 404 "prog_type_subst.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
#line 404 "prog_type_subst.m"
                      return;
                    }
#line 404 "prog_type_subst.m"
                  }
#line 403 "prog_type_subst.m"
              }
#line 223 "prog_type_subst.m"
            else
#line 224 "prog_type_subst.m"
              *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 220 "prog_type_subst.m"
          }
#line 220 "prog_type_subst.m"
        else
#line 220 "prog_type_subst.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 250 "prog_type_subst.m"
            {
#line 250 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 250 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 250 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 250 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_32;
#line 254 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__AppliedType_20;
#line 252 "prog_type_subst.m"
              MR_Box parse_tree__prog_type_subst__conv1_AppliedType_20;

#line 251 "prog_type_subst.m"
              {
#line 251 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_31, &parse_tree__prog_type_subst__Args_32);
              }
#line 252 "prog_type_subst.m"
              {
#line 252 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_29)), &parse_tree__prog_type_subst__conv1_AppliedType_20);
              }
#line 252 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 252 "prog_type_subst.m"
                {
#line 252 "prog_type_subst.m"
                  parse_tree__prog_type_subst__AppliedType_20 = ((MR_Word) parse_tree__prog_type_subst__conv1_AppliedType_20);
#line 252 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 252 "prog_type_subst.m"
                }
#line 254 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 253 "prog_type_subst.m"
                {
#line 253 "prog_type_subst.m"
                  parse_tree__prog_type_subst__apply_type_args_3_p_0(parse_tree__prog_type_subst__AppliedType_20, parse_tree__prog_type_subst__Args_32, parse_tree__prog_type_subst__Type_6);
#line 253 "prog_type_subst.m"
                  return;
                }
#line 254 "prog_type_subst.m"
              else
#line 255 "prog_type_subst.m"
                {
#line 255 "prog_type_subst.m"
                  MR_Word base;
#line 255 "prog_type_subst.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = base;
#line 255 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 255 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_29));
#line 255 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_32));
#line 255 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_30));
#line 255 "prog_type_subst.m"
                }
#line 250 "prog_type_subst.m"
            }
#line 220 "prog_type_subst.m"
          else
#line 220 "prog_type_subst.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 234 "prog_type_subst.m"
              {
#line 234 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__MaybeReturn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 234 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 234 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__MaybeReturn_19;
#line 234 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Args0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 234 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Args_25;

#line 235 "prog_type_subst.m"
                {
#line 235 "prog_type_subst.m"
                  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_24, &parse_tree__prog_type_subst__Args_25);
                }
#line 240 "prog_type_subst.m"
                if ((parse_tree__prog_type_subst__MaybeReturn0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "prog_type_subst.m"
                  parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "prog_type_subst.m"
                else
#line 237 "prog_type_subst.m"
                  {
#line 237 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Return0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn0_14, (MR_Integer) 0)));
#line 237 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Return_18;

#line 238 "prog_type_subst.m"
                    {
#line 238 "prog_type_subst.m"
                      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Return0_17, &parse_tree__prog_type_subst__Return_18);
                    }
#line 239 "prog_type_subst.m"
                    {
#line 239 "prog_type_subst.m"
                      parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn_19, 0) = ((MR_Box) (parse_tree__prog_type_subst__Return_18));
#line 239 "prog_type_subst.m"
                    }
#line 237 "prog_type_subst.m"
                  }
#line 244 "prog_type_subst.m"
                {
#line 244 "prog_type_subst.m"
                  MR_Word base;
#line 244 "prog_type_subst.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = base;
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_25));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__MaybeReturn_19));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Purity_15));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 244 "prog_type_subst.m"
                }
#line 234 "prog_type_subst.m"
              }
#line 220 "prog_type_subst.m"
            else
#line 220 "prog_type_subst.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 258 "prog_type_subst.m"
                {
#line 258 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 258 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType_22;
#line 258 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 259 "prog_type_subst.m"
                  {
#line 259 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__BaseType0_21, &parse_tree__prog_type_subst__BaseType_22);
                  }
#line 260 "prog_type_subst.m"
                  {
#line 260 "prog_type_subst.m"
                    MR_Word base;
#line 260 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 260 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 260 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 260 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_22));
#line 260 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_33));
#line 260 "prog_type_subst.m"
                  }
#line 258 "prog_type_subst.m"
                }
#line 220 "prog_type_subst.m"
              else
#line 246 "prog_type_subst.m"
                {
#line 246 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 246 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 246 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args_28;

#line 247 "prog_type_subst.m"
                  {
#line 247 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_27, &parse_tree__prog_type_subst__Args_28);
                  }
#line 248 "prog_type_subst.m"
                  {
#line 248 "prog_type_subst.m"
                    MR_Word base;
#line 248 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 248 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 248 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_28));
#line 248 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_26));
#line 248 "prog_type_subst.m"
                  }
#line 246 "prog_type_subst.m"
                }
#line 220 "prog_type_subst.m"
  }
#line 56 "prog_type_subst.m"
}

#line 53 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(
#line 53 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 53 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_5,
#line 53 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 53 "prog_type_subst.m"
{
#line 181 "prog_type_subst.m"
  {
#line 181 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;

#line 181 "prog_type_subst.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 2))))
#line 190 "prog_type_subst.m"
      *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 181 "prog_type_subst.m"
    else
#line 181 "prog_type_subst.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 1))))
#line 185 "prog_type_subst.m"
        {
#line 185 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 185 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 185 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args_12;
#line 185 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 186 "prog_type_subst.m"
          {
#line 186 "prog_type_subst.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_11, &parse_tree__prog_type_subst__Args_12);
          }
#line 187 "prog_type_subst.m"
          {
#line 187 "prog_type_subst.m"
            MR_Word base;
#line 187 "prog_type_subst.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = base;
#line 187 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
#line 187 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_12));
#line 187 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_22));
#line 187 "prog_type_subst.m"
          }
#line 185 "prog_type_subst.m"
        }
#line 181 "prog_type_subst.m"
      else
#line 181 "prog_type_subst.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 0))))
#line 181 "prog_type_subst.m"
          {
#line 181 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TVar0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 181 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 181 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TVar_9;
#line 146 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TVar1_42;
#line 144 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TypeInfo_8_43 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 144 "prog_type_subst.m"
            MR_Box parse_tree__prog_type_subst__conv0_TVar1_42;

#line 144 "prog_type_subst.m"
            {
#line 144 "prog_type_subst.m"
              parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_43, parse_tree__prog_type_subst__TypeInfo_8_43, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_7)), &parse_tree__prog_type_subst__conv0_TVar1_42);
            }
#line 144 "prog_type_subst.m"
            if (parse_tree__prog_type_subst__succeeded)
#line 144 "prog_type_subst.m"
              {
#line 144 "prog_type_subst.m"
                parse_tree__prog_type_subst__TVar1_42 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_42);
#line 144 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 144 "prog_type_subst.m"
              }
#line 146 "prog_type_subst.m"
            if (parse_tree__prog_type_subst__succeeded)
#line 145 "prog_type_subst.m"
              parse_tree__prog_type_subst__TVar_9 = parse_tree__prog_type_subst__TVar1_42;
#line 146 "prog_type_subst.m"
            else
#line 147 "prog_type_subst.m"
              parse_tree__prog_type_subst__TVar_9 = parse_tree__prog_type_subst__TVar0_7;
#line 183 "prog_type_subst.m"
            {
#line 183 "prog_type_subst.m"
              MR_Word base;
#line 183 "prog_type_subst.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_type_subst.m"
              *parse_tree__prog_type_subst__Type_6 = base;
#line 183 "prog_type_subst.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_9));
#line 183 "prog_type_subst.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_8));
#line 183 "prog_type_subst.m"
            }
#line 181 "prog_type_subst.m"
          }
#line 181 "prog_type_subst.m"
        else
#line 181 "prog_type_subst.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 208 "prog_type_subst.m"
            {
#line 208 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 208 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 208 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_30;
#line 208 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 208 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_32;
#line 146 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar1_37;
#line 144 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TypeInfo_8_38;
#line 144 "prog_type_subst.m"
              MR_Box parse_tree__prog_type_subst__conv1_TVar1_37;

#line 209 "prog_type_subst.m"
              {
#line 209 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_31, &parse_tree__prog_type_subst__Args_32);
              }
#line 3163 "parse_tree.prog_type_subst.c"
              parse_tree__prog_type_subst__TypeInfo_8_38 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 144 "prog_type_subst.m"
              {
#line 144 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_38, parse_tree__prog_type_subst__TypeInfo_8_38, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_28)), &parse_tree__prog_type_subst__conv1_TVar1_37);
              }
#line 144 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 144 "prog_type_subst.m"
                {
#line 144 "prog_type_subst.m"
                  parse_tree__prog_type_subst__TVar1_37 = ((MR_Word) parse_tree__prog_type_subst__conv1_TVar1_37);
#line 144 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 144 "prog_type_subst.m"
                }
#line 146 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 145 "prog_type_subst.m"
                parse_tree__prog_type_subst__TVar_30 = parse_tree__prog_type_subst__TVar1_37;
#line 146 "prog_type_subst.m"
              else
#line 147 "prog_type_subst.m"
                parse_tree__prog_type_subst__TVar_30 = parse_tree__prog_type_subst__TVar0_28;
#line 211 "prog_type_subst.m"
              {
#line 211 "prog_type_subst.m"
                MR_Word base;
#line 211 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 211 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 211 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_30));
#line 211 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_32));
#line 211 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_29));
#line 211 "prog_type_subst.m"
              }
#line 208 "prog_type_subst.m"
            }
#line 181 "prog_type_subst.m"
          else
#line 181 "prog_type_subst.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 192 "prog_type_subst.m"
              {
#line 192 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__MaybeReturn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 192 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 192 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__MaybeReturn_19;
#line 192 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Args0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 192 "prog_type_subst.m"
                MR_Word parse_tree__prog_type_subst__Args_24;

#line 193 "prog_type_subst.m"
                {
#line 193 "prog_type_subst.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_23, &parse_tree__prog_type_subst__Args_24);
                }
#line 198 "prog_type_subst.m"
                if ((parse_tree__prog_type_subst__MaybeReturn0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "prog_type_subst.m"
                  parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "prog_type_subst.m"
                else
#line 195 "prog_type_subst.m"
                  {
#line 195 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Return0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn0_14, (MR_Integer) 0)));
#line 195 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Return_18;

#line 196 "prog_type_subst.m"
                    {
#line 196 "prog_type_subst.m"
                      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Return0_17, &parse_tree__prog_type_subst__Return_18);
                    }
#line 197 "prog_type_subst.m"
                    {
#line 197 "prog_type_subst.m"
                      parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn_19, 0) = ((MR_Box) (parse_tree__prog_type_subst__Return_18));
#line 197 "prog_type_subst.m"
                    }
#line 195 "prog_type_subst.m"
                  }
#line 202 "prog_type_subst.m"
                {
#line 202 "prog_type_subst.m"
                  MR_Word base;
#line 202 "prog_type_subst.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 202 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = base;
#line 202 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_24));
#line 202 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__MaybeReturn_19));
#line 202 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Purity_15));
#line 202 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 202 "prog_type_subst.m"
                }
#line 192 "prog_type_subst.m"
              }
#line 181 "prog_type_subst.m"
            else
#line 181 "prog_type_subst.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 213 "prog_type_subst.m"
                {
#line 213 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 213 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType_21;
#line 213 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 214 "prog_type_subst.m"
                  {
#line 214 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__BaseType0_20, &parse_tree__prog_type_subst__BaseType_21);
                  }
#line 215 "prog_type_subst.m"
                  {
#line 215 "prog_type_subst.m"
                    MR_Word base;
#line 215 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 215 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 215 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_21));
#line 215 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_33));
#line 215 "prog_type_subst.m"
                  }
#line 213 "prog_type_subst.m"
                }
#line 181 "prog_type_subst.m"
              else
#line 204 "prog_type_subst.m"
                {
#line 204 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 204 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 204 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args_27;

#line 205 "prog_type_subst.m"
                  {
#line 205 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_26, &parse_tree__prog_type_subst__Args_27);
                  }
#line 206 "prog_type_subst.m"
                  {
#line 206 "prog_type_subst.m"
                    MR_Word base;
#line 206 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 206 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 206 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 206 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_27));
#line 206 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_25));
#line 206 "prog_type_subst.m"
                  }
#line 204 "prog_type_subst.m"
                }
#line 181 "prog_type_subst.m"
  }
#line 53 "prog_type_subst.m"
}

#line 175 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
#line 175 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 175 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 175 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 175 "prog_type_subst.m"
{
#line 175 "prog_type_subst.m"
  {
#line 175 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 175 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_8;

#line 175 "prog_type_subst.m"
    {
#line 175 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_8);
    }
#line 175 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_8));
#line 175 "prog_type_subst.m"
  }
#line 175 "prog_type_subst.m"
}

#line 48 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(
#line 48 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 48 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 48 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVars_7,
#line 48 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_8)
#line 48 "prog_type_subst.m"
{
#line 174 "prog_type_subst.m"
  {
#line 174 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 174 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_9_9;

#line 175 "prog_type_subst.m"
    {
#line 175 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 175 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
#line 175 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1));
#line 175 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 175 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 3) = ((MR_Box) (parse_tree__prog_type_subst__KindMap_5));
#line 175 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 4) = ((MR_Box) (parse_tree__prog_type_subst__Subst_6));
#line 175 "prog_type_subst.m"
    }
#line 175 "prog_type_subst.m"
    {
#line 175 "prog_type_subst.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__V_9_9, parse_tree__prog_type_subst__TVars_7, parse_tree__prog_type_subst__Types_8);
#line 175 "prog_type_subst.m"
      return;
    }
#line 174 "prog_type_subst.m"
  }
#line 48 "prog_type_subst.m"
}

#line 172 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
#line 172 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 172 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 172 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 172 "prog_type_subst.m"
{
#line 172 "prog_type_subst.m"
  {
#line 172 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 172 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_8;

#line 172 "prog_type_subst.m"
    {
#line 172 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_8);
    }
#line 172 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_8));
#line 172 "prog_type_subst.m"
  }
#line 172 "prog_type_subst.m"
}

#line 45 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(
#line 45 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 45 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 45 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVars_7,
#line 45 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_8)
#line 45 "prog_type_subst.m"
{
#line 171 "prog_type_subst.m"
  {
#line 171 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 171 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_9_9;

#line 172 "prog_type_subst.m"
    {
#line 172 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 172 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
#line 172 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1));
#line 172 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 172 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 3) = ((MR_Box) (parse_tree__prog_type_subst__KindMap_5));
#line 172 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 4) = ((MR_Box) (parse_tree__prog_type_subst__Subst_6));
#line 172 "prog_type_subst.m"
    }
#line 172 "prog_type_subst.m"
    {
#line 172 "prog_type_subst.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__V_9_9, parse_tree__prog_type_subst__TVars_7, parse_tree__prog_type_subst__Types_8);
#line 172 "prog_type_subst.m"
      return;
    }
#line 171 "prog_type_subst.m"
  }
#line 45 "prog_type_subst.m"
}

#line 169 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
#line 169 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 169 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 169 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 169 "prog_type_subst.m"
{
#line 169 "prog_type_subst.m"
  {
#line 169 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 169 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_TVar_6;

#line 169 "prog_type_subst.m"
    {
#line 169 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_TVar_6);
    }
#line 169 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_TVar_6));
#line 169 "prog_type_subst.m"
  }
#line 169 "prog_type_subst.m"
}

#line 42 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(
#line 42 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 42 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVars0_5,
#line 42 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__TVars_6)
#line 42 "prog_type_subst.m"
{
#line 168 "prog_type_subst.m"
  {
#line 168 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 168 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_10_10;
#line 168 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 169 "prog_type_subst.m"
    {
#line 169 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
#line 169 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1));
#line 169 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 169 "prog_type_subst.m"
    }
#line 3575 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 169 "prog_type_subst.m"
    {
#line 169 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeInfo_10_10, parse_tree__prog_type_subst__TypeInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__TVars0_5, parse_tree__prog_type_subst__TVars_6);
#line 169 "prog_type_subst.m"
      return;
    }
#line 168 "prog_type_subst.m"
  }
#line 42 "prog_type_subst.m"
}

#line 37 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(
#line 37 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 37 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 37 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar_7,
#line 37 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_8)
#line 37 "prog_type_subst.m"
{
#line 161 "prog_type_subst.m"
  {
#line 161 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 161 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Type0_9;
#line 159 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_Type0_9;

#line 159 "prog_type_subst.m"
    {
#line 159 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_6, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type0_9);
    }
#line 159 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 159 "prog_type_subst.m"
      {
#line 159 "prog_type_subst.m"
        parse_tree__prog_type_subst__Type0_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type0_9);
#line 159 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 159 "prog_type_subst.m"
      }
#line 161 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 160 "prog_type_subst.m"
      {
#line 160 "prog_type_subst.m"
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_6, parse_tree__prog_type_subst__Type0_9, parse_tree__prog_type_subst__Type_8);
#line 160 "prog_type_subst.m"
        return;
      }
#line 161 "prog_type_subst.m"
    else
#line 162 "prog_type_subst.m"
      {
#line 162 "prog_type_subst.m"
        MR_Word parse_tree__prog_type_subst__Kind_10;

#line 162 "prog_type_subst.m"
        {
#line 162 "prog_type_subst.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type_subst__KindMap_5, parse_tree__prog_type_subst__TVar_7, &parse_tree__prog_type_subst__Kind_10);
        }
#line 163 "prog_type_subst.m"
        {
#line 163 "prog_type_subst.m"
          MR_Word base;
#line 163 "prog_type_subst.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Type_8 = base;
#line 163 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
#line 163 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_10));
#line 163 "prog_type_subst.m"
        }
#line 162 "prog_type_subst.m"
      }
#line 161 "prog_type_subst.m"
  }
#line 37 "prog_type_subst.m"
}

#line 34 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(
#line 34 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 34 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 34 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar_7,
#line 34 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_8)
#line 34 "prog_type_subst.m"
{
#line 153 "prog_type_subst.m"
  {
#line 153 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 153 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Type0_9;
#line 151 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_Type0_9;

#line 151 "prog_type_subst.m"
    {
#line 151 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_6, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type0_9);
    }
#line 151 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 151 "prog_type_subst.m"
      {
#line 151 "prog_type_subst.m"
        parse_tree__prog_type_subst__Type0_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type0_9);
#line 151 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 151 "prog_type_subst.m"
      }
#line 153 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 152 "prog_type_subst.m"
      {
#line 152 "prog_type_subst.m"
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_6, parse_tree__prog_type_subst__Type0_9, parse_tree__prog_type_subst__Type_8);
#line 152 "prog_type_subst.m"
        return;
      }
#line 153 "prog_type_subst.m"
    else
#line 154 "prog_type_subst.m"
      {
#line 154 "prog_type_subst.m"
        MR_Word parse_tree__prog_type_subst__Kind_10;

#line 154 "prog_type_subst.m"
        {
#line 154 "prog_type_subst.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type_subst__KindMap_5, parse_tree__prog_type_subst__TVar_7, &parse_tree__prog_type_subst__Kind_10);
        }
#line 155 "prog_type_subst.m"
        {
#line 155 "prog_type_subst.m"
          MR_Word base;
#line 155 "prog_type_subst.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Type_8 = base;
#line 155 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
#line 155 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_10));
#line 155 "prog_type_subst.m"
        }
#line 154 "prog_type_subst.m"
      }
#line 153 "prog_type_subst.m"
  }
#line 34 "prog_type_subst.m"
}

#line 31 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(
#line 31 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 31 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar0_5,
#line 31 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__TVar_6)
#line 31 "prog_type_subst.m"
{
#line 146 "prog_type_subst.m"
  {
#line 146 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 146 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TVar1_7;
#line 144 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 144 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_TVar1_7;

#line 144 "prog_type_subst.m"
    {
#line 144 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_8, parse_tree__prog_type_subst__TypeInfo_8_8, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_5)), &parse_tree__prog_type_subst__conv0_TVar1_7);
    }
#line 144 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 144 "prog_type_subst.m"
      {
#line 144 "prog_type_subst.m"
        parse_tree__prog_type_subst__TVar1_7 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_7);
#line 144 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 144 "prog_type_subst.m"
      }
#line 146 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 145 "prog_type_subst.m"
      *parse_tree__prog_type_subst__TVar_6 = parse_tree__prog_type_subst__TVar1_7;
#line 146 "prog_type_subst.m"
    else
#line 147 "prog_type_subst.m"
      *parse_tree__prog_type_subst__TVar_6 = parse_tree__prog_type_subst__TVar0_5;
#line 146 "prog_type_subst.m"
  }
#line 31 "prog_type_subst.m"
}

#line 131 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_2,
#line 131 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_3,
#line 131 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_4)
#line 131 "prog_type_subst.m"
{
#line 131 "prog_type_subst.m"
  {
#line 131 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 131 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12;

#line 131 "prog_type_subst.m"
    {
#line 131 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_2), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_3), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12);
    }
#line 131 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12));
#line 131 "prog_type_subst.m"
  }
#line 131 "prog_type_subst.m"
}

#line 26 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(
#line 26 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 26 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap0_5,
#line 26 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__KindMap_6)
#line 26 "prog_type_subst.m"
{
#line 130 "prog_type_subst.m"
  {
#line 130 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 130 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_13_13;
#line 130 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_14_14;
#line 130 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;
#line 130 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;
#line 131 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv1_KindMap_6;

#line 131 "prog_type_subst.m"
    {
#line 131 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 131 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_3[0]));
#line 131 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1));
#line 131 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 131 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 131 "prog_type_subst.m"
    }
#line 3871 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 3873 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 131 "prog_type_subst.m"
    {
#line 131 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = mercury__map__init_0_f_0(parse_tree__prog_type_subst__TypeInfo_13_13, parse_tree__prog_type_subst__TypeCtorInfo_14_14);
    }
#line 131 "prog_type_subst.m"
    {
#line 131 "prog_type_subst.m"
      mercury__map__foldl_4_p_0(parse_tree__prog_type_subst__TypeInfo_13_13, parse_tree__prog_type_subst__TypeCtorInfo_14_14, (MR_Word) &parse_tree__prog_type_subst_scalar_common_2[0], parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__KindMap0_5, ((MR_Box) (parse_tree__prog_type_subst__V_8_8)), &parse_tree__prog_type_subst__conv1_KindMap_6);
    }
#line 131 "prog_type_subst.m"
    *parse_tree__prog_type_subst__KindMap_6 = ((MR_Word) parse_tree__prog_type_subst__conv1_KindMap_6);
#line 130 "prog_type_subst.m"
  }
#line 26 "prog_type_subst.m"
}

void mercury__parse_tree__prog_type_subst__init(void)
{
}

void mercury__parse_tree__prog_type_subst__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_subst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_type_subst. */
