/*
** Automatically generated from `set_of_var.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "integer.mih"
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




#line 133 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1;

#line 136 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 139 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 142 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 151 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 157 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 159 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 162 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 165 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 167 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 169 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 172 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 175 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 177 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 180 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 183 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 185 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 187 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 190 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 193 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 195 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 197 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 200 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 203 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 205 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 207 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 209 "parse_tree.set_of_var.c"
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



#line 428 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 436 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__term__pti_var_1__pseudo_1
  }
};

#line 444 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__tree_bitset__pti_tree_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 452 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 460 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 468 "parse_tree.set_of_var.c"
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

#line 489 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 497 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 505 "parse_tree.set_of_var.c"
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

#line 526 "parse_tree.set_of_var.c"
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

#line 547 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 550 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 552 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 554 "parse_tree.set_of_var.c"
{
#line 556 "parse_tree.set_of_var.c"
  {
#line 558 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 561 "parse_tree.set_of_var.c"
    {
#line 563 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_progvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 566 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 568 "parse_tree.set_of_var.c"
  }
#line 570 "parse_tree.set_of_var.c"
}

#line 573 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 576 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 578 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 580 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 582 "parse_tree.set_of_var.c"
{
#line 584 "parse_tree.set_of_var.c"
  {
#line 586 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 589 "parse_tree.set_of_var.c"
    {
#line 591 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_progvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 594 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 596 "parse_tree.set_of_var.c"
  }
#line 598 "parse_tree.set_of_var.c"
}

#line 601 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 604 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 606 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 608 "parse_tree.set_of_var.c"
{
#line 610 "parse_tree.set_of_var.c"
  {
#line 612 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 615 "parse_tree.set_of_var.c"
    {
#line 617 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_tvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 620 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 622 "parse_tree.set_of_var.c"
  }
#line 624 "parse_tree.set_of_var.c"
}

#line 627 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 630 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 632 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 634 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 636 "parse_tree.set_of_var.c"
{
#line 638 "parse_tree.set_of_var.c"
  {
#line 640 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 643 "parse_tree.set_of_var.c"
    {
#line 645 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_tvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 648 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 650 "parse_tree.set_of_var.c"
  }
#line 652 "parse_tree.set_of_var.c"
}

#line 655 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 658 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 660 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 662 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 664 "parse_tree.set_of_var.c"
{
#line 666 "parse_tree.set_of_var.c"
  {
#line 668 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 671 "parse_tree.set_of_var.c"
    {
#line 673 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 676 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 678 "parse_tree.set_of_var.c"
  }
#line 680 "parse_tree.set_of_var.c"
}

#line 683 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 686 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 688 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 690 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 692 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_4)
#line 694 "parse_tree.set_of_var.c"
{
#line 696 "parse_tree.set_of_var.c"
  {
#line 698 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 701 "parse_tree.set_of_var.c"
    {
#line 703 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), &parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_3), ((MR_Word) parse_tree__set_of_var__wrapper_arg_4));
    }
#line 706 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_2 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 708 "parse_tree.set_of_var.c"
  }
#line 710 "parse_tree.set_of_var.c"
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
#line 763 "parse_tree.set_of_var.c"
    {
#line 765 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 769 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 771 "parse_tree.set_of_var.c"
    }
#line 773 "parse_tree.set_of_var.c"
    {
#line 775 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 777 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 779 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 781 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_34));
#line 783 "parse_tree.set_of_var.c"
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

#line 833 "parse_tree.set_of_var.c"
    {
#line 835 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 837 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 839 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 841 "parse_tree.set_of_var.c"
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

#line 877 "parse_tree.set_of_var.c"
    {
#line 879 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 881 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 883 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 885 "parse_tree.set_of_var.c"
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
#line 1083 "parse_tree.set_of_var.c"
        {
#line 1085 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1089 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1091 "parse_tree.set_of_var.c"
        }
#line 1093 "parse_tree.set_of_var.c"
        {
#line 1095 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1099 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1101 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_28));
#line 1103 "parse_tree.set_of_var.c"
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
#line 1220 "parse_tree.set_of_var.c"
        {
#line 1222 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1226 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1228 "parse_tree.set_of_var.c"
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

#line 1272 "parse_tree.set_of_var.c"
        {
#line 1274 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_11_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1278 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1280 "parse_tree.set_of_var.c"
        }
#line 1282 "parse_tree.set_of_var.c"
        {
#line 1284 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1286 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1288 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1290 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_41));
#line 1292 "parse_tree.set_of_var.c"
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

#line 1348 "parse_tree.set_of_var.c"
            {
#line 1350 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_6_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1354 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1356 "parse_tree.set_of_var.c"
            }
#line 1358 "parse_tree.set_of_var.c"
            {
#line 1360 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeClassInfo_for_enum_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1364 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1366 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_46));
#line 1368 "parse_tree.set_of_var.c"
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

#line 1386 "parse_tree.set_of_var.c"
            {
#line 1388 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_5_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1390 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1392 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1394 "parse_tree.set_of_var.c"
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

#line 1408 "parse_tree.set_of_var.c"
                {
#line 1410 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1414 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1416 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_5_51));
#line 1418 "parse_tree.set_of_var.c"
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
#line 1445 "parse_tree.set_of_var.c"
                {
#line 1447 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeInfo_11_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1449 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1451 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1453 "parse_tree.set_of_var.c"
                }
#line 1455 "parse_tree.set_of_var.c"
                {
#line 1457 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1461 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1463 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_63));
#line 1465 "parse_tree.set_of_var.c"
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
#line 1476 "parse_tree.set_of_var.c"
        {
#line 1478 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1482 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1484 "parse_tree.set_of_var.c"
        }
#line 1486 "parse_tree.set_of_var.c"
        {
#line 1488 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1492 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_22_22));
#line 1494 "parse_tree.set_of_var.c"
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
#line 1554 "parse_tree.set_of_var.c"
        {
#line 1556 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1558 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1560 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_13));
#line 1562 "parse_tree.set_of_var.c"
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

#line 1625 "parse_tree.set_of_var.c"
    {
#line 1627 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1629 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1631 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1633 "parse_tree.set_of_var.c"
    }
#line 1635 "parse_tree.set_of_var.c"
    {
#line 1637 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1639 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1641 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1643 "parse_tree.set_of_var.c"
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
#line 1742 "parse_tree.set_of_var.c"
    {
#line 1744 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1746 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1748 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1750 "parse_tree.set_of_var.c"
    }
#line 1752 "parse_tree.set_of_var.c"
    {
#line 1754 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1756 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1758 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1760 "parse_tree.set_of_var.c"
    }
#line 1762 "parse_tree.set_of_var.c"
    {
#line 1764 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1766 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1768 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_29_29));
#line 1770 "parse_tree.set_of_var.c"
    }
#line 1772 "parse_tree.set_of_var.c"
    {
#line 1774 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1776 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1778 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1780 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1782 "parse_tree.set_of_var.c"
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

#line 1834 "parse_tree.set_of_var.c"
    {
#line 1836 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1838 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1840 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 1842 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__V_9_9 = mercury__tree_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_105_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_0_f_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_7_21);
    }
#line 1849 "parse_tree.set_of_var.c"
    {
#line 1851 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1853 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 1855 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_21));
#line 1857 "parse_tree.set_of_var.c"
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

#line 1917 "parse_tree.set_of_var.c"
    {
#line 1919 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1921 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1923 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1925 "parse_tree.set_of_var.c"
    }
#line 1927 "parse_tree.set_of_var.c"
    {
#line 1929 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1931 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1933 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1935 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 1937 "parse_tree.set_of_var.c"
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

#line 1979 "parse_tree.set_of_var.c"
    {
#line 1981 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1983 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1985 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1987 "parse_tree.set_of_var.c"
    }
#line 1989 "parse_tree.set_of_var.c"
    {
#line 1991 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1993 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1995 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1997 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1999 "parse_tree.set_of_var.c"
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

#line 2039 "parse_tree.set_of_var.c"
    {
#line 2041 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2043 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2045 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2047 "parse_tree.set_of_var.c"
    }
#line 2049 "parse_tree.set_of_var.c"
    {
#line 2051 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2053 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2055 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2057 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_9_9));
#line 2059 "parse_tree.set_of_var.c"
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

#line 2097 "parse_tree.set_of_var.c"
    {
#line 2099 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2103 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2105 "parse_tree.set_of_var.c"
    }
#line 2107 "parse_tree.set_of_var.c"
    {
#line 2109 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2111 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2113 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2115 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 2117 "parse_tree.set_of_var.c"
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

#line 2159 "parse_tree.set_of_var.c"
    {
#line 2161 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2163 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2165 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2167 "parse_tree.set_of_var.c"
    }
#line 2169 "parse_tree.set_of_var.c"
    {
#line 2171 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2173 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2175 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2177 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2179 "parse_tree.set_of_var.c"
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

#line 2217 "parse_tree.set_of_var.c"
    {
#line 2219 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2221 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2223 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2225 "parse_tree.set_of_var.c"
    }
#line 2227 "parse_tree.set_of_var.c"
    {
#line 2229 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2231 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2233 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2235 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2237 "parse_tree.set_of_var.c"
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

#line 2277 "parse_tree.set_of_var.c"
    {
#line 2279 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2281 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2283 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2285 "parse_tree.set_of_var.c"
    }
#line 2287 "parse_tree.set_of_var.c"
    {
#line 2289 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2291 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2293 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2295 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2297 "parse_tree.set_of_var.c"
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
#line 2398 "parse_tree.set_of_var.c"
        {
#line 2400 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2402 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2404 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
#line 2406 "parse_tree.set_of_var.c"
        }
#line 2408 "parse_tree.set_of_var.c"
        {
#line 2410 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2412 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 2414 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_13_13));
#line 2416 "parse_tree.set_of_var.c"
        }
#line 2418 "parse_tree.set_of_var.c"
        {
#line 2420 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2422 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2424 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_15_15));
#line 2426 "parse_tree.set_of_var.c"
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
#line 2520 "parse_tree.set_of_var.c"
    {
#line 2522 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2524 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2526 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2528 "parse_tree.set_of_var.c"
    }
#line 2530 "parse_tree.set_of_var.c"
    {
#line 2532 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2534 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2536 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2538 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2540 "parse_tree.set_of_var.c"
    }
#line 2542 "parse_tree.set_of_var.c"
    {
#line 2544 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2546 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
#line 2548 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2550 "parse_tree.set_of_var.c"
    }
#line 2552 "parse_tree.set_of_var.c"
    {
#line 2554 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2556 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2558 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_18_18));
#line 2560 "parse_tree.set_of_var.c"
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

#line 2602 "parse_tree.set_of_var.c"
    {
#line 2604 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2606 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2608 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2610 "parse_tree.set_of_var.c"
    }
#line 2612 "parse_tree.set_of_var.c"
    {
#line 2614 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2616 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2618 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2620 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2622 "parse_tree.set_of_var.c"
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

#line 2666 "parse_tree.set_of_var.c"
    {
#line 2668 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2670 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2672 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2674 "parse_tree.set_of_var.c"
    }
#line 2676 "parse_tree.set_of_var.c"
    {
#line 2678 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2680 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2682 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2684 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2686 "parse_tree.set_of_var.c"
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

#line 2724 "parse_tree.set_of_var.c"
    {
#line 2726 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2728 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2730 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2732 "parse_tree.set_of_var.c"
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

#line 2768 "parse_tree.set_of_var.c"
    {
#line 2770 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2772 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2774 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2776 "parse_tree.set_of_var.c"
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

#line 2812 "parse_tree.set_of_var.c"
    {
#line 2814 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2816 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2818 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2820 "parse_tree.set_of_var.c"
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

#line 2854 "parse_tree.set_of_var.c"
    {
#line 2856 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2858 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2860 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 2862 "parse_tree.set_of_var.c"
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

#line 2900 "parse_tree.set_of_var.c"
    {
#line 2902 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2904 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2906 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2908 "parse_tree.set_of_var.c"
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

#line 2944 "parse_tree.set_of_var.c"
    {
#line 2946 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2948 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2950 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2952 "parse_tree.set_of_var.c"
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

#line 2988 "parse_tree.set_of_var.c"
    {
#line 2990 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2992 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2994 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2996 "parse_tree.set_of_var.c"
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

#line 3030 "parse_tree.set_of_var.c"
    {
#line 3032 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3034 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3036 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3038 "parse_tree.set_of_var.c"
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

#line 3076 "parse_tree.set_of_var.c"
    {
#line 3078 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3080 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3082 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 3084 "parse_tree.set_of_var.c"
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

#line 3120 "parse_tree.set_of_var.c"
    {
#line 3122 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3124 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3126 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3128 "parse_tree.set_of_var.c"
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

#line 3170 "parse_tree.set_of_var.c"
    {
#line 3172 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3174 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3176 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3178 "parse_tree.set_of_var.c"
    }
#line 3180 "parse_tree.set_of_var.c"
    {
#line 3182 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3184 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3186 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3188 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3190 "parse_tree.set_of_var.c"
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

#line 3240 "parse_tree.set_of_var.c"
    {
#line 3242 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3244 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3246 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3248 "parse_tree.set_of_var.c"
    }
#line 3250 "parse_tree.set_of_var.c"
    {
#line 3252 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3254 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3256 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3258 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3260 "parse_tree.set_of_var.c"
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

#line 3308 "parse_tree.set_of_var.c"
    {
#line 3310 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3312 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3314 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3316 "parse_tree.set_of_var.c"
    }
#line 3318 "parse_tree.set_of_var.c"
    {
#line 3320 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3322 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3324 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3326 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3328 "parse_tree.set_of_var.c"
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

#line 3374 "parse_tree.set_of_var.c"
    {
#line 3376 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3378 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3380 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3382 "parse_tree.set_of_var.c"
    }
#line 3384 "parse_tree.set_of_var.c"
    {
#line 3386 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3388 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3390 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3392 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3394 "parse_tree.set_of_var.c"
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

#line 3430 "parse_tree.set_of_var.c"
    {
#line 3432 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3434 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3436 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3438 "parse_tree.set_of_var.c"
    }
#line 3440 "parse_tree.set_of_var.c"
    {
#line 3442 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3444 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3446 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3448 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3450 "parse_tree.set_of_var.c"
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

#line 3486 "parse_tree.set_of_var.c"
    {
#line 3488 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3490 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3492 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3494 "parse_tree.set_of_var.c"
    }
#line 3496 "parse_tree.set_of_var.c"
    {
#line 3498 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3500 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3502 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3504 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3506 "parse_tree.set_of_var.c"
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

#line 3542 "parse_tree.set_of_var.c"
    {
#line 3544 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3546 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3548 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3550 "parse_tree.set_of_var.c"
    }
#line 3552 "parse_tree.set_of_var.c"
    {
#line 3554 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3556 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3558 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3560 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3562 "parse_tree.set_of_var.c"
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

#line 3600 "parse_tree.set_of_var.c"
    {
#line 3602 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3604 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3606 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3608 "parse_tree.set_of_var.c"
    }
#line 3610 "parse_tree.set_of_var.c"
    {
#line 3612 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3614 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3616 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3618 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3620 "parse_tree.set_of_var.c"
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

#line 3665 "parse_tree.set_of_var.c"
    {
#line 3667 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3669 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3671 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3673 "parse_tree.set_of_var.c"
    }
#line 250 "set_of_var.m"
    {
#line 250 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__OrdSet_3, &parse_tree__set_of_var__conv0_List_5);
    }
#line 250 "set_of_var.m"
    parse_tree__set_of_var__List_5 = (MR_Word) parse_tree__set_of_var__conv0_List_5;
#line 3682 "parse_tree.set_of_var.c"
    {
#line 3684 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3686 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3688 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3690 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3692 "parse_tree.set_of_var.c"
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

#line 3726 "parse_tree.set_of_var.c"
    {
#line 3728 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3730 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3732 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3734 "parse_tree.set_of_var.c"
    }
#line 3736 "parse_tree.set_of_var.c"
    {
#line 3738 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3740 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3742 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3744 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3746 "parse_tree.set_of_var.c"
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

#line 3778 "parse_tree.set_of_var.c"
    {
#line 3780 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3782 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3784 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3786 "parse_tree.set_of_var.c"
    }
#line 3788 "parse_tree.set_of_var.c"
    {
#line 3790 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3792 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3794 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3796 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3798 "parse_tree.set_of_var.c"
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

#line 3830 "parse_tree.set_of_var.c"
    {
#line 3832 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3834 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3836 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3838 "parse_tree.set_of_var.c"
    }
#line 3840 "parse_tree.set_of_var.c"
    {
#line 3842 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3844 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3846 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3848 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3850 "parse_tree.set_of_var.c"
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

#line 3882 "parse_tree.set_of_var.c"
    {
#line 3884 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3886 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3888 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3890 "parse_tree.set_of_var.c"
    }
#line 3892 "parse_tree.set_of_var.c"
    {
#line 3894 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3896 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3898 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3900 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3902 "parse_tree.set_of_var.c"
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

#line 3936 "parse_tree.set_of_var.c"
    {
#line 3938 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3940 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3942 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3944 "parse_tree.set_of_var.c"
    }
#line 3946 "parse_tree.set_of_var.c"
    {
#line 3948 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3950 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3952 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3954 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3956 "parse_tree.set_of_var.c"
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

#line 3990 "parse_tree.set_of_var.c"
    {
#line 3992 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3994 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3996 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3998 "parse_tree.set_of_var.c"
    }
#line 4000 "parse_tree.set_of_var.c"
    {
#line 4002 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4004 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4006 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4008 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4010 "parse_tree.set_of_var.c"
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

#line 4044 "parse_tree.set_of_var.c"
    {
#line 4046 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4048 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4050 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4052 "parse_tree.set_of_var.c"
    }
#line 4054 "parse_tree.set_of_var.c"
    {
#line 4056 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4058 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4060 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4062 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4064 "parse_tree.set_of_var.c"
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

#line 4098 "parse_tree.set_of_var.c"
    {
#line 4100 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4102 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4104 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4106 "parse_tree.set_of_var.c"
    }
#line 4108 "parse_tree.set_of_var.c"
    {
#line 4110 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4112 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4114 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4116 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4118 "parse_tree.set_of_var.c"
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

#line 4154 "parse_tree.set_of_var.c"
    {
#line 4156 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4158 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4160 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4162 "parse_tree.set_of_var.c"
    }
#line 4164 "parse_tree.set_of_var.c"
    {
#line 4166 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4168 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4170 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4172 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_11));
#line 4174 "parse_tree.set_of_var.c"
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

#line 4218 "parse_tree.set_of_var.c"
    {
#line 4220 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4222 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4224 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4226 "parse_tree.set_of_var.c"
    }
#line 4228 "parse_tree.set_of_var.c"
    {
#line 4230 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4232 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4234 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4236 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4238 "parse_tree.set_of_var.c"
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

#line 4272 "parse_tree.set_of_var.c"
    {
#line 4274 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4276 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4278 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4280 "parse_tree.set_of_var.c"
    }
#line 4282 "parse_tree.set_of_var.c"
    {
#line 4284 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4286 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4288 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4290 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4292 "parse_tree.set_of_var.c"
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

#line 4328 "parse_tree.set_of_var.c"
    {
#line 4330 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4332 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4334 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4336 "parse_tree.set_of_var.c"
    }
#line 4338 "parse_tree.set_of_var.c"
    {
#line 4340 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4342 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4344 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4346 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4348 "parse_tree.set_of_var.c"
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

#line 4388 "parse_tree.set_of_var.c"
    {
#line 4390 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4392 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4394 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4396 "parse_tree.set_of_var.c"
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

#line 4426 "parse_tree.set_of_var.c"
    {
#line 4428 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4430 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4432 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4434 "parse_tree.set_of_var.c"
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

#line 4468 "parse_tree.set_of_var.c"
    {
#line 4470 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4472 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4474 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4476 "parse_tree.set_of_var.c"
    }
#line 4478 "parse_tree.set_of_var.c"
    {
#line 4480 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4482 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4484 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4486 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4488 "parse_tree.set_of_var.c"
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

#line 4522 "parse_tree.set_of_var.c"
    {
#line 4524 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4526 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4528 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4530 "parse_tree.set_of_var.c"
    }
#line 4532 "parse_tree.set_of_var.c"
    {
#line 4534 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4536 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4538 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4540 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 4542 "parse_tree.set_of_var.c"
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

#line 4574 "parse_tree.set_of_var.c"
    {
#line 4576 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4578 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4580 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4582 "parse_tree.set_of_var.c"
    }
#line 4584 "parse_tree.set_of_var.c"
    {
#line 4586 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4588 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4590 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4592 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4594 "parse_tree.set_of_var.c"
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

#line 4624 "parse_tree.set_of_var.c"
    {
#line 4626 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4628 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4630 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4632 "parse_tree.set_of_var.c"
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

#line 4660 "parse_tree.set_of_var.c"
    {
#line 4662 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4664 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4666 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_2));
#line 4668 "parse_tree.set_of_var.c"
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
