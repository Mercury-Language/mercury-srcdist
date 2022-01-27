/*
** Automatically generated from `set_of_var.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module parse_tree.set_of_var. */
/* :- implementation. */

/*
INIT mercury__parse_tree__set_of_var__init
ENDINIT
*/

#include "parse_tree.set_of_var.mih"


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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1;

#line 135 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 138 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 141 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 150 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 153 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 156 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 158 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 161 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 164 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 166 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 168 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 171 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 174 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 176 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 179 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 182 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 184 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 186 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 189 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 192 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 194 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 196 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 199 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 202 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 204 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 206 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 208 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_4);

#line 318 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__VarB_6,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__3_15,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__4_16,
#line 318 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__5_17);

#line 457 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__divide_constraints_6_p_0(
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_24,
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
#line 457 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__3_3,
#line 457 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__4_4,
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5,
#line 457 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Vars_6);

#line 395 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__next_colour_4_p_0(
#line 395 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_20,
#line 395 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Vars0_5,
#line 395 "set_of_var.m"
  MR_Word parse_tree__set_of_var__ConstraintList_6,
#line 395 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Remainder_7,
#line 395 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__SameColour_8);

#line 380 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__find_all_colours_3_p_0(
#line 380 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_13,
#line 380 "set_of_var.m"
  MR_Word parse_tree__set_of_var__ConstraintList_4,
#line 380 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Vars_5,
#line 380 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__ColourList_6);

#line 329 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list2_4_p_0(
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__A_5,
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__B_6,
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetsAcc_7,
#line 329 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__4_4);

#line 318 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0_1(
#line 318 "set_of_var.m"
  MR_Box parse_tree__set_of_var__closure_arg,
#line 318 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 318 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 318 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__wrapper_arg_3);

#line 314 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0(
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_5,
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__VarB_6,
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13,
#line 314 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Sets_14);

#line 327 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0_1(
#line 327 "set_of_var.m"
  MR_Box parse_tree__set_of_var__closure_arg,
#line 327 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 327 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 327 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__wrapper_arg_3);

#line 312 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0_1(
#line 312 "set_of_var.m"
  MR_Box parse_tree__set_of_var__closure_arg,
#line 312 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 312 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 312 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_1[4][2];

static /* final */ const MR_Integer parse_tree__set_of_var_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_3[3][8];




static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1)),
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1)),
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_1[2]))
  },
};

static /* final */ const MR_Integer parse_tree__set_of_var_scalar_common_2[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_3[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1))
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



#line 427 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 435 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__term__pti_var_1__pseudo_1
  }
};

#line 443 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 451 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 459 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 467 "parse_tree.set_of_var.c"
const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_progvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_progvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 488 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 496 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 504 "parse_tree.set_of_var.c"
const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_tvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_tvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 525 "parse_tree.set_of_var.c"
const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_var_1_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_var_1_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 546 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 549 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 551 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 553 "parse_tree.set_of_var.c"
{
#line 555 "parse_tree.set_of_var.c"
  {
#line 557 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 560 "parse_tree.set_of_var.c"
    {
#line 562 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_progvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 565 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 567 "parse_tree.set_of_var.c"
  }
#line 569 "parse_tree.set_of_var.c"
}

#line 572 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 575 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 577 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 579 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 581 "parse_tree.set_of_var.c"
{
#line 583 "parse_tree.set_of_var.c"
  {
#line 585 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 588 "parse_tree.set_of_var.c"
    {
#line 590 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_progvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 593 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 595 "parse_tree.set_of_var.c"
  }
#line 597 "parse_tree.set_of_var.c"
}

#line 600 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 603 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 605 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 607 "parse_tree.set_of_var.c"
{
#line 609 "parse_tree.set_of_var.c"
  {
#line 611 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 614 "parse_tree.set_of_var.c"
    {
#line 616 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_tvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 619 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 621 "parse_tree.set_of_var.c"
  }
#line 623 "parse_tree.set_of_var.c"
}

#line 626 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 629 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 631 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 633 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 635 "parse_tree.set_of_var.c"
{
#line 637 "parse_tree.set_of_var.c"
  {
#line 639 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 642 "parse_tree.set_of_var.c"
    {
#line 644 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_tvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 647 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 649 "parse_tree.set_of_var.c"
  }
#line 651 "parse_tree.set_of_var.c"
}

#line 654 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 657 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 659 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 661 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 663 "parse_tree.set_of_var.c"
{
#line 665 "parse_tree.set_of_var.c"
  {
#line 667 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 670 "parse_tree.set_of_var.c"
    {
#line 672 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 675 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 677 "parse_tree.set_of_var.c"
  }
#line 679 "parse_tree.set_of_var.c"
}

#line 682 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 685 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 687 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 689 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 691 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_4)
#line 693 "parse_tree.set_of_var.c"
{
#line 695 "parse_tree.set_of_var.c"
  {
#line 697 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 700 "parse_tree.set_of_var.c"
    {
#line 702 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), &parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_3), ((MR_Word) parse_tree__set_of_var__wrapper_arg_4));
    }
#line 705 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_2 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 707 "parse_tree.set_of_var.c"
  }
#line 709 "parse_tree.set_of_var.c"
}

#line 318 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__VarB_6,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__3_15,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__4_16,
#line 318 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__5_17)
#line 318 "set_of_var.m"
{
#line 318 "set_of_var.m"
  {
#line 318 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 318 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_34;
#line 318 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_36;
#line 318 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Set_12;
#line 318 "set_of_var.m"
    MR_Word parse_tree__set_of_var__V_18_18;
#line 318 "set_of_var.m"
    MR_Word parse_tree__set_of_var__V_19_19;

#line 320 "set_of_var.m"
    {
#line 320 "set_of_var.m"
      parse_tree__set_of_var__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "set_of_var.m"
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__V_19_19, 0) = ((MR_Box) (parse_tree__set_of_var__VarB_6));
#line 320 "set_of_var.m"
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "set_of_var.m"
    }
#line 320 "set_of_var.m"
    {
#line 320 "set_of_var.m"
      parse_tree__set_of_var__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "set_of_var.m"
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__V_18_18, 0) = ((MR_Box) (parse_tree__set_of_var__HeadVar__3_15));
#line 320 "set_of_var.m"
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__V_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__V_19_19));
#line 320 "set_of_var.m"
    }
#line 762 "parse_tree.set_of_var.c"
    {
#line 764 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 768 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 770 "parse_tree.set_of_var.c"
    }
#line 772 "parse_tree.set_of_var.c"
    {
#line 774 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 776 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 778 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 780 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_34));
#line 782 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      parse_tree__set_of_var__Set_12 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_25, parse_tree__set_of_var__TypeClassInfo_for_enum_36, parse_tree__set_of_var__V_18_18);
    }
#line 321 "set_of_var.m"
    {
#line 321 "set_of_var.m"
      MR_Word base;
#line 321 "set_of_var.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "set_of_var.m"
      *parse_tree__set_of_var__HeadVar__5_17 = base;
#line 321 "set_of_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__Set_12));
#line 321 "set_of_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__HeadVar__4_16));
#line 321 "set_of_var.m"
    }
#line 318 "set_of_var.m"
  }
#line 318 "set_of_var.m"
}

#line 187 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0(
#line 187 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 187 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__1_1,
#line 187 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
#line 187 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__3_3)
#line 187 "set_of_var.m"
{
#line 187 "set_of_var.m"
  {
#line 187 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 187 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 187 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_4 = parse_tree__set_of_var__HeadVar__2_2;
#line 187 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_5 = parse_tree__set_of_var__HeadVar__3_3;

#line 832 "parse_tree.set_of_var.c"
    {
#line 834 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 836 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 838 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 840 "parse_tree.set_of_var.c"
    }
#line 187 "set_of_var.m"
    {
#line 187 "set_of_var.m"
      mercury__tree_bitset____Compare____tree_bitset_1_0(parse_tree__set_of_var__TypeInfo_8_8, parse_tree__set_of_var__HeadVar__1_1, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_4, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_5);
#line 187 "set_of_var.m"
      return;
    }
#line 187 "set_of_var.m"
  }
#line 187 "set_of_var.m"
}

#line 187 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0(
#line 187 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 187 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
#line 187 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2)
#line 187 "set_of_var.m"
{
#line 187 "set_of_var.m"
  {
#line 187 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 187 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 187 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_3 = parse_tree__set_of_var__HeadVar__1_1;
#line 187 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_4 = parse_tree__set_of_var__HeadVar__2_2;

#line 876 "parse_tree.set_of_var.c"
    {
#line 878 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 882 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 884 "parse_tree.set_of_var.c"
    }
#line 187 "set_of_var.m"
    {
#line 187 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_3, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_4);
    }
#line 187 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 187 "set_of_var.m"
  }
#line 187 "set_of_var.m"
}

#line 28 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0(
#line 28 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__1_1,
#line 28 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
#line 28 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__3_3)
#line 28 "set_of_var.m"
{
#line 28 "set_of_var.m"
  {
#line 28 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 28 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_4 = parse_tree__set_of_var__HeadVar__2_2;
#line 28 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_5 = parse_tree__set_of_var__HeadVar__3_3;

#line 28 "set_of_var.m"
    {
#line 28 "set_of_var.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[3], parse_tree__set_of_var__HeadVar__1_1, ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_5)));
#line 28 "set_of_var.m"
      return;
    }
#line 28 "set_of_var.m"
  }
#line 28 "set_of_var.m"
}

#line 28 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0(
#line 28 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
#line 28 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2)
#line 28 "set_of_var.m"
{
#line 28 "set_of_var.m"
  {
#line 28 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 28 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_3 = parse_tree__set_of_var__HeadVar__1_1;
#line 28 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_4 = parse_tree__set_of_var__HeadVar__2_2;

#line 28 "set_of_var.m"
    {
#line 28 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[3], ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_4)));
    }
#line 28 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 28 "set_of_var.m"
  }
#line 28 "set_of_var.m"
}

#line 27 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0(
#line 27 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__1_1,
#line 27 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
#line 27 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__3_3)
#line 27 "set_of_var.m"
{
#line 27 "set_of_var.m"
  {
#line 27 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 27 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_4 = parse_tree__set_of_var__HeadVar__2_2;
#line 27 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_5 = parse_tree__set_of_var__HeadVar__3_3;

#line 27 "set_of_var.m"
    {
#line 27 "set_of_var.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[1], parse_tree__set_of_var__HeadVar__1_1, ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_5)));
#line 27 "set_of_var.m"
      return;
    }
#line 27 "set_of_var.m"
  }
#line 27 "set_of_var.m"
}

#line 27 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0(
#line 27 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
#line 27 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2)
#line 27 "set_of_var.m"
{
#line 27 "set_of_var.m"
  {
#line 27 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 27 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_3 = parse_tree__set_of_var__HeadVar__1_1;
#line 27 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_4 = parse_tree__set_of_var__HeadVar__2_2;

#line 27 "set_of_var.m"
    {
#line 27 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[1], ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_4)));
    }
#line 27 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 27 "set_of_var.m"
  }
#line 27 "set_of_var.m"
}

#line 457 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__divide_constraints_6_p_0(
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_24,
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
#line 457 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__3_3,
#line 457 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__4_4,
#line 457 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5,
#line 457 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Vars_6)
#line 457 "set_of_var.m"
{
#line 461 "set_of_var.m"
  {
#line 461 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;

#line 461 "set_of_var.m"
    if ((parse_tree__set_of_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "set_of_var.m"
      {
#line 461 "set_of_var.m"
        *parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "set_of_var.m"
        *parse_tree__set_of_var__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "set_of_var.m"
        *parse_tree__set_of_var__STATE_VARIABLE_Vars_6 = parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5;
#line 461 "set_of_var.m"
      }
#line 461 "set_of_var.m"
    else
#line 462 "set_of_var.m"
      {
#line 462 "set_of_var.m"
        MR_Word parse_tree__set_of_var__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__2_2, (MR_Integer) 0)));
#line 462 "set_of_var.m"
        MR_Word parse_tree__set_of_var__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__2_2, (MR_Integer) 1)));
#line 462 "set_of_var.m"
        MR_Word parse_tree__set_of_var__C0_17;
#line 462 "set_of_var.m"
        MR_Word parse_tree__set_of_var__NC0_18;
#line 462 "set_of_var.m"
        MR_Word parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22;
#line 473 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_7_28;
#line 473 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_30;

#line 463 "set_of_var.m"
        {
#line 463 "set_of_var.m"
          parse_tree__set_of_var__divide_constraints_6_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__Ss_13, &parse_tree__set_of_var__C0_17, &parse_tree__set_of_var__NC0_18, parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5, &parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22);
        }
#line 1082 "parse_tree.set_of_var.c"
        {
#line 1084 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1088 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1090 "parse_tree.set_of_var.c"
        }
#line 1092 "parse_tree.set_of_var.c"
        {
#line 1094 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1098 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1100 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_28));
#line 1102 "parse_tree.set_of_var.c"
        }
#line 215 "set_of_var.m"
        {
#line 215 "set_of_var.m"
          parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__TypeClassInfo_for_enum_30, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__S_12);
        }
#line 473 "set_of_var.m"
        if (parse_tree__set_of_var__succeeded)
#line 465 "set_of_var.m"
          {
#line 465 "set_of_var.m"
            MR_Word parse_tree__set_of_var__T_19;
#line 303 "set_of_var.m"
            MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6;

#line 268 "set_of_var.m"
            {
#line 268 "set_of_var.m"
              mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__TypeClassInfo_for_enum_30, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__S_12, &parse_tree__set_of_var__T_19);
            }
#line 206 "set_of_var.m"
            {
#line 206 "set_of_var.m"
              parse_tree__set_of_var__succeeded = mercury__tree_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_7_28, (MR_Word) parse_tree__set_of_var__T_19);
            }
#line 468 "set_of_var.m"
            if (parse_tree__set_of_var__succeeded)
#line 467 "set_of_var.m"
              *parse_tree__set_of_var__HeadVar__3_3 = parse_tree__set_of_var__C0_17;
#line 468 "set_of_var.m"
            else
#line 469 "set_of_var.m"
              {
#line 469 "set_of_var.m"
                MR_Word base;
#line 469 "set_of_var.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "set_of_var.m"
                *parse_tree__set_of_var__HeadVar__3_3 = base;
#line 469 "set_of_var.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__T_19));
#line 469 "set_of_var.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__C0_17));
#line 469 "set_of_var.m"
              }
#line 471 "set_of_var.m"
            *parse_tree__set_of_var__HeadVar__4_4 = parse_tree__set_of_var__NC0_18;
#line 303 "set_of_var.m"
            {
#line 303 "set_of_var.m"
              mercury__tree_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_7_28, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22, (MR_Word) parse_tree__set_of_var__T_19, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6);
            }
#line 303 "set_of_var.m"
            *parse_tree__set_of_var__STATE_VARIABLE_Vars_6 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6;
#line 465 "set_of_var.m"
          }
#line 473 "set_of_var.m"
        else
#line 474 "set_of_var.m"
          {
#line 474 "set_of_var.m"
            *parse_tree__set_of_var__HeadVar__3_3 = parse_tree__set_of_var__C0_17;
#line 475 "set_of_var.m"
            {
#line 475 "set_of_var.m"
              MR_Word base;
#line 475 "set_of_var.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "set_of_var.m"
              *parse_tree__set_of_var__HeadVar__4_4 = base;
#line 475 "set_of_var.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__S_12));
#line 475 "set_of_var.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__NC0_18));
#line 475 "set_of_var.m"
            }
#line 474 "set_of_var.m"
            *parse_tree__set_of_var__STATE_VARIABLE_Vars_6 = parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22;
#line 474 "set_of_var.m"
          }
#line 462 "set_of_var.m"
      }
#line 461 "set_of_var.m"
  }
#line 457 "set_of_var.m"
}

#line 395 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__next_colour_4_p_0(
#line 395 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_20,
#line 395 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Vars0_5,
#line 395 "set_of_var.m"
  MR_Word parse_tree__set_of_var__ConstraintList_6,
#line 395 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Remainder_7,
#line 395 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__SameColour_8)
#line 395 "set_of_var.m"
{
#line 442 "set_of_var.m"
  {
#line 442 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;

#line 442 "set_of_var.m"
    if ((parse_tree__set_of_var__ConstraintList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "set_of_var.m"
      {
#line 444 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_4_26;

#line 445 "set_of_var.m"
        *parse_tree__set_of_var__Remainder_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1219 "parse_tree.set_of_var.c"
        {
#line 1221 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1225 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1227 "parse_tree.set_of_var.c"
        }
#line 191 "set_of_var.m"
        {
#line 191 "set_of_var.m"
          *parse_tree__set_of_var__SameColour_8 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_105_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_0_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeInfo_4_26);
        }
#line 444 "set_of_var.m"
      }
#line 442 "set_of_var.m"
    else
#line 401 "set_of_var.m"
      {
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_22_22;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_24_24;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__Var_11;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__Vars1_12;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__WereContaining_13;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__NotContaining_14;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__RestVars_15;
#line 401 "set_of_var.m"
        MR_Word parse_tree__set_of_var__ResidueSets_18;
#line 487 "set_of_var.m"
        MR_Word parse_tree__set_of_var__VarPrime_30;
#line 487 "set_of_var.m"
        MR_Word parse_tree__set_of_var__VarsPrime_31;
#line 280 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_11_41;
#line 280 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_43;
#line 280 "set_of_var.m"
        MR_Box parse_tree__set_of_var__conv1_VarPrime_30;
#line 280 "set_of_var.m"
        MR_Word parse_tree__set_of_var__conv0_VarsPrime_31;
#line 441 "set_of_var.m"
        MR_Word parse_tree__set_of_var__conv2_Remainder_7;

#line 1271 "parse_tree.set_of_var.c"
        {
#line 1273 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_11_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1275 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1277 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1279 "parse_tree.set_of_var.c"
        }
#line 1281 "parse_tree.set_of_var.c"
        {
#line 1283 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1287 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1289 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_41));
#line 1291 "parse_tree.set_of_var.c"
        }
#line 280 "set_of_var.m"
        {
#line 280 "set_of_var.m"
          parse_tree__set_of_var__succeeded = mercury__tree_bitset__remove_least_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_43, &parse_tree__set_of_var__conv1_VarPrime_30, (MR_Word) parse_tree__set_of_var__Vars0_5, &parse_tree__set_of_var__conv0_VarsPrime_31);
        }
#line 280 "set_of_var.m"
        if (parse_tree__set_of_var__succeeded)
#line 280 "set_of_var.m"
          {
#line 280 "set_of_var.m"
            parse_tree__set_of_var__VarPrime_30 = ((MR_Word) parse_tree__set_of_var__conv1_VarPrime_30);
#line 280 "set_of_var.m"
            parse_tree__set_of_var__VarsPrime_31 = (MR_Word) parse_tree__set_of_var__conv0_VarsPrime_31;
#line 280 "set_of_var.m"
            parse_tree__set_of_var__succeeded = MR_TRUE;
#line 280 "set_of_var.m"
          }
#line 487 "set_of_var.m"
        if (parse_tree__set_of_var__succeeded)
#line 485 "set_of_var.m"
          {
#line 485 "set_of_var.m"
            parse_tree__set_of_var__Var_11 = parse_tree__set_of_var__VarPrime_30;
#line 486 "set_of_var.m"
            parse_tree__set_of_var__Vars1_12 = parse_tree__set_of_var__VarsPrime_31;
#line 485 "set_of_var.m"
          }
#line 487 "set_of_var.m"
        else
#line 488 "set_of_var.m"
          {
#line 488 "set_of_var.m"
            {
#line 488 "set_of_var.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.set_of_var", (MR_String) "predicate \140parse_tree.set_of_var.choose_var\'/3", (MR_String) "no vars!");
#line 488 "set_of_var.m"
              return;
            }
#line 488 "set_of_var.m"
          }
#line 407 "set_of_var.m"
        {
#line 407 "set_of_var.m"
          parse_tree__set_of_var__divide_constraints_6_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__Var_11, parse_tree__set_of_var__ConstraintList_6, &parse_tree__set_of_var__WereContaining_13, &parse_tree__set_of_var__NotContaining_14, parse_tree__set_of_var__Vars1_12, &parse_tree__set_of_var__RestVars_15);
        }
#line 428 "set_of_var.m"
        if ((parse_tree__set_of_var__NotContaining_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "set_of_var.m"
          {
#line 429 "set_of_var.m"
            MR_Word parse_tree__set_of_var__TypeInfo_6_46;
#line 429 "set_of_var.m"
            MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_48;

#line 1347 "parse_tree.set_of_var.c"
            {
#line 1349 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_6_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1351 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1353 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1355 "parse_tree.set_of_var.c"
            }
#line 1357 "parse_tree.set_of_var.c"
            {
#line 1359 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeClassInfo_for_enum_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1363 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1365 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_46));
#line 1367 "parse_tree.set_of_var.c"
            }
#line 195 "set_of_var.m"
            {
#line 195 "set_of_var.m"
              *parse_tree__set_of_var__SameColour_8 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_48, parse_tree__set_of_var__Var_11);
            }
#line 435 "set_of_var.m"
            parse_tree__set_of_var__ResidueSets_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "set_of_var.m"
          }
#line 428 "set_of_var.m"
        else
#line 418 "set_of_var.m"
          {
#line 418 "set_of_var.m"
            MR_Word parse_tree__set_of_var__TypeInfo_5_51;

#line 1385 "parse_tree.set_of_var.c"
            {
#line 1387 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_5_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1389 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1391 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1393 "parse_tree.set_of_var.c"
            }
#line 206 "set_of_var.m"
            {
#line 206 "set_of_var.m"
              parse_tree__set_of_var__succeeded = mercury__tree_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_51, (MR_Word) parse_tree__set_of_var__RestVars_15);
            }
#line 418 "set_of_var.m"
            if (parse_tree__set_of_var__succeeded)
#line 416 "set_of_var.m"
              {
#line 416 "set_of_var.m"
                MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_56;

#line 1407 "parse_tree.set_of_var.c"
                {
#line 1409 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1413 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1415 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_5_51));
#line 1417 "parse_tree.set_of_var.c"
                }
#line 195 "set_of_var.m"
                {
#line 195 "set_of_var.m"
                  *parse_tree__set_of_var__SameColour_8 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_56, parse_tree__set_of_var__Var_11);
                }
#line 417 "set_of_var.m"
                parse_tree__set_of_var__ResidueSets_18 = parse_tree__set_of_var__NotContaining_14;
#line 416 "set_of_var.m"
              }
#line 418 "set_of_var.m"
            else
#line 423 "set_of_var.m"
              {
#line 423 "set_of_var.m"
                MR_Word parse_tree__set_of_var__TypeInfo_11_63;
#line 423 "set_of_var.m"
                MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_65;
#line 423 "set_of_var.m"
                MR_Word parse_tree__set_of_var__SameColour0_19;

#line 423 "set_of_var.m"
                {
#line 423 "set_of_var.m"
                  parse_tree__set_of_var__next_colour_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__RestVars_15, parse_tree__set_of_var__NotContaining_14, &parse_tree__set_of_var__ResidueSets_18, &parse_tree__set_of_var__SameColour0_19);
                }
#line 1444 "parse_tree.set_of_var.c"
                {
#line 1446 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeInfo_11_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1448 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1450 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1452 "parse_tree.set_of_var.c"
                }
#line 1454 "parse_tree.set_of_var.c"
                {
#line 1456 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1460 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1462 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_63));
#line 1464 "parse_tree.set_of_var.c"
                }
#line 262 "set_of_var.m"
                {
#line 262 "set_of_var.m"
                  mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_65, parse_tree__set_of_var__Var_11, parse_tree__set_of_var__SameColour0_19, parse_tree__set_of_var__SameColour_8);
                }
#line 423 "set_of_var.m"
              }
#line 418 "set_of_var.m"
          }
#line 1475 "parse_tree.set_of_var.c"
        {
#line 1477 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1481 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1483 "parse_tree.set_of_var.c"
        }
#line 1485 "parse_tree.set_of_var.c"
        {
#line 1487 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1489 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1491 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_22_22));
#line 1493 "parse_tree.set_of_var.c"
        }
#line 441 "set_of_var.m"
        {
#line 441 "set_of_var.m"
          mercury__list__append_3_p_1(parse_tree__set_of_var__TypeInfo_24_24, (MR_Word) parse_tree__set_of_var__ResidueSets_18, (MR_Word) parse_tree__set_of_var__WereContaining_13, &parse_tree__set_of_var__conv2_Remainder_7);
        }
#line 441 "set_of_var.m"
        *parse_tree__set_of_var__Remainder_7 = (MR_Word) parse_tree__set_of_var__conv2_Remainder_7;
#line 401 "set_of_var.m"
      }
#line 442 "set_of_var.m"
  }
#line 395 "set_of_var.m"
}

#line 380 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__find_all_colours_3_p_0(
#line 380 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_13,
#line 380 "set_of_var.m"
  MR_Word parse_tree__set_of_var__ConstraintList_4,
#line 380 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Vars_5,
#line 380 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__ColourList_6)
#line 380 "set_of_var.m"
{
#line 387 "set_of_var.m"
  {
#line 387 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;

#line 387 "set_of_var.m"
    if ((parse_tree__set_of_var__ConstraintList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "set_of_var.m"
      *parse_tree__set_of_var__ColourList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "set_of_var.m"
    else
#line 388 "set_of_var.m"
      {
#line 388 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_9_18;
#line 388 "set_of_var.m"
        MR_Word parse_tree__set_of_var__RemainingConstraints_9;
#line 388 "set_of_var.m"
        MR_Word parse_tree__set_of_var__Colour_10;
#line 388 "set_of_var.m"
        MR_Word parse_tree__set_of_var__RestVars_11;
#line 388 "set_of_var.m"
        MR_Word parse_tree__set_of_var__ColourList0_12;
#line 303 "set_of_var.m"
        MR_Word parse_tree__set_of_var__conv0_RestVars_11;

#line 389 "set_of_var.m"
        {
#line 389 "set_of_var.m"
          parse_tree__set_of_var__next_colour_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_13, parse_tree__set_of_var__Vars_5, parse_tree__set_of_var__ConstraintList_4, &parse_tree__set_of_var__RemainingConstraints_9, &parse_tree__set_of_var__Colour_10);
        }
#line 1553 "parse_tree.set_of_var.c"
        {
#line 1555 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1557 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1559 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_13));
#line 1561 "parse_tree.set_of_var.c"
        }
#line 303 "set_of_var.m"
        {
#line 303 "set_of_var.m"
          mercury__tree_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_9_18, (MR_Word) parse_tree__set_of_var__Vars_5, (MR_Word) parse_tree__set_of_var__Colour_10, &parse_tree__set_of_var__conv0_RestVars_11);
        }
#line 303 "set_of_var.m"
        parse_tree__set_of_var__RestVars_11 = (MR_Word) parse_tree__set_of_var__conv0_RestVars_11;
#line 391 "set_of_var.m"
        {
#line 391 "set_of_var.m"
          parse_tree__set_of_var__find_all_colours_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_13, parse_tree__set_of_var__RemainingConstraints_9, parse_tree__set_of_var__RestVars_11, &parse_tree__set_of_var__ColourList0_12);
        }
#line 392 "set_of_var.m"
        {
#line 392 "set_of_var.m"
          MR_Word base;
#line 392 "set_of_var.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "set_of_var.m"
          *parse_tree__set_of_var__ColourList_6 = base;
#line 392 "set_of_var.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__Colour_10));
#line 392 "set_of_var.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__ColourList0_12));
#line 392 "set_of_var.m"
        }
#line 388 "set_of_var.m"
      }
#line 387 "set_of_var.m"
  }
#line 380 "set_of_var.m"
}

#line 329 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list2_4_p_0(
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__A_5,
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__B_6,
#line 329 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetsAcc_7,
#line 329 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__4_4)
#line 329 "set_of_var.m"
{
#line 332 "set_of_var.m"
  {
#line 332 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 332 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 332 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_13_13;
#line 332 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Product_8;
#line 332 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__4_4;

#line 1624 "parse_tree.set_of_var.c"
    {
#line 1626 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1628 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1630 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1632 "parse_tree.set_of_var.c"
    }
#line 1634 "parse_tree.set_of_var.c"
    {
#line 1636 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1638 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1640 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1642 "parse_tree.set_of_var.c"
    }
#line 333 "set_of_var.m"
    {
#line 333 "set_of_var.m"
      parse_tree__set_of_var__cartesian_product_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__A_5, parse_tree__set_of_var__B_6, &parse_tree__set_of_var__Product_8);
    }
#line 332 "set_of_var.m"
    {
#line 332 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__4_4 = mercury__list__f_43_43_2_f_0(parse_tree__set_of_var__TypeInfo_13_13, (MR_Word) parse_tree__set_of_var__Product_8, (MR_Word) parse_tree__set_of_var__SetsAcc_7);
    }
#line 332 "set_of_var.m"
    *parse_tree__set_of_var__HeadVar__4_4 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__4_4;
#line 332 "set_of_var.m"
  }
#line 329 "set_of_var.m"
}

#line 318 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0_1(
#line 318 "set_of_var.m"
  MR_Box parse_tree__set_of_var__closure_arg,
#line 318 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 318 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 318 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__wrapper_arg_3)
#line 318 "set_of_var.m"
{
#line 318 "set_of_var.m"
  {
#line 318 "set_of_var.m"
    MR_Box parse_tree__set_of_var__closure = parse_tree__set_of_var__closure_arg;
#line 318 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__5_17;

#line 318 "set_of_var.m"
    {
#line 318 "set_of_var.m"
      parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_HeadVar__5_17);
    }
#line 318 "set_of_var.m"
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__5_17));
#line 318 "set_of_var.m"
  }
#line 318 "set_of_var.m"
}

#line 314 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0(
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_5,
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__VarB_6,
#line 314 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13,
#line 314 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Sets_14)
#line 314 "set_of_var.m"
{
#line 317 "set_of_var.m"
  {
#line 317 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 317 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_29_29;
#line 317 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_31_31;
#line 317 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_14_39;
#line 317 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_41;
#line 317 "set_of_var.m"
    MR_Word parse_tree__set_of_var__Pred_8;
#line 339 "set_of_var.m"
    MR_Box parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14;

#line 318 "set_of_var.m"
    {
#line 318 "set_of_var.m"
      parse_tree__set_of_var__Pred_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 318 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[2]));
#line 318 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product2_4_p_0_1));
#line 318 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 318 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 3) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 318 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 4) = ((MR_Box) (parse_tree__set_of_var__VarB_6));
#line 318 "set_of_var.m"
    }
#line 1741 "parse_tree.set_of_var.c"
    {
#line 1743 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1745 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1747 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1749 "parse_tree.set_of_var.c"
    }
#line 1751 "parse_tree.set_of_var.c"
    {
#line 1753 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1755 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1757 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1759 "parse_tree.set_of_var.c"
    }
#line 1761 "parse_tree.set_of_var.c"
    {
#line 1763 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1765 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1767 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_29_29));
#line 1769 "parse_tree.set_of_var.c"
    }
#line 1771 "parse_tree.set_of_var.c"
    {
#line 1773 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1775 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1777 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1779 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1781 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_25, parse_tree__set_of_var__TypeInfo_31_31, parse_tree__set_of_var__TypeClassInfo_for_enum_41, (MR_Word) parse_tree__set_of_var__Pred_8, parse_tree__set_of_var__SetA_5, ((MR_Box) (parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13)), &parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14);
    }
#line 339 "set_of_var.m"
    *parse_tree__set_of_var__STATE_VARIABLE_Sets_14 = ((MR_Word) parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14);
#line 317 "set_of_var.m"
  }
#line 314 "set_of_var.m"
}

#line 159 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__graph_colour_group_elements_2_p_0(
#line 159 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
#line 159 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Constraints_0_8,
#line 159 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Colours_4)
#line 159 "set_of_var.m"
{
#line 370 "set_of_var.m"
  {
#line 370 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_15_15;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_21;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__ConstraintList_5;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__AllVars_6;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__ColourList_7;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__V_9_9;
#line 370 "set_of_var.m"
    MR_Word parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10;
#line 371 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Constraints_10_10;
#line 372 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv1_ConstraintList_5;
#line 291 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv2_AllVars_6;
#line 375 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv3_Colours_4;

#line 1833 "parse_tree.set_of_var.c"
    {
#line 1835 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1839 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 1841 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__V_9_9 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_105_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_0_f_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_7_21);
    }
#line 1848 "parse_tree.set_of_var.c"
    {
#line 1850 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1852 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1854 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_21));
#line 1856 "parse_tree.set_of_var.c"
    }
#line 371 "set_of_var.m"
    {
#line 371 "set_of_var.m"
      mercury__set__delete_3_p_0(parse_tree__set_of_var__TypeInfo_15_15, ((MR_Box) (parse_tree__set_of_var__V_9_9)), (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Constraints_0_8, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Constraints_10_10);
    }
#line 371 "set_of_var.m"
    parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Constraints_10_10;
#line 372 "set_of_var.m"
    {
#line 372 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_15_15, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10, &parse_tree__set_of_var__conv1_ConstraintList_5);
    }
#line 372 "set_of_var.m"
    parse_tree__set_of_var__ConstraintList_5 = (MR_Word) parse_tree__set_of_var__conv1_ConstraintList_5;
#line 291 "set_of_var.m"
    {
#line 291 "set_of_var.m"
      parse_tree__set_of_var__conv2_AllVars_6 = mercury__tree_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_21, (MR_Word) parse_tree__set_of_var__ConstraintList_5);
    }
#line 291 "set_of_var.m"
    parse_tree__set_of_var__AllVars_6 = (MR_Word) parse_tree__set_of_var__conv2_AllVars_6;
#line 374 "set_of_var.m"
    {
#line 374 "set_of_var.m"
      parse_tree__set_of_var__find_all_colours_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__ConstraintList_5, parse_tree__set_of_var__AllVars_6, &parse_tree__set_of_var__ColourList_7);
    }
#line 375 "set_of_var.m"
    {
#line 375 "set_of_var.m"
      parse_tree__set_of_var__conv3_Colours_4 = mercury__set__list_to_set_1_f_0(parse_tree__set_of_var__TypeInfo_15_15, (MR_Word) parse_tree__set_of_var__ColourList_7);
    }
#line 375 "set_of_var.m"
    *parse_tree__set_of_var__Colours_4 = (MR_Word) parse_tree__set_of_var__conv3_Colours_4;
#line 370 "set_of_var.m"
  }
#line 159 "set_of_var.m"
}

#line 147 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__all_true_2_p_0(
#line 147 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 147 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_3,
#line 147 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_4)
#line 147 "set_of_var.m"
{
#line 353 "set_of_var.m"
  {
#line 353 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 353 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 353 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 1916 "parse_tree.set_of_var.c"
    {
#line 1918 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1920 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1922 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1924 "parse_tree.set_of_var.c"
    }
#line 1926 "parse_tree.set_of_var.c"
    {
#line 1928 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1932 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1934 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 1936 "parse_tree.set_of_var.c"
    }
#line 353 "set_of_var.m"
    {
#line 353 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_108_108_95_116_114_117_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__P_3, parse_tree__set_of_var__Set_4);
    }
#line 353 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 353 "set_of_var.m"
  }
#line 147 "set_of_var.m"
}

#line 141 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__filter_4_p_0(
#line 141 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 141 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_5,
#line 141 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_6,
#line 141 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Trues_7,
#line 141 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Falses_8)
#line 141 "set_of_var.m"
{
#line 350 "set_of_var.m"
  {
#line 350 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 350 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 350 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
#line 350 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv1_Trues_7;
#line 350 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Falses_8;

#line 1978 "parse_tree.set_of_var.c"
    {
#line 1980 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1982 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1984 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1986 "parse_tree.set_of_var.c"
    }
#line 1988 "parse_tree.set_of_var.c"
    {
#line 1990 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1992 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1994 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1996 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1998 "parse_tree.set_of_var.c"
    }
#line 350 "set_of_var.m"
    {
#line 350 "set_of_var.m"
      mercury__tree_bitset__filter_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__P_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_Trues_7, &parse_tree__set_of_var__conv0_Falses_8);
    }
#line 350 "set_of_var.m"
    *parse_tree__set_of_var__Trues_7 = (MR_Word) parse_tree__set_of_var__conv1_Trues_7;
#line 350 "set_of_var.m"
    *parse_tree__set_of_var__Falses_8 = (MR_Word) parse_tree__set_of_var__conv0_Falses_8;
#line 350 "set_of_var.m"
  }
#line 141 "set_of_var.m"
}

#line 135 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__filter_3_p_0(
#line 135 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
#line 135 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_4,
#line 135 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_5,
#line 135 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Trues_6)
#line 135 "set_of_var.m"
{
#line 347 "set_of_var.m"
  {
#line 347 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 347 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
#line 347 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_11;
#line 347 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Trues_6;

#line 2038 "parse_tree.set_of_var.c"
    {
#line 2040 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2042 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2044 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2046 "parse_tree.set_of_var.c"
    }
#line 2048 "parse_tree.set_of_var.c"
    {
#line 2050 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2052 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2054 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2056 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_9_9));
#line 2058 "parse_tree.set_of_var.c"
    }
#line 347 "set_of_var.m"
    {
#line 347 "set_of_var.m"
      parse_tree__set_of_var__conv0_Trues_6 = mercury__tree_bitset__filter_2_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_11, (MR_Word) parse_tree__set_of_var__P_4, (MR_Word) parse_tree__set_of_var__Set_5);
    }
#line 347 "set_of_var.m"
    *parse_tree__set_of_var__Trues_6 = (MR_Word) parse_tree__set_of_var__conv0_Trues_6;
#line 347 "set_of_var.m"
  }
#line 135 "set_of_var.m"
}

#line 133 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__filter_2_f_0(
#line 133 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 133 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_4,
#line 133 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_5)
#line 133 "set_of_var.m"
{
#line 344 "set_of_var.m"
  {
#line 344 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 344 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
#line 344 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 344 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;
#line 344 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

#line 2096 "parse_tree.set_of_var.c"
    {
#line 2098 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2100 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2102 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2104 "parse_tree.set_of_var.c"
    }
#line 2106 "parse_tree.set_of_var.c"
    {
#line 2108 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2110 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2112 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2114 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 2116 "parse_tree.set_of_var.c"
    }
#line 344 "set_of_var.m"
    {
#line 344 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__tree_bitset__filter_2_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_10, (MR_Word) parse_tree__set_of_var__P_4, (MR_Word) parse_tree__set_of_var__Set_5);
    }
#line 344 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
#line 344 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__3_3;
#line 344 "set_of_var.m"
  }
#line 133 "set_of_var.m"
}

#line 128 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__fold_func_4_p_0(
#line 128 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
#line 128 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_Acc_12,
#line 128 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_5,
#line 128 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_6,
#line 128 "set_of_var.m"
  MR_Box parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8,
#line 128 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__STATE_VARIABLE_Acc_9)
#line 128 "set_of_var.m"
{
#line 342 "set_of_var.m"
  {
#line 342 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 342 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
#line 342 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;

#line 2158 "parse_tree.set_of_var.c"
    {
#line 2160 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2162 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2164 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2166 "parse_tree.set_of_var.c"
    }
#line 2168 "parse_tree.set_of_var.c"
    {
#line 2170 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2174 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2176 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2178 "parse_tree.set_of_var.c"
    }
#line 342 "set_of_var.m"
    {
#line 342 "set_of_var.m"
      *parse_tree__set_of_var__STATE_VARIABLE_Acc_9 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8);
    }
#line 342 "set_of_var.m"
  }
#line 128 "set_of_var.m"
}

#line 125 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__fold_4_p_1(
#line 125 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
#line 125 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_Acc_12,
#line 125 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_5,
#line 125 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_6,
#line 125 "set_of_var.m"
  MR_Box parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8,
#line 125 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__STATE_VARIABLE_Acc_9)
#line 125 "set_of_var.m"
{
#line 339 "set_of_var.m"
  {
#line 339 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 339 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
#line 339 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;

#line 2216 "parse_tree.set_of_var.c"
    {
#line 2218 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2220 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2222 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2224 "parse_tree.set_of_var.c"
    }
#line 2226 "parse_tree.set_of_var.c"
    {
#line 2228 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2230 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2232 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2234 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2236 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_51_95_49_4_p_3(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
    }
#line 339 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 339 "set_of_var.m"
  }
#line 125 "set_of_var.m"
}

#line 124 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__fold_4_p_0(
#line 124 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
#line 124 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_Acc_12,
#line 124 "set_of_var.m"
  MR_Word parse_tree__set_of_var__P_5,
#line 124 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_6,
#line 124 "set_of_var.m"
  MR_Box parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8,
#line 124 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__STATE_VARIABLE_Acc_9)
#line 124 "set_of_var.m"
{
#line 339 "set_of_var.m"
  {
#line 339 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 339 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
#line 339 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;

#line 2276 "parse_tree.set_of_var.c"
    {
#line 2278 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2280 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2282 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2284 "parse_tree.set_of_var.c"
    }
#line 2286 "parse_tree.set_of_var.c"
    {
#line 2288 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2290 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2292 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2294 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2296 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
#line 339 "set_of_var.m"
      return;
    }
#line 339 "set_of_var.m"
  }
#line 124 "set_of_var.m"
}

#line 327 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0_1(
#line 327 "set_of_var.m"
  MR_Box parse_tree__set_of_var__closure_arg,
#line 327 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 327 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 327 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__wrapper_arg_3)
#line 327 "set_of_var.m"
{
#line 327 "set_of_var.m"
  {
#line 327 "set_of_var.m"
    MR_Box parse_tree__set_of_var__closure = parse_tree__set_of_var__closure_arg;
#line 327 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__4_4;

#line 327 "set_of_var.m"
    {
#line 327 "set_of_var.m"
      parse_tree__set_of_var__cartesian_product_list2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_HeadVar__4_4);
    }
#line 327 "set_of_var.m"
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__4_4));
#line 327 "set_of_var.m"
  }
#line 327 "set_of_var.m"
}

#line 117 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0(
#line 117 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_8,
#line 117 "set_of_var.m"
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
#line 117 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__HeadVar__2_2)
#line 117 "set_of_var.m"
{
#line 325 "set_of_var.m"
  {
#line 325 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;

#line 325 "set_of_var.m"
    if ((parse_tree__set_of_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "set_of_var.m"
      *parse_tree__set_of_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "set_of_var.m"
    else
#line 326 "set_of_var.m"
      {
#line 326 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_13_13;
#line 326 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_15_15;
#line 326 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_17_17;
#line 326 "set_of_var.m"
        MR_Word parse_tree__set_of_var__FirstSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "set_of_var.m"
        MR_Word parse_tree__set_of_var__OtherSets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "set_of_var.m"
        MR_Word parse_tree__set_of_var__V_6_6;
#line 327 "set_of_var.m"
        MR_Box parse_tree__set_of_var__conv1_HeadVar__2_2;

#line 327 "set_of_var.m"
        {
#line 327 "set_of_var.m"
          parse_tree__set_of_var__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 327 "set_of_var.m"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_6_6, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[1]));
#line 327 "set_of_var.m"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product_list_2_p_0_1));
#line 327 "set_of_var.m"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 327 "set_of_var.m"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_6_6, 3) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
#line 327 "set_of_var.m"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_6_6, 4) = ((MR_Box) (parse_tree__set_of_var__FirstSet_3));
#line 327 "set_of_var.m"
        }
#line 2397 "parse_tree.set_of_var.c"
        {
#line 2399 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2401 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2403 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
#line 2405 "parse_tree.set_of_var.c"
        }
#line 2407 "parse_tree.set_of_var.c"
        {
#line 2409 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2411 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 2413 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_13_13));
#line 2415 "parse_tree.set_of_var.c"
        }
#line 2417 "parse_tree.set_of_var.c"
        {
#line 2419 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2421 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2423 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_15_15));
#line 2425 "parse_tree.set_of_var.c"
        }
#line 327 "set_of_var.m"
        {
#line 327 "set_of_var.m"
          mercury__list__foldl_4_p_0(parse_tree__set_of_var__TypeInfo_15_15, parse_tree__set_of_var__TypeInfo_17_17, (MR_Word) parse_tree__set_of_var__V_6_6, (MR_Word) parse_tree__set_of_var__OtherSets_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__set_of_var__conv1_HeadVar__2_2);
        }
#line 327 "set_of_var.m"
        *parse_tree__set_of_var__HeadVar__2_2 = ((MR_Word) parse_tree__set_of_var__conv1_HeadVar__2_2);
#line 326 "set_of_var.m"
      }
#line 325 "set_of_var.m"
  }
#line 117 "set_of_var.m"
}

#line 312 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0_1(
#line 312 "set_of_var.m"
  MR_Box parse_tree__set_of_var__closure_arg,
#line 312 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 312 "set_of_var.m"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 312 "set_of_var.m"
  MR_Box * parse_tree__set_of_var__wrapper_arg_3)
#line 312 "set_of_var.m"
{
#line 312 "set_of_var.m"
  {
#line 312 "set_of_var.m"
    MR_Box parse_tree__set_of_var__closure = parse_tree__set_of_var__closure_arg;
#line 312 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Sets_14;

#line 312 "set_of_var.m"
    {
#line 312 "set_of_var.m"
      parse_tree__set_of_var__cartesian_product2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_STATE_VARIABLE_Sets_14);
    }
#line 312 "set_of_var.m"
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_STATE_VARIABLE_Sets_14));
#line 312 "set_of_var.m"
  }
#line 312 "set_of_var.m"
}

#line 114 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0(
#line 114 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 114 "set_of_var.m"
  MR_Word parse_tree__set_of_var__A_4,
#line 114 "set_of_var.m"
  MR_Word parse_tree__set_of_var__B_5,
#line 114 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Product_6)
#line 114 "set_of_var.m"
{
#line 311 "set_of_var.m"
  {
#line 311 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 311 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
#line 311 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;
#line 311 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_18_18;
#line 311 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_20_20;
#line 311 "set_of_var.m"
    MR_Word parse_tree__set_of_var__V_7_7;
#line 312 "set_of_var.m"
    MR_Box parse_tree__set_of_var__conv1_Product_6;

#line 312 "set_of_var.m"
    {
#line 312 "set_of_var.m"
      parse_tree__set_of_var__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 312 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_7_7, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[0]));
#line 312 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product_3_p_0_1));
#line 312 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_7_7, 3) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 312 "set_of_var.m"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__V_7_7, 4) = ((MR_Box) (parse_tree__set_of_var__A_4));
#line 312 "set_of_var.m"
    }
#line 2519 "parse_tree.set_of_var.c"
    {
#line 2521 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2523 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2525 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2527 "parse_tree.set_of_var.c"
    }
#line 2529 "parse_tree.set_of_var.c"
    {
#line 2531 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2533 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2535 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2537 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2539 "parse_tree.set_of_var.c"
    }
#line 2541 "parse_tree.set_of_var.c"
    {
#line 2543 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2545 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 2547 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2549 "parse_tree.set_of_var.c"
    }
#line 2551 "parse_tree.set_of_var.c"
    {
#line 2553 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2555 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2557 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_18_18));
#line 2559 "parse_tree.set_of_var.c"
    }
#line 312 "set_of_var.m"
    {
#line 312 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeInfo_20_20, parse_tree__set_of_var__TypeClassInfo_for_enum_16, (MR_Word) parse_tree__set_of_var__V_7_7, parse_tree__set_of_var__B_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__set_of_var__conv1_Product_6);
    }
#line 312 "set_of_var.m"
    *parse_tree__set_of_var__Product_6 = ((MR_Word) parse_tree__set_of_var__conv1_Product_6);
#line 311 "set_of_var.m"
  }
#line 114 "set_of_var.m"
}

#line 111 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__divide_by_set_4_p_0(
#line 111 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 111 "set_of_var.m"
  MR_Word parse_tree__set_of_var__DivideBySet_5,
#line 111 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_6,
#line 111 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__InPart_7,
#line 111 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__OutPart_8)
#line 111 "set_of_var.m"
{
#line 309 "set_of_var.m"
  {
#line 309 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 309 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 309 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
#line 309 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv1_InPart_7;
#line 309 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_OutPart_8;

#line 2601 "parse_tree.set_of_var.c"
    {
#line 2603 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2605 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2607 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2609 "parse_tree.set_of_var.c"
    }
#line 2611 "parse_tree.set_of_var.c"
    {
#line 2613 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2615 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2617 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2619 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2621 "parse_tree.set_of_var.c"
    }
#line 309 "set_of_var.m"
    {
#line 309 "set_of_var.m"
      mercury__tree_bitset__divide_by_set_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__DivideBySet_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_InPart_7, &parse_tree__set_of_var__conv0_OutPart_8);
    }
#line 309 "set_of_var.m"
    *parse_tree__set_of_var__InPart_7 = (MR_Word) parse_tree__set_of_var__conv1_InPart_7;
#line 309 "set_of_var.m"
    *parse_tree__set_of_var__OutPart_8 = (MR_Word) parse_tree__set_of_var__conv0_OutPart_8;
#line 309 "set_of_var.m"
  }
#line 111 "set_of_var.m"
}

#line 108 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__divide_4_p_0(
#line 108 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 108 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Pred_5,
#line 108 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_6,
#line 108 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__InPart_7,
#line 108 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__OutPart_8)
#line 108 "set_of_var.m"
{
#line 306 "set_of_var.m"
  {
#line 306 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 306 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 306 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
#line 306 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv1_InPart_7;
#line 306 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_OutPart_8;

#line 2665 "parse_tree.set_of_var.c"
    {
#line 2667 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2669 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2671 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2673 "parse_tree.set_of_var.c"
    }
#line 2675 "parse_tree.set_of_var.c"
    {
#line 2677 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2679 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2681 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2683 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2685 "parse_tree.set_of_var.c"
    }
#line 306 "set_of_var.m"
    {
#line 306 "set_of_var.m"
      mercury__tree_bitset__divide_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__Pred_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_InPart_7, &parse_tree__set_of_var__conv0_OutPart_8);
    }
#line 306 "set_of_var.m"
    *parse_tree__set_of_var__InPart_7 = (MR_Word) parse_tree__set_of_var__conv1_InPart_7;
#line 306 "set_of_var.m"
    *parse_tree__set_of_var__OutPart_8 = (MR_Word) parse_tree__set_of_var__conv0_OutPart_8;
#line 306 "set_of_var.m"
  }
#line 108 "set_of_var.m"
}

#line 105 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__difference_3_p_0(
#line 105 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
#line 105 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_4,
#line 105 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_5,
#line 105 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_6)
#line 105 "set_of_var.m"
{
#line 303 "set_of_var.m"
  {
#line 303 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 303 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
#line 303 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Set_6;

#line 2723 "parse_tree.set_of_var.c"
    {
#line 2725 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2727 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2729 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2731 "parse_tree.set_of_var.c"
    }
#line 303 "set_of_var.m"
    {
#line 303 "set_of_var.m"
      mercury__tree_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
    }
#line 303 "set_of_var.m"
    *parse_tree__set_of_var__Set_6 = (MR_Word) parse_tree__set_of_var__conv0_Set_6;
#line 303 "set_of_var.m"
  }
#line 105 "set_of_var.m"
}

#line 104 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__difference_2_f_0(
#line 104 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 104 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_4,
#line 104 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_5)
#line 104 "set_of_var.m"
{
#line 301 "set_of_var.m"
  {
#line 301 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 301 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
#line 301 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 301 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

#line 2767 "parse_tree.set_of_var.c"
    {
#line 2769 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2771 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2773 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2775 "parse_tree.set_of_var.c"
    }
#line 301 "set_of_var.m"
    {
#line 301 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__tree_bitset__difference_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
    }
#line 301 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
#line 301 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__3_3;
#line 301 "set_of_var.m"
  }
#line 104 "set_of_var.m"
}

#line 102 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__intersect_list_2_p_0(
#line 102 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 102 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Sets_3,
#line 102 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_4)
#line 102 "set_of_var.m"
{
#line 299 "set_of_var.m"
  {
#line 299 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 299 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 299 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Set_4;

#line 2811 "parse_tree.set_of_var.c"
    {
#line 2813 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2815 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2817 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2819 "parse_tree.set_of_var.c"
    }
#line 299 "set_of_var.m"
    {
#line 299 "set_of_var.m"
      parse_tree__set_of_var__conv0_Set_4 = mercury__tree_bitset__intersect_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Sets_3);
    }
#line 299 "set_of_var.m"
    *parse_tree__set_of_var__Set_4 = (MR_Word) parse_tree__set_of_var__conv0_Set_4;
#line 299 "set_of_var.m"
  }
#line 102 "set_of_var.m"
}

#line 101 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__intersect_list_1_f_0(
#line 101 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
#line 101 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Sets_3)
#line 101 "set_of_var.m"
{
#line 297 "set_of_var.m"
  {
#line 297 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 297 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
#line 297 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
#line 297 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__2_2;

#line 2853 "parse_tree.set_of_var.c"
    {
#line 2855 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2857 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2859 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 2861 "parse_tree.set_of_var.c"
    }
#line 297 "set_of_var.m"
    {
#line 297 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__2_2 = mercury__tree_bitset__intersect_list_1_f_0(parse_tree__set_of_var__TypeInfo_6_6, (MR_Word) parse_tree__set_of_var__Sets_3);
    }
#line 297 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__2_2 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__2_2;
#line 297 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__2_2;
#line 297 "set_of_var.m"
  }
#line 101 "set_of_var.m"
}

#line 98 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__intersect_3_p_0(
#line 98 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
#line 98 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_4,
#line 98 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_5,
#line 98 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_6)
#line 98 "set_of_var.m"
{
#line 295 "set_of_var.m"
  {
#line 295 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 295 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
#line 295 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Set_6;

#line 2899 "parse_tree.set_of_var.c"
    {
#line 2901 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2903 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2905 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2907 "parse_tree.set_of_var.c"
    }
#line 295 "set_of_var.m"
    {
#line 295 "set_of_var.m"
      mercury__tree_bitset__intersect_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
    }
#line 295 "set_of_var.m"
    *parse_tree__set_of_var__Set_6 = (MR_Word) parse_tree__set_of_var__conv0_Set_6;
#line 295 "set_of_var.m"
  }
#line 98 "set_of_var.m"
}

#line 97 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__intersect_2_f_0(
#line 97 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 97 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_4,
#line 97 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_5)
#line 97 "set_of_var.m"
{
#line 293 "set_of_var.m"
  {
#line 293 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 293 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
#line 293 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 293 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

#line 2943 "parse_tree.set_of_var.c"
    {
#line 2945 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2947 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2949 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2951 "parse_tree.set_of_var.c"
    }
#line 293 "set_of_var.m"
    {
#line 293 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__tree_bitset__intersect_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
    }
#line 293 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
#line 293 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__3_3;
#line 293 "set_of_var.m"
  }
#line 97 "set_of_var.m"
}

#line 95 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__union_list_2_p_0(
#line 95 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 95 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Sets_3,
#line 95 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_4)
#line 95 "set_of_var.m"
{
#line 291 "set_of_var.m"
  {
#line 291 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 291 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 291 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Set_4;

#line 2987 "parse_tree.set_of_var.c"
    {
#line 2989 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2991 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2993 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2995 "parse_tree.set_of_var.c"
    }
#line 291 "set_of_var.m"
    {
#line 291 "set_of_var.m"
      parse_tree__set_of_var__conv0_Set_4 = mercury__tree_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Sets_3);
    }
#line 291 "set_of_var.m"
    *parse_tree__set_of_var__Set_4 = (MR_Word) parse_tree__set_of_var__conv0_Set_4;
#line 291 "set_of_var.m"
  }
#line 95 "set_of_var.m"
}

#line 94 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__union_list_1_f_0(
#line 94 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
#line 94 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Sets_3)
#line 94 "set_of_var.m"
{
#line 289 "set_of_var.m"
  {
#line 289 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 289 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
#line 289 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
#line 289 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__2_2;

#line 3029 "parse_tree.set_of_var.c"
    {
#line 3031 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3033 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3035 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3037 "parse_tree.set_of_var.c"
    }
#line 289 "set_of_var.m"
    {
#line 289 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__2_2 = mercury__tree_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_6_6, (MR_Word) parse_tree__set_of_var__Sets_3);
    }
#line 289 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__2_2 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__2_2;
#line 289 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__2_2;
#line 289 "set_of_var.m"
  }
#line 94 "set_of_var.m"
}

#line 91 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__union_3_p_0(
#line 91 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
#line 91 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_4,
#line 91 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_5,
#line 91 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_6)
#line 91 "set_of_var.m"
{
#line 287 "set_of_var.m"
  {
#line 287 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 287 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
#line 287 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Set_6;

#line 3075 "parse_tree.set_of_var.c"
    {
#line 3077 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3079 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3081 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 3083 "parse_tree.set_of_var.c"
    }
#line 287 "set_of_var.m"
    {
#line 287 "set_of_var.m"
      mercury__tree_bitset__union_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
    }
#line 287 "set_of_var.m"
    *parse_tree__set_of_var__Set_6 = (MR_Word) parse_tree__set_of_var__conv0_Set_6;
#line 287 "set_of_var.m"
  }
#line 91 "set_of_var.m"
}

#line 90 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__union_2_f_0(
#line 90 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 90 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_4,
#line 90 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_5)
#line 90 "set_of_var.m"
{
#line 285 "set_of_var.m"
  {
#line 285 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 285 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
#line 285 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 285 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

#line 3119 "parse_tree.set_of_var.c"
    {
#line 3121 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3123 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3125 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3127 "parse_tree.set_of_var.c"
    }
#line 285 "set_of_var.m"
    {
#line 285 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__tree_bitset__union_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
    }
#line 285 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
#line 285 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__3_3;
#line 285 "set_of_var.m"
  }
#line 90 "set_of_var.m"
}

#line 84 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__remove_least_3_p_0(
#line 84 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 84 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__LeastElem_4,
#line 84 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 84 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 84 "set_of_var.m"
{
#line 280 "set_of_var.m"
  {
#line 280 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 280 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 280 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
#line 280 "set_of_var.m"
    MR_Box parse_tree__set_of_var__conv1_LeastElem_4;
#line 280 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;

#line 3169 "parse_tree.set_of_var.c"
    {
#line 3171 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3173 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3175 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3177 "parse_tree.set_of_var.c"
    }
#line 3179 "parse_tree.set_of_var.c"
    {
#line 3181 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3183 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3185 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3187 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3189 "parse_tree.set_of_var.c"
    }
#line 280 "set_of_var.m"
    {
#line 280 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__tree_bitset__remove_least_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, &parse_tree__set_of_var__conv1_LeastElem_4, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
    }
#line 280 "set_of_var.m"
    if (parse_tree__set_of_var__succeeded)
#line 280 "set_of_var.m"
      {
#line 280 "set_of_var.m"
        *parse_tree__set_of_var__LeastElem_4 = ((MR_Word) parse_tree__set_of_var__conv1_LeastElem_4);
#line 280 "set_of_var.m"
        *parse_tree__set_of_var__STATE_VARIABLE_Set_7 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;
#line 280 "set_of_var.m"
        parse_tree__set_of_var__succeeded = MR_TRUE;
#line 280 "set_of_var.m"
      }
#line 280 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 280 "set_of_var.m"
  }
#line 84 "set_of_var.m"
}

#line 82 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__remove_list_3_p_0(
#line 82 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 82 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elems_4,
#line 82 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 82 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 82 "set_of_var.m"
{
#line 277 "set_of_var.m"
  {
#line 277 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 277 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 277 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
#line 277 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;

#line 3239 "parse_tree.set_of_var.c"
    {
#line 3241 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3243 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3245 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3247 "parse_tree.set_of_var.c"
    }
#line 3249 "parse_tree.set_of_var.c"
    {
#line 3251 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3253 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3255 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3257 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3259 "parse_tree.set_of_var.c"
    }
#line 277 "set_of_var.m"
    {
#line 277 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__tree_bitset__remove_list_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__Elems_4, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
    }
#line 277 "set_of_var.m"
    if (parse_tree__set_of_var__succeeded)
#line 277 "set_of_var.m"
      {
#line 277 "set_of_var.m"
        *parse_tree__set_of_var__STATE_VARIABLE_Set_7 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;
#line 277 "set_of_var.m"
        parse_tree__set_of_var__succeeded = MR_TRUE;
#line 277 "set_of_var.m"
      }
#line 277 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 277 "set_of_var.m"
  }
#line 82 "set_of_var.m"
}

#line 80 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__remove_3_p_0(
#line 80 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 80 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_4,
#line 80 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 80 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 80 "set_of_var.m"
{
#line 274 "set_of_var.m"
  {
#line 274 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 274 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 274 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
#line 274 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;

#line 3307 "parse_tree.set_of_var.c"
    {
#line 3309 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3311 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3313 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3315 "parse_tree.set_of_var.c"
    }
#line 3317 "parse_tree.set_of_var.c"
    {
#line 3319 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3321 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3323 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3325 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3327 "parse_tree.set_of_var.c"
    }
#line 274 "set_of_var.m"
    {
#line 274 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__tree_bitset__remove_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, ((MR_Box) (parse_tree__set_of_var__Elem_4)), (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
    }
#line 274 "set_of_var.m"
    if (parse_tree__set_of_var__succeeded)
#line 274 "set_of_var.m"
      {
#line 274 "set_of_var.m"
        *parse_tree__set_of_var__STATE_VARIABLE_Set_7 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;
#line 274 "set_of_var.m"
        parse_tree__set_of_var__succeeded = MR_TRUE;
#line 274 "set_of_var.m"
      }
#line 274 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 274 "set_of_var.m"
  }
#line 80 "set_of_var.m"
}

#line 78 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__delete_list_3_p_0(
#line 78 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 78 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elems_4,
#line 78 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 78 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 78 "set_of_var.m"
{
#line 271 "set_of_var.m"
  {
#line 271 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 271 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 271 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

#line 3373 "parse_tree.set_of_var.c"
    {
#line 3375 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3377 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3379 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3381 "parse_tree.set_of_var.c"
    }
#line 3383 "parse_tree.set_of_var.c"
    {
#line 3385 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3387 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3389 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3391 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3393 "parse_tree.set_of_var.c"
    }
#line 271 "set_of_var.m"
    {
#line 271 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
#line 271 "set_of_var.m"
      return;
    }
#line 271 "set_of_var.m"
  }
#line 78 "set_of_var.m"
}

#line 76 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__delete_3_p_0(
#line 76 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 76 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_4,
#line 76 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 76 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 76 "set_of_var.m"
{
#line 268 "set_of_var.m"
  {
#line 268 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 268 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 268 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

#line 3429 "parse_tree.set_of_var.c"
    {
#line 3431 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3433 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3435 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3437 "parse_tree.set_of_var.c"
    }
#line 3439 "parse_tree.set_of_var.c"
    {
#line 3441 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3443 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3445 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3447 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3449 "parse_tree.set_of_var.c"
    }
#line 268 "set_of_var.m"
    {
#line 268 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
#line 268 "set_of_var.m"
      return;
    }
#line 268 "set_of_var.m"
  }
#line 76 "set_of_var.m"
}

#line 74 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__insert_list_3_p_0(
#line 74 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 74 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elems_4,
#line 74 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 74 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 74 "set_of_var.m"
{
#line 265 "set_of_var.m"
  {
#line 265 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 265 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 265 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

#line 3485 "parse_tree.set_of_var.c"
    {
#line 3487 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3489 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3491 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3493 "parse_tree.set_of_var.c"
    }
#line 3495 "parse_tree.set_of_var.c"
    {
#line 3497 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3499 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3501 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3503 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3505 "parse_tree.set_of_var.c"
    }
#line 265 "set_of_var.m"
    {
#line 265 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
#line 265 "set_of_var.m"
      return;
    }
#line 265 "set_of_var.m"
  }
#line 74 "set_of_var.m"
}

#line 72 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__insert_3_p_0(
#line 72 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
#line 72 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_4,
#line 72 "set_of_var.m"
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
#line 72 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
#line 72 "set_of_var.m"
{
#line 262 "set_of_var.m"
  {
#line 262 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 262 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
#line 262 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

#line 3541 "parse_tree.set_of_var.c"
    {
#line 3543 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3545 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3547 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3549 "parse_tree.set_of_var.c"
    }
#line 3551 "parse_tree.set_of_var.c"
    {
#line 3553 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3555 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3557 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3559 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3561 "parse_tree.set_of_var.c"
    }
#line 262 "set_of_var.m"
    {
#line 262 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
#line 262 "set_of_var.m"
      return;
    }
#line 262 "set_of_var.m"
  }
#line 72 "set_of_var.m"
}

#line 67 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__bitset_to_set_1_f_0(
#line 67 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 67 "set_of_var.m"
  MR_Word parse_tree__set_of_var__BitSet_3)
#line 67 "set_of_var.m"
{
#line 253 "set_of_var.m"
  {
#line 253 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 253 "set_of_var.m"
    MR_Word parse_tree__set_of_var__OrdSet_4;
#line 253 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 253 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;
#line 253 "set_of_var.m"
    MR_Word parse_tree__set_of_var__List_5;
#line 256 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_OrdSet_4;

#line 3599 "parse_tree.set_of_var.c"
    {
#line 3601 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3603 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3605 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3607 "parse_tree.set_of_var.c"
    }
#line 3609 "parse_tree.set_of_var.c"
    {
#line 3611 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3613 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3615 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3617 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3619 "parse_tree.set_of_var.c"
    }
#line 255 "set_of_var.m"
    {
#line 255 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_6, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__BitSet_3, &parse_tree__set_of_var__List_5);
    }
#line 256 "set_of_var.m"
    {
#line 256 "set_of_var.m"
      mercury__set__sorted_list_to_set_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__List_5, &parse_tree__set_of_var__conv0_OrdSet_4);
    }
#line 256 "set_of_var.m"
    parse_tree__set_of_var__OrdSet_4 = (MR_Word) parse_tree__set_of_var__conv0_OrdSet_4;
#line 253 "set_of_var.m"
    return parse_tree__set_of_var__OrdSet_4;
#line 253 "set_of_var.m"
  }
#line 67 "set_of_var.m"
}

#line 66 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__set_to_bitset_1_f_0(
#line 66 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
#line 66 "set_of_var.m"
  MR_Word parse_tree__set_of_var__OrdSet_3)
#line 66 "set_of_var.m"
{
#line 248 "set_of_var.m"
  {
#line 248 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 248 "set_of_var.m"
    MR_Word parse_tree__set_of_var__BitSet_4;
#line 248 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
#line 248 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;
#line 248 "set_of_var.m"
    MR_Word parse_tree__set_of_var__List_5;
#line 250 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_List_5;

#line 3664 "parse_tree.set_of_var.c"
    {
#line 3666 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3668 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3670 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3672 "parse_tree.set_of_var.c"
    }
#line 250 "set_of_var.m"
    {
#line 250 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__OrdSet_3, &parse_tree__set_of_var__conv0_List_5);
    }
#line 250 "set_of_var.m"
    parse_tree__set_of_var__List_5 = (MR_Word) parse_tree__set_of_var__conv0_List_5;
#line 3681 "parse_tree.set_of_var.c"
    {
#line 3683 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3685 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3687 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3689 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3691 "parse_tree.set_of_var.c"
    }
#line 251 "set_of_var.m"
    {
#line 251 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_6, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_5, &parse_tree__set_of_var__BitSet_4);
    }
#line 248 "set_of_var.m"
    return parse_tree__set_of_var__BitSet_4;
#line 248 "set_of_var.m"
  }
#line 66 "set_of_var.m"
}

#line 64 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__to_sorted_list_2_p_0(
#line 64 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 64 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3,
#line 64 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__List_4)
#line 64 "set_of_var.m"
{
#line 237 "set_of_var.m"
  {
#line 237 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 237 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
#line 237 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

#line 3725 "parse_tree.set_of_var.c"
    {
#line 3727 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3729 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3731 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3733 "parse_tree.set_of_var.c"
    }
#line 3735 "parse_tree.set_of_var.c"
    {
#line 3737 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3739 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3741 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3743 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3745 "parse_tree.set_of_var.c"
    }
#line 237 "set_of_var.m"
    {
#line 237 "set_of_var.m"
      *parse_tree__set_of_var__List_4 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__Set_3);
    }
#line 237 "set_of_var.m"
  }
#line 64 "set_of_var.m"
}

#line 63 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__sorted_list_to_set_2_p_0(
#line 63 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 63 "set_of_var.m"
  MR_Word parse_tree__set_of_var__List_3,
#line 63 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_4)
#line 63 "set_of_var.m"
{
#line 235 "set_of_var.m"
  {
#line 235 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 235 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
#line 235 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

#line 3777 "parse_tree.set_of_var.c"
    {
#line 3779 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3781 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3783 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3785 "parse_tree.set_of_var.c"
    }
#line 3787 "parse_tree.set_of_var.c"
    {
#line 3789 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3791 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3793 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3795 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3797 "parse_tree.set_of_var.c"
    }
#line 235 "set_of_var.m"
    {
#line 235 "set_of_var.m"
      *parse_tree__set_of_var__Set_4 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_3);
    }
#line 235 "set_of_var.m"
  }
#line 63 "set_of_var.m"
}

#line 62 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__list_to_set_2_p_0(
#line 62 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 62 "set_of_var.m"
  MR_Word parse_tree__set_of_var__List_3,
#line 62 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_4)
#line 62 "set_of_var.m"
{
#line 233 "set_of_var.m"
  {
#line 233 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 233 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
#line 233 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

#line 3829 "parse_tree.set_of_var.c"
    {
#line 3831 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3833 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3835 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3837 "parse_tree.set_of_var.c"
    }
#line 3839 "parse_tree.set_of_var.c"
    {
#line 3841 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3843 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3845 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3847 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3849 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      *parse_tree__set_of_var__Set_4 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_3);
    }
#line 233 "set_of_var.m"
  }
#line 62 "set_of_var.m"
}

#line 60 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__to_sorted_list_1_f_0(
#line 60 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
#line 60 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3)
#line 60 "set_of_var.m"
{
#line 237 "set_of_var.m"
  {
#line 237 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 237 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
#line 237 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
#line 237 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

#line 3881 "parse_tree.set_of_var.c"
    {
#line 3883 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3885 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3887 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3889 "parse_tree.set_of_var.c"
    }
#line 3891 "parse_tree.set_of_var.c"
    {
#line 3893 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3895 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3897 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3899 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3901 "parse_tree.set_of_var.c"
    }
#line 237 "set_of_var.m"
    {
#line 237 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Set_3);
    }
#line 237 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__2_2;
#line 237 "set_of_var.m"
  }
#line 60 "set_of_var.m"
}

#line 59 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__sorted_list_to_set_1_f_0(
#line 59 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
#line 59 "set_of_var.m"
  MR_Word parse_tree__set_of_var__List_3)
#line 59 "set_of_var.m"
{
#line 235 "set_of_var.m"
  {
#line 235 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 235 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
#line 235 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
#line 235 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

#line 3935 "parse_tree.set_of_var.c"
    {
#line 3937 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3939 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3941 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3943 "parse_tree.set_of_var.c"
    }
#line 3945 "parse_tree.set_of_var.c"
    {
#line 3947 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3949 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3951 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3953 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3955 "parse_tree.set_of_var.c"
    }
#line 235 "set_of_var.m"
    {
#line 235 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
    }
#line 235 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__2_2;
#line 235 "set_of_var.m"
  }
#line 59 "set_of_var.m"
}

#line 58 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__list_to_set_1_f_0(
#line 58 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
#line 58 "set_of_var.m"
  MR_Word parse_tree__set_of_var__List_3)
#line 58 "set_of_var.m"
{
#line 233 "set_of_var.m"
  {
#line 233 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 233 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
#line 233 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
#line 233 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

#line 3989 "parse_tree.set_of_var.c"
    {
#line 3991 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3993 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3995 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3997 "parse_tree.set_of_var.c"
    }
#line 3999 "parse_tree.set_of_var.c"
    {
#line 4001 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4003 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4005 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4007 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4009 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
    }
#line 233 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__2_2;
#line 233 "set_of_var.m"
  }
#line 58 "set_of_var.m"
}

#line 53 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__equal_2_p_0(
#line 53 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 53 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetA_3,
#line 53 "set_of_var.m"
  MR_Word parse_tree__set_of_var__SetB_4)
#line 53 "set_of_var.m"
{
#line 228 "set_of_var.m"
  {
#line 228 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 228 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 228 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 4043 "parse_tree.set_of_var.c"
    {
#line 4045 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4047 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4049 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4051 "parse_tree.set_of_var.c"
    }
#line 4053 "parse_tree.set_of_var.c"
    {
#line 4055 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4057 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4059 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4061 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4063 "parse_tree.set_of_var.c"
    }
#line 228 "set_of_var.m"
    {
#line 228 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_117_97_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__SetA_3, parse_tree__set_of_var__SetB_4);
    }
#line 228 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 228 "set_of_var.m"
  }
#line 53 "set_of_var.m"
}

#line 51 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__contains_2_p_0(
#line 51 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 51 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3,
#line 51 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_4)
#line 51 "set_of_var.m"
{
#line 225 "set_of_var.m"
  {
#line 225 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 225 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 225 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 4097 "parse_tree.set_of_var.c"
    {
#line 4099 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4101 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4103 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4105 "parse_tree.set_of_var.c"
    }
#line 4107 "parse_tree.set_of_var.c"
    {
#line 4109 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4111 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4113 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4115 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4117 "parse_tree.set_of_var.c"
    }
#line 225 "set_of_var.m"
    {
#line 225 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__Set_3, parse_tree__set_of_var__Elem_4);
    }
#line 225 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 225 "set_of_var.m"
  }
#line 51 "set_of_var.m"
}

#line 49 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__is_member_3_p_0(
#line 49 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
#line 49 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_4,
#line 49 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_5,
#line 49 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__IsMember_6)
#line 49 "set_of_var.m"
{
#line 220 "set_of_var.m"
  {
#line 220 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 225 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_11;
#line 225 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

#line 4153 "parse_tree.set_of_var.c"
    {
#line 4155 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4157 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4159 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4161 "parse_tree.set_of_var.c"
    }
#line 4163 "parse_tree.set_of_var.c"
    {
#line 4165 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4167 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4169 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4171 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_11));
#line 4173 "parse_tree.set_of_var.c"
    }
#line 225 "set_of_var.m"
    {
#line 225 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_7, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Set_4, parse_tree__set_of_var__Elem_5);
    }
#line 220 "set_of_var.m"
    if (parse_tree__set_of_var__succeeded)
#line 219 "set_of_var.m"
      *parse_tree__set_of_var__IsMember_6 = (MR_Integer) 1;
#line 220 "set_of_var.m"
    else
#line 221 "set_of_var.m"
      *parse_tree__set_of_var__IsMember_6 = (MR_Integer) 0;
#line 220 "set_of_var.m"
  }
#line 49 "set_of_var.m"
}

#line 47 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__member_2_p_1(
#line 47 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 47 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3,
#line 47 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Elem_4,
#line 47 "set_of_var.m"
  MR_Cont parse_tree__set_of_var__cont,
#line 47 "set_of_var.m"
  void * parse_tree__set_of_var__cont_env_ptr)
#line 47 "set_of_var.m"
{
#line 215 "set_of_var.m"
  {
#line 215 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 215 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 215 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 4217 "parse_tree.set_of_var.c"
    {
#line 4219 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4221 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4223 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4225 "parse_tree.set_of_var.c"
    }
#line 4227 "parse_tree.set_of_var.c"
    {
#line 4229 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4231 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4233 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4235 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4237 "parse_tree.set_of_var.c"
    }
#line 215 "set_of_var.m"
    {
#line 215 "set_of_var.m"
      mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_49_95_49_2_p_1(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__Set_3, parse_tree__set_of_var__cont, parse_tree__set_of_var__cont_env_ptr);
#line 215 "set_of_var.m"
      return;
    }
#line 215 "set_of_var.m"
  }
#line 47 "set_of_var.m"
}

#line 46 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__member_2_p_0(
#line 46 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 46 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3,
#line 46 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_4)
#line 46 "set_of_var.m"
{
#line 215 "set_of_var.m"
  {
#line 215 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 215 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 215 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 4271 "parse_tree.set_of_var.c"
    {
#line 4273 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4275 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4277 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4279 "parse_tree.set_of_var.c"
    }
#line 4281 "parse_tree.set_of_var.c"
    {
#line 4283 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4285 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4287 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4289 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4291 "parse_tree.set_of_var.c"
    }
#line 215 "set_of_var.m"
    {
#line 215 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__Set_3);
    }
#line 215 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 215 "set_of_var.m"
  }
#line 46 "set_of_var.m"
}

#line 43 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__is_singleton_2_p_0(
#line 43 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 43 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3,
#line 43 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Elem_4)
#line 43 "set_of_var.m"
{
#line 212 "set_of_var.m"
  {
#line 212 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 212 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 212 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;
#line 212 "set_of_var.m"
    MR_Box parse_tree__set_of_var__conv0_Elem_4;

#line 4327 "parse_tree.set_of_var.c"
    {
#line 4329 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4331 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4333 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4335 "parse_tree.set_of_var.c"
    }
#line 4337 "parse_tree.set_of_var.c"
    {
#line 4339 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4341 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4343 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4345 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4347 "parse_tree.set_of_var.c"
    }
#line 212 "set_of_var.m"
    {
#line 212 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__tree_bitset__is_singleton_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3, &parse_tree__set_of_var__conv0_Elem_4);
    }
#line 212 "set_of_var.m"
    if (parse_tree__set_of_var__succeeded)
#line 212 "set_of_var.m"
      {
#line 212 "set_of_var.m"
        *parse_tree__set_of_var__Elem_4 = ((MR_Word) parse_tree__set_of_var__conv0_Elem_4);
#line 212 "set_of_var.m"
        parse_tree__set_of_var__succeeded = MR_TRUE;
#line 212 "set_of_var.m"
      }
#line 212 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 212 "set_of_var.m"
  }
#line 43 "set_of_var.m"
}

#line 42 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__is_non_empty_1_p_0(
#line 42 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_3,
#line 42 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_2)
#line 42 "set_of_var.m"
{
#line 209 "set_of_var.m"
  {
#line 209 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 209 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_5_5;

#line 4387 "parse_tree.set_of_var.c"
    {
#line 4389 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4391 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4393 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4395 "parse_tree.set_of_var.c"
    }
#line 209 "set_of_var.m"
    {
#line 209 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__is_non_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
    }
#line 209 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 209 "set_of_var.m"
  }
#line 42 "set_of_var.m"
}

#line 41 "set_of_var.m"
MR_bool MR_CALL 
parse_tree__set_of_var__is_empty_1_p_0(
#line 41 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_3,
#line 41 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_2)
#line 41 "set_of_var.m"
{
#line 206 "set_of_var.m"
  {
#line 206 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 206 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_5_5;

#line 4425 "parse_tree.set_of_var.c"
    {
#line 4427 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4429 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4431 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4433 "parse_tree.set_of_var.c"
    }
#line 206 "set_of_var.m"
    {
#line 206 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__tree_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
    }
#line 206 "set_of_var.m"
    return parse_tree__set_of_var__succeeded;
#line 206 "set_of_var.m"
  }
#line 41 "set_of_var.m"
}

#line 36 "set_of_var.m"
MR_Integer MR_CALL 
parse_tree__set_of_var__count_1_f_0(
#line 36 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 36 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Set_3)
#line 36 "set_of_var.m"
{
#line 200 "set_of_var.m"
  {
#line 200 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 200 "set_of_var.m"
    MR_Integer parse_tree__set_of_var__Count_4;
#line 200 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 200 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 4467 "parse_tree.set_of_var.c"
    {
#line 4469 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4471 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4473 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4475 "parse_tree.set_of_var.c"
    }
#line 4477 "parse_tree.set_of_var.c"
    {
#line 4479 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4481 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4483 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4485 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4487 "parse_tree.set_of_var.c"
    }
#line 200 "set_of_var.m"
    {
#line 200 "set_of_var.m"
      return parse_tree__set_of_var__Count_4 = mercury__tree_bitset__count_1_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3);
    }
#line 200 "set_of_var.m"
    return parse_tree__set_of_var__Count_4;
#line 200 "set_of_var.m"
  }
#line 36 "set_of_var.m"
}

#line 34 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__make_singleton_2_p_0(
#line 34 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
#line 34 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_3,
#line 34 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_4)
#line 34 "set_of_var.m"
{
#line 195 "set_of_var.m"
  {
#line 195 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 195 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
#line 195 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

#line 4521 "parse_tree.set_of_var.c"
    {
#line 4523 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4525 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4527 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4529 "parse_tree.set_of_var.c"
    }
#line 4531 "parse_tree.set_of_var.c"
    {
#line 4533 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4535 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4537 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4539 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 4541 "parse_tree.set_of_var.c"
    }
#line 195 "set_of_var.m"
    {
#line 195 "set_of_var.m"
      *parse_tree__set_of_var__Set_4 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__Elem_3);
    }
#line 195 "set_of_var.m"
  }
#line 34 "set_of_var.m"
}

#line 33 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__make_singleton_1_f_0(
#line 33 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
#line 33 "set_of_var.m"
  MR_Word parse_tree__set_of_var__Elem_3)
#line 33 "set_of_var.m"
{
#line 195 "set_of_var.m"
  {
#line 195 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 195 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
#line 195 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
#line 195 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

#line 4573 "parse_tree.set_of_var.c"
    {
#line 4575 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4577 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4579 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4581 "parse_tree.set_of_var.c"
    }
#line 4583 "parse_tree.set_of_var.c"
    {
#line 4585 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4587 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4589 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4591 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4593 "parse_tree.set_of_var.c"
    }
#line 195 "set_of_var.m"
    {
#line 195 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Elem_3);
    }
#line 195 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__2_2;
#line 195 "set_of_var.m"
  }
#line 33 "set_of_var.m"
}

#line 31 "set_of_var.m"
void MR_CALL 
parse_tree__set_of_var__init_1_p_0(
#line 31 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_3,
#line 31 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__Set_2)
#line 31 "set_of_var.m"
{
#line 191 "set_of_var.m"
  {
#line 191 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 191 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_4_5;

#line 4623 "parse_tree.set_of_var.c"
    {
#line 4625 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4627 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4629 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4631 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      *parse_tree__set_of_var__Set_2 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_105_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_0_f_0(parse_tree__set_of_var__TypeInfo_for_T_3, parse_tree__set_of_var__TypeInfo_4_5);
    }
#line 191 "set_of_var.m"
  }
#line 31 "set_of_var.m"
}

#line 30 "set_of_var.m"
MR_Word MR_CALL 
parse_tree__set_of_var__init_0_f_0(
#line 30 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_2)
#line 30 "set_of_var.m"
{
#line 191 "set_of_var.m"
  {
#line 191 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 191 "set_of_var.m"
    MR_Word parse_tree__set_of_var__HeadVar__1_1;
#line 191 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_4_4;

#line 4659 "parse_tree.set_of_var.c"
    {
#line 4661 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4663 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4665 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_2));
#line 4667 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__1_1 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_105_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_0_f_0(parse_tree__set_of_var__TypeInfo_for_T_2, parse_tree__set_of_var__TypeInfo_4_4);
    }
#line 191 "set_of_var.m"
    return parse_tree__set_of_var__HeadVar__1_1;
#line 191 "set_of_var.m"
  }
#line 30 "set_of_var.m"
}

void mercury__parse_tree__set_of_var__init(void)
{
}

void mercury__parse_tree__set_of_var__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_progvar_0);
	MR_register_type_ctor_info(&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_tvar_0);
	MR_register_type_ctor_info(&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1);
}

void mercury__parse_tree__set_of_var__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.set_of_var. */
