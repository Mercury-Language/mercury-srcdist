/*
** Automatically generated from `require.m'
** by the Mercury compiler,
** version rotd-2017-08-05
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module require. */
/* :- implementation. */

/*
INIT mercury__require__init
ENDINIT
*/

#include "require.mih"


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
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
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
#include "version_array.mh"



static MR_Integer MR_CALL 
mercury__require__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__require__report_lookup_error_3_p_0(
  MR_Word mercury__require__TypeInfo_for_K_24,
  MR_Word mercury__require__TypeInfo_for_V_25,
  MR_String mercury__require__Msg_4,
  MR_Box mercury__require__K_5)
{
  {
    MR_Word mercury__require__TypeCtorInfo_13_40;
    MR_Word mercury__require__TypeClassInfo_for_op_table_49;
    MR_String mercury__require__KeyType_7;
    MR_String mercury__require__ValueType_8;
    MR_String mercury__require__ErrorString_9;
    MR_Word mercury__require__Var_10;
    MR_Word mercury__require__Var_11;
    MR_Word mercury__require__Var_12;
    MR_Word mercury__require__Var_13;
    MR_Word mercury__require__Var_15;
    MR_Word mercury__require__Var_16;
    MR_Word mercury__require__Var_18;
    MR_String mercury__require__Var_19;
    MR_Word mercury__require__Var_20;
    MR_Word mercury__require__Var_22;
    MR_Word mercury__require__Var_23;
    MR_Word mercury__require__V_10_37;
    MR_Word mercury__require__V_9_38;
    MR_Word mercury__require__V_11_39;
    MR_Integer mercury__require__V_10_46;
    MR_Integer mercury__require__V_13_47;
    MR_Box mercury__require__Var_26;
    MR_Box MR_CALL (* mercury__require__func_0)(MR_Box, MR_Box);
    MR_Box mercury__require__conv1_V_13_47;

{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_K_24 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__require__Var_10  = TypeInfo;
}
    mercury__require__KeyType_7 = mercury__type_desc__type_name_1_f_0(mercury__require__Var_10);
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_V_25 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__require__Var_11  = TypeInfo;
}
    mercury__require__ValueType_8 = mercury__type_desc__type_name_1_f_0(mercury__require__Var_11);
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__require__V_10_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__require__TypeClassInfo_for_op_table_49 = (MR_Word) &mercury__require_scalar_common_1[0];
    mercury__require__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__require__TypeClassInfo_for_op_table_49, (MR_Integer) 0)), (MR_Integer) 12)));
    mercury__require__conv1_V_13_47 = mercury__require__func_0(((MR_Box) mercury__require__TypeClassInfo_for_op_table_49), ((MR_Box) ((MR_Integer) 0)));
    mercury__require__V_13_47 = ((MR_Integer) mercury__require__conv1_V_13_47);
    mercury__require__V_10_46 = (mercury__require__V_13_47 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__require__TypeInfo_for_K_24, (MR_Integer) 1, mercury__require__V_10_46, mercury__require__K_5, mercury__require__V_10_37, &mercury__require__V_9_38);
    mercury__require__TypeCtorInfo_13_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__require__TypeCtorInfo_13_40, mercury__require__V_9_38, &mercury__require__V_11_39);
    mercury__require__Var_19 = mercury__string__append_list_1_f_0(mercury__require__V_11_39);
    mercury__require__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__require__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_22, 0) = ((MR_Box) (mercury__require__ValueType_8));
      MR_hl_field(MR_mktag(1), mercury__require__Var_22, 1) = ((MR_Box) (mercury__require__Var_23));
    }
    {
      mercury__require__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_20, 0) = ((MR_Box) ((MR_String) "\n\tValue Type: "));
      MR_hl_field(MR_mktag(1), mercury__require__Var_20, 1) = ((MR_Box) (mercury__require__Var_22));
    }
    {
      mercury__require__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_18, 0) = ((MR_Box) (mercury__require__Var_19));
      MR_hl_field(MR_mktag(1), mercury__require__Var_18, 1) = ((MR_Box) (mercury__require__Var_20));
    }
    {
      mercury__require__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_16, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
      MR_hl_field(MR_mktag(1), mercury__require__Var_16, 1) = ((MR_Box) (mercury__require__Var_18));
    }
    {
      mercury__require__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_15, 0) = ((MR_Box) (mercury__require__KeyType_7));
      MR_hl_field(MR_mktag(1), mercury__require__Var_15, 1) = ((MR_Box) (mercury__require__Var_16));
    }
    {
      mercury__require__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_13, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
      MR_hl_field(MR_mktag(1), mercury__require__Var_13, 1) = ((MR_Box) (mercury__require__Var_15));
    }
    {
      mercury__require__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_12, 0) = ((MR_Box) (mercury__require__Msg_4));
      MR_hl_field(MR_mktag(1), mercury__require__Var_12, 1) = ((MR_Box) (mercury__require__Var_13));
    }
    mercury__require__ErrorString_9 = mercury__string__append_list_1_f_0(mercury__require__Var_12);
    {
      mercury__require__error_1_p_0(mercury__require__ErrorString_9);
      return;
    }
  }
}

void MR_CALL 
mercury__require__report_lookup_error_2_p_0(
  MR_Word mercury__require__TypeInfo_for_K_17,
  MR_String mercury__require__Msg_3,
  MR_Box mercury__require__K_4)
{
  {
    MR_Word mercury__require__TypeCtorInfo_13_32;
    MR_Word mercury__require__TypeClassInfo_for_op_table_41;
    MR_String mercury__require__KeyType_5;
    MR_String mercury__require__ErrorString_6;
    MR_Word mercury__require__Var_7;
    MR_Word mercury__require__Var_8;
    MR_Word mercury__require__Var_9;
    MR_Word mercury__require__Var_11;
    MR_Word mercury__require__Var_12;
    MR_Word mercury__require__Var_14;
    MR_String mercury__require__Var_15;
    MR_Word mercury__require__Var_16;
    MR_Word mercury__require__V_10_29;
    MR_Word mercury__require__V_9_30;
    MR_Word mercury__require__V_11_31;
    MR_Integer mercury__require__V_10_38;
    MR_Integer mercury__require__V_13_39;
    MR_Box mercury__require__Var_18;
    MR_Box MR_CALL (* mercury__require__func_0)(MR_Box, MR_Box);
    MR_Box mercury__require__conv1_V_13_39;

{
#define MR_PROC_LABEL mercury__require__report_lookup_error_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_K_17 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__require__Var_7  = TypeInfo;
}
    mercury__require__KeyType_5 = mercury__type_desc__type_name_1_f_0(mercury__require__Var_7);
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__require__V_10_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__require__TypeClassInfo_for_op_table_41 = (MR_Word) &mercury__require_scalar_common_1[0];
    mercury__require__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__require__TypeClassInfo_for_op_table_41, (MR_Integer) 0)), (MR_Integer) 12)));
    mercury__require__conv1_V_13_39 = mercury__require__func_0(((MR_Box) mercury__require__TypeClassInfo_for_op_table_41), ((MR_Box) ((MR_Integer) 0)));
    mercury__require__V_13_39 = ((MR_Integer) mercury__require__conv1_V_13_39);
    mercury__require__V_10_38 = (mercury__require__V_13_39 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__require__TypeInfo_for_K_17, (MR_Integer) 1, mercury__require__V_10_38, mercury__require__K_4, mercury__require__V_10_29, &mercury__require__V_9_30);
    mercury__require__TypeCtorInfo_13_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__require__TypeCtorInfo_13_32, mercury__require__V_9_30, &mercury__require__V_11_31);
    mercury__require__Var_15 = mercury__string__append_list_1_f_0(mercury__require__V_11_31);
    mercury__require__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__require__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_14, 0) = ((MR_Box) (mercury__require__Var_15));
      MR_hl_field(MR_mktag(1), mercury__require__Var_14, 1) = ((MR_Box) (mercury__require__Var_16));
    }
    {
      mercury__require__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_12, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
      MR_hl_field(MR_mktag(1), mercury__require__Var_12, 1) = ((MR_Box) (mercury__require__Var_14));
    }
    {
      mercury__require__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_11, 0) = ((MR_Box) (mercury__require__KeyType_5));
      MR_hl_field(MR_mktag(1), mercury__require__Var_11, 1) = ((MR_Box) (mercury__require__Var_12));
    }
    {
      mercury__require__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_9, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
      MR_hl_field(MR_mktag(1), mercury__require__Var_9, 1) = ((MR_Box) (mercury__require__Var_11));
    }
    {
      mercury__require__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__require__Var_8, 0) = ((MR_Box) (mercury__require__Msg_3));
      MR_hl_field(MR_mktag(1), mercury__require__Var_8, 1) = ((MR_Box) (mercury__require__Var_9));
    }
    mercury__require__ErrorString_6 = mercury__string__append_list_1_f_0(mercury__require__Var_8);
    {
      mercury__require__error_1_p_0(mercury__require__ErrorString_6);
      return;
    }
  }
}

void MR_CALL 
mercury__require__expect_not_4_p_0(
  MR_Word mercury__require__Goal_5,
  MR_String mercury__require__Module_6,
  MR_String mercury__require__Proc_7,
  MR_String mercury__require__Message_8)
{
  {
    MR_bool mercury__require__succeeded;
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_5, (MR_Integer) 1)));

    mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_5));
    if (mercury__require__succeeded)
    {
      MR_String mercury__require__ErrorMessage_12;
      MR_String mercury__require__Var_22;
      MR_String mercury__require__Var_23;
      MR_String mercury__require__Var_25;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_8, &mercury__require__Var_22);
      mercury__string__append_3_p_2(mercury__require__Proc_7, mercury__require__Var_22, &mercury__require__Var_23);
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Var_23, &mercury__require__Var_25);
      mercury__string__append_3_p_2(mercury__require__Module_6, mercury__require__Var_25, &mercury__require__ErrorMessage_12);
      {
        mercury__require__error_1_p_0(mercury__require__ErrorMessage_12);
        return;
      }
    }
    else
    {
    }
  }
}

void MR_CALL 
mercury__require__expect_not_3_p_0(
  MR_Word mercury__require__Goal_4,
  MR_String mercury__require__Module_5,
  MR_String mercury__require__Message_6)
{
  {
    MR_bool mercury__require__succeeded;
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_4, (MR_Integer) 1)));

    mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_4));
    if (mercury__require__succeeded)
    {
      MR_String mercury__require__ErrorMessage_9;
      MR_String mercury__require__Var_17;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_6, &mercury__require__Var_17);
      mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__Var_17, &mercury__require__ErrorMessage_9);
      {
        mercury__require__error_1_p_0(mercury__require__ErrorMessage_9);
        return;
      }
    }
    else
    {
    }
  }
}

void MR_CALL 
mercury__require__expect_4_p_0(
  MR_Word mercury__require__Goal_5,
  MR_String mercury__require__Module_6,
  MR_String mercury__require__Proc_7,
  MR_String mercury__require__Message_8)
{
  {
    MR_bool mercury__require__succeeded;
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_5, (MR_Integer) 1)));

    mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_5));
    if (!(mercury__require__succeeded))
    {
      MR_String mercury__require__ErrorMessage_12;
      MR_String mercury__require__Var_22;
      MR_String mercury__require__Var_23;
      MR_String mercury__require__Var_25;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_8, &mercury__require__Var_22);
      mercury__string__append_3_p_2(mercury__require__Proc_7, mercury__require__Var_22, &mercury__require__Var_23);
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Var_23, &mercury__require__Var_25);
      mercury__string__append_3_p_2(mercury__require__Module_6, mercury__require__Var_25, &mercury__require__ErrorMessage_12);
      {
        mercury__require__error_1_p_0(mercury__require__ErrorMessage_12);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__require__expect_3_p_0(
  MR_Word mercury__require__Goal_4,
  MR_String mercury__require__Module_5,
  MR_String mercury__require__Message_6)
{
  {
    MR_bool mercury__require__succeeded;
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_4, (MR_Integer) 1)));

    mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_4));
    if (!(mercury__require__succeeded))
    {
      MR_String mercury__require__ErrorMessage_9;
      MR_String mercury__require__Var_17;

      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_6, &mercury__require__Var_17);
      mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__Var_17, &mercury__require__ErrorMessage_9);
      {
        mercury__require__error_1_p_0(mercury__require__ErrorMessage_9);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__require__require_2_p_0(
  MR_Word mercury__require__Goal_3,
  MR_String mercury__require__Message_4)
{
  {
    MR_bool mercury__require__succeeded;
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_3, (MR_Integer) 1)));

    mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_3));
    if (!(mercury__require__succeeded))
      {
        mercury__require__error_1_p_0(mercury__require__Message_4);
        return;
      }
  }
}

void MR_CALL 
mercury__require__unexpected_3_p_0(
  MR_String mercury__require__Module_4,
  MR_String mercury__require__Proc_5,
  MR_String mercury__require__What_6)
{
  {
    MR_String mercury__require__ErrorMessage_7;
    MR_String mercury__require__Var_17;
    MR_String mercury__require__Var_18;
    MR_String mercury__require__Var_20;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_6, &mercury__require__Var_17);
    mercury__string__append_3_p_2(mercury__require__Proc_5, mercury__require__Var_17, &mercury__require__Var_18);
    mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Var_18, &mercury__require__Var_20);
    mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__Var_20, &mercury__require__ErrorMessage_7);
    {
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_7);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__unexpected_3_f_0(
  MR_Word mercury__require__TypeInfo_9_9,
  MR_String mercury__require__Module_5,
  MR_String mercury__require__Proc_6,
  MR_String mercury__require__What_7)
{
  {
    MR_Box mercury__require__HeadVar__4_8;
    MR_String mercury__require__ErrorMessage_13;
    MR_String mercury__require__Var_23;
    MR_String mercury__require__Var_24;
    MR_String mercury__require__Var_26;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_7, &mercury__require__Var_23);
    mercury__string__append_3_p_2(mercury__require__Proc_6, mercury__require__Var_23, &mercury__require__Var_24);
    mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Var_24, &mercury__require__Var_26);
    mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__Var_26, &mercury__require__ErrorMessage_13);
    mercury__require__error_1_p_0(mercury__require__ErrorMessage_13);
    return mercury__require__HeadVar__4_8;
  }
}

void MR_CALL 
mercury__require__unexpected_2_p_0(
  MR_String mercury__require__Module_3,
  MR_String mercury__require__What_4)
{
  {
    MR_String mercury__require__ErrorMessage_5;
    MR_String mercury__require__Var_13;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_4, &mercury__require__Var_13);
    mercury__string__append_3_p_2(mercury__require__Module_3, mercury__require__Var_13, &mercury__require__ErrorMessage_5);
    {
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_5);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__unexpected_2_f_0(
  MR_Word mercury__require__TypeInfo_7_7,
  MR_String mercury__require__Module_4,
  MR_String mercury__require__What_5)
{
  {
    MR_Box mercury__require__HeadVar__3_6;
    MR_String mercury__require__ErrorMessage_10;
    MR_String mercury__require__Var_18;

    mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_5, &mercury__require__Var_18);
    mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__Var_18, &mercury__require__ErrorMessage_10);
    mercury__require__error_1_p_0(mercury__require__ErrorMessage_10);
    return mercury__require__HeadVar__3_6;
  }
}

void MR_CALL 
mercury__require__sorry_3_p_0(
  MR_String mercury__require__Module_4,
  MR_String mercury__require__Proc_5,
  MR_String mercury__require__What_6)
{
  {
    MR_String mercury__require__ErrorMessage_7;
    MR_String mercury__require__Var_17;
    MR_String mercury__require__Var_18;
    MR_String mercury__require__Var_20;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_6, &mercury__require__Var_17);
    mercury__string__append_3_p_2(mercury__require__Proc_5, mercury__require__Var_17, &mercury__require__Var_18);
    mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Var_18, &mercury__require__Var_20);
    mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__Var_20, &mercury__require__ErrorMessage_7);
    {
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_7);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__sorry_3_f_0(
  MR_Word mercury__require__TypeInfo_9_9,
  MR_String mercury__require__Module_5,
  MR_String mercury__require__Proc_6,
  MR_String mercury__require__What_7)
{
  {
    MR_Box mercury__require__HeadVar__4_8;
    MR_String mercury__require__ErrorMessage_13;
    MR_String mercury__require__Var_23;
    MR_String mercury__require__Var_24;
    MR_String mercury__require__Var_26;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_7, &mercury__require__Var_23);
    mercury__string__append_3_p_2(mercury__require__Proc_6, mercury__require__Var_23, &mercury__require__Var_24);
    mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Var_24, &mercury__require__Var_26);
    mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__Var_26, &mercury__require__ErrorMessage_13);
    mercury__require__error_1_p_0(mercury__require__ErrorMessage_13);
    return mercury__require__HeadVar__4_8;
  }
}

void MR_CALL 
mercury__require__sorry_2_p_0(
  MR_String mercury__require__Module_3,
  MR_String mercury__require__What_4)
{
  {
    MR_String mercury__require__ErrorMessage_5;
    MR_String mercury__require__Var_13;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_4, &mercury__require__Var_13);
    mercury__string__append_3_p_2(mercury__require__Module_3, mercury__require__Var_13, &mercury__require__ErrorMessage_5);
    {
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_5);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__sorry_2_f_0(
  MR_Word mercury__require__TypeInfo_7_7,
  MR_String mercury__require__Module_4,
  MR_String mercury__require__What_5)
{
  {
    MR_Box mercury__require__HeadVar__3_6;
    MR_String mercury__require__ErrorMessage_10;
    MR_String mercury__require__Var_18;

    mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_5, &mercury__require__Var_18);
    mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__Var_18, &mercury__require__ErrorMessage_10);
    mercury__require__error_1_p_0(mercury__require__ErrorMessage_10);
    return mercury__require__HeadVar__3_6;
  }
}

MR_Box MR_CALL 
mercury__require__func_error_2_f_0(
  MR_Word mercury__require__TypeInfo_7_7,
  MR_String mercury__require__Pred_4,
  MR_String mercury__require__Message_5)
{
  {
    MR_Box mercury__require__HeadVar__3_6;

    mercury__require__error_2_p_0(mercury__require__Pred_4, mercury__require__Message_5);
    return mercury__require__HeadVar__3_6;
  }
}

void MR_CALL 
mercury__require__error_2_p_0(
  MR_String mercury__require__Pred_3,
  MR_String mercury__require__Message_4)
{
  {
    MR_String mercury__require__Var_5;
    MR_String mercury__require__Var_6;

    mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Message_4, &mercury__require__Var_6);
    mercury__string__append_3_p_2(mercury__require__Pred_3, mercury__require__Var_6, &mercury__require__Var_5);
    {
      mercury__require__error_1_p_0(mercury__require__Var_5);
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__require__func_error_1_f_0(
  MR_Word mercury__require__TypeInfo_5_5,
  MR_String mercury__require__Message_3)
{
  {
    MR_Box mercury__require__HeadVar__2_4;

    mercury__require__error_1_p_0(mercury__require__Message_3);
    return mercury__require__HeadVar__2_4;
  }
}

void MR_CALL 
mercury__require__error_1_p_0(
  MR_String mercury__require__Message_2)
{
  {
    MR_Word mercury__require__TypeCtorInfo_4_4 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
    MR_Word mercury__require__Var_3 = (MR_Word) mercury__require__Message_2;

    {
      mercury__exception__throw_1_p_0(mercury__require__TypeCtorInfo_4_4, ((MR_Box) (mercury__require__Var_3)));
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

/* :- end_module require. */
