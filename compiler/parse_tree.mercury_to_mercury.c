/*
** Automatically generated from `mercury_to_mercury.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.unparse.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0;

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1;

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0[2];

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2];

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2];

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2);

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_3);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeInfo_for_T_15,
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__Var_8);

static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
  MR_Word parse_tree__mercury_to_mercury__VarSet_1,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1(
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1(
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1(
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[4][2];

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_3[2][2];

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_4[3][9];


/* sealed */ struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s {
  const MR_String parse_tree__mercury_to_mercury__vector_common_type_2_0__vct_2_f_0;
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0
};

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

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

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    {
      parse_tree__mercury_to_mercury__succeeded = parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_2));
    }
    return parse_tree__mercury_to_mercury__succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_3)
{
  {
    MR_Word parse_tree__mercury_to_mercury__conv0_HeadVar__1_1;

    {
      parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(&parse_tree__mercury_to_mercury__conv0_HeadVar__1_1, ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_2), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_3));
    }
    *parse_tree__mercury_to_mercury__wrapper_arg_1 = ((MR_Box) (parse_tree__mercury_to_mercury__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(
  MR_Word * parse_tree__mercury_to_mercury__HeadVar__1_1,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__3_3)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Integer parse_tree__mercury_to_mercury__Cast_HeadVar1_4 = (MR_Integer) parse_tree__mercury_to_mercury__HeadVar__2_2;
    MR_Integer parse_tree__mercury_to_mercury__Cast_HeadVar2_5 = (MR_Integer) parse_tree__mercury_to_mercury__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__mercury_to_mercury__HeadVar__1_1, parse_tree__mercury_to_mercury__Cast_HeadVar1_4, parse_tree__mercury_to_mercury__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_1,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__HeadVar__2_1 == parse_tree__mercury_to_mercury__HeadVar__2_2);

    return parse_tree__mercury_to_mercury__succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeInfo_for_T_15,
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__Var_8)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "!");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__mercury_to_mercury__TypeInfo_for_T_15, parse_tree__mercury_to_mercury__VarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Var_8);
    }
  }
}

static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
  MR_Word parse_tree__mercury_to_mercury__VarSet_1,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__HeadVar__3_3;

    if ((parse_tree__mercury_to_mercury__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__mercury_to_mercury__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_33;
        MR_Word parse_tree__mercury_to_mercury__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__mercury_to_mercury__Types_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__mercury_to_mercury__String0_9;
        MR_String parse_tree__mercury_to_mercury__String1_10;
        MR_Word parse_tree__mercury_to_mercury__V_12_12;
        MR_Word parse_tree__mercury_to_mercury__V_14_14;
        MR_Word parse_tree__mercury_to_mercury__V_15_15;
        MR_Word parse_tree__mercury_to_mercury__Term_29;
        MR_Word parse_tree__mercury_to_mercury__VarSet_30;
        MR_Box parse_tree__mercury_to_mercury__conv0_String0_9;

        {
          parse_tree__unparse__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_6, &parse_tree__mercury_to_mercury__Term_29);
        }
        parse_tree__mercury_to_mercury__TypeCtorInfo_17_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          parse_tree__mercury_to_mercury__VarSet_30 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_33, parse_tree__mercury_to_mercury__VarSet_1);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_33, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__VarSet_30, (MR_Integer) 0, parse_tree__mercury_to_mercury__Term_29, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String0_9);
        }
        parse_tree__mercury_to_mercury__String0_9 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String0_9);
        {
          parse_tree__mercury_to_mercury__String1_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(parse_tree__mercury_to_mercury__VarSet_1, parse_tree__mercury_to_mercury__Types_7);
        }
        {
          parse_tree__mercury_to_mercury__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_15_15, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__String1_10));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__mercury_to_mercury__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_14_14, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__String0_9));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_14_14, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_15_15));
        }
        {
          parse_tree__mercury_to_mercury__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_12_12, 0) = ((MR_Box) ((MR_String) ", "));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_12_12, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_14_14));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__mercury_to_mercury__V_12_12, &parse_tree__mercury_to_mercury__HeadVar__3_3);
        }
      }
    return parse_tree__mercury_to_mercury__HeadVar__3_3;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14,
  MR_Integer parse_tree__mercury_to_mercury__Indent_4,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__Indent_4 > (MR_Integer) 0);

        if (parse_tree__mercury_to_mercury__succeeded)
          {
            MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_10_10;
            MR_Integer parse_tree__mercury_to_mercury__V_11_11;
            void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14), ((MR_Box) ((MR_String) "\t")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_10_10);
            }
            parse_tree__mercury_to_mercury__V_11_11 = (parse_tree__mercury_to_mercury__Indent_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer parse_tree__mercury_to_mercury__Indent__tmp_copy_4 = parse_tree__mercury_to_mercury__V_11_11;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0__tmp_copy_6 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_10_10;

              parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0__tmp_copy_6;
              parse_tree__mercury_to_mercury__Indent_4 = parse_tree__mercury_to_mercury__Indent__tmp_copy_4;
            }
            continue;
          }
        else
          *parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6;
      }
      break;
    }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(
  MR_Integer parse_tree__mercury_to_mercury__Indent_4)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7;

    {
      mercury__io__write_char_3_p_0((MR_Char) 10);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__Indent_4, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14,
  MR_Word parse_tree__mercury_to_mercury__Lang_4,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__V_8_8;
    MR_String parse_tree__mercury_to_mercury__V_11_11;
    MR_String parse_tree__mercury_to_mercury__V_12_12;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__mercury_to_mercury__V_12_12 = libs__globals__foreign_language_string_1_f_0(parse_tree__mercury_to_mercury__Lang_4);
    }
    {
      parse_tree__mercury_to_mercury__V_11_11 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_12_12, (MR_String) "\"");
    }
    {
      parse_tree__mercury_to_mercury__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__mercury_to_mercury__V_11_11);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__mercury_to_mercury__V_8_8)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(
  MR_Word parse_tree__mercury_to_mercury__Lang_3)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__String_4;
    MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_6 = (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1];
    MR_String parse_tree__mercury_to_mercury__V_11_11;
    MR_String parse_tree__mercury_to_mercury__V_14_14;
    MR_String parse_tree__mercury_to_mercury__V_15_15;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__mercury_to_mercury__conv1_String_4;

    {
      parse_tree__mercury_to_mercury__V_15_15 = libs__globals__foreign_language_string_1_f_0(parse_tree__mercury_to_mercury__Lang_3);
    }
    {
      parse_tree__mercury_to_mercury__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_15_15, (MR_String) "\"");
    }
    {
      parse_tree__mercury_to_mercury__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__mercury_to_mercury__V_14_14);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__mercury_to_mercury__V_11_11)), ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv1_String_4);
    }
    parse_tree__mercury_to_mercury__String_4 = ((MR_String) parse_tree__mercury_to_mercury__conv1_String_4);
    return parse_tree__mercury_to_mercury__String_4;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__Lang_4)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0];
    MR_String parse_tree__mercury_to_mercury__V_14_14;
    MR_String parse_tree__mercury_to_mercury__V_17_17;
    MR_String parse_tree__mercury_to_mercury__V_18_18;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_IO_7;

    {
      parse_tree__mercury_to_mercury__V_18_18 = libs__globals__foreign_language_string_1_f_0(parse_tree__mercury_to_mercury__Lang_4);
    }
    {
      parse_tree__mercury_to_mercury__V_17_17 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_18_18, (MR_String) "\"");
    }
    {
      parse_tree__mercury_to_mercury__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__mercury_to_mercury__V_17_17);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__mercury_to_mercury__V_14_14)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_IO_7);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22,
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_7,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_8,
  MR_Word parse_tree__mercury_to_mercury__ClassContext_9,
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_10,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__UnivCs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassContext_9, (MR_Integer) 0)));
    MR_Word parse_tree__mercury_to_mercury__ExistCs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassContext_9, (MR_Integer) 1)));
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17;
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19;

    {
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, parse_tree__mercury_to_mercury__TypeVarSet_7, parse_tree__mercury_to_mercury__VarNamePrint_8, (MR_String) "=>", parse_tree__mercury_to_mercury__ExistCs_13, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17);
    }
    parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__mercury_to_mercury__succeeded)
      parse_tree__mercury_to_mercury__succeeded = (parse_tree__mercury_to_mercury__ExistCs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__mercury_to_mercury__succeeded)
      parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17;
    else
      {
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19);
        }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, parse_tree__mercury_to_mercury__TypeVarSet_7, parse_tree__mercury_to_mercury__VarNamePrint_8, (MR_String) "<=", parse_tree__mercury_to_mercury__UnivCs_12, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_class_context_6_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_7,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_8,
  MR_Word parse_tree__mercury_to_mercury__ClassContext_9,
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_10)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_13;

    {
      parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__TypeVarSet_7, parse_tree__mercury_to_mercury__VarNamePrint_8, parse_tree__mercury_to_mercury__ClassContext_9, parse_tree__mercury_to_mercury__ExistQVars_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_13);
    }
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1(
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3)
{
  {
    MR_Box parse_tree__mercury_to_mercury__closure = parse_tree__mercury_to_mercury__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1), parse_tree__mercury_to_mercury__wrapper_arg_2, parse_tree__mercury_to_mercury__wrapper_arg_3);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28,
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_7,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_8,
  MR_String parse_tree__mercury_to_mercury__Operator_9,
  MR_Word parse_tree__mercury_to_mercury__Constraints_10,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    if ((parse_tree__mercury_to_mercury__Constraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14;
    else
      {
        MR_Word parse_tree__mercury_to_mercury__V_16_16;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17;
        MR_Word parse_tree__mercury_to_mercury__V_19_19;
        MR_Word parse_tree__mercury_to_mercury__V_24_24;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_25_25;
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__mercury_to_mercury__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_19_19, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__Operator_9));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_1[3])));
        }
        {
          parse_tree__mercury_to_mercury__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_16_16, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_16_16, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_19_19));
        }
        parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 6)));
        {
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28), ((MR_Box) (parse_tree__mercury_to_mercury__V_16_16)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17);
        }
        {
          parse_tree__mercury_to_mercury__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 3) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28));
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 4) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeVarSet_7));
          MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_24_24, 5) = ((MR_Box) (parse_tree__mercury_to_mercury__VarNamePrint_8));
        }
        parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 18)));
        {
          parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (parse_tree__mercury_to_mercury__Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__mercury_to_mercury__V_24_24)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_17_17, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_25_25);
        }
        parse_tree__mercury_to_mercury__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__mercury_to_mercury__func_2(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_28), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_25_25, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15);
        }
      }
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1(
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3)
{
  {
    MR_Box parse_tree__mercury_to_mercury__closure = parse_tree__mercury_to_mercury__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1), parse_tree__mercury_to_mercury__wrapper_arg_2, parse_tree__mercury_to_mercury__wrapper_arg_3);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22,
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__Constraint_8,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__Constraint_8, (MR_Integer) 0)));
    MR_Word parse_tree__mercury_to_mercury__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__Constraint_8, (MR_Integer) 1)));
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14;
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
    MR_Word parse_tree__mercury_to_mercury__V_18_18;
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__mercury_to_mercury__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 1, parse_tree__mercury_to_mercury__Name_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) "(")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
    }
    {
      parse_tree__mercury_to_mercury__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 3) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 4) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeVarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_18_18, 5) = ((MR_Box) (parse_tree__mercury_to_mercury__VarNamePrint_7));
    }
    parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 18)));
    {
      parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (parse_tree__mercury_to_mercury__Types_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__mercury_to_mercury__V_18_18)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19);
    }
    parse_tree__mercury_to_mercury__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_2(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_19_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13);
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_4,
  MR_Word parse_tree__mercury_to_mercury__Constraint_5)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__String_6;
    MR_Box parse_tree__mercury_to_mercury__conv0_String_6;

    {
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__TypeVarSet_4, (MR_Integer) 0, parse_tree__mercury_to_mercury__Constraint_5, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_6);
    }
    parse_tree__mercury_to_mercury__String_6 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_6);
    return parse_tree__mercury_to_mercury__String_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__Constraint_8)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__TypeVarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Constraint_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24,
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_5,
  MR_Word parse_tree__mercury_to_mercury__SymName_6,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    if (((MR_tag((MR_Word) parse_tree__mercury_to_mercury__SymName_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__mercury_to_mercury__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));
        MR_String parse_tree__mercury_to_mercury__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 1)));
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_18_18;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_20_20;
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__mercury_to_mercury__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) "(")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14);
        }
        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__mercury_to_mercury__ModuleName_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
        }
        parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ".")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_18_18);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0, parse_tree__mercury_to_mercury__Name_9, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_18_18, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_20_20);
        }
        parse_tree__mercury_to_mercury__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__mercury_to_mercury__func_2(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ")")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_20_20, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
      }
    else
      {
        MR_String parse_tree__mercury_to_mercury__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));

        {
          parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_24, parse_tree__mercury_to_mercury__NextToGraphicToken_5, parse_tree__mercury_to_mercury__Name_23, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
      }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_ngt_2_f_0(
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_4,
  MR_Word parse_tree__mercury_to_mercury__SymName_5)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__Str_6;
    MR_Box parse_tree__mercury_to_mercury__conv0_Str_6;

    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__NextToGraphicToken_4, parse_tree__mercury_to_mercury__SymName_5, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_Str_6);
    }
    parse_tree__mercury_to_mercury__Str_6 = ((MR_String) parse_tree__mercury_to_mercury__conv0_Str_6);
    return parse_tree__mercury_to_mercury__Str_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_5,
  MR_Word parse_tree__mercury_to_mercury__SymName_6)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9;

    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__NextToGraphicToken_5, parse_tree__mercury_to_mercury__SymName_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10,
  MR_Word parse_tree__mercury_to_mercury__SymName_4,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10, (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(
  MR_Word parse_tree__mercury_to_mercury__SymName_3)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__HeadVar__2_2;
    MR_Box parse_tree__mercury_to_mercury__conv0_HeadVar__2_2;

    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_3, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_HeadVar__2_2);
    }
    parse_tree__mercury_to_mercury__HeadVar__2_2 = ((MR_String) parse_tree__mercury_to_mercury__conv0_HeadVar__2_2);
    return parse_tree__mercury_to_mercury__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__SymName_4)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7;

    {
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__1_1,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_7,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_8)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__mercury_to_mercury__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_9_9;
    MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11_11;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13, (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_7, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_9_9);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13), ((MR_Box) (MR_Word) ((MR_Char) 47)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_9_9, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11_11);
    }
    parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_13), ((MR_Box) (parse_tree__mercury_to_mercury__Arity_5)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11_11, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_8);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20,
  MR_Word parse_tree__mercury_to_mercury__NextToGraphicToken_5,
  MR_Word parse_tree__mercury_to_mercury__SymName_6,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    if (((MR_tag((MR_Word) parse_tree__mercury_to_mercury__SymName_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__mercury_to_mercury__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));
        MR_String parse_tree__mercury_to_mercury__PredName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 1)));
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__mercury_to_mercury__ModuleName_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14);
        }
        parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20), ((MR_Box) ((MR_String) ".")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_14_14, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, (MR_Integer) 0, parse_tree__mercury_to_mercury__PredName_9, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
      }
    else
      {
        MR_String parse_tree__mercury_to_mercury__PredName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__SymName_6, (MR_Integer) 0)));

        {
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_20, parse_tree__mercury_to_mercury__NextToGraphicToken_5, parse_tree__mercury_to_mercury__PredName_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_11);
        }
      }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10,
  MR_Word parse_tree__mercury_to_mercury__SymName_4,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10, (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__SymName_4)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7;

    {
      parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], (MR_Integer) 1, parse_tree__mercury_to_mercury__SymName_4, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_7);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130,
  MR_Word parse_tree__mercury_to_mercury__NeedsBrackets_5,
  MR_Word parse_tree__mercury_to_mercury__ConsId_6,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    switch (MR_tag((MR_Word) parse_tree__mercury_to_mercury__ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<typeclass_info_cell_constructor>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<type_info_cell_constructor>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<tabling info>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<table_io_entry_desc>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<deep_profiling_proc_layout>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__mercury_to_mercury__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_Integer parse_tree__mercury_to_mercury__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
              MR_Word parse_tree__mercury_to_mercury__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 3)));

              switch (parse_tree__mercury_to_mercury__NeedsBrackets_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Name_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Name_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "{}", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__mercury_to_mercury__ShroudedPredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_Integer parse_tree__mercury_to_mercury__PredInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ShroudedPredProcId_16, (MR_Integer) 0)));
              MR_Integer parse_tree__mercury_to_mercury__ProcInt_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ShroudedPredProcId_16, (MR_Integer) 1)));
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_108_108;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_109_109;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_111_111;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_112_112;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<closure_cons(", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_108_108);
              }
              {
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__PredInt_18, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_108_108, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_109_109);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ", ", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_109_109, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_111_111);
              }
              {
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__ProcInt_19, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_111_111, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_112_112);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ")>", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_112_112, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__mercury_to_mercury__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Int_12, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float parse_tree__mercury_to_mercury__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_float_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Float_13, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char parse_tree__mercury_to_mercury__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_String parse_tree__mercury_to_mercury__V_119_119;

              {
                parse_tree__mercury_to_mercury__V_119_119 = mercury__term_io__quoted_char_1_f_0(parse_tree__mercury_to_mercury__Char_14);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_119_119, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String parse_tree__mercury_to_mercury__Str_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_quoted_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Str_15, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_116_116;
              MR_String parse_tree__mercury_to_mercury__Name_127 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "\044", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_116_116);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__Name_127, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_116_116, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word parse_tree__mercury_to_mercury__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_String parse_tree__mercury_to_mercury__Type_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
              MR_Integer parse_tree__mercury_to_mercury__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 3)));
              MR_String parse_tree__mercury_to_mercury__ModuleString_23;
              MR_String parse_tree__mercury_to_mercury__ArityString_24;
              MR_Word parse_tree__mercury_to_mercury__V_94_94;
              MR_Word parse_tree__mercury_to_mercury__V_97_97;
              MR_Word parse_tree__mercury_to_mercury__V_98_98;
              MR_Word parse_tree__mercury_to_mercury__V_100_100;
              MR_Word parse_tree__mercury_to_mercury__V_101_101;
              MR_Word parse_tree__mercury_to_mercury__V_103_103;

              {
                parse_tree__mercury_to_mercury__ModuleString_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__mercury_to_mercury__ModuleName_20);
              }
              {
                mercury__string__int_to_string_2_p_0(parse_tree__mercury_to_mercury__Arity_22, &parse_tree__mercury_to_mercury__ArityString_24);
              }
              {
                parse_tree__mercury_to_mercury__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_103_103, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__ArityString_24));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_1[2])));
              }
              {
                parse_tree__mercury_to_mercury__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_101_101, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_101_101, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_103_103));
              }
              {
                parse_tree__mercury_to_mercury__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_100_100, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__Type_21));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_100_100, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_101_101));
              }
              {
                parse_tree__mercury_to_mercury__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_98_98, 0) = ((MR_Box) ((MR_String) "."));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_98_98, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_100_100));
              }
              {
                parse_tree__mercury_to_mercury__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_97_97, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__ModuleString_23));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_97_97, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_98_98));
              }
              {
                parse_tree__mercury_to_mercury__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_94_94, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_94_94, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_97_97));
              }
              {
                parse_tree__parse_tree_out_info__add_strings_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_94_94, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word parse_tree__mercury_to_mercury__ClassId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
              MR_Integer parse_tree__mercury_to_mercury__InstanceNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 3)));
              MR_String parse_tree__mercury_to_mercury__InstanceString_27 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 4)));
              MR_Word parse_tree__mercury_to_mercury__ClassName_28;
              MR_Integer parse_tree__mercury_to_mercury__ClassArity_29;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_73_73;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_75_75;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_76_76;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_78_78;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_79_79;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83;
              MR_Word parse_tree__mercury_to_mercury__V_88_88;
              MR_Word parse_tree__mercury_to_mercury__V_90_90;
              MR_Word parse_tree__mercury_to_mercury__V_91_91;
              MR_Word parse_tree__mercury_to_mercury__V_92_92;
              MR_Word parse_tree__mercury_to_mercury__ModuleName_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_String parse_tree__mercury_to_mercury__ModuleString_129;

              {
                parse_tree__mercury_to_mercury__ModuleString_129 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__mercury_to_mercury__ModuleName_128);
              }
              parse_tree__mercury_to_mercury__ClassName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassId_25, (MR_Integer) 0)));
              parse_tree__mercury_to_mercury__ClassArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__ClassId_25, (MR_Integer) 1)));
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "<base_typeclass_info for ", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_73_73);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) "class_id(", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_73_73, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_75_75);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__ClassName_28, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_75_75, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_76_76);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ", ", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_76_76, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_78_78);
              }
              {
                parse_tree__parse_tree_out_info__add_int_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__ClassArity_29, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_78_78, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_79_79);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_79_79, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81);
              }
              parse_tree__mercury_to_mercury__succeeded = (strcmp(parse_tree__mercury_to_mercury__ModuleString_129, (MR_String) "some bogus module name") == 0);
              parse_tree__mercury_to_mercury__succeeded = !(parse_tree__mercury_to_mercury__succeeded);
              if (parse_tree__mercury_to_mercury__succeeded)
                {
                  MR_Word parse_tree__mercury_to_mercury__V_82_82;
                  MR_Word parse_tree__mercury_to_mercury__V_85_85;

                  {
                    parse_tree__mercury_to_mercury__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_85_85, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__ModuleString_129));
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__mercury_to_mercury__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_82_82, 0) = ((MR_Box) ((MR_String) " from module "));
                    MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_82_82, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_85_85));
                  }
                  {
                    parse_tree__parse_tree_out_info__add_strings_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_82_82, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83);
                  }
                }
              else
                parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_81_81;
              {
                parse_tree__mercury_to_mercury__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_90_90, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__InstanceNum_26));
              }
              {
                parse_tree__mercury_to_mercury__V_92_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__mercury_to_mercury__V_92_92, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__InstanceString_27));
              }
              {
                parse_tree__mercury_to_mercury__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_91_91, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__V_92_92));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__mercury_to_mercury__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_88_88, 0) = ((MR_Box) (parse_tree__mercury_to_mercury__V_90_90));
                MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__V_88_88, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__V_91_91));
              }
              {
                parse_tree__parse_tree_out_info__add_format_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ", instance number %d (%s)>", parse_tree__mercury_to_mercury__V_88_88, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_83_83, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer parse_tree__mercury_to_mercury__TIConstNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_String parse_tree__mercury_to_mercury__V_62_62;
              MR_String parse_tree__mercury_to_mercury__V_65_65;
              MR_String parse_tree__mercury_to_mercury__V_66_66;

              {
                parse_tree__mercury_to_mercury__V_66_66 = mercury__string__int_to_string_1_f_0(parse_tree__mercury_to_mercury__TIConstNum_31);
              }
              {
                parse_tree__mercury_to_mercury__V_65_65 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_66_66, (MR_String) ">");
              }
              {
                parse_tree__mercury_to_mercury__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", parse_tree__mercury_to_mercury__V_65_65);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_62_62, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer parse_tree__mercury_to_mercury__TCIConstNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_String parse_tree__mercury_to_mercury__V_56_56;
              MR_String parse_tree__mercury_to_mercury__V_59_59;
              MR_String parse_tree__mercury_to_mercury__V_60_60;

              {
                parse_tree__mercury_to_mercury__V_60_60 = mercury__string__int_to_string_1_f_0(parse_tree__mercury_to_mercury__TCIConstNum_32);
              }
              {
                parse_tree__mercury_to_mercury__V_59_59 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_60_60, (MR_String) ">");
              }
              {
                parse_tree__mercury_to_mercury__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", parse_tree__mercury_to_mercury__V_59_59);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_56_56, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer parse_tree__mercury_to_mercury__ConstNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 1)));
              MR_Word parse_tree__mercury_to_mercury__SubConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__mercury_to_mercury__ConsId_6, (MR_Integer) 2)));
              MR_String parse_tree__mercury_to_mercury__V_46_46;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_47_47;
              MR_String parse_tree__mercury_to_mercury__V_49_49;
              MR_String parse_tree__mercury_to_mercury__V_50_50;
              MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_53_53;

              {
                parse_tree__mercury_to_mercury__V_50_50 = mercury__string__int_to_string_1_f_0(parse_tree__mercury_to_mercury__ConstNum_33);
              }
              {
                parse_tree__mercury_to_mercury__V_49_49 = mercury__string__f_43_43_2_f_0(parse_tree__mercury_to_mercury__V_50_50, (MR_String) ", ");
              }
              {
                parse_tree__mercury_to_mercury__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", parse_tree__mercury_to_mercury__V_49_49);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, parse_tree__mercury_to_mercury__V_46_46, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_38, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_47_47);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_Integer) 1, parse_tree__mercury_to_mercury__SubConsId_34, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_47_47, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_53_53);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__mercury_to_mercury__TypeClassInfo_for_output_130, (MR_String) ">", parse_tree__mercury_to_mercury__STATE_VARIABLE_U_53_53, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_39);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0(
  MR_Word parse_tree__mercury_to_mercury__NeedsBrackets_4,
  MR_Word parse_tree__mercury_to_mercury__ConsId_5)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__String_6;
    MR_Box parse_tree__mercury_to_mercury__conv0_String_6;

    {
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__NeedsBrackets_4, parse_tree__mercury_to_mercury__ConsId_5, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_6);
    }
    parse_tree__mercury_to_mercury__String_6 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_6);
    return parse_tree__mercury_to_mercury__String_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0(
  MR_Word parse_tree__mercury_to_mercury__NeedsBrackets_5,
  MR_Word parse_tree__mercury_to_mercury__ConsId_6)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9;

    {
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__NeedsBrackets_5, parse_tree__mercury_to_mercury__ConsId_6, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1(
  MR_Box parse_tree__mercury_to_mercury__closure_arg,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_1,
  MR_Box parse_tree__mercury_to_mercury__wrapper_arg_2,
  MR_Box * parse_tree__mercury_to_mercury__wrapper_arg_3)
{
  {
    MR_Box parse_tree__mercury_to_mercury__closure = parse_tree__mercury_to_mercury__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__mercury_to_mercury__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeInfo_for_T_15,
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__StateVars_8)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__TypeInfo_20_20;
    MR_Word parse_tree__mercury_to_mercury__V_13_13;

    {
      parse_tree__mercury_to_mercury__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 3) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 4) = ((MR_Box) (parse_tree__mercury_to_mercury__VarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__V_13_13, 5) = ((MR_Box) (parse_tree__mercury_to_mercury__VarNamePrint_7));
    }
    {
      parse_tree__mercury_to_mercury__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__TypeInfo_for_T_15));
    }
    {
      mercury__io__write_list_5_p_0(parse_tree__mercury_to_mercury__TypeInfo_20_20, (MR_Word) parse_tree__mercury_to_mercury__StateVars_8, (MR_String) ", ", (MR_Word) parse_tree__mercury_to_mercury__V_13_13);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19,
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_8,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;

    if ((parse_tree__mercury_to_mercury__ExistQVars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13 = parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12;
    else
      {
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15_15;
        MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16;
        void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__mercury_to_mercury__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "some [")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15_15);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19, parse_tree__mercury_to_mercury__TypeVarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__ExistQVars_8, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_15_15, &parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16);
        }
        parse_tree__mercury_to_mercury__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__mercury_to_mercury__func_1(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "] ")), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_16_16, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13);
        }
      }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_quantifier_to_string_3_f_0(
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_5,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_6,
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_7)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__String_8;
    MR_Box parse_tree__mercury_to_mercury__conv0_String_8;

    {
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__TypeVarSet_5, parse_tree__mercury_to_mercury__VarNamePrint_6, parse_tree__mercury_to_mercury__ExistQVars_7, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_8);
    }
    parse_tree__mercury_to_mercury__String_8 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_8);
    return parse_tree__mercury_to_mercury__String_8;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__ExistQVars_8)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0((MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__TypeVarSet_6, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__ExistQVars_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10,
  MR_Word parse_tree__mercury_to_mercury__Detism_4,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__V_8_8;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__mercury_to_mercury__V_8_8 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__mercury_to_mercury__Detism_4);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_10), ((MR_Box) (parse_tree__mercury_to_mercury__V_8_8)), parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_6, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_7);
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(
  MR_Word parse_tree__mercury_to_mercury__HeadVar__1_1)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__HeadVar__2_2 = ((&parse_tree__mercury_to_mercury_vector_common_2[0 + parse_tree__mercury_to_mercury__HeadVar__1_1]))->parse_tree__mercury_to_mercury__vector_common_type_2_0__vct_2_f_0;

    return parse_tree__mercury_to_mercury__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(
  MR_Word parse_tree__mercury_to_mercury__Detism_4)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9 = (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0];
    MR_String parse_tree__mercury_to_mercury__V_14_14;
    void MR_CALL (* parse_tree__mercury_to_mercury__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_UI_7;

    {
      parse_tree__mercury_to_mercury__V_14_14 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__mercury_to_mercury__Detism_4);
    }
    parse_tree__mercury_to_mercury__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__mercury_to_mercury__func_0(((MR_Box) parse_tree__mercury_to_mercury__TypeClassInfo_for_output_9), ((MR_Box) (parse_tree__mercury_to_mercury__V_14_14)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv1_STATE_VARIABLE_UI_7);
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__TypeClassInfo_for_output_15,
  MR_Word parse_tree__mercury_to_mercury__TypeVarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__Type_8,
  MR_Box parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_17;
    MR_Word parse_tree__mercury_to_mercury__Term_10;
    MR_Word parse_tree__mercury_to_mercury__VarSet_11;

    {
      parse_tree__unparse__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_8, &parse_tree__mercury_to_mercury__Term_10);
    }
    parse_tree__mercury_to_mercury__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__mercury_to_mercury__VarSet_11 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_17, parse_tree__mercury_to_mercury__TypeVarSet_6);
    }
    {
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_17, parse_tree__mercury_to_mercury__TypeClassInfo_for_output_15, parse_tree__mercury_to_mercury__VarSet_11, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Term_10, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_0_12, parse_tree__mercury_to_mercury__STATE_VARIABLE_U_13);
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(
  MR_Word parse_tree__mercury_to_mercury__VarSet_5,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_6,
  MR_Word parse_tree__mercury_to_mercury__Type_7)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__String_8;
    MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_21;
    MR_Word parse_tree__mercury_to_mercury__Term_17;
    MR_Word parse_tree__mercury_to_mercury__VarSet_18;
    MR_Box parse_tree__mercury_to_mercury__conv0_String_8;

    {
      parse_tree__unparse__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_7, &parse_tree__mercury_to_mercury__Term_17);
    }
    parse_tree__mercury_to_mercury__TypeCtorInfo_17_21 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__mercury_to_mercury__VarSet_18 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_21, parse_tree__mercury_to_mercury__VarSet_5);
    }
    {
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_21, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__VarSet_18, parse_tree__mercury_to_mercury__VarNamePrint_6, parse_tree__mercury_to_mercury__Term_17, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String_8);
    }
    parse_tree__mercury_to_mercury__String_8 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String_8);
    return parse_tree__mercury_to_mercury__String_8;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(
  MR_Word parse_tree__mercury_to_mercury__VarSet_6,
  MR_Word parse_tree__mercury_to_mercury__VarNamePrint_7,
  MR_Word parse_tree__mercury_to_mercury__Type_8)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_24;
    MR_Word parse_tree__mercury_to_mercury__Term_20;
    MR_Word parse_tree__mercury_to_mercury__VarSet_21;
    MR_Box parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__unparse__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_8, &parse_tree__mercury_to_mercury__Term_20);
    }
    parse_tree__mercury_to_mercury__TypeCtorInfo_17_24 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__mercury_to_mercury__VarSet_21 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_24, parse_tree__mercury_to_mercury__VarSet_6);
    }
    {
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_24, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[0], parse_tree__mercury_to_mercury__VarSet_21, parse_tree__mercury_to_mercury__VarNamePrint_7, parse_tree__mercury_to_mercury__Term_20, ((MR_Box) ((MR_Integer) 0)), &parse_tree__mercury_to_mercury__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(
  MR_Word parse_tree__mercury_to_mercury__VarSet_1,
  MR_Word parse_tree__mercury_to_mercury__HeadVar__2_2)
{
  {
    MR_bool parse_tree__mercury_to_mercury__succeeded;
    MR_String parse_tree__mercury_to_mercury__HeadVar__3_3;

    if ((parse_tree__mercury_to_mercury__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__mercury_to_mercury__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word parse_tree__mercury_to_mercury__TypeCtorInfo_17_28;
        MR_Word parse_tree__mercury_to_mercury__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__mercury_to_mercury__Types_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__mercury_to_mercury__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__mercury_to_mercury__String0_9;
        MR_String parse_tree__mercury_to_mercury__String1_10;
        MR_Word parse_tree__mercury_to_mercury__Term_24;
        MR_Word parse_tree__mercury_to_mercury__VarSet_25;
        MR_Box parse_tree__mercury_to_mercury__conv0_String0_9;

        {
          parse_tree__unparse__unparse_type_2_p_0(parse_tree__mercury_to_mercury__Type_6, &parse_tree__mercury_to_mercury__Term_24);
        }
        parse_tree__mercury_to_mercury__TypeCtorInfo_17_28 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          parse_tree__mercury_to_mercury__VarSet_25 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__mercury_to_mercury__TypeCtorInfo_17_28, parse_tree__mercury_to_mercury__VarSet_1);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__mercury_to_mercury__TypeCtorInfo_17_28, (MR_Word) &parse_tree__mercury_to_mercury_scalar_common_1[1], parse_tree__mercury_to_mercury__VarSet_25, (MR_Integer) 0, parse_tree__mercury_to_mercury__Term_24, ((MR_Box) ((MR_String) "")), &parse_tree__mercury_to_mercury__conv0_String0_9);
        }
        parse_tree__mercury_to_mercury__String0_9 = ((MR_String) parse_tree__mercury_to_mercury__conv0_String0_9);
        {
          parse_tree__mercury_to_mercury__String1_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(parse_tree__mercury_to_mercury__VarSet_1, parse_tree__mercury_to_mercury__Types_7);
        }
        {
          mercury__string__append_3_p_2(parse_tree__mercury_to_mercury__String0_9, parse_tree__mercury_to_mercury__String1_10, &parse_tree__mercury_to_mercury__HeadVar__3_3);
        }
      }
    return parse_tree__mercury_to_mercury__HeadVar__3_3;
  }
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
