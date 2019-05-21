/*
** Automatically generated from `parse_error.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module parse_tree.parse_error. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_error__init
ENDINIT
*/

#include "parse_tree.parse_error.mih"


#include "parse_tree.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_10;

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_value_ordered_read_module_error_0[11];

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_read_module_error_0[11];

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_error_0[11];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_error_0_0_10001(
  MR_Box parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_error_0_0_10001(
  MR_Box * parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2,
  MR_Box parse_tree__parse_error__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0_10001(
  MR_Box parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0_10001(
  MR_Box * parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2,
  MR_Box parse_tree__parse_error__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_error_scalar_common_1[4][2];




static /* final */ const MR_Box parse_tree__parse_error_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[2])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0 = {
  (MR_String) "rme_could_not_open_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1 = {
  (MR_String) "rme_unexpected_module_name",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2 = {
  (MR_String) "rme_no_module_decl_at_start",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3 = {
  (MR_String) "rme_no_section_decl_at_start",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4 = {
  (MR_String) "rme_end_module_not_at_end_of_src",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5 = {
  (MR_String) "rme_unexpected_term_in_int_or_opt",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6 = {
  (MR_String) "rme_could_not_read_term",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7 = {
  (MR_String) "rme_could_not_parse_item",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8 = {
  (MR_String) "rme_bad_submodule_start",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9 = {
  (MR_String) "rme_bad_module_end",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_10 = {
  (MR_String) "rme_warn_item_nothing",
  (MR_Integer) 10
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_value_ordered_read_module_error_0[11] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_10
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_read_module_error_0[11] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_10
};

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_error_0[11] = {
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 10
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_error____Unify____read_module_error_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____read_module_error_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "read_module_error",
  {     parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_read_module_error_0 },
  {     parse_tree__parse_error__parse_tree__parse_error__enum_value_ordered_read_module_error_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_error_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_error____Unify____read_module_errors_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____read_module_errors_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "read_module_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0(
  MR_Word * parse_tree__parse_error__HeadVar__1_1,
  MR_Word parse_tree__parse_error__HeadVar__2_2,
  MR_Word parse_tree__parse_error__HeadVar__3_3)
{
  {
    MR_Word parse_tree__parse_error__Cast_HeadVar1_4 = parse_tree__parse_error__HeadVar__2_2;
    MR_Word parse_tree__parse_error__Cast_HeadVar2_5 = parse_tree__parse_error__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_error_scalar_common_1[0], parse_tree__parse_error__HeadVar__1_1, ((MR_Box) (parse_tree__parse_error__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__parse_error__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0(
  MR_Word parse_tree__parse_error__HeadVar__1_1,
  MR_Word parse_tree__parse_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_error__succeeded;
    MR_Word parse_tree__parse_error__Cast_HeadVar1_3 = parse_tree__parse_error__HeadVar__1_1;
    MR_Word parse_tree__parse_error__Cast_HeadVar2_4 = parse_tree__parse_error__HeadVar__2_2;

    parse_tree__parse_error__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_error_scalar_common_1[0], ((MR_Box) (parse_tree__parse_error__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__parse_error__Cast_HeadVar2_4)));
    return parse_tree__parse_error__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_error____Compare____read_module_error_0_0(
  MR_Word * parse_tree__parse_error__HeadVar__1_1,
  MR_Word parse_tree__parse_error__HeadVar__2_2,
  MR_Word parse_tree__parse_error__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__parse_error__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_error__HeadVar__2_2;
    MR_Integer parse_tree__parse_error__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_error__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_error__HeadVar__1_1, parse_tree__parse_error__Cast_HeadVar1_4, parse_tree__parse_error__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_error_0_0(
  MR_Word parse_tree__parse_error__HeadVar__2_1,
  MR_Word parse_tree__parse_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_error__succeeded = (parse_tree__parse_error__HeadVar__2_1 == parse_tree__parse_error__HeadVar__2_2);

    return parse_tree__parse_error__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__parse_error__fatal_read_module_errors_0_f_0(void)
{
  {
    MR_Word parse_tree__parse_error__FatalErrors_2;

    parse_tree__parse_error__FatalErrors_2 = mercury__set__list_to_set_1_f_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[3]));
    return parse_tree__parse_error__FatalErrors_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_error_0_0_10001(
  MR_Box parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_error__succeeded;

    parse_tree__parse_error__succeeded = parse_tree__parse_error____Unify____read_module_error_0_0(((MR_Word) parse_tree__parse_error__wrapper_arg_1), ((MR_Word) parse_tree__parse_error__wrapper_arg_2));
    return parse_tree__parse_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_error_0_0_10001(
  MR_Box * parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2,
  MR_Box parse_tree__parse_error__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_error__conv0_HeadVar__1_1;

    parse_tree__parse_error____Compare____read_module_error_0_0(&parse_tree__parse_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_error__wrapper_arg_2), ((MR_Word) parse_tree__parse_error__wrapper_arg_3));
    *parse_tree__parse_error__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_error__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0_10001(
  MR_Box parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_error__succeeded;

    parse_tree__parse_error__succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(((MR_Word) parse_tree__parse_error__wrapper_arg_1), ((MR_Word) parse_tree__parse_error__wrapper_arg_2));
    return parse_tree__parse_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0_10001(
  MR_Box * parse_tree__parse_error__wrapper_arg_1,
  MR_Box parse_tree__parse_error__wrapper_arg_2,
  MR_Box parse_tree__parse_error__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_error__conv0_HeadVar__1_1;

    parse_tree__parse_error____Compare____read_module_errors_0_0(&parse_tree__parse_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_error__wrapper_arg_2), ((MR_Word) parse_tree__parse_error__wrapper_arg_3));
    *parse_tree__parse_error__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_error__conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_error__init(void)
{
}

void mercury__parse_tree__parse_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
	MR_register_type_ctor_info(&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0);
}

void mercury__parse_tree__parse_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_error__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.parse_error. */
