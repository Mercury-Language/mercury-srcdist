/*
** Automatically generated from `set_of_var.m'
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


/* :- module parse_tree.set_of_var. */
/* :- implementation. */

/*
INIT mercury__parse_tree__set_of_var__init
ENDINIT
*/

#include "parse_tree.set_of_var.mih"


#include "check_hlds.mih"
#include "hlds.mih"
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


#line 109 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1;

#line 112 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 115 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 118 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 121 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 124 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 127 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 130 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 133 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 135 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 138 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 141 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 143 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 145 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 148 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 151 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 153 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

#line 156 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 159 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 161 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 163 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 166 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 169 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 171 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 173 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

#line 176 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 179 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 181 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 183 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 185 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_4);

#line 318 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__VarB_6,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__LambdaHeadVar__1_15,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__LambdaHeadVar__2_16,
#line 318 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__LambdaHeadVar__3_17);

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



#line 402 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 410 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__term__pti_var_1__pseudo_1
  }
};

#line 418 "parse_tree.set_of_var.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 426 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 434 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 442 "parse_tree.set_of_var.c"
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

#line 459 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 467 "parse_tree.set_of_var.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 475 "parse_tree.set_of_var.c"
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

#line 492 "parse_tree.set_of_var.c"
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

#line 509 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
#line 512 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 514 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 516 "parse_tree.set_of_var.c"
{
#line 518 "parse_tree.set_of_var.c"
  {
#line 520 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 523 "parse_tree.set_of_var.c"
    {
#line 525 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_progvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 528 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 530 "parse_tree.set_of_var.c"
  }
#line 532 "parse_tree.set_of_var.c"
}

#line 535 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
#line 538 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 540 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 542 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 544 "parse_tree.set_of_var.c"
{
#line 546 "parse_tree.set_of_var.c"
  {
#line 548 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 551 "parse_tree.set_of_var.c"
    {
#line 553 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_progvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 556 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 558 "parse_tree.set_of_var.c"
  }
#line 560 "parse_tree.set_of_var.c"
}

#line 563 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
#line 566 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 568 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
#line 570 "parse_tree.set_of_var.c"
{
#line 572 "parse_tree.set_of_var.c"
  {
#line 574 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 577 "parse_tree.set_of_var.c"
    {
#line 579 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_tvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    }
#line 582 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 584 "parse_tree.set_of_var.c"
  }
#line 586 "parse_tree.set_of_var.c"
}

#line 589 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
#line 592 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
#line 594 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 596 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 598 "parse_tree.set_of_var.c"
{
#line 600 "parse_tree.set_of_var.c"
  {
#line 602 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 605 "parse_tree.set_of_var.c"
    {
#line 607 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_tvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 610 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 612 "parse_tree.set_of_var.c"
  }
#line 614 "parse_tree.set_of_var.c"
}

#line 617 "parse_tree.set_of_var.c"
static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
#line 620 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 622 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
#line 624 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
#line 626 "parse_tree.set_of_var.c"
{
#line 628 "parse_tree.set_of_var.c"
  {
#line 630 "parse_tree.set_of_var.c"
    MR_bool parse_tree__set_of_var__succeeded;

#line 633 "parse_tree.set_of_var.c"
    {
#line 635 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    }
#line 638 "parse_tree.set_of_var.c"
    return parse_tree__set_of_var__succeeded;
#line 640 "parse_tree.set_of_var.c"
  }
#line 642 "parse_tree.set_of_var.c"
}

#line 645 "parse_tree.set_of_var.c"
static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
#line 648 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
#line 650 "parse_tree.set_of_var.c"
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
#line 652 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
#line 654 "parse_tree.set_of_var.c"
  MR_Box parse_tree__set_of_var__wrapper_arg_4)
#line 656 "parse_tree.set_of_var.c"
{
#line 658 "parse_tree.set_of_var.c"
  {
#line 660 "parse_tree.set_of_var.c"
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

#line 663 "parse_tree.set_of_var.c"
    {
#line 665 "parse_tree.set_of_var.c"
      parse_tree__set_of_var____Compare____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), &parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_3), ((MR_Word) parse_tree__set_of_var__wrapper_arg_4));
    }
#line 668 "parse_tree.set_of_var.c"
    *parse_tree__set_of_var__wrapper_arg_2 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
#line 670 "parse_tree.set_of_var.c"
  }
#line 672 "parse_tree.set_of_var.c"
}

#line 318 "set_of_var.m"
static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__VarB_6,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__LambdaHeadVar__1_15,
#line 318 "set_of_var.m"
  MR_Word parse_tree__set_of_var__LambdaHeadVar__2_16,
#line 318 "set_of_var.m"
  MR_Word * parse_tree__set_of_var__LambdaHeadVar__3_17)
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
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__V_18_18, 0) = ((MR_Box) (parse_tree__set_of_var__LambdaHeadVar__1_15));
#line 320 "set_of_var.m"
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__V_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__V_19_19));
#line 320 "set_of_var.m"
    }
#line 725 "parse_tree.set_of_var.c"
    {
#line 727 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 729 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 731 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 733 "parse_tree.set_of_var.c"
    }
#line 735 "parse_tree.set_of_var.c"
    {
#line 737 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 739 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 741 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 743 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_34));
#line 745 "parse_tree.set_of_var.c"
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
      *parse_tree__set_of_var__LambdaHeadVar__3_17 = base;
#line 321 "set_of_var.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__Set_12));
#line 321 "set_of_var.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__LambdaHeadVar__2_16));
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

#line 795 "parse_tree.set_of_var.c"
    {
#line 797 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 799 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 801 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 803 "parse_tree.set_of_var.c"
    }
#line 187 "set_of_var.m"
    {
#line 187 "set_of_var.m"
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(parse_tree__set_of_var__TypeInfo_8_8, parse_tree__set_of_var__HeadVar__1_1, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_4, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_5);
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

#line 837 "parse_tree.set_of_var.c"
    {
#line 839 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 843 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 845 "parse_tree.set_of_var.c"
    }
#line 187 "set_of_var.m"
    {
#line 187 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_3, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_4);
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
      parse_tree__set_of_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[3], ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_4)));
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
      parse_tree__set_of_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[1], ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_4)));
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
#line 1039 "parse_tree.set_of_var.c"
        {
#line 1041 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1045 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1047 "parse_tree.set_of_var.c"
        }
#line 1049 "parse_tree.set_of_var.c"
        {
#line 1051 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1055 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1057 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_28));
#line 1059 "parse_tree.set_of_var.c"
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
#line 1178 "parse_tree.set_of_var.c"
        {
#line 1180 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1184 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1186 "parse_tree.set_of_var.c"
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

#line 1232 "parse_tree.set_of_var.c"
        {
#line 1234 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_11_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1238 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1240 "parse_tree.set_of_var.c"
        }
#line 1242 "parse_tree.set_of_var.c"
        {
#line 1244 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1248 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1250 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_41));
#line 1252 "parse_tree.set_of_var.c"
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

#line 1308 "parse_tree.set_of_var.c"
            {
#line 1310 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_6_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1314 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1316 "parse_tree.set_of_var.c"
            }
#line 1318 "parse_tree.set_of_var.c"
            {
#line 1320 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeClassInfo_for_enum_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1324 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1326 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_46));
#line 1328 "parse_tree.set_of_var.c"
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

#line 1346 "parse_tree.set_of_var.c"
            {
#line 1348 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_5_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1350 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1352 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1354 "parse_tree.set_of_var.c"
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

#line 1368 "parse_tree.set_of_var.c"
                {
#line 1370 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1374 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1376 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_5_51));
#line 1378 "parse_tree.set_of_var.c"
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
#line 1405 "parse_tree.set_of_var.c"
                {
#line 1407 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeInfo_11_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1411 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1413 "parse_tree.set_of_var.c"
                }
#line 1415 "parse_tree.set_of_var.c"
                {
#line 1417 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1421 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1423 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_63));
#line 1425 "parse_tree.set_of_var.c"
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
#line 1436 "parse_tree.set_of_var.c"
        {
#line 1438 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1440 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1442 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1444 "parse_tree.set_of_var.c"
        }
#line 1446 "parse_tree.set_of_var.c"
        {
#line 1448 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1452 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_22_22));
#line 1454 "parse_tree.set_of_var.c"
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
#line 1514 "parse_tree.set_of_var.c"
        {
#line 1516 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1520 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_13));
#line 1522 "parse_tree.set_of_var.c"
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

#line 1585 "parse_tree.set_of_var.c"
    {
#line 1587 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1591 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1593 "parse_tree.set_of_var.c"
    }
#line 1595 "parse_tree.set_of_var.c"
    {
#line 1597 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1599 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1601 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1603 "parse_tree.set_of_var.c"
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
    MR_Word parse_tree__set_of_var__conv0_LambdaHeadVar__3_17;

#line 318 "set_of_var.m"
    {
#line 318 "set_of_var.m"
      parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_LambdaHeadVar__3_17);
    }
#line 318 "set_of_var.m"
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_LambdaHeadVar__3_17));
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
#line 1702 "parse_tree.set_of_var.c"
    {
#line 1704 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1706 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1708 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1710 "parse_tree.set_of_var.c"
    }
#line 1712 "parse_tree.set_of_var.c"
    {
#line 1714 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1716 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1718 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1720 "parse_tree.set_of_var.c"
    }
#line 1722 "parse_tree.set_of_var.c"
    {
#line 1724 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1726 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1728 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_29_29));
#line 1730 "parse_tree.set_of_var.c"
    }
#line 1732 "parse_tree.set_of_var.c"
    {
#line 1734 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1736 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1738 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1740 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1742 "parse_tree.set_of_var.c"
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

#line 1796 "parse_tree.set_of_var.c"
    {
#line 1798 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1800 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1802 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 1804 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__conv0_V_9_9 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_7_21);
    }
#line 191 "set_of_var.m"
    parse_tree__set_of_var__V_9_9 = (MR_Word) parse_tree__set_of_var__conv0_V_9_9;
#line 1813 "parse_tree.set_of_var.c"
    {
#line 1815 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1819 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_21));
#line 1821 "parse_tree.set_of_var.c"
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

#line 1881 "parse_tree.set_of_var.c"
    {
#line 1883 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1885 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1887 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1889 "parse_tree.set_of_var.c"
    }
#line 1891 "parse_tree.set_of_var.c"
    {
#line 1893 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1895 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1897 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1899 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 1901 "parse_tree.set_of_var.c"
    }
#line 353 "set_of_var.m"
    {
#line 353 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__all_true_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__P_3, (MR_Word) parse_tree__set_of_var__Set_4);
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

#line 1943 "parse_tree.set_of_var.c"
    {
#line 1945 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1947 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1949 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1951 "parse_tree.set_of_var.c"
    }
#line 1953 "parse_tree.set_of_var.c"
    {
#line 1955 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1957 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1959 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1961 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1963 "parse_tree.set_of_var.c"
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

#line 2003 "parse_tree.set_of_var.c"
    {
#line 2005 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2007 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2009 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2011 "parse_tree.set_of_var.c"
    }
#line 2013 "parse_tree.set_of_var.c"
    {
#line 2015 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2017 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2019 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2021 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_9_9));
#line 2023 "parse_tree.set_of_var.c"
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

#line 2061 "parse_tree.set_of_var.c"
    {
#line 2063 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2065 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2067 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2069 "parse_tree.set_of_var.c"
    }
#line 2071 "parse_tree.set_of_var.c"
    {
#line 2073 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2075 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2077 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2079 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 2081 "parse_tree.set_of_var.c"
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

#line 2123 "parse_tree.set_of_var.c"
    {
#line 2125 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2127 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2129 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2131 "parse_tree.set_of_var.c"
    }
#line 2133 "parse_tree.set_of_var.c"
    {
#line 2135 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2137 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2139 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2141 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2143 "parse_tree.set_of_var.c"
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

#line 2181 "parse_tree.set_of_var.c"
    {
#line 2183 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2185 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2187 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2189 "parse_tree.set_of_var.c"
    }
#line 2191 "parse_tree.set_of_var.c"
    {
#line 2193 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2195 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2197 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2199 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2201 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_51_95_49_4_p_3(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
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

#line 2241 "parse_tree.set_of_var.c"
    {
#line 2243 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2245 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2247 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2249 "parse_tree.set_of_var.c"
    }
#line 2251 "parse_tree.set_of_var.c"
    {
#line 2253 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2255 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2257 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2259 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2261 "parse_tree.set_of_var.c"
    }
#line 339 "set_of_var.m"
    {
#line 339 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
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
#line 2360 "parse_tree.set_of_var.c"
        {
#line 2362 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2364 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2366 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
#line 2368 "parse_tree.set_of_var.c"
        }
#line 2370 "parse_tree.set_of_var.c"
        {
#line 2372 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2374 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 2376 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_13_13));
#line 2378 "parse_tree.set_of_var.c"
        }
#line 2380 "parse_tree.set_of_var.c"
        {
#line 2382 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2384 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2386 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_15_15));
#line 2388 "parse_tree.set_of_var.c"
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
#line 2482 "parse_tree.set_of_var.c"
    {
#line 2484 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2486 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2488 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2490 "parse_tree.set_of_var.c"
    }
#line 2492 "parse_tree.set_of_var.c"
    {
#line 2494 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2496 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2498 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2500 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2502 "parse_tree.set_of_var.c"
    }
#line 2504 "parse_tree.set_of_var.c"
    {
#line 2506 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2508 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 2510 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2512 "parse_tree.set_of_var.c"
    }
#line 2514 "parse_tree.set_of_var.c"
    {
#line 2516 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2518 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2520 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_18_18));
#line 2522 "parse_tree.set_of_var.c"
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

#line 2564 "parse_tree.set_of_var.c"
    {
#line 2566 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2568 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2570 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2572 "parse_tree.set_of_var.c"
    }
#line 2574 "parse_tree.set_of_var.c"
    {
#line 2576 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2578 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2580 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2582 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2584 "parse_tree.set_of_var.c"
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

#line 2628 "parse_tree.set_of_var.c"
    {
#line 2630 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2632 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2634 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2636 "parse_tree.set_of_var.c"
    }
#line 2638 "parse_tree.set_of_var.c"
    {
#line 2640 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2642 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2644 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2646 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2648 "parse_tree.set_of_var.c"
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

#line 2686 "parse_tree.set_of_var.c"
    {
#line 2688 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2690 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2692 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2694 "parse_tree.set_of_var.c"
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

#line 2730 "parse_tree.set_of_var.c"
    {
#line 2732 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2734 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2736 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2738 "parse_tree.set_of_var.c"
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

#line 2774 "parse_tree.set_of_var.c"
    {
#line 2776 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2778 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2780 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2782 "parse_tree.set_of_var.c"
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

#line 2816 "parse_tree.set_of_var.c"
    {
#line 2818 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2820 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2822 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 2824 "parse_tree.set_of_var.c"
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

#line 2862 "parse_tree.set_of_var.c"
    {
#line 2864 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2866 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2868 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2870 "parse_tree.set_of_var.c"
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

#line 2906 "parse_tree.set_of_var.c"
    {
#line 2908 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2910 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2912 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2914 "parse_tree.set_of_var.c"
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

#line 2950 "parse_tree.set_of_var.c"
    {
#line 2952 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2954 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2956 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2958 "parse_tree.set_of_var.c"
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

#line 2992 "parse_tree.set_of_var.c"
    {
#line 2994 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2996 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2998 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3000 "parse_tree.set_of_var.c"
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

#line 3038 "parse_tree.set_of_var.c"
    {
#line 3040 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3042 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3044 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 3046 "parse_tree.set_of_var.c"
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

#line 3082 "parse_tree.set_of_var.c"
    {
#line 3084 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3086 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3088 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3090 "parse_tree.set_of_var.c"
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

#line 3132 "parse_tree.set_of_var.c"
    {
#line 3134 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3136 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3138 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3140 "parse_tree.set_of_var.c"
    }
#line 3142 "parse_tree.set_of_var.c"
    {
#line 3144 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3146 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3148 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3150 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3152 "parse_tree.set_of_var.c"
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

#line 3202 "parse_tree.set_of_var.c"
    {
#line 3204 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3206 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3208 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3210 "parse_tree.set_of_var.c"
    }
#line 3212 "parse_tree.set_of_var.c"
    {
#line 3214 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3216 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3218 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3220 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3222 "parse_tree.set_of_var.c"
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

#line 3270 "parse_tree.set_of_var.c"
    {
#line 3272 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3274 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3276 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3278 "parse_tree.set_of_var.c"
    }
#line 3280 "parse_tree.set_of_var.c"
    {
#line 3282 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3284 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3286 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3288 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3290 "parse_tree.set_of_var.c"
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

#line 3336 "parse_tree.set_of_var.c"
    {
#line 3338 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3340 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3342 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3344 "parse_tree.set_of_var.c"
    }
#line 3346 "parse_tree.set_of_var.c"
    {
#line 3348 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3350 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3352 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3354 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3356 "parse_tree.set_of_var.c"
    }
#line 271 "set_of_var.m"
    {
#line 271 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3390 "parse_tree.set_of_var.c"
    {
#line 3392 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3394 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3396 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3398 "parse_tree.set_of_var.c"
    }
#line 3400 "parse_tree.set_of_var.c"
    {
#line 3402 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3404 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3406 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3408 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3410 "parse_tree.set_of_var.c"
    }
#line 268 "set_of_var.m"
    {
#line 268 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3444 "parse_tree.set_of_var.c"
    {
#line 3446 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3448 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3450 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3452 "parse_tree.set_of_var.c"
    }
#line 3454 "parse_tree.set_of_var.c"
    {
#line 3456 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3458 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3460 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3462 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3464 "parse_tree.set_of_var.c"
    }
#line 265 "set_of_var.m"
    {
#line 265 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3498 "parse_tree.set_of_var.c"
    {
#line 3500 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3502 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3504 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3506 "parse_tree.set_of_var.c"
    }
#line 3508 "parse_tree.set_of_var.c"
    {
#line 3510 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3512 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3514 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3516 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3518 "parse_tree.set_of_var.c"
    }
#line 262 "set_of_var.m"
    {
#line 262 "set_of_var.m"
      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
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

#line 3554 "parse_tree.set_of_var.c"
    {
#line 3556 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3558 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3560 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3562 "parse_tree.set_of_var.c"
    }
#line 3564 "parse_tree.set_of_var.c"
    {
#line 3566 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3568 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3570 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3572 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3574 "parse_tree.set_of_var.c"
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

#line 3619 "parse_tree.set_of_var.c"
    {
#line 3621 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3623 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3625 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3627 "parse_tree.set_of_var.c"
    }
#line 250 "set_of_var.m"
    {
#line 250 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__OrdSet_3, &parse_tree__set_of_var__conv0_List_5);
    }
#line 250 "set_of_var.m"
    parse_tree__set_of_var__List_5 = (MR_Word) parse_tree__set_of_var__conv0_List_5;
#line 3636 "parse_tree.set_of_var.c"
    {
#line 3638 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3640 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3642 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3644 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3646 "parse_tree.set_of_var.c"
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

#line 3680 "parse_tree.set_of_var.c"
    {
#line 3682 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3684 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3686 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3688 "parse_tree.set_of_var.c"
    }
#line 3690 "parse_tree.set_of_var.c"
    {
#line 3692 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3694 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3696 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3698 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3700 "parse_tree.set_of_var.c"
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

#line 3732 "parse_tree.set_of_var.c"
    {
#line 3734 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3736 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3738 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3740 "parse_tree.set_of_var.c"
    }
#line 3742 "parse_tree.set_of_var.c"
    {
#line 3744 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3746 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3748 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3750 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3752 "parse_tree.set_of_var.c"
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

#line 3784 "parse_tree.set_of_var.c"
    {
#line 3786 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3788 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3790 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3792 "parse_tree.set_of_var.c"
    }
#line 3794 "parse_tree.set_of_var.c"
    {
#line 3796 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3798 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3800 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3802 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3804 "parse_tree.set_of_var.c"
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

#line 3836 "parse_tree.set_of_var.c"
    {
#line 3838 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3840 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3842 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3844 "parse_tree.set_of_var.c"
    }
#line 3846 "parse_tree.set_of_var.c"
    {
#line 3848 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3850 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3852 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3854 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3856 "parse_tree.set_of_var.c"
    }
#line 237 "set_of_var.m"
    {
#line 237 "set_of_var.m"
      parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Set_3);
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

#line 3890 "parse_tree.set_of_var.c"
    {
#line 3892 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3894 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3896 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3898 "parse_tree.set_of_var.c"
    }
#line 3900 "parse_tree.set_of_var.c"
    {
#line 3902 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3904 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3906 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3908 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3910 "parse_tree.set_of_var.c"
    }
#line 235 "set_of_var.m"
    {
#line 235 "set_of_var.m"
      parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
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

#line 3944 "parse_tree.set_of_var.c"
    {
#line 3946 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3948 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3950 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3952 "parse_tree.set_of_var.c"
    }
#line 3954 "parse_tree.set_of_var.c"
    {
#line 3956 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3958 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3960 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3962 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3964 "parse_tree.set_of_var.c"
    }
#line 233 "set_of_var.m"
    {
#line 233 "set_of_var.m"
      parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
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

#line 3996 "parse_tree.set_of_var.c"
    {
#line 3998 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4000 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4002 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4004 "parse_tree.set_of_var.c"
    }
#line 228 "set_of_var.m"
    {
#line 228 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__equal_2_p_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__SetA_3, (MR_Word) parse_tree__set_of_var__SetB_4);
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

#line 4038 "parse_tree.set_of_var.c"
    {
#line 4040 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4042 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4044 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4046 "parse_tree.set_of_var.c"
    }
#line 4048 "parse_tree.set_of_var.c"
    {
#line 4050 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4052 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4054 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4056 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4058 "parse_tree.set_of_var.c"
    }
#line 225 "set_of_var.m"
    {
#line 225 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__Set_3, parse_tree__set_of_var__Elem_4);
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

#line 4094 "parse_tree.set_of_var.c"
    {
#line 4096 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4098 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4100 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4102 "parse_tree.set_of_var.c"
    }
#line 4104 "parse_tree.set_of_var.c"
    {
#line 4106 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4108 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4110 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4112 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_11));
#line 4114 "parse_tree.set_of_var.c"
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

#line 4193 "parse_tree.set_of_var.c"
      {
#line 4195 "parse_tree.set_of_var.c"
        parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4197 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4199 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4201 "parse_tree.set_of_var.c"
      }
#line 4203 "parse_tree.set_of_var.c"
      {
#line 4205 "parse_tree.set_of_var.c"
        parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4207 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4209 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4211 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4213 "parse_tree.set_of_var.c"
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

#line 4247 "parse_tree.set_of_var.c"
    {
#line 4249 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4251 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4253 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4255 "parse_tree.set_of_var.c"
    }
#line 4257 "parse_tree.set_of_var.c"
    {
#line 4259 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4261 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4263 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4265 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4267 "parse_tree.set_of_var.c"
    }
#line 215 "set_of_var.m"
    {
#line 215 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__member_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, ((MR_Box) (parse_tree__set_of_var__Elem_4)), (MR_Word) parse_tree__set_of_var__Set_3);
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

#line 4303 "parse_tree.set_of_var.c"
    {
#line 4305 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4307 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4309 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4311 "parse_tree.set_of_var.c"
    }
#line 4313 "parse_tree.set_of_var.c"
    {
#line 4315 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4317 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4319 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4321 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4323 "parse_tree.set_of_var.c"
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

#line 4363 "parse_tree.set_of_var.c"
    {
#line 4365 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4367 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4369 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4371 "parse_tree.set_of_var.c"
    }
#line 209 "set_of_var.m"
    {
#line 209 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
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

#line 4401 "parse_tree.set_of_var.c"
    {
#line 4403 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4405 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4407 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4409 "parse_tree.set_of_var.c"
    }
#line 206 "set_of_var.m"
    {
#line 206 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
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

#line 4443 "parse_tree.set_of_var.c"
    {
#line 4445 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4447 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4449 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4451 "parse_tree.set_of_var.c"
    }
#line 4453 "parse_tree.set_of_var.c"
    {
#line 4455 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4457 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4459 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4461 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4463 "parse_tree.set_of_var.c"
    }
#line 200 "set_of_var.m"
    {
#line 200 "set_of_var.m"
      parse_tree__set_of_var__Count_4 = mercury__sparse_bitset__count_1_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3);
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

#line 4497 "parse_tree.set_of_var.c"
    {
#line 4499 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4501 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4503 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4505 "parse_tree.set_of_var.c"
    }
#line 4507 "parse_tree.set_of_var.c"
    {
#line 4509 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4511 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4513 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4515 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 4517 "parse_tree.set_of_var.c"
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

#line 4549 "parse_tree.set_of_var.c"
    {
#line 4551 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4553 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4555 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4557 "parse_tree.set_of_var.c"
    }
#line 4559 "parse_tree.set_of_var.c"
    {
#line 4561 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4563 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4565 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4567 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4569 "parse_tree.set_of_var.c"
    }
#line 195 "set_of_var.m"
    {
#line 195 "set_of_var.m"
      parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Elem_3);
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

#line 4601 "parse_tree.set_of_var.c"
    {
#line 4603 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4605 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4607 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4609 "parse_tree.set_of_var.c"
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

#line 4641 "parse_tree.set_of_var.c"
    {
#line 4643 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4645 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4647 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_2));
#line 4649 "parse_tree.set_of_var.c"
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
