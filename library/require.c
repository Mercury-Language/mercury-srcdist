/*
** Automatically generated from `require.m'
** by the Mercury compiler,
** version rotd-2021-11-10
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


// :- module require.
// :- implementation.

/*
INIT mercury__require__init
ENDINIT
*/

#include "require.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "prolog.mih"
#include "random.mih"
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




static MR_Integer MR_CALL 
mercury__require__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__require__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__require__LCMCfn_map__ho5_1_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_18);


static /* final */ const MR_Box mercury__require_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__require_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__require_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__require_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__require_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__require_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__require_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__require_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__require_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__require_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__require_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
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
mercury__require__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__require__report_lookup_error_3_p_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_String Msg_4,
  MR_Box K_5)
{
  {
    MR_String KeyType_7;
    MR_String ValueType_8;
    MR_String ErrorString_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Integer Var_46;
    MR_Integer Var_47;
    MR_Word Var_54;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_47;

{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_K_24 ;
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
    KeyType_7 = mercury__type_desc__type_name_1_f_0(Var_10);
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_V_25 ;
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
	 Var_11  = TypeInfo;
}
    ValueType_8 = mercury__type_desc__type_name_1_f_0(Var_11);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__require_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_47 = func_0(((MR_Box) ((MR_Word) (&mercury__require_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_47 = ((MR_Integer) (conv1_Var_47));
    Var_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_K_24, (MR_Integer) 1, Var_46, K_5, (MR_Word) ((MR_Unsigned) 0U), &Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, &Var_39);
    Var_19 = mercury__string__append_list_1_f_0(Var_39);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ValueType_8));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "\n\tValue Type: "));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (KeyType_7));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Msg_4));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    Var_54 = mercury__require__map__ho5_2_f_in__list_0(Var_12);
    mercury__string__unsafe_append_string_pieces_2_p_0(Var_54, &ErrorString_9);
    {
      mercury__require__error_1_p_0(ErrorString_9);
      return;
    }
  }
}

void MR_CALL 
mercury__require__report_lookup_error_2_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_String Msg_3,
  MR_Box K_4)
{
  {
    MR_String KeyType_5;
    MR_String ErrorString_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_String Var_15;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Integer Var_38;
    MR_Integer Var_39;
    MR_Word Var_46;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_39;

{
#define MR_PROC_LABEL mercury__require__report_lookup_error_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_K_17 ;
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
	 Var_7  = TypeInfo;
}
    KeyType_5 = mercury__type_desc__type_name_1_f_0(Var_7);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__require_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_39 = func_0(((MR_Box) ((MR_Word) (&mercury__require_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_39 = ((MR_Integer) (conv1_Var_39));
    Var_38 = (MR_Integer) ((MR_Unsigned) Var_39 + (MR_Unsigned) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_K_17, (MR_Integer) 1, Var_38, K_4, (MR_Word) ((MR_Unsigned) 0U), &Var_30);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, &Var_31);
    Var_15 = mercury__string__append_list_1_f_0(Var_31);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (KeyType_5));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Msg_3));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_9));
    }
    Var_46 = mercury__require__map__ho5_2_f_in__list_0(Var_8);
    mercury__string__unsafe_append_string_pieces_2_p_0(Var_46, &ErrorString_6);
    {
      mercury__require__error_1_p_0(ErrorString_6);
      return;
    }
  }
}

static MR_Word MR_CALL 
mercury__require__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Integer Var_14;
      MR_Word * AddrSCCcallarg9_17;

{
#define MR_PROC_LABEL mercury__require__map__ho5_2_f_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_14  = Length;
}
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_8, 2) = ((MR_Box) (Var_14));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg9_17 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      mercury__require__LCMCfn_map__ho5_1_3_p_in__list_0(Var_7, AddrSCCcallarg9_17);
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__require__LCMCfn_map__ho5_1_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Integer Var_14;
      MR_Word * AddrSCCcallarg9_17;
      MR_Word HeadVar__3_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_18;

{
#define MR_PROC_LABEL mercury__require__LCMCfn_map__ho5_1_3_p_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_14  = Length;
}
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_8, 2) = ((MR_Box) (Var_14));
      }
      {
        HeadVar__3_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_19, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_19, 1) = NULL;
      }
      AddrSCCcallarg9_17 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_19, (MR_Integer) 1)));
      *AddrOfHeadVar__3_18 = HeadVar__3_19;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_18 = AddrSCCcallarg9_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_18 = next_value_of_AddrOfHeadVar__3_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__require__expect_not_4_p_0(
  MR_Word Goal_5,
  MR_String Module_6,
  MR_String Proc_7,
  MR_String Message_8)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Goal_5)));
    if (succeeded)
    {
      MR_String ErrorMessage_12;
      MR_String Var_22;
      MR_String Var_23;
      MR_String Var_25;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", Message_8, &Var_22);
      mercury__string__append_3_p_2(Proc_7, Var_22, &Var_23);
      mercury__string__append_3_p_2((MR_String) ": ", Var_23, &Var_25);
      mercury__string__append_3_p_2(Module_6, Var_25, &ErrorMessage_12);
      {
        mercury__require__error_1_p_0(ErrorMessage_12);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__require__expect_not_3_p_0(
  MR_Word Goal_4,
  MR_String Module_5,
  MR_String Message_6)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Goal_4)));
    if (succeeded)
    {
      MR_String ErrorMessage_9;
      MR_String Var_17;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", Message_6, &Var_17);
      mercury__string__append_3_p_2(Module_5, Var_17, &ErrorMessage_9);
      {
        mercury__require__error_1_p_0(ErrorMessage_9);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__require__expect_4_p_0(
  MR_Word Goal_5,
  MR_String Module_6,
  MR_String Proc_7,
  MR_String Message_8)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Goal_5)));
    if (!(succeeded))
    {
      MR_String ErrorMessage_12;
      MR_String Var_22;
      MR_String Var_23;
      MR_String Var_25;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", Message_8, &Var_22);
      mercury__string__append_3_p_2(Proc_7, Var_22, &Var_23);
      mercury__string__append_3_p_2((MR_String) ": ", Var_23, &Var_25);
      mercury__string__append_3_p_2(Module_6, Var_25, &ErrorMessage_12);
      {
        mercury__require__error_1_p_0(ErrorMessage_12);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__require__expect_3_p_0(
  MR_Word Goal_4,
  MR_String Module_5,
  MR_String Message_6)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Goal_4)));
    if (!(succeeded))
    {
      MR_String ErrorMessage_9;
      MR_String Var_17;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", Message_6, &Var_17);
      mercury__string__append_3_p_2(Module_5, Var_17, &ErrorMessage_9);
      {
        mercury__require__error_1_p_0(ErrorMessage_9);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__require__require_2_p_0(
  MR_Word Goal_3,
  MR_String Message_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Goal_3)));
    if (!(succeeded))
      {
        mercury__require__error_1_p_0(Message_4);
        return;
      }
  }
}

void MR_CALL 
mercury__require__unexpected_3_p_0(
  MR_String Module_4,
  MR_String Proc_5,
  MR_String What_6)
{
  {
    MR_String ErrorMessage_7;
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", What_6, &Var_17);
    mercury__string__append_3_p_2(Proc_5, Var_17, &Var_18);
    mercury__string__append_3_p_2((MR_String) ": ", Var_18, &Var_20);
    mercury__string__append_3_p_2(Module_4, Var_20, &ErrorMessage_7);
    {
      mercury__require__error_1_p_0(ErrorMessage_7);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__unexpected_3_f_0(
  MR_Word TypeInfo_9_9,
  MR_String Module_5,
  MR_String Proc_6,
  MR_String What_7)
{
  {
    MR_Box HeadVar__4_8;
    MR_String ErrorMessage_13;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", What_7, &Var_23);
    mercury__string__append_3_p_2(Proc_6, Var_23, &Var_24);
    mercury__string__append_3_p_2((MR_String) ": ", Var_24, &Var_26);
    mercury__string__append_3_p_2(Module_5, Var_26, &ErrorMessage_13);
    mercury__require__error_1_p_0(ErrorMessage_13);
    return HeadVar__4_8;
  }
}

void MR_CALL 
mercury__require__unexpected_2_p_0(
  MR_String Module_3,
  MR_String What_4)
{
  {
    MR_String ErrorMessage_5;
    MR_String Var_13;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", What_4, &Var_13);
    mercury__string__append_3_p_2(Module_3, Var_13, &ErrorMessage_5);
    {
      mercury__require__error_1_p_0(ErrorMessage_5);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__unexpected_2_f_0(
  MR_Word TypeInfo_7_7,
  MR_String Module_4,
  MR_String What_5)
{
  {
    MR_Box HeadVar__3_6;
    MR_String ErrorMessage_10;
    MR_String Var_18;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", What_5, &Var_18);
    mercury__string__append_3_p_2(Module_4, Var_18, &ErrorMessage_10);
    mercury__require__error_1_p_0(ErrorMessage_10);
    return HeadVar__3_6;
  }
}

void MR_CALL 
mercury__require__sorry_3_p_0(
  MR_String Module_4,
  MR_String Proc_5,
  MR_String What_6)
{
  {
    MR_String ErrorMessage_7;
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", What_6, &Var_17);
    mercury__string__append_3_p_2(Proc_5, Var_17, &Var_18);
    mercury__string__append_3_p_2((MR_String) ": ", Var_18, &Var_20);
    mercury__string__append_3_p_2(Module_4, Var_20, &ErrorMessage_7);
    {
      mercury__require__error_1_p_0(ErrorMessage_7);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__sorry_3_f_0(
  MR_Word TypeInfo_9_9,
  MR_String Module_5,
  MR_String Proc_6,
  MR_String What_7)
{
  {
    MR_Box HeadVar__4_8;
    MR_String ErrorMessage_13;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", What_7, &Var_23);
    mercury__string__append_3_p_2(Proc_6, Var_23, &Var_24);
    mercury__string__append_3_p_2((MR_String) ": ", Var_24, &Var_26);
    mercury__string__append_3_p_2(Module_5, Var_26, &ErrorMessage_13);
    mercury__require__error_1_p_0(ErrorMessage_13);
    return HeadVar__4_8;
  }
}

void MR_CALL 
mercury__require__sorry_2_p_0(
  MR_String Module_3,
  MR_String What_4)
{
  {
    MR_String ErrorMessage_5;
    MR_String Var_13;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", What_4, &Var_13);
    mercury__string__append_3_p_2(Module_3, Var_13, &ErrorMessage_5);
    {
      mercury__require__error_1_p_0(ErrorMessage_5);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__sorry_2_f_0(
  MR_Word TypeInfo_7_7,
  MR_String Module_4,
  MR_String What_5)
{
  {
    MR_Box HeadVar__3_6;
    MR_String ErrorMessage_10;
    MR_String Var_18;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", What_5, &Var_18);
    mercury__string__append_3_p_2(Module_4, Var_18, &ErrorMessage_10);
    mercury__require__error_1_p_0(ErrorMessage_10);
    return HeadVar__3_6;
  }
}

MR_Box MR_CALL 
mercury__require__func_error_2_f_0(
  MR_Word TypeInfo_7_7,
  MR_String Pred_4,
  MR_String Message_5)
{
  {
    MR_Box HeadVar__3_6;

    mercury__require__error_2_p_0(Pred_4, Message_5);
    return HeadVar__3_6;
  }
}

void MR_CALL 
mercury__require__error_2_p_0(
  MR_String Pred_3,
  MR_String Message_4)
{
  {
    MR_String Var_5;
    MR_String Var_6;

    mercury__string__append_3_p_2((MR_String) ": ", Message_4, &Var_6);
    mercury__string__append_3_p_2(Pred_3, Var_6, &Var_5);
    {
      mercury__require__error_1_p_0(Var_5);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__func_error_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_String Message_3)
{
  {
    MR_Box HeadVar__2_4;

    mercury__require__error_1_p_0(Message_3);
    return HeadVar__2_4;
  }
}

void MR_CALL 
mercury__require__error_1_p_0(
  MR_String Message_2)
{
  {
    MR_Word Var_3 = (MR_Word) (Message_2);

    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (Var_3)));
      return;
    }
  }
}

void mercury__require__init(void)
{
}

void mercury__require__init_type_tables(void)
{
}

void mercury__require__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__require__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module require.
