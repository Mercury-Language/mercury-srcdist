/*
** Automatically generated from `set_of_var.m'
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


/* :- module parse_tree.set_of_var. */
/* :- implementation. */

/*
INIT mercury__parse_tree__set_of_var__init
ENDINIT
*/

#include "parse_tree.set_of_var.mih"


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
#include "parse_tree.maybe_error.mih"
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

#line 836 "parse_tree.set_of_var.c"
    {
#line 838 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 842 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 844 "parse_tree.set_of_var.c"
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
#line 464 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeInfo_7_28;
#line 464 "set_of_var.m"
        MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_30;

#line 463 "set_of_var.m"
        {
#line 463 "set_of_var.m"
          parse_tree__set_of_var__divide_constraints_6_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__Ss_13, &parse_tree__set_of_var__C0_17, &parse_tree__set_of_var__NC0_18, parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5, &parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22);
        }
#line 1038 "parse_tree.set_of_var.c"
        {
#line 1040 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1044 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1046 "parse_tree.set_of_var.c"
        }
#line 1048 "parse_tree.set_of_var.c"
        {
#line 1050 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1054 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
#line 1056 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_28));
#line 1058 "parse_tree.set_of_var.c"
        }
#line 215 "set_of_var.m"
        {
#line 215 "set_of_var.m"
          parse_tree__set_of_var__succeeded = mercury__sparse_bitset__member_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_30, ((MR_Box) (parse_tree__set_of_var__HeadVar__1_1)), (MR_Word) parse_tree__set_of_var__S_12);
        }
#line 464 "set_of_var.m"
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
#line 466 "set_of_var.m"
            if (parse_tree__set_of_var__succeeded)
#line 467 "set_of_var.m"
              *parse_tree__set_of_var__HeadVar__3_3 = parse_tree__set_of_var__C0_17;
#line 466 "set_of_var.m"
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
#line 464 "set_of_var.m"
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
#line 1177 "parse_tree.set_of_var.c"
        {
#line 1179 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1183 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1185 "parse_tree.set_of_var.c"
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
#line 484 "set_of_var.m"
        MR_Word parse_tree__set_of_var__VarPrime_30;
#line 484 "set_of_var.m"
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

#line 1231 "parse_tree.set_of_var.c"
        {
#line 1233 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_11_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1237 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1239 "parse_tree.set_of_var.c"
        }
#line 1241 "parse_tree.set_of_var.c"
        {
#line 1243 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1247 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1249 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_41));
#line 1251 "parse_tree.set_of_var.c"
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
#line 484 "set_of_var.m"
        if (parse_tree__set_of_var__succeeded)
#line 485 "set_of_var.m"
          {
#line 485 "set_of_var.m"
            parse_tree__set_of_var__Var_11 = parse_tree__set_of_var__VarPrime_30;
#line 486 "set_of_var.m"
            parse_tree__set_of_var__Vars1_12 = parse_tree__set_of_var__VarsPrime_31;
#line 485 "set_of_var.m"
          }
#line 484 "set_of_var.m"
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

#line 1307 "parse_tree.set_of_var.c"
            {
#line 1309 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_6_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1313 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1315 "parse_tree.set_of_var.c"
            }
#line 1317 "parse_tree.set_of_var.c"
            {
#line 1319 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeClassInfo_for_enum_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1323 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1325 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_46));
#line 1327 "parse_tree.set_of_var.c"
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
#line 413 "set_of_var.m"
          {
#line 413 "set_of_var.m"
            MR_Word parse_tree__set_of_var__TypeInfo_5_51;

#line 1345 "parse_tree.set_of_var.c"
            {
#line 1347 "parse_tree.set_of_var.c"
              parse_tree__set_of_var__TypeInfo_5_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1349 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1351 "parse_tree.set_of_var.c"
              MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1353 "parse_tree.set_of_var.c"
            }
#line 206 "set_of_var.m"
            {
#line 206 "set_of_var.m"
              parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_51, (MR_Word) parse_tree__set_of_var__RestVars_15);
            }
#line 413 "set_of_var.m"
            if (parse_tree__set_of_var__succeeded)
#line 416 "set_of_var.m"
              {
#line 416 "set_of_var.m"
                MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_56;

#line 1367 "parse_tree.set_of_var.c"
                {
#line 1369 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1371 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1373 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1375 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_5_51));
#line 1377 "parse_tree.set_of_var.c"
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
#line 413 "set_of_var.m"
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
#line 1404 "parse_tree.set_of_var.c"
                {
#line 1406 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeInfo_11_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1408 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1410 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1412 "parse_tree.set_of_var.c"
                }
#line 1414 "parse_tree.set_of_var.c"
                {
#line 1416 "parse_tree.set_of_var.c"
                  parse_tree__set_of_var__TypeClassInfo_for_enum_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1420 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1422 "parse_tree.set_of_var.c"
                  MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_63));
#line 1424 "parse_tree.set_of_var.c"
                }
#line 262 "set_of_var.m"
                {
#line 262 "set_of_var.m"
                  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_65, parse_tree__set_of_var__Var_11, parse_tree__set_of_var__SameColour0_19, parse_tree__set_of_var__SameColour_8);
                }
#line 423 "set_of_var.m"
              }
#line 413 "set_of_var.m"
          }
#line 1435 "parse_tree.set_of_var.c"
        {
#line 1437 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1441 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
#line 1443 "parse_tree.set_of_var.c"
        }
#line 1445 "parse_tree.set_of_var.c"
        {
#line 1447 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1449 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1451 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_22_22));
#line 1453 "parse_tree.set_of_var.c"
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
#line 1513 "parse_tree.set_of_var.c"
        {
#line 1515 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1519 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_13));
#line 1521 "parse_tree.set_of_var.c"
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

#line 1584 "parse_tree.set_of_var.c"
    {
#line 1586 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1588 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1590 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1592 "parse_tree.set_of_var.c"
    }
#line 1594 "parse_tree.set_of_var.c"
    {
#line 1596 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1600 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1602 "parse_tree.set_of_var.c"
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
#line 1701 "parse_tree.set_of_var.c"
    {
#line 1703 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1705 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1707 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1709 "parse_tree.set_of_var.c"
    }
#line 1711 "parse_tree.set_of_var.c"
    {
#line 1713 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1715 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1717 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1719 "parse_tree.set_of_var.c"
    }
#line 1721 "parse_tree.set_of_var.c"
    {
#line 1723 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1725 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 1727 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_29_29));
#line 1729 "parse_tree.set_of_var.c"
    }
#line 1731 "parse_tree.set_of_var.c"
    {
#line 1733 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1735 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1737 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
#line 1739 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
#line 1741 "parse_tree.set_of_var.c"
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

#line 1795 "parse_tree.set_of_var.c"
    {
#line 1797 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1799 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1801 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 1803 "parse_tree.set_of_var.c"
    }
#line 191 "set_of_var.m"
    {
#line 191 "set_of_var.m"
      parse_tree__set_of_var__conv0_V_9_9 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_7_21);
    }
#line 191 "set_of_var.m"
    parse_tree__set_of_var__V_9_9 = (MR_Word) parse_tree__set_of_var__conv0_V_9_9;
#line 1812 "parse_tree.set_of_var.c"
    {
#line 1814 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1816 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 1818 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_21));
#line 1820 "parse_tree.set_of_var.c"
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

#line 1880 "parse_tree.set_of_var.c"
    {
#line 1882 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1884 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1886 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1888 "parse_tree.set_of_var.c"
    }
#line 1890 "parse_tree.set_of_var.c"
    {
#line 1892 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1894 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1896 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 1898 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 1900 "parse_tree.set_of_var.c"
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

#line 1942 "parse_tree.set_of_var.c"
    {
#line 1944 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1946 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1948 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1950 "parse_tree.set_of_var.c"
    }
#line 1952 "parse_tree.set_of_var.c"
    {
#line 1954 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1956 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1958 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 1960 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 1962 "parse_tree.set_of_var.c"
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

#line 2002 "parse_tree.set_of_var.c"
    {
#line 2004 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2006 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2008 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2010 "parse_tree.set_of_var.c"
    }
#line 2012 "parse_tree.set_of_var.c"
    {
#line 2014 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2016 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2018 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2020 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_9_9));
#line 2022 "parse_tree.set_of_var.c"
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

#line 2060 "parse_tree.set_of_var.c"
    {
#line 2062 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2064 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2066 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2068 "parse_tree.set_of_var.c"
    }
#line 2070 "parse_tree.set_of_var.c"
    {
#line 2072 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2074 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2076 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2078 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 2080 "parse_tree.set_of_var.c"
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

#line 2122 "parse_tree.set_of_var.c"
    {
#line 2124 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2126 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2128 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2130 "parse_tree.set_of_var.c"
    }
#line 2132 "parse_tree.set_of_var.c"
    {
#line 2134 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2136 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2138 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2140 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2142 "parse_tree.set_of_var.c"
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

#line 2180 "parse_tree.set_of_var.c"
    {
#line 2182 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2184 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2186 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2188 "parse_tree.set_of_var.c"
    }
#line 2190 "parse_tree.set_of_var.c"
    {
#line 2192 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2194 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2196 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2198 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2200 "parse_tree.set_of_var.c"
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

#line 2240 "parse_tree.set_of_var.c"
    {
#line 2242 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2244 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2246 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2248 "parse_tree.set_of_var.c"
    }
#line 2250 "parse_tree.set_of_var.c"
    {
#line 2252 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2254 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2256 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
#line 2258 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2260 "parse_tree.set_of_var.c"
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
#line 2359 "parse_tree.set_of_var.c"
        {
#line 2361 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2363 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2365 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
#line 2367 "parse_tree.set_of_var.c"
        }
#line 2369 "parse_tree.set_of_var.c"
        {
#line 2371 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2373 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 2375 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_13_13));
#line 2377 "parse_tree.set_of_var.c"
        }
#line 2379 "parse_tree.set_of_var.c"
        {
#line 2381 "parse_tree.set_of_var.c"
          parse_tree__set_of_var__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2383 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2385 "parse_tree.set_of_var.c"
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_15_15));
#line 2387 "parse_tree.set_of_var.c"
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
#line 2481 "parse_tree.set_of_var.c"
    {
#line 2483 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2485 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2487 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2489 "parse_tree.set_of_var.c"
    }
#line 2491 "parse_tree.set_of_var.c"
    {
#line 2493 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2495 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2497 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2499 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2501 "parse_tree.set_of_var.c"
    }
#line 2503 "parse_tree.set_of_var.c"
    {
#line 2505 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2507 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 2509 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
#line 2511 "parse_tree.set_of_var.c"
    }
#line 2513 "parse_tree.set_of_var.c"
    {
#line 2515 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2517 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 2519 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_18_18));
#line 2521 "parse_tree.set_of_var.c"
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

#line 2563 "parse_tree.set_of_var.c"
    {
#line 2565 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2567 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2569 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2571 "parse_tree.set_of_var.c"
    }
#line 2573 "parse_tree.set_of_var.c"
    {
#line 2575 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2577 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2579 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2581 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2583 "parse_tree.set_of_var.c"
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

#line 2627 "parse_tree.set_of_var.c"
    {
#line 2629 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2631 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2633 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2635 "parse_tree.set_of_var.c"
    }
#line 2637 "parse_tree.set_of_var.c"
    {
#line 2639 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2641 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2643 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 2645 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 2647 "parse_tree.set_of_var.c"
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

#line 2685 "parse_tree.set_of_var.c"
    {
#line 2687 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2689 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2691 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2693 "parse_tree.set_of_var.c"
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

#line 2729 "parse_tree.set_of_var.c"
    {
#line 2731 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2733 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2735 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2737 "parse_tree.set_of_var.c"
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

#line 2773 "parse_tree.set_of_var.c"
    {
#line 2775 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2777 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2779 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2781 "parse_tree.set_of_var.c"
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

#line 2815 "parse_tree.set_of_var.c"
    {
#line 2817 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2819 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2821 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 2823 "parse_tree.set_of_var.c"
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

#line 2861 "parse_tree.set_of_var.c"
    {
#line 2863 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2865 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2867 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 2869 "parse_tree.set_of_var.c"
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

#line 2905 "parse_tree.set_of_var.c"
    {
#line 2907 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2909 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2911 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 2913 "parse_tree.set_of_var.c"
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

#line 2949 "parse_tree.set_of_var.c"
    {
#line 2951 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2953 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2955 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 2957 "parse_tree.set_of_var.c"
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

#line 2991 "parse_tree.set_of_var.c"
    {
#line 2993 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2995 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2997 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 2999 "parse_tree.set_of_var.c"
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

#line 3037 "parse_tree.set_of_var.c"
    {
#line 3039 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3041 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3043 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 3045 "parse_tree.set_of_var.c"
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

#line 3081 "parse_tree.set_of_var.c"
    {
#line 3083 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3085 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3087 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3089 "parse_tree.set_of_var.c"
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

#line 3131 "parse_tree.set_of_var.c"
    {
#line 3133 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3135 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3137 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3139 "parse_tree.set_of_var.c"
    }
#line 3141 "parse_tree.set_of_var.c"
    {
#line 3143 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3145 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3147 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3149 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3151 "parse_tree.set_of_var.c"
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

#line 3201 "parse_tree.set_of_var.c"
    {
#line 3203 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3205 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3207 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3209 "parse_tree.set_of_var.c"
    }
#line 3211 "parse_tree.set_of_var.c"
    {
#line 3213 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3215 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3217 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3219 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3221 "parse_tree.set_of_var.c"
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

#line 3269 "parse_tree.set_of_var.c"
    {
#line 3271 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3273 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3275 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3277 "parse_tree.set_of_var.c"
    }
#line 3279 "parse_tree.set_of_var.c"
    {
#line 3281 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3283 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3285 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3287 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3289 "parse_tree.set_of_var.c"
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

#line 3335 "parse_tree.set_of_var.c"
    {
#line 3337 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3339 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3341 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3343 "parse_tree.set_of_var.c"
    }
#line 3345 "parse_tree.set_of_var.c"
    {
#line 3347 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3349 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3351 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3353 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3355 "parse_tree.set_of_var.c"
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

#line 3389 "parse_tree.set_of_var.c"
    {
#line 3391 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3393 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3395 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3397 "parse_tree.set_of_var.c"
    }
#line 3399 "parse_tree.set_of_var.c"
    {
#line 3401 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3403 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3405 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3407 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3409 "parse_tree.set_of_var.c"
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

#line 3443 "parse_tree.set_of_var.c"
    {
#line 3445 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3447 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3449 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3451 "parse_tree.set_of_var.c"
    }
#line 3453 "parse_tree.set_of_var.c"
    {
#line 3455 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3457 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3459 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3461 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3463 "parse_tree.set_of_var.c"
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

#line 3497 "parse_tree.set_of_var.c"
    {
#line 3499 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3501 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3503 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3505 "parse_tree.set_of_var.c"
    }
#line 3507 "parse_tree.set_of_var.c"
    {
#line 3509 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3511 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3513 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
#line 3515 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
#line 3517 "parse_tree.set_of_var.c"
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

#line 3553 "parse_tree.set_of_var.c"
    {
#line 3555 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3557 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3559 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3561 "parse_tree.set_of_var.c"
    }
#line 3563 "parse_tree.set_of_var.c"
    {
#line 3565 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3567 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3569 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3571 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3573 "parse_tree.set_of_var.c"
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

#line 3618 "parse_tree.set_of_var.c"
    {
#line 3620 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3622 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3624 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3626 "parse_tree.set_of_var.c"
    }
#line 250 "set_of_var.m"
    {
#line 250 "set_of_var.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__OrdSet_3, &parse_tree__set_of_var__conv0_List_5);
    }
#line 250 "set_of_var.m"
    parse_tree__set_of_var__List_5 = (MR_Word) parse_tree__set_of_var__conv0_List_5;
#line 3635 "parse_tree.set_of_var.c"
    {
#line 3637 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3639 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3641 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
#line 3643 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
#line 3645 "parse_tree.set_of_var.c"
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

#line 3679 "parse_tree.set_of_var.c"
    {
#line 3681 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3683 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3685 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3687 "parse_tree.set_of_var.c"
    }
#line 3689 "parse_tree.set_of_var.c"
    {
#line 3691 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3693 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3695 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3697 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3699 "parse_tree.set_of_var.c"
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

#line 3731 "parse_tree.set_of_var.c"
    {
#line 3733 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3735 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3737 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3739 "parse_tree.set_of_var.c"
    }
#line 3741 "parse_tree.set_of_var.c"
    {
#line 3743 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3745 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3747 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3749 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3751 "parse_tree.set_of_var.c"
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

#line 3783 "parse_tree.set_of_var.c"
    {
#line 3785 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3787 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3789 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3791 "parse_tree.set_of_var.c"
    }
#line 3793 "parse_tree.set_of_var.c"
    {
#line 3795 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3797 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3799 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 3801 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 3803 "parse_tree.set_of_var.c"
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

#line 3835 "parse_tree.set_of_var.c"
    {
#line 3837 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3839 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3841 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3843 "parse_tree.set_of_var.c"
    }
#line 3845 "parse_tree.set_of_var.c"
    {
#line 3847 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3849 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3851 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3853 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3855 "parse_tree.set_of_var.c"
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

#line 3889 "parse_tree.set_of_var.c"
    {
#line 3891 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3893 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3895 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3897 "parse_tree.set_of_var.c"
    }
#line 3899 "parse_tree.set_of_var.c"
    {
#line 3901 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3903 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3905 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3907 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3909 "parse_tree.set_of_var.c"
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

#line 3943 "parse_tree.set_of_var.c"
    {
#line 3945 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3947 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3949 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3951 "parse_tree.set_of_var.c"
    }
#line 3953 "parse_tree.set_of_var.c"
    {
#line 3955 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3957 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3959 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 3961 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 3963 "parse_tree.set_of_var.c"
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

#line 3995 "parse_tree.set_of_var.c"
    {
#line 3997 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3999 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4001 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4003 "parse_tree.set_of_var.c"
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

#line 4037 "parse_tree.set_of_var.c"
    {
#line 4039 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4041 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4043 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4045 "parse_tree.set_of_var.c"
    }
#line 4047 "parse_tree.set_of_var.c"
    {
#line 4049 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4051 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4053 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4055 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4057 "parse_tree.set_of_var.c"
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
#line 218 "set_of_var.m"
  {
#line 218 "set_of_var.m"
    MR_bool parse_tree__set_of_var__succeeded;
#line 225 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeInfo_7_11;
#line 225 "set_of_var.m"
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

#line 4093 "parse_tree.set_of_var.c"
    {
#line 4095 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4097 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4099 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4101 "parse_tree.set_of_var.c"
    }
#line 4103 "parse_tree.set_of_var.c"
    {
#line 4105 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4107 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4109 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
#line 4111 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_11));
#line 4113 "parse_tree.set_of_var.c"
    }
#line 225 "set_of_var.m"
    {
#line 225 "set_of_var.m"
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_7, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Set_4, parse_tree__set_of_var__Elem_5);
    }
#line 218 "set_of_var.m"
    if (parse_tree__set_of_var__succeeded)
#line 219 "set_of_var.m"
      *parse_tree__set_of_var__IsMember_6 = (MR_Integer) 1;
#line 218 "set_of_var.m"
    else
#line 221 "set_of_var.m"
      *parse_tree__set_of_var__IsMember_6 = (MR_Integer) 0;
#line 218 "set_of_var.m"
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

#line 4192 "parse_tree.set_of_var.c"
      {
#line 4194 "parse_tree.set_of_var.c"
        parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4196 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4198 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4200 "parse_tree.set_of_var.c"
      }
#line 4202 "parse_tree.set_of_var.c"
      {
#line 4204 "parse_tree.set_of_var.c"
        parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4206 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4208 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4210 "parse_tree.set_of_var.c"
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4212 "parse_tree.set_of_var.c"
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

#line 4246 "parse_tree.set_of_var.c"
    {
#line 4248 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4250 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4252 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4254 "parse_tree.set_of_var.c"
    }
#line 4256 "parse_tree.set_of_var.c"
    {
#line 4258 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4260 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4262 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4264 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4266 "parse_tree.set_of_var.c"
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

#line 4302 "parse_tree.set_of_var.c"
    {
#line 4304 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4306 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4308 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4310 "parse_tree.set_of_var.c"
    }
#line 4312 "parse_tree.set_of_var.c"
    {
#line 4314 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4316 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4318 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4320 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4322 "parse_tree.set_of_var.c"
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

#line 4362 "parse_tree.set_of_var.c"
    {
#line 4364 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4366 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4368 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4370 "parse_tree.set_of_var.c"
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

#line 4400 "parse_tree.set_of_var.c"
    {
#line 4402 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4404 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4406 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4408 "parse_tree.set_of_var.c"
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

#line 4442 "parse_tree.set_of_var.c"
    {
#line 4444 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4446 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4448 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4450 "parse_tree.set_of_var.c"
    }
#line 4452 "parse_tree.set_of_var.c"
    {
#line 4454 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4456 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4458 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4460 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
#line 4462 "parse_tree.set_of_var.c"
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

#line 4496 "parse_tree.set_of_var.c"
    {
#line 4498 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4500 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4502 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4504 "parse_tree.set_of_var.c"
    }
#line 4506 "parse_tree.set_of_var.c"
    {
#line 4508 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4510 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4512 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
#line 4514 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
#line 4516 "parse_tree.set_of_var.c"
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

#line 4548 "parse_tree.set_of_var.c"
    {
#line 4550 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4552 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4554 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4556 "parse_tree.set_of_var.c"
    }
#line 4558 "parse_tree.set_of_var.c"
    {
#line 4560 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4562 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 4564 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
#line 4566 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
#line 4568 "parse_tree.set_of_var.c"
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

#line 4600 "parse_tree.set_of_var.c"
    {
#line 4602 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4604 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4606 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
#line 4608 "parse_tree.set_of_var.c"
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

#line 4640 "parse_tree.set_of_var.c"
    {
#line 4642 "parse_tree.set_of_var.c"
      parse_tree__set_of_var__TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4644 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4646 "parse_tree.set_of_var.c"
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_2));
#line 4648 "parse_tree.set_of_var.c"
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
