/*
** Automatically generated from `term_int.m'
** by the Mercury compiler,
** version rotd-2024-01-11
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


// :- module term_int.
// :- implementation.

/*
INIT mercury__term_int__init
ENDINIT
*/

#include "term_int.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__term_int_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__term_int_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__term_int_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__term_int_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_int_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_int_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_int_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_int_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


MR_Word MR_CALL 
mercury__term_int__uint64_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint64_t UInt64_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;

  Var_9 = mercury__integer__from_uint64_1_f_0(UInt64_4);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__uint32_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint32_t UInt32_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;

  Var_9 = mercury__integer__from_uint32_1_f_0(UInt32_4);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__uint16_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint16_t UInt16_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;
  MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__term_int__uint16_to_decimal_term_2_f_0

	uint16_t U16;
	MR_Integer I;

	U16 = UInt16_4 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
  Var_9 = mercury__integer__int_to_integer_1_f_0(Var_14);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__uint8_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint8_t UInt8_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;
  MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__term_int__uint8_to_decimal_term_2_f_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_4 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
  Var_9 = mercury__integer__int_to_integer_1_f_0(Var_14);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__uint_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Unsigned UInt_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;

  Var_9 = mercury__integer__from_uint_1_f_0(UInt_4);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__int64_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int64_t Int64_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;

  Var_9 = mercury__integer__from_int64_1_f_0(Int64_4);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__int32_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int32_t Int32_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;
  MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__term_int__int32_to_decimal_term_2_f_0

	int32_t I32;
	MR_Integer I;

	I32 = Int32_4 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
  Var_9 = mercury__integer__int_to_integer_1_f_0(Var_14);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__int16_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int16_t Int16_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;
  MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__term_int__int16_to_decimal_term_2_f_0

	int16_t I16;
	MR_Integer I;

	I16 = Int16_4 ;
		{

    I = I16;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
  Var_9 = mercury__integer__int_to_integer_1_f_0(Var_14);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__int8_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int8_t Int8_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;
  MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__term_int__int8_to_decimal_term_2_f_0

	int8_t I8;
	MR_Integer I;

	I8 = Int8_4 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
  Var_9 = mercury__integer__int_to_integer_1_f_0(Var_14);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_Word MR_CALL 
mercury__term_int__int_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Int_4,
  MR_Word Context_5)
{
  MR_Word Term_6;
  MR_Word Const_7;
  MR_Word Var_9;

  Var_9 = mercury__integer__int_to_integer_1_f_0(Int_4);
  {
    Const_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(1, Const_7, 1) = ((MR_Box) (Var_9));
    MR_hl_field(1, Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  {
    Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_6, 0) = ((MR_Box) (Const_7));
    MR_hl_field(0, Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_6, 2) = ((MR_Box) (Context_5));
  }
  return Term_6;
}

MR_bool MR_CALL 
mercury__term_int__term_to_uint64_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint64_t * UInt64_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 4);
          if (succeeded)
            succeeded = mercury__integer__to_uint64_2_p_0(Integer_8, UInt64_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_uint32_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint32_t * UInt32_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 3);
          if (succeeded)
            succeeded = mercury__integer__to_uint32_2_p_0(Integer_8, UInt32_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_uint16_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint16_t * UInt16_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Integer Var_13;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = mercury__integer__to_int_2_p_0(Integer_8, &Var_13);
            if (succeeded)
              succeeded = mercury__uint16__from_int_2_p_0(Var_13, UInt16_4);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_uint8_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint8_t * UInt8_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 1);
          if (succeeded)
            succeeded = mercury__integer__to_uint8_2_p_0(Integer_8, UInt8_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_uint_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Unsigned * UInt_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 0);
          if (succeeded)
            succeeded = mercury__integer__to_uint_2_p_0(Integer_8, UInt_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_int64_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int64_t * Int64_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 4);
          if (succeeded)
            succeeded = mercury__integer__to_int64_2_p_0(Integer_8, Int64_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_int32_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int32_t * Int32_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Integer Var_13;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 3);
          if (succeeded)
          {
            succeeded = mercury__integer__to_int_2_p_0(Integer_8, &Var_13);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_int__term_to_int32_2_p_0

	MR_Integer I;
	int32_t I32;
	MR_bool SUCCESS_INDICATOR;

	I = Var_13 ;
		{

    if (I > (MR_Integer) INT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (I < (MR_Integer) INT32_MIN) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        I32 = (int32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Int32_4  = I32;
	}
succeeded  = SUCCESS_INDICATOR;
}
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_int16_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int16_t * Int16_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Integer Var_13;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = mercury__integer__to_int_2_p_0(Integer_8, &Var_13);
            if (succeeded)
              succeeded = mercury__int16__from_int_2_p_0(Var_13, Int16_4);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_int8_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int8_t * Int8_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 1);
          if (succeeded)
            succeeded = mercury__integer__to_int8_2_p_0(Integer_8, Int8_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__term_to_int_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Integer_8 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_10 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 0);
          if (succeeded)
            succeeded = mercury__integer__to_int_2_p_0(Integer_8, Int_4);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_int__decimal_term_to_int_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Const_5;
  MR_Word Integer_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Const_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_9 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 0))) & (MR_Integer) 3);
        Integer_7 = ((MR_Word) ((MR_hl_field(1, Const_5, (MR_Integer) 1))));
        Var_10 = ((((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
        succeeded = (Var_9 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (Var_10 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 0);
            if (succeeded)
              succeeded = mercury__integer__to_int_2_p_0(Integer_7, Int_4);
          }
        }
      }
    }
  }
  return succeeded;
}

void mercury__term_int__init(void)
{
}

void mercury__term_int__init_type_tables(void)
{
}

void mercury__term_int__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_int__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_int.
