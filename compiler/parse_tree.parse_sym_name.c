/*
** Automatically generated from `parse_sym_name.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module parse_tree.parse_sym_name. */
/* :- implementation. */

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
  MR_Box parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_2,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001(
  MR_Box parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_sym_name__wrapper_arg_2,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_3,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001(
  MR_Box parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001(
  MR_Box * parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_2,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match preceding"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualifier in definition"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in qualified symbol name."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be a non-negative integer."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[2])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arity in symbol name specifier"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module name expected before \'.\'"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in qualified symbol name, not"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: identifier expected after \'.\'"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: atom expected at"))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module name identifier"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected before"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: identifier expected after"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: symbol name expected at"))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_sym_name__term__pti_term_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001(
  MR_Box parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_2,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;

    {
      parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name____Unify____maybe_functor_1_0(((MR_Word) parse_tree__parse_sym_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_3));
    }
    return parse_tree__parse_sym_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001(
  MR_Box parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_sym_name__wrapper_arg_2,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_3,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_sym_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_sym_name____Compare____maybe_functor_1_0(((MR_Word) parse_tree__parse_sym_name__wrapper_arg_1), &parse_tree__parse_sym_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_4));
    }
    *parse_tree__parse_sym_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_sym_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001(
  MR_Box parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;

    {
      parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name____Unify____maybe_functor_0_0(((MR_Word) parse_tree__parse_sym_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_2));
    }
    return parse_tree__parse_sym_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001(
  MR_Box * parse_tree__parse_sym_name__wrapper_arg_1,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_2,
  MR_Box parse_tree__parse_sym_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_sym_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_sym_name____Compare____maybe_functor_0_0(&parse_tree__parse_sym_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_sym_name__wrapper_arg_3));
    }
    *parse_tree__parse_sym_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_sym_name__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_6,
  MR_Word * parse_tree__parse_sym_name__HeadVar__1_1,
  MR_Word parse_tree__parse_sym_name__HeadVar__2_2,
  MR_Word parse_tree__parse_sym_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__TypeInfo_9_9;
    MR_Word parse_tree__parse_sym_name__TypeInfo_11_11;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar1_4 = parse_tree__parse_sym_name__HeadVar__2_2;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar2_5 = parse_tree__parse_sym_name__HeadVar__3_3;

    {
      parse_tree__parse_sym_name__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__parse_sym_name__TypeInfo_for_T_6));
    }
    {
      parse_tree__parse_sym_name__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__parse_sym_name__TypeInfo_9_9));
    }
    {
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__parse_sym_name__TypeInfo_11_11, parse_tree__parse_sym_name__HeadVar__1_1, parse_tree__parse_sym_name__Cast_HeadVar1_4, parse_tree__parse_sym_name__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_5,
  MR_Word parse_tree__parse_sym_name__HeadVar__1_1,
  MR_Word parse_tree__parse_sym_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__TypeInfo_8_8;
    MR_Word parse_tree__parse_sym_name__TypeInfo_10_10;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar1_3 = parse_tree__parse_sym_name__HeadVar__1_1;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar2_4 = parse_tree__parse_sym_name__HeadVar__2_2;

    {
      parse_tree__parse_sym_name__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__parse_sym_name__TypeInfo_for_T_5));
    }
    {
      parse_tree__parse_sym_name__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__parse_sym_name__TypeInfo_8_8));
    }
    {
      parse_tree__parse_sym_name__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__parse_sym_name__TypeInfo_10_10, parse_tree__parse_sym_name__Cast_HeadVar1_3, parse_tree__parse_sym_name__Cast_HeadVar2_4);
    }
    return parse_tree__parse_sym_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0(
  MR_Word * parse_tree__parse_sym_name__HeadVar__1_1,
  MR_Word parse_tree__parse_sym_name__HeadVar__2_2,
  MR_Word parse_tree__parse_sym_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar1_4 = parse_tree__parse_sym_name__HeadVar__2_2;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar2_5 = parse_tree__parse_sym_name__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_sym_name_scalar_common_2[0], parse_tree__parse_sym_name__HeadVar__1_1, ((MR_Box) (parse_tree__parse_sym_name__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__parse_sym_name__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0(
  MR_Word parse_tree__parse_sym_name__HeadVar__1_1,
  MR_Word parse_tree__parse_sym_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar1_3 = parse_tree__parse_sym_name__HeadVar__1_1;
    MR_Word parse_tree__parse_sym_name__Cast_HeadVar2_4 = parse_tree__parse_sym_name__HeadVar__2_2;

    {
      parse_tree__parse_sym_name__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_sym_name_scalar_common_2[0], ((MR_Box) (parse_tree__parse_sym_name__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__parse_sym_name__Cast_HeadVar2_4)));
    }
    return parse_tree__parse_sym_name__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__parse_sym_name__root_module_name_0_f_0(void)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;

    return (MR_Word) &parse_tree__parse_sym_name_scalar_common_3[0];
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(
  MR_Word parse_tree__parse_sym_name__DefaultModule_5,
  MR_Word parse_tree__parse_sym_name__VarSet_6,
  MR_Word parse_tree__parse_sym_name__Term_7,
  MR_Word * parse_tree__parse_sym_name__MaybeSymNameSpecifier_8)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_sym_name__NameTerm_9;
    MR_Word parse_tree__parse_sym_name__ArityTerm_10;
    MR_Word parse_tree__parse_sym_name__V_21_21;
    MR_String parse_tree__parse_sym_name__V_22_22;
    MR_Word parse_tree__parse_sym_name__V_23_23;
    MR_Word parse_tree__parse_sym_name__V_24_24;
    MR_Word parse_tree__parse_sym_name__V_25_25;
    MR_Word parse_tree__parse_sym_name__V_11_11;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 0)));
        parse_tree__parse_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 1)));
        parse_tree__parse_sym_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 2)));
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_21_21, (MR_Integer) 0)));
            parse_tree__parse_sym_name__succeeded = (strcmp(parse_tree__parse_sym_name__V_22_22, (MR_String) "/") == 0);
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_23_23, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_23_23, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_24_24, (MR_Integer) 0)));
                        parse_tree__parse_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_24_24, (MR_Integer) 1)));
                        parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_sym_name__succeeded)
      {
        MR_Integer parse_tree__parse_sym_name__Arity_12;
        MR_Word parse_tree__parse_sym_name__V_26_26;
        MR_Word parse_tree__parse_sym_name__V_27_27;
        MR_Word parse_tree__parse_sym_name__V_13_13;

        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__ArityTerm_10, (MR_Integer) 0)));
            parse_tree__parse_sym_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__ArityTerm_10, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__ArityTerm_10, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  parse_tree__parse_sym_name__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_26_26, (MR_Integer) 0)));
              }
          }
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__Arity_12 >= (MR_Integer) 0);
            if (parse_tree__parse_sym_name__succeeded)
              {
                MR_Word parse_tree__parse_sym_name__MaybeName_14;

                {
                  parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__parse_sym_name__DefaultModule_5, parse_tree__parse_sym_name__VarSet_6, parse_tree__parse_sym_name__NameTerm_9, &parse_tree__parse_sym_name__MaybeName_14);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_sym_name__MaybeName_14)) == (MR_mktag((MR_Integer) 0))))
                  *parse_tree__parse_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__parse_sym_name__MaybeName_14;
                else
                  {
                    MR_Word parse_tree__parse_sym_name__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeName_14, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_sym_name__V_29_29;

                    {
                      parse_tree__parse_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_29_29, 0) = ((MR_Box) (parse_tree__parse_sym_name__Name_16));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__parse_sym_name__Arity_12));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_sym_name__MaybeSymNameSpecifier_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_29_29));
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_sym_name__Spec_18;
                MR_Word parse_tree__parse_sym_name__V_40_40;
                MR_Word parse_tree__parse_sym_name__V_41_41;
                MR_Word parse_tree__parse_sym_name__V_42_42;
                MR_Word parse_tree__parse_sym_name__V_47_47;

                {
                  parse_tree__parse_sym_name__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_sym_name__Term_7);
                }
                {
                  parse_tree__parse_sym_name__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_41_41, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_42_42));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[31])));
                }
                {
                  parse_tree__parse_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_41_41));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_18, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_40_40));
                }
                {
                  parse_tree__parse_sym_name__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_47_47, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_18));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_sym_name__MaybeSymNameSpecifier_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_47_47));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_sym_name__V_59_59;
            MR_Word parse_tree__parse_sym_name__V_60_60;
            MR_Word parse_tree__parse_sym_name__V_61_61;
            MR_Word parse_tree__parse_sym_name__V_66_66;
            MR_Word parse_tree__parse_sym_name__Spec_70;

            {
              parse_tree__parse_sym_name__V_61_61 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_sym_name__Term_7);
            }
            {
              parse_tree__parse_sym_name__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_60_60, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_61_61));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[32])));
            }
            {
              parse_tree__parse_sym_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_59_59, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_60_60));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_70, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_59_59));
            }
            {
              parse_tree__parse_sym_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_70));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_sym_name__MaybeSymNameSpecifier_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_66_66));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_sym_name__MaybeSymbolName_19;

        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__parse_sym_name__DefaultModule_5, parse_tree__parse_sym_name__VarSet_6, parse_tree__parse_sym_name__Term_7, &parse_tree__parse_sym_name__MaybeSymbolName_19);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_sym_name__MaybeSymbolName_19)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__parse_sym_name__MaybeSymbolName_19;
        else
          {
            MR_Word parse_tree__parse_sym_name__SymbolName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeSymbolName_19, (MR_Integer) 0)));
            MR_Word parse_tree__parse_sym_name__V_68_68;

            {
              parse_tree__parse_sym_name__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_68_68, 0) = ((MR_Box) (parse_tree__parse_sym_name__SymbolName_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_sym_name__MaybeSymNameSpecifier_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_68_68));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(
  MR_Word parse_tree__parse_sym_name__DefaultModuleName_5,
  MR_Word parse_tree__parse_sym_name__VarSet_6,
  MR_Word parse_tree__parse_sym_name__Term_7,
  MR_Word * parse_tree__parse_sym_name__MaybeSymName_8)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_sym_name__MaybeSymName0_9;

    {
      parse_tree__parse_sym_name__parse_symbol_name_3_p_0(parse_tree__parse_sym_name__TypeCtorInfo_43_43, parse_tree__parse_sym_name__VarSet_6, parse_tree__parse_sym_name__Term_7, &parse_tree__parse_sym_name__MaybeSymName0_9);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_sym_name__MaybeSymName0_9)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_sym_name__MaybeSymName_8 = parse_tree__parse_sym_name__MaybeSymName0_9;
    else
      {
        MR_Word parse_tree__parse_sym_name__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeSymName0_9, (MR_Integer) 0)));

        {
          parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_sym_name__DefaultModuleName_5, (MR_Word) &parse_tree__parse_sym_name_scalar_common_3[0]);
        }
        if (parse_tree__parse_sym_name__succeeded)
          *parse_tree__parse_sym_name__MaybeSymName_8 = parse_tree__parse_sym_name__MaybeSymName0_9;
        else
          {
            MR_Word parse_tree__parse_sym_name__ModuleName_11;
            MR_String parse_tree__parse_sym_name__V_12_12;

            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__SymName_10)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName_10, (MR_Integer) 0)));
                parse_tree__parse_sym_name__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName_10, (MR_Integer) 1)));
                {
                  parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__parse_sym_name__ModuleName_11, parse_tree__parse_sym_name__DefaultModuleName_5);
                }
                parse_tree__parse_sym_name__succeeded = !(parse_tree__parse_sym_name__succeeded);
              }
            if (parse_tree__parse_sym_name__succeeded)
              {
                MR_Word parse_tree__parse_sym_name__Spec_14;
                MR_Word parse_tree__parse_sym_name__V_33_33;
                MR_Word parse_tree__parse_sym_name__V_34_34;
                MR_Word parse_tree__parse_sym_name__V_35_35;
                MR_Word parse_tree__parse_sym_name__V_40_40;

                {
                  parse_tree__parse_sym_name__V_35_35 = mercury__term__get_term_context_1_f_0(parse_tree__parse_sym_name__TypeCtorInfo_43_43, parse_tree__parse_sym_name__Term_7);
                }
                {
                  parse_tree__parse_sym_name__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_34_34, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_35_35));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[26])));
                }
                {
                  parse_tree__parse_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_33_33, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_34_34));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_14, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_33_33));
                }
                {
                  parse_tree__parse_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_14));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_sym_name__MaybeSymName_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_40_40));
                }
              }
            else
              {
                MR_String parse_tree__parse_sym_name__UnqualName_15;
                MR_Word parse_tree__parse_sym_name__V_42_42;

                {
                  parse_tree__parse_sym_name__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_sym_name__SymName_10);
                }
                {
                  parse_tree__parse_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__parse_sym_name__DefaultModuleName_5));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_42_42, 1) = ((MR_Box) (parse_tree__parse_sym_name__UnqualName_15));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_sym_name__MaybeSymName_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_42_42));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_23,
  MR_Word parse_tree__parse_sym_name__Term_3,
  MR_Word * parse_tree__parse_sym_name__SymName_4)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_sym_name__ModuleTerm_6;
    MR_Word parse_tree__parse_sym_name__NameTerm_7;
    MR_String parse_tree__parse_sym_name__FunctorName_5;
    MR_Word parse_tree__parse_sym_name__V_13_13;
    MR_Word parse_tree__parse_sym_name__V_14_14;
    MR_Word parse_tree__parse_sym_name__V_15_15;
    MR_Word parse_tree__parse_sym_name__V_16_16;
    MR_Word parse_tree__parse_sym_name___TermContext_8;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 0)));
        parse_tree__parse_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 1)));
        parse_tree__parse_sym_name___TermContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 2)));
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__FunctorName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_13_13, (MR_Integer) 0)));
            if ((strcmp(parse_tree__parse_sym_name__FunctorName_5, (MR_String) ".") == 0))
              parse_tree__parse_sym_name__succeeded = MR_TRUE;
            else
            if ((strcmp(parse_tree__parse_sym_name__FunctorName_5, (MR_String) ":") == 0))
              parse_tree__parse_sym_name__succeeded = MR_TRUE;
            else
              parse_tree__parse_sym_name__succeeded = MR_FALSE;
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__ModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_14_14, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_14_14, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__NameTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_15_15, (MR_Integer) 0)));
                        parse_tree__parse_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_15_15, (MR_Integer) 1)));
                        parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_sym_name__succeeded)
      {
        MR_String parse_tree__parse_sym_name__Name_9;
        MR_Word parse_tree__parse_sym_name__Module_11;
        MR_Word parse_tree__parse_sym_name__V_17_17;
        MR_Word parse_tree__parse_sym_name__V_18_18;
        MR_Word parse_tree__parse_sym_name__V_10_10;

        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__NameTerm_7)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameTerm_7, (MR_Integer) 0)));
            parse_tree__parse_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameTerm_7, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameTerm_7, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_17_17, (MR_Integer) 0)));
                    {
                      parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_23, parse_tree__parse_sym_name__ModuleTerm_6, &parse_tree__parse_sym_name__Module_11);
                    }
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_sym_name__SymName_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__Module_11));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Name_9));
                        }
                        parse_tree__parse_sym_name__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_sym_name__V_19_19;
        MR_Word parse_tree__parse_sym_name__V_20_20;
        MR_String parse_tree__parse_sym_name__V_21_21;
        MR_String parse_tree__parse_sym_name__Name_22;
        MR_Word parse_tree__parse_sym_name__V_12_12;

        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 0)));
            parse_tree__parse_sym_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_19_19)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_19_19, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_21_21 = (MR_String) "__";
                    {
                      *parse_tree__parse_sym_name__SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__parse_sym_name__Name_22, parse_tree__parse_sym_name__V_21_21);
                    }
                    parse_tree__parse_sym_name__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return parse_tree__parse_sym_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_symbol_name_3_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_102,
  MR_Word parse_tree__parse_sym_name__VarSet_4,
  MR_Word parse_tree__parse_sym_name__Term_5,
  MR_Word * parse_tree__parse_sym_name__MaybeSymName_6)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_sym_name__FunctorName_7;
    MR_Word parse_tree__parse_sym_name__ModuleTerm_8;
    MR_Word parse_tree__parse_sym_name__NameTerm_9;
    MR_Word parse_tree__parse_sym_name__TermContext_10;
    MR_Word parse_tree__parse_sym_name__V_21_21;
    MR_Word parse_tree__parse_sym_name__V_22_22;
    MR_Word parse_tree__parse_sym_name__V_23_23;
    MR_Word parse_tree__parse_sym_name__V_24_24;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_5, (MR_Integer) 0)));
        parse_tree__parse_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_5, (MR_Integer) 1)));
        parse_tree__parse_sym_name__TermContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_5, (MR_Integer) 2)));
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__FunctorName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_21_21, (MR_Integer) 0)));
            if ((strcmp(parse_tree__parse_sym_name__FunctorName_7, (MR_String) ".") == 0))
              parse_tree__parse_sym_name__succeeded = MR_TRUE;
            else
            if ((strcmp(parse_tree__parse_sym_name__FunctorName_7, (MR_String) ":") == 0))
              parse_tree__parse_sym_name__succeeded = MR_TRUE;
            else
              parse_tree__parse_sym_name__succeeded = MR_FALSE;
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_22_22)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__ModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_22_22, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_22_22, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_23_23, (MR_Integer) 0)));
                        parse_tree__parse_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_23_23, (MR_Integer) 1)));
                        parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_sym_name__succeeded)
      {
        MR_String parse_tree__parse_sym_name__Name_11;
        MR_Word parse_tree__parse_sym_name__V_25_25;
        MR_Word parse_tree__parse_sym_name__V_26_26;
        MR_Word parse_tree__parse_sym_name__V_12_12;

        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__NameTerm_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameTerm_9, (MR_Integer) 0)));
            parse_tree__parse_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameTerm_9, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameTerm_9, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_25_25)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  parse_tree__parse_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_25_25, (MR_Integer) 0)));
              }
          }
        if (parse_tree__parse_sym_name__succeeded)
          {
            MR_Word parse_tree__parse_sym_name__MaybeModule_13;

            {
              parse_tree__parse_sym_name__parse_symbol_name_3_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_102, parse_tree__parse_sym_name__VarSet_4, parse_tree__parse_sym_name__ModuleTerm_8, &parse_tree__parse_sym_name__MaybeModule_13);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_sym_name__MaybeModule_13)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_sym_name__Pieces_16;
                MR_Word parse_tree__parse_sym_name__Spec_17;
                MR_Word parse_tree__parse_sym_name__V_29_29;
                MR_Word parse_tree__parse_sym_name__V_32_32;
                MR_Word parse_tree__parse_sym_name__V_33_33;
                MR_Word parse_tree__parse_sym_name__V_42_42;
                MR_Word parse_tree__parse_sym_name__V_43_43;
                MR_Word parse_tree__parse_sym_name__V_44_44;
                MR_Word parse_tree__parse_sym_name__V_45_45;
                MR_Word parse_tree__parse_sym_name__V_48_48;

                {
                  parse_tree__parse_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_33_33, 1) = ((MR_Box) (parse_tree__parse_sym_name__FunctorName_7));
                }
                {
                  parse_tree__parse_sym_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_32_32, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_33_33));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[14])));
                }
                {
                  parse_tree__parse_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[28])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_32_32));
                }
                {
                  parse_tree__parse_sym_name__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__Pieces_16, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_29_29));
                }
                {
                  parse_tree__parse_sym_name__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_45_45, 0) = ((MR_Box) (parse_tree__parse_sym_name__Pieces_16));
                }
                {
                  parse_tree__parse_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_45_45));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_sym_name__TermContext_10));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_43_43, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_44_44));
                }
                {
                  parse_tree__parse_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_43_43));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_42_42));
                }
                {
                  parse_tree__parse_sym_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_48_48, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_17));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_sym_name__MaybeSymName_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_48_48));
                }
              }
            else
              {
                MR_Word parse_tree__parse_sym_name__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeModule_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_sym_name__V_50_50;

                {
                  parse_tree__parse_sym_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__parse_sym_name__Module_14));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_50_50, 1) = ((MR_Box) (parse_tree__parse_sym_name__Name_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_sym_name__MaybeSymName_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_50_50));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_sym_name__V_53_53;
            MR_Word parse_tree__parse_sym_name__V_54_54;
            MR_Word parse_tree__parse_sym_name__V_63_63;
            MR_Word parse_tree__parse_sym_name__V_64_64;
            MR_Word parse_tree__parse_sym_name__V_65_65;
            MR_Word parse_tree__parse_sym_name__V_66_66;
            MR_Word parse_tree__parse_sym_name__V_69_69;
            MR_Word parse_tree__parse_sym_name__Pieces_95;
            MR_Word parse_tree__parse_sym_name__Spec_96;

            {
              parse_tree__parse_sym_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_54_54, 1) = ((MR_Box) (parse_tree__parse_sym_name__FunctorName_7));
            }
            {
              parse_tree__parse_sym_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_53_53, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_54_54));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[14])));
            }
            {
              parse_tree__parse_sym_name__Pieces_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__Pieces_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[29])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__Pieces_95, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_53_53));
            }
            {
              parse_tree__parse_sym_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__parse_sym_name__Pieces_95));
            }
            {
              parse_tree__parse_sym_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_65_65, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_66_66));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_64_64, 0) = ((MR_Box) (parse_tree__parse_sym_name__TermContext_10));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_64_64, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_65_65));
            }
            {
              parse_tree__parse_sym_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_63_63, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_64_64));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__Spec_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_96, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_63_63));
            }
            {
              parse_tree__parse_sym_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_69_69, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_96));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_sym_name__MaybeSymName_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_69_69));
            }
          }
      }
    else
      {
        MR_String parse_tree__parse_sym_name__Name_99;
        MR_Word parse_tree__parse_sym_name__V_71_71;
        MR_Word parse_tree__parse_sym_name__V_72_72;
        MR_Word parse_tree__parse_sym_name__V_18_18;

        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_5, (MR_Integer) 0)));
            parse_tree__parse_sym_name__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_5, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_5, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_71_71)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  parse_tree__parse_sym_name__Name_99 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_71_71, (MR_Integer) 0)));
              }
          }
        if (parse_tree__parse_sym_name__succeeded)
          {
            MR_Word parse_tree__parse_sym_name__SymName_19;

            {
              parse_tree__parse_sym_name__SymName_19 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__parse_sym_name__Name_99, (MR_String) "__");
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_sym_name__MaybeSymName_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__SymName_19));
            }
          }
        else
          {
            MR_String parse_tree__parse_sym_name__TermStr_20;
            MR_Word parse_tree__parse_sym_name__V_76_76;
            MR_Word parse_tree__parse_sym_name__V_77_77;
            MR_Word parse_tree__parse_sym_name__V_86_86;
            MR_Word parse_tree__parse_sym_name__V_87_87;
            MR_Word parse_tree__parse_sym_name__V_88_88;
            MR_Word parse_tree__parse_sym_name__V_89_89;
            MR_Word parse_tree__parse_sym_name__V_90_90;
            MR_Word parse_tree__parse_sym_name__V_93_93;
            MR_Word parse_tree__parse_sym_name__Pieces_97;
            MR_Word parse_tree__parse_sym_name__Spec_98;

            {
              parse_tree__parse_sym_name__TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_102, parse_tree__parse_sym_name__VarSet_4, parse_tree__parse_sym_name__Term_5);
            }
            {
              parse_tree__parse_sym_name__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_77_77, 1) = ((MR_Box) (parse_tree__parse_sym_name__TermStr_20));
            }
            {
              parse_tree__parse_sym_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_76_76, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_77_77));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
            }
            {
              parse_tree__parse_sym_name__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[30])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__Pieces_97, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_76_76));
            }
            {
              parse_tree__parse_sym_name__V_88_88 = mercury__term__get_term_context_1_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_102, parse_tree__parse_sym_name__Term_5);
            }
            {
              parse_tree__parse_sym_name__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_90_90, 0) = ((MR_Box) (parse_tree__parse_sym_name__Pieces_97));
            }
            {
              parse_tree__parse_sym_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_89_89, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_90_90));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_87_87, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_88_88));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_87_87, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_89_89));
            }
            {
              parse_tree__parse_sym_name__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_86_86, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_87_87));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__Spec_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_98, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_86_86));
            }
            {
              parse_tree__parse_sym_name__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_93_93, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_98));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_sym_name__MaybeSymName_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_93_93));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(
  MR_Word parse_tree__parse_sym_name__VarSet_4,
  MR_Word parse_tree__parse_sym_name__Term_5,
  MR_Word * parse_tree__parse_sym_name__MaybeSymNameSpecifier_6)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;

    {
      parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0((MR_Word) &parse_tree__parse_sym_name_scalar_common_3[0], parse_tree__parse_sym_name__VarSet_4, parse_tree__parse_sym_name__Term_5, parse_tree__parse_sym_name__MaybeSymNameSpecifier_6);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_sym_name__DefaultModuleName_4,
  MR_Word parse_tree__parse_sym_name__Term_5,
  MR_Word * parse_tree__parse_sym_name__SymName_6)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__SymName0_7;
    MR_Word parse_tree__parse_sym_name__V_12_12;
    MR_String parse_tree__parse_sym_name__V_14_14;

    {
      parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_11, parse_tree__parse_sym_name__Term_5, &parse_tree__parse_sym_name__SymName0_7);
    }
    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__V_14_14 = (MR_String) "";
        parse_tree__parse_sym_name__V_12_12 = (MR_Word) &parse_tree__parse_sym_name_scalar_common_3[0];
        {
          parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_sym_name__DefaultModuleName_4, parse_tree__parse_sym_name__V_12_12);
        }
        if (parse_tree__parse_sym_name__succeeded)
          {
            *parse_tree__parse_sym_name__SymName_6 = parse_tree__parse_sym_name__SymName0_7;
            parse_tree__parse_sym_name__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word parse_tree__parse_sym_name__ModuleName_8;
            MR_String parse_tree__parse_sym_name__V_9_9;

            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__SymName0_7)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName0_7, (MR_Integer) 0)));
                parse_tree__parse_sym_name__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName0_7, (MR_Integer) 1)));
                {
                  parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__parse_sym_name__ModuleName_8, parse_tree__parse_sym_name__DefaultModuleName_4);
                }
                parse_tree__parse_sym_name__succeeded = !(parse_tree__parse_sym_name__succeeded);
              }
            if (parse_tree__parse_sym_name__succeeded)
              parse_tree__parse_sym_name__succeeded = MR_FALSE;
            else
              {
                MR_String parse_tree__parse_sym_name__UnqualName_10;

                {
                  parse_tree__parse_sym_name__UnqualName_10 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_sym_name__SymName0_7);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_sym_name__SymName_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__DefaultModuleName_4));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__UnqualName_10));
                }
                parse_tree__parse_sym_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__parse_sym_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_args_4_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_13,
  MR_Word parse_tree__parse_sym_name__DefaultModuleName_5,
  MR_Word parse_tree__parse_sym_name__Term_6,
  MR_Word * parse_tree__parse_sym_name__SymName_7,
  MR_Word * parse_tree__parse_sym_name__Args_8)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__SymName0_9;
    MR_Word parse_tree__parse_sym_name__V_14_14;
    MR_String parse_tree__parse_sym_name__V_16_16;

    {
      parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_13, parse_tree__parse_sym_name__Term_6, &parse_tree__parse_sym_name__SymName0_9, parse_tree__parse_sym_name__Args_8);
    }
    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__V_16_16 = (MR_String) "";
        parse_tree__parse_sym_name__V_14_14 = (MR_Word) &parse_tree__parse_sym_name_scalar_common_3[0];
        {
          parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_sym_name__DefaultModuleName_5, parse_tree__parse_sym_name__V_14_14);
        }
        if (parse_tree__parse_sym_name__succeeded)
          {
            *parse_tree__parse_sym_name__SymName_7 = parse_tree__parse_sym_name__SymName0_9;
            parse_tree__parse_sym_name__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word parse_tree__parse_sym_name__ModuleName_10;
            MR_String parse_tree__parse_sym_name__V_11_11;

            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__SymName0_9)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName0_9, (MR_Integer) 0)));
                parse_tree__parse_sym_name__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName0_9, (MR_Integer) 1)));
                {
                  parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__parse_sym_name__ModuleName_10, parse_tree__parse_sym_name__DefaultModuleName_5);
                }
                parse_tree__parse_sym_name__succeeded = !(parse_tree__parse_sym_name__succeeded);
              }
            if (parse_tree__parse_sym_name__succeeded)
              parse_tree__parse_sym_name__succeeded = MR_FALSE;
            else
              {
                MR_String parse_tree__parse_sym_name__UnqualName_12;

                {
                  parse_tree__parse_sym_name__UnqualName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_sym_name__SymName0_9);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_sym_name__SymName_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__DefaultModuleName_5));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__UnqualName_12));
                }
                parse_tree__parse_sym_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__parse_sym_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_46,
  MR_Word parse_tree__parse_sym_name__DefaultModuleName_6,
  MR_Word parse_tree__parse_sym_name__Term_7,
  MR_Word parse_tree__parse_sym_name__VarSet_8,
  MR_Word parse_tree__parse_sym_name__ContextPieces_9,
  MR_Word * parse_tree__parse_sym_name__MaybeSymNameAndArgs_10)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded;
    MR_Word parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11;

    {
      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_46, parse_tree__parse_sym_name__VarSet_8, parse_tree__parse_sym_name__ContextPieces_9, parse_tree__parse_sym_name__Term_7, &parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_sym_name__MaybeSymNameAndArgs_10 = parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11;
    else
      {
        MR_Word parse_tree__parse_sym_name__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 0)));
        MR_Word parse_tree__parse_sym_name__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 1)));

        {
          parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_sym_name__DefaultModuleName_6, (MR_Word) &parse_tree__parse_sym_name_scalar_common_3[0]);
        }
        if (parse_tree__parse_sym_name__succeeded)
          *parse_tree__parse_sym_name__MaybeSymNameAndArgs_10 = parse_tree__parse_sym_name__MaybeSymNameAndArgs0_11;
        else
          {
            MR_Word parse_tree__parse_sym_name__ModuleName_14;
            MR_String parse_tree__parse_sym_name__V_15_15;

            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__SymName_12)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName_12, (MR_Integer) 0)));
                parse_tree__parse_sym_name__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__SymName_12, (MR_Integer) 1)));
                {
                  parse_tree__parse_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__parse_sym_name__ModuleName_14, parse_tree__parse_sym_name__DefaultModuleName_6);
                }
                parse_tree__parse_sym_name__succeeded = !(parse_tree__parse_sym_name__succeeded);
              }
            if (parse_tree__parse_sym_name__succeeded)
              {
                MR_Word parse_tree__parse_sym_name__Spec_17;
                MR_Word parse_tree__parse_sym_name__V_37_37;
                MR_Word parse_tree__parse_sym_name__V_38_38;
                MR_Word parse_tree__parse_sym_name__V_39_39;
                MR_Word parse_tree__parse_sym_name__V_44_44;

                {
                  parse_tree__parse_sym_name__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_46, parse_tree__parse_sym_name__Term_7);
                }
                {
                  parse_tree__parse_sym_name__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_38_38, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_39_39));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[26])));
                }
                {
                  parse_tree__parse_sym_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_37_37, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_38_38));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_37_37));
                }
                {
                  parse_tree__parse_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_17));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_sym_name__MaybeSymNameAndArgs_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_44_44));
                }
              }
            else
              {
                MR_String parse_tree__parse_sym_name__UnqualName_18;
                MR_Word parse_tree__parse_sym_name__QualSymName_19;

                {
                  parse_tree__parse_sym_name__UnqualName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_sym_name__SymName_12);
                }
                {
                  parse_tree__parse_sym_name__QualSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__QualSymName_19, 0) = ((MR_Box) (parse_tree__parse_sym_name__DefaultModuleName_6));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__QualSymName_19, 1) = ((MR_Box) (parse_tree__parse_sym_name__UnqualName_18));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_sym_name__MaybeSymNameAndArgs_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__QualSymName_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Args_13));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_19,
  MR_Word parse_tree__parse_sym_name__Functor_5,
  MR_Word parse_tree__parse_sym_name__FunctorArgs_6,
  MR_Word * parse_tree__parse_sym_name__SymName_7,
  MR_Word * parse_tree__parse_sym_name__Args_8)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_sym_name__FunctorName_9;
    MR_Word parse_tree__parse_sym_name__ModuleTerm_10;
    MR_Word parse_tree__parse_sym_name__NameArgsTerm_11;
    MR_Word parse_tree__parse_sym_name__V_15_15;
    MR_Word parse_tree__parse_sym_name__V_16_16;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Functor_5, (MR_Integer) 0)));
        parse_tree__parse_sym_name__succeeded = (strcmp(parse_tree__parse_sym_name__FunctorName_9, (MR_String) ".") == 0);
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__ModuleTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_6, (MR_Integer) 0)));
                parse_tree__parse_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_6, (MR_Integer) 1)));
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__NameArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_15_15, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_15_15, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (parse_tree__parse_sym_name__succeeded)
          {
            MR_String parse_tree__parse_sym_name__Name_12;
            MR_Word parse_tree__parse_sym_name__Module_14;
            MR_Word parse_tree__parse_sym_name__V_17_17;
            MR_Word parse_tree__parse_sym_name__V_13_13;

            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__NameArgsTerm_11)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_11, (MR_Integer) 0)));
                *parse_tree__parse_sym_name__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_11, (MR_Integer) 1)));
                parse_tree__parse_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_11, (MR_Integer) 2)));
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_17_17, (MR_Integer) 0)));
                    {
                      parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_19, parse_tree__parse_sym_name__ModuleTerm_10, &parse_tree__parse_sym_name__Module_14);
                    }
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_sym_name__SymName_7 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__Module_14));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Name_12));
                        }
                        parse_tree__parse_sym_name__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        else
          {
            {
              *parse_tree__parse_sym_name__SymName_7 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__parse_sym_name__FunctorName_9, (MR_String) "__");
            }
            *parse_tree__parse_sym_name__Args_8 = parse_tree__parse_sym_name__FunctorArgs_6;
            parse_tree__parse_sym_name__succeeded = MR_TRUE;
          }
      }
    return parse_tree__parse_sym_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_19,
  MR_Word parse_tree__parse_sym_name__Term_3,
  MR_Word * parse_tree__parse_sym_name__SymName_4)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_sym_name__Functor_5;
    MR_Word parse_tree__parse_sym_name__FunctorArgs_6;
    MR_String parse_tree__parse_sym_name__FunctorName_8;
    MR_Word parse_tree__parse_sym_name___TermContext_7;
    MR_Word parse_tree__parse_sym_name__ModuleTerm_9;
    MR_Word parse_tree__parse_sym_name__NameArgsTerm_10;
    MR_Word parse_tree__parse_sym_name__V_14_14;
    MR_Word parse_tree__parse_sym_name__V_15_15;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__Functor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 0)));
        parse_tree__parse_sym_name__FunctorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 1)));
        parse_tree__parse_sym_name___TermContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_3, (MR_Integer) 2)));
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__FunctorName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Functor_5, (MR_Integer) 0)));
            parse_tree__parse_sym_name__succeeded = (strcmp(parse_tree__parse_sym_name__FunctorName_8, (MR_String) ".") == 0);
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__ModuleTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_6, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_6, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__NameArgsTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_14_14, (MR_Integer) 0)));
                        parse_tree__parse_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_14_14, (MR_Integer) 1)));
                        parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
            if (parse_tree__parse_sym_name__succeeded)
              {
                MR_String parse_tree__parse_sym_name__Name_11;
                MR_Word parse_tree__parse_sym_name__Module_13;
                MR_Word parse_tree__parse_sym_name__V_16_16;
                MR_Word parse_tree__parse_sym_name__V_17_17;
                MR_Word parse_tree__parse_sym_name__V_12_12;

                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__NameArgsTerm_10)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_10, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_10, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_10, (MR_Integer) 2)));
                    parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_16_16)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__parse_sym_name__succeeded)
                          {
                            parse_tree__parse_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_16_16, (MR_Integer) 0)));
                            {
                              parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_19, parse_tree__parse_sym_name__ModuleTerm_9, &parse_tree__parse_sym_name__Module_13);
                            }
                            if (parse_tree__parse_sym_name__succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *parse_tree__parse_sym_name__SymName_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__Module_13));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Name_11));
                                }
                                parse_tree__parse_sym_name__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_String parse_tree__parse_sym_name__V_18_18;

                parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__FunctorArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__V_18_18 = (MR_String) "__";
                    {
                      *parse_tree__parse_sym_name__SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__parse_sym_name__FunctorName_8, parse_tree__parse_sym_name__V_18_18);
                    }
                    parse_tree__parse_sym_name__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return parse_tree__parse_sym_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_10,
  MR_Word parse_tree__parse_sym_name__Term_4,
  MR_Word * parse_tree__parse_sym_name__SymName_5,
  MR_Word * parse_tree__parse_sym_name__Args_6)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_sym_name__Functor_7;
    MR_Word parse_tree__parse_sym_name__FunctorArgs_8;
    MR_String parse_tree__parse_sym_name__FunctorName_15;
    MR_Word parse_tree__parse_sym_name___TermContext_9;
    MR_Word parse_tree__parse_sym_name__ModuleTerm_16;
    MR_Word parse_tree__parse_sym_name__NameArgsTerm_17;
    MR_Word parse_tree__parse_sym_name__V_21_21;
    MR_Word parse_tree__parse_sym_name__V_22_22;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_4, (MR_Integer) 0)));
        parse_tree__parse_sym_name__FunctorArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_4, (MR_Integer) 1)));
        parse_tree__parse_sym_name___TermContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_4, (MR_Integer) 2)));
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Functor_7)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Functor_7, (MR_Integer) 0)));
            parse_tree__parse_sym_name__succeeded = (strcmp(parse_tree__parse_sym_name__FunctorName_15, (MR_String) ".") == 0);
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__FunctorArgs_8)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__ModuleTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_8, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_8, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__NameArgsTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_21_21, (MR_Integer) 0)));
                        parse_tree__parse_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_21_21, (MR_Integer) 1)));
                        parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
            if (parse_tree__parse_sym_name__succeeded)
              {
                MR_String parse_tree__parse_sym_name__Name_18;
                MR_Word parse_tree__parse_sym_name__Module_20;
                MR_Word parse_tree__parse_sym_name__V_23_23;
                MR_Word parse_tree__parse_sym_name__V_19_19;

                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__NameArgsTerm_17)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_17, (MR_Integer) 0)));
                    *parse_tree__parse_sym_name__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_17, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_17, (MR_Integer) 2)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_23_23, (MR_Integer) 0)));
                        {
                          parse_tree__parse_sym_name__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_10, parse_tree__parse_sym_name__ModuleTerm_16, &parse_tree__parse_sym_name__Module_20);
                        }
                        if (parse_tree__parse_sym_name__succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *parse_tree__parse_sym_name__SymName_5 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__Module_20));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Name_18));
                            }
                            parse_tree__parse_sym_name__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            else
              {
                {
                  *parse_tree__parse_sym_name__SymName_5 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__parse_sym_name__FunctorName_15, (MR_String) "__");
                }
                *parse_tree__parse_sym_name__Args_6 = parse_tree__parse_sym_name__FunctorArgs_8;
                parse_tree__parse_sym_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__parse_sym_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(
  MR_Word parse_tree__parse_sym_name__TypeInfo_for_T_130,
  MR_Word parse_tree__parse_sym_name__VarSet_5,
  MR_Word parse_tree__parse_sym_name__ContextPieces_6,
  MR_Word parse_tree__parse_sym_name__Term_7,
  MR_Word * parse_tree__parse_sym_name__MaybeSymNameAndArgs_8)
{
  {
    MR_bool parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_sym_name__TermContext_11;
    MR_Word parse_tree__parse_sym_name__ModuleTerm_12;
    MR_Word parse_tree__parse_sym_name__NameArgsTerm_13;
    MR_Word parse_tree__parse_sym_name__Functor_9;
    MR_Word parse_tree__parse_sym_name__FunctorArgs_10;
    MR_String parse_tree__parse_sym_name__V_27_27;
    MR_Word parse_tree__parse_sym_name__V_28_28;
    MR_Word parse_tree__parse_sym_name__V_29_29;

    if (parse_tree__parse_sym_name__succeeded)
      {
        parse_tree__parse_sym_name__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 0)));
        parse_tree__parse_sym_name__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 1)));
        parse_tree__parse_sym_name__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 2)));
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Functor_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Functor_9, (MR_Integer) 0)));
            parse_tree__parse_sym_name__succeeded = (strcmp(parse_tree__parse_sym_name__V_27_27, (MR_String) ".") == 0);
            if (parse_tree__parse_sym_name__succeeded)
              {
                parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_sym_name__succeeded)
                  {
                    parse_tree__parse_sym_name__ModuleTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_10, (MR_Integer) 0)));
                    parse_tree__parse_sym_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__FunctorArgs_10, (MR_Integer) 1)));
                    parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_sym_name__succeeded)
                      {
                        parse_tree__parse_sym_name__NameArgsTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_28_28, (MR_Integer) 0)));
                        parse_tree__parse_sym_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_28_28, (MR_Integer) 1)));
                        parse_tree__parse_sym_name__succeeded = (parse_tree__parse_sym_name__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_sym_name__succeeded)
      {
        MR_String parse_tree__parse_sym_name__Name_14;
        MR_Word parse_tree__parse_sym_name__Args_15;
        MR_Word parse_tree__parse_sym_name__V_30_30;
        MR_Word parse_tree__parse_sym_name__V_16_16;

        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__NameArgsTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_13, (MR_Integer) 0)));
            parse_tree__parse_sym_name__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_13, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__NameArgsTerm_13, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_30_30)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_sym_name__succeeded)
              parse_tree__parse_sym_name__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_30_30, (MR_Integer) 0)));
          }
        if (parse_tree__parse_sym_name__succeeded)
          {
            MR_Word parse_tree__parse_sym_name__GenericVarSet_17;
            MR_Word parse_tree__parse_sym_name__MaybeModule_18;

            {
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__VarSet_5, &parse_tree__parse_sym_name__GenericVarSet_17);
            }
            {
              parse_tree__parse_sym_name__parse_symbol_name_3_p_0(parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__GenericVarSet_17, parse_tree__parse_sym_name__ModuleTerm_12, &parse_tree__parse_sym_name__MaybeModule_18);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_sym_name__MaybeModule_18)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_sym_name__TypeCtorInfo_132_132;
                MR_String parse_tree__parse_sym_name__ModuleTermStr_21;
                MR_Word parse_tree__parse_sym_name__Pieces_22;
                MR_Word parse_tree__parse_sym_name__Spec_23;
                MR_Word parse_tree__parse_sym_name__V_31_31;
                MR_Word parse_tree__parse_sym_name__V_32_32;
                MR_Word parse_tree__parse_sym_name__V_34_34;
                MR_Word parse_tree__parse_sym_name__V_37_37;
                MR_Word parse_tree__parse_sym_name__V_40_40;
                MR_Word parse_tree__parse_sym_name__V_41_41;
                MR_Word parse_tree__parse_sym_name__V_50_50;
                MR_Word parse_tree__parse_sym_name__V_51_51;
                MR_Word parse_tree__parse_sym_name__V_52_52;
                MR_Word parse_tree__parse_sym_name__V_53_53;
                MR_Word parse_tree__parse_sym_name__V_56_56;

                {
                  parse_tree__parse_sym_name__ModuleTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__GenericVarSet_17, parse_tree__parse_sym_name__ModuleTerm_12);
                }
                parse_tree__parse_sym_name__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  parse_tree__parse_sym_name__V_31_31 = mercury__cord__list_1_f_0(parse_tree__parse_sym_name__TypeCtorInfo_132_132, parse_tree__parse_sym_name__ContextPieces_6);
                }
                {
                  parse_tree__parse_sym_name__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_41_41, 1) = ((MR_Box) (parse_tree__parse_sym_name__ModuleTermStr_21));
                }
                {
                  parse_tree__parse_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_41_41));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
                }
                {
                  parse_tree__parse_sym_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[23])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_37_37, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_40_40));
                }
                {
                  parse_tree__parse_sym_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[22])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_34_34, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_37_37));
                }
                {
                  parse_tree__parse_sym_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_32_32, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_34_34));
                }
                {
                  parse_tree__parse_sym_name__Pieces_22 = mercury__list__f_43_43_2_f_0(parse_tree__parse_sym_name__TypeCtorInfo_132_132, parse_tree__parse_sym_name__V_31_31, parse_tree__parse_sym_name__V_32_32);
                }
                {
                  parse_tree__parse_sym_name__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_53_53, 0) = ((MR_Box) (parse_tree__parse_sym_name__Pieces_22));
                }
                {
                  parse_tree__parse_sym_name__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_52_52, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_53_53));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_51_51, 0) = ((MR_Box) (parse_tree__parse_sym_name__TermContext_11));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_51_51, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_52_52));
                }
                {
                  parse_tree__parse_sym_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_51_51));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_sym_name__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_23, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_50_50));
                }
                {
                  parse_tree__parse_sym_name__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_56_56, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_23));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_sym_name__MaybeSymNameAndArgs_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_56_56));
                }
              }
            else
              {
                MR_Word parse_tree__parse_sym_name__Module_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__MaybeModule_18, (MR_Integer) 0)));
                MR_Word parse_tree__parse_sym_name__V_58_58;

                {
                  parse_tree__parse_sym_name__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_58_58, 0) = ((MR_Box) (parse_tree__parse_sym_name__Module_19));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_58_58, 1) = ((MR_Box) (parse_tree__parse_sym_name__Name_14));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_sym_name__MaybeSymNameAndArgs_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_58_58));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Args_15));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_sym_name__TypeCtorInfo_134_134;
            MR_String parse_tree__parse_sym_name__TermStr_24;
            MR_Word parse_tree__parse_sym_name__V_59_59;
            MR_Word parse_tree__parse_sym_name__V_60_60;
            MR_Word parse_tree__parse_sym_name__V_62_62;
            MR_Word parse_tree__parse_sym_name__V_65_65;
            MR_Word parse_tree__parse_sym_name__V_68_68;
            MR_Word parse_tree__parse_sym_name__V_69_69;
            MR_Word parse_tree__parse_sym_name__V_78_78;
            MR_Word parse_tree__parse_sym_name__V_79_79;
            MR_Word parse_tree__parse_sym_name__V_80_80;
            MR_Word parse_tree__parse_sym_name__V_81_81;
            MR_Word parse_tree__parse_sym_name__V_84_84;
            MR_Word parse_tree__parse_sym_name__GenericVarSet_113;
            MR_Word parse_tree__parse_sym_name__Pieces_114;
            MR_Word parse_tree__parse_sym_name__Spec_115;

            {
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__VarSet_5, &parse_tree__parse_sym_name__GenericVarSet_113);
            }
            {
              parse_tree__parse_sym_name__TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__GenericVarSet_113, parse_tree__parse_sym_name__Term_7);
            }
            parse_tree__parse_sym_name__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              parse_tree__parse_sym_name__V_59_59 = mercury__cord__list_1_f_0(parse_tree__parse_sym_name__TypeCtorInfo_134_134, parse_tree__parse_sym_name__ContextPieces_6);
            }
            {
              parse_tree__parse_sym_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_69_69, 1) = ((MR_Box) (parse_tree__parse_sym_name__TermStr_24));
            }
            {
              parse_tree__parse_sym_name__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_68_68, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_69_69));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
            }
            {
              parse_tree__parse_sym_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[23])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_65_65, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_68_68));
            }
            {
              parse_tree__parse_sym_name__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[24])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_62_62, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_65_65));
            }
            {
              parse_tree__parse_sym_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_60_60, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_62_62));
            }
            {
              parse_tree__parse_sym_name__Pieces_114 = mercury__list__f_43_43_2_f_0(parse_tree__parse_sym_name__TypeCtorInfo_134_134, parse_tree__parse_sym_name__V_59_59, parse_tree__parse_sym_name__V_60_60);
            }
            {
              parse_tree__parse_sym_name__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_81_81, 0) = ((MR_Box) (parse_tree__parse_sym_name__Pieces_114));
            }
            {
              parse_tree__parse_sym_name__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_80_80, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_81_81));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_79_79, 0) = ((MR_Box) (parse_tree__parse_sym_name__TermContext_11));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_79_79, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_80_80));
            }
            {
              parse_tree__parse_sym_name__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_78_78, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_79_79));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__Spec_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_115, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_78_78));
            }
            {
              parse_tree__parse_sym_name__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_84_84, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_115));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_sym_name__MaybeSymNameAndArgs_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_84_84));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_sym_name__GenericVarSet_126;
        MR_String parse_tree__parse_sym_name__Name_119;
        MR_Word parse_tree__parse_sym_name__Args_120;
        MR_Word parse_tree__parse_sym_name__V_86_86;
        MR_Word parse_tree__parse_sym_name__V_25_25;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__VarSet_5, &parse_tree__parse_sym_name__GenericVarSet_126);
        }
        parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__Term_7)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_sym_name__succeeded)
          {
            parse_tree__parse_sym_name__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 0)));
            parse_tree__parse_sym_name__Args_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 1)));
            parse_tree__parse_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Term_7, (MR_Integer) 2)));
            parse_tree__parse_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_sym_name__V_86_86)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_sym_name__succeeded)
              parse_tree__parse_sym_name__Name_119 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_86_86, (MR_Integer) 0)));
          }
        if (parse_tree__parse_sym_name__succeeded)
          {
            MR_Word parse_tree__parse_sym_name__SymName_26;

            {
              parse_tree__parse_sym_name__SymName_26 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__parse_sym_name__Name_119, (MR_String) "__");
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_sym_name__MaybeSymNameAndArgs_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__SymName_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_sym_name__Args_120));
            }
          }
        else
          {
            MR_Word parse_tree__parse_sym_name__TypeCtorInfo_136_136;
            MR_Word parse_tree__parse_sym_name__V_88_88;
            MR_Word parse_tree__parse_sym_name__V_89_89;
            MR_Word parse_tree__parse_sym_name__V_91_91;
            MR_Word parse_tree__parse_sym_name__V_94_94;
            MR_Word parse_tree__parse_sym_name__V_95_95;
            MR_Word parse_tree__parse_sym_name__V_104_104;
            MR_Word parse_tree__parse_sym_name__V_105_105;
            MR_Word parse_tree__parse_sym_name__V_106_106;
            MR_Word parse_tree__parse_sym_name__V_107_107;
            MR_Word parse_tree__parse_sym_name__V_108_108;
            MR_Word parse_tree__parse_sym_name__V_111_111;
            MR_Word parse_tree__parse_sym_name__Pieces_116;
            MR_Word parse_tree__parse_sym_name__Spec_117;
            MR_String parse_tree__parse_sym_name__TermStr_118;

            {
              parse_tree__parse_sym_name__TermStr_118 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__GenericVarSet_126, parse_tree__parse_sym_name__Term_7);
            }
            parse_tree__parse_sym_name__TypeCtorInfo_136_136 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              parse_tree__parse_sym_name__V_88_88 = mercury__cord__list_1_f_0(parse_tree__parse_sym_name__TypeCtorInfo_136_136, parse_tree__parse_sym_name__ContextPieces_6);
            }
            {
              parse_tree__parse_sym_name__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_sym_name__V_95_95, 1) = ((MR_Box) (parse_tree__parse_sym_name__TermStr_118));
            }
            {
              parse_tree__parse_sym_name__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_94_94, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_95_95));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_sym_name_scalar_common_1[4])));
            }
            {
              parse_tree__parse_sym_name__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_sym_name_scalar_common_1[25])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_91_91, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_94_94));
            }
            {
              parse_tree__parse_sym_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_89_89, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_91_91));
            }
            {
              parse_tree__parse_sym_name__Pieces_116 = mercury__list__f_43_43_2_f_0(parse_tree__parse_sym_name__TypeCtorInfo_136_136, parse_tree__parse_sym_name__V_88_88, parse_tree__parse_sym_name__V_89_89);
            }
            {
              parse_tree__parse_sym_name__V_106_106 = mercury__term__get_term_context_1_f_0(parse_tree__parse_sym_name__TypeInfo_for_T_130, parse_tree__parse_sym_name__Term_7);
            }
            {
              parse_tree__parse_sym_name__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_108_108, 0) = ((MR_Box) (parse_tree__parse_sym_name__Pieces_116));
            }
            {
              parse_tree__parse_sym_name__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_107_107, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_108_108));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_105_105, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_106_106));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__V_105_105, 1) = ((MR_Box) (parse_tree__parse_sym_name__V_107_107));
            }
            {
              parse_tree__parse_sym_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_104_104, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_105_105));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_sym_name__Spec_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_sym_name__Spec_117, 2) = ((MR_Box) (parse_tree__parse_sym_name__V_104_104));
            }
            {
              parse_tree__parse_sym_name__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_111_111, 0) = ((MR_Box) (parse_tree__parse_sym_name__Spec_117));
              MR_hl_field(MR_mktag(1), parse_tree__parse_sym_name__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_sym_name__MaybeSymNameAndArgs_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_sym_name__V_111_111));
            }
          }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_sym_name. */
