/*
** Automatically generated from `compiler_util.m'
** by the Mercury compiler,
** version rotd-2025-12-10
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


// :- module libs.compiler_util.
// :- implementation.

/*
INIT mercury__libs__compiler_util__init
ENDINIT
*/

#include "libs.compiler_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_EnumFunctorDesc libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_0;

static const MR_EnumFunctorDesc libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_1;

static const MR_EnumFunctorDescPtr libs__compiler_util__libs__compiler_util__enum_ordinal_ordered_warning_or_error_0[2];

static const MR_EnumFunctorDescPtr libs__compiler_util__libs__compiler_util__enum_name_ordered_warning_or_error_0[2];

static const MR_Integer libs__compiler_util__libs__compiler_util__functor_number_map_warning_or_error_0[2];

static MR_bool MR_CALL 
libs__compiler_util____Unify____warning_or_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__compiler_util____Compare____warning_or_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_0 = {
  (MR_String) "we_warning",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_1 = {
  (MR_String) "we_error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__compiler_util__libs__compiler_util__enum_ordinal_ordered_warning_or_error_0[2] = {
  &libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_0,
  &libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_1
};

static const MR_EnumFunctorDescPtr libs__compiler_util__libs__compiler_util__enum_name_ordered_warning_or_error_0[2] = {
  &libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_1,
  &libs__compiler_util__libs__compiler_util__enum_functor_desc_warning_or_error_0_0
};

static const MR_Integer libs__compiler_util__libs__compiler_util__functor_number_map_warning_or_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__compiler_util__libs__compiler_util__type_ctor_info_warning_or_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__compiler_util____Unify____warning_or_error_0_0_10001)),
  ((MR_Box) (libs__compiler_util____Compare____warning_or_error_0_0_10001)),
  (MR_String) "libs.compiler_util",
  (MR_String) "warning_or_error",
  { libs__compiler_util__libs__compiler_util__enum_name_ordered_warning_or_error_0 },
  { libs__compiler_util__libs__compiler_util__enum_ordinal_ordered_warning_or_error_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__compiler_util__libs__compiler_util__functor_number_map_warning_or_error_0,

};

void MR_CALL 
libs__compiler_util____Compare____warning_or_error_0_0(
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
libs__compiler_util____Unify____warning_or_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__compiler_util__report_warning_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_String Message_8)
{
  MR_Word HaltAtWarn_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 249, &HaltAtWarn_13);
  switch (HaltAtWarn_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, Message_8);
}

void MR_CALL 
libs__compiler_util__record_warning_opt_table_3_p_0(
  MR_Word OptionTable_4)
{
  MR_Word HaltAtWarn_6;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) ((MR_Integer) 249)), &HaltAtWarn_6);
  switch (HaltAtWarn_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      break;
  }
}

void MR_CALL 
libs__compiler_util__record_warning_3_p_0(
  MR_Word Globals_4)
{
  MR_Word HaltAtWarn_6;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 249, &HaltAtWarn_6);
  switch (HaltAtWarn_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      break;
  }
}

void MR_CALL 
libs__compiler_util__add_warning_5_p_0(
  MR_Word Phase_6,
  MR_Word Option_7,
  MR_Word Pieces_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  MR_Word Spec_10;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_14, 0) = (MR_Box) ((MR_Unsigned) (Option_7));
  }
  {
    Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140libs.compiler_util.add_warning\'/5"));
    MR_hl_field(1, Spec_10, 1) = ((MR_Box) (Var_14));
    MR_hl_field(1, Spec_10, 2) = ((MR_Box) (Phase_6));
    MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_10));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
  }
}

void MR_CALL 
libs__compiler_util__add_error_4_p_0(
  MR_Word Phase_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  MR_Word Spec_8;

  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "predicate \140libs.compiler_util.add_error\'/4"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) (Phase_5));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Pieces_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
  }
}

MR_bool MR_CALL 
libs__compiler_util__warning_or_error_string_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__2_2, (MR_String) "warn") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__2_2, (MR_String) "error") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
libs__compiler_util__warning_or_error_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "error";
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_String) "warn";
      break;
  }
}

MR_bool MR_CALL 
libs__compiler_util__maybe_is_error_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Error_3)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    *Error_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__compiler_util____Unify____warning_or_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__compiler_util____Unify____warning_or_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__compiler_util____Compare____warning_or_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__compiler_util____Compare____warning_or_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__compiler_util__init(void)
{
}

void mercury__libs__compiler_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__compiler_util__libs__compiler_util__type_ctor_info_warning_or_error_0);
}

void mercury__libs__compiler_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__compiler_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.compiler_util.
