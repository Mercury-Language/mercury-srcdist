/*
** Automatically generated from `queue.m'
** by the Mercury compiler,
** version rotd-2024-03-14
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


// :- module queue.
// :- implementation.

/*
INIT mercury__queue__init
ENDINIT
*/

#include "queue.mih"


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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__queue__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__queue__queue__field_types_queue_1_0[2];

static const MR_ConstString mercury__queue__queue__field_names_queue_1_0[2];

static const MR_DuFunctorDesc mercury__queue__queue__du_functor_desc_queue_1_0;

static const MR_DuFunctorDescPtr mercury__queue__queue__du_stag_ordered_queue_1_0[1];

static const MR_DuPtagLayout mercury__queue__queue__du_ptag_ordered_queue_1[1];

static const MR_DuFunctorDescPtr mercury__queue__queue__du_name_ordered_queue_1[1];

static const MR_Integer mercury__queue__queue__functor_number_map_queue_1[1];

static void MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * On_3);

static MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__queue____Compare____queue_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__queue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__queue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__queue_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__queue_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__queue_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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


static const MR_FA_PseudoTypeInfo_Struct1 mercury__queue__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__queue__queue__field_types_queue_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__queue__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__queue__list__pti_list_1__pseudo_1)
};

static const MR_ConstString mercury__queue__queue__field_names_queue_1_0[2] = {
  (MR_String) "on_list",
  (MR_String) "off_list"
};

static const MR_DuFunctorDesc mercury__queue__queue__du_functor_desc_queue_1_0 = {
  (MR_String) "queue",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__queue__queue__field_types_queue_1_0,
  mercury__queue__queue__field_names_queue_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__queue__queue__du_stag_ordered_queue_1_0[1] = { &mercury__queue__queue__du_functor_desc_queue_1_0 };

static const MR_DuPtagLayout mercury__queue__queue__du_ptag_ordered_queue_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__queue__queue__du_stag_ordered_queue_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__queue__queue__du_name_ordered_queue_1[1] = { &mercury__queue__queue__du_functor_desc_queue_1_0 };

static const MR_Integer mercury__queue__queue__functor_number_map_queue_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__queue__queue__type_ctor_info_queue_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__queue____Unify____queue_1_0_10001)),
  ((MR_Box) (mercury__queue____Compare____queue_1_0_10001)),
  (MR_String) "queue",
  (MR_String) "queue",
  { mercury__queue__queue__du_name_ordered_queue_1 },
  { mercury__queue__queue__du_ptag_ordered_queue_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__queue__queue__functor_number_map_queue_1,

};

void MR_CALL 
mercury__queue____Compare____queue_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__list____Compare____list_1_0(TypeInfo_for_T_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__list____Compare____list_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__queue__get_from_back_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Box * Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word On0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word On_7;
  MR_Word Off_8;

  if ((On0_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_20;
    MR_Box Var_21;

    succeeded = (Off0_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_21 = (MR_hl_field(1, Off0_6, (MR_Integer) 0));
      Var_20 = ((MR_Word) ((MR_hl_field(1, Off0_6, (MR_Integer) 1))));
      if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Elem_4 = Var_21;
        On_7 = (MR_Word) ((MR_Unsigned) 0U);
        Off_8 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer N_12;
        MR_Word RevOn_13;
        MR_Integer Var_16;
        MR_Word Var_18;

        mercury__list__length_acc_3_p_0(TypeInfo_for_T_19, Off0_6, (MR_Integer) 0, &N_12);
        Var_16 = (N_12 / (MR_Integer) 2);
        succeeded = mercury__list__split_list_4_p_0(TypeInfo_for_T_19, Var_16, Off0_6, &Off_8, &RevOn_13);
        if (succeeded)
        {
          mercury__list__reverse_2_p_0(TypeInfo_for_T_19, RevOn_13, &Var_18);
          succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            *Elem_4 = (MR_hl_field(1, Var_18, (MR_Integer) 0));
            On_7 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          }
        }
      }
    }
  }
  else
  {
    *Elem_4 = (MR_hl_field(1, On0_5, (MR_Integer) 0));
    On_7 = ((MR_Word) ((MR_hl_field(1, On0_5, (MR_Integer) 1))));
    Off_8 = Off0_6;
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (On_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (Off_8));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__queue__put_list_on_front_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Elems_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word On_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_7;

  mercury__list__append_3_p_1(TypeInfo_for_T_8, Elems_4, Off_6, &Var_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (On_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_7));
  }
}

MR_Word MR_CALL 
mercury__queue__put_list_on_front_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_Queue_0_6,
  MR_Word Elems_5)
{
  MR_Word STATE_VARIABLE_Queue_7;
  MR_Word On_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Queue_0_6, (MR_Integer) 0))));
  MR_Word Off_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Queue_0_6, (MR_Integer) 1))));
  MR_Word Var_11;

  mercury__list__append_3_p_1(TypeInfo_for_T_8, Elems_5, Off_10, &Var_11);
  {
    STATE_VARIABLE_Queue_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Queue_7, 0) = ((MR_Box) (On_9));
    MR_hl_field(0, STATE_VARIABLE_Queue_7, 1) = ((MR_Box) (Var_11));
  }
  return STATE_VARIABLE_Queue_7;
}

void MR_CALL 
mercury__queue__put_on_front_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word On_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = Elem_4;
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Off_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (On_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_7));
  }
}

MR_Word MR_CALL 
mercury__queue__put_on_front_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_Queue_0_6,
  MR_Box Elem_5)
{
  MR_Word STATE_VARIABLE_Queue_7;
  MR_Word On_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Queue_0_6, (MR_Integer) 0))));
  MR_Word Off_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Queue_0_6, (MR_Integer) 1))));
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = Elem_5;
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Off_10));
  }
  {
    STATE_VARIABLE_Queue_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Queue_7, 0) = ((MR_Box) (On_9));
    MR_hl_field(0, STATE_VARIABLE_Queue_7, 1) = ((MR_Box) (Var_11));
  }
  return STATE_VARIABLE_Queue_7;
}

MR_Word MR_CALL 
mercury__queue__delete_all_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Box T_5)
{
  MR_Word STATE_VARIABLE_Q_7;

  mercury__queue__delete_all_3_p_0(TypeInfo_for_T_8, T_5, STATE_VARIABLE_Q_0_6, &STATE_VARIABLE_Q_7);
  return STATE_VARIABLE_Q_7;
}

void MR_CALL 
mercury__queue__delete_all_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word On0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word On_7;
  MR_Word Off_8;
  MR_Word On1_9;
  MR_Word Off1_10;

  mercury__list__delete_all_3_p_1(TypeInfo_for_T_13, On0_5, Elem_4, &On1_9);
  mercury__list__delete_all_3_p_1(TypeInfo_for_T_13, Off0_6, Elem_4, &Off1_10);
  if ((Off1_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__list__reverse_2_p_0(TypeInfo_for_T_13, On1_9, &Off_8);
    On_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    On_7 = On1_9;
    Off_8 = Off1_10;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (On_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Off_8));
  }
}

MR_Word MR_CALL 
mercury__queue__to_list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word On_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Off_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Var_5;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_6, On_3, &Var_5);
  mercury__list__append_3_p_1(TypeInfo_for_T_6, Off_4, Var_5, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__queue__from_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (List_3));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__queue__list_to_queue_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 1) = ((MR_Box) (List_3));
  }
}

MR_Word MR_CALL 
mercury__queue__list_to_queue_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  MR_Word Q_4;

  {
    Q_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Q_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Q_4, 1) = ((MR_Box) (Xs_3));
  }
  return Q_4;
}

void MR_CALL 
mercury__queue__length_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Integer * Length_5)
{
  MR_Word On_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Off_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer LengthOn_6;
  MR_Integer LengthOff_7;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_8, On_3, (MR_Integer) 0, &LengthOn_6);
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_8, Off_4, (MR_Integer) 0, &LengthOff_7);
  *Length_5 = (MR_Integer) ((MR_Unsigned) LengthOn_6 + (MR_Unsigned) LengthOff_7);
}

MR_Integer MR_CALL 
mercury__queue__length_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Q_3)
{
  MR_Integer N_4;
  MR_Word On_6 = ((MR_Word) ((MR_hl_field(0, Q_3, (MR_Integer) 0))));
  MR_Word Off_7 = ((MR_Word) ((MR_hl_field(0, Q_3, (MR_Integer) 1))));
  MR_Integer LengthOn_8;
  MR_Integer LengthOff_9;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, On_6, (MR_Integer) 0, &LengthOn_8);
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Off_7, (MR_Integer) 0, &LengthOff_9);
  N_4 = (MR_Integer) ((MR_Unsigned) LengthOn_8 + (MR_Unsigned) LengthOff_9);
  return N_4;
}

MR_bool MR_CALL 
mercury__queue__get_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box * Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word On0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off0_6;
  MR_Word On_7;
  MR_Word Off_8;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *Elem_4 = (MR_hl_field(1, Var_11, (MR_Integer) 0));
    Off0_6 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
    if ((Off0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0(TypeInfo_for_T_12, On0_5, &Off_8);
      On_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      On_7 = On0_5;
      Off_8 = Off0_6;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (On_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (Off_8));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__queue__first_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Box * Elem_4)
{
  MR_bool succeeded;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *Elem_4 = (MR_hl_field(1, Var_6, (MR_Integer) 0));
  return succeeded;
}

void MR_CALL 
mercury__queue__put_list_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Xs_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word On0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word On_7;
  MR_Word Off_8;

  if ((Off0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    On_7 = On0_5;
    Off_8 = Xs_4;
  }
  else
  {
    Off_8 = Off0_6;
    mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(Xs_4, On0_5, &On_7);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (On_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Off_8));
  }
}

MR_Word MR_CALL 
mercury__queue__put_list_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word Xs_5)
{
  MR_Word STATE_VARIABLE_Q_7;
  MR_Word On0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
  MR_Word Off0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
  MR_Word On_11;
  MR_Word Off_12;

  if ((Off0_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    On_11 = On0_9;
    Off_12 = Xs_5;
  }
  else
  {
    Off_12 = Off0_10;
    mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(Xs_5, On0_9, &On_11);
  }
  {
    STATE_VARIABLE_Q_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Q_7, 0) = ((MR_Box) (On_11));
    MR_hl_field(0, STATE_VARIABLE_Q_7, 1) = ((MR_Box) (Off_12));
  }
  return STATE_VARIABLE_Q_7;
}

static void MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * On_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *On_3 = HeadVar__2_2;
    else
    {
      MR_Box X_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_9, 0) = X_5;
        MR_hl_field(1, Var_9, 1) = ((MR_Box) (HeadVar__2_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_6;
      next_value_of_HeadVar__2_2 = Var_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__queue__put_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Box T_5)
{
  MR_Word STATE_VARIABLE_Q_7;

  mercury__queue__put_3_p_0(TypeInfo_for_T_8, T_5, STATE_VARIABLE_Q_0_6, &STATE_VARIABLE_Q_7);
  return STATE_VARIABLE_Q_7;
}

void MR_CALL 
mercury__queue__put_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word On0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Off0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word On_7;
  MR_Word Off_8;

  if ((Off0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    On_7 = On0_5;
    {
      Off_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Off_8, 0) = Elem_4;
      MR_hl_field(1, Off_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    {
      On_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, On_7, 0) = Elem_4;
      MR_hl_field(1, On_7, 1) = ((MR_Box) (On0_5));
    }
    Off_8 = Off0_6;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (On_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Off_8));
  }
}

MR_bool MR_CALL 
mercury__queue__is_full_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_2)
{
  MR_bool succeeded;

  succeeded = mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0();
  return succeeded;
}

MR_bool MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__queue__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = (Var_3 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_bool MR_CALL 
mercury__queue__equal_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word OnA_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word OffA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word OnB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word OffB_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word QA_7;
  MR_Word QB_8;
  MR_Word Var_9;
  MR_Word Var_10;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_11, OnA_3, &Var_9);
  mercury__list__append_3_p_1(TypeInfo_for_T_11, OffA_4, Var_9, &QA_7);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_11, OnB_5, &Var_10);
  mercury__list__append_3_p_1(TypeInfo_for_T_11, OffB_6, Var_10, &QB_8);
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, QA_7, QB_8);
  return succeeded;
}

void MR_CALL 
mercury__queue__init_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__queue_scalar_common_4[0]);
}

MR_Word MR_CALL 
mercury__queue__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (&mercury__queue_scalar_common_4[0]);
}

static MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__queue____Unify____queue_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__queue____Compare____queue_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__queue____Compare____queue_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__queue__init(void)
{
}

void mercury__queue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__queue__queue__type_ctor_info_queue_1);
}

void mercury__queue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__queue__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module queue.
