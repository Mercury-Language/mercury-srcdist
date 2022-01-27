/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module library. */
/* :- implementation. */

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
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "mutvar.mih"
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
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 366 "library.m"
static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void);

#line 351 "library.m"
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



#include "library.mh"
#include "array.mh"
#include "array.mh"
#include "bit_buffer.mh"
#include "bit_buffer.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "par_builtin.mh"
#include "par_builtin.mh"
#include "profiling_builtin.mh"
#include "profiling_builtin.mh"
#include "region_builtin.mh"
#include "region_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "table_statistics.mh"
#include "table_statistics.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"
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
#include "builtin.mh"
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
#include "hash_table.mh"
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
#include "math.mh"
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
#include "par_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "parsing_utils.mh"
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
#include "private_builtin.mh"
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
#include "profiling_builtin.mh"
#include "region_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "table_statistics.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "version_hash_table.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
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
#include "bit_buffer.mh"
#include "string.mh"

#line 353 "library.m"
void 
ML_std_library_init(void)
#line 353 "library.m"
{
#line 353 "library.m"
	mercury__library__std_library_init_2_p_0();
}

#line 368 "library.m"
void 
ML_std_library_finalize(void)
#line 368 "library.m"
{
#line 368 "library.m"
	mercury__library__std_library_finalize_2_p_0();
}


#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__library__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 366 "library.m"
static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void)
#line 366 "library.m"
{
#line 914 "io.opt"
  {
#line 914 "io.opt"
    MR_bool mercury__library__succeeded;

#line 914 "io.opt"
  }
#line 366 "library.m"
}

#line 351 "library.m"
static void MR_CALL 
mercury__library__std_library_init_2_p_0(void)
#line 351 "library.m"
{
#line 359 "library.m"
  {
#line 359 "library.m"
    MR_bool mercury__library__succeeded;

#line 360 "library.m"
    {
#line 360 "library.m"
      mercury__builtin__init_runtime_hooks_0_p_0();
    }
#line 361 "library.m"
    {
#line 361 "library.m"
      mercury__io__init_state_2_p_0();
#line 361 "library.m"
      return;
    }
#line 359 "library.m"
  }
#line 351 "library.m"
}

#line 34 "library.m"
MR_bool MR_CALL 
mercury__library__mercury_std_library_module_1_p_0(
#line 34 "library.m"
  MR_String mercury__library__HeadVar__1_1)
#line 34 "library.m"
{
#line 231 "library.m"
  {
#line 231 "library.m"
    MR_bool mercury__library__succeeded;

#line 231 "library.m"
    {
#line 231 "library.m"
      MR_Integer mercury__library__case_num_0 = (MR_Integer) -1;

#line 231 "library.m"
#line 231 "library.m"
      switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 0)) {
#line 231 "library.m"
        case (MR_Integer) 97:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 114:
#line 231 "library.m"
              if (((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 121))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) {
#line 231 "library.m"
                  case (MR_Integer) 0:
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 0;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 50:
#line 231 "library.m"
                    if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "array2d"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 1;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 115:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "assoc_list"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 2;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 98:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 99:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "backjump"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 3;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 103:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "bag"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 4;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "benchmarking"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 5;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 105:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 109:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "bimap"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 6;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 116:
#line 231 "library.m"
#line 231 "library.m"
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
                    case (MR_Integer) 95:
#line 231 "library.m"
                      if (((((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 98)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 8)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 9)) == (MR_Integer) 114))))
#line 231 "library.m"
#line 231 "library.m"
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 10)) {
#line 231 "library.m"
                          case (MR_Integer) 0:
#line 231 "library.m"
                            mercury__library__case_num_0 = (MR_Integer) 7;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                          case (MR_Integer) 46:
#line 231 "library.m"
#line 231 "library.m"
                            switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 11)) {
#line 231 "library.m"
                              case (MR_Integer) 114:
#line 231 "library.m"
                                if (MR_offset_streq(12, mercury__library__HeadVar__1_1, (MR_String) "bit_buffer.read"))
#line 231 "library.m"
                                  mercury__library__case_num_0 = (MR_Integer) 8;
#line 231 "library.m"
                                break;
#line 231 "library.m"
                              case (MR_Integer) 119:
#line 231 "library.m"
                                if (MR_offset_streq(12, mercury__library__HeadVar__1_1, (MR_String) "bit_buffer.write"))
#line 231 "library.m"
                                  mercury__library__case_num_0 = (MR_Integer) 9;
#line 231 "library.m"
                                break;
#line 231 "library.m"
                            }
#line 231 "library.m"
                            break;
#line 231 "library.m"
                        }
#line 231 "library.m"
                      break;
#line 231 "library.m"
                    case (MR_Integer) 109:
#line 231 "library.m"
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "bitmap"))
#line 231 "library.m"
                        mercury__library__case_num_0 = (MR_Integer) 10;
#line 231 "library.m"
                      break;
#line 231 "library.m"
                  }
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 111:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "bool"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 11;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 116:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "bt_array"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 12;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 117:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "builtin"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 13;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 99:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "calendar"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 14;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 104:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "char"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 15;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 111:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 110:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "construct"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 16;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 114:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "cord"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 17;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 117:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "counter"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 18;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 100:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "deconstruct"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 19;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 105:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 101:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "diet"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 20;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 103:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "digraph"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 21;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 114:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "dir"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 22;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 101:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 110:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "enum"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 23;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 113:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "eqvclass"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 24;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 114:
#line 231 "library.m"
              if (((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 108)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) == (MR_Integer) 95))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) {
#line 231 "library.m"
                  case (MR_Integer) 98:
#line 231 "library.m"
                    if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "erlang_builtin"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 25;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 114:
#line 231 "library.m"
                    if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "erlang_rtti_implementation"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 26;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 120:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "exception"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 27;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 102:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "fat_sparse_bitset"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 28;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 108:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "float"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 29;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 103:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 99:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "gc"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 30;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
              if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 116)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 116))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
#line 231 "library.m"
                  case (MR_Integer) 0:
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 31;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 95:
#line 231 "library.m"
                    if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "getopt_io"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 32;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 104:
#line 231 "library.m"
          if (MR_offset_streq(1, mercury__library__HeadVar__1_1, (MR_String) "hash_table"))
#line 231 "library.m"
            mercury__library__case_num_0 = (MR_Integer) 33;
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 105:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 110:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 106:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "injection"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 34;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 116:
#line 231 "library.m"
#line 231 "library.m"
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
                    case (MR_Integer) 0:
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 35;
#line 231 "library.m"
                      break;
#line 231 "library.m"
                    case (MR_Integer) 101:
#line 231 "library.m"
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "integer"))
#line 231 "library.m"
                        mercury__library__case_num_0 = (MR_Integer) 36;
#line 231 "library.m"
                      break;
#line 231 "library.m"
                  }
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 111:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "io"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 37;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 108:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "lazy"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 38;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "lexer"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 39;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 105:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 98:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "library"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 40;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 115:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "list"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 41;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 109:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 112:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "map"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 42;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 116:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "math"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 43;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 121:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "maybe"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 44;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 117:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 108:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "multi_map"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 45;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 116:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "mutvar"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 46;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 111:
#line 231 "library.m"
          if (MR_offset_streq(1, mercury__library__HeadVar__1_1, (MR_String) "ops"))
#line 231 "library.m"
            mercury__library__case_num_0 = (MR_Integer) 47;
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 112:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 105:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "pair"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 48;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 114:
#line 231 "library.m"
#line 231 "library.m"
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
                    case (MR_Integer) 95:
#line 231 "library.m"
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "par_builtin"))
#line 231 "library.m"
                        mercury__library__case_num_0 = (MR_Integer) 49;
#line 231 "library.m"
                      break;
#line 231 "library.m"
                    case (MR_Integer) 115:
#line 231 "library.m"
#line 231 "library.m"
                      switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
#line 231 "library.m"
                        case (MR_Integer) 101:
#line 231 "library.m"
                          if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "parser"))
#line 231 "library.m"
                            mercury__library__case_num_0 = (MR_Integer) 50;
#line 231 "library.m"
                          break;
#line 231 "library.m"
                        case (MR_Integer) 105:
#line 231 "library.m"
                          if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "parsing_utils"))
#line 231 "library.m"
                            mercury__library__case_num_0 = (MR_Integer) 51;
#line 231 "library.m"
                          break;
#line 231 "library.m"
                      }
#line 231 "library.m"
                      break;
#line 231 "library.m"
                  }
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 112:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "pprint"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 52;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 113:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "pqueue"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 53;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 114:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 101:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "pretty_printer"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 54;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 105:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "private_builtin"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 55;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 111:
#line 231 "library.m"
#line 231 "library.m"
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
                    case (MR_Integer) 102:
#line 231 "library.m"
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "profiling_builtin"))
#line 231 "library.m"
                        mercury__library__case_num_0 = (MR_Integer) 56;
#line 231 "library.m"
                      break;
#line 231 "library.m"
                    case (MR_Integer) 108:
#line 231 "library.m"
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "prolog"))
#line 231 "library.m"
                        mercury__library__case_num_0 = (MR_Integer) 57;
#line 231 "library.m"
                      break;
#line 231 "library.m"
                  }
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 115:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "psqueue"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 58;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 113:
#line 231 "library.m"
          if (MR_offset_streq(1, mercury__library__HeadVar__1_1, (MR_String) "queue"))
#line 231 "library.m"
            mercury__library__case_num_0 = (MR_Integer) 59;
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 114:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 110:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "random"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 60;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 116:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "rational"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 61;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 98:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "rbtree"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 62;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 103:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "region_builtin"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 63;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 113:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "require"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 64;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 111:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "robdd"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 65;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 116:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 114:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "rtree"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 66;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 116:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "rtti_implementation"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 67;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 115:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
              if (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 116))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
                  case (MR_Integer) 0:
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 68;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 95:
#line 231 "library.m"
#line 231 "library.m"
                    switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
#line 231 "library.m"
                      case (MR_Integer) 98:
#line 231 "library.m"
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_bbbtree"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 69;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 99:
#line 231 "library.m"
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_ctree234"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 70;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 111:
#line 231 "library.m"
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_ordlist"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 71;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 116:
#line 231 "library.m"
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_tree234"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 72;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 117:
#line 231 "library.m"
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_unordlist"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 73;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                    }
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 111:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "solutions"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 74;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 112:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "sparse_bitset"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 75;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 116:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 97:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "stack"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 76;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 100:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "std_util"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 77;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 109:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "stm_builtin"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 78;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 111:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "store"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 79;
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 114:
#line 231 "library.m"
#line 231 "library.m"
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
                    case (MR_Integer) 101:
#line 231 "library.m"
                      if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 97)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 109))))
#line 231 "library.m"
#line 231 "library.m"
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
#line 231 "library.m"
                          case (MR_Integer) 0:
#line 231 "library.m"
                            mercury__library__case_num_0 = (MR_Integer) 80;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                          case (MR_Integer) 46:
#line 231 "library.m"
                            if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "stream.string_writer"))
#line 231 "library.m"
                              mercury__library__case_num_0 = (MR_Integer) 81;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                        }
#line 231 "library.m"
                      break;
#line 231 "library.m"
                    case (MR_Integer) 105:
#line 231 "library.m"
                      if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 110)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 103))))
#line 231 "library.m"
#line 231 "library.m"
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
#line 231 "library.m"
                          case (MR_Integer) 0:
#line 231 "library.m"
                            mercury__library__case_num_0 = (MR_Integer) 82;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                          case (MR_Integer) 46:
#line 231 "library.m"
#line 231 "library.m"
                            switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) {
#line 231 "library.m"
                              case (MR_Integer) 98:
#line 231 "library.m"
                                if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "string.builder"))
#line 231 "library.m"
                                  mercury__library__case_num_0 = (MR_Integer) 83;
#line 231 "library.m"
                                break;
#line 231 "library.m"
                              case (MR_Integer) 102:
#line 231 "library.m"
                                if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "string.format"))
#line 231 "library.m"
                                  mercury__library__case_num_0 = (MR_Integer) 84;
#line 231 "library.m"
                                break;
#line 231 "library.m"
                              case (MR_Integer) 112:
#line 231 "library.m"
                                if (((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 8)) == (MR_Integer) 97)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 9)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 10)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 12)) == (MR_Integer) 95))))
#line 231 "library.m"
#line 231 "library.m"
                                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 13)) {
#line 231 "library.m"
                                    case (MR_Integer) 114:
#line 231 "library.m"
                                      if (MR_offset_streq(14, mercury__library__HeadVar__1_1, (MR_String) "string.parse_runtime"))
#line 231 "library.m"
                                        mercury__library__case_num_0 = (MR_Integer) 85;
#line 231 "library.m"
                                      break;
#line 231 "library.m"
                                    case (MR_Integer) 117:
#line 231 "library.m"
                                      if (MR_offset_streq(14, mercury__library__HeadVar__1_1, (MR_String) "string.parse_util"))
#line 231 "library.m"
                                        mercury__library__case_num_0 = (MR_Integer) 86;
#line 231 "library.m"
                                      break;
#line 231 "library.m"
                                  }
#line 231 "library.m"
                                break;
#line 231 "library.m"
                              case (MR_Integer) 116:
#line 231 "library.m"
                                if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "string.to_string"))
#line 231 "library.m"
                                  mercury__library__case_num_0 = (MR_Integer) 87;
#line 231 "library.m"
                                break;
#line 231 "library.m"
                            }
#line 231 "library.m"
                            break;
#line 231 "library.m"
                        }
#line 231 "library.m"
                      break;
#line 231 "library.m"
                  }
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 116:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
              if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 98)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 95))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
#line 231 "library.m"
                  case (MR_Integer) 98:
#line 231 "library.m"
                    if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "table_builtin"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 88;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 115:
#line 231 "library.m"
                    if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "table_statistics"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 89;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
#line 231 "library.m"
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
#line 231 "library.m"
                case (MR_Integer) 114:
#line 231 "library.m"
                  if (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 109))
#line 231 "library.m"
#line 231 "library.m"
                    switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
#line 231 "library.m"
                      case (MR_Integer) 0:
#line 231 "library.m"
                        mercury__library__case_num_0 = (MR_Integer) 90;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 95:
#line 231 "library.m"
#line 231 "library.m"
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) {
#line 231 "library.m"
                          case (MR_Integer) 99:
#line 231 "library.m"
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_conversion"))
#line 231 "library.m"
                              mercury__library__case_num_0 = (MR_Integer) 91;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                          case (MR_Integer) 105:
#line 231 "library.m"
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_io"))
#line 231 "library.m"
                              mercury__library__case_num_0 = (MR_Integer) 92;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                          case (MR_Integer) 115:
#line 231 "library.m"
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_size_prof_builtin"))
#line 231 "library.m"
                              mercury__library__case_num_0 = (MR_Integer) 93;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                          case (MR_Integer) 116:
#line 231 "library.m"
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_to_xml"))
#line 231 "library.m"
                              mercury__library__case_num_0 = (MR_Integer) 94;
#line 231 "library.m"
                            break;
#line 231 "library.m"
                        }
#line 231 "library.m"
                        break;
#line 231 "library.m"
                    }
#line 231 "library.m"
                  break;
#line 231 "library.m"
                case (MR_Integer) 115:
#line 231 "library.m"
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "test_bitset"))
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 95;
#line 231 "library.m"
                  break;
#line 231 "library.m"
              }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 104:
#line 231 "library.m"
              if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 100))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
#line 231 "library.m"
                  case (MR_Integer) 0:
#line 231 "library.m"
                    mercury__library__case_num_0 = (MR_Integer) 96;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 46:
#line 231 "library.m"
#line 231 "library.m"
                    switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) {
#line 231 "library.m"
                      case (MR_Integer) 98:
#line 231 "library.m"
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.barrier"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 97;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 99:
#line 231 "library.m"
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.channel"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 98;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 102:
#line 231 "library.m"
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.future"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 99;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 109:
#line 231 "library.m"
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.mvar"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 100;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                      case (MR_Integer) 115:
#line 231 "library.m"
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.semaphore"))
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 101;
#line 231 "library.m"
                        break;
#line 231 "library.m"
                    }
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 105:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "time"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 102;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 114:
#line 231 "library.m"
              if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 101)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 101))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
#line 231 "library.m"
                  case (MR_Integer) 50:
#line 231 "library.m"
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "tree234"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 103;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 95:
#line 231 "library.m"
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "tree_bitset"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 104;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 121:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "type_desc"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 105;
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 117:
#line 231 "library.m"
          if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 105))))
#line 231 "library.m"
#line 231 "library.m"
            switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
#line 231 "library.m"
              case (MR_Integer) 116:
#line 231 "library.m"
                if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "unit"))
#line 231 "library.m"
                  mercury__library__case_num_0 = (MR_Integer) 106;
#line 231 "library.m"
                break;
#line 231 "library.m"
              case (MR_Integer) 118:
#line 231 "library.m"
                if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "univ"))
#line 231 "library.m"
                  mercury__library__case_num_0 = (MR_Integer) 107;
#line 231 "library.m"
                break;
#line 231 "library.m"
            }
#line 231 "library.m"
          break;
#line 231 "library.m"
        case (MR_Integer) 118:
#line 231 "library.m"
#line 231 "library.m"
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
#line 231 "library.m"
            case (MR_Integer) 97:
#line 231 "library.m"
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "varset"))
#line 231 "library.m"
                mercury__library__case_num_0 = (MR_Integer) 108;
#line 231 "library.m"
              break;
#line 231 "library.m"
            case (MR_Integer) 101:
#line 231 "library.m"
              if (((((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) == (MR_Integer) 95))))
#line 231 "library.m"
#line 231 "library.m"
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 8)) {
#line 231 "library.m"
                  case (MR_Integer) 97:
#line 231 "library.m"
                    if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 11)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 12)) == (MR_Integer) 121))))
#line 231 "library.m"
#line 231 "library.m"
                      switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 13)) {
#line 231 "library.m"
                        case (MR_Integer) 0:
#line 231 "library.m"
                          mercury__library__case_num_0 = (MR_Integer) 109;
#line 231 "library.m"
                          break;
#line 231 "library.m"
                        case (MR_Integer) 50:
#line 231 "library.m"
                          if (MR_offset_streq(14, mercury__library__HeadVar__1_1, (MR_String) "version_array2d"))
#line 231 "library.m"
                            mercury__library__case_num_0 = (MR_Integer) 110;
#line 231 "library.m"
                          break;
#line 231 "library.m"
                      }
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 98:
#line 231 "library.m"
                    if (MR_offset_streq(9, mercury__library__HeadVar__1_1, (MR_String) "version_bitmap"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 111;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 104:
#line 231 "library.m"
                    if (MR_offset_streq(9, mercury__library__HeadVar__1_1, (MR_String) "version_hash_table"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 112;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                  case (MR_Integer) 115:
#line 231 "library.m"
                    if (MR_offset_streq(9, mercury__library__HeadVar__1_1, (MR_String) "version_store"))
#line 231 "library.m"
                      mercury__library__case_num_0 = (MR_Integer) 113;
#line 231 "library.m"
                    break;
#line 231 "library.m"
                }
#line 231 "library.m"
              break;
#line 231 "library.m"
          }
#line 231 "library.m"
          break;
#line 231 "library.m"
      }
#line 231 "library.m"
      if ((mercury__library__case_num_0 < (MR_Integer) 0))
#line 231 "library.m"
        mercury__library__succeeded = MR_FALSE;
#line 231 "library.m"
      else
#line 231 "library.m"
        {
#line 231 "library.m"
          /* we found a match; look up the results */
#line 231 "library.m"
          mercury__library__succeeded = MR_TRUE;
#line 231 "library.m"
        }
#line 231 "library.m"
    }
#line 231 "library.m"
    return mercury__library__succeeded;
#line 231 "library.m"
  }
#line 34 "library.m"
}

#line 22 "library.m"
void MR_CALL 
mercury__library__version_2_p_0(
#line 22 "library.m"
  MR_String * mercury__library__Version_1,
#line 22 "library.m"
  MR_String * mercury__library__Fullarch_2)
#line 22 "library.m"
{
#line 191 "library.m"
  {
#line 191 "library.m"
    MR_bool mercury__library__succeeded;

#line 194 "library.m"
{
#define MR_PROC_LABEL mercury__library__version_2_p_0

	MR_String Version;
	MR_String Fullarch;

		{
#line 194 "library.m"

    MR_ConstString version_string = MR_VERSION;
    MR_ConstString fullarch_string = MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
    Fullarch = (MR_String) (MR_Word) fullarch_string;

#line 2201 "library.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__library__Version_1  = Version;
	 *mercury__library__Fullarch_2  = Fullarch;
#line 194 "library.m"
}
#line 191 "library.m"
  }
#line 22 "library.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module library. */
