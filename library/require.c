/*
** Automatically generated from `require.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 13 "ops.opt"
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__require__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__require__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 134 "require.m"
void MR_CALL 
mercury__require__report_lookup_error_3_p_0(
#line 134 "require.m"
  MR_Word mercury__require__TypeInfo_for_K_24,
#line 134 "require.m"
  MR_Word mercury__require__TypeInfo_for_V_25,
#line 134 "require.m"
  MR_String mercury__require__Msg_4,
#line 134 "require.m"
  MR_Box mercury__require__K_5)
#line 134 "require.m"
{
#line 245 "require.m"
  {
#line 245 "require.m"
    MR_bool mercury__require__succeeded;
#line 245 "require.m"
    MR_Word mercury__require__TypeCtorInfo_13_38;
#line 245 "require.m"
    MR_Word mercury__require__TypeClassInfo_for_op_table_47;
#line 245 "require.m"
    MR_String mercury__require__KeyType_7;
#line 245 "require.m"
    MR_String mercury__require__ValueType_8;
#line 245 "require.m"
    MR_String mercury__require__ErrorString_9;
#line 245 "require.m"
    MR_Word mercury__require__V_10_10;
#line 245 "require.m"
    MR_Word mercury__require__V_11_11;
#line 245 "require.m"
    MR_Word mercury__require__V_12_12;
#line 245 "require.m"
    MR_Word mercury__require__V_13_13;
#line 245 "require.m"
    MR_Word mercury__require__V_15_15;
#line 245 "require.m"
    MR_Word mercury__require__V_16_16;
#line 245 "require.m"
    MR_Word mercury__require__V_18_18;
#line 245 "require.m"
    MR_String mercury__require__V_19_19;
#line 245 "require.m"
    MR_Word mercury__require__V_20_20;
#line 245 "require.m"
    MR_Word mercury__require__V_22_22;
#line 245 "require.m"
    MR_Word mercury__require__V_23_23;
#line 245 "require.m"
    MR_Word mercury__require__V_10_35;
#line 245 "require.m"
    MR_Word mercury__require__RevStrings_9_36;
#line 245 "require.m"
    MR_Word mercury__require__V_11_37;
#line 245 "require.m"
    MR_Integer mercury__require__Priority_10_44;
#line 245 "require.m"
    MR_Integer mercury__require__V_13_45;
#line 56 "type_desc.opt"
    MR_Box mercury__require__V_26_26;
#line 541 "require.c"
    MR_Box MR_CALL (* mercury__require__func_0)(MR_Box, MR_Box);
#line 543 "require.c"
    MR_Box mercury__require__conv1_V_13_45;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_K_24 ;
		{
#line 56 "type_desc.opt"
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
#line 572 "require.c"

		;}
#undef MR_PROC_LABEL
	 mercury__require__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 246 "require.m"
    {
#line 246 "require.m"
      mercury__require__KeyType_7 = mercury__type_desc__type_name_1_f_0(mercury__require__V_10_10);
    }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_V_25 ;
		{
#line 56 "type_desc.opt"
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
#line 610 "require.c"

		;}
#undef MR_PROC_LABEL
	 mercury__require__V_11_11  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 247 "require.m"
    {
#line 247 "require.m"
      mercury__require__ValueType_8 = mercury__type_desc__type_name_1_f_0(mercury__require__V_11_11);
    }
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 268 "string.opt"
    mercury__require__V_10_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "require.c"
    mercury__require__TypeClassInfo_for_op_table_47 = (MR_Word) &mercury__require_scalar_common_1[0];
#line 628 "require.c"
    mercury__require__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__require__TypeClassInfo_for_op_table_47, (MR_Integer) 0)), (MR_Integer) 12)));
#line 630 "require.c"
    {
#line 632 "require.c"
      mercury__require__conv1_V_13_45 = mercury__require__func_0(((MR_Box) mercury__require__TypeClassInfo_for_op_table_47), ((MR_Box) ((MR_Integer) 0)));
    }
#line 635 "require.c"
    mercury__require__V_13_45 = ((MR_Integer) mercury__require__conv1_V_13_45);
#line 1182 "string.opt"
    mercury__require__Priority_10_44 = (mercury__require__V_13_45 + (MR_Integer) 1);
#line 1185 "string.opt"
    {
#line 1185 "string.opt"
      mercury__string__value_to_revstrings_prio_6_p_1(mercury__require__TypeInfo_for_K_24, (MR_Integer) 1, mercury__require__Priority_10_44, mercury__require__K_5, mercury__require__V_10_35, &mercury__require__RevStrings_9_36);
    }
#line 644 "require.c"
    mercury__require__TypeCtorInfo_13_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__require__TypeCtorInfo_13_38, mercury__require__RevStrings_9_36, &mercury__require__V_11_37);
    }
#line 270 "string.opt"
    {
#line 270 "string.opt"
      mercury__require__V_19_19 = mercury__string__append_list_1_f_0(mercury__require__V_11_37);
    }
#line 256 "require.m"
    mercury__require__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "require.m"
    {
#line 254 "require.m"
      mercury__require__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_22_22, 0) = ((MR_Box) (mercury__require__ValueType_8));
#line 254 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_22_22, 1) = ((MR_Box) (mercury__require__V_23_23));
#line 254 "require.m"
    }
#line 253 "require.m"
    {
#line 253 "require.m"
      mercury__require__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_20_20, 0) = ((MR_Box) ((MR_String) "\n\tValue Type: "));
#line 253 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_20_20, 1) = ((MR_Box) (mercury__require__V_22_22));
#line 253 "require.m"
    }
#line 252 "require.m"
    {
#line 252 "require.m"
      mercury__require__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_18_18, 0) = ((MR_Box) (mercury__require__V_19_19));
#line 252 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_18_18, 1) = ((MR_Box) (mercury__require__V_20_20));
#line 252 "require.m"
    }
#line 251 "require.m"
    {
#line 251 "require.m"
      mercury__require__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_16_16, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
#line 251 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_16_16, 1) = ((MR_Box) (mercury__require__V_18_18));
#line 251 "require.m"
    }
#line 250 "require.m"
    {
#line 250 "require.m"
      mercury__require__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_15_15, 0) = ((MR_Box) (mercury__require__KeyType_7));
#line 250 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_15_15, 1) = ((MR_Box) (mercury__require__V_16_16));
#line 250 "require.m"
    }
#line 249 "require.m"
    {
#line 249 "require.m"
      mercury__require__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_13_13, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
#line 249 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_13_13, 1) = ((MR_Box) (mercury__require__V_15_15));
#line 249 "require.m"
    }
#line 248 "require.m"
    {
#line 248 "require.m"
      mercury__require__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 0) = ((MR_Box) (mercury__require__Msg_4));
#line 248 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 1) = ((MR_Box) (mercury__require__V_13_13));
#line 248 "require.m"
    }
#line 806 "string.opt"
    {
#line 806 "string.opt"
      mercury__require__ErrorString_9 = mercury__string__append_list_1_f_0(mercury__require__V_12_12);
    }
#line 258 "require.m"
    {
#line 258 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorString_9);
#line 258 "require.m"
      return;
    }
#line 245 "require.m"
  }
#line 134 "require.m"
}

#line 125 "require.m"
void MR_CALL 
mercury__require__report_lookup_error_2_p_0(
#line 125 "require.m"
  MR_Word mercury__require__TypeInfo_for_K_17,
#line 125 "require.m"
  MR_String mercury__require__Msg_3,
#line 125 "require.m"
  MR_Box mercury__require__K_4)
#line 125 "require.m"
{
#line 233 "require.m"
  {
#line 233 "require.m"
    MR_bool mercury__require__succeeded;
#line 233 "require.m"
    MR_Word mercury__require__TypeCtorInfo_13_30;
#line 233 "require.m"
    MR_Word mercury__require__TypeClassInfo_for_op_table_39;
#line 233 "require.m"
    MR_String mercury__require__KeyType_5;
#line 233 "require.m"
    MR_String mercury__require__ErrorString_6;
#line 233 "require.m"
    MR_Word mercury__require__V_7_7;
#line 233 "require.m"
    MR_Word mercury__require__V_8_8;
#line 233 "require.m"
    MR_Word mercury__require__V_9_9;
#line 233 "require.m"
    MR_Word mercury__require__V_11_11;
#line 233 "require.m"
    MR_Word mercury__require__V_12_12;
#line 233 "require.m"
    MR_Word mercury__require__V_14_14;
#line 233 "require.m"
    MR_String mercury__require__V_15_15;
#line 233 "require.m"
    MR_Word mercury__require__V_16_16;
#line 233 "require.m"
    MR_Word mercury__require__V_10_27;
#line 233 "require.m"
    MR_Word mercury__require__RevStrings_9_28;
#line 233 "require.m"
    MR_Word mercury__require__V_11_29;
#line 233 "require.m"
    MR_Integer mercury__require__Priority_10_36;
#line 233 "require.m"
    MR_Integer mercury__require__V_13_37;
#line 56 "type_desc.opt"
    MR_Box mercury__require__V_18_18;
#line 796 "require.c"
    MR_Box MR_CALL (* mercury__require__func_0)(MR_Box, MR_Box);
#line 798 "require.c"
    MR_Box mercury__require__conv1_V_13_37;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__require__report_lookup_error_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__require__TypeInfo_for_K_17 ;
		{
#line 56 "type_desc.opt"
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
#line 827 "require.c"

		;}
#undef MR_PROC_LABEL
	 mercury__require__V_7_7  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 234 "require.m"
    {
#line 234 "require.m"
      mercury__require__KeyType_5 = mercury__type_desc__type_name_1_f_0(mercury__require__V_7_7);
    }
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 268 "string.opt"
    mercury__require__V_10_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "require.c"
    mercury__require__TypeClassInfo_for_op_table_39 = (MR_Word) &mercury__require_scalar_common_1[0];
#line 845 "require.c"
    mercury__require__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__require__TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 12)));
#line 847 "require.c"
    {
#line 849 "require.c"
      mercury__require__conv1_V_13_37 = mercury__require__func_0(((MR_Box) mercury__require__TypeClassInfo_for_op_table_39), ((MR_Box) ((MR_Integer) 0)));
    }
#line 852 "require.c"
    mercury__require__V_13_37 = ((MR_Integer) mercury__require__conv1_V_13_37);
#line 1182 "string.opt"
    mercury__require__Priority_10_36 = (mercury__require__V_13_37 + (MR_Integer) 1);
#line 1185 "string.opt"
    {
#line 1185 "string.opt"
      mercury__string__value_to_revstrings_prio_6_p_1(mercury__require__TypeInfo_for_K_17, (MR_Integer) 1, mercury__require__Priority_10_36, mercury__require__K_4, mercury__require__V_10_27, &mercury__require__RevStrings_9_28);
    }
#line 861 "require.c"
    mercury__require__TypeCtorInfo_13_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__require__TypeCtorInfo_13_30, mercury__require__RevStrings_9_28, &mercury__require__V_11_29);
    }
#line 270 "string.opt"
    {
#line 270 "string.opt"
      mercury__require__V_15_15 = mercury__string__append_list_1_f_0(mercury__require__V_11_29);
    }
#line 241 "require.m"
    mercury__require__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 239 "require.m"
    {
#line 239 "require.m"
      mercury__require__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_14_14, 0) = ((MR_Box) (mercury__require__V_15_15));
#line 239 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_14_14, 1) = ((MR_Box) (mercury__require__V_16_16));
#line 239 "require.m"
    }
#line 238 "require.m"
    {
#line 238 "require.m"
      mercury__require__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 0) = ((MR_Box) ((MR_String) "\n\tKey Value: "));
#line 238 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_12_12, 1) = ((MR_Box) (mercury__require__V_14_14));
#line 238 "require.m"
    }
#line 237 "require.m"
    {
#line 237 "require.m"
      mercury__require__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_11_11, 0) = ((MR_Box) (mercury__require__KeyType_5));
#line 237 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_11_11, 1) = ((MR_Box) (mercury__require__V_12_12));
#line 237 "require.m"
    }
#line 236 "require.m"
    {
#line 236 "require.m"
      mercury__require__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_9_9, 0) = ((MR_Box) ((MR_String) "\n\tKey Type: "));
#line 236 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_9_9, 1) = ((MR_Box) (mercury__require__V_11_11));
#line 236 "require.m"
    }
#line 235 "require.m"
    {
#line 235 "require.m"
      mercury__require__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_8_8, 0) = ((MR_Box) (mercury__require__Msg_3));
#line 235 "require.m"
      MR_hl_field(MR_mktag(1), mercury__require__V_8_8, 1) = ((MR_Box) (mercury__require__V_9_9));
#line 235 "require.m"
    }
#line 806 "string.opt"
    {
#line 806 "string.opt"
      mercury__require__ErrorString_6 = mercury__string__append_list_1_f_0(mercury__require__V_8_8);
    }
#line 243 "require.m"
    {
#line 243 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorString_6);
#line 243 "require.m"
      return;
    }
#line 233 "require.m"
  }
#line 125 "require.m"
}

#line 114 "require.m"
void MR_CALL 
mercury__require__expect_not_4_p_0(
#line 114 "require.m"
  MR_Word mercury__require__Goal_5,
#line 114 "require.m"
  MR_String mercury__require__Module_6,
#line 114 "require.m"
  MR_String mercury__require__Proc_7,
#line 114 "require.m"
  MR_String mercury__require__Message_8)
#line 114 "require.m"
{
#line 227 "require.m"
  {
#line 227 "require.m"
    MR_bool mercury__require__succeeded;
#line 225 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_5, (MR_Integer) 1)));

#line 225 "require.m"
    {
#line 225 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_5));
    }
#line 227 "require.m"
    if (mercury__require__succeeded)
#line 189 "require.m"
      {
#line 189 "require.m"
        MR_String mercury__require__ErrorMessage_12;
#line 189 "require.m"
        MR_String mercury__require__V_22_22;
#line 189 "require.m"
        MR_String mercury__require__V_23_23;
#line 189 "require.m"
        MR_String mercury__require__V_25_25;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_8, &mercury__require__V_22_22);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__require__Proc_7, mercury__require__V_22_22, &mercury__require__V_23_23);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_23_23, &mercury__require__V_25_25);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__require__Module_6, mercury__require__V_25_25, &mercury__require__ErrorMessage_12);
        }
#line 192 "require.m"
        {
#line 192 "require.m"
          mercury__require__error_1_p_0(mercury__require__ErrorMessage_12);
#line 192 "require.m"
          return;
        }
#line 189 "require.m"
      }
#line 227 "require.m"
    else
#line 228 "require.m"
      {
#line 228 "require.m"
      }
#line 227 "require.m"
  }
#line 114 "require.m"
}

#line 108 "require.m"
void MR_CALL 
mercury__require__expect_not_3_p_0(
#line 108 "require.m"
  MR_Word mercury__require__Goal_4,
#line 108 "require.m"
  MR_String mercury__require__Module_5,
#line 108 "require.m"
  MR_String mercury__require__Message_6)
#line 108 "require.m"
{
#line 220 "require.m"
  {
#line 220 "require.m"
    MR_bool mercury__require__succeeded;
#line 218 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_4, (MR_Integer) 1)));

#line 218 "require.m"
    {
#line 218 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_4));
    }
#line 220 "require.m"
    if (mercury__require__succeeded)
#line 186 "require.m"
      {
#line 186 "require.m"
        MR_String mercury__require__ErrorMessage_9;
#line 186 "require.m"
        MR_String mercury__require__V_17_17;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_6, &mercury__require__V_17_17);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__V_17_17, &mercury__require__ErrorMessage_9);
        }
#line 188 "require.m"
        {
#line 188 "require.m"
          mercury__require__error_1_p_0(mercury__require__ErrorMessage_9);
#line 188 "require.m"
          return;
        }
#line 186 "require.m"
      }
#line 220 "require.m"
    else
#line 221 "require.m"
      {
#line 221 "require.m"
      }
#line 220 "require.m"
  }
#line 108 "require.m"
}

#line 101 "require.m"
void MR_CALL 
mercury__require__expect_4_p_0(
#line 101 "require.m"
  MR_Word mercury__require__Goal_5,
#line 101 "require.m"
  MR_String mercury__require__Module_6,
#line 101 "require.m"
  MR_String mercury__require__Proc_7,
#line 101 "require.m"
  MR_String mercury__require__Message_8)
#line 101 "require.m"
{
#line 213 "require.m"
  {
#line 213 "require.m"
    MR_bool mercury__require__succeeded;
#line 211 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_5, (MR_Integer) 1)));

#line 211 "require.m"
    {
#line 211 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_5));
    }
#line 213 "require.m"
    if (mercury__require__succeeded)
#line 212 "require.m"
      {
#line 212 "require.m"
      }
#line 213 "require.m"
    else
#line 189 "require.m"
      {
#line 189 "require.m"
        MR_String mercury__require__ErrorMessage_12;
#line 189 "require.m"
        MR_String mercury__require__V_22_22;
#line 189 "require.m"
        MR_String mercury__require__V_23_23;
#line 189 "require.m"
        MR_String mercury__require__V_25_25;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_8, &mercury__require__V_22_22);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__require__Proc_7, mercury__require__V_22_22, &mercury__require__V_23_23);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_23_23, &mercury__require__V_25_25);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__require__Module_6, mercury__require__V_25_25, &mercury__require__ErrorMessage_12);
        }
#line 192 "require.m"
        {
#line 192 "require.m"
          mercury__require__error_1_p_0(mercury__require__ErrorMessage_12);
#line 192 "require.m"
          return;
        }
#line 189 "require.m"
      }
#line 213 "require.m"
  }
#line 101 "require.m"
}

#line 95 "require.m"
void MR_CALL 
mercury__require__expect_3_p_0(
#line 95 "require.m"
  MR_Word mercury__require__Goal_4,
#line 95 "require.m"
  MR_String mercury__require__Module_5,
#line 95 "require.m"
  MR_String mercury__require__Message_6)
#line 95 "require.m"
{
#line 206 "require.m"
  {
#line 206 "require.m"
    MR_bool mercury__require__succeeded;
#line 204 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_4, (MR_Integer) 1)));

#line 204 "require.m"
    {
#line 204 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_4));
    }
#line 206 "require.m"
    if (mercury__require__succeeded)
#line 205 "require.m"
      {
#line 205 "require.m"
      }
#line 206 "require.m"
    else
#line 186 "require.m"
      {
#line 186 "require.m"
        MR_String mercury__require__ErrorMessage_9;
#line 186 "require.m"
        MR_String mercury__require__V_17_17;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__Message_6, &mercury__require__V_17_17);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__V_17_17, &mercury__require__ErrorMessage_9);
        }
#line 188 "require.m"
        {
#line 188 "require.m"
          mercury__require__error_1_p_0(mercury__require__ErrorMessage_9);
#line 188 "require.m"
          return;
        }
#line 186 "require.m"
      }
#line 206 "require.m"
  }
#line 95 "require.m"
}

#line 89 "require.m"
void MR_CALL 
mercury__require__require_2_p_0(
#line 89 "require.m"
  MR_Word mercury__require__Goal_3,
#line 89 "require.m"
  MR_String mercury__require__Message_4)
#line 89 "require.m"
{
#line 199 "require.m"
  {
#line 199 "require.m"
    MR_bool mercury__require__succeeded;
#line 197 "require.m"
    MR_bool MR_CALL (* mercury__require__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__require__Goal_3, (MR_Integer) 1)));

#line 197 "require.m"
    {
#line 197 "require.m"
      mercury__require__succeeded = mercury__require__func_0(((MR_Box) mercury__require__Goal_3));
    }
#line 199 "require.m"
    if (mercury__require__succeeded)
#line 198 "require.m"
      {
#line 198 "require.m"
      }
#line 199 "require.m"
    else
#line 200 "require.m"
      {
#line 200 "require.m"
        mercury__require__error_1_p_0(mercury__require__Message_4);
#line 200 "require.m"
        return;
      }
#line 199 "require.m"
  }
#line 89 "require.m"
}

#line 77 "require.m"
void MR_CALL 
mercury__require__unexpected_3_p_0(
#line 77 "require.m"
  MR_String mercury__require__Module_4,
#line 77 "require.m"
  MR_String mercury__require__Proc_5,
#line 77 "require.m"
  MR_String mercury__require__What_6)
#line 77 "require.m"
{
#line 189 "require.m"
  {
#line 189 "require.m"
    MR_bool mercury__require__succeeded;
#line 189 "require.m"
    MR_String mercury__require__ErrorMessage_7;
#line 189 "require.m"
    MR_String mercury__require__V_17_17;
#line 189 "require.m"
    MR_String mercury__require__V_18_18;
#line 189 "require.m"
    MR_String mercury__require__V_20_20;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_6, &mercury__require__V_17_17);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Proc_5, mercury__require__V_17_17, &mercury__require__V_18_18);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_18_18, &mercury__require__V_20_20);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__V_20_20, &mercury__require__ErrorMessage_7);
    }
#line 192 "require.m"
    {
#line 192 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_7);
#line 192 "require.m"
      return;
    }
#line 189 "require.m"
  }
#line 77 "require.m"
}

#line 76 "require.m"
MR_Box MR_CALL 
mercury__require__unexpected_3_f_0(
#line 76 "require.m"
  MR_Word mercury__require__TypeInfo_9_9,
#line 76 "require.m"
  MR_String mercury__require__Module_5,
#line 76 "require.m"
  MR_String mercury__require__Proc_6,
#line 76 "require.m"
  MR_String mercury__require__What_7)
#line 76 "require.m"
{
#line 189 "require.m"
  {
#line 189 "require.m"
    MR_bool mercury__require__succeeded;
#line 189 "require.m"
    MR_Box mercury__require__HeadVar__4_8;
#line 189 "require.m"
    MR_String mercury__require__ErrorMessage_13;
#line 189 "require.m"
    MR_String mercury__require__V_23_23;
#line 189 "require.m"
    MR_String mercury__require__V_24_24;
#line 189 "require.m"
    MR_String mercury__require__V_26_26;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_7, &mercury__require__V_23_23);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Proc_6, mercury__require__V_23_23, &mercury__require__V_24_24);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_24_24, &mercury__require__V_26_26);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__V_26_26, &mercury__require__ErrorMessage_13);
    }
#line 192 "require.m"
    {
#line 192 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_13);
    }
#line 189 "require.m"
    return mercury__require__HeadVar__4_8;
#line 189 "require.m"
  }
#line 76 "require.m"
}

#line 67 "require.m"
void MR_CALL 
mercury__require__unexpected_2_p_0(
#line 67 "require.m"
  MR_String mercury__require__Module_3,
#line 67 "require.m"
  MR_String mercury__require__What_4)
#line 67 "require.m"
{
#line 186 "require.m"
  {
#line 186 "require.m"
    MR_bool mercury__require__succeeded;
#line 186 "require.m"
    MR_String mercury__require__ErrorMessage_5;
#line 186 "require.m"
    MR_String mercury__require__V_13_13;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_4, &mercury__require__V_13_13);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_3, mercury__require__V_13_13, &mercury__require__ErrorMessage_5);
    }
#line 188 "require.m"
    {
#line 188 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_5);
#line 188 "require.m"
      return;
    }
#line 186 "require.m"
  }
#line 67 "require.m"
}

#line 66 "require.m"
MR_Box MR_CALL 
mercury__require__unexpected_2_f_0(
#line 66 "require.m"
  MR_Word mercury__require__TypeInfo_7_7,
#line 66 "require.m"
  MR_String mercury__require__Module_4,
#line 66 "require.m"
  MR_String mercury__require__What_5)
#line 66 "require.m"
{
#line 186 "require.m"
  {
#line 186 "require.m"
    MR_bool mercury__require__succeeded;
#line 186 "require.m"
    MR_Box mercury__require__HeadVar__3_6;
#line 186 "require.m"
    MR_String mercury__require__ErrorMessage_10;
#line 186 "require.m"
    MR_String mercury__require__V_18_18;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Unexpected: ", mercury__require__What_5, &mercury__require__V_18_18);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__V_18_18, &mercury__require__ErrorMessage_10);
    }
#line 188 "require.m"
    {
#line 188 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_10);
    }
#line 186 "require.m"
    return mercury__require__HeadVar__3_6;
#line 186 "require.m"
  }
#line 66 "require.m"
}

#line 57 "require.m"
void MR_CALL 
mercury__require__sorry_3_p_0(
#line 57 "require.m"
  MR_String mercury__require__Module_4,
#line 57 "require.m"
  MR_String mercury__require__Proc_5,
#line 57 "require.m"
  MR_String mercury__require__What_6)
#line 57 "require.m"
{
#line 176 "require.m"
  {
#line 176 "require.m"
    MR_bool mercury__require__succeeded;
#line 176 "require.m"
    MR_String mercury__require__ErrorMessage_7;
#line 176 "require.m"
    MR_String mercury__require__V_17_17;
#line 176 "require.m"
    MR_String mercury__require__V_18_18;
#line 176 "require.m"
    MR_String mercury__require__V_20_20;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_6, &mercury__require__V_17_17);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Proc_5, mercury__require__V_17_17, &mercury__require__V_18_18);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_18_18, &mercury__require__V_20_20);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__V_20_20, &mercury__require__ErrorMessage_7);
    }
#line 179 "require.m"
    {
#line 179 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_7);
#line 179 "require.m"
      return;
    }
#line 176 "require.m"
  }
#line 57 "require.m"
}

#line 56 "require.m"
MR_Box MR_CALL 
mercury__require__sorry_3_f_0(
#line 56 "require.m"
  MR_Word mercury__require__TypeInfo_9_9,
#line 56 "require.m"
  MR_String mercury__require__Module_5,
#line 56 "require.m"
  MR_String mercury__require__Proc_6,
#line 56 "require.m"
  MR_String mercury__require__What_7)
#line 56 "require.m"
{
#line 176 "require.m"
  {
#line 176 "require.m"
    MR_bool mercury__require__succeeded;
#line 176 "require.m"
    MR_Box mercury__require__HeadVar__4_8;
#line 176 "require.m"
    MR_String mercury__require__ErrorMessage_13;
#line 176 "require.m"
    MR_String mercury__require__V_23_23;
#line 176 "require.m"
    MR_String mercury__require__V_24_24;
#line 176 "require.m"
    MR_String mercury__require__V_26_26;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_7, &mercury__require__V_23_23);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Proc_6, mercury__require__V_23_23, &mercury__require__V_24_24);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": ", mercury__require__V_24_24, &mercury__require__V_26_26);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_5, mercury__require__V_26_26, &mercury__require__ErrorMessage_13);
    }
#line 179 "require.m"
    {
#line 179 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_13);
    }
#line 176 "require.m"
    return mercury__require__HeadVar__4_8;
#line 176 "require.m"
  }
#line 56 "require.m"
}

#line 46 "require.m"
void MR_CALL 
mercury__require__sorry_2_p_0(
#line 46 "require.m"
  MR_String mercury__require__Module_3,
#line 46 "require.m"
  MR_String mercury__require__What_4)
#line 46 "require.m"
{
#line 172 "require.m"
  {
#line 172 "require.m"
    MR_bool mercury__require__succeeded;
#line 172 "require.m"
    MR_String mercury__require__ErrorMessage_5;
#line 172 "require.m"
    MR_String mercury__require__V_13_13;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_4, &mercury__require__V_13_13);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_3, mercury__require__V_13_13, &mercury__require__ErrorMessage_5);
    }
#line 175 "require.m"
    {
#line 175 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_5);
#line 175 "require.m"
      return;
    }
#line 172 "require.m"
  }
#line 46 "require.m"
}

#line 45 "require.m"
MR_Box MR_CALL 
mercury__require__sorry_2_f_0(
#line 45 "require.m"
  MR_Word mercury__require__TypeInfo_7_7,
#line 45 "require.m"
  MR_String mercury__require__Module_4,
#line 45 "require.m"
  MR_String mercury__require__What_5)
#line 45 "require.m"
{
#line 172 "require.m"
  {
#line 172 "require.m"
    MR_bool mercury__require__succeeded;
#line 172 "require.m"
    MR_Box mercury__require__HeadVar__3_6;
#line 172 "require.m"
    MR_String mercury__require__ErrorMessage_10;
#line 172 "require.m"
    MR_String mercury__require__V_18_18;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": Sorry, not implemented: ", mercury__require__What_5, &mercury__require__V_18_18);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__require__Module_4, mercury__require__V_18_18, &mercury__require__ErrorMessage_10);
    }
#line 175 "require.m"
    {
#line 175 "require.m"
      mercury__require__error_1_p_0(mercury__require__ErrorMessage_10);
    }
#line 172 "require.m"
    return mercury__require__HeadVar__3_6;
#line 172 "require.m"
  }
#line 45 "require.m"
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
#line 163 "require.m"
  {
#line 163 "require.m"
    MR_bool mercury__require__succeeded;
#line 163 "require.m"
    MR_Box mercury__require__HeadVar__2_4;

#line 163 "require.m"
    {
#line 163 "require.m"
      mercury__require__error_1_p_0(mercury__require__Message_3);
    }
#line 163 "require.m"
    return mercury__require__HeadVar__2_4;
#line 163 "require.m"
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
#line 156 "require.m"
  {
#line 156 "require.m"
    MR_bool mercury__require__succeeded;
#line 156 "require.m"
    MR_Word mercury__require__TypeCtorInfo_4_4 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 156 "require.m"
    MR_Word mercury__require__V_3_3 = (MR_Word) mercury__require__Message_2;

#line 157 "require.m"
    {
#line 157 "require.m"
      mercury__exception__throw_1_p_0(mercury__require__TypeCtorInfo_4_4, ((MR_Box) (mercury__require__V_3_3)));
#line 157 "require.m"
      return;
    }
#line 156 "require.m"
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
