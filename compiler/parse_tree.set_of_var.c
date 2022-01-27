/*
** Automatically generated from `set_of_var.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 47 "set_of_var.m"
struct parse_tree__set_of_var__member_2_p_1_env_0_s {
#line 47 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__member_2_p_1_env_0__Elem_4;
#line 47 "set_of_var.m"
  MR_Cont parse_tree__set_of_var__member_2_p_1_env_0__cont;
#line 47 "set_of_var.m"
  void * parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr;
#line 215 "set_of_var.m"
  MR_Box parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4;
#line 47 "set_of_var.m"
};


#line 108 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1;

#line 111 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 114 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 117 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 120 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 123 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 126 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 129 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 132 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 134 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 137 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 140 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 142 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 144 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 147 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 150 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 152 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 155 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 158 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 160 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 162 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 165 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 168 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 170 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 172 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 175 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 178 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 180 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 182 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 184 "parse_tree.set_of_var.c"
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

#line 215 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__member_2_p_1_1(
#line 215 "set_of_var.m"
  void * parse_tree__set_of_var__env_ptr_arg);


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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
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
    ((MR_Box) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 401 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 409 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__term__pti_var_1__pseudo_1
  }
};

#line 417 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 425 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 433 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 441 "parse_tree.set_of_var.c"
const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_progvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_progvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 458 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 466 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 474 "parse_tree.set_of_var.c"
const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_tvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_tvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 491 "parse_tree.set_of_var.c"
const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_var_1_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_var_1_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 508 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 511 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 513 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 515 "parse_tree.set_of_var.c"
{
#line 517 "parse_tree.set_of_var.c"
  {
#line 519 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 522 "parse_tree.set_of_var.c"
    {
#line 524 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_progvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 527 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 529 "parse_tree.set_of_var.c"
  }
#line 531 "parse_tree.set_of_var.c"
}

#line 534 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 537 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 539 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 541 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 543 "parse_tree.set_of_var.c"
{
#line 545 "parse_tree.set_of_var.c"
  {
#line 547 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 550 "parse_tree.set_of_var.c"
    {
#line 552 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_progvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 555 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 557 "parse_tree.set_of_var.c"
  }
#line 559 "parse_tree.set_of_var.c"
}

#line 562 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 565 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 567 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 569 "parse_tree.set_of_var.c"
{
#line 571 "parse_tree.set_of_var.c"
  {
#line 573 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 576 "parse_tree.set_of_var.c"
    {
#line 578 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_tvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 581 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 583 "parse_tree.set_of_var.c"
  }
#line 585 "parse_tree.set_of_var.c"
}

#line 588 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 591 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 593 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 595 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 597 "parse_tree.set_of_var.c"
{
#line 599 "parse_tree.set_of_var.c"
  {
#line 601 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 604 "parse_tree.set_of_var.c"
    {
#line 606 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_tvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 609 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 611 "parse_tree.set_of_var.c"
  }
#line 613 "parse_tree.set_of_var.c"
}

#line 616 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 619 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 621 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 623 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 625 "parse_tree.set_of_var.c"
{
#line 627 "parse_tree.set_of_var.c"
  {
#line 629 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 632 "parse_tree.set_of_var.c"
    {
#line 634 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 637 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 639 "parse_tree.set_of_var.c"
  }
#line 641 "parse_tree.set_of_var.c"
}

#line 644 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 647 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 649 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 651 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 653 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_4)
#line 655 "parse_tree.set_of_var.c"
{
#line 657 "parse_tree.set_of_var.c"
  {
#line 659 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 662 "parse_tree.set_of_var.c"
    {
#line 664 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), &parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_3), ((MR_Word) parse_tree__set_of_var__wrapper_arg_4));
    }
#line 667 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_2 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 669 "parse_tree.set_of_var.c"
  }
#line 671 "parse_tree.set_of_var.c"
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
#line 724 "parse_tree.set_of_var.c"
    {
#line 726 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 728 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 730 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 732 "parse_tree.set_of_var.c"
    }
#line 734 "parse_tree.set_of_var.c"
    {
#line 736 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 738 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 740 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 742 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_34));
#line 744 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      parse_tree__set_of_var__Set_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_25, parse_tree__set_of_var__TypeClassInfo_for_enum_36, parse_tree__set_of_var__V_18_18);
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

#line 794 "parse_tree.set_of_var.c"
    {
#line 796 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 800 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 802 "parse_tree.set_of_var.c"
    }
#line 187 "set_of_var.m"
    {
#line 187 "set_of_var.m"
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(parse_tree__set_of_var__TypeInfo_8_8, parse_tree__set_of_var__HeadVar__1_1, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_4, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_5);
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

#line 838 "parse_tree.set_of_var.c"
    {
#line 840 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 844 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 846 "parse_tree.set_of_var.c"
    }
#line 187 "set_of_var.m"
    {
#line 187 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_3, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_4);
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
#line 1044 "parse_tree.set_of_var.c"
        {
#line 1046 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1050 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1052 "parse_tree.set_of_var.c"
        }
#line 1054 "parse_tree.set_of_var.c"
        {
#line 1056 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1060 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1062 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_28));
#line 1064 "parse_tree.set_of_var.c"
        }
#line 215 "set_of_var.m"
        {
#line 215 "set_of_var.m"
          parse_tree__set_of_var__succeeded = mercury__sparse_bitset__member_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_30, ((MR_Box) (parse_tree__set_of_var__HeadVar__1_1)), (MR_Word) parse_tree__set_of_var__S_12);
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
              mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__TypeClassInfo_for_enum_30, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__S_12, &parse_tree__set_of_var__T_19);
            }
#line 206 "set_of_var.m"
            {
#line 206 "set_of_var.m"
              parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_7_28, (MR_Word) parse_tree__set_of_var__T_19);
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
              mercury__sparse_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_7_28, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22, (MR_Word) parse_tree__set_of_var__T_19, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6);
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
#line 191 "set_of_var.m"
        MR_Word parse_tree__set_of_var__conv0_SameColour_8;

#line 445 "set_of_var.m"
        *parse_tree__set_of_var__Remainder_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "parse_tree.set_of_var.c"
        {
#line 1185 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1189 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1191 "parse_tree.set_of_var.c"
        }
#line 191 "set_of_var.m"
        {
#line 191 "set_of_var.m"
          parse_tree__set_of_var__conv0_SameColour_8 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_4_26);
        }
#line 191 "set_of_var.m"
        *parse_tree__set_of_var__SameColour_8 = (MR_Word) parse_tree__set_of_var__conv0_SameColour_8;
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
        MR_Box parse_tree__set_of_var__conv2_VarPrime_30;
#line 280 "set_of_var.m"
        MR_Word parse_tree__set_of_var__conv1_VarsPrime_31;
#line 441 "set_of_var.m"
        MR_Word parse_tree__set_of_var__conv3_Remainder_7;

#line 1237 "parse_tree.set_of_var.c"
        {
#line 1239 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_11_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1243 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1245 "parse_tree.set_of_var.c"
        }
#line 1247 "parse_tree.set_of_var.c"
        {
#line 1249 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1253 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1255 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_41));
#line 1257 "parse_tree.set_of_var.c"
        }
#line 280 "set_of_var.m"
        {
#line 280 "set_of_var.m"
          parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_least_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_43, &parse_tree__set_of_var__conv2_VarPrime_30, (MR_Word) parse_tree__set_of_var__Vars0_5, &parse_tree__set_of_var__conv1_VarsPrime_31);
        }
#line 280 "set_of_var.m"
        if (parse_tree__set_of_var__succeeded)
#line 280 "set_of_var.m"
          {
#line 280 "set_of_var.m"
            parse_tree__set_of_var__VarPrime_30 = ((MR_Word) parse_tree__set_of_var__conv2_VarPrime_30);
#line 280 "set_of_var.m"
            parse_tree__set_of_var__VarsPrime_31 = (MR_Word) parse_tree__set_of_var__conv1_VarsPrime_31;
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

#line 1313 "parse_tree.set_of_var.c"
            {
#line 1315 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_6_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1319 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1321 "parse_tree.set_of_var.c"
            }
#line 1323 "parse_tree.set_of_var.c"
            {
#line 1325 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeClassInfo_for_enum_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1329 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1331 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_46));
#line 1333 "parse_tree.set_of_var.c"
            }
#line 195 "set_of_var.m"
            {
#line 195 "set_of_var.m"
              *parse_tree__set_of_var__SameColour_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_48, parse_tree__set_of_var__Var_11);
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

#line 1351 "parse_tree.set_of_var.c"
            {
#line 1353 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_5_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1357 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1359 "parse_tree.set_of_var.c"
            }
#line 206 "set_of_var.m"
            {
#line 206 "set_of_var.m"
              parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_51, (MR_Word) parse_tree__set_of_var__RestVars_15);
            }
#line 418 "set_of_var.m"
            if (parse_tree__set_of_var__succeeded)
#line 416 "set_of_var.m"
              {
#line 416 "set_of_var.m"
                MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_56;

#line 1373 "parse_tree.set_of_var.c"
                {
#line 1375 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1379 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1381 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_5_51));
#line 1383 "parse_tree.set_of_var.c"
                }
#line 195 "set_of_var.m"
                {
#line 195 "set_of_var.m"
                  *parse_tree__set_of_var__SameColour_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_56, parse_tree__set_of_var__Var_11);
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
#line 1410 "parse_tree.set_of_var.c"
                {
#line 1412 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeInfo_11_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1416 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1418 "parse_tree.set_of_var.c"
                }
#line 1420 "parse_tree.set_of_var.c"
                {
#line 1422 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1424 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1426 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1428 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_63));
#line 1430 "parse_tree.set_of_var.c"
                }
#line 262 "set_of_var.m"
                {
#line 262 "set_of_var.m"
                  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_65, parse_tree__set_of_var__Var_11, parse_tree__set_of_var__SameColour0_19, parse_tree__set_of_var__SameColour_8);
                }
#line 423 "set_of_var.m"
              }
#line 418 "set_of_var.m"
          }
#line 1441 "parse_tree.set_of_var.c"
        {
#line 1443 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1447 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1449 "parse_tree.set_of_var.c"
        }
#line 1451 "parse_tree.set_of_var.c"
        {
#line 1453 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1457 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_22_22));
#line 1459 "parse_tree.set_of_var.c"
        }
#line 441 "set_of_var.m"
        {
#line 441 "set_of_var.m"
          mercury__list__append_3_p_1(parse_tree__set_of_var__TypeInfo_24_24, (MR_Word) parse_tree__set_of_var__ResidueSets_18, (MR_Word) parse_tree__set_of_var__WereContaining_13, &parse_tree__set_of_var__conv3_Remainder_7);
        }
#line 441 "set_of_var.m"
        *parse_tree__set_of_var__Remainder_7 = (MR_Word) parse_tree__set_of_var__conv3_Remainder_7;
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
#line 1519 "parse_tree.set_of_var.c"
        {
#line 1521 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1525 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_13));
#line 1527 "parse_tree.set_of_var.c"
        }
#line 303 "set_of_var.m"
        {
#line 303 "set_of_var.m"
          mercury__sparse_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_9_18, (MR_Word) parse_tree__set_of_var__Vars_5, (MR_Word) parse_tree__set_of_var__Colour_10, &parse_tree__set_of_var__conv0_RestVars_11);
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

#line 1590 "parse_tree.set_of_var.c"
    {
#line 1592 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1594 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1596 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1598 "parse_tree.set_of_var.c"
    }
#line 1600 "parse_tree.set_of_var.c"
    {
#line 1602 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1604 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1606 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1608 "parse_tree.set_of_var.c"
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
#line 1707 "parse_tree.set_of_var.c"
    {
#line 1709 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1711 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1713 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1715 "parse_tree.set_of_var.c"
    }
#line 1717 "parse_tree.set_of_var.c"
    {
#line 1719 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1721 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1723 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1725 "parse_tree.set_of_var.c"
    }
#line 1727 "parse_tree.set_of_var.c"
    {
#line 1729 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1731 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1733 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_29_29));
#line 1735 "parse_tree.set_of_var.c"
    }
#line 1737 "parse_tree.set_of_var.c"
    {
#line 1739 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1741 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1743 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1745 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1747 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_25, parse_tree__set_of_var__TypeInfo_31_31, parse_tree__set_of_var__TypeClassInfo_for_enum_41, (MR_Word) parse_tree__set_of_var__Pred_8, parse_tree__set_of_var__SetA_5, ((MR_Box) (parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13)), &parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14);
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
#line 191 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_V_9_9;
#line 371 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv1_STATE_VARIABLE_Constraints_10_10;
#line 372 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv2_ConstraintList_5;
#line 291 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv3_AllVars_6;
#line 375 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv4_Colours_4;

#line 1801 "parse_tree.set_of_var.c"
    {
#line 1803 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1805 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1807 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 1809 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__conv0_V_9_9 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_7_21);
    }
#line 191 "set_of_var.m"
    parse_tree__set_of_var__V_9_9 = (MR_Word) parse_tree__set_of_var__conv0_V_9_9;
#line 1818 "parse_tree.set_of_var.c"
    {
#line 1820 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1822 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1824 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_21));
#line 1826 "parse_tree.set_of_var.c"
    }
#line 371 "set_of_var.m"
    {
#line 371 "set_of_var.m"
      mercury__set__delete_3_p_0(parse_tree__set_of_var__TypeInfo_15_15, ((MR_Box) (parse_tree__set_of_var__V_9_9)), (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Constraints_0_8, &parse_tree__set_of_var__conv1_STATE_VARIABLE_Constraints_10_10);
    }
#line 371 "set_of_var.m"
    parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10 = (MR_Word) parse_tree__set_of_var__conv1_STATE_VARIABLE_Constraints_10_10;
#line 372 "set_of_var.m"
    {
#line 372 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_15_15, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10, &parse_tree__set_of_var__conv2_ConstraintList_5);
    }
#line 372 "set_of_var.m"
    parse_tree__set_of_var__ConstraintList_5 = (MR_Word) parse_tree__set_of_var__conv2_ConstraintList_5;
#line 291 "set_of_var.m"
    {
#line 291 "set_of_var.m"
      parse_tree__set_of_var__conv3_AllVars_6 = mercury__sparse_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_21, (MR_Word) parse_tree__set_of_var__ConstraintList_5);
    }
#line 291 "set_of_var.m"
    parse_tree__set_of_var__AllVars_6 = (MR_Word) parse_tree__set_of_var__conv3_AllVars_6;
#line 374 "set_of_var.m"
    {
#line 374 "set_of_var.m"
      parse_tree__set_of_var__find_all_colours_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__ConstraintList_5, parse_tree__set_of_var__AllVars_6, &parse_tree__set_of_var__ColourList_7);
    }
#line 375 "set_of_var.m"
    {
#line 375 "set_of_var.m"
      parse_tree__set_of_var__conv4_Colours_4 = mercury__set__list_to_set_1_f_0(parse_tree__set_of_var__TypeInfo_15_15, (MR_Word) parse_tree__set_of_var__ColourList_7);
    }
#line 375 "set_of_var.m"
    *parse_tree__set_of_var__Colours_4 = (MR_Word) parse_tree__set_of_var__conv4_Colours_4;
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

#line 1886 "parse_tree.set_of_var.c"
    {
#line 1888 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1890 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1892 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1894 "parse_tree.set_of_var.c"
    }
#line 1896 "parse_tree.set_of_var.c"
    {
#line 1898 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1900 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1902 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1904 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 1906 "parse_tree.set_of_var.c"
    }
#line 353 "set_of_var.m"
    {
#line 353 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__all_true_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__P_3, (MR_Word) parse_tree__set_of_var__Set_4);
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

#line 1948 "parse_tree.set_of_var.c"
    {
#line 1950 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1952 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1954 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1956 "parse_tree.set_of_var.c"
    }
#line 1958 "parse_tree.set_of_var.c"
    {
#line 1960 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1962 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1964 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1966 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1968 "parse_tree.set_of_var.c"
    }
#line 350 "set_of_var.m"
    {
#line 350 "set_of_var.m"
      mercury__sparse_bitset__filter_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__P_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_Trues_7, &parse_tree__set_of_var__conv0_Falses_8);
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

#line 2008 "parse_tree.set_of_var.c"
    {
#line 2010 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2012 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2014 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2016 "parse_tree.set_of_var.c"
    }
#line 2018 "parse_tree.set_of_var.c"
    {
#line 2020 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2022 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2024 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2026 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_9_9));
#line 2028 "parse_tree.set_of_var.c"
    }
#line 347 "set_of_var.m"
    {
#line 347 "set_of_var.m"
      parse_tree__set_of_var__conv0_Trues_6 = mercury__sparse_bitset__filter_2_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_11, (MR_Word) parse_tree__set_of_var__P_4, (MR_Word) parse_tree__set_of_var__Set_5);
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

#line 2066 "parse_tree.set_of_var.c"
    {
#line 2068 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2070 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2072 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2074 "parse_tree.set_of_var.c"
    }
#line 2076 "parse_tree.set_of_var.c"
    {
#line 2078 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2080 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2082 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2084 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 2086 "parse_tree.set_of_var.c"
    }
#line 344 "set_of_var.m"
    {
#line 344 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__filter_2_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_10, (MR_Word) parse_tree__set_of_var__P_4, (MR_Word) parse_tree__set_of_var__Set_5);
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

#line 2128 "parse_tree.set_of_var.c"
    {
#line 2130 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2132 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2134 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2136 "parse_tree.set_of_var.c"
    }
#line 2138 "parse_tree.set_of_var.c"
    {
#line 2140 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2142 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2144 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2146 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2148 "parse_tree.set_of_var.c"
    }
#line 342 "set_of_var.m"
    {
#line 342 "set_of_var.m"
      *parse_tree__set_of_var__STATE_VARIABLE_Acc_9 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8);
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

#line 2186 "parse_tree.set_of_var.c"
    {
#line 2188 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2190 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2192 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2194 "parse_tree.set_of_var.c"
    }
#line 2196 "parse_tree.set_of_var.c"
    {
#line 2198 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2200 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2202 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2204 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2206 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_51_95_49_4_p_3(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
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

#line 2246 "parse_tree.set_of_var.c"
    {
#line 2248 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2250 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2252 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2254 "parse_tree.set_of_var.c"
    }
#line 2256 "parse_tree.set_of_var.c"
    {
#line 2258 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2260 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2262 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2264 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2266 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
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
#line 2367 "parse_tree.set_of_var.c"
        {
#line 2369 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2371 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2373 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
#line 2375 "parse_tree.set_of_var.c"
        }
#line 2377 "parse_tree.set_of_var.c"
        {
#line 2379 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2381 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 2383 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_13_13));
#line 2385 "parse_tree.set_of_var.c"
        }
#line 2387 "parse_tree.set_of_var.c"
        {
#line 2389 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2391 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2393 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_15_15));
#line 2395 "parse_tree.set_of_var.c"
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
#line 2489 "parse_tree.set_of_var.c"
    {
#line 2491 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2493 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2495 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2497 "parse_tree.set_of_var.c"
    }
#line 2499 "parse_tree.set_of_var.c"
    {
#line 2501 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2503 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2505 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2507 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2509 "parse_tree.set_of_var.c"
    }
#line 2511 "parse_tree.set_of_var.c"
    {
#line 2513 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2515 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 2517 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2519 "parse_tree.set_of_var.c"
    }
#line 2521 "parse_tree.set_of_var.c"
    {
#line 2523 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2525 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2527 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_18_18));
#line 2529 "parse_tree.set_of_var.c"
    }
#line 312 "set_of_var.m"
    {
#line 312 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeInfo_20_20, parse_tree__set_of_var__TypeClassInfo_for_enum_16, (MR_Word) parse_tree__set_of_var__V_7_7, parse_tree__set_of_var__B_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__set_of_var__conv1_Product_6);
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

#line 2571 "parse_tree.set_of_var.c"
    {
#line 2573 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2575 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2577 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2579 "parse_tree.set_of_var.c"
    }
#line 2581 "parse_tree.set_of_var.c"
    {
#line 2583 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2585 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2587 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2589 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2591 "parse_tree.set_of_var.c"
    }
#line 309 "set_of_var.m"
    {
#line 309 "set_of_var.m"
      mercury__sparse_bitset__divide_by_set_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__DivideBySet_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_InPart_7, &parse_tree__set_of_var__conv0_OutPart_8);
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

#line 2635 "parse_tree.set_of_var.c"
    {
#line 2637 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2639 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2641 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2643 "parse_tree.set_of_var.c"
    }
#line 2645 "parse_tree.set_of_var.c"
    {
#line 2647 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2649 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2651 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2653 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2655 "parse_tree.set_of_var.c"
    }
#line 306 "set_of_var.m"
    {
#line 306 "set_of_var.m"
      mercury__sparse_bitset__divide_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__Pred_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_InPart_7, &parse_tree__set_of_var__conv0_OutPart_8);
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

#line 2693 "parse_tree.set_of_var.c"
    {
#line 2695 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2697 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2699 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2701 "parse_tree.set_of_var.c"
    }
#line 303 "set_of_var.m"
    {
#line 303 "set_of_var.m"
      mercury__sparse_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
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

#line 2737 "parse_tree.set_of_var.c"
    {
#line 2739 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2741 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2743 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2745 "parse_tree.set_of_var.c"
    }
#line 301 "set_of_var.m"
    {
#line 301 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__difference_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
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

#line 2781 "parse_tree.set_of_var.c"
    {
#line 2783 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2785 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2787 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2789 "parse_tree.set_of_var.c"
    }
#line 299 "set_of_var.m"
    {
#line 299 "set_of_var.m"
      parse_tree__set_of_var__conv0_Set_4 = mercury__sparse_bitset__intersect_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Sets_3);
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

#line 2823 "parse_tree.set_of_var.c"
    {
#line 2825 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2827 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2829 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 2831 "parse_tree.set_of_var.c"
    }
#line 297 "set_of_var.m"
    {
#line 297 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__2_2 = mercury__sparse_bitset__intersect_list_1_f_0(parse_tree__set_of_var__TypeInfo_6_6, (MR_Word) parse_tree__set_of_var__Sets_3);
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

#line 2869 "parse_tree.set_of_var.c"
    {
#line 2871 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2873 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2875 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2877 "parse_tree.set_of_var.c"
    }
#line 295 "set_of_var.m"
    {
#line 295 "set_of_var.m"
      mercury__sparse_bitset__intersect_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
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

#line 2913 "parse_tree.set_of_var.c"
    {
#line 2915 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2917 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2919 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2921 "parse_tree.set_of_var.c"
    }
#line 293 "set_of_var.m"
    {
#line 293 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__intersect_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
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

#line 2957 "parse_tree.set_of_var.c"
    {
#line 2959 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2961 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2963 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2965 "parse_tree.set_of_var.c"
    }
#line 291 "set_of_var.m"
    {
#line 291 "set_of_var.m"
      parse_tree__set_of_var__conv0_Set_4 = mercury__sparse_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Sets_3);
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

#line 2999 "parse_tree.set_of_var.c"
    {
#line 3001 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3003 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3005 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3007 "parse_tree.set_of_var.c"
    }
#line 289 "set_of_var.m"
    {
#line 289 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__2_2 = mercury__sparse_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_6_6, (MR_Word) parse_tree__set_of_var__Sets_3);
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

#line 3045 "parse_tree.set_of_var.c"
    {
#line 3047 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3049 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3051 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 3053 "parse_tree.set_of_var.c"
    }
#line 287 "set_of_var.m"
    {
#line 287 "set_of_var.m"
      mercury__sparse_bitset__union_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
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

#line 3089 "parse_tree.set_of_var.c"
    {
#line 3091 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3093 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3095 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3097 "parse_tree.set_of_var.c"
    }
#line 285 "set_of_var.m"
    {
#line 285 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__union_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
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

#line 3139 "parse_tree.set_of_var.c"
    {
#line 3141 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3143 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3145 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3147 "parse_tree.set_of_var.c"
    }
#line 3149 "parse_tree.set_of_var.c"
    {
#line 3151 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3153 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3155 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3157 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3159 "parse_tree.set_of_var.c"
    }
#line 280 "set_of_var.m"
    {
#line 280 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_least_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, &parse_tree__set_of_var__conv1_LeastElem_4, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
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

#line 3209 "parse_tree.set_of_var.c"
    {
#line 3211 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3213 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3215 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3217 "parse_tree.set_of_var.c"
    }
#line 3219 "parse_tree.set_of_var.c"
    {
#line 3221 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3223 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3225 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3227 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3229 "parse_tree.set_of_var.c"
    }
#line 277 "set_of_var.m"
    {
#line 277 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_list_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__Elems_4, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
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

#line 3277 "parse_tree.set_of_var.c"
    {
#line 3279 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3281 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3283 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3285 "parse_tree.set_of_var.c"
    }
#line 3287 "parse_tree.set_of_var.c"
    {
#line 3289 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3291 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3293 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3295 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3297 "parse_tree.set_of_var.c"
    }
#line 274 "set_of_var.m"
    {
#line 274 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, ((MR_Box) (parse_tree__set_of_var__Elem_4)), (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
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

#line 3343 "parse_tree.set_of_var.c"
    {
#line 3345 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3347 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3349 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3351 "parse_tree.set_of_var.c"
    }
#line 3353 "parse_tree.set_of_var.c"
    {
#line 3355 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3357 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3359 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3361 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3363 "parse_tree.set_of_var.c"
    }
#line 271 "set_of_var.m"
    {
#line 271 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3399 "parse_tree.set_of_var.c"
    {
#line 3401 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3403 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3405 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3407 "parse_tree.set_of_var.c"
    }
#line 3409 "parse_tree.set_of_var.c"
    {
#line 3411 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3413 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3415 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3417 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3419 "parse_tree.set_of_var.c"
    }
#line 268 "set_of_var.m"
    {
#line 268 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3455 "parse_tree.set_of_var.c"
    {
#line 3457 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3459 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3461 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3463 "parse_tree.set_of_var.c"
    }
#line 3465 "parse_tree.set_of_var.c"
    {
#line 3467 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3469 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3471 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3473 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3475 "parse_tree.set_of_var.c"
    }
#line 265 "set_of_var.m"
    {
#line 265 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3511 "parse_tree.set_of_var.c"
    {
#line 3513 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3515 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3517 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3519 "parse_tree.set_of_var.c"
    }
#line 3521 "parse_tree.set_of_var.c"
    {
#line 3523 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3525 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3527 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3529 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3531 "parse_tree.set_of_var.c"
    }
#line 262 "set_of_var.m"
    {
#line 262 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3569 "parse_tree.set_of_var.c"
    {
#line 3571 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3573 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3575 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3577 "parse_tree.set_of_var.c"
    }
#line 3579 "parse_tree.set_of_var.c"
    {
#line 3581 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3583 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3585 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3587 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3589 "parse_tree.set_of_var.c"
    }
#line 255 "set_of_var.m"
    {
#line 255 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_6, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__BitSet_3, &parse_tree__set_of_var__List_5);
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

#line 3634 "parse_tree.set_of_var.c"
    {
#line 3636 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3638 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3640 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3642 "parse_tree.set_of_var.c"
    }
#line 250 "set_of_var.m"
    {
#line 250 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__OrdSet_3, &parse_tree__set_of_var__conv0_List_5);
    }
#line 250 "set_of_var.m"
    parse_tree__set_of_var__List_5 = (MR_Word) parse_tree__set_of_var__conv0_List_5;
#line 3651 "parse_tree.set_of_var.c"
    {
#line 3653 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3655 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3657 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3659 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3661 "parse_tree.set_of_var.c"
    }
#line 251 "set_of_var.m"
    {
#line 251 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_6, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_5, &parse_tree__set_of_var__BitSet_4);
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

#line 3695 "parse_tree.set_of_var.c"
    {
#line 3697 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3699 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3701 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3703 "parse_tree.set_of_var.c"
    }
#line 3705 "parse_tree.set_of_var.c"
    {
#line 3707 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3709 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3711 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3713 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3715 "parse_tree.set_of_var.c"
    }
#line 237 "set_of_var.m"
    {
#line 237 "set_of_var.m"
      *parse_tree__set_of_var__List_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__Set_3);
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

#line 3747 "parse_tree.set_of_var.c"
    {
#line 3749 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3751 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3753 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3755 "parse_tree.set_of_var.c"
    }
#line 3757 "parse_tree.set_of_var.c"
    {
#line 3759 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3761 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3763 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3765 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3767 "parse_tree.set_of_var.c"
    }
#line 235 "set_of_var.m"
    {
#line 235 "set_of_var.m"
      *parse_tree__set_of_var__Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_3);
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

#line 3799 "parse_tree.set_of_var.c"
    {
#line 3801 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3803 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3805 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3807 "parse_tree.set_of_var.c"
    }
#line 3809 "parse_tree.set_of_var.c"
    {
#line 3811 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3813 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3815 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3817 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3819 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      *parse_tree__set_of_var__Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_3);
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

#line 3851 "parse_tree.set_of_var.c"
    {
#line 3853 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3855 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3857 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3859 "parse_tree.set_of_var.c"
    }
#line 3861 "parse_tree.set_of_var.c"
    {
#line 3863 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3865 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3867 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3869 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3871 "parse_tree.set_of_var.c"
    }
#line 237 "set_of_var.m"
    {
#line 237 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Set_3);
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

#line 3905 "parse_tree.set_of_var.c"
    {
#line 3907 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3909 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3911 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3913 "parse_tree.set_of_var.c"
    }
#line 3915 "parse_tree.set_of_var.c"
    {
#line 3917 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3919 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3921 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3923 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3925 "parse_tree.set_of_var.c"
    }
#line 235 "set_of_var.m"
    {
#line 235 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
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

#line 3959 "parse_tree.set_of_var.c"
    {
#line 3961 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3963 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3965 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3967 "parse_tree.set_of_var.c"
    }
#line 3969 "parse_tree.set_of_var.c"
    {
#line 3971 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3973 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3975 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3977 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3979 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
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

#line 4011 "parse_tree.set_of_var.c"
    {
#line 4013 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4015 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4017 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4019 "parse_tree.set_of_var.c"
    }
#line 228 "set_of_var.m"
    {
#line 228 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__equal_2_p_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__SetA_3, (MR_Word) parse_tree__set_of_var__SetB_4);
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

#line 4053 "parse_tree.set_of_var.c"
    {
#line 4055 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4057 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4059 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4061 "parse_tree.set_of_var.c"
    }
#line 4063 "parse_tree.set_of_var.c"
    {
#line 4065 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4067 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4069 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4071 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4073 "parse_tree.set_of_var.c"
    }
#line 225 "set_of_var.m"
    {
#line 225 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__Set_3, parse_tree__set_of_var__Elem_4);
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

#line 4109 "parse_tree.set_of_var.c"
    {
#line 4111 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4113 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4115 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4117 "parse_tree.set_of_var.c"
    }
#line 4119 "parse_tree.set_of_var.c"
    {
#line 4121 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4123 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4125 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4127 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_11));
#line 4129 "parse_tree.set_of_var.c"
    }
#line 225 "set_of_var.m"
    {
#line 225 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_7, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Set_4, parse_tree__set_of_var__Elem_5);
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

#line 215 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__member_2_p_1_1(
#line 215 "set_of_var.m"
  void * parse_tree__set_of_var__env_ptr_arg)
#line 215 "set_of_var.m"
{
#line 215 "set_of_var.m"
  {
#line 215 "set_of_var.m"
    struct parse_tree__set_of_var__member_2_p_1_env_0_s * parse_tree__set_of_var__env_ptr = (struct parse_tree__set_of_var__member_2_p_1_env_0_s *) parse_tree__set_of_var__env_ptr_arg;

#line 215 "set_of_var.m"
    *((parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__Elem_4) = ((MR_Word) (parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4);
#line 215 "set_of_var.m"
    {
#line 215 "set_of_var.m"
      ((parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__cont)((parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr);
#line 215 "set_of_var.m"
      return;
    }
#line 215 "set_of_var.m"
  }
#line 215 "set_of_var.m"
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
#line 47 "set_of_var.m"
  {
#line 47 "set_of_var.m"
    struct parse_tree__set_of_var__member_2_p_1_env_0_s parse_tree__set_of_var__env;

#line 47 "set_of_var.m"
    (parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__Elem_4 = parse_tree__set_of_var__Elem_4;
#line 47 "set_of_var.m"
    (parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__cont = parse_tree__set_of_var__cont;
#line 47 "set_of_var.m"
    (parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr = parse_tree__set_of_var__cont_env_ptr;
#line 215 "set_of_var.m"
    {
#line 215 "set_of_var.m"
      MR_bool parse_tree__set_of_var__succeeded;
#line 215 "set_of_var.m"
      MR_Word parse_tree__set_of_var__TypeInfo_7_7;
#line 215 "set_of_var.m"
      MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

#line 4210 "parse_tree.set_of_var.c"
      {
#line 4212 "parse_tree.set_of_var.c"
        parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4214 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4216 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4218 "parse_tree.set_of_var.c"
      }
#line 4220 "parse_tree.set_of_var.c"
      {
#line 4222 "parse_tree.set_of_var.c"
        parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4224 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4226 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4228 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4230 "parse_tree.set_of_var.c"
      }
#line 215 "set_of_var.m"
      {
#line 215 "set_of_var.m"
        mercury__sparse_bitset__member_2_p_1(parse_tree__set_of_var__TypeClassInfo_for_enum_9, &(parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4, (MR_Word) parse_tree__set_of_var__Set_3, parse_tree__set_of_var__member_2_p_1_1, &parse_tree__set_of_var__env);
      }
#line 215 "set_of_var.m"
    }
#line 47 "set_of_var.m"
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

#line 4264 "parse_tree.set_of_var.c"
    {
#line 4266 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4268 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4270 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4272 "parse_tree.set_of_var.c"
    }
#line 4274 "parse_tree.set_of_var.c"
    {
#line 4276 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4278 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4280 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4282 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4284 "parse_tree.set_of_var.c"
    }
#line 215 "set_of_var.m"
    {
#line 215 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__member_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, ((MR_Box) (parse_tree__set_of_var__Elem_4)), (MR_Word) parse_tree__set_of_var__Set_3);
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

#line 4320 "parse_tree.set_of_var.c"
    {
#line 4322 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4324 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4326 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4328 "parse_tree.set_of_var.c"
    }
#line 4330 "parse_tree.set_of_var.c"
    {
#line 4332 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4334 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4336 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4338 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4340 "parse_tree.set_of_var.c"
    }
#line 212 "set_of_var.m"
    {
#line 212 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_singleton_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3, &parse_tree__set_of_var__conv0_Elem_4);
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

#line 4380 "parse_tree.set_of_var.c"
    {
#line 4382 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4384 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4386 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4388 "parse_tree.set_of_var.c"
    }
#line 209 "set_of_var.m"
    {
#line 209 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
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

#line 4418 "parse_tree.set_of_var.c"
    {
#line 4420 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4422 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4424 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4426 "parse_tree.set_of_var.c"
    }
#line 206 "set_of_var.m"
    {
#line 206 "set_of_var.m"
      return parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
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

#line 4460 "parse_tree.set_of_var.c"
    {
#line 4462 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4464 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4466 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4468 "parse_tree.set_of_var.c"
    }
#line 4470 "parse_tree.set_of_var.c"
    {
#line 4472 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4474 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4476 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4478 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4480 "parse_tree.set_of_var.c"
    }
#line 200 "set_of_var.m"
    {
#line 200 "set_of_var.m"
      return parse_tree__set_of_var__Count_4 = mercury__sparse_bitset__count_1_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3);
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

#line 4514 "parse_tree.set_of_var.c"
    {
#line 4516 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4518 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4520 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4522 "parse_tree.set_of_var.c"
    }
#line 4524 "parse_tree.set_of_var.c"
    {
#line 4526 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4528 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4530 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4532 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 4534 "parse_tree.set_of_var.c"
    }
#line 195 "set_of_var.m"
    {
#line 195 "set_of_var.m"
      *parse_tree__set_of_var__Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__Elem_3);
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

#line 4566 "parse_tree.set_of_var.c"
    {
#line 4568 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4570 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4572 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4574 "parse_tree.set_of_var.c"
    }
#line 4576 "parse_tree.set_of_var.c"
    {
#line 4578 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4580 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4582 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4584 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4586 "parse_tree.set_of_var.c"
    }
#line 195 "set_of_var.m"
    {
#line 195 "set_of_var.m"
      return parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Elem_3);
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
#line 191 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_Set_2;

#line 4618 "parse_tree.set_of_var.c"
    {
#line 4620 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4622 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4624 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4626 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__conv0_Set_2 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_4_5);
    }
#line 191 "set_of_var.m"
    *parse_tree__set_of_var__Set_2 = (MR_Word) parse_tree__set_of_var__conv0_Set_2;
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
#line 191 "set_of_var.m"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 4658 "parse_tree.set_of_var.c"
    {
#line 4660 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4662 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4664 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_2));
#line 4666 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__conv0_HeadVar__1_1 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_4_4);
    }
#line 191 "set_of_var.m"
    parse_tree__set_of_var__HeadVar__1_1 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__1_1;
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
