/*
** Automatically generated from `mutvar.m'
** by the Mercury compiler,
** version rotd-2025-08-19
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


// :- module mutvar.
// :- implementation.

/*
INIT mercury__mutvar__init
ENDINIT
*/

#include "mutvar.mih"


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
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
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




static const MR_Integer mercury__mutvar__mutvar__functor_number_map_mutvar_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mutvar__private_builtin__pti_ref_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__mutvar__mutvar__notag_functor_desc_mutvar_1;

static MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__mutvar_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__mutvar_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__mutvar_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__mutvar_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__mutvar_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mutvar_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__mutvar_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mutvar_scalar_common_2[0])),
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
#include "mutvar.mh"
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


static const MR_Integer mercury__mutvar__mutvar__functor_number_map_mutvar_1[1] = { (MR_Integer) 0 };

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mutvar__private_builtin__pti_ref_1__pseudo_1 = {
  &mercury__private_builtin__private_builtin__type_ctor_info_ref_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_NotagFunctorDesc mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) (&mercury__mutvar__private_builtin__pti_ref_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__mutvar__mutvar__type_ctor_info_mutvar_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__mutvar____Unify____mutvar_1_0_10001)),
  ((MR_Box) (mercury__mutvar____Compare____mutvar_1_0_10001)),
  (MR_String) "mutvar",
  (MR_String) "mutvar",
  { &mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 },
  { &mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__mutvar__mutvar__functor_number_map_mutvar_1,

};

void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__private_builtin____Compare____ref_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__private_builtin____Unify____ref_1_0(TypeInfo_for_T_7, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__mutvar__clear_mutvar_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
{
#define MR_PROC_LABEL mercury__mutvar__clear_mutvar_1_p_0

	MR_Word Ref;

	Ref = HeadVar__1_1 ;
		{

    *(MR_Word *) Ref = 0;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__mutvar__set_mutvar_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__mutvar__set_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref = HeadVar__1_1 ;
	X = (MR_Word) HeadVar__2_2 ;
		{

    *(MR_Word *) Ref = X;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__mutvar__get_mutvar_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__mutvar__get_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref = HeadVar__1_1 ;
		{

    X = * (MR_Word *) Ref;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) X;
}
}

void MR_CALL 
mercury__mutvar__new_mutvar0_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar0_1_p_0

	MR_Word Ref;

		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);


		;}
#undef MR_PROC_LABEL
	*HeadVar__1_1  = Ref;
}
}

void MR_CALL 
mercury__mutvar__new_mutvar_2_p_1(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Word * Ref_4)
{
  MR_Word Ref0_5;

{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_1

	MR_Word Ref;

		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);


		;}
#undef MR_PROC_LABEL
	Ref0_5  = Ref;
}
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_1

	MR_Word Ref;
	MR_Word X;

	Ref = Ref0_5 ;
	X = (MR_Word) X_3 ;
		{

    *(MR_Word *) Ref = X;


		;}
#undef MR_PROC_LABEL
}
  *Ref_4 = Ref0_5;
}

void MR_CALL 
mercury__mutvar__new_mutvar_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Word * Ref_4)
{
  MR_Word Ref0_5;

{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_0

	MR_Word Ref;

		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);


		;}
#undef MR_PROC_LABEL
	Ref0_5  = Ref;
}
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref = Ref0_5 ;
	X = (MR_Word) X_3 ;
		{

    *(MR_Word *) Ref = X;


		;}
#undef MR_PROC_LABEL
}
  *Ref_4 = Ref0_5;
}

static MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__mutvar____Unify____mutvar_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mutvar____Compare____mutvar_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mutvar__init(void)
{
}

void mercury__mutvar__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__mutvar__mutvar__type_ctor_info_mutvar_1);
}

void mercury__mutvar__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mutvar__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mutvar.
