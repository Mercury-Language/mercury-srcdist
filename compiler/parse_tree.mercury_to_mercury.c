/*
** Automatically generated from `mercury_to_mercury.m'
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


/* :- module parse_tree.mercury_to_mercury. */
/* :- implementation. */

/*
INIT mercury__parse_tree__mercury_to_mercury__init
ENDINIT
*/

#include "parse_tree.mercury_to_mercury.mih"


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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 102 "parse_tree.mercury_to_mercury.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1;

#line 105 "parse_tree.mercury_to_mercury.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1;

#line 108 "parse_tree.mercury_to_mercury.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 111 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0;

#line 114 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1;

#line 117 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0[2];

#line 120 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2];

#line 123 "parse_tree.mercury_to_mercury.c"
static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2];

#line 126 "parse_tree.mercury_to_mercury.c"
static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
#line 129 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 131 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2);

#line 134 "parse_tree.mercury_to_mercury.c"
static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
#line 137 "parse_tree.mercury_to_mercury.c"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 139 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 141 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_3);

#line 238 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeInfo_for_T_15,
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Var_8);

#line 172 "mercury_to_mercury.m"
static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
#line 172 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_1,
#line 172 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2);

#line 433 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1(
#line 433 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
#line 433 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 433 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 433 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3);

#line 422 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1(
#line 422 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
#line 422 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 422 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 422 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3);

#line 236 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1(
#line 236 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
#line 236 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 236 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 236 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[4][2];

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_3[2][2];

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_4[3][9];


#line 201 "mercury_to_mercury.m"
/* sealed */ struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s {
#line 201 "mercury_to_mercury.m"
  const MR_String parse_tree__mercury_to_mercury__vector_common_type_2_0__vct_2_f_0;
#line 201 "mercury_to_mercury.m"
};

static /* final */ const struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s parse_tree__mercury_to_mercury_vector_common_2[8];



static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " (")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_3[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_3[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_3[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};


static /* final */ const struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s parse_tree__mercury_to_mercury_vector_common_2[8] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "multi" },
  /* row 3 */   {     (MR_String) "nondet" },
  /* row 4 */   {     (MR_String) "cc_multi" },
  /* row 5 */   {     (MR_String) "cc_nondet" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 314 "parse_tree.mercury_to_mercury.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 322 "parse_tree.mercury_to_mercury.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 330 "parse_tree.mercury_to_mercury.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 338 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  (MR_Integer) 0
};

#line 344 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  (MR_Integer) 1
};

#line 350 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1
};

#line 356 "parse_tree.mercury_to_mercury.c"
static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0
};

#line 362 "parse_tree.mercury_to_mercury.c"
static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 368 "parse_tree.mercury_to_mercury.c"
const MR_TypeCtorInfo_Struct parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_needs_brackets_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001)),
  ((MR_Box) (parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001)),
  (MR_String) "parse_tree.mercury_to_mercury",
  (MR_String) "needs_brackets",
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0 },
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0
};

#line 385 "parse_tree.mercury_to_mercury.c"
static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
#line 388 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 390 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2)
#line 392 "parse_tree.mercury_to_mercury.c"
{
#line 394 "parse_tree.mercury_to_mercury.c"
  {
#line 396 "parse_tree.mercury_to_mercury.c"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 399 "parse_tree.mercury_to_mercury.c"
    {
#line 401 "parse_tree.mercury_to_mercury.c"
      parse_tree__mercury_to_mercury__succeeded = parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_2));
    }
#line 404 "parse_tree.mercury_to_mercury.c"
    return parse_tree__mercury_to_mercury__succeeded;
#line 406 "parse_tree.mercury_to_mercury.c"
  }
#line 408 "parse_tree.mercury_to_mercury.c"
}

#line 411 "parse_tree.mercury_to_mercury.c"
static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
#line 414 "parse_tree.mercury_to_mercury.c"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 416 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 418 "parse_tree.mercury_to_mercury.c"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_3)
#line 420 "parse_tree.mercury_to_mercury.c"
{
#line 422 "parse_tree.mercury_to_mercury.c"
  {
#line 424 "parse_tree.mercury_to_mercury.c"
    MR_Word parse_tree__mercury_to_mercury__conv0_HeadVar__1_1;

#line 427 "parse_tree.mercury_to_mercury.c"
    {
#line 429 "parse_tree.mercury_to_mercury.c"
      parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(&parse_tree__mercury_to_mercury__conv0_HeadVar__1_1, ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_2), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_3));
    }
#line 432 "parse_tree.mercury_to_mercury.c"
    *parse_tree__mercury_to_mercury__wrapper_arg_1 = ((MR_Box) (parse_tree__mercury_to_mercury__conv0_HeadVar__1_1));
#line 434 "parse_tree.mercury_to_mercury.c"
  }
#line 436 "parse_tree.mercury_to_mercury.c"
}

#line 85 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(
#line 85 "mercury_to_mercury.m"
  MR_Word * parse_tree__mercury_to_mercury__HeadVar__1_1,
#line 85 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2,
#line 85 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__3_3)
#line 85 "mercury_to_mercury.m"
{
#line 85 "mercury_to_mercury.m"
  {
#line 85 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 85 "mercury_to_mercury.m"
    MR_Integer parse_tree__mercury_to_mercury__Cast_HeadVar1_4 = (MR_Integer) parse_tree__mercury_to_mercury__HeadVar__2_2;
#line 85 "mercury_to_mercury.m"
    MR_Integer parse_tree__mercury_to_mercury__Cast_HeadVar2_5 = (MR_Integer) parse_tree__mercury_to_mercury__HeadVar__3_3;

#line 85 "mercury_to_mercury.m"
    {
#line 85 "mercury_to_mercury.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__mercury_to_mercury__HeadVar__1_1, parse_tree__mercury_to_mercury__Cast_HeadVar1_4, parse_tree__mercury_to_mercury__Cast_HeadVar2_5);
    }
#line 85 "mercury_to_mercury.m"
  }
#line 85 "mercury_to_mercury.m"
}

#line 85 "mercury_to_mercury.m"
MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(
#line 85 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_1,
#line 85 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2)
#line 85 "mercury_to_mercury.m"
{
#line 478 "parse_tree.mercury_to_mercury.c"
  {
#line 480 "parse_tree.mercury_to_mercury.c"
    MR_bool parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__HeadVar__2_1 == parse_tree__mercury_to_mercury__HeadVar__2_2);

#line 483 "parse_tree.mercury_to_mercury.c"
    return parse_tree__mercury_to_mercury__succeeded;
#line 485 "parse_tree.mercury_to_mercury.c"
  }
#line 85 "mercury_to_mercury.m"
}

#line 238 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeInfo_for_T_15,
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 238 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Var_8)
#line 238 "mercury_to_mercury.m"
{
#line 241 "mercury_to_mercury.m"
  {
#line 241 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 242 "mercury_to_mercury.m"
    {
#line 242 "mercury_to_mercury.m"
      mercury__io__write_string_3_p_0((MR_String) "!");
    }
#line 243 "mercury_to_mercury.m"
    {
#line 243 "mercury_to_mercury.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__mercury_to_mercury__TypeInfo_for_T_15, parse_tree__mercury_to_mercury__VarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Var_8);
    }
#line 241 "mercury_to_mercury.m"
  }
#line 238 "mercury_to_mercury.m"
}

#line 172 "mercury_to_mercury.m"
static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
#line 172 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_1,
#line 172 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2)
#line 172 "mercury_to_mercury.m"
{
#line 174 "mercury_to_mercury.m"
  {
#line 174 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 174 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__HeadVar__3_3;

#line 174 "mercury_to_mercury.m"
    if ((parse_tree__mercury_to_mercury__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__HeadVar__3_3 = (MR_String) "";
#line 174 "mercury_to_mercury.m"
    else
#line 175 "mercury_to_mercury.m"
      {
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_33;
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__Types_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__String0_9;
#line 175 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__String1_10;
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__V_12_12;
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__V_14_14;
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__V_15_15;
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__Term_29;
#line 175 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__VarSet_30;
#line 194 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__conv0_String0_9;

#line 192 "mercury_to_mercury.m"
        {
#line 192 "mercury_to_mercury.m"
          parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_6, &parse_tree__mercury_to_mercury__Term_29);
        }
#line 575 "parse_tree.mercury_to_mercury.c"
        parse_tree__mercury_to_mercury__TypeCtorInfo_17_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 193 "mercury_to_mercury.m"
        {
#line 193 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__VarSet_30 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_33, parse_tree__mercury_to_mercury__VarSet_1);
        }
#line 194 "mercury_to_mercury.m"
        {
#line 194 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_33, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__VarSet_30, (MR_Integer) 0, parse_tree__mercury_to_mercury__Term_29, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String0_9);
        }
#line 194 "mercury_to_mercury.m"
        parse_tree__mercury_to_mercury__String0_9 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String0_9);
#line 177 "mercury_to_mercury.m"
        {
#line 177 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__String1_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(parse_tree__mercury_to_mercury__VarSet_1, parse_tree__mercury_to_mercury__Types_7);
        }
#line 178 "mercury_to_mercury.m"
        {
#line 178 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_15_15, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__String1_10));
#line 178 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "mercury_to_mercury.m"
        }
#line 178 "mercury_to_mercury.m"
        {
#line 178 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_14_14, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__String0_9));
#line 178 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_14_14, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_15_15));
#line 178 "mercury_to_mercury.m"
        }
#line 178 "mercury_to_mercury.m"
        {
#line 178 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_12_12, 0) = ((MR_Box) ((MR_String) ", "));
#line 178 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_12_12, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_14_14));
#line 178 "mercury_to_mercury.m"
        }
#line 178 "mercury_to_mercury.m"
        {
#line 178 "mercury_to_mercury.m"
          mercury__string__append_list_2_p_0(parse_tree__mercury_to_mercury__V_12_12, &parse_tree__mercury_to_mercury__HeadVar__3_3);
        }
#line 175 "mercury_to_mercury.m"
      }
#line 174 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__HeadVar__3_3;
#line 174 "mercury_to_mercury.m"
  }
#line 172 "mercury_to_mercury.m"
}

#line 147 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(
#line 147 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14,
#line 147 "mercury_to_mercury.m"
  MR_Integer parse_tree__mercury_to_mercury__Indent_4,
#line 147 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
#line 147 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
#line 147 "mercury_to_mercury.m"
{
#line 484 "mercury_to_mercury.m"
  while (MR_TRUE)
#line 484 "mercury_to_mercury.m"
    {
#line 484 "mercury_to_mercury.m"
      /* tailcall optimized into a loop */
#line 484 "mercury_to_mercury.m"
      {
#line 484 "mercury_to_mercury.m"
        MR_bool parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__Indent_4 > (MR_Integer) 0);

#line 484 "mercury_to_mercury.m"
        if (parse_tree__mercury_to_mercury__succeeded)
#line 482 "mercury_to_mercury.m"
          {
#line 482 "mercury_to_mercury.m"
            MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_10_10;
#line 482 "mercury_to_mercury.m"
            MR_Integer parse_tree__mercury_to_mercury__V_11_11;
#line 32 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
            {
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "\t")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_10_10);
            }
#line 483 "mercury_to_mercury.m"
            parse_tree__mercury_to_mercury__V_11_11 = (parse_tree__mercury_to_mercury__Indent_4 - (MR_Integer) 1);
#line 483 "mercury_to_mercury.m"
            /* direct tailcall eliminated */
#line 483 "mercury_to_mercury.m"
            {
#line 483 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__Indent__tmp_copy_4 = parse_tree__mercury_to_mercury__V_11_11;
#line 483 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0__tmp_copy_6 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_10_10;

#line 483 "mercury_to_mercury.m"
              parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0__tmp_copy_6;
#line 483 "mercury_to_mercury.m"
              parse_tree__mercury_to_mercury__Indent_4 = parse_tree__mercury_to_mercury__Indent__tmp_copy_4;
#line 483 "mercury_to_mercury.m"
            }
#line 483 "mercury_to_mercury.m"
            continue;
#line 482 "mercury_to_mercury.m"
          }
#line 484 "mercury_to_mercury.m"
        else
#line 484 "mercury_to_mercury.m"
          *parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6;
#line 484 "mercury_to_mercury.m"
      }
#line 484 "mercury_to_mercury.m"
      break;
#line 484 "mercury_to_mercury.m"
    }
#line 147 "mercury_to_mercury.m"
}

#line 145 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(
#line 145 "mercury_to_mercury.m"
  MR_Integer parse_tree__mercury_to_mercury__Indent_4)
#line 145 "mercury_to_mercury.m"
{
#line 476 "mercury_to_mercury.m"
  {
#line 476 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 478 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7;

#line 477 "mercury_to_mercury.m"
    {
#line 477 "mercury_to_mercury.m"
      mercury__io__write_char_3_p_0((MR_Char) 10);
    }
#line 478 "mercury_to_mercury.m"
    {
#line 478 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__Indent_4, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7);
    }
#line 476 "mercury_to_mercury.m"
  }
#line 145 "mercury_to_mercury.m"
}

#line 140 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(
#line 140 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14,
#line 140 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Lang_4,
#line 140 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
#line 140 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
#line 140 "mercury_to_mercury.m"
{
#line 471 "mercury_to_mercury.m"
  {
#line 471 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 471 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_8_8;
#line 471 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_11_11;
#line 471 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_12_12;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_12_12 = libs__globals__foreign_language_string_1_f_0(parse_tree__mercury_to_mercury__Lang_4);
    }
#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_11_11 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_12_12, (MR_String) "\"");
    }
#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__mercury_to_mercury__V_11_11);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__mercury_to_mercury__V_8_8)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
#line 471 "mercury_to_mercury.m"
  }
#line 140 "mercury_to_mercury.m"
}

#line 139 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(
#line 139 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Lang_3)
#line 139 "mercury_to_mercury.m"
{
#line 468 "mercury_to_mercury.m"
  {
#line 468 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 468 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__String_4;
#line 468 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_6 = (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1];
#line 468 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_11_11;
#line 468 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_14_14;
#line 468 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_15_15;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__mercury_to_mercury__conv1_String_4;

#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_15_15 = libs__globals__foreign_language_string_1_f_0(parse_tree__mercury_to_mercury__Lang_3);
    }
#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_15_15, (MR_String) "\"");
    }
#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__mercury_to_mercury__V_14_14);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__mercury_to_mercury__V_11_11)), ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv1_String_4);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__String_4 = ((MR_String) parse_tree__mercury_to_mercury__conv1_String_4);
#line 468 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__String_4;
#line 468 "mercury_to_mercury.m"
  }
#line 139 "mercury_to_mercury.m"
}

#line 137 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(
#line 137 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Lang_4)
#line 137 "mercury_to_mercury.m"
{
#line 466 "mercury_to_mercury.m"
  {
#line 466 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 466 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0];
#line 466 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_14_14;
#line 466 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_17_17;
#line 466 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_18_18;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_IO_7;

#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_18_18 = libs__globals__foreign_language_string_1_f_0(parse_tree__mercury_to_mercury__Lang_4);
    }
#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_17_17 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_18_18, (MR_String) "\"");
    }
#line 472 "mercury_to_mercury.m"
    {
#line 472 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__mercury_to_mercury__V_17_17);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__mercury_to_mercury__V_14_14)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_IO_7);
    }
#line 466 "mercury_to_mercury.m"
  }
#line 137 "mercury_to_mercury.m"
}

#line 132 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(
#line 132 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22,
#line 132 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_7,
#line 132 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_8,
#line 132 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ClassContext_9,
#line 132 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_10,
#line 132 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14,
#line 132 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15)
#line 132 "mercury_to_mercury.m"
{
#line 445 "mercury_to_mercury.m"
  {
#line 445 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 445 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__UnivCs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassContext_9, (MR_Integer) 0)));
#line 445 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__ExistCs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassContext_9, (MR_Integer) 1)));
#line 445 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17;
#line 445 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19;

#line 447 "mercury_to_mercury.m"
    {
#line 447 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, parse_tree__mercury_to_mercury__TypeVarSet_7, parse_tree__mercury_to_mercury__VarNamePrint_8, (MR_String) "=>", parse_tree__mercury_to_mercury__ExistCs_13, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17);
    }
#line 450 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "mercury_to_mercury.m"
    if (parse_tree__mercury_to_mercury__succeeded)
#line 451 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__ExistCs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "mercury_to_mercury.m"
    if (parse_tree__mercury_to_mercury__succeeded)
#line 454 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17;
#line 454 "mercury_to_mercury.m"
    else
#line 458 "mercury_to_mercury.m"
      {
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19);
        }
#line 458 "mercury_to_mercury.m"
      }
#line 460 "mercury_to_mercury.m"
    {
#line 460 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, parse_tree__mercury_to_mercury__TypeVarSet_7, parse_tree__mercury_to_mercury__VarNamePrint_8, (MR_String) "<=", parse_tree__mercury_to_mercury__UnivCs_12, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15);
    }
#line 445 "mercury_to_mercury.m"
  }
#line 132 "mercury_to_mercury.m"
}

#line 130 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_class_context_6_p_0(
#line 130 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_7,
#line 130 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_8,
#line 130 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ClassContext_9,
#line 130 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_10)
#line 130 "mercury_to_mercury.m"
{
#line 441 "mercury_to_mercury.m"
  {
#line 441 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 441 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_13;

#line 441 "mercury_to_mercury.m"
    {
#line 441 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__TypeVarSet_7, parse_tree__mercury_to_mercury__VarNamePrint_8, parse_tree__mercury_to_mercury__ClassContext_9, parse_tree__mercury_to_mercury__ExistQVars_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_13);
    }
#line 441 "mercury_to_mercury.m"
  }
#line 130 "mercury_to_mercury.m"
}

#line 433 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1(
#line 433 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
#line 433 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 433 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 433 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3)
#line 433 "mercury_to_mercury.m"
{
#line 433 "mercury_to_mercury.m"
  {
#line 433 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__closure = parse_tree__mercury_to_mercury__closure_arg;

#line 433 "mercury_to_mercury.m"
    {
#line 433 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1), parse_tree__mercury_to_mercury__wrapper_arg_2, parse_tree__mercury_to_mercury__wrapper_arg_3);
    }
#line 433 "mercury_to_mercury.m"
  }
#line 433 "mercury_to_mercury.m"
}

#line 126 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(
#line 126 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28,
#line 126 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_7,
#line 126 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_8,
#line 126 "mercury_to_mercury.m"
  MR_String parse_tree__mercury_to_mercury__Operator_9,
#line 126 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Constraints_10,
#line 126 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14,
#line 126 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15)
#line 126 "mercury_to_mercury.m"
{
#line 428 "mercury_to_mercury.m"
  {
#line 428 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 428 "mercury_to_mercury.m"
    if ((parse_tree__mercury_to_mercury__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "mercury_to_mercury.m"
      *parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14;
#line 428 "mercury_to_mercury.m"
    else
#line 430 "mercury_to_mercury.m"
      {
#line 430 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__V_16_16;
#line 430 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17;
#line 430 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__V_19_19;
#line 430 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__V_24_24;
#line 430 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_25_25;
#line 34 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 431 "mercury_to_mercury.m"
        {
#line 431 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_19_19, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__Operator_9));
#line 431 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_1[3])));
#line 431 "mercury_to_mercury.m"
        }
#line 431 "mercury_to_mercury.m"
        {
#line 431 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_16_16, 0) = ((MR_Box) ((MR_String) " "));
#line 431 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_16_16, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_19_19));
#line 431 "mercury_to_mercury.m"
        }
#line 34 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 6)));
#line 34 "parse_tree.parse_tree_out_info.int"
        {
#line 34 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28), ((MR_Box) (parse_tree__mercury_to_mercury__V_16_16)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17);
        }
#line 433 "mercury_to_mercury.m"
        {
#line 433 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 433 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[2]));
#line 433 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1));
#line 433 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 433 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 3) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28));
#line 433 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 4) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeVarSet_7));
#line 433 "mercury_to_mercury.m"
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 5) = ((MR_Box) (parse_tree__mercury_to_mercury__VarNamePrint_8));
#line 433 "mercury_to_mercury.m"
        }
#line 58 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
        {
#line 58 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (parse_tree__mercury_to_mercury__Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__mercury_to_mercury__V_24_24)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_25_25);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_2(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_25_25, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15);
        }
#line 430 "mercury_to_mercury.m"
      }
#line 428 "mercury_to_mercury.m"
  }
#line 126 "mercury_to_mercury.m"
}

#line 422 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1(
#line 422 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
#line 422 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 422 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 422 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3)
#line 422 "mercury_to_mercury.m"
{
#line 422 "mercury_to_mercury.m"
  {
#line 422 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__closure = parse_tree__mercury_to_mercury__closure_arg;

#line 422 "mercury_to_mercury.m"
    {
#line 422 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1), parse_tree__mercury_to_mercury__wrapper_arg_2, parse_tree__mercury_to_mercury__wrapper_arg_3);
    }
#line 422 "mercury_to_mercury.m"
  }
#line 422 "mercury_to_mercury.m"
}

#line 123 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(
#line 123 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22,
#line 123 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
#line 123 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 123 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Constraint_8,
#line 123 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12,
#line 123 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13)
#line 123 "mercury_to_mercury.m"
{
#line 418 "mercury_to_mercury.m"
  {
#line 418 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 418 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__Constraint_8, (MR_Integer) 0)));
#line 418 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__Constraint_8, (MR_Integer) 1)));
#line 418 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14;
#line 418 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
#line 418 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__V_18_18;
#line 418 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 354 "mercury_to_mercury.m"
    {
#line 354 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 1, parse_tree__mercury_to_mercury__Name_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) "(")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
    }
#line 422 "mercury_to_mercury.m"
    {
#line 422 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 422 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[1]));
#line 422 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1));
#line 422 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 422 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 3) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22));
#line 422 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 4) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeVarSet_6));
#line 422 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 5) = ((MR_Box) (parse_tree__mercury_to_mercury__VarNamePrint_7));
#line 422 "mercury_to_mercury.m"
    }
#line 58 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
    {
#line 58 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (parse_tree__mercury_to_mercury__Types_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__mercury_to_mercury__V_18_18)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_2(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13);
    }
#line 418 "mercury_to_mercury.m"
  }
#line 123 "mercury_to_mercury.m"
}

#line 122 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(
#line 122 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_4,
#line 122 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Constraint_5)
#line 122 "mercury_to_mercury.m"
{
#line 414 "mercury_to_mercury.m"
  {
#line 414 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 414 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__String_6;
#line 415 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_String_6;

#line 415 "mercury_to_mercury.m"
    {
#line 415 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__TypeVarSet_4, (MR_Integer) 0, parse_tree__mercury_to_mercury__Constraint_5, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_6);
    }
#line 415 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__String_6 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_6);
#line 414 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__String_6;
#line 414 "mercury_to_mercury.m"
  }
#line 122 "mercury_to_mercury.m"
}

#line 120 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(
#line 120 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
#line 120 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 120 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Constraint_8)
#line 120 "mercury_to_mercury.m"
{
#line 412 "mercury_to_mercury.m"
  {
#line 412 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 412 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11;

#line 412 "mercury_to_mercury.m"
    {
#line 412 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__TypeVarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Constraint_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11);
    }
#line 412 "mercury_to_mercury.m"
  }
#line 120 "mercury_to_mercury.m"
}

#line 115 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(
#line 115 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24,
#line 115 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_5,
#line 115 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_6,
#line 115 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10,
#line 115 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11)
#line 115 "mercury_to_mercury.m"
{
#line 397 "mercury_to_mercury.m"
  {
#line 397 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 397 "mercury_to_mercury.m"
    if (((MR_tag((MR_Word) parse_tree__mercury_to_mercury__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 397 "mercury_to_mercury.m"
      {
#line 397 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));
#line 397 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 1)));
#line 397 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14;
#line 397 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
#line 397 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_18_18;
#line 397 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_20_20;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) "(")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14);
        }
#line 399 "mercury_to_mercury.m"
        {
#line 399 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__mercury_to_mercury__ModuleName_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ".")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_18_18);
        }
#line 402 "mercury_to_mercury.m"
        {
#line 402 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__mercury_to_mercury__Name_9, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_18_18, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_20_20);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_2(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_20_20, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
#line 397 "mercury_to_mercury.m"
      }
#line 397 "mercury_to_mercury.m"
    else
#line 405 "mercury_to_mercury.m"
      {
#line 405 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));

#line 406 "mercury_to_mercury.m"
        {
#line 406 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, parse_tree__mercury_to_mercury__NextToGraphicToken_5, parse_tree__mercury_to_mercury__Name_23, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
#line 405 "mercury_to_mercury.m"
      }
#line 397 "mercury_to_mercury.m"
  }
#line 115 "mercury_to_mercury.m"
}

#line 113 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_ngt_2_f_0(
#line 113 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_4,
#line 113 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_5)
#line 113 "mercury_to_mercury.m"
{
#line 392 "mercury_to_mercury.m"
  {
#line 392 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 392 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__Str_6;
#line 393 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_Str_6;

#line 393 "mercury_to_mercury.m"
    {
#line 393 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__NextToGraphicToken_4, parse_tree__mercury_to_mercury__SymName_5, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_Str_6);
    }
#line 393 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__Str_6 = ((MR_String) parse_tree__mercury_to_mercury__conv0_Str_6);
#line 392 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__Str_6;
#line 392 "mercury_to_mercury.m"
  }
#line 113 "mercury_to_mercury.m"
}

#line 111 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(
#line 111 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_5,
#line 111 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_6)
#line 111 "mercury_to_mercury.m"
{
#line 390 "mercury_to_mercury.m"
  {
#line 390 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 390 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9;

#line 390 "mercury_to_mercury.m"
    {
#line 390 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__NextToGraphicToken_5, parse_tree__mercury_to_mercury__SymName_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9);
    }
#line 390 "mercury_to_mercury.m"
  }
#line 111 "mercury_to_mercury.m"
}

#line 106 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(
#line 106 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10,
#line 106 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_4,
#line 106 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
#line 106 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
#line 106 "mercury_to_mercury.m"
{
#line 383 "mercury_to_mercury.m"
  {
#line 383 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 384 "mercury_to_mercury.m"
    {
#line 384 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10, (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
#line 383 "mercury_to_mercury.m"
  }
#line 106 "mercury_to_mercury.m"
}

#line 105 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(
#line 105 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_3)
#line 105 "mercury_to_mercury.m"
{
#line 379 "mercury_to_mercury.m"
  {
#line 379 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 379 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__HeadVar__2_2;
#line 393 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_HeadVar__2_2;

#line 393 "mercury_to_mercury.m"
    {
#line 393 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_3, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_HeadVar__2_2);
    }
#line 393 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__HeadVar__2_2 = ((MR_String) parse_tree__mercury_to_mercury__conv0_HeadVar__2_2);
#line 379 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__HeadVar__2_2;
#line 379 "mercury_to_mercury.m"
  }
#line 105 "mercury_to_mercury.m"
}

#line 103 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(
#line 103 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_4)
#line 103 "mercury_to_mercury.m"
{
#line 375 "mercury_to_mercury.m"
  {
#line 375 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 390 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7;

#line 390 "mercury_to_mercury.m"
    {
#line 390 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7);
    }
#line 375 "mercury_to_mercury.m"
  }
#line 103 "mercury_to_mercury.m"
}

#line 98 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0(
#line 98 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13,
#line 98 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__1_1,
#line 98 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_7,
#line 98 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_8)
#line 98 "mercury_to_mercury.m"
{
#line 368 "mercury_to_mercury.m"
  {
#line 368 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 368 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__HeadVar__1_1, (MR_Integer) 0)));
#line 368 "mercury_to_mercury.m"
    MR_Integer parse_tree__mercury_to_mercury__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__HeadVar__1_1, (MR_Integer) 1)));
#line 368 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_9_9;
#line 368 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11_11;
#line 36 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 38 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 354 "mercury_to_mercury.m"
    {
#line 354 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13, (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_7, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_9_9);
    }
#line 36 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 7)));
#line 36 "parse_tree.parse_tree_out_info.int"
    {
#line 36 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13), ((MR_Box) (MR_Word) ((MR_Char) 47)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_9_9, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11_11);
    }
#line 38 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 8)));
#line 38 "parse_tree.parse_tree_out_info.int"
    {
#line 38 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13), ((MR_Box) (parse_tree__mercury_to_mercury__Arity_5)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11_11, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_8);
    }
#line 368 "mercury_to_mercury.m"
  }
#line 98 "mercury_to_mercury.m"
}

#line 95 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(
#line 95 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20,
#line 95 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_5,
#line 95 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_6,
#line 95 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10,
#line 95 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11)
#line 95 "mercury_to_mercury.m"
{
#line 358 "mercury_to_mercury.m"
  {
#line 358 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 358 "mercury_to_mercury.m"
    if (((MR_tag((MR_Word) parse_tree__mercury_to_mercury__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 358 "mercury_to_mercury.m"
      {
#line 358 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));
#line 358 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__PredName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 1)));
#line 358 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14;
#line 358 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 359 "mercury_to_mercury.m"
        {
#line 359 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__mercury_to_mercury__ModuleName_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ".")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
        }
#line 362 "mercury_to_mercury.m"
        {
#line 362 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__mercury_to_mercury__PredName_9, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
#line 358 "mercury_to_mercury.m"
      }
#line 358 "mercury_to_mercury.m"
    else
#line 364 "mercury_to_mercury.m"
      {
#line 364 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__PredName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));

#line 365 "mercury_to_mercury.m"
        {
#line 365 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, parse_tree__mercury_to_mercury__NextToGraphicToken_5, parse_tree__mercury_to_mercury__PredName_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
#line 364 "mercury_to_mercury.m"
      }
#line 358 "mercury_to_mercury.m"
  }
#line 95 "mercury_to_mercury.m"
}

#line 92 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(
#line 92 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10,
#line 92 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_4,
#line 92 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
#line 92 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
#line 92 "mercury_to_mercury.m"
{
#line 353 "mercury_to_mercury.m"
  {
#line 353 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 354 "mercury_to_mercury.m"
    {
#line 354 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10, (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
#line 353 "mercury_to_mercury.m"
  }
#line 92 "mercury_to_mercury.m"
}

#line 91 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(
#line 91 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__SymName_4)
#line 91 "mercury_to_mercury.m"
{
#line 350 "mercury_to_mercury.m"
  {
#line 350 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 351 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7;

#line 351 "mercury_to_mercury.m"
    {
#line 351 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7);
    }
#line 350 "mercury_to_mercury.m"
  }
#line 91 "mercury_to_mercury.m"
}

#line 74 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(
#line 74 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130,
#line 74 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NeedsBrackets_5,
#line 74 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ConsId_6,
#line 74 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38,
#line 74 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39)
#line 74 "mercury_to_mercury.m"
{
#line 255 "mercury_to_mercury.m"
  {
#line 255 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 255 "mercury_to_mercury.m"
#line 255 "mercury_to_mercury.m"
    switch (MR_tag((MR_Word) parse_tree__mercury_to_mercury__ConsId_6)) {
#line 255 "mercury_to_mercury.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 255 "mercury_to_mercury.m"
      case (MR_Integer) 0:
#line 321 "mercury_to_mercury.m"
        {
#line 322 "mercury_to_mercury.m"
          {
#line 322 "mercury_to_mercury.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<typeclass_info_cell_constructor>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
          }
#line 321 "mercury_to_mercury.m"
        }
#line 255 "mercury_to_mercury.m"
        break;
#line 255 "mercury_to_mercury.m"
      case (MR_Integer) 1:
#line 318 "mercury_to_mercury.m"
        {
#line 319 "mercury_to_mercury.m"
          {
#line 319 "mercury_to_mercury.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<type_info_cell_constructor>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
          }
#line 318 "mercury_to_mercury.m"
        }
#line 255 "mercury_to_mercury.m"
        break;
#line 255 "mercury_to_mercury.m"
      case (MR_Integer) 2:
#line 338 "mercury_to_mercury.m"
        {
#line 339 "mercury_to_mercury.m"
          {
#line 339 "mercury_to_mercury.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<tabling info>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
          }
#line 338 "mercury_to_mercury.m"
        }
#line 255 "mercury_to_mercury.m"
        break;
#line 255 "mercury_to_mercury.m"
      case (MR_Integer) 3:
#line 255 "mercury_to_mercury.m"
#line 255 "mercury_to_mercury.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 0)))) {
#line 255 "mercury_to_mercury.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 0:
#line 341 "mercury_to_mercury.m"
            {
#line 342 "mercury_to_mercury.m"
              {
#line 342 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<table_io_entry_desc>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 341 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 1:
#line 344 "mercury_to_mercury.m"
            {
#line 345 "mercury_to_mercury.m"
              {
#line 345 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<deep_profiling_proc_layout>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 344 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 2:
#line 255 "mercury_to_mercury.m"
            {
#line 255 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 255 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
#line 255 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 3)));

#line 259 "mercury_to_mercury.m"
#line 259 "mercury_to_mercury.m"
              switch (parse_tree__mercury_to_mercury__NeedsBrackets_5) {
#line 259 "mercury_to_mercury.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 259 "mercury_to_mercury.m"
                case (MR_Integer) 1:
#line 261 "mercury_to_mercury.m"
                  {
#line 261 "mercury_to_mercury.m"
                    parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Name_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
                  }
#line 259 "mercury_to_mercury.m"
                  break;
#line 259 "mercury_to_mercury.m"
                case (MR_Integer) 0:
#line 258 "mercury_to_mercury.m"
                  {
#line 258 "mercury_to_mercury.m"
                    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Name_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
                  }
#line 259 "mercury_to_mercury.m"
                  break;
#line 259 "mercury_to_mercury.m"
              }
#line 255 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 3:
#line 264 "mercury_to_mercury.m"
            {
#line 265 "mercury_to_mercury.m"
              {
#line 265 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "{}", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 264 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 4:
#line 283 "mercury_to_mercury.m"
            {
#line 283 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__ShroudedPredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 283 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__PredInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ShroudedPredProcId_16, (MR_Integer) 0)));
#line 283 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__ProcInt_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ShroudedPredProcId_16, (MR_Integer) 1)));
#line 283 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_108_108;
#line 283 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_109_109;
#line 283 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_111_111;
#line 283 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_112_112;

#line 286 "mercury_to_mercury.m"
              {
#line 286 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<closure_cons(", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_108_108);
              }
#line 287 "mercury_to_mercury.m"
              {
#line 287 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__PredInt_18, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_108_108, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_109_109);
              }
#line 288 "mercury_to_mercury.m"
              {
#line 288 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ", ", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_109_109, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_111_111);
              }
#line 289 "mercury_to_mercury.m"
              {
#line 289 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__ProcInt_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_111_111, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_112_112);
              }
#line 292 "mercury_to_mercury.m"
              {
#line 292 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ")>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_112_112, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 283 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 5:
#line 267 "mercury_to_mercury.m"
            {
#line 267 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

#line 268 "mercury_to_mercury.m"
              {
#line 268 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Int_12, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 267 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 6:
#line 270 "mercury_to_mercury.m"
            {
#line 270 "mercury_to_mercury.m"
              MR_Float parse_tree__mercury_to_mercury__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

#line 271 "mercury_to_mercury.m"
              {
#line 271 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_float_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Float_13, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 270 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 7:
#line 273 "mercury_to_mercury.m"
            {
#line 273 "mercury_to_mercury.m"
              MR_Char parse_tree__mercury_to_mercury__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 273 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_119_119;

#line 274 "mercury_to_mercury.m"
              {
#line 274 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_119_119 = mercury__term_io__quoted_char_1_f_0(parse_tree__mercury_to_mercury__Char_14);
              }
#line 274 "mercury_to_mercury.m"
              {
#line 274 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_119_119, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 273 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 8:
#line 276 "mercury_to_mercury.m"
            {
#line 276 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__Str_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

#line 277 "mercury_to_mercury.m"
              {
#line 277 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_quoted_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Str_15, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 276 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 9:
#line 279 "mercury_to_mercury.m"
            {
#line 279 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_116_116;
#line 279 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__Name_127 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

#line 280 "mercury_to_mercury.m"
              {
#line 280 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "\044", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_116_116);
              }
#line 281 "mercury_to_mercury.m"
              {
#line 281 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Name_127, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_116_116, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 279 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 10:
#line 294 "mercury_to_mercury.m"
            {
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 294 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__Type_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
#line 294 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 3)));
#line 294 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__ModuleString_23;
#line 294 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__ArityString_24;
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_94_94;
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_97_97;
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_98_98;
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_100_100;
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_101_101;
#line 294 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_103_103;

#line 295 "mercury_to_mercury.m"
              {
#line 295 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__ModuleString_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__mercury_to_mercury__ModuleName_20);
              }
#line 296 "mercury_to_mercury.m"
              {
#line 296 "mercury_to_mercury.m"
                mercury__string__int_to_string_2_p_0(parse_tree__mercury_to_mercury__Arity_22, &parse_tree__mercury_to_mercury__ArityString_24);
              }
#line 298 "mercury_to_mercury.m"
              {
#line 298 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_103_103, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__ArityString_24));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_1[2])));
#line 298 "mercury_to_mercury.m"
              }
#line 298 "mercury_to_mercury.m"
              {
#line 298 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_101_101, 0) = ((MR_Box) ((MR_String) "/"));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_101_101, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_103_103));
#line 298 "mercury_to_mercury.m"
              }
#line 298 "mercury_to_mercury.m"
              {
#line 298 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_100_100, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__Type_21));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_100_100, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_101_101));
#line 298 "mercury_to_mercury.m"
              }
#line 298 "mercury_to_mercury.m"
              {
#line 298 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_98_98, 0) = ((MR_Box) ((MR_String) "."));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_98_98, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_100_100));
#line 298 "mercury_to_mercury.m"
              }
#line 298 "mercury_to_mercury.m"
              {
#line 298 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_97_97, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__ModuleString_23));
#line 298 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_97_97, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_98_98));
#line 298 "mercury_to_mercury.m"
              }
#line 297 "mercury_to_mercury.m"
              {
#line 297 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_94_94, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
#line 297 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_94_94, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_97_97));
#line 297 "mercury_to_mercury.m"
              }
#line 297 "mercury_to_mercury.m"
              {
#line 297 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_strings_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_94_94, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 294 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 11:
#line 301 "mercury_to_mercury.m"
            {
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__ClassId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
#line 301 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__InstanceNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 3)));
#line 301 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__InstanceString_27 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 4)));
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__ClassName_28;
#line 301 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__ClassArity_29;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_73_73;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_75_75;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_76_76;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_78_78;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_79_79;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81;
#line 301 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83;
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_88_88;
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_90_90;
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_91_91;
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__V_92_92;
#line 301 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__ModuleName_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 301 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__ModuleString_129;

#line 302 "mercury_to_mercury.m"
              {
#line 302 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__ModuleString_129 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__mercury_to_mercury__ModuleName_128);
              }
#line 303 "mercury_to_mercury.m"
              parse_tree__mercury_to_mercury__ClassName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassId_25, (MR_Integer) 0)));
#line 303 "mercury_to_mercury.m"
              parse_tree__mercury_to_mercury__ClassArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassId_25, (MR_Integer) 1)));
#line 304 "mercury_to_mercury.m"
              {
#line 304 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<base_typeclass_info for ", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_73_73);
              }
#line 305 "mercury_to_mercury.m"
              {
#line 305 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "class_id(", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_73_73, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_75_75);
              }
#line 306 "mercury_to_mercury.m"
              {
#line 306 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__ClassName_28, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_75_75, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_76_76);
              }
#line 307 "mercury_to_mercury.m"
              {
#line 307 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ", ", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_76_76, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_78_78);
              }
#line 308 "mercury_to_mercury.m"
              {
#line 308 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__ClassArity_29, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_78_78, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_79_79);
              }
#line 309 "mercury_to_mercury.m"
              {
#line 309 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_79_79, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81);
              }
#line 310 "mercury_to_mercury.m"
              parse_tree__mercury_to_mercury__succeeded = (strcmp(parse_tree__mercury_to_mercury__ModuleString_129, (MR_String) "some bogus module name") == 0);
#line 310 "mercury_to_mercury.m"
              parse_tree__mercury_to_mercury__succeeded = !(parse_tree__mercury_to_mercury__succeeded);
#line 312 "mercury_to_mercury.m"
              if (parse_tree__mercury_to_mercury__succeeded)
#line 311 "mercury_to_mercury.m"
                {
#line 311 "mercury_to_mercury.m"
                  MR_Word parse_tree__mercury_to_mercury__V_82_82;
#line 311 "mercury_to_mercury.m"
                  MR_Word parse_tree__mercury_to_mercury__V_85_85;

#line 311 "mercury_to_mercury.m"
                  {
#line 311 "mercury_to_mercury.m"
                    parse_tree__mercury_to_mercury__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "mercury_to_mercury.m"
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_85_85, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__ModuleString_129));
#line 311 "mercury_to_mercury.m"
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "mercury_to_mercury.m"
                  }
#line 311 "mercury_to_mercury.m"
                  {
#line 311 "mercury_to_mercury.m"
                    parse_tree__mercury_to_mercury__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "mercury_to_mercury.m"
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_82_82, 0) = ((MR_Box) ((MR_String) " from module "));
#line 311 "mercury_to_mercury.m"
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_82_82, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_85_85));
#line 311 "mercury_to_mercury.m"
                  }
#line 311 "mercury_to_mercury.m"
                  {
#line 311 "mercury_to_mercury.m"
                    parse_tree__parse_tree_out_info__add_strings_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_82_82, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83);
                  }
#line 311 "mercury_to_mercury.m"
                }
#line 312 "mercury_to_mercury.m"
              else
#line 312 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81;
#line 316 "mercury_to_mercury.m"
              {
#line 316 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_90_90, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__InstanceNum_26));
#line 316 "mercury_to_mercury.m"
              }
#line 316 "mercury_to_mercury.m"
              {
#line 316 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_92_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(2), parse_tree__mercury_to_mercury__V_92_92, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__InstanceString_27));
#line 316 "mercury_to_mercury.m"
              }
#line 316 "mercury_to_mercury.m"
              {
#line 316 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_91_91, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__V_92_92));
#line 316 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "mercury_to_mercury.m"
              }
#line 316 "mercury_to_mercury.m"
              {
#line 316 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_88_88, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__V_90_90));
#line 316 "mercury_to_mercury.m"
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_88_88, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_91_91));
#line 316 "mercury_to_mercury.m"
              }
#line 315 "mercury_to_mercury.m"
              {
#line 315 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_format_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ", instance number %d (%s)>", parse_tree__mercury_to_mercury__V_88_88, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 301 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 12:
#line 324 "mercury_to_mercury.m"
            {
#line 324 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__TIConstNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 324 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_62_62;
#line 324 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_65_65;
#line 324 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_66_66;

#line 326 "mercury_to_mercury.m"
              {
#line 326 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_66_66 = mercury__string__int_to_string_1_f_0(parse_tree__mercury_to_mercury__TIConstNum_31);
              }
#line 326 "mercury_to_mercury.m"
              {
#line 326 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_65_65 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_66_66, (MR_String) ">");
              }
#line 325 "mercury_to_mercury.m"
              {
#line 325 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", parse_tree__mercury_to_mercury__V_65_65);
              }
#line 325 "mercury_to_mercury.m"
              {
#line 325 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_62_62, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 324 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 13:
#line 328 "mercury_to_mercury.m"
            {
#line 328 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__TCIConstNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 328 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_56_56;
#line 328 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_59_59;
#line 328 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_60_60;

#line 330 "mercury_to_mercury.m"
              {
#line 330 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_60_60 = mercury__string__int_to_string_1_f_0(parse_tree__mercury_to_mercury__TCIConstNum_32);
              }
#line 330 "mercury_to_mercury.m"
              {
#line 330 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_59_59 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_60_60, (MR_String) ">");
              }
#line 329 "mercury_to_mercury.m"
              {
#line 329 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", parse_tree__mercury_to_mercury__V_59_59);
              }
#line 329 "mercury_to_mercury.m"
              {
#line 329 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_56_56, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 328 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
          case (MR_Integer) 14:
#line 332 "mercury_to_mercury.m"
            {
#line 332 "mercury_to_mercury.m"
              MR_Integer parse_tree__mercury_to_mercury__ConstNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
#line 332 "mercury_to_mercury.m"
              MR_Word parse_tree__mercury_to_mercury__SubConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
#line 332 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_46_46;
#line 332 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_47_47;
#line 332 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_49_49;
#line 332 "mercury_to_mercury.m"
              MR_String parse_tree__mercury_to_mercury__V_50_50;
#line 332 "mercury_to_mercury.m"
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_53_53;

#line 334 "mercury_to_mercury.m"
              {
#line 334 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_50_50 = mercury__string__int_to_string_1_f_0(parse_tree__mercury_to_mercury__ConstNum_33);
              }
#line 334 "mercury_to_mercury.m"
              {
#line 334 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_49_49 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_50_50, (MR_String) ", ");
              }
#line 333 "mercury_to_mercury.m"
              {
#line 333 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", parse_tree__mercury_to_mercury__V_49_49);
              }
#line 333 "mercury_to_mercury.m"
              {
#line 333 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_46_46, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_47_47);
              }
#line 335 "mercury_to_mercury.m"
              {
#line 335 "mercury_to_mercury.m"
                parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_Integer) 1, parse_tree__mercury_to_mercury__SubConsId_34, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_47_47, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_53_53);
              }
#line 336 "mercury_to_mercury.m"
              {
#line 336 "mercury_to_mercury.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ">", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_53_53, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
#line 332 "mercury_to_mercury.m"
            }
#line 255 "mercury_to_mercury.m"
            break;
#line 255 "mercury_to_mercury.m"
        }
#line 255 "mercury_to_mercury.m"
        break;
#line 255 "mercury_to_mercury.m"
    }
#line 255 "mercury_to_mercury.m"
  }
#line 74 "mercury_to_mercury.m"
}

#line 73 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0(
#line 73 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NeedsBrackets_4,
#line 73 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ConsId_5)
#line 73 "mercury_to_mercury.m"
{
#line 250 "mercury_to_mercury.m"
  {
#line 250 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 250 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__String_6;
#line 251 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_String_6;

#line 251 "mercury_to_mercury.m"
    {
#line 251 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__NeedsBrackets_4, parse_tree__mercury_to_mercury__ConsId_5, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_6);
    }
#line 251 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__String_6 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_6);
#line 250 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__String_6;
#line 250 "mercury_to_mercury.m"
  }
#line 73 "mercury_to_mercury.m"
}

#line 71 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0(
#line 71 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__NeedsBrackets_5,
#line 71 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ConsId_6)
#line 71 "mercury_to_mercury.m"
{
#line 248 "mercury_to_mercury.m"
  {
#line 248 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 248 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9;

#line 248 "mercury_to_mercury.m"
    {
#line 248 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__NeedsBrackets_5, parse_tree__mercury_to_mercury__ConsId_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9);
    }
#line 248 "mercury_to_mercury.m"
  }
#line 71 "mercury_to_mercury.m"
}

#line 236 "mercury_to_mercury.m"
static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1(
#line 236 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
#line 236 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
#line 236 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
#line 236 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3)
#line 236 "mercury_to_mercury.m"
{
#line 236 "mercury_to_mercury.m"
  {
#line 236 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__closure = parse_tree__mercury_to_mercury__closure_arg;

#line 236 "mercury_to_mercury.m"
    {
#line 236 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1));
    }
#line 236 "mercury_to_mercury.m"
  }
#line 236 "mercury_to_mercury.m"
}

#line 64 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(
#line 64 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeInfo_for_T_15,
#line 64 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
#line 64 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 64 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__StateVars_8)
#line 64 "mercury_to_mercury.m"
{
#line 234 "mercury_to_mercury.m"
  {
#line 234 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 234 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeInfo_20_20;
#line 234 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__V_13_13;

#line 236 "mercury_to_mercury.m"
    {
#line 236 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 236 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[0]));
#line 236 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1));
#line 236 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 236 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 3) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeInfo_for_T_15));
#line 236 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 4) = ((MR_Box) (parse_tree__mercury_to_mercury__VarSet_6));
#line 236 "mercury_to_mercury.m"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 5) = ((MR_Box) (parse_tree__mercury_to_mercury__VarNamePrint_7));
#line 236 "mercury_to_mercury.m"
    }
#line 2566 "parse_tree.mercury_to_mercury.c"
    {
#line 2568 "parse_tree.mercury_to_mercury.c"
      parse_tree__mercury_to_mercury__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2570 "parse_tree.mercury_to_mercury.c"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2572 "parse_tree.mercury_to_mercury.c"
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeInfo_for_T_15));
#line 2574 "parse_tree.mercury_to_mercury.c"
    }
#line 235 "mercury_to_mercury.m"
    {
#line 235 "mercury_to_mercury.m"
      mercury__io__write_list_5_p_0(parse_tree__mercury_to_mercury__TypeInfo_20_20, (MR_Word) parse_tree__mercury_to_mercury__StateVars_8, (MR_String) ", ", (MR_Word) parse_tree__mercury_to_mercury__V_13_13);
    }
#line 234 "mercury_to_mercury.m"
  }
#line 64 "mercury_to_mercury.m"
}

#line 56 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(
#line 56 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19,
#line 56 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
#line 56 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 56 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_8,
#line 56 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12,
#line 56 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13)
#line 56 "mercury_to_mercury.m"
{
#line 224 "mercury_to_mercury.m"
  {
#line 224 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;

#line 224 "mercury_to_mercury.m"
    if ((parse_tree__mercury_to_mercury__ExistQVars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "mercury_to_mercury.m"
      *parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12;
#line 224 "mercury_to_mercury.m"
    else
#line 226 "mercury_to_mercury.m"
      {
#line 226 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15_15;
#line 226 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "some [")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15_15);
        }
#line 228 "mercury_to_mercury.m"
        {
#line 228 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19, parse_tree__mercury_to_mercury__TypeVarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__ExistQVars_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15_15, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "] ")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13);
        }
#line 226 "mercury_to_mercury.m"
      }
#line 224 "mercury_to_mercury.m"
  }
#line 56 "mercury_to_mercury.m"
}

#line 54 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_quantifier_to_string_3_f_0(
#line 54 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_5,
#line 54 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_6,
#line 54 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_7)
#line 54 "mercury_to_mercury.m"
{
#line 218 "mercury_to_mercury.m"
  {
#line 218 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 218 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__String_8;
#line 219 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_String_8;

#line 219 "mercury_to_mercury.m"
    {
#line 219 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__TypeVarSet_5, parse_tree__mercury_to_mercury__VarNamePrint_6, parse_tree__mercury_to_mercury__ExistQVars_7, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_8);
    }
#line 219 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__String_8 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_8);
#line 218 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__String_8;
#line 218 "mercury_to_mercury.m"
  }
#line 54 "mercury_to_mercury.m"
}

#line 52 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(
#line 52 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
#line 52 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 52 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_8)
#line 52 "mercury_to_mercury.m"
{
#line 216 "mercury_to_mercury.m"
  {
#line 216 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 216 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11;

#line 216 "mercury_to_mercury.m"
    {
#line 216 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__TypeVarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__ExistQVars_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11);
    }
#line 216 "mercury_to_mercury.m"
  }
#line 52 "mercury_to_mercury.m"
}

#line 46 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(
#line 46 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10,
#line 46 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Detism_4,
#line 46 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
#line 46 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
#line 46 "mercury_to_mercury.m"
{
#line 210 "mercury_to_mercury.m"
  {
#line 210 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 210 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_8_8;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 211 "mercury_to_mercury.m"
    {
#line 211 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_8_8 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__mercury_to_mercury__Detism_4);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10), ((MR_Box) (parse_tree__mercury_to_mercury__V_8_8)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
#line 210 "mercury_to_mercury.m"
  }
#line 46 "mercury_to_mercury.m"
}

#line 45 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(
#line 45 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__1_1)
#line 45 "mercury_to_mercury.m"
{
#line 201 "mercury_to_mercury.m"
  {
#line 201 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 201 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__HeadVar__2_2 = ((&parse_tree__mercury_to_mercury_vector_common_2[0 + parse_tree__mercury_to_mercury__HeadVar__1_1]))->parse_tree__mercury_to_mercury__vector_common_type_2_0__vct_2_f_0;

#line 201 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__HeadVar__2_2;
#line 201 "mercury_to_mercury.m"
  }
#line 45 "mercury_to_mercury.m"
}

#line 44 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(
#line 44 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Detism_4)
#line 44 "mercury_to_mercury.m"
{
#line 199 "mercury_to_mercury.m"
  {
#line 199 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 199 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0];
#line 199 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__V_14_14;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_UI_7;

#line 211 "mercury_to_mercury.m"
    {
#line 211 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__V_14_14 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__mercury_to_mercury__Detism_4);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__mercury_to_mercury__V_14_14)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_UI_7);
    }
#line 199 "mercury_to_mercury.m"
  }
#line 44 "mercury_to_mercury.m"
}

#line 39 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(
#line 39 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_15,
#line 39 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
#line 39 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 39 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Type_8,
#line 39 "mercury_to_mercury.m"
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12,
#line 39 "mercury_to_mercury.m"
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13)
#line 39 "mercury_to_mercury.m"
{
#line 186 "mercury_to_mercury.m"
  {
#line 186 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 186 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_17;
#line 186 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__Term_10;
#line 186 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__VarSet_11;

#line 192 "mercury_to_mercury.m"
    {
#line 192 "mercury_to_mercury.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_8, &parse_tree__mercury_to_mercury__Term_10);
    }
#line 2841 "parse_tree.mercury_to_mercury.c"
    parse_tree__mercury_to_mercury__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 193 "mercury_to_mercury.m"
    {
#line 193 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__VarSet_11 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_17, parse_tree__mercury_to_mercury__TypeVarSet_6);
    }
#line 194 "mercury_to_mercury.m"
    {
#line 194 "mercury_to_mercury.m"
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_17, parse_tree__mercury_to_mercury__TypeClassInfo_for_output_15, parse_tree__mercury_to_mercury__VarSet_11, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Term_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13);
    }
#line 186 "mercury_to_mercury.m"
  }
#line 39 "mercury_to_mercury.m"
}

#line 38 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(
#line 38 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_5,
#line 38 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_6,
#line 38 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Type_7)
#line 38 "mercury_to_mercury.m"
{
#line 183 "mercury_to_mercury.m"
  {
#line 183 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 183 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__String_8;
#line 183 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_21;
#line 183 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__Term_17;
#line 183 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__VarSet_18;
#line 194 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_String_8;

#line 192 "mercury_to_mercury.m"
    {
#line 192 "mercury_to_mercury.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_7, &parse_tree__mercury_to_mercury__Term_17);
    }
#line 2889 "parse_tree.mercury_to_mercury.c"
    parse_tree__mercury_to_mercury__TypeCtorInfo_17_21 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 193 "mercury_to_mercury.m"
    {
#line 193 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__VarSet_18 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_21, parse_tree__mercury_to_mercury__VarSet_5);
    }
#line 194 "mercury_to_mercury.m"
    {
#line 194 "mercury_to_mercury.m"
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_21, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__VarSet_18, parse_tree__mercury_to_mercury__VarNamePrint_6, parse_tree__mercury_to_mercury__Term_17, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_8);
    }
#line 194 "mercury_to_mercury.m"
    parse_tree__mercury_to_mercury__String_8 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_8);
#line 183 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__String_8;
#line 183 "mercury_to_mercury.m"
  }
#line 38 "mercury_to_mercury.m"
}

#line 36 "mercury_to_mercury.m"
void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(
#line 36 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
#line 36 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
#line 36 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__Type_8)
#line 36 "mercury_to_mercury.m"
{
#line 181 "mercury_to_mercury.m"
  {
#line 181 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 181 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_24;
#line 181 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__Term_20;
#line 181 "mercury_to_mercury.m"
    MR_Word parse_tree__mercury_to_mercury__VarSet_21;
#line 194 "mercury_to_mercury.m"
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11;

#line 192 "mercury_to_mercury.m"
    {
#line 192 "mercury_to_mercury.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_8, &parse_tree__mercury_to_mercury__Term_20);
    }
#line 2939 "parse_tree.mercury_to_mercury.c"
    parse_tree__mercury_to_mercury__TypeCtorInfo_17_24 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 193 "mercury_to_mercury.m"
    {
#line 193 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__VarSet_21 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_24, parse_tree__mercury_to_mercury__VarSet_6);
    }
#line 194 "mercury_to_mercury.m"
    {
#line 194 "mercury_to_mercury.m"
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_24, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__VarSet_21, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Term_20, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11);
    }
#line 181 "mercury_to_mercury.m"
  }
#line 36 "mercury_to_mercury.m"
}

#line 34 "mercury_to_mercury.m"
MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(
#line 34 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__VarSet_1,
#line 34 "mercury_to_mercury.m"
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2)
#line 34 "mercury_to_mercury.m"
{
#line 166 "mercury_to_mercury.m"
  {
#line 166 "mercury_to_mercury.m"
    MR_bool parse_tree__mercury_to_mercury__succeeded;
#line 166 "mercury_to_mercury.m"
    MR_String parse_tree__mercury_to_mercury__HeadVar__3_3;

#line 166 "mercury_to_mercury.m"
    if ((parse_tree__mercury_to_mercury__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "mercury_to_mercury.m"
      parse_tree__mercury_to_mercury__HeadVar__3_3 = (MR_String) "";
#line 166 "mercury_to_mercury.m"
    else
#line 167 "mercury_to_mercury.m"
      {
#line 167 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_28;
#line 167 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__Types_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__String0_9;
#line 167 "mercury_to_mercury.m"
        MR_String parse_tree__mercury_to_mercury__String1_10;
#line 167 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__Term_24;
#line 167 "mercury_to_mercury.m"
        MR_Word parse_tree__mercury_to_mercury__VarSet_25;
#line 194 "mercury_to_mercury.m"
        MR_Box parse_tree__mercury_to_mercury__conv0_String0_9;

#line 192 "mercury_to_mercury.m"
        {
#line 192 "mercury_to_mercury.m"
          parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_6, &parse_tree__mercury_to_mercury__Term_24);
        }
#line 3002 "parse_tree.mercury_to_mercury.c"
        parse_tree__mercury_to_mercury__TypeCtorInfo_17_28 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 193 "mercury_to_mercury.m"
        {
#line 193 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__VarSet_25 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_28, parse_tree__mercury_to_mercury__VarSet_1);
        }
#line 194 "mercury_to_mercury.m"
        {
#line 194 "mercury_to_mercury.m"
          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_28, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__VarSet_25, (MR_Integer) 0, parse_tree__mercury_to_mercury__Term_24, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String0_9);
        }
#line 194 "mercury_to_mercury.m"
        parse_tree__mercury_to_mercury__String0_9 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String0_9);
#line 169 "mercury_to_mercury.m"
        {
#line 169 "mercury_to_mercury.m"
          parse_tree__mercury_to_mercury__String1_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(parse_tree__mercury_to_mercury__VarSet_1, parse_tree__mercury_to_mercury__Types_7);
        }
#line 170 "mercury_to_mercury.m"
        {
#line 170 "mercury_to_mercury.m"
          mercury__string__append_3_p_2(parse_tree__mercury_to_mercury__String0_9, parse_tree__mercury_to_mercury__String1_10, &parse_tree__mercury_to_mercury__HeadVar__3_3);
        }
#line 167 "mercury_to_mercury.m"
      }
#line 166 "mercury_to_mercury.m"
    return parse_tree__mercury_to_mercury__HeadVar__3_3;
#line 166 "mercury_to_mercury.m"
  }
#line 34 "mercury_to_mercury.m"
}

void mercury__parse_tree__mercury_to_mercury__init(void)
{
}

void mercury__parse_tree__mercury_to_mercury__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_needs_brackets_0);
}

void mercury__parse_tree__mercury_to_mercury__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.mercury_to_mercury. */
