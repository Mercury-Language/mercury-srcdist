/*
** Automatically generated from `string.builder.m'
** by the Mercury compiler,
** version rotd-2023-12-09
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


// :- module string.builder.
// :- implementation.

/*
INIT mercury__string__builder__init
ENDINIT
*/

#include "string.builder.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__string__builder__string__builder__enum_functor_desc_handle_0_0;

static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_ordinal_ordered_handle_0[1];

static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_name_ordered_handle_0[1];

static const MR_Integer mercury__string__builder__string__builder__functor_number_map_handle_0[1];

static const MR_Integer mercury__string__builder__string__builder__functor_number_map_state_0[1];

static const MR_FA_TypeInfo_Struct1 mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury__string__builder__string__builder__notag_functor_desc_state_0;

static MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__builder____Compare____handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__builder____Compare____state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mercury__string__builder_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__builder_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__builder_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__builder_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__string__builder_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_3[0])),
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


static const MR_EnumFunctorDesc mercury__string__builder__string__builder__enum_functor_desc_handle_0_0 = {
  (MR_String) "handle",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_ordinal_ordered_handle_0[1] = { &mercury__string__builder__string__builder__enum_functor_desc_handle_0_0 };

static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_name_ordered_handle_0[1] = { &mercury__string__builder__string__builder__enum_functor_desc_handle_0_0 };

static const MR_Integer mercury__string__builder__string__builder__functor_number_map_handle_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__string__builder__string__builder__type_ctor_info_handle_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__string__builder____Unify____handle_0_0_10001)),
  ((MR_Box) (mercury__string__builder____Compare____handle_0_0_10001)),
  (MR_String) "string.builder",
  (MR_String) "handle",
  { mercury__string__builder__string__builder__enum_name_ordered_handle_0 },
  { mercury__string__builder__string__builder__enum_ordinal_ordered_handle_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__string__builder__string__builder__functor_number_map_handle_0,

};

static const MR_Integer mercury__string__builder__string__builder__functor_number_map_state_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_NotagFunctorDesc mercury__string__builder__string__builder__notag_functor_desc_state_0 = {
  (MR_String) "state",
  (MR_PseudoTypeInfo) (&mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__string__builder__string__builder__type_ctor_info_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string__builder____Unify____state_0_0_10001)),
  ((MR_Box) (mercury__string__builder____Compare____state_0_0_10001)),
  (MR_String) "string.builder",
  (MR_String) "state",
  { &mercury__string__builder__string__builder__notag_functor_desc_state_0 },
  { &mercury__string__builder__string__builder__notag_functor_desc_state_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__string__builder__string__builder__functor_number_map_state_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__character__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001))
};

void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0(
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word RevStrs0_10 = (MR_Word) (STATE_VARIABLE_State_0_8);
  MR_String UniqueStr_11;
  MR_Word RevStrs_12;
  MR_Box conv0_Copy;

{
#define MR_PROC_LABEL mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
	Value = (MR_Word) ((MR_Box) (Str_6)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	conv0_Copy  = (MR_Box) Copy;
  UniqueStr_11 = ((MR_String) (conv0_Copy));
}
  {
    RevStrs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrs_12, 0) = ((MR_Box) (UniqueStr_11));
    MR_hl_field(1, RevStrs_12, 1) = ((MR_Box) (RevStrs0_10));
  }
  *STATE_VARIABLE_State_9 = (MR_Word) (RevStrs_12);
}

void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0(
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word RevStrings0_10 = (MR_Word) (STATE_VARIABLE_State_0_8);
  MR_Word RevStrings_11;
  MR_String Var_12;

  mercury__string__char_to_string_2_p_0(Char_6, &Var_12);
  {
    RevStrings_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrings_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, RevStrings_11, 1) = ((MR_Box) (RevStrings0_10));
  }
  *STATE_VARIABLE_State_9 = (MR_Word) (RevStrings_11);
}

void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0(
  MR_String * HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8)
{
  *HeadVar__2_2 = (MR_String) "<<string builder stream>>";
  *STATE_VARIABLE_State_8 = STATE_VARIABLE_State_0_7;
}

void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0(
  MR_Word STATE_VARIABLE_State_0_6,
  MR_Word * STATE_VARIABLE_State_7)
{
  *STATE_VARIABLE_State_7 = STATE_VARIABLE_State_0_6;
}

void MR_CALL 
mercury__string__builder____Compare____state_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string__builder_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__string__builder_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
mercury__string__builder____Compare____handle_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0(void)
{
  return MR_TRUE;
}

MR_String MR_CALL 
mercury__string__builder__to_string_1_f_0(
  MR_Word State_3)
{
  MR_String String_4;
  MR_Word RevStrings_5 = (MR_Word) (State_3);
  MR_Word Var_6;

  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_5, &Var_6);
  String_4 = mercury__string__append_list_1_f_0(Var_6);
  return String_4;
}

MR_bool MR_CALL 
mercury__string__builder__total_num_code_points_is_at_most_2_p_0(
  MR_Word State_3,
  MR_Integer MaxLen_4)
{
  MR_bool succeeded;
  MR_Word RevStrs_5 = (MR_Word) (State_3);

  succeeded = mercury__string__builder__total_num_code_points_is_at_most_loop_2_p_0(RevStrs_5, MaxLen_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__builder__total_num_code_points_is_at_most_loop_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_String Str_4 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Strs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer StrLen_7;
      MR_Integer MaxLen1_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      mercury__string__count_code_points_loop_4_p_0(Str_4, (MR_Integer) 0, (MR_Integer) 0, &StrLen_7);
      succeeded = (HeadVar__2_2 >= StrLen_7);
      if (succeeded)
      {
        MaxLen1_8 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) StrLen_7);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Strs_5;
        next_value_of_HeadVar__2_2 = MaxLen1_8;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__builder__total_num_code_points_1_f_0(
  MR_Word State_3)
{
  MR_Integer TotalLen_4;
  MR_Word RevStrs_5 = (MR_Word) (State_3);

  mercury__string__builder__total_num_code_points_acc_3_p_0(RevStrs_5, (MR_Integer) 0, &TotalLen_4);
  return TotalLen_4;
}

void MR_CALL 
mercury__string__builder__total_num_code_points_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalLen_0_2,
  MR_Integer * STATE_VARIABLE_TotalLen_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TotalLen_3 = STATE_VARIABLE_TotalLen_0_2;
    else
    {
      MR_String Str_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Strs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_TotalLen_12_12;
      MR_Integer Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_TotalLen_0_2;

      mercury__string__count_code_points_loop_4_p_0(Str_7, (MR_Integer) 0, (MR_Integer) 0, &Var_13);
      STATE_VARIABLE_TotalLen_12_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalLen_0_2 + (MR_Unsigned) Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Strs_8;
      next_value_of_STATE_VARIABLE_TotalLen_0_2 = STATE_VARIABLE_TotalLen_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TotalLen_0_2 = next_value_of_STATE_VARIABLE_TotalLen_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__builder__append_strings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_2,
  MR_Word * STATE_VARIABLE_State_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_3 = STATE_VARIABLE_State_0_2;
    else
    {
      MR_String Str_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Strs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_12_12;
      MR_Word RevStrs0_13 = (MR_Word) (STATE_VARIABLE_State_0_2);
      MR_String UniqueStr_14;
      MR_Word RevStrs_15;
      MR_Box conv0_Copy;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_State_0_2;

{
#define MR_PROC_LABEL mercury__string__builder__append_strings_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
	Value = (MR_Word) ((MR_Box) (Str_7)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	conv0_Copy  = (MR_Box) Copy;
      UniqueStr_14 = ((MR_String) (conv0_Copy));
}
      {
        RevStrs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevStrs_15, 0) = ((MR_Box) (UniqueStr_14));
        MR_hl_field(1, RevStrs_15, 1) = ((MR_Box) (RevStrs0_13));
      }
      STATE_VARIABLE_State_12_12 = (MR_Word) (RevStrs_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Strs_8;
      next_value_of_STATE_VARIABLE_State_0_2 = STATE_VARIABLE_State_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_State_0_2 = next_value_of_STATE_VARIABLE_State_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__builder__append_string_3_p_0(
  MR_String Str_4,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_Word RevStrs0_6 = (MR_Word) (STATE_VARIABLE_State_0_9);
  MR_String UniqueStr_7;
  MR_Word RevStrs_8;
  MR_Box conv0_Copy;

{
#define MR_PROC_LABEL mercury__string__builder__append_string_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0) ;
	Value = (MR_Word) ((MR_Box) (Str_4)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	conv0_Copy  = (MR_Box) Copy;
  UniqueStr_7 = ((MR_String) (conv0_Copy));
}
  {
    RevStrs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrs_8, 0) = ((MR_Box) (UniqueStr_7));
    MR_hl_field(1, RevStrs_8, 1) = ((MR_Box) (RevStrs0_6));
  }
  *STATE_VARIABLE_State_10 = (MR_Word) (RevStrs_8);
}

void MR_CALL 
mercury__string__builder__append_char_3_p_0(
  MR_Char Char_4,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word RevStrings0_6 = (MR_Word) (STATE_VARIABLE_State_0_8);
  MR_Word RevStrings_7;
  MR_String Var_10;

  mercury__string__char_to_string_2_p_0(Char_4, &Var_10);
  {
    RevStrings_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrings_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, RevStrings_7, 1) = ((MR_Box) (RevStrings0_6));
  }
  *STATE_VARIABLE_State_9 = (MR_Word) (RevStrings_7);
}

MR_Word MR_CALL 
mercury__string__builder__init_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__builder____Unify____handle_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__string__builder____Compare____handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__builder____Compare____handle_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__builder____Unify____state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__builder____Compare____state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__builder____Compare____state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_9;

  mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0(((MR_Char) (MR_Word) wrapper_arg_2), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_State_9);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_State_9));
}

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_9;

  mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0(((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_State_9);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_State_9));
}

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;
  MR_Word conv0_STATE_VARIABLE_State_8;

  mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0(&conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_State_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_State_8));
}

static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_7;

  mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0(((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_7));
}

void mercury__string__builder__init(void)
{
}

void mercury__string__builder__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__builder__string__builder__type_ctor_info_handle_0);
	MR_register_type_ctor_info(&mercury__string__builder__string__builder__type_ctor_info_state_0);
}

void mercury__string__builder__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__builder__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module string.builder.
