/*
** Automatically generated from `prog_io_error.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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




#line 66 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_0;

#line 69 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_1;

#line 72 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_2;

#line 75 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_3;

#line 78 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_4;

#line 81 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_5;

#line 84 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_6;

#line 87 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_7;

#line 90 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_value_ordered_read_module_error_0[8];

#line 93 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_name_ordered_read_module_error_0[8];

#line 96 "parse_tree.prog_io_error.c"
static const MR_Integer parse_tree__prog_io_error__parse_tree__prog_io_error__functor_number_map_read_module_error_0[8];

#line 99 "parse_tree.prog_io_error.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_error__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 102 "parse_tree.prog_io_error.c"
static MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____read_module_error_0_0_10001(
#line 105 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_1,
#line 107 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2);

#line 110 "parse_tree.prog_io_error.c"
static void MR_CALL 
parse_tree__prog_io_error____Compare____read_module_error_0_0_10001(
#line 113 "parse_tree.prog_io_error.c"
  MR_Box * parse_tree__prog_io_error__wrapper_arg_1,
#line 115 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2,
#line 117 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_3);

#line 120 "parse_tree.prog_io_error.c"
static MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____read_module_errors_0_0_10001(
#line 123 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_1,
#line 125 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2);

#line 128 "parse_tree.prog_io_error.c"
static void MR_CALL 
parse_tree__prog_io_error____Compare____read_module_errors_0_0_10001(
#line 131 "parse_tree.prog_io_error.c"
  MR_Box * parse_tree__prog_io_error__wrapper_arg_1,
#line 133 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2,
#line 135 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_io_error_scalar_common_1[4][2];




static /* final */ const MR_Box parse_tree__prog_io_error_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_error_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_error_scalar_common_1[2])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 180 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_0 = {
  (MR_String) "rme_could_not_open_file",
  (MR_Integer) 0
};

#line 186 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_1 = {
  (MR_String) "rme_unexpected_module_name",
  (MR_Integer) 1
};

#line 192 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_2 = {
  (MR_String) "rme_no_module_decl_at_start",
  (MR_Integer) 2
};

#line 198 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_3 = {
  (MR_String) "rme_could_not_read_term",
  (MR_Integer) 3
};

#line 204 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_4 = {
  (MR_String) "rme_could_not_parse_item",
  (MR_Integer) 4
};

#line 210 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_5 = {
  (MR_String) "rme_bad_submodule_start",
  (MR_Integer) 5
};

#line 216 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_6 = {
  (MR_String) "rme_bad_module_end",
  (MR_Integer) 6
};

#line 222 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_7 = {
  (MR_String) "rme_warn_item_nothing",
  (MR_Integer) 7
};

#line 228 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_value_ordered_read_module_error_0[8] = {
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_0,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_1,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_2,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_3,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_4,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_5,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_6,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_7
};

#line 240 "parse_tree.prog_io_error.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_error__parse_tree__prog_io_error__enum_name_ordered_read_module_error_0[8] = {
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_6,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_5,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_0,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_4,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_3,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_2,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_1,
  &parse_tree__prog_io_error__parse_tree__prog_io_error__enum_functor_desc_read_module_error_0_7
};

#line 252 "parse_tree.prog_io_error.c"
static const MR_Integer parse_tree__prog_io_error__parse_tree__prog_io_error__functor_number_map_read_module_error_0[8] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 7
};

#line 264 "parse_tree.prog_io_error.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_error____Unify____read_module_error_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_error____Compare____read_module_error_0_0_10001)),
  (MR_String) "parse_tree.prog_io_error",
  (MR_String) "read_module_error",
  {     parse_tree__prog_io_error__parse_tree__prog_io_error__enum_name_ordered_read_module_error_0 },
  {     parse_tree__prog_io_error__parse_tree__prog_io_error__enum_value_ordered_read_module_error_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  parse_tree__prog_io_error__parse_tree__prog_io_error__functor_number_map_read_module_error_0
};

#line 281 "parse_tree.prog_io_error.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_error__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 289 "parse_tree.prog_io_error.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_error____Unify____read_module_errors_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_error____Compare____read_module_errors_0_0_10001)),
  (MR_String) "parse_tree.prog_io_error",
  (MR_String) "read_module_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_error__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 306 "parse_tree.prog_io_error.c"
static MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____read_module_error_0_0_10001(
#line 309 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_1,
#line 311 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2)
#line 313 "parse_tree.prog_io_error.c"
{
#line 315 "parse_tree.prog_io_error.c"
  {
#line 317 "parse_tree.prog_io_error.c"
    MR_bool parse_tree__prog_io_error__succeeded;

#line 320 "parse_tree.prog_io_error.c"
    {
#line 322 "parse_tree.prog_io_error.c"
      parse_tree__prog_io_error__succeeded = parse_tree__prog_io_error____Unify____read_module_error_0_0(((MR_Word) parse_tree__prog_io_error__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_error__wrapper_arg_2));
    }
#line 325 "parse_tree.prog_io_error.c"
    return parse_tree__prog_io_error__succeeded;
#line 327 "parse_tree.prog_io_error.c"
  }
#line 329 "parse_tree.prog_io_error.c"
}

#line 332 "parse_tree.prog_io_error.c"
static void MR_CALL 
parse_tree__prog_io_error____Compare____read_module_error_0_0_10001(
#line 335 "parse_tree.prog_io_error.c"
  MR_Box * parse_tree__prog_io_error__wrapper_arg_1,
#line 337 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2,
#line 339 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_3)
#line 341 "parse_tree.prog_io_error.c"
{
#line 343 "parse_tree.prog_io_error.c"
  {
#line 345 "parse_tree.prog_io_error.c"
    MR_Word parse_tree__prog_io_error__conv0_HeadVar__1_1;

#line 348 "parse_tree.prog_io_error.c"
    {
#line 350 "parse_tree.prog_io_error.c"
      parse_tree__prog_io_error____Compare____read_module_error_0_0(&parse_tree__prog_io_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_error__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_error__wrapper_arg_3));
    }
#line 353 "parse_tree.prog_io_error.c"
    *parse_tree__prog_io_error__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_error__conv0_HeadVar__1_1));
#line 355 "parse_tree.prog_io_error.c"
  }
#line 357 "parse_tree.prog_io_error.c"
}

#line 360 "parse_tree.prog_io_error.c"
static MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____read_module_errors_0_0_10001(
#line 363 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_1,
#line 365 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2)
#line 367 "parse_tree.prog_io_error.c"
{
#line 369 "parse_tree.prog_io_error.c"
  {
#line 371 "parse_tree.prog_io_error.c"
    MR_bool parse_tree__prog_io_error__succeeded;

#line 374 "parse_tree.prog_io_error.c"
    {
#line 376 "parse_tree.prog_io_error.c"
      parse_tree__prog_io_error__succeeded = parse_tree__prog_io_error____Unify____read_module_errors_0_0(((MR_Word) parse_tree__prog_io_error__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_error__wrapper_arg_2));
    }
#line 379 "parse_tree.prog_io_error.c"
    return parse_tree__prog_io_error__succeeded;
#line 381 "parse_tree.prog_io_error.c"
  }
#line 383 "parse_tree.prog_io_error.c"
}

#line 386 "parse_tree.prog_io_error.c"
static void MR_CALL 
parse_tree__prog_io_error____Compare____read_module_errors_0_0_10001(
#line 389 "parse_tree.prog_io_error.c"
  MR_Box * parse_tree__prog_io_error__wrapper_arg_1,
#line 391 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_2,
#line 393 "parse_tree.prog_io_error.c"
  MR_Box parse_tree__prog_io_error__wrapper_arg_3)
#line 395 "parse_tree.prog_io_error.c"
{
#line 397 "parse_tree.prog_io_error.c"
  {
#line 399 "parse_tree.prog_io_error.c"
    MR_Word parse_tree__prog_io_error__conv0_HeadVar__1_1;

#line 402 "parse_tree.prog_io_error.c"
    {
#line 404 "parse_tree.prog_io_error.c"
      parse_tree__prog_io_error____Compare____read_module_errors_0_0(&parse_tree__prog_io_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_error__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_error__wrapper_arg_3));
    }
#line 407 "parse_tree.prog_io_error.c"
    *parse_tree__prog_io_error__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_error__conv0_HeadVar__1_1));
#line 409 "parse_tree.prog_io_error.c"
  }
#line 411 "parse_tree.prog_io_error.c"
}

#line 73 "prog_io_error.m"
void MR_CALL 
parse_tree__prog_io_error____Compare____read_module_errors_0_0(
#line 73 "prog_io_error.m"
  MR_Word * parse_tree__prog_io_error__HeadVar__1_1,
#line 73 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_2,
#line 73 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__3_3)
#line 73 "prog_io_error.m"
{
#line 73 "prog_io_error.m"
  {
#line 73 "prog_io_error.m"
    MR_bool parse_tree__prog_io_error__succeeded;
#line 73 "prog_io_error.m"
    MR_Word parse_tree__prog_io_error__Cast_HeadVar1_4 = parse_tree__prog_io_error__HeadVar__2_2;
#line 73 "prog_io_error.m"
    MR_Word parse_tree__prog_io_error__Cast_HeadVar2_5 = parse_tree__prog_io_error__HeadVar__3_3;

#line 73 "prog_io_error.m"
    {
#line 73 "prog_io_error.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_error_scalar_common_1[0], parse_tree__prog_io_error__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_error__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_error__Cast_HeadVar2_5)));
#line 73 "prog_io_error.m"
      return;
    }
#line 73 "prog_io_error.m"
  }
#line 73 "prog_io_error.m"
}

#line 73 "prog_io_error.m"
MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____read_module_errors_0_0(
#line 73 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__1_1,
#line 73 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_2)
#line 73 "prog_io_error.m"
{
#line 73 "prog_io_error.m"
  {
#line 73 "prog_io_error.m"
    MR_bool parse_tree__prog_io_error__succeeded;
#line 73 "prog_io_error.m"
    MR_Word parse_tree__prog_io_error__Cast_HeadVar1_3 = parse_tree__prog_io_error__HeadVar__1_1;
#line 73 "prog_io_error.m"
    MR_Word parse_tree__prog_io_error__Cast_HeadVar2_4 = parse_tree__prog_io_error__HeadVar__2_2;

#line 73 "prog_io_error.m"
    {
#line 73 "prog_io_error.m"
      return parse_tree__prog_io_error__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_error_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io_error__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_error__Cast_HeadVar2_4)));
    }
#line 73 "prog_io_error.m"
    return parse_tree__prog_io_error__succeeded;
#line 73 "prog_io_error.m"
  }
#line 73 "prog_io_error.m"
}

#line 18 "prog_io_error.m"
void MR_CALL 
parse_tree__prog_io_error____Compare____read_module_error_0_0(
#line 18 "prog_io_error.m"
  MR_Word * parse_tree__prog_io_error__HeadVar__1_1,
#line 18 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_2,
#line 18 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__3_3)
#line 18 "prog_io_error.m"
{
#line 18 "prog_io_error.m"
  {
#line 18 "prog_io_error.m"
    MR_bool parse_tree__prog_io_error__succeeded;
#line 18 "prog_io_error.m"
    MR_Integer parse_tree__prog_io_error__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_error__HeadVar__2_2;
#line 18 "prog_io_error.m"
    MR_Integer parse_tree__prog_io_error__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_error__HeadVar__3_3;

#line 18 "prog_io_error.m"
    {
#line 18 "prog_io_error.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_error__HeadVar__1_1, parse_tree__prog_io_error__Cast_HeadVar1_4, parse_tree__prog_io_error__Cast_HeadVar2_5);
#line 18 "prog_io_error.m"
      return;
    }
#line 18 "prog_io_error.m"
  }
#line 18 "prog_io_error.m"
}

#line 18 "prog_io_error.m"
MR_bool MR_CALL 
parse_tree__prog_io_error____Unify____read_module_error_0_0(
#line 18 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_1,
#line 18 "prog_io_error.m"
  MR_Word parse_tree__prog_io_error__HeadVar__2_2)
#line 18 "prog_io_error.m"
{
#line 517 "parse_tree.prog_io_error.c"
  {
#line 519 "parse_tree.prog_io_error.c"
    MR_bool parse_tree__prog_io_error__succeeded = (parse_tree__prog_io_error__HeadVar__2_1 == parse_tree__prog_io_error__HeadVar__2_2);

#line 522 "parse_tree.prog_io_error.c"
    return parse_tree__prog_io_error__succeeded;
#line 524 "parse_tree.prog_io_error.c"
  }
#line 18 "prog_io_error.m"
}

#line 78 "prog_io_error.m"
MR_Word MR_CALL 
parse_tree__prog_io_error__fatal_read_module_errors_0_f_0(void)
#line 78 "prog_io_error.m"
{
#line 107 "prog_io_error.m"
  {
#line 107 "prog_io_error.m"
    MR_bool parse_tree__prog_io_error__succeeded;
#line 107 "prog_io_error.m"
    MR_Word parse_tree__prog_io_error__FatalErrors_2;

#line 107 "prog_io_error.m"
    {
#line 107 "prog_io_error.m"
      parse_tree__prog_io_error__FatalErrors_2 = mercury__set__list_to_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_error_scalar_common_1[3]));
    }
#line 107 "prog_io_error.m"
    return parse_tree__prog_io_error__FatalErrors_2;
#line 107 "prog_io_error.m"
  }
#line 78 "prog_io_error.m"
}

void mercury__parse_tree__prog_io_error__init(void)
{
}

void mercury__parse_tree__prog_io_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_errors_0);
}

void mercury__parse_tree__prog_io_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_error. */
