/*
** Automatically generated from `term_size_prof_builtin.m'
** by the Mercury compiler,
** version rotd-2025-02-21
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


// :- module term_size_prof_builtin.
// :- implementation.

/*
INIT mercury__term_size_prof_builtin__init
ENDINIT
*/

#include "term_size_prof_builtin.mih"


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




static const MR_EnumFunctorDesc mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0;

static const MR_EnumFunctorDesc mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1;

static const MR_EnumFunctorDescPtr mercury__term_size_prof_builtin__term_size_prof_builtin__enum_ordinal_ordered_complexity_is_active_0[2];

static const MR_EnumFunctorDescPtr mercury__term_size_prof_builtin__term_size_prof_builtin__enum_name_ordered_complexity_is_active_0[2];

static const MR_Integer mercury__term_size_prof_builtin__term_size_prof_builtin__functor_number_map_complexity_is_active_0[2];

static MR_bool MR_CALL 
mercury__term_size_prof_builtin____Unify____complexity_is_active_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_size_prof_builtin____Compare____complexity_is_active_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_size_prof_builtin____Unify____complexity_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_size_prof_builtin____Compare____complexity_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__term_size_prof_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__term_size_prof_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__term_size_prof_builtin_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__term_size_prof_builtin_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_size_prof_builtin_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_size_prof_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_size_prof_builtin_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_size_prof_builtin_scalar_common_2[0])),
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
#include "term_size_prof_builtin.mh"
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


static const MR_EnumFunctorDesc mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0 = {
  (MR_String) "is_inactive",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1 = {
  (MR_String) "is_active",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__term_size_prof_builtin__term_size_prof_builtin__enum_ordinal_ordered_complexity_is_active_0[2] = {
  &mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0,
  &mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1
};

static const MR_EnumFunctorDescPtr mercury__term_size_prof_builtin__term_size_prof_builtin__enum_name_ordered_complexity_is_active_0[2] = {
  &mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1,
  &mercury__term_size_prof_builtin__term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0
};

static const MR_Integer mercury__term_size_prof_builtin__term_size_prof_builtin__functor_number_map_complexity_is_active_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_size_prof_builtin__term_size_prof_builtin__type_ctor_info_complexity_is_active_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_size_prof_builtin____Unify____complexity_is_active_0_0_10001)),
  ((MR_Box) (mercury__term_size_prof_builtin____Compare____complexity_is_active_0_0_10001)),
  (MR_String) "term_size_prof_builtin",
  (MR_String) "complexity_is_active",
  { mercury__term_size_prof_builtin__term_size_prof_builtin__enum_name_ordered_complexity_is_active_0 },
  { mercury__term_size_prof_builtin__term_size_prof_builtin__enum_ordinal_ordered_complexity_is_active_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_size_prof_builtin__term_size_prof_builtin__functor_number_map_complexity_is_active_0,

};

const MR_TypeCtorInfo_Struct mercury__term_size_prof_builtin__term_size_prof_builtin__type_ctor_info_complexity_slot_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_size_prof_builtin____Unify____complexity_slot_0_0_10001)),
  ((MR_Box) (mercury__term_size_prof_builtin____Compare____complexity_slot_0_0_10001)),
  (MR_String) "term_size_prof_builtin",
  (MR_String) "complexity_slot",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__term_size_prof_builtin____Compare____complexity_slot_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__term_size_prof_builtin____Unify____complexity_slot_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__term_size_prof_builtin____Compare____complexity_is_active_0_0(
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
mercury__term_size_prof_builtin____Unify____complexity_is_active_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__term_size_prof_builtin__complexity_redo_proc_1_p_0(
  MR_Integer Slot_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__complexity_redo_proc_1_p_0

	MR_Integer Slot;

	Slot = Slot_1 ;
		{

    // Mention Slot to avoid warning.
    MR_fatal_error("complexity_redo_proc");


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_size_prof_builtin__complexity_fail_proc_1_p_0(
  MR_Integer Slot_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__complexity_fail_proc_1_p_0

	MR_Integer Slot;

	Slot = Slot_1 ;
		{

    // Mention Slot to avoid warning.
    MR_fatal_error("complexity_fail_proc");


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
  return succeeded;
}

void MR_CALL 
mercury__term_size_prof_builtin__complexity_exit_proc_1_p_0(
  MR_Integer Slot_1)
{
{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__complexity_exit_proc_1_p_0

	MR_Integer Slot;

	Slot = Slot_1 ;
		{

    // Mention Slot to avoid warning.
    MR_fatal_error("complexity_exit_proc");


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__term_size_prof_builtin__complexity_call_proc_1_p_0(
  MR_Integer * Slot_1)
{
{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__complexity_call_proc_1_p_0

	MR_Integer Slot;

		{

    // Mention Slot to avoid warning.
    MR_fatal_error("complexity_call_proc");


		;}
#undef MR_PROC_LABEL
	*Slot_1  = Slot;
}
}

void MR_CALL 
mercury__term_size_prof_builtin__complexity_is_active_1_p_0(
  MR_Word * IsActive_1)
{
{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__complexity_is_active_1_p_0

	MR_Word IsActive;

		{

    // Mention IsActive to avoid warning.
    MR_fatal_error("complexity_mark_active");


		;}
#undef MR_PROC_LABEL
	*IsActive_1  = IsActive;
}
}

MR_Integer MR_CALL 
mercury__term_size_prof_builtin__term_size_plus_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Integer HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__term_size_prof_builtin__increment_size_2_p_0(
  MR_Box Term_1,
  MR_Integer Incr_2)
{
{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__increment_size_2_p_0

	MR_Word Term;
	MR_Integer Incr;

	Term = (MR_Word) Term_1 ;
	Incr = Incr_2 ;
		{
{
#ifdef MR_RECORD_TERM_SIZES
  #ifdef MR_DEBUG_TERM_SIZES
    if (MR_heapdebug && MR_lld_print_enabled) {
        printf("increment_size: %p + %d\n",
            (void *) Term, (int) Incr);
    }
  #endif
    MR_mask_field(Term, -1) += Incr;
#else
    MR_fatal_error("increment_size: term size profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__term_size_prof_builtin__measure_size_acc_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__measure_size_acc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Term;
	MR_Integer Size0;
	MR_Integer Size;

	TypeInfo_for_T = TypeInfo_for_T_4 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Size0 = HeadVar__2_2 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
#ifdef MR_RECORD_TERM_SIZES
    MR_TypeInfo type_info;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    Size = MR_term_size(type_info, Term) + Size0;
  #ifdef MR_DEBUG_TERM_SIZES
    if (MR_heapdebug && MR_lld_print_enabled) {
        printf("measure_size_acc: %p + %d -> %d\n",
            (void *) Term, (int) Size0, (int) Size);
    }
  #endif
#else
    MR_fatal_error("measure_size_acc: term size profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = Size;
}
}

void MR_CALL 
mercury__term_size_prof_builtin__measure_size_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__term_size_prof_builtin__measure_size_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Term;
	MR_Integer Size;

	TypeInfo_for_T = TypeInfo_for_T_3 ;
	Term = (MR_Word) HeadVar__1_1 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
#ifdef MR_RECORD_TERM_SIZES
    MR_TypeInfo type_info;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    Size = MR_term_size(type_info, Term);
  #ifdef MR_DEBUG_TERM_SIZES
    if (MR_heapdebug && MR_lld_print_enabled) {
        printf("measure_size: %p -> %d\n",
            (void *) Term, (int) Size);
    }
  #endif
#else
    MR_fatal_error("measure_size: term size profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Size;
}
}

static MR_bool MR_CALL 
mercury__term_size_prof_builtin____Unify____complexity_is_active_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_size_prof_builtin____Unify____complexity_is_active_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_size_prof_builtin____Compare____complexity_is_active_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_size_prof_builtin____Compare____complexity_is_active_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_size_prof_builtin____Unify____complexity_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_size_prof_builtin____Unify____complexity_slot_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_size_prof_builtin____Compare____complexity_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_size_prof_builtin____Compare____complexity_slot_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__term_size_prof_builtin__init(void)
{
}

void mercury__term_size_prof_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_size_prof_builtin__term_size_prof_builtin__type_ctor_info_complexity_is_active_0);
	MR_register_type_ctor_info(&mercury__term_size_prof_builtin__term_size_prof_builtin__type_ctor_info_complexity_slot_0);
}

void mercury__term_size_prof_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_size_prof_builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_size_prof_builtin.
