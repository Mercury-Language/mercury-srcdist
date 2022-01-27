/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "profiling_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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

#line 32 "library.m"
MR_bool MR_CALL 
mercury__library__mercury_std_library_module_1_p_0(
#line 32 "library.m"
  MR_String mercury__library__HeadVar__1_1)
#line 32 "library.m"
{
#line 205 "library.m"
  {
#line 205 "library.m"
    MR_bool mercury__library__succeeded;

#line 205 "library.m"
    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "gc") == 0))
#line 234 "library.m"
      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
    else
#line 205 "library.m"
      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "io") == 0))
#line 241 "library.m"
        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
      else
#line 205 "library.m"
        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bag") == 0))
#line 209 "library.m"
          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
        else
#line 205 "library.m"
          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "dir") == 0))
#line 226 "library.m"
            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
          else
#line 205 "library.m"
            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "int") == 0))
#line 239 "library.m"
              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
            else
#line 205 "library.m"
              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "map") == 0))
#line 246 "library.m"
                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
              else
#line 205 "library.m"
                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "ops") == 0))
#line 251 "library.m"
                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                else
#line 205 "library.m"
                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "set") == 0))
#line 271 "library.m"
                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                  else
#line 205 "library.m"
                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bool") == 0))
#line 216 "library.m"
                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                    else
#line 205 "library.m"
                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "char") == 0))
#line 220 "library.m"
                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                      else
#line 205 "library.m"
                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "cord") == 0))
#line 222 "library.m"
                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                        else
#line 205 "library.m"
                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "enum") == 0))
#line 227 "library.m"
                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                          else
#line 205 "library.m"
                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "lazy") == 0))
#line 242 "library.m"
                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                            else
#line 205 "library.m"
                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "list") == 0))
#line 245 "library.m"
                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                              else
#line 205 "library.m"
                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "math") == 0))
#line 247 "library.m"
                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                else
#line 205 "library.m"
                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "pair") == 0))
#line 252 "library.m"
                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                  else
#line 205 "library.m"
                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "term") == 0))
#line 289 "library.m"
                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                    else
#line 205 "library.m"
                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "time") == 0))
#line 294 "library.m"
                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                      else
#line 205 "library.m"
                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "unit") == 0))
#line 302 "library.m"
                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                        else
#line 205 "library.m"
                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "univ") == 0))
#line 303 "library.m"
                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                          else
#line 205 "library.m"
                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "array") == 0))
#line 205 "library.m"
                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                            else
#line 205 "library.m"
                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bimap") == 0))
#line 211 "library.m"
                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                              else
#line 205 "library.m"
                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "float") == 0))
#line 233 "library.m"
                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                else
#line 205 "library.m"
                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "lexer") == 0))
#line 243 "library.m"
                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                  else
#line 205 "library.m"
                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "maybe") == 0))
#line 248 "library.m"
                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                    else
#line 205 "library.m"
                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "queue") == 0))
#line 262 "library.m"
                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                      else
#line 205 "library.m"
                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "robdd") == 0))
#line 268 "library.m"
                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                        else
#line 205 "library.m"
                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "rtree") == 0))
#line 269 "library.m"
                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                          else
#line 205 "library.m"
                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "stack") == 0))
#line 279 "library.m"
                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                            else
#line 205 "library.m"
                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "store") == 0))
#line 282 "library.m"
                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                              else
#line 205 "library.m"
                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 212 "library.m"
                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                else
#line 205 "library.m"
                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "getopt") == 0))
#line 235 "library.m"
                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                  else
#line 205 "library.m"
                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "mutvar") == 0))
#line 250 "library.m"
                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                    else
#line 205 "library.m"
                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "parser") == 0))
#line 254 "library.m"
                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                      else
#line 205 "library.m"
                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "pprint") == 0))
#line 256 "library.m"
                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                        else
#line 205 "library.m"
                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "pqueue") == 0))
#line 257 "library.m"
                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                          else
#line 205 "library.m"
                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "prolog") == 0))
#line 261 "library.m"
                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                            else
#line 205 "library.m"
                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "random") == 0))
#line 263 "library.m"
                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                              else
#line 205 "library.m"
                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "rbtree") == 0))
#line 265 "library.m"
                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                else
#line 205 "library.m"
                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "stream") == 0))
#line 283 "library.m"
                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                  else
#line 205 "library.m"
                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "string") == 0))
#line 285 "library.m"
                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                    else
#line 205 "library.m"
                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "thread") == 0))
#line 295 "library.m"
                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                      else
#line 205 "library.m"
                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "varset") == 0))
#line 304 "library.m"
                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                        else
#line 205 "library.m"
                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "array2d") == 0))
#line 206 "library.m"
                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                          else
#line 205 "library.m"
                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 218 "library.m"
                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                            else
#line 205 "library.m"
                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "counter") == 0))
#line 223 "library.m"
                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                              else
#line 205 "library.m"
                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "digraph") == 0))
#line 225 "library.m"
                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                else
#line 205 "library.m"
                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "integer") == 0))
#line 240 "library.m"
                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                  else
#line 205 "library.m"
                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "library") == 0))
#line 244 "library.m"
                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                    else
#line 205 "library.m"
                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "require") == 0))
#line 267 "library.m"
                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                      else
#line 205 "library.m"
                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "term_io") == 0))
#line 290 "library.m"
                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                        else
#line 205 "library.m"
                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "tree234") == 0))
#line 299 "library.m"
                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                          else
#line 205 "library.m"
                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "backjump") == 0))
#line 208 "library.m"
                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                            else
#line 205 "library.m"
                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bt_array") == 0))
#line 217 "library.m"
                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                              else
#line 205 "library.m"
                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "calendar") == 0))
#line 219 "library.m"
                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                else
#line 205 "library.m"
                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "eqvclass") == 0))
#line 228 "library.m"
                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                  else
#line 205 "library.m"
                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "rational") == 0))
#line 264 "library.m"
                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                    else
#line 205 "library.m"
                                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "std_util") == 0))
#line 280 "library.m"
                                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                      else
#line 205 "library.m"
                                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "construct") == 0))
#line 221 "library.m"
                                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                        else
#line 205 "library.m"
                                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "exception") == 0))
#line 231 "library.m"
                                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                          else
#line 205 "library.m"
                                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "getopt_io") == 0))
#line 236 "library.m"
                                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                            else
#line 205 "library.m"
                                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "injection") == 0))
#line 238 "library.m"
                                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                              else
#line 205 "library.m"
                                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "multi_map") == 0))
#line 249 "library.m"
                                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                else
#line 205 "library.m"
                                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "solutions") == 0))
#line 277 "library.m"
                                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                  else
#line 205 "library.m"
                                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "type_desc") == 0))
#line 301 "library.m"
                                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                    else
#line 205 "library.m"
                                                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "assoc_list") == 0))
#line 207 "library.m"
                                                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                      else
#line 205 "library.m"
                                                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bit_buffer") == 0))
#line 213 "library.m"
                                                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                        else
#line 205 "library.m"
                                                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "hash_table") == 0))
#line 237 "library.m"
                                                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                          else
#line 205 "library.m"
                                                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "deconstruct") == 0))
#line 224 "library.m"
                                                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                            else
#line 205 "library.m"
                                                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "par_builtin") == 0))
#line 253 "library.m"
                                                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                              else
#line 205 "library.m"
                                                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "set_bbbtree") == 0))
#line 272 "library.m"
                                                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                else
#line 205 "library.m"
                                                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "set_ordlist") == 0))
#line 274 "library.m"
                                                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                  else
#line 205 "library.m"
                                                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "set_tree234") == 0))
#line 275 "library.m"
                                                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                    else
#line 205 "library.m"
                                                                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "stm_builtin") == 0))
#line 281 "library.m"
                                                                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                      else
#line 205 "library.m"
                                                                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "term_to_xml") == 0))
#line 292 "library.m"
                                                                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                        else
#line 205 "library.m"
                                                                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "test_bitset") == 0))
#line 293 "library.m"
                                                                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                          else
#line 205 "library.m"
                                                                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "thread.mvar") == 0))
#line 297 "library.m"
                                                                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                            else
#line 205 "library.m"
                                                                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "tree_bitset") == 0))
#line 300 "library.m"
                                                                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                              else
#line 205 "library.m"
                                                                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "benchmarking") == 0))
#line 210 "library.m"
                                                                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                else
#line 205 "library.m"
                                                                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "set_ctree234") == 0))
#line 273 "library.m"
                                                                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                  else
#line 205 "library.m"
                                                                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "parsing_utils") == 0))
#line 255 "library.m"
                                                                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                    else
#line 205 "library.m"
                                                                                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "set_unordlist") == 0))
#line 276 "library.m"
                                                                                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                      else
#line 205 "library.m"
                                                                                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "sparse_bitset") == 0))
#line 278 "library.m"
                                                                                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                        else
#line 205 "library.m"
                                                                                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "table_builtin") == 0))
#line 287 "library.m"
                                                                                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                          else
#line 205 "library.m"
                                                                                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 305 "library.m"
                                                                                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                            else
#line 205 "library.m"
                                                                                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "version_store") == 0))
#line 309 "library.m"
                                                                                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                              else
#line 205 "library.m"
                                                                                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "erlang_builtin") == 0))
#line 229 "library.m"
                                                                                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                else
#line 205 "library.m"
                                                                                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "pretty_printer") == 0))
#line 258 "library.m"
                                                                                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                  else
#line 205 "library.m"
                                                                                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "region_builtin") == 0))
#line 266 "library.m"
                                                                                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                    else
#line 205 "library.m"
                                                                                                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "string.builder") == 0))
#line 286 "library.m"
                                                                                                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                      else
#line 205 "library.m"
                                                                                                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "thread.channel") == 0))
#line 296 "library.m"
                                                                                                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                        else
#line 205 "library.m"
                                                                                                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "version_bitmap") == 0))
#line 307 "library.m"
                                                                                                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                          else
#line 205 "library.m"
                                                                                                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bit_buffer.read") == 0))
#line 214 "library.m"
                                                                                                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                            else
#line 205 "library.m"
                                                                                                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 259 "library.m"
                                                                                                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                              else
#line 205 "library.m"
                                                                                                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "version_array2d") == 0))
#line 306 "library.m"
                                                                                                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                else
#line 205 "library.m"
                                                                                                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "bit_buffer.write") == 0))
#line 215 "library.m"
                                                                                                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                  else
#line 205 "library.m"
                                                                                                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "table_statistics") == 0))
#line 288 "library.m"
                                                                                                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                    else
#line 205 "library.m"
                                                                                                                                                                                                      if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "thread.semaphore") == 0))
#line 298 "library.m"
                                                                                                                                                                                                        mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                      else
#line 205 "library.m"
                                                                                                                                                                                                        if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "fat_sparse_bitset") == 0))
#line 232 "library.m"
                                                                                                                                                                                                          mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                        else
#line 205 "library.m"
                                                                                                                                                                                                          if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "profiling_builtin") == 0))
#line 260 "library.m"
                                                                                                                                                                                                            mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                          else
#line 205 "library.m"
                                                                                                                                                                                                            if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "version_hash_table") == 0))
#line 308 "library.m"
                                                                                                                                                                                                              mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                            else
#line 205 "library.m"
                                                                                                                                                                                                              if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "rtti_implementation") == 0))
#line 270 "library.m"
                                                                                                                                                                                                                mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                              else
#line 205 "library.m"
                                                                                                                                                                                                                if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "stream.string_writer") == 0))
#line 284 "library.m"
                                                                                                                                                                                                                  mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                                else
#line 205 "library.m"
                                                                                                                                                                                                                  if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "term_size_prof_builtin") == 0))
#line 291 "library.m"
                                                                                                                                                                                                                    mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                                  else
#line 205 "library.m"
                                                                                                                                                                                                                    if ((strcmp(mercury__library__HeadVar__1_1, (MR_String) "erlang_rtti_implementation") == 0))
#line 230 "library.m"
                                                                                                                                                                                                                      mercury__library__succeeded = MR_TRUE;
#line 205 "library.m"
                                                                                                                                                                                                                    else
#line 205 "library.m"
                                                                                                                                                                                                                      mercury__library__succeeded = MR_FALSE;
#line 205 "library.m"
    return mercury__library__succeeded;
#line 205 "library.m"
  }
#line 32 "library.m"
}

#line 20 "library.m"
void MR_CALL 
mercury__library__version_1_p_0(
#line 20 "library.m"
  MR_String * mercury__library__Version_1)
#line 20 "library.m"
{
#line 167 "library.m"
  {
#line 167 "library.m"
    MR_bool mercury__library__succeeded;

#line 170 "library.m"
{
#define MR_PROC_LABEL mercury__library__version_1_p_0

	MR_String Version;

		{
#line 170 "library.m"

    MR_ConstString version_string =
        MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;

#line 1288 "library.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__library__Version_1  = Version;
#line 170 "library.m"
}
#line 167 "library.m"
  }
#line 20 "library.m"
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
