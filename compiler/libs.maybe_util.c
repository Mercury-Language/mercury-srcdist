/*
** Automatically generated from `maybe_util.m'
** by the Mercury compiler,
** version rotd-2025-02-15
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


// :- module libs.maybe_util.
// :- implementation.

/*
INIT mercury__libs__maybe_util__init
ENDINIT
*/

#include "libs.maybe_util.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer libs__maybe_util__libs__maybe_util__functor_number_map_maybe_changed_0[2];

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_0;

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_1;

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_maybe_succeeded_0[2];

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_name_ordered_maybe_succeeded_0[2];

static const MR_Integer libs__maybe_util__libs__maybe_util__functor_number_map_maybe_succeeded_0[2];

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_0;

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_1;

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_need_to_requantify_0[2];

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_name_ordered_need_to_requantify_0[2];

static const MR_Integer libs__maybe_util__libs__maybe_util__functor_number_map_need_to_requantify_0[2];

static MR_Box MR_CALL 
libs__maybe_util__and_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
libs__maybe_util____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__maybe_util____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__maybe_util____Unify____maybe_succeeded_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__maybe_util____Compare____maybe_succeeded_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__maybe_util____Unify____need_to_requantify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__maybe_util____Compare____need_to_requantify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__maybe_util_scalar_common_1[1][6];

static /* final */ const MR_Box libs__maybe_util_scalar_common_2[1][3];




static /* final */ const MR_Box libs__maybe_util_scalar_common_1[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0))
  },
};

static /* final */ const MR_Box libs__maybe_util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__maybe_util_scalar_common_1[0])),
    ((MR_Box) (libs__maybe_util__and_list_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};





static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "unchanged",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_maybe_changed_0[2] = {
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_0,
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_name_ordered_maybe_changed_0[2] = {
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_1,
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_changed_0_0
};

static const MR_Integer libs__maybe_util__libs__maybe_util__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__maybe_util____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (libs__maybe_util____Compare____maybe_changed_0_0_10001)),
  (MR_String) "libs.maybe_util",
  (MR_String) "maybe_changed",
  { libs__maybe_util__libs__maybe_util__enum_name_ordered_maybe_changed_0 },
  { libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__maybe_util__libs__maybe_util__functor_number_map_maybe_changed_0,

};

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_0 = {
  (MR_String) "did_not_succeed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_1 = {
  (MR_String) "succeeded",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_maybe_succeeded_0[2] = {
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_0,
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_1
};

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_name_ordered_maybe_succeeded_0[2] = {
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_0,
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_maybe_succeeded_0_1
};

static const MR_Integer libs__maybe_util__libs__maybe_util__functor_number_map_maybe_succeeded_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__maybe_util____Unify____maybe_succeeded_0_0_10001)),
  ((MR_Box) (libs__maybe_util____Compare____maybe_succeeded_0_0_10001)),
  (MR_String) "libs.maybe_util",
  (MR_String) "maybe_succeeded",
  { libs__maybe_util__libs__maybe_util__enum_name_ordered_maybe_succeeded_0 },
  { libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_maybe_succeeded_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__maybe_util__libs__maybe_util__functor_number_map_maybe_succeeded_0,

};

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_0 = {
  (MR_String) "need_to_requantify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_1 = {
  (MR_String) "do_not_need_to_requantify",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_need_to_requantify_0[2] = {
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_0,
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_1
};

static const MR_EnumFunctorDescPtr libs__maybe_util__libs__maybe_util__enum_name_ordered_need_to_requantify_0[2] = {
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_1,
  &libs__maybe_util__libs__maybe_util__enum_functor_desc_need_to_requantify_0_0
};

static const MR_Integer libs__maybe_util__libs__maybe_util__functor_number_map_need_to_requantify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__maybe_util__libs__maybe_util__type_ctor_info_need_to_requantify_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__maybe_util____Unify____need_to_requantify_0_0_10001)),
  ((MR_Box) (libs__maybe_util____Compare____need_to_requantify_0_0_10001)),
  (MR_String) "libs.maybe_util",
  (MR_String) "need_to_requantify",
  { libs__maybe_util__libs__maybe_util__enum_name_ordered_need_to_requantify_0 },
  { libs__maybe_util__libs__maybe_util__enum_ordinal_ordered_need_to_requantify_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__maybe_util__libs__maybe_util__functor_number_map_need_to_requantify_0,

};

void MR_CALL 
libs__maybe_util____Compare____need_to_requantify_0_0(
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
libs__maybe_util____Unify____need_to_requantify_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__maybe_util____Compare____maybe_succeeded_0_0(
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
libs__maybe_util____Unify____maybe_succeeded_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__maybe_util____Compare____maybe_changed_0_0(
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
libs__maybe_util____Unify____maybe_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
libs__maybe_util__and_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = libs__maybe_util__and_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
libs__maybe_util__and_list_1_f_0(
  MR_Word Succeededs_3)
{
  MR_Word AllSucceeded_4;
  MR_Box conv1_AllSucceeded_4;

  conv1_AllSucceeded_4 = mercury__list__foldl_3_f_0((MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&libs__maybe_util_scalar_common_2[0]), Succeededs_3, ((MR_Box) ((MR_Integer) 1)));
  AllSucceeded_4 = ((MR_Word) (conv1_AllSucceeded_4));
  return AllSucceeded_4;
}

MR_Word MR_CALL 
libs__maybe_util__and_2_f_0(
  MR_Word SucceededA_4,
  MR_Word SucceededB_5)
{
  MR_bool succeeded = (SucceededA_4 == (MR_Integer) 1);
  MR_Word HeadVar__3_3;

  if (succeeded)
    succeeded = (SucceededB_5 == (MR_Integer) 1);
  if (succeeded)
    HeadVar__3_3 = (MR_Integer) 1;
  else
    HeadVar__3_3 = (MR_Integer) 0;
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
libs__maybe_util____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__maybe_util____Unify____maybe_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__maybe_util____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__maybe_util____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__maybe_util____Unify____maybe_succeeded_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__maybe_util____Unify____maybe_succeeded_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__maybe_util____Compare____maybe_succeeded_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__maybe_util____Compare____maybe_succeeded_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__maybe_util____Unify____need_to_requantify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__maybe_util____Unify____need_to_requantify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__maybe_util____Compare____need_to_requantify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__maybe_util____Compare____need_to_requantify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__maybe_util__init(void)
{
}

void mercury__libs__maybe_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0);
	MR_register_type_ctor_info(&libs__maybe_util__libs__maybe_util__type_ctor_info_need_to_requantify_0);
}

void mercury__libs__maybe_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__maybe_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.maybe_util.
