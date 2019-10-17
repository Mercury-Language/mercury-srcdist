/*
** Automatically generated from `std_util.m'
** by the Mercury compiler,
** version rotd-2019-10-17
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


// :- module std_util.
// :- implementation.

/*
INIT mercury__std_util__init
ENDINIT
*/

#include "std_util.mih"


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




static MR_Integer MR_CALL 
mercury__std_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__std_util_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__std_util_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__std_util_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__std_util_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__std_util_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__std_util_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__std_util_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__std_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__std_util_scalar_common_2[0])),
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



static MR_Integer MR_CALL 
mercury__std_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

MR_Word MR_CALL 
mercury__std_util__maybe_func_2_f_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word TypeInfo_for_T2_8,
  MR_Word PF_4,
  MR_Box X_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Box Y_6;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), PF_4, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (PF_4)), X_5, &Y_6);
    if (succeeded)
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = Y_6;
      }
    else
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__std_util__maybe_pred_3_p_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Word Pred_4,
  MR_Box X_5,
  MR_Word * Y_6)
{
  {
    MR_bool succeeded;
    MR_Box Z_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_4, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Pred_4)), X_5, &Z_7);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Y_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Z_7;
      }
    else
      *Y_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

MR_bool MR_CALL 
mercury__std_util__negate_1_p_0(
  MR_Word P_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), P_2, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (P_2)));
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__std_util__isnt_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3,
  MR_Box X_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_3, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (P_3)), X_4);
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__std_util__id_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box X_3)
{
  {
    MR_Box X_2 = X_3;

    return X_2;
  }
}

MR_Box MR_CALL 
mercury__std_util__pow_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word F_5,
  MR_Integer N_6,
  MR_Box X_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_6 == (MR_Integer) 0);
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);
      MR_Box Var_10;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
      MR_Integer next_value_of_N_6;
      MR_Box next_value_of_X_7;

      Var_10 = func_0(((MR_Box) (F_5)), X_7);
      // direct tailcall eliminated
      ;
      next_value_of_N_6 = Var_8;
      next_value_of_X_7 = Var_10;
      N_6 = next_value_of_N_6;
      X_7 = next_value_of_X_7;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Box MR_CALL 
mercury__std_util__converse_3_f_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Word TypeInfo_for_T3_10,
  MR_Word F_5,
  MR_Box X_6,
  MR_Box Y_7)
{
  {
    MR_Box HeadVar__4_4;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));

    HeadVar__4_4 = func_0(((MR_Box) (F_5)), Y_7, X_6);
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__std_util__compose_3_f_0(
  MR_Word TypeInfo_for_T2_9,
  MR_Word TypeInfo_for_T3_10,
  MR_Word TypeInfo_for_T1_11,
  MR_Word F_5,
  MR_Word G_6,
  MR_Box X_7)
{
  {
    MR_Box HeadVar__4_4;
    MR_Box Var_8;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), G_6, (MR_Integer) 1))));
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);

    Var_8 = func_0(((MR_Box) (G_6)), X_7);
    func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
    HeadVar__4_4 = func_1(((MR_Box) (F_5)), Var_8);
    return HeadVar__4_4;
  }
}

void mercury__std_util__init(void)
{
}

void mercury__std_util__init_type_tables(void)
{
}

void mercury__std_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__std_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module std_util.
