/*
** Automatically generated from `pair.m'
** by the Mercury compiler,
** version rotd-2025-06-06
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


// :- module pair.
// :- implementation.

/*
INIT mercury__pair__init
ENDINIT
*/

#include "pair.mih"


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




static const MR_PseudoTypeInfo mercury__pair__pair__field_types_pair_2_0[2];

static const MR_DuFunctorDesc mercury__pair__pair__du_functor_desc_pair_2_0;

static const MR_DuFunctorDescPtr mercury__pair__pair__du_stag_ordered_pair_2_0[1];

static const MR_DuPtagLayout mercury__pair__pair__du_ptag_ordered_pair_2[1];

static const MR_DuFunctorDescPtr mercury__pair__pair__du_name_ordered_pair_2[1];

static const MR_Integer mercury__pair__pair__functor_number_map_pair_2[1];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1;

static MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__pair____Compare____pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__pair____Compare____pair_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__pair_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pair_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pair_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__pair_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pair_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pair_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_2[0])),
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


static const MR_PseudoTypeInfo mercury__pair__pair__field_types_pair_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__pair__pair__du_functor_desc_pair_2_0 = {
  (MR_String) "-",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pair__pair__field_types_pair_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pair__pair__du_stag_ordered_pair_2_0[1] = { &mercury__pair__pair__du_functor_desc_pair_2_0 };

static const MR_DuPtagLayout mercury__pair__pair__du_ptag_ordered_pair_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pair__pair__du_stag_ordered_pair_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pair__pair__du_name_ordered_pair_2[1] = { &mercury__pair__pair__du_functor_desc_pair_2_0 };

static const MR_Integer mercury__pair__pair__functor_number_map_pair_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__pair__pair__type_ctor_info_pair_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pair____Unify____pair_2_0_10001)),
  ((MR_Box) (mercury__pair____Compare____pair_2_0_10001)),
  (MR_String) "pair",
  (MR_String) "pair",
  { mercury__pair__pair__du_name_ordered_pair_2 },
  { mercury__pair__pair__du_ptag_ordered_pair_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__pair__pair__functor_number_map_pair_2,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct mercury__pair__pair__type_ctor_info_pair_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__pair____Unify____pair_1_0_10001)),
  ((MR_Box) (mercury__pair____Compare____pair_1_0_10001)),
  (MR_String) "pair",
  (MR_String) "pair",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__pair____Compare____pair_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__pair____Compare____pair_2_0(TypeInfo_for_T_6, TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_for_T_5, TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__pair____Compare____pair_2_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
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
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
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
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_9, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_10, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__pair__pair_2_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Box X_4,
  MR_Box Y_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = X_4;
    MR_hl_field(0, HeadVar__3_3, 1) = Y_5;
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__pair__snd_2_p_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word P_3,
  MR_Box * X_4)
{
  *X_4 = (MR_hl_field(0, P_3, 1));
}

MR_Box MR_CALL 
mercury__pair__snd_1_f_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word HeadVar__1_1)
{
  MR_Box Y_4 = (MR_hl_field(0, HeadVar__1_1, 1));

  return Y_4;
}

void MR_CALL 
mercury__pair__fst_2_p_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word P_3,
  MR_Box * X_4)
{
  *X_4 = (MR_hl_field(0, P_3, 0));
}

MR_Box MR_CALL 
mercury__pair__fst_1_f_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word HeadVar__1_1)
{
  MR_Box X_3 = (MR_hl_field(0, HeadVar__1_1, 0));

  return X_3;
}

static MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__pair____Unify____pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__pair____Compare____pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pair____Compare____pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__pair____Unify____pair_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__pair____Compare____pair_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pair____Compare____pair_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__pair__init(void)
{
}

void mercury__pair__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__pair__pair__type_ctor_info_pair_2);
  MR_register_type_ctor_info(&mercury__pair__pair__type_ctor_info_pair_1);
}

void mercury__pair__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__pair__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module pair.
