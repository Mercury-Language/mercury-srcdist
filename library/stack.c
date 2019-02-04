/*
** Automatically generated from `stack.m'
** by the Mercury compiler,
** version 2018-10-23
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


// :- module stack.
// :- implementation.

/*
INIT mercury__stack__init
ENDINIT
*/

#include "stack.mih"


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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__stack__stack__functor_number_map_stack_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__stack__list__pti_list_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__stack__stack__notag_functor_desc_stack_1;

static MR_Integer MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__stack____Compare____stack_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__stack_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__stack_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__stack_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__stack_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stack_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stack_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
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
#include "math.mh"
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



static const MR_Integer mercury__stack__stack__functor_number_map_stack_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__stack__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_NotagFunctorDesc mercury__stack__stack__notag_functor_desc_stack_1 = {
  (MR_String) "stack",
  (MR_PseudoTypeInfo) (&mercury__stack__list__pti_list_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__stack__stack__type_ctor_info_stack_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__stack____Unify____stack_1_0_10001)),
  ((MR_Box) (mercury__stack____Compare____stack_1_0_10001)),
  (MR_String) "stack",
  (MR_String) "stack",
  {     &mercury__stack__stack__notag_functor_desc_stack_1 },
  {     &mercury__stack__stack__notag_functor_desc_stack_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__stack__stack__functor_number_map_stack_1
};

static MR_Integer MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__stack____Compare____stack_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      mercury__list____Compare____list_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__stack__depth_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Stack_3,
  MR_Integer * Depth_4)
{
  {
    MR_Word Elems_5 = (MR_Word) (Stack_3);

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_6, Elems_5, (MR_Integer) 0, Depth_4);
  }
}

MR_Integer MR_CALL 
mercury__stack__depth_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Stack_3)
{
  {
    MR_Integer Depth_4;
    MR_Word Elems_8 = (MR_Word) (Stack_3);

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Elems_8, (MR_Integer) 0, &Depth_4);
    return Depth_4;
  }
}

void MR_CALL 
mercury__stack__det_pop_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box * Elem_4,
  MR_Word STATE_VARIABLE_Stack_0_7,
  MR_Word * STATE_VARIABLE_Stack_8)
{
  {
    MR_Word Var_15 = (MR_Word) (STATE_VARIABLE_Stack_0_7);

    if ((Var_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140stack.det_pop\'/3", (MR_String) "pop from empty stack");
        return;
      }
    }
    else
    {
      MR_Word Elems_6;

      *Elem_4 = (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0));
      Elems_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
      *STATE_VARIABLE_Stack_8 = (MR_Word) (Elems_6);
    }
  }
}

MR_bool MR_CALL 
mercury__stack__pop_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box * Elem_4,
  MR_Word STATE_VARIABLE_Stack_0_7,
  MR_Word * STATE_VARIABLE_Stack_8)
{
  {
    MR_bool succeeded;
    MR_Word Elems_6;
    MR_Word Var_9 = (MR_Word) (STATE_VARIABLE_Stack_0_7);

    succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *Elem_4 = (MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0));
      Elems_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 1))));
      *STATE_VARIABLE_Stack_8 = (MR_Word) (Elems_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__stack__det_top_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Stack_3,
  MR_Box * Elem_4)
{
  {
    MR_Word Var_11 = (MR_Word) (Stack_3);

    if ((Var_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140stack.det_top\'/2", (MR_String) "top of empty stack");
        return;
      }
    }
    else
      *Elem_4 = (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0));
  }
}

MR_Box MR_CALL 
mercury__stack__det_top_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Stack_3)
{
  {
    MR_Box X_4;
    MR_Word Var_13 = (MR_Word) (Stack_3);

    if ((Var_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140stack.det_top\'/2", (MR_String) "top of empty stack");
    }
    else
      X_4 = (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0));
    return X_4;
  }
}

MR_bool MR_CALL 
mercury__stack__top_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_Box * Elem_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = (MR_Word) (HeadVar__1_1);

    succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *Elem_3 = (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__stack__push_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Stack_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_Stack_7;

    mercury__stack__push_list_3_p_0(TypeInfo_for_T_9, Xs_5, STATE_VARIABLE_Stack_0_6, &STATE_VARIABLE_Stack_7);
    return STATE_VARIABLE_Stack_7;
  }
}

void MR_CALL 
mercury__stack__push_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Stack_0_2,
  MR_Word * STATE_VARIABLE_Stack_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Stack_3 = STATE_VARIABLE_Stack_0_2;
    else
    {
      MR_Box Elem_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Elems_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Stack_12_12;
      MR_Word Elems_19 = (MR_Word) (STATE_VARIABLE_Stack_0_2);
      MR_Word Var_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Stack_0_2;

      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = Elem_7;
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Elems_19));
      }
      STATE_VARIABLE_Stack_12_12 = (MR_Word) (Var_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Elems_8;
      next_value_of_STATE_VARIABLE_Stack_0_2 = STATE_VARIABLE_Stack_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Stack_0_2 = next_value_of_STATE_VARIABLE_Stack_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__stack__push_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Elem_4,
  MR_Word STATE_VARIABLE_Stack_0_7,
  MR_Word * STATE_VARIABLE_Stack_8)
{
  {
    MR_Word Elems_6 = (MR_Word) (STATE_VARIABLE_Stack_0_7);
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = Elem_4;
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Elems_6));
    }
    *STATE_VARIABLE_Stack_8 = (MR_Word) (Var_10);
  }
}

MR_Word MR_CALL 
mercury__stack__push_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Stack_0_6,
  MR_Box X_5)
{
  {
    MR_Word STATE_VARIABLE_Stack_7;
    MR_Word Elems_14 = (MR_Word) (STATE_VARIABLE_Stack_0_6);
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = X_5;
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Elems_14));
    }
    STATE_VARIABLE_Stack_7 = (MR_Word) (Var_16);
    return STATE_VARIABLE_Stack_7;
  }
}

MR_bool MR_CALL 
mercury__stack__is_full_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__stack__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_2 = (MR_Word) (HeadVar__1_1);

    succeeded = (Var_2 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

void MR_CALL 
mercury__stack__init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

MR_Word MR_CALL 
mercury__stack__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  }
}

static MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stack____Unify____stack_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stack____Compare____stack_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stack____Compare____stack_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__stack__init(void)
{
}

void mercury__stack__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__stack__stack__type_ctor_info_stack_1);
}

void mercury__stack__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__stack__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module stack.
