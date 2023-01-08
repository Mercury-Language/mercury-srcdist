/*
** Automatically generated from `term_context.m'
** by the Mercury compiler,
** version rotd-2023-01-08
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


// :- module term_context.
// :- implementation.

/*
INIT mercury__term_context__init
ENDINIT
*/

#include "term_context.mih"


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
#include "term_conversion.mih"
#include "term_int.mih"
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
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__term_context__term_context__field_types_term_context_0_0[2];

static const MR_ConstString mercury__term_context__term_context__field_names_term_context_0_0[2];

static const MR_DuFunctorDesc mercury__term_context__term_context__du_functor_desc_term_context_0_0;

static const MR_DuFunctorDescPtr mercury__term_context__term_context__du_stag_ordered_term_context_0_0[1];

static const MR_DuPtagLayout mercury__term_context__term_context__du_ptag_ordered_term_context_0[1];

static const MR_DuFunctorDescPtr mercury__term_context__term_context__du_name_ordered_term_context_0[1];

static const MR_Integer mercury__term_context__term_context__functor_number_map_term_context_0[1];

static MR_bool MR_CALL 
mercury__term_context____Unify____term_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_context____Compare____term_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__term_context_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__term_context_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__term_context_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__term_context_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__term_context_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_context_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_context_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_context_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_context_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_context_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_context_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



static const MR_PseudoTypeInfo mercury__term_context__term_context__field_types_term_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__term_context__term_context__field_names_term_context_0_0[2] = {
  (MR_String) "context_filename",
  (MR_String) "context_linenumber"
};

static const MR_DuFunctorDesc mercury__term_context__term_context__du_functor_desc_term_context_0_0 = {
  (MR_String) "context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_context__term_context__field_types_term_context_0_0,
  mercury__term_context__term_context__field_names_term_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_context__term_context__du_stag_ordered_term_context_0_0[1] = {
  &mercury__term_context__term_context__du_functor_desc_term_context_0_0
};

static const MR_DuPtagLayout mercury__term_context__term_context__du_ptag_ordered_term_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_context__term_context__du_stag_ordered_term_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term_context__term_context__du_name_ordered_term_context_0[1] = {
  &mercury__term_context__term_context__du_functor_desc_term_context_0_0
};

static const MR_Integer mercury__term_context__term_context__functor_number_map_term_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_context__term_context__type_ctor_info_term_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_context____Unify____term_context_0_0_10001)),
  ((MR_Box) (mercury__term_context____Compare____term_context_0_0_10001)),
  (MR_String) "term_context",
  (MR_String) "term_context",
  { mercury__term_context__term_context__du_name_ordered_term_context_0 },
  { mercury__term_context__term_context__du_ptag_ordered_term_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__term_context__term_context__functor_number_map_term_context_0,

};

void MR_CALL 
mercury__term_context____Compare____term_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__term_context____Compare____term_context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_13  = Res;
}
    succeeded = (Var_13 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_13 == (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_Integer MR_CALL 
mercury__term_context__context_line_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer LineNumber_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return LineNumber_4;
}

MR_String MR_CALL 
mercury__term_context__context_file_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String FileName_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return FileName_3;
}

MR_bool MR_CALL 
mercury__term_context__is_dummy_context_1_p_0(
  MR_Word Context_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_context____Unify____term_context_0_0(Context_2, (MR_Word) (&mercury__term_context_scalar_common_4[0]));
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_context____Unify____term_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__term_context__dummy_context_0_f_0(void)
{
  return (MR_Word) (&mercury__term_context_scalar_common_4[0]);
}

MR_Word MR_CALL 
mercury__term_context__context_init_2_f_0(
  MR_String File_4,
  MR_Integer LineNumber_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (File_4));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (LineNumber_5));
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
mercury__term_context____Unify____term_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_context____Unify____term_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_context____Compare____term_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_context____Compare____term_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__term_context__init(void)
{
}

void mercury__term_context__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_context__term_context__type_ctor_info_term_context_0);
}

void mercury__term_context__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_context__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_context.
