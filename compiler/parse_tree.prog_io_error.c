/*
** Automatically generated from `prog_io_error.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module parse_tree.prog_io_error. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_error__init
ENDINIT
*/

#include "parse_tree.prog_io_error.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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




#line 65 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_0;

#line 68 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_1;

#line 71 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_2;

#line 74 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_value_ordered_module_error_0[3];

#line 77 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_name_ordered_module_error_0[3];

#line 80 "parse_tree.prog_io_error.c"
static const MR_Integer parse_tree__prog_io_error__parse_tree__prog_io_error__functor_number_map_module_error_0[3];

#line 83 "parse_tree.prog_io_error.c"
static MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____module_error_0_0_10001(
#line 86 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_1,
#line 88 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2);

#line 91 "parse_tree.prog_io_error.c"
static void MR_CALL 
parse_tree__prog_io_error____Compare____module_error_0_0_10001(
#line 94 "parse_tree.prog_io_error.c"
  MR_Box * parse_tree__prog_io_error__wrapper_arg_1,
#line 96 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2,
#line 98 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_3);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 118 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_0 = {
  (MR_String) "no_module_errors",
  (MR_Integer) 0
};

#line 124 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_1 = {
  (MR_String) "some_module_errors",
  (MR_Integer) 1
};

#line 130 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_2 = {
  (MR_String) "fatal_module_errors",
  (MR_Integer) 2
};

#line 136 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_value_ordered_module_error_0[3] = {
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_0,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_1,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_2
};

#line 143 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_name_ordered_module_error_0[3] = {
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_2,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_0,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_module_error_0_1
};

#line 150 "parse_tree.prog_io_error.c"
static const MR_Integer parse_tree__prog_io_error__parse_tree__prog_io_error__functor_number_map_module_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 157 "parse_tree.prog_io_error.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_module_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_error____Unify____module_error_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_error____Compare____module_error_0_0_10001)),
  (MR_String) "parse_tree.prog_io_error",
  (MR_String) "module_error",
  {
    parse_tree__prog_io_error__parse_tree__prog_io_error__enum_name_ordered_module_error_0
  },
  {
    parse_tree__prog_io_error__parse_tree__prog_io_error__enum_value_ordered_module_error_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_error__parse_tree__prog_io_error__functor_number_map_module_error_0
};

#line 178 "parse_tree.prog_io_error.c"
static MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____module_error_0_0_10001(
#line 181 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_1,
#line 183 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2)
#line 185 "parse_tree.prog_io_error.c"
{
#line 187 "parse_tree.prog_io_error.c"
  {
#line 189 "parse_tree.prog_io_error.c"
    MR_bool parse_tree__prog_io_error__succeeded;

#line 192 "parse_tree.prog_io_error.c"
    {
#line 194 "parse_tree.prog_io_error.c"
      parse_tree__prog_io_error__succeeded = parse_tree__prog_io_error____Unify____module_error_0_0(((MR_Word) parse_tree__prog_io_error__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_error__wrapper_arg_2));
    }
#line 197 "parse_tree.prog_io_error.c"
    return parse_tree__prog_io_error__succeeded;
#line 199 "parse_tree.prog_io_error.c"
  }
#line 201 "parse_tree.prog_io_error.c"
}

#line 204 "parse_tree.prog_io_error.c"
static void MR_CALL 
parse_tree__prog_io_error____Compare____module_error_0_0_10001(
#line 207 "parse_tree.prog_io_error.c"
  MR_Box * parse_tree__prog_io_error__wrapper_arg_1,
#line 209 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2,
#line 211 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_3)
#line 213 "parse_tree.prog_io_error.c"
{
#line 215 "parse_tree.prog_io_error.c"
  {
#line 217 "parse_tree.prog_io_error.c"
    MR_Word parse_tree__prog_io_error__conv0_HeadVar__1_1;

#line 220 "parse_tree.prog_io_error.c"
    {
#line 222 "parse_tree.prog_io_error.c"
      parse_tree__prog_io_error____Compare____module_error_0_0(&parse_tree__prog_io_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_error__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_error__wrapper_arg_3));
    }
#line 225 "parse_tree.prog_io_error.c"
    *parse_tree__prog_io_error__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_error__conv0_HeadVar__1_1));
#line 227 "parse_tree.prog_io_error.c"
  }
#line 229 "parse_tree.prog_io_error.c"
}

#line 24 "prog_io_error.m"
void MR_CALL 
parse_tree__prog_io_error____Compare____module_error_0_0(
#line 24 "prog_io_error.m"
  MR_Word * parse_tree__prog_io_error__HeadVar__1_1,
#line 24 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_2,
#line 24 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__3_3)
#line 24 "prog_io_error.m"
{
#line 24 "prog_io_error.m"
  {
#line 24 "prog_io_error.m"
    MR_bool parse_tree__prog_io_error__succeeded;
#line 24 "prog_io_error.m"
    MR_Integer parse_tree__prog_io_error__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_error__HeadVar__2_2;
#line 24 "prog_io_error.m"
    MR_Integer parse_tree__prog_io_error__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_error__HeadVar__3_3;

#line 24 "prog_io_error.m"
    {
#line 24 "prog_io_error.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_error__HeadVar__1_1, parse_tree__prog_io_error__Cast_HeadVar1_4, parse_tree__prog_io_error__Cast_HeadVar2_5);
#line 24 "prog_io_error.m"
      return;
    }
#line 24 "prog_io_error.m"
  }
#line 24 "prog_io_error.m"
}

#line 24 "prog_io_error.m"
MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____module_error_0_0(
#line 24 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_1,
#line 24 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_2)
#line 24 "prog_io_error.m"
{
#line 273 "parse_tree.prog_io_error.c"
  {
#line 275 "parse_tree.prog_io_error.c"
    MR_bool parse_tree__prog_io_error__succeeded = (parse_tree__prog_io_error__HeadVar__2_1 == parse_tree__prog_io_error__HeadVar__2_2);

#line 278 "parse_tree.prog_io_error.c"
    return parse_tree__prog_io_error__succeeded;
#line 280 "parse_tree.prog_io_error.c"
  }
#line 24 "prog_io_error.m"
}

void mercury__parse_tree__prog_io_error__init(void)
{
}

void mercury__parse_tree__prog_io_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_module_error_0);
}

void mercury__parse_tree__prog_io_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_error. */
