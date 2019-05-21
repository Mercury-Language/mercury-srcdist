/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
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
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




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
#include "hash_table.mh"
#include "int.mh"
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
#include "version_array.mh"
#include "version_hash_table.mh"

#line 369 "library.m"
void 
ML_std_library_init(void)
#line 369 "library.m"
{
#line 369 "library.m"
	mercury__library__std_library_init_2_p_0();
}

#line 386 "library.m"
void 
ML_std_library_finalize(void)
#line 386 "library.m"
{
#line 386 "library.m"
	mercury__library__std_library_finalize_2_p_0();
}


static MR_Integer MR_CALL 
mercury__library__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__library__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void)
{
  {
    MR_bool mercury__library__succeeded;

  }
}

static void MR_CALL 
mercury__library__std_library_init_2_p_0(void)
{
  {
    MR_bool mercury__library__succeeded;

    {
      mercury__builtin__init_runtime_hooks_0_p_0();
    }
    {
      mercury__io__init_state_2_p_0();
    }
  }
}

MR_bool MR_CALL 
mercury__library__mercury_std_library_module_1_p_0(
  MR_String mercury__library__HeadVar__1_1)
{
  {
    MR_bool mercury__library__succeeded;

    {
      MR_Integer mercury__library__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 114:
              if (((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 121))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) {
                  case (MR_Integer) 0:
                    mercury__library__case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 50:
                    if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "array2d"))
                      mercury__library__case_num_0 = (MR_Integer) 1;
                    break;
                }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "assoc_list"))
                mercury__library__case_num_0 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "backjump"))
                    mercury__library__case_num_0 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 103:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "bag"))
                    mercury__library__case_num_0 = (MR_Integer) 4;
                  break;
              }
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "benchmarking"))
                mercury__library__case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "bimap"))
                    mercury__library__case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                    case (MR_Integer) 95:
                      if (((((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 98)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 8)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 9)) == (MR_Integer) 114))))
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 10)) {
                          case (MR_Integer) 0:
                            mercury__library__case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 46:
                            switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 11)) {
                              case (MR_Integer) 114:
                                if (MR_offset_streq(12, mercury__library__HeadVar__1_1, (MR_String) "bit_buffer.read"))
                                  mercury__library__case_num_0 = (MR_Integer) 8;
                                break;
                              case (MR_Integer) 119:
                                if (MR_offset_streq(12, mercury__library__HeadVar__1_1, (MR_String) "bit_buffer.write"))
                                  mercury__library__case_num_0 = (MR_Integer) 9;
                                break;
                            }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "bitmap"))
                        mercury__library__case_num_0 = (MR_Integer) 10;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "bool"))
                mercury__library__case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "bt_array"))
                mercury__library__case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "builtin"))
                mercury__library__case_num_0 = (MR_Integer) 13;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "calendar"))
                mercury__library__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "char"))
                mercury__library__case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "construct"))
                    mercury__library__case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "cord"))
                    mercury__library__case_num_0 = (MR_Integer) 17;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "counter"))
                    mercury__library__case_num_0 = (MR_Integer) 18;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "deconstruct"))
                mercury__library__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "diet"))
                    mercury__library__case_num_0 = (MR_Integer) 20;
                  break;
                case (MR_Integer) 103:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "digraph"))
                    mercury__library__case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "dir"))
                    mercury__library__case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 110:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "enum"))
                mercury__library__case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "eqvclass"))
                mercury__library__case_num_0 = (MR_Integer) 24;
              break;
            case (MR_Integer) 114:
              if (((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 108)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) {
                  case (MR_Integer) 98:
                    if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "erlang_builtin"))
                      mercury__library__case_num_0 = (MR_Integer) 25;
                    break;
                  case (MR_Integer) 114:
                    if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "erlang_rtti_implementation"))
                      mercury__library__case_num_0 = (MR_Integer) 26;
                    break;
                }
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "exception"))
                mercury__library__case_num_0 = (MR_Integer) 27;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "fat_sparse_bitset"))
                mercury__library__case_num_0 = (MR_Integer) 28;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "float"))
                mercury__library__case_num_0 = (MR_Integer) 29;
              break;
          }
          break;
        case (MR_Integer) 103:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 99:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "gc"))
                mercury__library__case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 101:
              if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 116)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
                  case (MR_Integer) 0:
                    mercury__library__case_num_0 = (MR_Integer) 31;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "getopt_io"))
                      mercury__library__case_num_0 = (MR_Integer) 32;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, mercury__library__HeadVar__1_1, (MR_String) "hash_table"))
            mercury__library__case_num_0 = (MR_Integer) 33;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 106:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "injection"))
                    mercury__library__case_num_0 = (MR_Integer) 34;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      mercury__library__case_num_0 = (MR_Integer) 35;
                      break;
                    case (MR_Integer) 49:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "int16"))
                        mercury__library__case_num_0 = (MR_Integer) 36;
                      break;
                    case (MR_Integer) 51:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "int32"))
                        mercury__library__case_num_0 = (MR_Integer) 37;
                      break;
                    case (MR_Integer) 56:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "int8"))
                        mercury__library__case_num_0 = (MR_Integer) 38;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "integer"))
                        mercury__library__case_num_0 = (MR_Integer) 39;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "io"))
                mercury__library__case_num_0 = (MR_Integer) 40;
              break;
          }
          break;
        case (MR_Integer) 108:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "lazy"))
                mercury__library__case_num_0 = (MR_Integer) 41;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "lexer"))
                mercury__library__case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 98:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "library"))
                    mercury__library__case_num_0 = (MR_Integer) 43;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "list"))
                    mercury__library__case_num_0 = (MR_Integer) 44;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 112:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "map"))
                    mercury__library__case_num_0 = (MR_Integer) 45;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "math"))
                    mercury__library__case_num_0 = (MR_Integer) 46;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "maybe"))
                    mercury__library__case_num_0 = (MR_Integer) 47;
                  break;
              }
              break;
            case (MR_Integer) 117:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "multi_map"))
                    mercury__library__case_num_0 = (MR_Integer) 48;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "mutvar"))
                    mercury__library__case_num_0 = (MR_Integer) 49;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(1, mercury__library__HeadVar__1_1, (MR_String) "ops"))
            mercury__library__case_num_0 = (MR_Integer) 50;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "pair"))
                    mercury__library__case_num_0 = (MR_Integer) 51;
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                    case (MR_Integer) 95:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "par_builtin"))
                        mercury__library__case_num_0 = (MR_Integer) 52;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
                        case (MR_Integer) 101:
                          if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "parser"))
                            mercury__library__case_num_0 = (MR_Integer) 53;
                          break;
                        case (MR_Integer) 105:
                          if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "parsing_utils"))
                            mercury__library__case_num_0 = (MR_Integer) 54;
                          break;
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "pprint"))
                mercury__library__case_num_0 = (MR_Integer) 55;
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "pqueue"))
                mercury__library__case_num_0 = (MR_Integer) 56;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "pretty_printer"))
                    mercury__library__case_num_0 = (MR_Integer) 57;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "private_builtin"))
                    mercury__library__case_num_0 = (MR_Integer) 58;
                  break;
                case (MR_Integer) 111:
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                    case (MR_Integer) 102:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "profiling_builtin"))
                        mercury__library__case_num_0 = (MR_Integer) 59;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "prolog"))
                        mercury__library__case_num_0 = (MR_Integer) 60;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "psqueue"))
                mercury__library__case_num_0 = (MR_Integer) 61;
              break;
          }
          break;
        case (MR_Integer) 113:
          if (MR_offset_streq(1, mercury__library__HeadVar__1_1, (MR_String) "queue"))
            mercury__library__case_num_0 = (MR_Integer) 62;
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                    case (MR_Integer) 100:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "random"))
                        mercury__library__case_num_0 = (MR_Integer) 63;
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "ranges"))
                        mercury__library__case_num_0 = (MR_Integer) 64;
                      break;
                  }
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "rational"))
                    mercury__library__case_num_0 = (MR_Integer) 65;
                  break;
              }
              break;
            case (MR_Integer) 98:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "rbtree"))
                mercury__library__case_num_0 = (MR_Integer) 66;
              break;
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 103:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "region_builtin"))
                    mercury__library__case_num_0 = (MR_Integer) 67;
                  break;
                case (MR_Integer) 113:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "require"))
                    mercury__library__case_num_0 = (MR_Integer) 68;
                  break;
              }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "robdd"))
                mercury__library__case_num_0 = (MR_Integer) 69;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "rtree"))
                    mercury__library__case_num_0 = (MR_Integer) 70;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "rtti_implementation"))
                    mercury__library__case_num_0 = (MR_Integer) 71;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 116))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    mercury__library__case_num_0 = (MR_Integer) 72;
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
                      case (MR_Integer) 98:
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_bbbtree"))
                          mercury__library__case_num_0 = (MR_Integer) 73;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_ctree234"))
                          mercury__library__case_num_0 = (MR_Integer) 74;
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_ordlist"))
                          mercury__library__case_num_0 = (MR_Integer) 75;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_tree234"))
                          mercury__library__case_num_0 = (MR_Integer) 76;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "set_unordlist"))
                          mercury__library__case_num_0 = (MR_Integer) 77;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "solutions"))
                mercury__library__case_num_0 = (MR_Integer) 78;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "sparse_bitset"))
                mercury__library__case_num_0 = (MR_Integer) 79;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "stack"))
                    mercury__library__case_num_0 = (MR_Integer) 80;
                  break;
                case (MR_Integer) 100:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "std_util"))
                    mercury__library__case_num_0 = (MR_Integer) 81;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "stm_builtin"))
                    mercury__library__case_num_0 = (MR_Integer) 82;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "store"))
                    mercury__library__case_num_0 = (MR_Integer) 83;
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 97)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
                          case (MR_Integer) 0:
                            mercury__library__case_num_0 = (MR_Integer) 84;
                            break;
                          case (MR_Integer) 46:
                            if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "stream.string_writer"))
                              mercury__library__case_num_0 = (MR_Integer) 85;
                            break;
                        }
                      break;
                    case (MR_Integer) 105:
                      if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 110)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 103))))
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
                          case (MR_Integer) 0:
                            mercury__library__case_num_0 = (MR_Integer) 86;
                            break;
                          case (MR_Integer) 46:
                            switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) {
                              case (MR_Integer) 98:
                                if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "string.builder"))
                                  mercury__library__case_num_0 = (MR_Integer) 87;
                                break;
                              case (MR_Integer) 102:
                                if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "string.format"))
                                  mercury__library__case_num_0 = (MR_Integer) 88;
                                break;
                              case (MR_Integer) 112:
                                if (((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 8)) == (MR_Integer) 97)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 9)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 10)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 12)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 13)) {
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(14, mercury__library__HeadVar__1_1, (MR_String) "string.parse_runtime"))
                                        mercury__library__case_num_0 = (MR_Integer) 89;
                                      break;
                                    case (MR_Integer) 117:
                                      if (MR_offset_streq(14, mercury__library__HeadVar__1_1, (MR_String) "string.parse_util"))
                                        mercury__library__case_num_0 = (MR_Integer) 90;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "string.to_string"))
                                  mercury__library__case_num_0 = (MR_Integer) 91;
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
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 98)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
                  case (MR_Integer) 98:
                    if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "table_builtin"))
                      mercury__library__case_num_0 = (MR_Integer) 92;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(7, mercury__library__HeadVar__1_1, (MR_String) "table_statistics"))
                      mercury__library__case_num_0 = (MR_Integer) 93;
                    break;
                }
              break;
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) {
                case (MR_Integer) 114:
                  if (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 109))
                    switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
                      case (MR_Integer) 0:
                        mercury__library__case_num_0 = (MR_Integer) 94;
                        break;
                      case (MR_Integer) 95:
                        switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_conversion"))
                              mercury__library__case_num_0 = (MR_Integer) 95;
                            break;
                          case (MR_Integer) 105:
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_io"))
                              mercury__library__case_num_0 = (MR_Integer) 96;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_size_prof_builtin"))
                              mercury__library__case_num_0 = (MR_Integer) 97;
                            break;
                          case (MR_Integer) 116:
                            if (MR_offset_streq(6, mercury__library__HeadVar__1_1, (MR_String) "term_to_xml"))
                              mercury__library__case_num_0 = (MR_Integer) 98;
                            break;
                        }
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, mercury__library__HeadVar__1_1, (MR_String) "test_bitset"))
                    mercury__library__case_num_0 = (MR_Integer) 99;
                  break;
              }
              break;
            case (MR_Integer) 104:
              if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 100))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) {
                  case (MR_Integer) 0:
                    mercury__library__case_num_0 = (MR_Integer) 100;
                    break;
                  case (MR_Integer) 46:
                    switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) {
                      case (MR_Integer) 98:
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.barrier"))
                          mercury__library__case_num_0 = (MR_Integer) 101;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.channel"))
                          mercury__library__case_num_0 = (MR_Integer) 102;
                        break;
                      case (MR_Integer) 102:
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.future"))
                          mercury__library__case_num_0 = (MR_Integer) 103;
                        break;
                      case (MR_Integer) 109:
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.mvar"))
                          mercury__library__case_num_0 = (MR_Integer) 104;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(8, mercury__library__HeadVar__1_1, (MR_String) "thread.semaphore"))
                          mercury__library__case_num_0 = (MR_Integer) 105;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "time"))
                mercury__library__case_num_0 = (MR_Integer) 106;
              break;
            case (MR_Integer) 114:
              if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 101)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
                  case (MR_Integer) 50:
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "tree234"))
                      mercury__library__case_num_0 = (MR_Integer) 107;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "tree_bitset"))
                      mercury__library__case_num_0 = (MR_Integer) 108;
                    break;
                }
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "type_desc"))
                mercury__library__case_num_0 = (MR_Integer) 109;
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) {
                  case (MR_Integer) 0:
                    mercury__library__case_num_0 = (MR_Integer) 110;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "uint16"))
                      mercury__library__case_num_0 = (MR_Integer) 111;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "uint32"))
                      mercury__library__case_num_0 = (MR_Integer) 112;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(5, mercury__library__HeadVar__1_1, (MR_String) "uint8"))
                      mercury__library__case_num_0 = (MR_Integer) 113;
                    break;
                }
              break;
            case (MR_Integer) 110:
              if (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 105))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) {
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "unit"))
                      mercury__library__case_num_0 = (MR_Integer) 114;
                    break;
                  case (MR_Integer) 118:
                    if (MR_offset_streq(4, mercury__library__HeadVar__1_1, (MR_String) "univ"))
                      mercury__library__case_num_0 = (MR_Integer) 115;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 118:
          switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, mercury__library__HeadVar__1_1, (MR_String) "varset"))
                mercury__library__case_num_0 = (MR_Integer) 116;
              break;
            case (MR_Integer) 101:
              if (((((((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 3)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 5)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 7)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 8)) {
                  case (MR_Integer) 97:
                    if (((((((((MR_nth_code_unit(mercury__library__HeadVar__1_1, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 11)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__library__HeadVar__1_1, 12)) == (MR_Integer) 121))))
                      switch (MR_nth_code_unit(mercury__library__HeadVar__1_1, 13)) {
                        case (MR_Integer) 0:
                          mercury__library__case_num_0 = (MR_Integer) 117;
                          break;
                        case (MR_Integer) 50:
                          if (MR_offset_streq(14, mercury__library__HeadVar__1_1, (MR_String) "version_array2d"))
                            mercury__library__case_num_0 = (MR_Integer) 118;
                          break;
                      }
                    break;
                  case (MR_Integer) 98:
                    if (MR_offset_streq(9, mercury__library__HeadVar__1_1, (MR_String) "version_bitmap"))
                      mercury__library__case_num_0 = (MR_Integer) 119;
                    break;
                  case (MR_Integer) 104:
                    if (MR_offset_streq(9, mercury__library__HeadVar__1_1, (MR_String) "version_hash_table"))
                      mercury__library__case_num_0 = (MR_Integer) 120;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(9, mercury__library__HeadVar__1_1, (MR_String) "version_store"))
                      mercury__library__case_num_0 = (MR_Integer) 121;
                    break;
                }
              break;
          }
          break;
      }
      if ((mercury__library__case_num_0 < (MR_Integer) 0))
        mercury__library__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          mercury__library__succeeded = MR_TRUE;
        }
    }
    return mercury__library__succeeded;
  }
}

void MR_CALL 
mercury__library__version_2_p_0(
  MR_String * mercury__library__Version_1,
  MR_String * mercury__library__Fullarch_2)
{
  {
    MR_bool mercury__library__succeeded;

{
#define MR_PROC_LABEL mercury__library__version_2_p_0

	MR_String Version;
	MR_String Fullarch;

		{

    MR_ConstString version_string = MR_VERSION;
    MR_ConstString fullarch_string = MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
    Fullarch = (MR_String) (MR_Word) fullarch_string;


		;}
#undef MR_PROC_LABEL
	 *mercury__library__Version_1  = Version;
	 *mercury__library__Fullarch_2  = Fullarch;
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

/* :- end_module library. */
