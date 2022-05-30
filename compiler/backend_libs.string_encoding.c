/*
** Automatically generated from `string_encoding.m'
** by the Mercury compiler,
** version rotd-2022-05-30
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


// :- module backend_libs.string_encoding.
// :- implementation.

/*
INIT mercury__backend_libs__string_encoding__init
ENDINIT
*/

#include "backend_libs.string_encoding.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0;

static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1;

static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_ordinal_ordered_string_encoding_0[2];

static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_name_ordered_string_encoding_0[2];

static const MR_Integer backend_libs__string_encoding__backend_libs__string_encoding__functor_number_map_string_encoding_0[2];

static MR_bool MR_CALL 
backend_libs__string_encoding____Unify____string_encoding_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__string_encoding____Compare____string_encoding_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0 = {
  (MR_String) "utf8",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1 = {
  (MR_String) "utf16",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_ordinal_ordered_string_encoding_0[2] = {
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0,
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__string_encoding__backend_libs__string_encoding__enum_name_ordered_string_encoding_0[2] = {
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_1,
  &backend_libs__string_encoding__backend_libs__string_encoding__enum_functor_desc_string_encoding_0_0
};

static const MR_Integer backend_libs__string_encoding__backend_libs__string_encoding__functor_number_map_string_encoding_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__string_encoding__backend_libs__string_encoding__type_ctor_info_string_encoding_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__string_encoding____Unify____string_encoding_0_0_10001)),
  ((MR_Box) (backend_libs__string_encoding____Compare____string_encoding_0_0_10001)),
  (MR_String) "backend_libs.string_encoding",
  (MR_String) "string_encoding",
  { backend_libs__string_encoding__backend_libs__string_encoding__enum_name_ordered_string_encoding_0 },
  { backend_libs__string_encoding__backend_libs__string_encoding__enum_ordinal_ordered_string_encoding_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__string_encoding__backend_libs__string_encoding__functor_number_map_string_encoding_0,

};

void MR_CALL 
backend_libs__string_encoding____Compare____string_encoding_0_0(
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
backend_libs__string_encoding____Unify____string_encoding_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
backend_libs__string_encoding__from_code_unit_list_3_p_0(
  MR_Word Encoding_4,
  MR_Word CodeUnits_5,
  MR_String * String_6)
{
  MR_bool succeeded;

  switch (Encoding_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = mercury__string__from_utf16_code_unit_list_2_p_0(CodeUnits_5, String_6);
      break;
    case (MR_Integer) 0:
      succeeded = mercury__string__from_utf8_code_unit_list_2_p_0(CodeUnits_5, String_6);
      break;
  }
  return succeeded;
}

void MR_CALL 
backend_libs__string_encoding__to_code_unit_list_3_p_0(
  MR_Word Encoding_4,
  MR_String String_5,
  MR_Word * CodeUnits_6)
{
  switch (Encoding_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__to_utf16_code_unit_list_2_p_0(String_5, CodeUnits_6);
      break;
    case (MR_Integer) 0:
      mercury__string__to_utf8_code_unit_list_2_p_0(String_5, CodeUnits_6);
      break;
  }
}

MR_Word MR_CALL 
backend_libs__string_encoding__target_string_encoding_1_f_0(
  MR_Word Target_3)
{
  MR_Word Encoding_4;

  switch (Target_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Encoding_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Encoding_4 = (MR_Integer) 1;
      break;
  }
  return Encoding_4;
}

void MR_CALL 
backend_libs__string_encoding__target_char_range_3_p_0(
  MR_Word _Target_4,
  MR_Integer * Min_5,
  MR_Integer * Max_6)
{
  backend_libs__string_encoding__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_99_104_97_114_95_114_97_110_103_101_95_95_91_49_93_95_48_3_p_0(Min_5, Max_6);
}

void MR_CALL 
backend_libs__string_encoding__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_99_104_97_114_95_114_97_110_103_101_95_95_91_49_93_95_48_3_p_0(
  MR_Integer * Min_5,
  MR_Integer * Max_6)
{
  *Min_5 = (MR_Integer) 0;
  *Max_6 = (MR_Integer) 1114111;
}

static MR_bool MR_CALL 
backend_libs__string_encoding____Unify____string_encoding_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__string_encoding____Unify____string_encoding_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__string_encoding____Compare____string_encoding_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__string_encoding____Compare____string_encoding_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__string_encoding__init(void)
{
}

void mercury__backend_libs__string_encoding__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__string_encoding__backend_libs__string_encoding__type_ctor_info_string_encoding_0);
}

void mercury__backend_libs__string_encoding__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__string_encoding__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.string_encoding.
