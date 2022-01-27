/*
** Automatically generated from `require.m'
** by the Mercury compiler,
** version DEV
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__require__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__require_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__require_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__require_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__require_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__require_scalar_common_5[1][1];




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

static /* final */ const MR_Box mercury__require_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__require__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__require__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 143 "require.m"
void MR_CALL 
mercury__require__report_lookup_error_3_p_0(
#line 143 "require.m"
  MR_Word mercury__require__TypeInfo_for_K_24,
#line 143 "require.m"
  MR_Word mercury__require__TypeInfo_for_V_25,
#line 143 "require.m"
  MR_String mercury__require__Msg_4,
#line 143 "require.m"
  MR_Box mercury__require__K_5)
#line 143 "require.m"
{
#line 263 "require.m"
  {
#line 263 "require.m"
    MR_bool mercury__require__succeeded;
#line 263 "require.m"
    MR_Word mercury__require__TypeCtorInfo_13_40;
#line 263 "require.m"
    MR_Word mercury__require__TypeClassInfo_for_op_table_49;
#line 263 "require.m"
    MR_String mercury__require__KeyType_7;
#line 263 "require.m"
    MR_String mercury__require__ValueType_8;
#line 263 "require.m"
    MR_String mercury__require__ErrorString_9;
#line 263 "require.m"
    MR_Word mercury__require__V_10_10;
#line 263 "require.m"
    MR_Word mercury__require__V_11_11;
#line 263 "require.m"
    MR_Word mercury__require__V_12_12;
#line 263 "require.m"
    MR_Word mercury__require__V_13_13;
#line 263 "require.m"
    MR_Word mercury__require__V_15_15;
#line 263 "require.m"
    MR_Word mercury__require__V_16_16;
#line 263 "require.m"
    MR_Word mercury__require__V_18_18;
#line 263 "require.m"
    MR_String mercury__require__V_19_19;
#line 263 "require.m"
    MR_Word mercury__require__V_20_20;
#line 263 "require.m"
    MR_Word mercury__require__V_22_22;
#line 263 "require.m"
    MR_Word mercury__require__V_23_23;
#line 263 "require.m"
    MR_Word mercury__require__V_10_37;
#line 263 "require.m"
    MR_Word mercury__require__V_9_38;
#line 263 "require.m"
    MR_Word mercury__require__V_11_39;
#line 263 "require.m"
    MR_Integer mercury__require__V_10_46;
#line 263 "require.m"
    MR_Integer mercury__require__V_13_47;
#line 37 "type_desc.opt"
    MR_Box mercury__require__V_26_26;
#line 365 "require.c"
    MR_Box MR_CALL (* mercury__require__func_0)(MR_Box, MR_Box);
#line 367 "require.c"
    MR_Box mercury__require__conv1_V_13_47;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_K_24 ;
		{
#line 37 "type_desc.opt"
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
#line 396 "require.c"

		;}
#undef MR_PROC_LABEL
	 mercury__require__V_10_10  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 264 "require.m"
    {
#line 264 "require.m"
      mercury__require__KeyType_7 = mercury__type_desc__type_name_1_f_0(mercury__require__V_10_10);
    }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_V_25 ;
		{
#line 37 "type_desc.opt"
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
#line 434 "require.c"

		;}
#undef MR_PROC_LABEL
	 mercury__require__V_11_11  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 265 "require.m"
    {
#line 265 "require.m"
      mercury__require__ValueType_8 = mercury__type_desc__type_name_1_f_0(mercury__require__V_11_11);
    }
#line 35 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 45 "string.to_string.opt"
    mercury__require__V_10_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "require.c"
    mercury__require__TypeClassInfo_for_op_table_49 = (MR_Word) &mercury__require_scalar_common_1[0];
#line 452 "require.c"
    mercury__require__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__require__TypeClassInfo_for_op_table_49, (MR_Integer) 0)), (MR_Integer) 12)));
#line 454 "require.c"
    {
#line 456 "require.c"
      mercury__require__conv1_V_13_47 = mercury__require__func_0(((MR_Box) mercury__require__TypeClassInfo_for_op_table_49), ((MR_Box) ((MR_Integer) 0)));
    }
#line 459 "require.c"
    mercury__require__V_13_47 = ((MR_Integer) mercury__require__conv1_V_13_47);
#line 50 "string.to_string.opt"
    mercury__require__V_10_46 = (mercury__require__V_13_47 + (MR_Integer) 1);
#line 53 "string.to_string.opt"
    {
#line 53 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__require__TypeInfo_for_K_24, (MR_Integer) 1, mercury__require__V_10_46, mercury__require__K_5, mercury__require__V_10_37, &mercury__require__V_9_38);
    }
#line 468 "require.c"
    mercury__require__TypeCtorInfo_13_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__require__TypeCtorInfo_13_40, mercury__require__V_9_38, &mercury__require__V_11_39);
    }
#line 47 "string.to_string.opt"
    {
#line 47 "string.to_string.opt"
      mercury__require__V_19_19 = mercury__string__append_list_1_f_0(mercury__require__V_11_39);
    }
#line 274 "require.m"
    mercury__require__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "require.m"
    {
#line 274 "require.m"
      mercury__require__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_22_22, 0) = ((MR_Box) (mercury__require__ValueType_8));
#line 274 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_22_22, 1) = ((MR_Box) (mercury__require__V_23_23));
#line 274 "require.m"
    }
#line 272 "require.m"
    {
#line 272 "require.m"
      mercury__require__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_20_20, 0) = ((MR_Box) ((MR_String) "\n\tValue Type: "));
#line 272 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_20_20, 1) = ((MR_Box) (mercury__require__V_22_22));
#line 272 "require.m"
    }
#line 271 "require.m"
    {
#line 271 "require.m"
      mercury__require__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_18_18, 0) = ((MR_Box) (mercury__require__V_19_19));
#line 271 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_18_18, 1) = ((MR_Box) (mercury__require__V_20_20));
#line 271 "require.m"
    }
#line 270 "require.m"
    {
#line 270 "require.m"
      mercury__require__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_16_16, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
#line 270 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_16_16, 1) = ((MR_Box) (mercury__require__V_18_18));
#line 270 "require.m"
    }
#line 269 "require.m"
    {
#line 269 "require.m"
      mercury__require__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_15_15, 0) = ((MR_Box) (mercury__require__KeyType_7));
#line 269 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_15_15, 1) = ((MR_Box) (mercury__require__V_16_16));
#line 269 "require.m"
    }
#line 268 "require.m"
    {
#line 268 "require.m"
      mercury__require__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_13_13, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
#line 268 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_13_13, 1) = ((MR_Box) (mercury__require__V_15_15));
#line 268 "require.m"
    }
#line 267 "require.m"
    {
#line 267 "require.m"
      mercury__require__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 0) = ((MR_Box) (mercury__require__Msg_4));
#line 267 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 1) = ((MR_Box) (mercury__require__V_13_13));
#line 267 "require.m"
    }
#line 394 "string.opt"
    {
#line 394 "string.opt"
      mercury__require__ErrorString_9 = mercury__string__append_list_1_f_0(mercury__require__V_12_12);
    }
#line 276 "require.m"
    {
#line 276 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorString_9);
#line 276 "require.m"
      return;
    }
#line 263 "require.m"
  }
#line 143 "require.m"
}

#line 134 "require.m"
void MR_CALL 
mercury__require__report_lookup_error_2_p_0(
#line 134 "require.m"
  MR_Word mercury__require__TypeInfo_for_K_17,
#line 134 "require.m"
  MR_String mercury__require__Msg_3,
#line 134 "require.m"
  MR_Box mercury__require__K_4)
#line 134 "require.m"
{
#line 251 "require.m"
  {
#line 251 "require.m"
    MR_bool mercury__require__succeeded;
#line 251 "require.m"
    MR_Word mercury__require__TypeCtorInfo_13_32;
#line 251 "require.m"
    MR_Word mercury__require__TypeClassInfo_for_op_table_41;
#line 251 "require.m"
    MR_String mercury__require__KeyType_5;
#line 251 "require.m"
    MR_String mercury__require__ErrorString_6;
#line 251 "require.m"
    MR_Word mercury__require__V_7_7;
#line 251 "require.m"
    MR_Word mercury__require__V_8_8;
#line 251 "require.m"
    MR_Word mercury__require__V_9_9;
#line 251 "require.m"
    MR_Word mercury__require__V_11_11;
#line 251 "require.m"
    MR_Word mercury__require__V_12_12;
#line 251 "require.m"
    MR_Word mercury__require__V_14_14;
#line 251 "require.m"
    MR_String mercury__require__V_15_15;
#line 251 "require.m"
    MR_Word mercury__require__V_16_16;
#line 251 "require.m"
    MR_Word mercury__require__V_10_29;
#line 251 "require.m"
    MR_Word mercury__require__V_9_30;
#line 251 "require.m"
    MR_Word mercury__require__V_11_31;
#line 251 "require.m"
    MR_Integer mercury__require__V_10_38;
#line 251 "require.m"
    MR_Integer mercury__require__V_13_39;
#line 37 "type_desc.opt"
    MR_Box mercury__require__V_18_18;
#line 620 "require.c"
    MR_Box MR_CALL (* mercury__require__func_0)(MR_Box, MR_Box);
#line 622 "require.c"
    MR_Box mercury__require__conv1_V_13_39;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_K_17 ;
		{
#line 37 "type_desc.opt"
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
#line 651 "require.c"

		;}
#undef MR_PROC_LABEL
	 mercury__require__V_7_7  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 252 "require.m"
    {
#line 252 "require.m"
      mercury__require__KeyType_5 = mercury__type_desc__type_name_1_f_0(mercury__require__V_7_7);
    }
#line 35 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 45 "string.to_string.opt"
    mercury__require__V_10_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "require.c"
    mercury__require__TypeClassInfo_for_op_table_41 = (MR_Word) &mercury__require_scalar_common_1[0];
#line 669 "require.c"
    mercury__require__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__require__TypeClassInfo_for_op_table_41, (MR_Integer) 0)), (MR_Integer) 12)));
#line 671 "require.c"
    {
#line 673 "require.c"
      mercury__require__conv1_V_13_39 = mercury__require__func_0(((MR_Box) mercury__require__TypeClassInfo_for_op_table_41), ((MR_Box) ((MR_Integer) 0)));
    }
#line 676 "require.c"
    mercury__require__V_13_39 = ((MR_Integer) mercury__require__conv1_V_13_39);
#line 50 "string.to_string.opt"
    mercury__require__V_10_38 = (mercury__require__V_13_39 + (MR_Integer) 1);
#line 53 "string.to_string.opt"
    {
#line 53 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__require__TypeInfo_for_K_17, (MR_Integer) 1, mercury__require__V_10_38, mercury__require__K_4, mercury__require__V_10_29, &mercury__require__V_9_30);
    }
#line 685 "require.c"
    mercury__require__TypeCtorInfo_13_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__require__TypeCtorInfo_13_32, mercury__require__V_9_30, &mercury__require__V_11_31);
    }
#line 47 "string.to_string.opt"
    {
#line 47 "string.to_string.opt"
      mercury__require__V_15_15 = mercury__string__append_list_1_f_0(mercury__require__V_11_31);
    }
#line 259 "require.m"
    mercury__require__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "require.m"
    {
#line 259 "require.m"
      mercury__require__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_14_14, 0) = ((MR_Box) (mercury__require__V_15_15));
#line 259 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_14_14, 1) = ((MR_Box) (mercury__require__V_16_16));
#line 259 "require.m"
    }
#line 257 "require.m"
    {
#line 257 "require.m"
      mercury__require__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
#line 257 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 1) = ((MR_Box) (mercury__require__V_14_14));
#line 257 "require.m"
    }
#line 256 "require.m"
    {
#line 256 "require.m"
      mercury__require__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_11_11, 0) = ((MR_Box) (mercury__require__KeyType_5));
#line 256 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_11_11, 1) = ((MR_Box) (mercury__require__V_12_12));
#line 256 "require.m"
    }
#line 255 "require.m"
    {
#line 255 "require.m"
      mercury__require__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_9_9, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
#line 255 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_9_9, 1) = ((MR_Box) (mercury__require__V_11_11));
#line 255 "require.m"
    }
#line 254 "require.m"
    {
#line 254 "require.m"
      mercury__require__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_8_8, 0) = ((MR_Box) (mercury__require__Msg_3));
#line 254 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_8_8, 1) = ((MR_Box) (mercury__require__V_9_9));
#line 254 "require.m"
    }
#line 394 "string.opt"
    {
#line 394 "string.opt"
      mercury__require__ErrorString_6 = mercury__string__append_list_1_f_0(mercury__require__V_8_8);
    }
#line 261 "require.m"
    {
#line 261 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorString_6);
#line 261 "require.m"
      return;
    }
#line 251 "require.m"
  }
#line 134 "require.m"
}

#line 123 "require.m"
void MR_CALL 
mercury__require__expect_not_4_p_0(
#line 123 "require.m"
  MR_Word mercury__require__Goal_5,
#line 123 "require.m"
  MR_String mercury__require__Module_6,
#line 123 "require.m"
  MR_String mercury__require__Proc_7,
#line 123 "require.m"
  MR_String mercury__require__Message_8)
#line 123 "require.m"
{
#line 245 "require.m"
  {
#line 245 "require.m"
    MR_bool mercury__require__succeeded;
#line 243 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_5, (MR_Integer) 1)));

#line 243 "require.m"
    {
#line 243 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_5));
    }
#line 245 "require.m"
    if (mercury__require__succeeded)
#line 244 "require.m"
      {
#line 244 "require.m"
        mercury__require__unexpected_3_p_0(mercury__require__Module_6, mercury__require__Proc_7, mercury__require__Message_8);
#line 244 "require.m"
        return;
      }
#line 245 "require.m"
    else
#line 246 "require.m"
      {
#line 246 "require.m"
      }
#line 245 "require.m"
  }
#line 123 "require.m"
}

#line 117 "require.m"
void MR_CALL 
mercury__require__expect_not_3_p_0(
#line 117 "require.m"
  MR_Word mercury__require__Goal_4,
#line 117 "require.m"
  MR_String mercury__require__Module_5,
#line 117 "require.m"
  MR_String mercury__require__Message_6)
#line 117 "require.m"
{
#line 238 "require.m"
  {
#line 238 "require.m"
    MR_bool mercury__require__succeeded;
#line 236 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_4, (MR_Integer) 1)));

#line 236 "require.m"
    {
#line 236 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_4));
    }
#line 238 "require.m"
    if (mercury__require__succeeded)
#line 237 "require.m"
      {
#line 237 "require.m"
        mercury__require__unexpected_2_p_0(mercury__require__Module_5, mercury__require__Message_6);
#line 237 "require.m"
        return;
      }
#line 238 "require.m"
    else
#line 239 "require.m"
      {
#line 239 "require.m"
      }
#line 238 "require.m"
  }
#line 117 "require.m"
}

#line 110 "require.m"
void MR_CALL 
mercury__require__expect_4_p_0(
#line 110 "require.m"
  MR_Word mercury__require__Goal_5,
#line 110 "require.m"
  MR_String mercury__require__Module_6,
#line 110 "require.m"
  MR_String mercury__require__Proc_7,
#line 110 "require.m"
  MR_String mercury__require__Message_8)
#line 110 "require.m"
{
#line 231 "require.m"
  {
#line 231 "require.m"
    MR_bool mercury__require__succeeded;
#line 229 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_5, (MR_Integer) 1)));

#line 229 "require.m"
    {
#line 229 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_5));
    }
#line 231 "require.m"
    if (mercury__require__succeeded)
#line 230 "require.m"
      {
#line 230 "require.m"
      }
#line 231 "require.m"
    else
#line 232 "require.m"
      {
#line 232 "require.m"
        mercury__require__unexpected_3_p_0(mercury__require__Module_6, mercury__require__Proc_7, mercury__require__Message_8);
#line 232 "require.m"
        return;
      }
#line 231 "require.m"
  }
#line 110 "require.m"
}

#line 104 "require.m"
void MR_CALL 
mercury__require__expect_3_p_0(
#line 104 "require.m"
  MR_Word mercury__require__Goal_4,
#line 104 "require.m"
  MR_String mercury__require__Module_5,
#line 104 "require.m"
  MR_String mercury__require__Message_6)
#line 104 "require.m"
{
#line 224 "require.m"
  {
#line 224 "require.m"
    MR_bool mercury__require__succeeded;
#line 222 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_4, (MR_Integer) 1)));

#line 222 "require.m"
    {
#line 222 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_4));
    }
#line 224 "require.m"
    if (mercury__require__succeeded)
#line 223 "require.m"
      {
#line 223 "require.m"
      }
#line 224 "require.m"
    else
#line 225 "require.m"
      {
#line 225 "require.m"
        mercury__require__unexpected_2_p_0(mercury__require__Module_5, mercury__require__Message_6);
#line 225 "require.m"
        return;
      }
#line 224 "require.m"
  }
#line 104 "require.m"
}

#line 98 "require.m"
void MR_CALL 
mercury__require__require_2_p_0(
#line 98 "require.m"
  MR_Word mercury__require__Goal_3,
#line 98 "require.m"
  MR_String mercury__require__Message_4)
#line 98 "require.m"
{
#line 217 "require.m"
  {
#line 217 "require.m"
    MR_bool mercury__require__succeeded;
#line 215 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_3, (MR_Integer) 1)));

#line 215 "require.m"
    {
#line 215 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_3));
    }
#line 217 "require.m"
    if (mercury__require__succeeded)
#line 216 "require.m"
      {
#line 216 "require.m"
      }
#line 217 "require.m"
    else
#line 218 "require.m"
      {
#line 218 "require.m"
        mercury__require__error_1_p_0(mercury__require__Message_4);
#line 218 "require.m"
        return;
      }
#line 217 "require.m"
  }
#line 98 "require.m"
}

#line 86 "require.m"
void MR_CALL 
mercury__require__unexpected_3_p_0(
#line 86 "require.m"
  MR_String mercury__require__Module_4,
#line 86 "require.m"
  MR_String mercury__require__Proc_5,
#line 86 "require.m"
  MR_String mercury__require__What_6)
#line 86 "require.m"
{
#line 207 "require.m"
  {
#line 207 "require.m"
    MR_bool mercury__require__succeeded;
#line 207 "require.m"
    MR_String mercury__require__ErrorMessage_7;
#line 207 "require.m"
    MR_String mercury__require__V_16_16;
#line 207 "require.m"
    MR_Word mercury__require__V_22_22 = (MR_Word) &mercury__require_scalar_common_5[0];
#line 207 "require.m"
    MR_String mercury__require__V_24_24;
#line 207 "require.m"
    MR_String mercury__require__V_25_25;
#line 207 "require.m"
    MR_String mercury__require__V_32_32;
#line 207 "require.m"
    MR_String mercury__require__V_34_34;
#line 207 "require.m"
    MR_String mercury__require__V_35_35;
#line 207 "require.m"
    MR_Word mercury__require__V_7_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "require.m"
    MR_Word mercury__require__V_8_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "require.m"
    MR_Word mercury__require__V_7_56;
#line 207 "require.m"
    MR_Word mercury__require__V_8_57;
#line 207 "require.m"
    MR_Word mercury__require__V_7_73;
#line 207 "require.m"
    MR_Word mercury__require__V_8_74;

#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_22_22, mercury__require__V_7_45, mercury__require__V_8_46, mercury__require__What_6, &mercury__require__V_16_16);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__V_16_16, &mercury__require__V_24_24);
    }
#line 39 "string.format.opt"
    mercury__require__V_7_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
    mercury__require__V_8_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_22_22, mercury__require__V_7_56, mercury__require__V_8_57, mercury__require__Proc_5, &mercury__require__V_25_25);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__V_25_25, mercury__require__V_24_24, &mercury__require__V_32_32);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_32_32, &mercury__require__V_34_34);
    }
#line 39 "string.format.opt"
    mercury__require__V_7_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
    mercury__require__V_8_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_22_22, mercury__require__V_7_73, mercury__require__V_8_74, mercury__require__Module_4, &mercury__require__V_35_35);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__V_35_35, mercury__require__V_34_34, &mercury__require__ErrorMessage_7);
    }
#line 210 "require.m"
    {
#line 210 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_7);
#line 210 "require.m"
      return;
    }
#line 207 "require.m"
  }
#line 86 "require.m"
}

#line 85 "require.m"
MR_Box MR_CALL 
mercury__require__unexpected_3_f_0(
#line 85 "require.m"
  MR_Word mercury__require__TypeInfo_9_9,
#line 85 "require.m"
  MR_String mercury__require__Module_5,
#line 85 "require.m"
  MR_String mercury__require__Proc_6,
#line 85 "require.m"
  MR_String mercury__require__What_7)
#line 85 "require.m"
{
#line 202 "require.m"
  {
#line 202 "require.m"
    MR_bool mercury__require__succeeded;
#line 202 "require.m"
    MR_Box mercury__require__HeadVar__4_8;

#line 202 "require.m"
    {
#line 202 "require.m"
      mercury__require__unexpected_3_p_0(mercury__require__Module_5, mercury__require__Proc_6, mercury__require__What_7);
    }
#line 202 "require.m"
    return mercury__require__HeadVar__4_8;
#line 202 "require.m"
  }
#line 85 "require.m"
}

#line 76 "require.m"
void MR_CALL 
mercury__require__unexpected_2_p_0(
#line 76 "require.m"
  MR_String mercury__require__Module_3,
#line 76 "require.m"
  MR_String mercury__require__What_4)
#line 76 "require.m"
{
#line 204 "require.m"
  {
#line 204 "require.m"
    MR_bool mercury__require__succeeded;
#line 204 "require.m"
    MR_String mercury__require__ErrorMessage_5;
#line 204 "require.m"
    MR_String mercury__require__V_12_12;
#line 204 "require.m"
    MR_Word mercury__require__V_18_18 = (MR_Word) &mercury__require_scalar_common_5[0];
#line 204 "require.m"
    MR_String mercury__require__V_20_20;
#line 204 "require.m"
    MR_String mercury__require__V_21_21;
#line 204 "require.m"
    MR_Word mercury__require__V_7_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 204 "require.m"
    MR_Word mercury__require__V_8_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 204 "require.m"
    MR_Word mercury__require__V_7_42;
#line 204 "require.m"
    MR_Word mercury__require__V_8_43;

#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_18_18, mercury__require__V_7_31, mercury__require__V_8_32, mercury__require__What_4, &mercury__require__V_12_12);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__V_12_12, &mercury__require__V_20_20);
    }
#line 39 "string.format.opt"
    mercury__require__V_7_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
    mercury__require__V_8_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_18_18, mercury__require__V_7_42, mercury__require__V_8_43, mercury__require__Module_3, &mercury__require__V_21_21);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__V_21_21, mercury__require__V_20_20, &mercury__require__ErrorMessage_5);
    }
#line 206 "require.m"
    {
#line 206 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_5);
#line 206 "require.m"
      return;
    }
#line 204 "require.m"
  }
#line 76 "require.m"
}

#line 75 "require.m"
MR_Box MR_CALL 
mercury__require__unexpected_2_f_0(
#line 75 "require.m"
  MR_Word mercury__require__TypeInfo_7_7,
#line 75 "require.m"
  MR_String mercury__require__Module_4,
#line 75 "require.m"
  MR_String mercury__require__What_5)
#line 75 "require.m"
{
#line 200 "require.m"
  {
#line 200 "require.m"
    MR_bool mercury__require__succeeded;
#line 200 "require.m"
    MR_Box mercury__require__HeadVar__3_6;

#line 200 "require.m"
    {
#line 200 "require.m"
      mercury__require__unexpected_2_p_0(mercury__require__Module_4, mercury__require__What_5);
    }
#line 200 "require.m"
    return mercury__require__HeadVar__3_6;
#line 200 "require.m"
  }
#line 75 "require.m"
}

#line 66 "require.m"
void MR_CALL 
mercury__require__sorry_3_p_0(
#line 66 "require.m"
  MR_String mercury__require__Module_4,
#line 66 "require.m"
  MR_String mercury__require__Proc_5,
#line 66 "require.m"
  MR_String mercury__require__What_6)
#line 66 "require.m"
{
#line 194 "require.m"
  {
#line 194 "require.m"
    MR_bool mercury__require__succeeded;
#line 194 "require.m"
    MR_String mercury__require__ErrorMessage_7;
#line 194 "require.m"
    MR_String mercury__require__V_16_16;
#line 194 "require.m"
    MR_Word mercury__require__V_22_22 = (MR_Word) &mercury__require_scalar_common_5[0];
#line 194 "require.m"
    MR_String mercury__require__V_24_24;
#line 194 "require.m"
    MR_String mercury__require__V_25_25;
#line 194 "require.m"
    MR_String mercury__require__V_32_32;
#line 194 "require.m"
    MR_String mercury__require__V_34_34;
#line 194 "require.m"
    MR_String mercury__require__V_35_35;
#line 194 "require.m"
    MR_Word mercury__require__V_7_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "require.m"
    MR_Word mercury__require__V_8_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "require.m"
    MR_Word mercury__require__V_7_56;
#line 194 "require.m"
    MR_Word mercury__require__V_8_57;
#line 194 "require.m"
    MR_Word mercury__require__V_7_73;
#line 194 "require.m"
    MR_Word mercury__require__V_8_74;

#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_22_22, mercury__require__V_7_45, mercury__require__V_8_46, mercury__require__What_6, &mercury__require__V_16_16);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__V_16_16, &mercury__require__V_24_24);
    }
#line 39 "string.format.opt"
    mercury__require__V_7_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
    mercury__require__V_8_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_22_22, mercury__require__V_7_56, mercury__require__V_8_57, mercury__require__Proc_5, &mercury__require__V_25_25);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__V_25_25, mercury__require__V_24_24, &mercury__require__V_32_32);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_32_32, &mercury__require__V_34_34);
    }
#line 39 "string.format.opt"
    mercury__require__V_7_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
    mercury__require__V_8_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_22_22, mercury__require__V_7_73, mercury__require__V_8_74, mercury__require__Module_4, &mercury__require__V_35_35);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__V_35_35, mercury__require__V_34_34, &mercury__require__ErrorMessage_7);
    }
#line 197 "require.m"
    {
#line 197 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_7);
#line 197 "require.m"
      return;
    }
#line 194 "require.m"
  }
#line 66 "require.m"
}

#line 65 "require.m"
MR_Box MR_CALL 
mercury__require__sorry_3_f_0(
#line 65 "require.m"
  MR_Word mercury__require__TypeInfo_9_9,
#line 65 "require.m"
  MR_String mercury__require__Module_5,
#line 65 "require.m"
  MR_String mercury__require__Proc_6,
#line 65 "require.m"
  MR_String mercury__require__What_7)
#line 65 "require.m"
{
#line 188 "require.m"
  {
#line 188 "require.m"
    MR_bool mercury__require__succeeded;
#line 188 "require.m"
    MR_Box mercury__require__HeadVar__4_8;

#line 188 "require.m"
    {
#line 188 "require.m"
      mercury__require__sorry_3_p_0(mercury__require__Module_5, mercury__require__Proc_6, mercury__require__What_7);
    }
#line 188 "require.m"
    return mercury__require__HeadVar__4_8;
#line 188 "require.m"
  }
#line 65 "require.m"
}

#line 55 "require.m"
void MR_CALL 
mercury__require__sorry_2_p_0(
#line 55 "require.m"
  MR_String mercury__require__Module_3,
#line 55 "require.m"
  MR_String mercury__require__What_4)
#line 55 "require.m"
{
#line 190 "require.m"
  {
#line 190 "require.m"
    MR_bool mercury__require__succeeded;
#line 190 "require.m"
    MR_String mercury__require__ErrorMessage_5;
#line 190 "require.m"
    MR_String mercury__require__V_12_12;
#line 190 "require.m"
    MR_Word mercury__require__V_18_18 = (MR_Word) &mercury__require_scalar_common_5[0];
#line 190 "require.m"
    MR_String mercury__require__V_20_20;
#line 190 "require.m"
    MR_String mercury__require__V_21_21;
#line 190 "require.m"
    MR_Word mercury__require__V_7_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "require.m"
    MR_Word mercury__require__V_8_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "require.m"
    MR_Word mercury__require__V_7_42;
#line 190 "require.m"
    MR_Word mercury__require__V_8_43;

#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_18_18, mercury__require__V_7_31, mercury__require__V_8_32, mercury__require__What_4, &mercury__require__V_12_12);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__V_12_12, &mercury__require__V_20_20);
    }
#line 39 "string.format.opt"
    mercury__require__V_7_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 40 "string.format.opt"
    mercury__require__V_8_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 41 "string.format.opt"
    {
#line 41 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__require__V_18_18, mercury__require__V_7_42, mercury__require__V_8_43, mercury__require__Module_3, &mercury__require__V_21_21);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__V_21_21, mercury__require__V_20_20, &mercury__require__ErrorMessage_5);
    }
#line 193 "require.m"
    {
#line 193 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_5);
#line 193 "require.m"
      return;
    }
#line 190 "require.m"
  }
#line 55 "require.m"
}

#line 54 "require.m"
MR_Box MR_CALL 
mercury__require__sorry_2_f_0(
#line 54 "require.m"
  MR_Word mercury__require__TypeInfo_7_7,
#line 54 "require.m"
  MR_String mercury__require__Module_4,
#line 54 "require.m"
  MR_String mercury__require__What_5)
#line 54 "require.m"
{
#line 186 "require.m"
  {
#line 186 "require.m"
    MR_bool mercury__require__succeeded;
#line 186 "require.m"
    MR_Box mercury__require__HeadVar__3_6;

#line 186 "require.m"
    {
#line 186 "require.m"
      mercury__require__sorry_2_p_0(mercury__require__Module_4, mercury__require__What_5);
    }
#line 186 "require.m"
    return mercury__require__HeadVar__3_6;
#line 186 "require.m"
  }
#line 54 "require.m"
}

#line 42 "require.m"
MR_Box MR_CALL 
mercury__require__func_error_2_f_0(
#line 42 "require.m"
  MR_Word mercury__require__TypeInfo_7_7,
#line 42 "require.m"
  MR_String mercury__require__Pred_4,
#line 42 "require.m"
  MR_String mercury__require__Message_5)
#line 42 "require.m"
{
#line 181 "require.m"
  {
#line 181 "require.m"
    MR_bool mercury__require__succeeded;
#line 181 "require.m"
    MR_Box mercury__require__HeadVar__3_6;

#line 181 "require.m"
    {
#line 181 "require.m"
      mercury__require__error_2_p_0(mercury__require__Pred_4, mercury__require__Message_5);
    }
#line 181 "require.m"
    return mercury__require__HeadVar__3_6;
#line 181 "require.m"
  }
#line 42 "require.m"
}

#line 41 "require.m"
void MR_CALL 
mercury__require__error_2_p_0(
#line 41 "require.m"
  MR_String mercury__require__Pred_3,
#line 41 "require.m"
  MR_String mercury__require__Message_4)
#line 41 "require.m"
{
#line 174 "require.m"
  {
#line 174 "require.m"
    MR_bool mercury__require__succeeded;
#line 174 "require.m"
    MR_String mercury__require__V_5_5;
#line 174 "require.m"
    MR_String mercury__require__V_6_6;

#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__Message_4, &mercury__require__V_6_6);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Pred_3, mercury__require__V_6_6, &mercury__require__V_5_5);
    }
#line 175 "require.m"
    {
#line 175 "require.m"
      mercury__require__error_1_p_0(mercury__require__V_5_5);
#line 175 "require.m"
      return;
    }
#line 174 "require.m"
  }
#line 41 "require.m"
}

#line 33 "require.m"
MR_Box MR_CALL 
mercury__require__func_error_1_f_0(
#line 33 "require.m"
  MR_Word mercury__require__TypeInfo_5_5,
#line 33 "require.m"
  MR_String mercury__require__Message_3)
#line 33 "require.m"
{
#line 178 "require.m"
  {
#line 178 "require.m"
    MR_bool mercury__require__succeeded;
#line 178 "require.m"
    MR_Box mercury__require__HeadVar__2_4;

#line 178 "require.m"
    {
#line 178 "require.m"
      mercury__require__error_1_p_0(mercury__require__Message_3);
    }
#line 178 "require.m"
    return mercury__require__HeadVar__2_4;
#line 178 "require.m"
  }
#line 33 "require.m"
}

#line 26 "require.m"
void MR_CALL 
mercury__require__error_1_p_0(
#line 26 "require.m"
  MR_String mercury__require__Message_2)
#line 26 "require.m"
{
#line 171 "require.m"
  {
#line 171 "require.m"
    MR_bool mercury__require__succeeded;
#line 171 "require.m"
    MR_Word mercury__require__TypeCtorInfo_4_4 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 171 "require.m"
    MR_Word mercury__require__V_3_3 = (MR_Word) mercury__require__Message_2;

#line 172 "require.m"
    {
#line 172 "require.m"
      mercury__exception__throw_1_p_0(mercury__require__TypeCtorInfo_4_4, ((MR_Box) (mercury__require__V_3_3)));
#line 172 "require.m"
      return;
    }
#line 171 "require.m"
  }
#line 26 "require.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module require. */
