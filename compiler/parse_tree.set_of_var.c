/*
** Automatically generated from `set_of_var.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__set_of_var__member_2_p_1_env_0_s {
  MR_Word * parse_tree__set_of_var__member_2_p_1_env_0__Elem_4;
  MR_Cont parse_tree__set_of_var__member_2_p_1_env_0__cont;
  void * parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr;
  MR_Box parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
  MR_Word parse_tree__set_of_var__VarB_6,
  MR_Word parse_tree__set_of_var__LambdaHeadVar__1_15,
  MR_Word parse_tree__set_of_var__LambdaHeadVar__2_16,
  MR_Word * parse_tree__set_of_var__LambdaHeadVar__3_17);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list2_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__A_5,
  MR_Word parse_tree__set_of_var__B_6,
  MR_Word parse_tree__set_of_var__SetsAcc_7,
  MR_Word * parse_tree__set_of_var__HeadVar__4_4);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0_1(
  MR_Box parse_tree__set_of_var__closure_arg,
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box * parse_tree__set_of_var__wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
  MR_Word parse_tree__set_of_var__SetA_5,
  MR_Word parse_tree__set_of_var__VarB_6,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Sets_14);

static void MR_CALL 
parse_tree__set_of_var__find_all_colours_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_13,
  MR_Word parse_tree__set_of_var__ConstraintList_4,
  MR_Word parse_tree__set_of_var__Vars_5,
  MR_Word * parse_tree__set_of_var__ColourList_6);

static void MR_CALL 
parse_tree__set_of_var__next_colour_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_20,
  MR_Word parse_tree__set_of_var__Vars0_5,
  MR_Word parse_tree__set_of_var__ConstraintList_6,
  MR_Word * parse_tree__set_of_var__Remainder_7,
  MR_Word * parse_tree__set_of_var__SameColour_8);

static void MR_CALL 
parse_tree__set_of_var__divide_constraints_6_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_24,
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
  MR_Word * parse_tree__set_of_var__HeadVar__3_3,
  MR_Word * parse_tree__set_of_var__HeadVar__4_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Vars_6);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0_1(
  MR_Box parse_tree__set_of_var__closure_arg,
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box * parse_tree__set_of_var__wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0_1(
  MR_Box parse_tree__set_of_var__closure_arg,
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box * parse_tree__set_of_var__wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var__member_2_p_1_1(
  void * parse_tree__set_of_var__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2);

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
  MR_Box parse_tree__set_of_var__wrapper_arg_4);


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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__term__pti_var_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_progvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_tvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
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

static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
  MR_Word parse_tree__set_of_var__VarB_6,
  MR_Word parse_tree__set_of_var__LambdaHeadVar__1_15,
  MR_Word parse_tree__set_of_var__LambdaHeadVar__2_16,
  MR_Word * parse_tree__set_of_var__LambdaHeadVar__3_17)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_6_34;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_36;
    MR_Word parse_tree__set_of_var__Set_12;
    MR_Word parse_tree__set_of_var__Var_18;
    MR_Word parse_tree__set_of_var__Var_19;

    {
      parse_tree__set_of_var__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__Var_19, 0) = ((MR_Box) (parse_tree__set_of_var__VarB_6));
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__set_of_var__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__Var_18, 0) = ((MR_Box) (parse_tree__set_of_var__LambdaHeadVar__1_15));
      MR_hl_field(MR_mktag(1), parse_tree__set_of_var__Var_18, 1) = ((MR_Box) (parse_tree__set_of_var__Var_19));
    }
    {
      parse_tree__set_of_var__TypeInfo_6_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_34, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_34));
    }
    parse_tree__set_of_var__Set_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_25, parse_tree__set_of_var__TypeClassInfo_for_enum_36, parse_tree__set_of_var__Var_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__set_of_var__LambdaHeadVar__3_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__Set_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__LambdaHeadVar__2_16));
    }
  }
}

void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word * parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
  MR_Word parse_tree__set_of_var__HeadVar__3_3)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_4 = parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_5 = parse_tree__set_of_var__HeadVar__3_3;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    mercury__sparse_bitset____Compare____sparse_bitset_1_0(parse_tree__set_of_var__TypeInfo_8_8, parse_tree__set_of_var__HeadVar__1_1, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_4, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_3 = parse_tree__set_of_var__HeadVar__1_1;
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_4 = parse_tree__set_of_var__HeadVar__2_2;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Cast_HeadVar1_3, (MR_Word) parse_tree__set_of_var__Cast_HeadVar2_4);
    return parse_tree__set_of_var__succeeded;
  }
}

void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0(
  MR_Word * parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
  MR_Word parse_tree__set_of_var__HeadVar__3_3)
{
  {
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_4 = parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_5 = parse_tree__set_of_var__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[3], parse_tree__set_of_var__HeadVar__1_1, ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0(
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_3 = parse_tree__set_of_var__HeadVar__1_1;
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_4 = parse_tree__set_of_var__HeadVar__2_2;

    parse_tree__set_of_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[3], ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_4)));
    return parse_tree__set_of_var__succeeded;
  }
}

void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0(
  MR_Word * parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
  MR_Word parse_tree__set_of_var__HeadVar__3_3)
{
  {
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_4 = parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_5 = parse_tree__set_of_var__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[1], parse_tree__set_of_var__HeadVar__1_1, ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0(
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__Cast_HeadVar1_3 = parse_tree__set_of_var__HeadVar__1_1;
    MR_Word parse_tree__set_of_var__Cast_HeadVar2_4 = parse_tree__set_of_var__HeadVar__2_2;

    parse_tree__set_of_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__set_of_var_scalar_common_1[1], ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__set_of_var__Cast_HeadVar2_4)));
    return parse_tree__set_of_var__succeeded;
  }
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list2_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__A_5,
  MR_Word parse_tree__set_of_var__B_6,
  MR_Word parse_tree__set_of_var__SetsAcc_7,
  MR_Word * parse_tree__set_of_var__HeadVar__4_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeInfo_13_13;
    MR_Word parse_tree__set_of_var__Product_8;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__4_4;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    parse_tree__set_of_var__cartesian_product_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__A_5, parse_tree__set_of_var__B_6, &parse_tree__set_of_var__Product_8);
    parse_tree__set_of_var__conv0_HeadVar__4_4 = mercury__list__f_43_43_2_f_0(parse_tree__set_of_var__TypeInfo_13_13, (MR_Word) parse_tree__set_of_var__Product_8, (MR_Word) parse_tree__set_of_var__SetsAcc_7);
    *parse_tree__set_of_var__HeadVar__4_4 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__4_4;
  }
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0_1(
  MR_Box parse_tree__set_of_var__closure_arg,
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box * parse_tree__set_of_var__wrapper_arg_3)
{
  {
    MR_Box parse_tree__set_of_var__closure = parse_tree__set_of_var__closure_arg;
    MR_Word parse_tree__set_of_var__conv0_LambdaHeadVar__3_17;

    parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_LambdaHeadVar__3_17);
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_25,
  MR_Word parse_tree__set_of_var__SetA_5,
  MR_Word parse_tree__set_of_var__VarB_6,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Sets_14)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_29_29;
    MR_Word parse_tree__set_of_var__TypeInfo_31_31;
    MR_Word parse_tree__set_of_var__TypeInfo_14_39;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_41;
    MR_Word parse_tree__set_of_var__Pred_8;
    MR_Box parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14;

    {
      parse_tree__set_of_var__Pred_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product2_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 3) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Pred_8, 4) = ((MR_Box) (parse_tree__set_of_var__VarB_6));
    }
    {
      parse_tree__set_of_var__TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_39, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
    }
    {
      parse_tree__set_of_var__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_29_29, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
    }
    {
      parse_tree__set_of_var__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_29_29));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_39));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_25, parse_tree__set_of_var__TypeInfo_31_31, parse_tree__set_of_var__TypeClassInfo_for_enum_41, (MR_Word) parse_tree__set_of_var__Pred_8, parse_tree__set_of_var__SetA_5, ((MR_Box) (parse_tree__set_of_var__STATE_VARIABLE_Sets_0_13)), &parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14);
    *parse_tree__set_of_var__STATE_VARIABLE_Sets_14 = ((MR_Word) parse_tree__set_of_var__conv1_STATE_VARIABLE_Sets_14);
  }
}

void MR_CALL 
parse_tree__set_of_var__graph_colour_group_elements_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Constraints_0_8,
  MR_Word * parse_tree__set_of_var__Colours_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_15_15;
    MR_Word parse_tree__set_of_var__TypeInfo_7_21;
    MR_Word parse_tree__set_of_var__ConstraintList_5;
    MR_Word parse_tree__set_of_var__AllVars_6;
    MR_Word parse_tree__set_of_var__ColourList_7;
    MR_Word parse_tree__set_of_var__Var_9;
    MR_Word parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10;
    MR_Word parse_tree__set_of_var__conv0_Var_9;
    MR_Word parse_tree__set_of_var__conv1_STATE_VARIABLE_Constraints_10_10;
    MR_Word parse_tree__set_of_var__conv2_ConstraintList_5;
    MR_Word parse_tree__set_of_var__conv3_AllVars_6;
    MR_Word parse_tree__set_of_var__conv4_Colours_4;

    {
      parse_tree__set_of_var__TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_21, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
    }
    parse_tree__set_of_var__conv0_Var_9 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_7_21);
    parse_tree__set_of_var__Var_9 = (MR_Word) parse_tree__set_of_var__conv0_Var_9;
    {
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_21));
    }
    mercury__set__delete_3_p_0(parse_tree__set_of_var__TypeInfo_15_15, ((MR_Box) (parse_tree__set_of_var__Var_9)), (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Constraints_0_8, &parse_tree__set_of_var__conv1_STATE_VARIABLE_Constraints_10_10);
    parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10 = (MR_Word) parse_tree__set_of_var__conv1_STATE_VARIABLE_Constraints_10_10;
    mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_15_15, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Constraints_10_10, &parse_tree__set_of_var__conv2_ConstraintList_5);
    parse_tree__set_of_var__ConstraintList_5 = (MR_Word) parse_tree__set_of_var__conv2_ConstraintList_5;
    parse_tree__set_of_var__conv3_AllVars_6 = mercury__sparse_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_21, (MR_Word) parse_tree__set_of_var__ConstraintList_5);
    parse_tree__set_of_var__AllVars_6 = (MR_Word) parse_tree__set_of_var__conv3_AllVars_6;
    parse_tree__set_of_var__find_all_colours_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__ConstraintList_5, parse_tree__set_of_var__AllVars_6, &parse_tree__set_of_var__ColourList_7);
    parse_tree__set_of_var__conv4_Colours_4 = mercury__set__list_to_set_1_f_0(parse_tree__set_of_var__TypeInfo_15_15, (MR_Word) parse_tree__set_of_var__ColourList_7);
    *parse_tree__set_of_var__Colours_4 = (MR_Word) parse_tree__set_of_var__conv4_Colours_4;
  }
}

static void MR_CALL 
parse_tree__set_of_var__find_all_colours_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_13,
  MR_Word parse_tree__set_of_var__ConstraintList_4,
  MR_Word parse_tree__set_of_var__Vars_5,
  MR_Word * parse_tree__set_of_var__ColourList_6)
{
  if ((parse_tree__set_of_var__ConstraintList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__set_of_var__ColourList_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__set_of_var__TypeInfo_9_18;
    MR_Word parse_tree__set_of_var__RemainingConstraints_9;
    MR_Word parse_tree__set_of_var__Colour_10;
    MR_Word parse_tree__set_of_var__RestVars_11;
    MR_Word parse_tree__set_of_var__ColourList0_12;
    MR_Word parse_tree__set_of_var__conv0_RestVars_11;

    parse_tree__set_of_var__next_colour_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_13, parse_tree__set_of_var__Vars_5, parse_tree__set_of_var__ConstraintList_4, &parse_tree__set_of_var__RemainingConstraints_9, &parse_tree__set_of_var__Colour_10);
    {
      parse_tree__set_of_var__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_13));
    }
    mercury__sparse_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_9_18, (MR_Word) parse_tree__set_of_var__Vars_5, (MR_Word) parse_tree__set_of_var__Colour_10, &parse_tree__set_of_var__conv0_RestVars_11);
    parse_tree__set_of_var__RestVars_11 = (MR_Word) parse_tree__set_of_var__conv0_RestVars_11;
    parse_tree__set_of_var__find_all_colours_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_13, parse_tree__set_of_var__RemainingConstraints_9, parse_tree__set_of_var__RestVars_11, &parse_tree__set_of_var__ColourList0_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__set_of_var__ColourList_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__Colour_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__ColourList0_12));
    }
  }
}

static void MR_CALL 
parse_tree__set_of_var__next_colour_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_20,
  MR_Word parse_tree__set_of_var__Vars0_5,
  MR_Word parse_tree__set_of_var__ConstraintList_6,
  MR_Word * parse_tree__set_of_var__Remainder_7,
  MR_Word * parse_tree__set_of_var__SameColour_8)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;

    if ((parse_tree__set_of_var__ConstraintList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word parse_tree__set_of_var__TypeInfo_4_26;
      MR_Word parse_tree__set_of_var__conv0_SameColour_8;

      *parse_tree__set_of_var__Remainder_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        parse_tree__set_of_var__TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_26, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
      }
      parse_tree__set_of_var__conv0_SameColour_8 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_4_26);
      *parse_tree__set_of_var__SameColour_8 = (MR_Word) parse_tree__set_of_var__conv0_SameColour_8;
    }
    else
    {
      MR_Word parse_tree__set_of_var__TypeInfo_22_22;
      MR_Word parse_tree__set_of_var__TypeInfo_24_24;
      MR_Word parse_tree__set_of_var__Var_11;
      MR_Word parse_tree__set_of_var__Vars1_12;
      MR_Word parse_tree__set_of_var__WereContaining_13;
      MR_Word parse_tree__set_of_var__NotContaining_14;
      MR_Word parse_tree__set_of_var__RestVars_15;
      MR_Word parse_tree__set_of_var__ResidueSets_18;
      MR_Word parse_tree__set_of_var__VarPrime_30;
      MR_Word parse_tree__set_of_var__VarsPrime_31;
      MR_Word parse_tree__set_of_var__TypeInfo_11_41;
      MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_43;
      MR_Box parse_tree__set_of_var__conv2_VarPrime_30;
      MR_Word parse_tree__set_of_var__conv1_VarsPrime_31;
      MR_Word parse_tree__set_of_var__conv3_Remainder_7;

      {
        parse_tree__set_of_var__TypeInfo_11_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_41, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
      }
      {
        parse_tree__set_of_var__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_41));
      }
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_least_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_43, &parse_tree__set_of_var__conv2_VarPrime_30, (MR_Word) parse_tree__set_of_var__Vars0_5, &parse_tree__set_of_var__conv1_VarsPrime_31);
      if (parse_tree__set_of_var__succeeded)
      {
        parse_tree__set_of_var__VarPrime_30 = ((MR_Word) parse_tree__set_of_var__conv2_VarPrime_30);
        parse_tree__set_of_var__VarsPrime_31 = (MR_Word) parse_tree__set_of_var__conv1_VarsPrime_31;
        parse_tree__set_of_var__succeeded = MR_TRUE;
      }
      if (parse_tree__set_of_var__succeeded)
      {
        parse_tree__set_of_var__Var_11 = parse_tree__set_of_var__VarPrime_30;
        parse_tree__set_of_var__Vars1_12 = parse_tree__set_of_var__VarsPrime_31;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.set_of_var", (MR_String) "predicate \140parse_tree.set_of_var.choose_var\'/3", (MR_String) "no vars!");
          return;
        }
      }
      parse_tree__set_of_var__divide_constraints_6_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__Var_11, parse_tree__set_of_var__ConstraintList_6, &parse_tree__set_of_var__WereContaining_13, &parse_tree__set_of_var__NotContaining_14, parse_tree__set_of_var__Vars1_12, &parse_tree__set_of_var__RestVars_15);
      if ((parse_tree__set_of_var__NotContaining_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__set_of_var__TypeInfo_6_46;
        MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_48;

        {
          parse_tree__set_of_var__TypeInfo_6_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_46, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
        }
        {
          parse_tree__set_of_var__TypeClassInfo_for_enum_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_48, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_46));
        }
        *parse_tree__set_of_var__SameColour_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_48, parse_tree__set_of_var__Var_11);
        parse_tree__set_of_var__ResidueSets_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word parse_tree__set_of_var__TypeInfo_5_51;

        {
          parse_tree__set_of_var__TypeInfo_5_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_51, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
        }
        parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_51, (MR_Word) parse_tree__set_of_var__RestVars_15);
        if (parse_tree__set_of_var__succeeded)
        {
          MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_56;

          {
            parse_tree__set_of_var__TypeClassInfo_for_enum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_56, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_5_51));
          }
          *parse_tree__set_of_var__SameColour_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_56, parse_tree__set_of_var__Var_11);
          parse_tree__set_of_var__ResidueSets_18 = parse_tree__set_of_var__NotContaining_14;
        }
        else
        {
          MR_Word parse_tree__set_of_var__TypeInfo_11_63;
          MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_65;
          MR_Word parse_tree__set_of_var__SameColour0_19;

          parse_tree__set_of_var__next_colour_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__RestVars_15, parse_tree__set_of_var__NotContaining_14, &parse_tree__set_of_var__ResidueSets_18, &parse_tree__set_of_var__SameColour0_19);
          {
            parse_tree__set_of_var__TypeInfo_11_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_63, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
          }
          {
            parse_tree__set_of_var__TypeClassInfo_for_enum_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
            MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_65, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_63));
          }
          mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_20, parse_tree__set_of_var__TypeClassInfo_for_enum_65, parse_tree__set_of_var__Var_11, parse_tree__set_of_var__SameColour0_19, parse_tree__set_of_var__SameColour_8);
        }
      }
      {
        parse_tree__set_of_var__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_20));
      }
      {
        parse_tree__set_of_var__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_24_24, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_22_22));
      }
      mercury__list__append_3_p_1(parse_tree__set_of_var__TypeInfo_24_24, (MR_Word) parse_tree__set_of_var__ResidueSets_18, (MR_Word) parse_tree__set_of_var__WereContaining_13, &parse_tree__set_of_var__conv3_Remainder_7);
      *parse_tree__set_of_var__Remainder_7 = (MR_Word) parse_tree__set_of_var__conv3_Remainder_7;
    }
  }
}

static void MR_CALL 
parse_tree__set_of_var__divide_constraints_6_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_24,
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
  MR_Word parse_tree__set_of_var__HeadVar__2_2,
  MR_Word * parse_tree__set_of_var__HeadVar__3_3,
  MR_Word * parse_tree__set_of_var__HeadVar__4_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Vars_6)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;

    if ((parse_tree__set_of_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__set_of_var__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__set_of_var__STATE_VARIABLE_Vars_6 = parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5;
    }
    else
    {
      MR_Word parse_tree__set_of_var__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__set_of_var__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__set_of_var__C0_17;
      MR_Word parse_tree__set_of_var__NC0_18;
      MR_Word parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22;
      MR_Word parse_tree__set_of_var__TypeInfo_7_28;
      MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_30;

      parse_tree__set_of_var__divide_constraints_6_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__Ss_13, &parse_tree__set_of_var__C0_17, &parse_tree__set_of_var__NC0_18, parse_tree__set_of_var__STATE_VARIABLE_Vars_0_5, &parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22);
      {
        parse_tree__set_of_var__TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_28, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
      }
      {
        parse_tree__set_of_var__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_24));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_28));
      }
      parse_tree__set_of_var__succeeded = mercury__sparse_bitset__member_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_30, ((MR_Box) (parse_tree__set_of_var__HeadVar__1_1)), (MR_Word) parse_tree__set_of_var__S_12);
      if (parse_tree__set_of_var__succeeded)
      {
        MR_Word parse_tree__set_of_var__T_19;
        MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6;

        mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_24, parse_tree__set_of_var__TypeClassInfo_for_enum_30, parse_tree__set_of_var__HeadVar__1_1, parse_tree__set_of_var__S_12, &parse_tree__set_of_var__T_19);
        parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_7_28, (MR_Word) parse_tree__set_of_var__T_19);
        if (parse_tree__set_of_var__succeeded)
          *parse_tree__set_of_var__HeadVar__3_3 = parse_tree__set_of_var__C0_17;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__set_of_var__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__T_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__C0_17));
          }
        *parse_tree__set_of_var__HeadVar__4_4 = parse_tree__set_of_var__NC0_18;
        mercury__sparse_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_7_28, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22, (MR_Word) parse_tree__set_of_var__T_19, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6);
        *parse_tree__set_of_var__STATE_VARIABLE_Vars_6 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Vars_6;
      }
      else
      {
        *parse_tree__set_of_var__HeadVar__3_3 = parse_tree__set_of_var__C0_17;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__set_of_var__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__set_of_var__S_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__set_of_var__NC0_18));
        }
        *parse_tree__set_of_var__STATE_VARIABLE_Vars_6 = parse_tree__set_of_var__STATE_VARIABLE_Vars_22_22;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__all_true_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__P_3,
  MR_Word parse_tree__set_of_var__Set_4)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__all_true_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__P_3, (MR_Word) parse_tree__set_of_var__Set_4);
    return parse_tree__set_of_var__succeeded;
  }
}

void MR_CALL 
parse_tree__set_of_var__filter_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__P_5,
  MR_Word parse_tree__set_of_var__Set_6,
  MR_Word * parse_tree__set_of_var__Trues_7,
  MR_Word * parse_tree__set_of_var__Falses_8)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
    MR_Word parse_tree__set_of_var__conv1_Trues_7;
    MR_Word parse_tree__set_of_var__conv0_Falses_8;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__filter_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__P_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_Trues_7, &parse_tree__set_of_var__conv0_Falses_8);
    *parse_tree__set_of_var__Trues_7 = (MR_Word) parse_tree__set_of_var__conv1_Trues_7;
    *parse_tree__set_of_var__Falses_8 = (MR_Word) parse_tree__set_of_var__conv0_Falses_8;
  }
}

void MR_CALL 
parse_tree__set_of_var__filter_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
  MR_Word parse_tree__set_of_var__P_4,
  MR_Word parse_tree__set_of_var__Set_5,
  MR_Word * parse_tree__set_of_var__Trues_6)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_11;
    MR_Word parse_tree__set_of_var__conv0_Trues_6;

    {
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_9_9));
    }
    parse_tree__set_of_var__conv0_Trues_6 = mercury__sparse_bitset__filter_2_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_11, (MR_Word) parse_tree__set_of_var__P_4, (MR_Word) parse_tree__set_of_var__Set_5);
    *parse_tree__set_of_var__Trues_6 = (MR_Word) parse_tree__set_of_var__conv0_Trues_6;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__filter_2_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word parse_tree__set_of_var__P_4,
  MR_Word parse_tree__set_of_var__Set_5)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
    }
    parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__filter_2_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_10, (MR_Word) parse_tree__set_of_var__P_4, (MR_Word) parse_tree__set_of_var__Set_5);
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
    return parse_tree__set_of_var__HeadVar__3_3;
  }
}

void MR_CALL 
parse_tree__set_of_var__fold_func_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
  MR_Word parse_tree__set_of_var__TypeInfo_for_Acc_12,
  MR_Word parse_tree__set_of_var__P_5,
  MR_Word parse_tree__set_of_var__Set_6,
  MR_Box parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8,
  MR_Box * parse_tree__set_of_var__STATE_VARIABLE_Acc_9)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;

    {
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
    }
    *parse_tree__set_of_var__STATE_VARIABLE_Acc_9 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8);
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__fold_4_p_1(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
  MR_Word parse_tree__set_of_var__TypeInfo_for_Acc_12,
  MR_Word parse_tree__set_of_var__P_5,
  MR_Word parse_tree__set_of_var__Set_6,
  MR_Box parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8,
  MR_Box * parse_tree__set_of_var__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;

    {
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_51_95_49_4_p_3(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
    return parse_tree__set_of_var__succeeded;
  }
}

void MR_CALL 
parse_tree__set_of_var__fold_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_11,
  MR_Word parse_tree__set_of_var__TypeInfo_for_Acc_12,
  MR_Word parse_tree__set_of_var__P_5,
  MR_Word parse_tree__set_of_var__Set_6,
  MR_Box parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8,
  MR_Box * parse_tree__set_of_var__STATE_VARIABLE_Acc_9)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;

    {
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_11, parse_tree__set_of_var__TypeInfo_for_Acc_12, parse_tree__set_of_var__TypeClassInfo_for_enum_16, parse_tree__set_of_var__P_5, parse_tree__set_of_var__Set_6, parse_tree__set_of_var__STATE_VARIABLE_Acc_0_8, parse_tree__set_of_var__STATE_VARIABLE_Acc_9);
  }
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0_1(
  MR_Box parse_tree__set_of_var__closure_arg,
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box * parse_tree__set_of_var__wrapper_arg_3)
{
  {
    MR_Box parse_tree__set_of_var__closure = parse_tree__set_of_var__closure_arg;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__4_4;

    parse_tree__set_of_var__cartesian_product_list2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_HeadVar__4_4);
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_8,
  MR_Word parse_tree__set_of_var__HeadVar__1_1,
  MR_Word * parse_tree__set_of_var__HeadVar__2_2)
{
  if ((parse_tree__set_of_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__set_of_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__set_of_var__TypeInfo_13_13;
    MR_Word parse_tree__set_of_var__TypeInfo_15_15;
    MR_Word parse_tree__set_of_var__TypeInfo_17_17;
    MR_Word parse_tree__set_of_var__FirstSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__set_of_var__OtherSets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__set_of_var__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__set_of_var__Var_6;
    MR_Box parse_tree__set_of_var__conv1_HeadVar__2_2;

    {
      parse_tree__set_of_var__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_6, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_6, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product_list_2_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_6, 3) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_6, 4) = ((MR_Box) (parse_tree__set_of_var__FirstSet_3));
    }
    {
      parse_tree__set_of_var__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_8));
    }
    {
      parse_tree__set_of_var__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_13_13));
    }
    {
      parse_tree__set_of_var__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_15_15));
    }
    mercury__list__foldl_4_p_0(parse_tree__set_of_var__TypeInfo_15_15, parse_tree__set_of_var__TypeInfo_17_17, (MR_Word) parse_tree__set_of_var__Var_6, (MR_Word) parse_tree__set_of_var__OtherSets_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__set_of_var__conv1_HeadVar__2_2);
    *parse_tree__set_of_var__HeadVar__2_2 = ((MR_Word) parse_tree__set_of_var__conv1_HeadVar__2_2);
  }
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0_1(
  MR_Box parse_tree__set_of_var__closure_arg,
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box * parse_tree__set_of_var__wrapper_arg_3)
{
  {
    MR_Box parse_tree__set_of_var__closure = parse_tree__set_of_var__closure_arg;
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Sets_14;

    parse_tree__set_of_var__cartesian_product2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__set_of_var__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), &parse_tree__set_of_var__conv0_STATE_VARIABLE_Sets_14);
    *parse_tree__set_of_var__wrapper_arg_3 = ((MR_Box) (parse_tree__set_of_var__conv0_STATE_VARIABLE_Sets_14));
  }
}

void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__A_4,
  MR_Word parse_tree__set_of_var__B_5,
  MR_Word * parse_tree__set_of_var__Product_6)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_14_14;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_16;
    MR_Word parse_tree__set_of_var__TypeInfo_18_18;
    MR_Word parse_tree__set_of_var__TypeInfo_20_20;
    MR_Word parse_tree__set_of_var__Var_7;
    MR_Box parse_tree__set_of_var__conv1_Product_6;

    {
      parse_tree__set_of_var__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_7, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_7, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_7, 3) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__Var_7, 4) = ((MR_Box) (parse_tree__set_of_var__A_4));
    }
    {
      parse_tree__set_of_var__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_14_14, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
    }
    {
      parse_tree__set_of_var__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_18_18, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_14_14));
    }
    {
      parse_tree__set_of_var__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_18_18));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeInfo_20_20, parse_tree__set_of_var__TypeClassInfo_for_enum_16, (MR_Word) parse_tree__set_of_var__Var_7, parse_tree__set_of_var__B_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__set_of_var__conv1_Product_6);
    *parse_tree__set_of_var__Product_6 = ((MR_Word) parse_tree__set_of_var__conv1_Product_6);
  }
}

void MR_CALL 
parse_tree__set_of_var__divide_by_set_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__DivideBySet_5,
  MR_Word parse_tree__set_of_var__Set_6,
  MR_Word * parse_tree__set_of_var__InPart_7,
  MR_Word * parse_tree__set_of_var__OutPart_8)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
    MR_Word parse_tree__set_of_var__conv1_InPart_7;
    MR_Word parse_tree__set_of_var__conv0_OutPart_8;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__divide_by_set_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__DivideBySet_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_InPart_7, &parse_tree__set_of_var__conv0_OutPart_8);
    *parse_tree__set_of_var__InPart_7 = (MR_Word) parse_tree__set_of_var__conv1_InPart_7;
    *parse_tree__set_of_var__OutPart_8 = (MR_Word) parse_tree__set_of_var__conv0_OutPart_8;
  }
}

void MR_CALL 
parse_tree__set_of_var__divide_4_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Pred_5,
  MR_Word parse_tree__set_of_var__Set_6,
  MR_Word * parse_tree__set_of_var__InPart_7,
  MR_Word * parse_tree__set_of_var__OutPart_8)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
    MR_Word parse_tree__set_of_var__conv1_InPart_7;
    MR_Word parse_tree__set_of_var__conv0_OutPart_8;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__divide_4_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__Pred_5, (MR_Word) parse_tree__set_of_var__Set_6, &parse_tree__set_of_var__conv1_InPart_7, &parse_tree__set_of_var__conv0_OutPart_8);
    *parse_tree__set_of_var__InPart_7 = (MR_Word) parse_tree__set_of_var__conv1_InPart_7;
    *parse_tree__set_of_var__OutPart_8 = (MR_Word) parse_tree__set_of_var__conv0_OutPart_8;
  }
}

void MR_CALL 
parse_tree__set_of_var__difference_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
  MR_Word parse_tree__set_of_var__SetA_4,
  MR_Word parse_tree__set_of_var__SetB_5,
  MR_Word * parse_tree__set_of_var__Set_6)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
    MR_Word parse_tree__set_of_var__conv0_Set_6;

    {
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
    }
    mercury__sparse_bitset__difference_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
    *parse_tree__set_of_var__Set_6 = (MR_Word) parse_tree__set_of_var__conv0_Set_6;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__difference_2_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word parse_tree__set_of_var__SetA_4,
  MR_Word parse_tree__set_of_var__SetB_5)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__difference_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
    return parse_tree__set_of_var__HeadVar__3_3;
  }
}

void MR_CALL 
parse_tree__set_of_var__intersect_list_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Sets_3,
  MR_Word * parse_tree__set_of_var__Set_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__conv0_Set_4;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    parse_tree__set_of_var__conv0_Set_4 = mercury__sparse_bitset__intersect_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Sets_3);
    *parse_tree__set_of_var__Set_4 = (MR_Word) parse_tree__set_of_var__conv0_Set_4;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__intersect_list_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
  MR_Word parse_tree__set_of_var__Sets_3)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__2_2;

    {
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
    }
    parse_tree__set_of_var__conv0_HeadVar__2_2 = mercury__sparse_bitset__intersect_list_1_f_0(parse_tree__set_of_var__TypeInfo_6_6, (MR_Word) parse_tree__set_of_var__Sets_3);
    parse_tree__set_of_var__HeadVar__2_2 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__2_2;
    return parse_tree__set_of_var__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__set_of_var__intersect_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
  MR_Word parse_tree__set_of_var__SetA_4,
  MR_Word parse_tree__set_of_var__SetB_5,
  MR_Word * parse_tree__set_of_var__Set_6)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
    MR_Word parse_tree__set_of_var__conv0_Set_6;

    {
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
    }
    mercury__sparse_bitset__intersect_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
    *parse_tree__set_of_var__Set_6 = (MR_Word) parse_tree__set_of_var__conv0_Set_6;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__intersect_2_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word parse_tree__set_of_var__SetA_4,
  MR_Word parse_tree__set_of_var__SetB_5)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__intersect_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
    return parse_tree__set_of_var__HeadVar__3_3;
  }
}

void MR_CALL 
parse_tree__set_of_var__union_list_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Sets_3,
  MR_Word * parse_tree__set_of_var__Set_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__conv0_Set_4;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    parse_tree__set_of_var__conv0_Set_4 = mercury__sparse_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__Sets_3);
    *parse_tree__set_of_var__Set_4 = (MR_Word) parse_tree__set_of_var__conv0_Set_4;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__union_list_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
  MR_Word parse_tree__set_of_var__Sets_3)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__2_2;

    {
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
    }
    parse_tree__set_of_var__conv0_HeadVar__2_2 = mercury__sparse_bitset__union_list_1_f_0(parse_tree__set_of_var__TypeInfo_6_6, (MR_Word) parse_tree__set_of_var__Sets_3);
    parse_tree__set_of_var__HeadVar__2_2 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__2_2;
    return parse_tree__set_of_var__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__set_of_var__union_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
  MR_Word parse_tree__set_of_var__SetA_4,
  MR_Word parse_tree__set_of_var__SetB_5,
  MR_Word * parse_tree__set_of_var__Set_6)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_9_9;
    MR_Word parse_tree__set_of_var__conv0_Set_6;

    {
      parse_tree__set_of_var__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
    }
    mercury__sparse_bitset__union_3_p_0(parse_tree__set_of_var__TypeInfo_9_9, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5, &parse_tree__set_of_var__conv0_Set_6);
    *parse_tree__set_of_var__Set_6 = (MR_Word) parse_tree__set_of_var__conv0_Set_6;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__union_2_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word parse_tree__set_of_var__SetA_4,
  MR_Word parse_tree__set_of_var__SetB_5)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__3_3;
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__3_3;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    parse_tree__set_of_var__conv0_HeadVar__3_3 = mercury__sparse_bitset__union_2_f_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__SetA_4, (MR_Word) parse_tree__set_of_var__SetB_5);
    parse_tree__set_of_var__HeadVar__3_3 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__3_3;
    return parse_tree__set_of_var__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__remove_least_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word * parse_tree__set_of_var__LeastElem_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
    MR_Box parse_tree__set_of_var__conv1_LeastElem_4;
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_least_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, &parse_tree__set_of_var__conv1_LeastElem_4, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
    if (parse_tree__set_of_var__succeeded)
    {
      *parse_tree__set_of_var__LeastElem_4 = ((MR_Word) parse_tree__set_of_var__conv1_LeastElem_4);
      *parse_tree__set_of_var__STATE_VARIABLE_Set_7 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;
      parse_tree__set_of_var__succeeded = MR_TRUE;
    }
    return parse_tree__set_of_var__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__remove_list_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Elems_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_list_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, (MR_Word) parse_tree__set_of_var__Elems_4, (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
    if (parse_tree__set_of_var__succeeded)
    {
      *parse_tree__set_of_var__STATE_VARIABLE_Set_7 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;
      parse_tree__set_of_var__succeeded = MR_TRUE;
    }
    return parse_tree__set_of_var__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__remove_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Elem_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;
    MR_Word parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__remove_3_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_13, ((MR_Box) (parse_tree__set_of_var__Elem_4)), (MR_Word) parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, &parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7);
    if (parse_tree__set_of_var__succeeded)
    {
      *parse_tree__set_of_var__STATE_VARIABLE_Set_7 = (MR_Word) parse_tree__set_of_var__conv0_STATE_VARIABLE_Set_7;
      parse_tree__set_of_var__succeeded = MR_TRUE;
    }
    return parse_tree__set_of_var__succeeded;
  }
}

void MR_CALL 
parse_tree__set_of_var__delete_list_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Elems_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
  }
}

void MR_CALL 
parse_tree__set_of_var__delete_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Elem_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
  }
}

void MR_CALL 
parse_tree__set_of_var__insert_list_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Elems_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elems_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
  }
}

void MR_CALL 
parse_tree__set_of_var__insert_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_9,
  MR_Word parse_tree__set_of_var__Elem_4,
  MR_Word parse_tree__set_of_var__STATE_VARIABLE_Set_0_6,
  MR_Word * parse_tree__set_of_var__STATE_VARIABLE_Set_7)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_11_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

    {
      parse_tree__set_of_var__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_11_11));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__set_of_var__TypeInfo_for_T_9, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Elem_4, parse_tree__set_of_var__STATE_VARIABLE_Set_0_6, parse_tree__set_of_var__STATE_VARIABLE_Set_7);
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__bitset_to_set_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word parse_tree__set_of_var__BitSet_3)
{
  {
    MR_Word parse_tree__set_of_var__OrdSet_4;
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;
    MR_Word parse_tree__set_of_var__List_5;
    MR_Word parse_tree__set_of_var__conv0_OrdSet_4;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_6, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__BitSet_3, &parse_tree__set_of_var__List_5);
    mercury__set__sorted_list_to_set_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__List_5, &parse_tree__set_of_var__conv0_OrdSet_4);
    parse_tree__set_of_var__OrdSet_4 = (MR_Word) parse_tree__set_of_var__conv0_OrdSet_4;
    return parse_tree__set_of_var__OrdSet_4;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__set_to_bitset_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_6,
  MR_Word parse_tree__set_of_var__OrdSet_3)
{
  {
    MR_Word parse_tree__set_of_var__BitSet_4;
    MR_Word parse_tree__set_of_var__TypeInfo_8_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;
    MR_Word parse_tree__set_of_var__List_5;
    MR_Word parse_tree__set_of_var__conv0_List_5;

    {
      parse_tree__set_of_var__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
    }
    mercury__set__to_sorted_list_2_p_0(parse_tree__set_of_var__TypeInfo_8_8, (MR_Word) parse_tree__set_of_var__OrdSet_3, &parse_tree__set_of_var__conv0_List_5);
    parse_tree__set_of_var__List_5 = (MR_Word) parse_tree__set_of_var__conv0_List_5;
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_8_8));
    }
    mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_6, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_5, &parse_tree__set_of_var__BitSet_4);
    return parse_tree__set_of_var__BitSet_4;
  }
}

void MR_CALL 
parse_tree__set_of_var__to_sorted_list_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Set_3,
  MR_Word * parse_tree__set_of_var__List_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

    {
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
    }
    *parse_tree__set_of_var__List_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__Set_3);
  }
}

void MR_CALL 
parse_tree__set_of_var__sorted_list_to_set_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__List_3,
  MR_Word * parse_tree__set_of_var__Set_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

    {
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
    }
    *parse_tree__set_of_var__Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_3);
  }
}

void MR_CALL 
parse_tree__set_of_var__list_to_set_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__List_3,
  MR_Word * parse_tree__set_of_var__Set_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

    {
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
    }
    *parse_tree__set_of_var__Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__List_3);
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__to_sorted_list_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
  MR_Word parse_tree__set_of_var__Set_3)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

    {
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
    }
    parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Set_3);
    return parse_tree__set_of_var__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__sorted_list_to_set_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
  MR_Word parse_tree__set_of_var__List_3)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

    {
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
    }
    parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
    return parse_tree__set_of_var__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__list_to_set_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
  MR_Word parse_tree__set_of_var__List_3)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

    {
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
    }
    parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__List_3);
    return parse_tree__set_of_var__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__equal_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__SetA_3,
  MR_Word parse_tree__set_of_var__SetB_4)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__equal_2_p_0(parse_tree__set_of_var__TypeInfo_7_7, (MR_Word) parse_tree__set_of_var__SetA_3, (MR_Word) parse_tree__set_of_var__SetB_4);
    return parse_tree__set_of_var__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__contains_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Set_3,
  MR_Word parse_tree__set_of_var__Elem_4)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_9, parse_tree__set_of_var__Set_3, parse_tree__set_of_var__Elem_4);
    return parse_tree__set_of_var__succeeded;
  }
}

void MR_CALL 
parse_tree__set_of_var__is_member_3_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_7,
  MR_Word parse_tree__set_of_var__Set_4,
  MR_Word parse_tree__set_of_var__Elem_5,
  MR_Word * parse_tree__set_of_var__IsMember_6)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_11;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_13;

    {
      parse_tree__set_of_var__TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_11, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_11));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__set_of_var__TypeInfo_for_T_7, parse_tree__set_of_var__TypeClassInfo_for_enum_13, parse_tree__set_of_var__Set_4, parse_tree__set_of_var__Elem_5);
    if (parse_tree__set_of_var__succeeded)
      *parse_tree__set_of_var__IsMember_6 = (MR_Integer) 1;
    else
      *parse_tree__set_of_var__IsMember_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
parse_tree__set_of_var__member_2_p_1_1(
  void * parse_tree__set_of_var__env_ptr_arg)
{
  {
    struct parse_tree__set_of_var__member_2_p_1_env_0_s * parse_tree__set_of_var__env_ptr = (struct parse_tree__set_of_var__member_2_p_1_env_0_s *) parse_tree__set_of_var__env_ptr_arg;

    *((parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__Elem_4) = ((MR_Word) (parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4);
    ((parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__cont)((parse_tree__set_of_var__env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr);
  }
}

void MR_CALL 
parse_tree__set_of_var__member_2_p_1(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Set_3,
  MR_Word * parse_tree__set_of_var__Elem_4,
  MR_Cont parse_tree__set_of_var__cont,
  void * parse_tree__set_of_var__cont_env_ptr)
{
  {
    struct parse_tree__set_of_var__member_2_p_1_env_0_s parse_tree__set_of_var__env;

    (parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__Elem_4 = parse_tree__set_of_var__Elem_4;
    (parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__cont = parse_tree__set_of_var__cont;
    (parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr = parse_tree__set_of_var__cont_env_ptr;
    {
      MR_Word parse_tree__set_of_var__TypeInfo_7_7;
      MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

      {
        parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      }
      {
        parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
        MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
      }
      mercury__sparse_bitset__member_2_p_1(parse_tree__set_of_var__TypeClassInfo_for_enum_9, &(parse_tree__set_of_var__env).parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4, (MR_Word) parse_tree__set_of_var__Set_3, parse_tree__set_of_var__member_2_p_1_1, &parse_tree__set_of_var__env);
    }
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__member_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Set_3,
  MR_Word parse_tree__set_of_var__Elem_4)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__member_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, ((MR_Box) (parse_tree__set_of_var__Elem_4)), (MR_Word) parse_tree__set_of_var__Set_3);
    return parse_tree__set_of_var__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__is_singleton_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Set_3,
  MR_Word * parse_tree__set_of_var__Elem_4)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;
    MR_Box parse_tree__set_of_var__conv0_Elem_4;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_singleton_2_p_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3, &parse_tree__set_of_var__conv0_Elem_4);
    if (parse_tree__set_of_var__succeeded)
    {
      *parse_tree__set_of_var__Elem_4 = ((MR_Word) parse_tree__set_of_var__conv0_Elem_4);
      parse_tree__set_of_var__succeeded = MR_TRUE;
    }
    return parse_tree__set_of_var__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__is_non_empty_1_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_3,
  MR_Word parse_tree__set_of_var__Set_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_5_5;

    {
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
    return parse_tree__set_of_var__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__is_empty_1_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_3,
  MR_Word parse_tree__set_of_var__Set_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;
    MR_Word parse_tree__set_of_var__TypeInfo_5_5;

    {
      parse_tree__set_of_var__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_5_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
    }
    parse_tree__set_of_var__succeeded = mercury__sparse_bitset__is_empty_1_p_0(parse_tree__set_of_var__TypeInfo_5_5, (MR_Word) parse_tree__set_of_var__Set_2);
    return parse_tree__set_of_var__succeeded;
  }
}

MR_Integer MR_CALL 
parse_tree__set_of_var__count_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Set_3)
{
  {
    MR_Integer parse_tree__set_of_var__Count_4;
    MR_Word parse_tree__set_of_var__TypeInfo_7_7;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_9;

    {
      parse_tree__set_of_var__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_7_7, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_9, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_7_7));
    }
    parse_tree__set_of_var__Count_4 = mercury__sparse_bitset__count_1_f_0(parse_tree__set_of_var__TypeClassInfo_for_enum_9, (MR_Word) parse_tree__set_of_var__Set_3);
    return parse_tree__set_of_var__Count_4;
  }
}

void MR_CALL 
parse_tree__set_of_var__make_singleton_2_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_5,
  MR_Word parse_tree__set_of_var__Elem_3,
  MR_Word * parse_tree__set_of_var__Set_4)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_6_8;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_10;

    {
      parse_tree__set_of_var__TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_10, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_8));
    }
    *parse_tree__set_of_var__Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_5, parse_tree__set_of_var__TypeClassInfo_for_enum_10, parse_tree__set_of_var__Elem_3);
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__make_singleton_1_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_4,
  MR_Word parse_tree__set_of_var__Elem_3)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__2_2;
    MR_Word parse_tree__set_of_var__TypeInfo_6_6;
    MR_Word parse_tree__set_of_var__TypeClassInfo_for_enum_8;

    {
      parse_tree__set_of_var__TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_6_6, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
    }
    {
      parse_tree__set_of_var__TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_4));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeClassInfo_for_enum_8, 2) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_6_6));
    }
    parse_tree__set_of_var__HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(parse_tree__set_of_var__TypeInfo_for_T_4, parse_tree__set_of_var__TypeClassInfo_for_enum_8, parse_tree__set_of_var__Elem_3);
    return parse_tree__set_of_var__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__set_of_var__init_1_p_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_3,
  MR_Word * parse_tree__set_of_var__Set_2)
{
  {
    MR_Word parse_tree__set_of_var__TypeInfo_4_5;
    MR_Word parse_tree__set_of_var__conv0_Set_2;

    {
      parse_tree__set_of_var__TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_5, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_3));
    }
    parse_tree__set_of_var__conv0_Set_2 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_4_5);
    *parse_tree__set_of_var__Set_2 = (MR_Word) parse_tree__set_of_var__conv0_Set_2;
  }
}

MR_Word MR_CALL 
parse_tree__set_of_var__init_0_f_0(
  MR_Word parse_tree__set_of_var__TypeInfo_for_T_2)
{
  {
    MR_Word parse_tree__set_of_var__HeadVar__1_1;
    MR_Word parse_tree__set_of_var__TypeInfo_4_4;
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

    {
      parse_tree__set_of_var__TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__set_of_var__TypeInfo_4_4, 1) = ((MR_Box) (parse_tree__set_of_var__TypeInfo_for_T_2));
    }
    parse_tree__set_of_var__conv0_HeadVar__1_1 = mercury__sparse_bitset__init_0_f_0(parse_tree__set_of_var__TypeInfo_4_4);
    parse_tree__set_of_var__HeadVar__1_1 = (MR_Word) parse_tree__set_of_var__conv0_HeadVar__1_1;
    return parse_tree__set_of_var__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;

    parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_progvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    return parse_tree__set_of_var__succeeded;
  }
}

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
{
  {
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

    parse_tree__set_of_var____Compare____set_of_progvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;

    parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_tvar_0_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2));
    return parse_tree__set_of_var__succeeded;
  }
}

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
  MR_Box * parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
{
  {
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

    parse_tree__set_of_var____Compare____set_of_tvar_0_0(&parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    *parse_tree__set_of_var__wrapper_arg_1 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3)
{
  {
    MR_bool parse_tree__set_of_var__succeeded;

    parse_tree__set_of_var__succeeded = parse_tree__set_of_var____Unify____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), ((MR_Word) parse_tree__set_of_var__wrapper_arg_2), ((MR_Word) parse_tree__set_of_var__wrapper_arg_3));
    return parse_tree__set_of_var__succeeded;
  }
}

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
  MR_Box parse_tree__set_of_var__wrapper_arg_1,
  MR_Box * parse_tree__set_of_var__wrapper_arg_2,
  MR_Box parse_tree__set_of_var__wrapper_arg_3,
  MR_Box parse_tree__set_of_var__wrapper_arg_4)
{
  {
    MR_Word parse_tree__set_of_var__conv0_HeadVar__1_1;

    parse_tree__set_of_var____Compare____set_of_var_1_0(((MR_Word) parse_tree__set_of_var__wrapper_arg_1), &parse_tree__set_of_var__conv0_HeadVar__1_1, ((MR_Word) parse_tree__set_of_var__wrapper_arg_3), ((MR_Word) parse_tree__set_of_var__wrapper_arg_4));
    *parse_tree__set_of_var__wrapper_arg_2 = ((MR_Box) (parse_tree__set_of_var__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__set_of_var__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.set_of_var. */
