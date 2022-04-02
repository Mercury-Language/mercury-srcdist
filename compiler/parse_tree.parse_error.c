/*
** Automatically generated from `parse_error.m'
** by the Mercury compiler,
** version rotd-2022-04-02
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


// :- module parse_tree.parse_error.
// :- implementation.

/*
INIT mercury__parse_tree__parse_error__init
ENDINIT
*/

#include "parse_tree.parse_error.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
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

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_read_module_error_0[10];

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_read_module_error_0[10];

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_error_0[10];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_error_scalar_common_1[4][2];




static /* final */ const MR_Box parse_tree__parse_error_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[2])))
  },
};






static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0 = {
  (MR_String) "rme_could_not_open_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1 = {
  (MR_String) "rme_unexpected_module_name",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2 = {
  (MR_String) "rme_no_module_decl_at_start",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3 = {
  (MR_String) "rme_no_section_decl_at_start",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4 = {
  (MR_String) "rme_end_module_not_at_end_of_src",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5 = {
  (MR_String) "rme_unexpected_term_in_int_or_opt",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6 = {
  (MR_String) "rme_could_not_read_term",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7 = {
  (MR_String) "rme_could_not_parse_item",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8 = {
  (MR_String) "rme_bad_submodule_start",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9 = {
  (MR_String) "rme_bad_module_end",
  INT32_C(9)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_read_module_error_0[10] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_read_module_error_0[10] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_9,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_8,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_7,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_6,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_4,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_read_module_error_0_5
};

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_error_0[10] = {
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_error____Unify____read_module_error_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____read_module_error_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "read_module_error",
  { parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_read_module_error_0 },
  { parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_read_module_error_0 },
  (MR_Integer) 10,
  UINT16_C(12),
  parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_error_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_error____Unify____read_module_errors_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____read_module_errors_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "read_module_errors",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_error____Compare____read_module_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_error_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
parse_tree__parse_error__fatal_read_module_errors_0_f_0(void)
{
  MR_Word FatalErrors_2;

  FatalErrors_2 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[3])));
  return FatalErrors_2;
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_error____Unify____read_module_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_error____Compare____read_module_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_error____Compare____read_module_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.parse_error.
