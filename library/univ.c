/*
** Automatically generated from `univ.m'
** by the Mercury compiler,
** version rotd-2024-02-16
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


// :- module univ.
// :- implementation.

/*
INIT mercury__univ__init
ENDINIT
*/

#include "univ.mih"
#include "univ.mh"


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




static const MR_PseudoTypeInfo mercury__univ__univ__field_types_univ_0_0[1];

static const MR_DuExistLocn mercury__univ__univ__exist_locns_univ_0_0[1];

static const MR_DuExistInfo mercury__univ__univ__exist_info_univ_0_0;

static const MR_DuFunctorDesc mercury__univ__univ__du_functor_desc_univ_0_0;

static const MR_DuFunctorDescPtr mercury__univ__univ__du_stag_ordered_univ_0_0[1];

static const MR_DuPtagLayout mercury__univ__univ__du_ptag_ordered_univ_0[1];

static const MR_DuFunctorDescPtr mercury__univ__univ__du_name_ordered_univ_0[1];

static const MR_Integer mercury__univ__univ__functor_number_map_univ_0[1];

static void MR_CALL 
mercury__univ__unravel_univ_2_p_0(
  MR_Word * TypeInfo_for_T_5,
  MR_Word Univ_3,
  MR_Box * X_4);

static void MR_CALL 
mercury__univ__construct_univ_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3,
  MR_Word * Univ_4);

static MR_Word MR_CALL 
mercury__univ__map__ho1_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__univ__LCMC__func__map__ho1__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static MR_bool MR_CALL 
mercury__univ____Unify____univ_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__univ____Compare____univ_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__univ_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__univ_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__univ_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__univ_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__univ_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__univ_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__univ_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__univ_scalar_common_2[0])),
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
#include "univ.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"

#line 136 "univ.m"
void 
ML_construct_univ(
  MR_Word TypeInfo_for_T_5,
  MR_Word X_3,
  MR_Word * Univ_4)
#line 136 "univ.m"
{
#line 136 "univ.m"
	mercury__univ__construct_univ_2_p_0((MR_Word) TypeInfo_for_T_5, (MR_Box) X_3, (MR_Word *) Univ_4);
}

#line 144 "univ.m"
void 
ML_unravel_univ(
  MR_Word * TypeInfo_for_T_5,
  MR_Word Univ_3,
  MR_Word * X_4)
#line 144 "univ.m"
{
#line 144 "univ.m"
	mercury__univ__unravel_univ_2_p_0((MR_Word *) TypeInfo_for_T_5, (MR_Word) Univ_3, (MR_Box *) X_4);
}


static const MR_PseudoTypeInfo mercury__univ__univ__field_types_univ_0_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 513) };

static const MR_DuExistLocn mercury__univ__univ__exist_locns_univ_0_0[1] = {
  {
    INT16_C(0),
    INT16_C(-1)
  }
};

static const MR_DuExistInfo mercury__univ__univ__exist_info_univ_0_0 = {
  INT16_C(1),
  INT16_C(0),
  INT16_C(0),
  mercury__univ__univ__exist_locns_univ_0_0,
  NULL
};

static const MR_DuFunctorDesc mercury__univ__univ__du_functor_desc_univ_0_0 = {
  (MR_String) "univ_cons",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__univ__univ__field_types_univ_0_0,
  NULL,
  NULL,
  &mercury__univ__univ__exist_info_univ_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__univ__univ__du_stag_ordered_univ_0_0[1] = { &mercury__univ__univ__du_functor_desc_univ_0_0 };

static const MR_DuPtagLayout mercury__univ__univ__du_ptag_ordered_univ_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__univ__univ__du_stag_ordered_univ_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__univ__univ__du_name_ordered_univ_0[1] = { &mercury__univ__univ__du_functor_desc_univ_0_0 };

static const MR_Integer mercury__univ__univ__functor_number_map_univ_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__univ__univ__type_ctor_info_univ_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__univ____Unify____univ_0_0_10001)),
  ((MR_Box) (mercury__univ____Compare____univ_0_0_10001)),
  (MR_String) "univ",
  (MR_String) "univ",
  { mercury__univ__univ__du_name_ordered_univ_0 },
  { mercury__univ__univ__du_ptag_ordered_univ_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__univ__univ__functor_number_map_univ_0,

};

void MR_CALL 
mercury__univ____Compare____univ_0_0(
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
    MR_Word TypeInfo_8_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_9_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));

    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_8_8, TypeInfo_9_9, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__univ____Unify____univ_0_0(
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
    MR_Word TypeInfo_7_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeInfo_8_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));

    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_7_7, TypeInfo_8_8, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
mercury__univ__unravel_univ_2_p_0(
  MR_Word * TypeInfo_for_T_5,
  MR_Word Univ_3,
  MR_Box * X_4)
{
  *TypeInfo_for_T_5 = ((MR_Word) ((MR_hl_field(0, Univ_3, (MR_Integer) 0))));
  *X_4 = (MR_hl_field(0, Univ_3, (MR_Integer) 1));
}

static void MR_CALL 
mercury__univ__construct_univ_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3,
  MR_Word * Univ_4)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Univ_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, base, 1) = X_3;
  }
}

MR_Box MR_CALL 
mercury__univ__univ_value_1_f_0(
  MR_Word * TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Box X_3;

  *TypeInfo_for_T_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  X_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
  return X_3;
}

MR_Word MR_CALL 
mercury__univ__univ_type_1_f_0(
  MR_Word Univ_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_5_5 = ((MR_Word) ((MR_hl_field(0, Univ_3, (MR_Integer) 0))));

{
#define MR_PROC_LABEL mercury__univ__univ_type_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_5_5 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = TypeInfo;
}
  return HeadVar__2_2;
}

void MR_CALL 
mercury__univ__det_univ_to_type_2_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Univ_3,
  MR_Box * X_4)
{
  MR_bool succeeded;
  MR_Box X0_5;
  MR_Word TypeInfo_12_31 = ((MR_Word) ((MR_hl_field(0, Univ_3, (MR_Integer) 0))));
  MR_Box T0_30 = (MR_hl_field(0, Univ_3, (MR_Integer) 1));

  succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_12_31, TypeInfo_for_T_22, T0_30, &X0_5);
  if (succeeded)
    *X_4 = X0_5;
  else
  {
    MR_Word TypeInfo_5_33 = ((MR_Word) ((MR_hl_field(0, Univ_3, (MR_Integer) 0))));
    MR_String UnivTypeName_6;
    MR_String ObjectTypeName_7;
    MR_String ErrorString_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__univ__det_univ_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_5_33 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_9  = TypeInfo;
}
    UnivTypeName_6 = mercury__type_desc__type_name_1_f_0(Var_9);
{
#define MR_PROC_LABEL mercury__univ__det_univ_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_22 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_10  = TypeInfo;
}
    ObjectTypeName_7 = mercury__type_desc__type_name_1_f_0(Var_10);
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (ObjectTypeName_7));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_String) "\tObject Type: "));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (UnivTypeName_6));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) ((MR_String) "\tUniv Type: "));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) ((MR_String) "det_univ_to_type: conversion failed\n"));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
    }
    Var_35 = mercury__univ__map__ho1_2_f_in__list_0(Var_11);
    mercury__string__unsafe_append_string_pieces_2_p_0(Var_35, &ErrorString_8);
    {
      mercury__require__error_1_p_0(ErrorString_8);
      return;
    }
  }
}

static MR_Word MR_CALL 
mercury__univ__map__ho1_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Integer Var_13;
    MR_Word * AddrSCCcallarg_9_14;

{
#define MR_PROC_LABEL mercury__univ__map__ho1_2_f_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__univ__LCMC__func__map__ho1__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__univ__LCMC__func__map__ho1__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Integer Var_13;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

{
#define MR_PROC_LABEL mercury__univ__LCMC__func__map__ho1__1_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
      }
      {
        HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_16, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_16, 1) = NULL;
      }
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_15 = AddrSCCcallarg_9_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__univ__univ_1_f_2(
  MR_Word TypeInfo_for_T_5,
  MR_Box * X_3,
  MR_Word Univ_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_14 = ((MR_Word) ((MR_hl_field(0, Univ_4, (MR_Integer) 0))));
  MR_Box T0_13 = (MR_hl_field(0, Univ_4, (MR_Integer) 1));

  succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_12_14, TypeInfo_for_T_5, T0_13, X_3);
  return succeeded;
}

MR_Word MR_CALL 
mercury__univ__univ_1_f_1(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
{
  MR_Word Univ_4;
  MR_Word Univ0_8;

  {
    Univ0_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Univ0_8, 0) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, Univ0_8, 1) = X_3;
  }
  Univ_4 = Univ0_8;
  return Univ_4;
}

MR_Word MR_CALL 
mercury__univ__univ_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
{
  MR_Word Univ_4;

  {
    Univ_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Univ_4, 0) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, Univ_4, 1) = X_3;
  }
  return Univ_4;
}

void MR_CALL 
mercury__univ__univ_to_type_2_p_2(
  MR_Word TypeInfo_for_T_5,
  MR_Word * Univ_3,
  MR_Box X_4)
{
  MR_Word Univ0_8;

  {
    Univ0_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Univ0_8, 0) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, Univ0_8, 1) = X_4;
  }
  *Univ_3 = Univ0_8;
}

void MR_CALL 
mercury__univ__univ_to_type_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word * Univ_3,
  MR_Box X_4)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Univ_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, base, 1) = X_4;
  }
}

MR_bool MR_CALL 
mercury__univ__univ_to_type_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Univ_3,
  MR_Box * X_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_14 = ((MR_Word) ((MR_hl_field(0, Univ_3, (MR_Integer) 0))));
  MR_Box T0_13 = (MR_hl_field(0, Univ_3, (MR_Integer) 1));

  succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_12_14, TypeInfo_for_T_5, T0_13, X_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__univ__type_to_univ_2_p_2(
  MR_Word TypeInfo_for_T_11,
  MR_Box * T_1,
  MR_Word Univ_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_12 = ((MR_Word) ((MR_hl_field(0, Univ_2, (MR_Integer) 0))));
  MR_Box T0_10 = (MR_hl_field(0, Univ_2, (MR_Integer) 1));

  succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_12_12, TypeInfo_for_T_11, T0_10, T_1);
  return succeeded;
}

void MR_CALL 
mercury__univ__type_to_univ_2_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Box T_1,
  MR_Word * Univ_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Univ_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(0, base, 1) = T_1;
  }
}

void MR_CALL 
mercury__univ__type_to_univ_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box T_1,
  MR_Word * Univ_2)
{
  MR_Word Univ0_5;

  {
    Univ0_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Univ0_5, 0) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(0, Univ0_5, 1) = T_1;
  }
  *Univ_2 = Univ0_5;
}

static MR_bool MR_CALL 
mercury__univ____Unify____univ_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__univ____Unify____univ_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__univ____Compare____univ_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__univ____Compare____univ_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__univ__init(void)
{
}

void mercury__univ__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__univ__univ__type_ctor_info_univ_0);
}

void mercury__univ__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__univ__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module univ.
