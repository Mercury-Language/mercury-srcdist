/*
** Automatically generated from `parse_sym_name.m'
** by the Mercury compiler,
** version 2018-10-21
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.parse_sym_name.
// :- implementation.

/*
INIT mercury__parse_tree__parse_sym_name__init
ENDINIT
*/

#include "parse_tree.parse_sym_name.mih"


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
#include "multi_map.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_1[33][2];

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_3[4][1];




static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_1[33][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match preceding"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module qualifier in definition"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in qualified symbol name."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be a non-negative integer."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: arity in symbol name specifier"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be an integer."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module name identifier"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected before"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: identifier expected after"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: symbol name expected at"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: module name expected before \'.\'"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in qualified symbol name, not"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: identifier expected after \'.\'"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: atom expected at"))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_3[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[12])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[18])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[21])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__term__pti_term_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_9_9));
    }
    parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_11_11, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
    }
    succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_10_10, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_sym_name_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_sym_name_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__parse_sym_name__root_module_name_0_f_0(void)
{
  {
    return (MR_Word) (&parse_tree__parse_sym_name_scalar_common_3[0]);
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSymNameSpecifier_6)
{
  {
    parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0((MR_Word) (&parse_tree__parse_sym_name_scalar_common_3[0]), VarSet_4, Term_5, MaybeSymNameSpecifier_6);
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(
  MR_Word DefaultModule_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeSymNameSpecifier_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word NameTerm_9;
    MR_Word ArityTerm_10;
    MR_Word Var_20;
    MR_String Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = (strcmp(Var_21, (MR_String) "/") == 0);
        if (succeeded)
        {
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
            succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArityTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
              Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
              succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Arity_12;

      succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_10, &Arity_12);
      if (succeeded)
      {
        succeeded = (Arity_12 >= (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word MaybeName_13;

          parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(DefaultModule_5, VarSet_6, NameTerm_9, &MaybeName_13);
          if (((MR_tag((MR_Word) MaybeName_13)) == (MR_Integer) 0))
            *MaybeSymNameSpecifier_8 = (MR_Word) (MaybeName_13);
          else
          {
            MR_Word Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeName_13, (MR_Integer) 0))));
            MR_Word Var_26;

            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Name_15));
              MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Arity_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSymNameSpecifier_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
            }
          }
        }
        else
        {
          MR_Word Spec_17;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_44;

          Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[31])));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_37));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSymNameSpecifier_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
          }
        }
      }
      else
      {
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_63;
        MR_Word Spec_67;

        Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[32])));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_67, 2) = ((MR_Box) (Var_56));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_67));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameSpecifier_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
        }
      }
    }
    else
    {
      MR_Word MaybeSymbolName_18;

      parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(DefaultModule_5, VarSet_6, Term_7, &MaybeSymbolName_18);
      if (((MR_tag((MR_Word) MaybeSymbolName_18)) == (MR_Integer) 0))
        *MaybeSymNameSpecifier_8 = (MR_Word) (MaybeSymbolName_18);
      else
      {
        MR_Word SymbolName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymbolName_18, (MR_Integer) 0))));
        MR_Word Var_65;

        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (SymbolName_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymNameSpecifier_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(
  MR_Word DefaultModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeSymName_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSymName0_9;

    parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7, &MaybeSymName0_9);
    if (((MR_tag((MR_Word) MaybeSymName0_9)) == (MR_Integer) 0))
      *MaybeSymName_8 = MaybeSymName0_9;
    else
    {
      MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymName0_9, (MR_Integer) 0))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_5, (MR_Word) (&parse_tree__parse_sym_name_scalar_common_3[0]));
      if (succeeded)
        *MaybeSymName_8 = MaybeSymName0_9;
      else
      {
        MR_Word ModuleName_11;

        succeeded = ((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1);
        if (succeeded)
        {
          ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_10, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName_11, DefaultModuleName_5);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Spec_14;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_40;

          Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
          {
            Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[30])));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_33));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_14));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSymName_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
          }
        }
        else
        {
          MR_String UnqualName_15;
          MR_Word Var_42;

          UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (DefaultModuleName_5));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (UnqualName_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSymName_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word DefaultModuleName_4,
  MR_Word Term_5,
  MR_Word * SymName_6)
{
  {
    MR_bool succeeded;
    MR_Word SymName0_7;
    MR_Word Var_12;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeInfo_for_T_11, Term_5, &SymName0_7);
    if (succeeded)
    {
      Var_12 = (MR_Word) (&parse_tree__parse_sym_name_scalar_common_3[0]);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_4, Var_12);
      if (succeeded)
      {
        *SymName_6 = SymName0_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ModuleName_8;

        succeeded = ((MR_tag((MR_Word) SymName0_7)) == (MR_Integer) 1);
        if (succeeded)
        {
          ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName0_7, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName_8, DefaultModuleName_4);
          succeeded = !(succeeded);
        }
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
          MR_String UnqualName_10;

          UnqualName_10 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_7);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SymName_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DefaultModuleName_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnqualName_10));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_args_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word DefaultModuleName_5,
  MR_Word Term_6,
  MR_Word * SymName_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded;
    MR_Word SymName0_9;
    MR_Word Var_14;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_13, Term_6, &SymName0_9, Args_8);
    if (succeeded)
    {
      Var_14 = (MR_Word) (&parse_tree__parse_sym_name_scalar_common_3[0]);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_5, Var_14);
      if (succeeded)
      {
        *SymName_7 = SymName0_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ModuleName_10;

        succeeded = ((MR_tag((MR_Word) SymName0_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName0_9, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName_10, DefaultModuleName_5);
          succeeded = !(succeeded);
        }
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
          MR_String UnqualName_12;

          UnqualName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SymName_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DefaultModuleName_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnqualName_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word DefaultModuleName_6,
  MR_Word Term_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeSymNameAndArgs_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSymNameAndArgs0_11;

    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_46, VarSet_8, ContextPieces_9, Term_7, &MaybeSymNameAndArgs0_11);
    if (((MR_tag((MR_Word) MaybeSymNameAndArgs0_11)) == (MR_Integer) 0))
      *MaybeSymNameAndArgs_10 = MaybeSymNameAndArgs0_11;
    else
    {
      MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs0_11, (MR_Integer) 0))));
      MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs0_11, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefaultModuleName_6, (MR_Word) (&parse_tree__parse_sym_name_scalar_common_3[0]));
      if (succeeded)
        *MaybeSymNameAndArgs_10 = MaybeSymNameAndArgs0_11;
      else
      {
        MR_Word ModuleName_14;

        succeeded = ((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1);
        if (succeeded)
        {
          ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_12, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName_14, DefaultModuleName_6);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Spec_17;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_44;

          Var_39 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_46, Term_7);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[30])));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_37));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSymNameAndArgs_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
          }
        }
        else
        {
          MR_String UnqualName_18;
          MR_Word QualSymName_19;

          UnqualName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
          {
            QualSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), QualSymName_19, 0) = ((MR_Box) (DefaultModuleName_6));
            MR_hl_field(MR_mktag(1), QualSymName_19, 1) = ((MR_Box) (UnqualName_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSymNameAndArgs_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualSymName_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_13));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Functor_5,
  MR_Word FunctorArgs_6,
  MR_Word * SymName_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
    MR_String FunctorName_9;
    MR_Word ModuleTerm_10;
    MR_Word NameArgsTerm_11;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      FunctorName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_5, (MR_Integer) 0))));
      succeeded = (strcmp(FunctorName_9, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_6, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_6, (MR_Integer) 1))));
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_String Name_12;
        MR_Word Module_14;
        MR_Word Var_17;

        succeeded = ((MR_tag((MR_Word) NameArgsTerm_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_11, (MR_Integer) 0))));
          *Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_11, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
            succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_19, ModuleTerm_10, &Module_14);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SymName_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_14));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_12));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        *SymName_7 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_9, (MR_String) "__");
        *Args_8 = FunctorArgs_6;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Term_3,
  MR_Word * SymName_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Functor_5;
    MR_Word FunctorArgs_6;
    MR_String FunctorName_8;
    MR_Word ModuleTerm_9;
    MR_Word NameArgsTerm_10;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Functor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      FunctorArgs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_5, (MR_Integer) 0))));
        succeeded = (strcmp(FunctorName_8, (MR_String) ".") == 0);
        if (succeeded)
        {
          succeeded = (FunctorArgs_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_6, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_6, (MR_Integer) 1))));
            succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameArgsTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
              Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
              succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
        {
          MR_String Name_11;
          MR_Word Module_13;
          MR_Word Var_16;
          MR_Word Var_17;

          succeeded = ((MR_tag((MR_Word) NameArgsTerm_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_10, (MR_Integer) 0))));
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_10, (MR_Integer) 1))));
            succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
                succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_19, ModuleTerm_9, &Module_13);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *SymName_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_13));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_11));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        else
        {
          MR_String Var_18;

          succeeded = (FunctorArgs_6 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_18 = (MR_String) "__";
            *SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_8, Var_18);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Term_4,
  MR_Word * SymName_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0);
    MR_Word Functor_7;
    MR_Word FunctorArgs_8;
    MR_String FunctorName_15;
    MR_Word ModuleTerm_16;
    MR_Word NameArgsTerm_17;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0))));
      FunctorArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_7, (MR_Integer) 0))));
        succeeded = (strcmp(FunctorName_15, (MR_String) ".") == 0);
        if (succeeded)
        {
          succeeded = (FunctorArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_8, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_8, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameArgsTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
        {
          MR_String Name_18;
          MR_Word Module_20;
          MR_Word Var_23;

          succeeded = ((MR_tag((MR_Word) NameArgsTerm_17)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_17, (MR_Integer) 0))));
            *Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_17, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
            if (succeeded)
            {
              Name_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
              succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_10, ModuleTerm_16, &Module_20);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SymName_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_18));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          *SymName_5 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_15, (MR_String) "__");
          *Args_6 = FunctorArgs_8;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Term_3,
  MR_Word * SymName_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word ModuleTerm_6;
    MR_Word NameTerm_7;
    MR_String FunctorName_5;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        if ((strcmp(FunctorName_5, (MR_String) ".") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(FunctorName_5, (MR_String) ":") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
            succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String Name_9;
      MR_Word Module_11;
      MR_Word Var_17;
      MR_Word Var_18;

      succeeded = ((MR_tag((MR_Word) NameTerm_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_7, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_7, (MR_Integer) 1))));
        succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
            succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_23, ModuleTerm_6, &Module_11);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SymName_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_9));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_19;
      MR_Word Var_20;
      MR_String Var_21;
      MR_String Name_22;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
        succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
            Var_21 = (MR_String) "__";
            *SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_22, Var_21);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(
  MR_Word TypeInfo_for_T_130,
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * MaybeSymNameAndArgs_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word TermContext_11;
    MR_Word ModuleTerm_12;
    MR_Word NameArgsTerm_13;
    MR_Word Functor_9;
    MR_Word FunctorArgs_10;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      Functor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      FunctorArgs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_9, (MR_Integer) 0))));
        succeeded = (strcmp(Var_27, (MR_String) ".") == 0);
        if (succeeded)
        {
          succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_10, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorArgs_10, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String Name_14;
      MR_Word Args_15;
      MR_Word Var_30;

      succeeded = ((MR_tag((MR_Word) NameArgsTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_13, (MR_Integer) 0))));
        Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
        if (succeeded)
          Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word GenericVarSet_17;
        MR_Word MaybeModule_18;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_130, VarSet_5, &GenericVarSet_17);
        parse_tree__parse_sym_name__parse_symbol_name_3_p_0(TypeInfo_for_T_130, GenericVarSet_17, ModuleTerm_12, &MaybeModule_18);
        if (((MR_tag((MR_Word) MaybeModule_18)) == (MR_Integer) 0))
        {
          MR_String ModuleTermStr_21;
          MR_Word Pieces_22;
          MR_Word Spec_23;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_56;

          ModuleTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_130, GenericVarSet_17, ModuleTerm_12);
          Var_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ModuleTermStr_21));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
          }
          Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_32);
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Pieces_22));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (TermContext_11));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_50));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_23));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSymNameAndArgs_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
          }
        }
        else
        {
          MR_Word Module_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModule_18, (MR_Integer) 0))));
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Module_19));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Name_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSymNameAndArgs_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_15));
          }
        }
      }
      else
      {
        MR_String TermStr_24;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word GenericVarSet_113;
        MR_Word Pieces_114;
        MR_Word Spec_115;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_130, VarSet_5, &GenericVarSet_113);
        TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_130, GenericVarSet_113, Term_7);
        Var_59 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (TermStr_24));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[27])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[28])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
        }
        Pieces_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_59, Var_60);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Pieces_114));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_115, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_115, 2) = ((MR_Box) (Var_78));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Spec_115));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
        }
      }
    }
    else
    {
      MR_Word GenericVarSet_126;
      MR_String Name_119;
      MR_Word Args_120;
      MR_Word Var_86;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_130, VarSet_5, &GenericVarSet_126);
      succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
        Args_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 0);
        if (succeeded)
          Name_119 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word SymName_26;

        SymName_26 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_119, (MR_String) "__");
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_120));
        }
      }
      else
      {
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_91;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_111;
        MR_Word Pieces_116;
        MR_Word Spec_117;
        MR_String TermStr_118;

        TermStr_118 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_130, GenericVarSet_126, Term_7);
        Var_88 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (TermStr_118));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[29])));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
        }
        Pieces_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_88, Var_89);
        Var_106 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_130, Term_7);
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Pieces_116));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (Var_107));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_117 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_117, 2) = ((MR_Box) (Var_104));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_117));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_symbol_name_3_p_0(
  MR_Word TypeInfo_for_T_102,
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSymName_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_String FunctorName_7;
    MR_Word ModuleTerm_8;
    MR_Word NameTerm_9;
    MR_Word TermContext_10;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      TermContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        if ((strcmp(FunctorName_7, (MR_String) ".") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(FunctorName_7, (MR_String) ":") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
            succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
              Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
              succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String Name_11;
      MR_Word Var_25;
      MR_Word Var_26;

      succeeded = ((MR_tag((MR_Word) NameTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_9, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_9, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
          if (succeeded)
            Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word MaybeModule_13;

        parse_tree__parse_sym_name__parse_symbol_name_3_p_0(TypeInfo_for_T_102, VarSet_4, ModuleTerm_8, &MaybeModule_13);
        if (((MR_tag((MR_Word) MaybeModule_13)) == (MR_Integer) 0))
        {
          MR_Word Pieces_16;
          MR_Word Spec_17;
          MR_Word Var_29;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_48;

          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (FunctorName_7));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[14])));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[23])));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
          }
          {
            Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[22])));
            MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_29));
          }
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Pieces_16));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (TermContext_10));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_42));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSymName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
          }
        }
        else
        {
          MR_Word Module_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModule_13, (MR_Integer) 0))));
          MR_Word Var_50;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Module_14));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Name_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSymName_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_50));
          }
        }
      }
      else
      {
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Pieces_95;
        MR_Word Spec_96;

        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (FunctorName_7));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[14])));
        }
        {
          Pieces_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[24])));
          MR_hl_field(MR_mktag(1), Pieces_95, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Pieces_95));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (TermContext_10));
          MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_96, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_96, 2) = ((MR_Box) (Var_63));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Spec_96));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymName_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
        }
      }
    }
    else
    {
      MR_String Name_99;
      MR_Word Var_71;
      MR_Word Var_72;

      succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
        succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
          if (succeeded)
            Name_99 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word SymName_19;

        SymName_19 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_99, (MR_String) "__");
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymName_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_19));
        }
      }
      else
      {
        MR_String TermStr_20;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_93;
        MR_Word Pieces_97;
        MR_Word Spec_98;

        TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_102, VarSet_4, Term_5);
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (TermStr_20));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
        }
        {
          Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[25])));
          MR_hl_field(MR_mktag(1), Pieces_97, 1) = ((MR_Box) (Var_76));
        }
        Var_88 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_102, Term_5);
        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Pieces_97));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_98, 2) = ((MR_Box) (Var_86));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Spec_98));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymName_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name____Unify____maybe_functor_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_sym_name____Compare____maybe_functor_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name____Unify____maybe_functor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_sym_name____Compare____maybe_functor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_sym_name__init(void)
{
}

void mercury__parse_tree__parse_sym_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_1);
	MR_register_type_ctor_info(&parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_0);
}

void mercury__parse_tree__parse_sym_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_sym_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_sym_name.
