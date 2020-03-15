/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-2020-03-15
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


// :- module library.
// :- implementation.

/*
INIT mercury__library__init
ENDINIT
*/

#include "library.mih"
#include "library.mh"


#include "array.mih"
#include "array2d.mih"
#include "assoc_list.mih"
#include "backjump.mih"
#include "bag.mih"
#include "benchmarking.mih"
#include "bimap.mih"
#include "bit_buffer.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "bt_array.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "diet.mih"
#include "digraph.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "eqvclass.mih"
#include "erlang_builtin.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "float.mih"
#include "gc.mih"
#include "getopt.mih"
#include "getopt_io.mih"
#include "hash_table.mih"
#include "injection.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "kv_list.mih"
#include "lazy.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "par_builtin.mih"
#include "parser.mih"
#include "parsing_utils.mih"
#include "pprint.mih"
#include "pqueue.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profiling_builtin.mih"
#include "prolog.mih"
#include "psqueue.mih"
#include "queue.mih"
#include "random.mih"
#include "ranges.mih"
#include "rational.mih"
#include "rbtree.mih"
#include "region_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtree.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_bbbtree.mih"
#include "set_ctree234.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "set_unordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "table_statistics.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "term_size_prof_builtin.mih"
#include "term_to_xml.mih"
#include "test_bitset.mih"
#include "thread.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "version_array2d.mih"
#include "version_bitmap.mih"
#include "version_hash_table.mih"
#include "version_store.mih"
#include "bit_buffer.read.mih"
#include "bit_buffer.write.mih"
#include "random.sfc16.mih"
#include "random.sfc32.mih"
#include "random.sfc64.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint64_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint32_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint16_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint8_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint64_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint32_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint16_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint8_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Integer MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void);

static void MR_CALL 
mercury__library__std_library_init_2_p_0(void);


static /* final */ const MR_Box mercury__library_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__library_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__library_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__library_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__library_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__library_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__library_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__library_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__library_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bit_buffer.mh"
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
#include "library.mh"
#include "math.mh"
#include "par_builtin.mh"
#include "parsing_utils.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "profiling_builtin.mh"
#include "region_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_statistics.mh"
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"

#line 389 "library.m"
void 
ML_std_library_init(void)
#line 389 "library.m"
{
#line 389 "library.m"
	mercury__library__std_library_init_2_p_0();
}

#line 408 "library.m"
void 
ML_std_library_finalize(void)
#line 408 "library.m"
{
#line 408 "library.m"
	mercury__library__std_library_finalize_2_p_0();
}


static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint64_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc64__generate_uint64_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint32_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    uint64_t V_6_12;
    uint64_t V_10_13;

    mercury__random__sfc64__generate_uint64_3_p_0(&V_6_12, HeadVar__3_3, HeadVar__4_4);
    V_10_13 = mercury__uint64__f_62_62_2_f_0(V_6_12, (MR_Integer) 32);
{
#define MR_PROC_LABEL mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0

	uint64_t U64;
	uint32_t U32;

	U64 =  V_10_13 ;
		{

    U32 = (uint32_t) U64;


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = U32;
}
  }
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint16_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc64__generate_uint16_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_54_52_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc64_0(
  uint8_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc64__generate_uint8_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint64_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc32__generate_uint64_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint32_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc32__generate_uint32_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint16_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc32__generate_uint16_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_117_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_49_93_95_48_4_p_in__random__sfc32_0(
  uint8_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc32__generate_uint8_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static MR_Integer MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void)
{
  {
  }
}

static void MR_CALL 
mercury__library__std_library_init_2_p_0(void)
{
  {
    mercury__builtin__init_runtime_hooks_0_p_0();
    mercury__io__init_state_2_p_0();
  }
}

MR_bool MR_CALL 
mercury__library__mercury_std_library_module_1_p_0(
  MR_String HeadVar__1_1)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 114:
              if (((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 121))))
                switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 50:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "array2d"))
                      case_num_0 = (MR_Integer) 1;
                    break;
                }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "assoc_list"))
                case_num_0 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "backjump"))
                    case_num_0 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 103:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "bag"))
                    case_num_0 = (MR_Integer) 4;
                  break;
              }
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "benchmarking"))
                case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "bimap"))
                    case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 95:
                      if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 98)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 46:
                            switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                              case (MR_Integer) 114:
                                if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "bit_buffer.read"))
                                  case_num_0 = (MR_Integer) 8;
                                break;
                              case (MR_Integer) 119:
                                if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "bit_buffer.write"))
                                  case_num_0 = (MR_Integer) 9;
                                break;
                            }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "bitmap"))
                        case_num_0 = (MR_Integer) 10;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "bool"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "bt_array"))
                case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "builtin"))
                case_num_0 = (MR_Integer) 13;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "calendar"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "char"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "construct"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "cord"))
                    case_num_0 = (MR_Integer) 17;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "counter"))
                    case_num_0 = (MR_Integer) 18;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "deconstruct"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "diet"))
                    case_num_0 = (MR_Integer) 20;
                  break;
                case (MR_Integer) 103:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "digraph"))
                    case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "dir"))
                    case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 100:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "edit_seq"))
                case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "enum"))
                case_num_0 = (MR_Integer) 24;
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "eqvclass"))
                case_num_0 = (MR_Integer) 25;
              break;
            case (MR_Integer) 114:
              if (((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 108)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                  case (MR_Integer) 98:
                    if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "erlang_builtin"))
                      case_num_0 = (MR_Integer) 26;
                    break;
                  case (MR_Integer) 114:
                    if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "erlang_rtti_implementation"))
                      case_num_0 = (MR_Integer) 27;
                    break;
                }
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "exception"))
                case_num_0 = (MR_Integer) 28;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "fat_sparse_bitset"))
                case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "float"))
                case_num_0 = (MR_Integer) 30;
              break;
          }
          break;
        case (MR_Integer) 103:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 99:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "gc"))
                case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 101:
              if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 116)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 32;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "getopt_io"))
                      case_num_0 = (MR_Integer) 33;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "hash_table"))
            case_num_0 = (MR_Integer) 34;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 106:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "injection"))
                    case_num_0 = (MR_Integer) 35;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 36;
                      break;
                    case (MR_Integer) 49:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int16"))
                        case_num_0 = (MR_Integer) 37;
                      break;
                    case (MR_Integer) 51:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int32"))
                        case_num_0 = (MR_Integer) 38;
                      break;
                    case (MR_Integer) 54:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int64"))
                        case_num_0 = (MR_Integer) 39;
                      break;
                    case (MR_Integer) 56:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int8"))
                        case_num_0 = (MR_Integer) 40;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "integer"))
                        case_num_0 = (MR_Integer) 41;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "io"))
                case_num_0 = (MR_Integer) 42;
              break;
          }
          break;
        case (MR_Integer) 107:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "kv_list"))
            case_num_0 = (MR_Integer) 43;
          break;
        case (MR_Integer) 108:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "lazy"))
                case_num_0 = (MR_Integer) 44;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "lexer"))
                case_num_0 = (MR_Integer) 45;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 98:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "library"))
                    case_num_0 = (MR_Integer) 46;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "list"))
                    case_num_0 = (MR_Integer) 47;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 112:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "map"))
                    case_num_0 = (MR_Integer) 48;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "math"))
                    case_num_0 = (MR_Integer) 49;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "maybe"))
                    case_num_0 = (MR_Integer) 50;
                  break;
              }
              break;
            case (MR_Integer) 117:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "multi_map"))
                    case_num_0 = (MR_Integer) 51;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "mutvar"))
                    case_num_0 = (MR_Integer) 52;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 111:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 110:
              if (((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 53;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "one_or_more_map"))
                      case_num_0 = (MR_Integer) 54;
                    break;
                }
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ops"))
                case_num_0 = (MR_Integer) 55;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "pair"))
                    case_num_0 = (MR_Integer) 56;
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 95:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "par_builtin"))
                        case_num_0 = (MR_Integer) 57;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                        case (MR_Integer) 101:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "parser"))
                            case_num_0 = (MR_Integer) 58;
                          break;
                        case (MR_Integer) 105:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "parsing_utils"))
                            case_num_0 = (MR_Integer) 59;
                          break;
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "pprint"))
                case_num_0 = (MR_Integer) 60;
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "pqueue"))
                case_num_0 = (MR_Integer) 61;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "pretty_printer"))
                    case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "private_builtin"))
                    case_num_0 = (MR_Integer) 63;
                  break;
                case (MR_Integer) 111:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 102:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "profiling_builtin"))
                        case_num_0 = (MR_Integer) 64;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "prolog"))
                        case_num_0 = (MR_Integer) 65;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "psqueue"))
                case_num_0 = (MR_Integer) 66;
              break;
          }
          break;
        case (MR_Integer) 113:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "queue"))
            case_num_0 = (MR_Integer) 67;
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 100:
                      if (((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 68;
                            break;
                          case (MR_Integer) 46:
                            if (((((((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 115)) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 99))))
                              switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                                case (MR_Integer) 49:
                                  if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "random.sfc16"))
                                    case_num_0 = (MR_Integer) 69;
                                  break;
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "random.sfc32"))
                                    case_num_0 = (MR_Integer) 70;
                                  break;
                                case (MR_Integer) 54:
                                  if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "random.sfc64"))
                                    case_num_0 = (MR_Integer) 71;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "ranges"))
                        case_num_0 = (MR_Integer) 72;
                      break;
                  }
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "rational"))
                    case_num_0 = (MR_Integer) 73;
                  break;
              }
              break;
            case (MR_Integer) 98:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "rbtree"))
                case_num_0 = (MR_Integer) 74;
              break;
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 103:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "region_builtin"))
                    case_num_0 = (MR_Integer) 75;
                  break;
                case (MR_Integer) 113:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "require"))
                    case_num_0 = (MR_Integer) 76;
                  break;
              }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "robdd"))
                case_num_0 = (MR_Integer) 77;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "rtree"))
                    case_num_0 = (MR_Integer) 78;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "rtti_implementation"))
                    case_num_0 = (MR_Integer) 79;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 116))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 80;
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                      case (MR_Integer) 98:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_bbbtree"))
                          case_num_0 = (MR_Integer) 81;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_ctree234"))
                          case_num_0 = (MR_Integer) 82;
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_ordlist"))
                          case_num_0 = (MR_Integer) 83;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_tree234"))
                          case_num_0 = (MR_Integer) 84;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_unordlist"))
                          case_num_0 = (MR_Integer) 85;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "solutions"))
                case_num_0 = (MR_Integer) 86;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "sparse_bitset"))
                case_num_0 = (MR_Integer) 87;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "stack"))
                    case_num_0 = (MR_Integer) 88;
                  break;
                case (MR_Integer) 100:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "std_util"))
                    case_num_0 = (MR_Integer) 89;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "stm_builtin"))
                    case_num_0 = (MR_Integer) 90;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "store"))
                    case_num_0 = (MR_Integer) 91;
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 92;
                            break;
                          case (MR_Integer) 46:
                            if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "stream.string_writer"))
                              case_num_0 = (MR_Integer) 93;
                            break;
                        }
                      break;
                    case (MR_Integer) 105:
                      if (((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 103))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 94;
                            break;
                          case (MR_Integer) 46:
                            switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                              case (MR_Integer) 98:
                                if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "string.builder"))
                                  case_num_0 = (MR_Integer) 95;
                                break;
                              case (MR_Integer) 102:
                                if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "string.format"))
                                  case_num_0 = (MR_Integer) 96;
                                break;
                              case (MR_Integer) 112:
                                if (((((((((((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "string.parse_runtime"))
                                        case_num_0 = (MR_Integer) 97;
                                      break;
                                    case (MR_Integer) 117:
                                      if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "string.parse_util"))
                                        case_num_0 = (MR_Integer) 98;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "string.to_string"))
                                  case_num_0 = (MR_Integer) 99;
                                break;
                            }
                            break;
                        }
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 98)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                  case (MR_Integer) 98:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "table_builtin"))
                      case_num_0 = (MR_Integer) 100;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "table_statistics"))
                      case_num_0 = (MR_Integer) 101;
                    break;
                }
              break;
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 114:
                  if (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 109))
                    switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 102;
                        break;
                      case (MR_Integer) 95:
                        switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_conversion"))
                              case_num_0 = (MR_Integer) 103;
                            break;
                          case (MR_Integer) 105:
                            if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_io"))
                              case_num_0 = (MR_Integer) 104;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_size_prof_builtin"))
                              case_num_0 = (MR_Integer) 105;
                            break;
                          case (MR_Integer) 116:
                            if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_to_xml"))
                              case_num_0 = (MR_Integer) 106;
                            break;
                        }
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "test_bitset"))
                    case_num_0 = (MR_Integer) 107;
                  break;
              }
              break;
            case (MR_Integer) 104:
              if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 100))))
                switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 108;
                    break;
                  case (MR_Integer) 46:
                    switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                      case (MR_Integer) 98:
                        if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.barrier"))
                          case_num_0 = (MR_Integer) 109;
                        break;
                      case (MR_Integer) 99:
                        switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                          case (MR_Integer) 104:
                            if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "thread.channel"))
                              case_num_0 = (MR_Integer) 110;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "thread.closeable_channel"))
                              case_num_0 = (MR_Integer) 111;
                            break;
                        }
                        break;
                      case (MR_Integer) 102:
                        if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.future"))
                          case_num_0 = (MR_Integer) 112;
                        break;
                      case (MR_Integer) 109:
                        if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.mvar"))
                          case_num_0 = (MR_Integer) 113;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.semaphore"))
                          case_num_0 = (MR_Integer) 114;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "time"))
                case_num_0 = (MR_Integer) 115;
              break;
            case (MR_Integer) 114:
              if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                  case (MR_Integer) 50:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "tree234"))
                      case_num_0 = (MR_Integer) 116;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "tree_bitset"))
                      case_num_0 = (MR_Integer) 117;
                    break;
                }
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "type_desc"))
                case_num_0 = (MR_Integer) 118;
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 119;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint16"))
                      case_num_0 = (MR_Integer) 120;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint32"))
                      case_num_0 = (MR_Integer) 121;
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint64"))
                      case_num_0 = (MR_Integer) 122;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint8"))
                      case_num_0 = (MR_Integer) 123;
                    break;
                }
              break;
            case (MR_Integer) 110:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 105))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "unit"))
                      case_num_0 = (MR_Integer) 124;
                    break;
                  case (MR_Integer) 118:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "univ"))
                      case_num_0 = (MR_Integer) 125;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 118:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "varset"))
                case_num_0 = (MR_Integer) 126;
              break;
            case (MR_Integer) 101:
              if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                  case (MR_Integer) 97:
                    if (((((((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 121))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 127;
                          break;
                        case (MR_Integer) 50:
                          if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "version_array2d"))
                            case_num_0 = (MR_Integer) 128;
                          break;
                      }
                    break;
                  case (MR_Integer) 98:
                    if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "version_bitmap"))
                      case_num_0 = (MR_Integer) 129;
                    break;
                  case (MR_Integer) 104:
                    if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "version_hash_table"))
                      case_num_0 = (MR_Integer) 130;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "version_store"))
                      case_num_0 = (MR_Integer) 131;
                    break;
                }
              break;
          }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__library__version_2_p_0(
  MR_String * Version_1,
  MR_String * Fullarch_2)
{
  {
{
#define MR_PROC_LABEL mercury__library__version_2_p_0

	MR_String Version;
	MR_String Fullarch;

		{

    MR_ConstString version_string = MR_VERSION;
    MR_ConstString fullarch_string = MR_FULLARCH;

    // Cast away const needed here, because Mercury declares Version
    // with type MR_String rather than MR_ConstString.
    Version = (MR_String) (MR_Word) version_string;
    Fullarch = (MR_String) (MR_Word) fullarch_string;


		;}
#undef MR_PROC_LABEL
	 *Version_1  = Version;
	 *Fullarch_2  = Fullarch;
}
  }
}

void mercury__library__init(void)
{
}

void mercury__library__init_type_tables(void)
{
}

void mercury__library__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__library__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module library.
