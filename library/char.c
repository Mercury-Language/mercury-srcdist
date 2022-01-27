/*
** Automatically generated from `char.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module char. */
/* :- implementation. */

/*
INIT mercury__char__init
ENDINIT
*/

#include "char.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
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
#include "require.mih"
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




#line 93 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 96 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 98 "char.c"
  MR_Box mercury__char__wrapper_arg_2);

#line 101 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 104 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 106 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 108 "char.c"
  MR_Box mercury__char__wrapper_arg_3);

#line 111 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 114 "char.c"
  MR_Box mercury__char__closure_arg,
#line 116 "char.c"
  MR_Box mercury__char__wrapper_arg_1);

#line 119 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 122 "char.c"
  MR_Box mercury__char__closure_arg,
#line 124 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 126 "char.c"
  MR_Box * mercury__char__wrapper_arg_2);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__char_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__char_scalar_common_5[1][3];

static /* final */ const MR_Integer mercury__char_scalar_common_6[2][2];


#line 826 "char.m"
/* sealed */ struct mercury__char__vector_common_type_4_0_s {
#line 826 "char.m"
  const MR_Char mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 826 "char.m"
};

static /* final */ const struct mercury__char__vector_common_type_4_0_s mercury__char_vector_common_4[122];

#line 584 "char.m"
/* sealed */ struct mercury__char__vector_common_type_7_0_s {
#line 584 "char.m"
  const MR_Integer mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 584 "char.m"
};

static /* final */ const struct mercury__char__vector_common_type_7_0_s mercury__char_vector_common_7[116];



static /* final */ const MR_Box mercury__char_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__char_scalar_common_5[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 4294837247,
    (MR_Integer) 4294871039,
    (MR_Integer) 2047
  },
};

static /* final */ const MR_Integer mercury__char_scalar_common_6[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 8258559,
    (MR_Integer) 8257536
  },
  /* row 1 */
  {
    (MR_Integer) 4294837247,
    (MR_Integer) 2047
  },
};


static /* final */ const struct mercury__char__vector_common_type_4_0_s mercury__char_vector_common_4[122] = {
  /* row 0 */   {     (MR_Char) 65 },
  /* row 1 */   {     (MR_Char) 66 },
  /* row 2 */   {     (MR_Char) 67 },
  /* row 3 */   {     (MR_Char) 68 },
  /* row 4 */   {     (MR_Char) 69 },
  /* row 5 */   {     (MR_Char) 70 },
  /* row 6 */   {     (MR_Char) 71 },
  /* row 7 */   {     (MR_Char) 72 },
  /* row 8 */   {     (MR_Char) 73 },
  /* row 9 */   {     (MR_Char) 74 },
  /* row 10 */   {     (MR_Char) 75 },
  /* row 11 */   {     (MR_Char) 76 },
  /* row 12 */   {     (MR_Char) 77 },
  /* row 13 */   {     (MR_Char) 78 },
  /* row 14 */   {     (MR_Char) 79 },
  /* row 15 */   {     (MR_Char) 80 },
  /* row 16 */   {     (MR_Char) 81 },
  /* row 17 */   {     (MR_Char) 82 },
  /* row 18 */   {     (MR_Char) 83 },
  /* row 19 */   {     (MR_Char) 84 },
  /* row 20 */   {     (MR_Char) 85 },
  /* row 21 */   {     (MR_Char) 86 },
  /* row 22 */   {     (MR_Char) 87 },
  /* row 23 */   {     (MR_Char) 88 },
  /* row 24 */   {     (MR_Char) 89 },
  /* row 25 */   {     (MR_Char) 90 },
  /* row 26 */   {     (MR_Char) 97 },
  /* row 27 */   {     (MR_Char) 98 },
  /* row 28 */   {     (MR_Char) 99 },
  /* row 29 */   {     (MR_Char) 100 },
  /* row 30 */   {     (MR_Char) 101 },
  /* row 31 */   {     (MR_Char) 102 },
  /* row 32 */   {     (MR_Char) 103 },
  /* row 33 */   {     (MR_Char) 104 },
  /* row 34 */   {     (MR_Char) 105 },
  /* row 35 */   {     (MR_Char) 106 },
  /* row 36 */   {     (MR_Char) 107 },
  /* row 37 */   {     (MR_Char) 108 },
  /* row 38 */   {     (MR_Char) 109 },
  /* row 39 */   {     (MR_Char) 110 },
  /* row 40 */   {     (MR_Char) 111 },
  /* row 41 */   {     (MR_Char) 112 },
  /* row 42 */   {     (MR_Char) 113 },
  /* row 43 */   {     (MR_Char) 114 },
  /* row 44 */   {     (MR_Char) 115 },
  /* row 45 */   {     (MR_Char) 116 },
  /* row 46 */   {     (MR_Char) 117 },
  /* row 47 */   {     (MR_Char) 118 },
  /* row 48 */   {     (MR_Char) 119 },
  /* row 49 */   {     (MR_Char) 120 },
  /* row 50 */   {     (MR_Char) 121 },
  /* row 51 */   {     (MR_Char) 122 },
  /* row 52 */   {     (MR_Char) 48 },
  /* row 53 */   {     (MR_Char) 49 },
  /* row 54 */   {     (MR_Char) 50 },
  /* row 55 */   {     (MR_Char) 51 },
  /* row 56 */   {     (MR_Char) 52 },
  /* row 57 */   {     (MR_Char) 53 },
  /* row 58 */   {     (MR_Char) 54 },
  /* row 59 */   {     (MR_Char) 55 },
  /* row 60 */   {     (MR_Char) 48 },
  /* row 61 */   {     (MR_Char) 49 },
  /* row 62 */   {     (MR_Char) 50 },
  /* row 63 */   {     (MR_Char) 51 },
  /* row 64 */   {     (MR_Char) 52 },
  /* row 65 */   {     (MR_Char) 53 },
  /* row 66 */   {     (MR_Char) 54 },
  /* row 67 */   {     (MR_Char) 55 },
  /* row 68 */   {     (MR_Char) 56 },
  /* row 69 */   {     (MR_Char) 57 },
  /* row 70 */   {     (MR_Char) 48 },
  /* row 71 */   {     (MR_Char) 49 },
  /* row 72 */   {     (MR_Char) 50 },
  /* row 73 */   {     (MR_Char) 51 },
  /* row 74 */   {     (MR_Char) 52 },
  /* row 75 */   {     (MR_Char) 53 },
  /* row 76 */   {     (MR_Char) 54 },
  /* row 77 */   {     (MR_Char) 55 },
  /* row 78 */   {     (MR_Char) 56 },
  /* row 79 */   {     (MR_Char) 57 },
  /* row 80 */   {     (MR_Char) 65 },
  /* row 81 */   {     (MR_Char) 66 },
  /* row 82 */   {     (MR_Char) 67 },
  /* row 83 */   {     (MR_Char) 68 },
  /* row 84 */   {     (MR_Char) 69 },
  /* row 85 */   {     (MR_Char) 70 },
  /* row 86 */   {     (MR_Char) 48 },
  /* row 87 */   {     (MR_Char) 49 },
  /* row 88 */   {     (MR_Char) 50 },
  /* row 89 */   {     (MR_Char) 51 },
  /* row 90 */   {     (MR_Char) 52 },
  /* row 91 */   {     (MR_Char) 53 },
  /* row 92 */   {     (MR_Char) 54 },
  /* row 93 */   {     (MR_Char) 55 },
  /* row 94 */   {     (MR_Char) 56 },
  /* row 95 */   {     (MR_Char) 57 },
  /* row 96 */   {     (MR_Char) 65 },
  /* row 97 */   {     (MR_Char) 66 },
  /* row 98 */   {     (MR_Char) 67 },
  /* row 99 */   {     (MR_Char) 68 },
  /* row 100 */   {     (MR_Char) 69 },
  /* row 101 */   {     (MR_Char) 70 },
  /* row 102 */   {     (MR_Char) 71 },
  /* row 103 */   {     (MR_Char) 72 },
  /* row 104 */   {     (MR_Char) 73 },
  /* row 105 */   {     (MR_Char) 74 },
  /* row 106 */   {     (MR_Char) 75 },
  /* row 107 */   {     (MR_Char) 76 },
  /* row 108 */   {     (MR_Char) 77 },
  /* row 109 */   {     (MR_Char) 78 },
  /* row 110 */   {     (MR_Char) 79 },
  /* row 111 */   {     (MR_Char) 80 },
  /* row 112 */   {     (MR_Char) 81 },
  /* row 113 */   {     (MR_Char) 82 },
  /* row 114 */   {     (MR_Char) 83 },
  /* row 115 */   {     (MR_Char) 84 },
  /* row 116 */   {     (MR_Char) 85 },
  /* row 117 */   {     (MR_Char) 86 },
  /* row 118 */   {     (MR_Char) 87 },
  /* row 119 */   {     (MR_Char) 88 },
  /* row 120 */   {     (MR_Char) 89 },
  /* row 121 */   {     (MR_Char) 90 },
};

static /* final */ const struct mercury__char__vector_common_type_7_0_s mercury__char_vector_common_7[116] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 2 },
  /* row 11 */   {     (MR_Integer) 3 },
  /* row 12 */   {     (MR_Integer) 4 },
  /* row 13 */   {     (MR_Integer) 5 },
  /* row 14 */   {     (MR_Integer) 6 },
  /* row 15 */   {     (MR_Integer) 7 },
  /* row 16 */   {     (MR_Integer) 8 },
  /* row 17 */   {     (MR_Integer) 9 },
  /* row 18 */   {     (MR_Integer) 0 },
  /* row 19 */   {     (MR_Integer) 1 },
  /* row 20 */   {     (MR_Integer) 2 },
  /* row 21 */   {     (MR_Integer) 3 },
  /* row 22 */   {     (MR_Integer) 4 },
  /* row 23 */   {     (MR_Integer) 5 },
  /* row 24 */   {     (MR_Integer) 6 },
  /* row 25 */   {     (MR_Integer) 7 },
  /* row 26 */   {     (MR_Integer) 8 },
  /* row 27 */   {     (MR_Integer) 9 },
  /* row 28 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 29 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 30 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 31 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 32 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 33 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 34 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 35 */   {     (MR_Integer) 10 },
  /* row 36 */   {     (MR_Integer) 11 },
  /* row 37 */   {     (MR_Integer) 12 },
  /* row 38 */   {     (MR_Integer) 13 },
  /* row 39 */   {     (MR_Integer) 14 },
  /* row 40 */   {     (MR_Integer) 15 },
  /* row 41 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 42 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 43 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 44 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 45 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 46 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 47 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 48 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 49 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 50 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 51 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 52 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 53 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 54 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 55 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 56 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 57 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 58 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 59 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 60 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 61 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 62 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 63 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 64 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 65 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 66 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 67 */   {     (MR_Integer) 10 },
  /* row 68 */   {     (MR_Integer) 11 },
  /* row 69 */   {     (MR_Integer) 12 },
  /* row 70 */   {     (MR_Integer) 13 },
  /* row 71 */   {     (MR_Integer) 14 },
  /* row 72 */   {     (MR_Integer) 15 },
  /* row 73 */   {     (MR_Integer) 0 },
  /* row 74 */   {     (MR_Integer) 1 },
  /* row 75 */   {     (MR_Integer) 2 },
  /* row 76 */   {     (MR_Integer) 3 },
  /* row 77 */   {     (MR_Integer) 4 },
  /* row 78 */   {     (MR_Integer) 5 },
  /* row 79 */   {     (MR_Integer) 6 },
  /* row 80 */   {     (MR_Integer) 7 },
  /* row 81 */   {     (MR_Integer) 8 },
  /* row 82 */   {     (MR_Integer) 9 },
  /* row 83 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 84 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 85 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 86 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 87 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 88 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 89 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 90 */   {     (MR_Integer) 10 },
  /* row 91 */   {     (MR_Integer) 11 },
  /* row 92 */   {     (MR_Integer) 12 },
  /* row 93 */   {     (MR_Integer) 13 },
  /* row 94 */   {     (MR_Integer) 14 },
  /* row 95 */   {     (MR_Integer) 15 },
  /* row 96 */   {     (MR_Integer) 16 },
  /* row 97 */   {     (MR_Integer) 17 },
  /* row 98 */   {     (MR_Integer) 18 },
  /* row 99 */   {     (MR_Integer) 19 },
  /* row 100 */   {     (MR_Integer) 20 },
  /* row 101 */   {     (MR_Integer) 21 },
  /* row 102 */   {     (MR_Integer) 22 },
  /* row 103 */   {     (MR_Integer) 23 },
  /* row 104 */   {     (MR_Integer) 24 },
  /* row 105 */   {     (MR_Integer) 25 },
  /* row 106 */   {     (MR_Integer) 26 },
  /* row 107 */   {     (MR_Integer) 27 },
  /* row 108 */   {     (MR_Integer) 28 },
  /* row 109 */   {     (MR_Integer) 29 },
  /* row 110 */   {     (MR_Integer) 30 },
  /* row 111 */   {     (MR_Integer) 31 },
  /* row 112 */   {     (MR_Integer) 32 },
  /* row 113 */   {     (MR_Integer) 33 },
  /* row 114 */   {     (MR_Integer) 34 },
  /* row 115 */   {     (MR_Integer) 35 },
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
#include "version_array.mh"



#line 496 "char.c"
const MR_TypeCtorInfo_Struct mercury__char__char__type_ctor_info_char_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__char____Unify____char_0_0_10001)),
  ((MR_Box) (mercury__char____Compare____char_0_0_10001)),
  (MR_String) "char",
  (MR_String) "char",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 513 "char.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__character__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001))
};

#line 524 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 527 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 529 "char.c"
  MR_Box mercury__char__wrapper_arg_2)
#line 531 "char.c"
{
#line 533 "char.c"
  {
#line 535 "char.c"
    MR_bool mercury__char__succeeded;

#line 538 "char.c"
    {
#line 540 "char.c"
      mercury__char__succeeded = mercury__char____Unify____char_0_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2));
    }
#line 543 "char.c"
    return mercury__char__succeeded;
#line 545 "char.c"
  }
#line 547 "char.c"
}

#line 550 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 553 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 555 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 557 "char.c"
  MR_Box mercury__char__wrapper_arg_3)
#line 559 "char.c"
{
#line 561 "char.c"
  {
#line 563 "char.c"
    MR_Word mercury__char__conv0_HeadVar__1_1;

#line 566 "char.c"
    {
#line 568 "char.c"
      mercury__char____Compare____char_0_0(&mercury__char__conv0_HeadVar__1_1, ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_3));
    }
#line 571 "char.c"
    *mercury__char__wrapper_arg_1 = ((MR_Box) (mercury__char__conv0_HeadVar__1_1));
#line 573 "char.c"
  }
#line 575 "char.c"
}

#line 578 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 581 "char.c"
  MR_Box mercury__char__closure_arg,
#line 583 "char.c"
  MR_Box mercury__char__wrapper_arg_1)
#line 585 "char.c"
{
#line 587 "char.c"
  {
#line 589 "char.c"
    MR_Box mercury__char__wrapper_arg_2;
#line 591 "char.c"
    MR_Box mercury__char__closure;
#line 593 "char.c"
    MR_Integer mercury__char__conv0_Y_4;

#line 596 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 598 "char.c"
    {
#line 600 "char.c"
      mercury__char__conv0_Y_4 = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1));
    }
#line 603 "char.c"
    mercury__char__wrapper_arg_2 = ((MR_Box) (mercury__char__conv0_Y_4));
#line 605 "char.c"
    return mercury__char__wrapper_arg_2;
#line 607 "char.c"
  }
#line 609 "char.c"
}

#line 612 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 615 "char.c"
  MR_Box mercury__char__closure_arg,
#line 617 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 619 "char.c"
  MR_Box * mercury__char__wrapper_arg_2)
#line 621 "char.c"
{
#line 623 "char.c"
  {
#line 625 "char.c"
    MR_bool mercury__char__succeeded;
#line 627 "char.c"
    MR_Box mercury__char__closure;
#line 629 "char.c"
    MR_Char mercury__char__conv0_Y_4;

#line 632 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 634 "char.c"
    {
#line 636 "char.c"
      mercury__char__succeeded = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__char__wrapper_arg_1), &mercury__char__conv0_Y_4);
    }
#line 639 "char.c"
    if (mercury__char__succeeded)
#line 641 "char.c"
      {
#line 643 "char.c"
        *mercury__char__wrapper_arg_2 = ((MR_Box) (MR_Word) (mercury__char__conv0_Y_4));
#line 645 "char.c"
        mercury__char__succeeded = MR_TRUE;
#line 647 "char.c"
      }
#line 649 "char.c"
    return mercury__char__succeeded;
#line 651 "char.c"
  }
#line 653 "char.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__char__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 360 "char.m"
MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(
#line 360 "char.m"
  MR_Integer mercury__char__X_3,
#line 360 "char.m"
  MR_Char * mercury__char__Y_4)
#line 360 "char.m"
{
#line 887 "char.m"
  {
#line 887 "char.m"
    MR_bool mercury__char__succeeded;

#line 891 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__X_3 ;
		{
#line 891 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 702 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Y_4  = Character;
#line 891 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 887 "char.m"
    return mercury__char__succeeded;
#line 887 "char.m"
  }
#line 360 "char.m"
}

#line 359 "char.m"
MR_Integer MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(
#line 359 "char.m"
  MR_Char mercury__char__X_3)
#line 359 "char.m"
{
#line 868 "char.m"
  {
#line 868 "char.m"
    MR_bool mercury__char__succeeded;
#line 868 "char.m"
    MR_Integer mercury__char__Y_4;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__X_3 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 746 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Y_4  = Int;
#line 872 "char.m"
}
#line 868 "char.m"
    return mercury__char__Y_4;
#line 868 "char.m"
  }
#line 359 "char.m"
}

#line 36 "char.m"
void MR_CALL 
mercury__char____Compare____char_0_0(
#line 36 "char.m"
  MR_Word * mercury__char__HeadVar__1_1,
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__2_2,
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__3_3)
#line 36 "char.m"
{
#line 36 "char.m"
  {
#line 36 "char.m"
    MR_bool mercury__char__succeeded;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar1_4 = mercury__char__HeadVar__2_2;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar2_5 = mercury__char__HeadVar__3_3;
#line 36 "char.m"
    MR_Integer mercury__char__V_7_10;
#line 36 "char.m"
    MR_Integer mercury__char__V_8_11;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar1_4 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 797 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__V_7_10  = Int;
#line 872 "char.m"
}
#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar2_5 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 817 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__V_8_11  = Int;
#line 872 "char.m"
}
#line 39 "private_builtin.opt"
    mercury__char__succeeded = (mercury__char__V_7_10 < mercury__char__V_8_11);
#line 42 "private_builtin.opt"
    if (mercury__char__succeeded)
#line 41 "private_builtin.opt"
      *mercury__char__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "private_builtin.opt"
    else
#line 47 "private_builtin.opt"
      {
#line 44 "private_builtin.opt"
        mercury__char__succeeded = (mercury__char__V_7_10 == mercury__char__V_8_11);
#line 47 "private_builtin.opt"
        if (mercury__char__succeeded)
#line 46 "private_builtin.opt"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "private_builtin.opt"
        else
#line 48 "private_builtin.opt"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "private_builtin.opt"
      }
#line 36 "char.m"
  }
#line 36 "char.m"
}

#line 36 "char.m"
MR_bool MR_CALL 
mercury__char____Unify____char_0_0(
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 36 "char.m"
{
#line 36 "char.m"
  {
#line 36 "char.m"
    MR_bool mercury__char__succeeded;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar1_3 = mercury__char__HeadVar__1_1;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar2_4 = mercury__char__HeadVar__2_2;

#line 36 "char.m"
    mercury__char__succeeded = (mercury__char__Cast_HeadVar1_3 == mercury__char__Cast_HeadVar2_4);
#line 36 "char.m"
    return mercury__char__succeeded;
#line 36 "char.m"
  }
#line 36 "char.m"
}

#line 775 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_1(
#line 775 "char.m"
  MR_Integer * mercury__char__HeadVar__1_1,
#line 775 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 775 "char.m"
{
#line 777 "char.m"
  {
#line 777 "char.m"
    MR_bool mercury__char__succeeded;

#line 777 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__2_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 42)))
#line 777 "char.m"
      if ((((mercury__char_scalar_common_6[1])[(((mercury__char__HeadVar__2_2 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__2_2 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 777 "char.m"
        {
#line 777 "char.m"
          *mercury__char__HeadVar__1_1 = ((&mercury__char_vector_common_7[73 + (mercury__char__HeadVar__2_2 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 777 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 777 "char.m"
        }
#line 777 "char.m"
      else
#line 777 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 777 "char.m"
    else
#line 777 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 777 "char.m"
    return mercury__char__succeeded;
#line 777 "char.m"
  }
#line 775 "char.m"
}

#line 774 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_0(
#line 774 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 774 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 774 "char.m"
{
#line 777 "char.m"
  {
#line 777 "char.m"
    MR_bool mercury__char__succeeded;

#line 777 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 35)))
#line 777 "char.m"
      {
#line 777 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[86 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 777 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 777 "char.m"
      }
#line 777 "char.m"
    else
#line 777 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 777 "char.m"
    return mercury__char__succeeded;
#line 777 "char.m"
  }
#line 774 "char.m"
}

#line 347 "char.m"
void MR_CALL 
mercury__char__det_int_to_digit_2_p_0(
#line 347 "char.m"
  MR_Integer mercury__char__Int_3,
#line 347 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 347 "char.m"
{
#line 769 "char.m"
  {
#line 769 "char.m"
    MR_bool mercury__char__succeeded;
#line 769 "char.m"
    MR_Char mercury__char__DigitPrime_5;

#line 767 "char.m"
    {
#line 767 "char.m"
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    }
#line 769 "char.m"
    if (mercury__char__succeeded)
#line 768 "char.m"
      *mercury__char__Digit_4 = mercury__char__DigitPrime_5;
#line 769 "char.m"
    else
#line 770 "char.m"
      {
#line 770 "char.m"
        {
#line 770 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
#line 770 "char.m"
          return;
        }
#line 770 "char.m"
      }
#line 769 "char.m"
  }
#line 347 "char.m"
}

#line 345 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_digit_1_f_0(
#line 345 "char.m"
  MR_Integer mercury__char__N_3)
#line 345 "char.m"
{
#line 769 "char.m"
  {
#line 769 "char.m"
    MR_bool mercury__char__succeeded;
#line 769 "char.m"
    MR_Char mercury__char__C_4;
#line 769 "char.m"
    MR_Char mercury__char__DigitPrime_7;

#line 767 "char.m"
    {
#line 767 "char.m"
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__N_3, &mercury__char__DigitPrime_7);
    }
#line 769 "char.m"
    if (mercury__char__succeeded)
#line 768 "char.m"
      mercury__char__C_4 = mercury__char__DigitPrime_7;
#line 769 "char.m"
    else
#line 770 "char.m"
      {
#line 770 "char.m"
        {
#line 770 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
        }
#line 770 "char.m"
      }
#line 769 "char.m"
    return mercury__char__C_4;
#line 769 "char.m"
  }
#line 345 "char.m"
}

#line 335 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_1(
#line 335 "char.m"
  MR_Integer * mercury__char__Int_3,
#line 335 "char.m"
  MR_Char mercury__char__Digit_4)
#line 335 "char.m"
{
#line 815 "char.m"
  {
#line 815 "char.m"
    MR_bool mercury__char__succeeded;

#line 815 "char.m"
    {
#line 815 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_3, mercury__char__Digit_4);
    }
#line 815 "char.m"
    return mercury__char__succeeded;
#line 815 "char.m"
  }
#line 335 "char.m"
}

#line 334 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_0(
#line 334 "char.m"
  MR_Integer mercury__char__Int_3,
#line 334 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 334 "char.m"
{
#line 815 "char.m"
  {
#line 815 "char.m"
    MR_bool mercury__char__succeeded;

#line 815 "char.m"
    {
#line 815 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, mercury__char__Digit_4);
    }
#line 815 "char.m"
    return mercury__char__succeeded;
#line 815 "char.m"
  }
#line 334 "char.m"
}

#line 317 "char.m"
MR_bool MR_CALL 
mercury__char__digit_to_int_2_p_0(
#line 317 "char.m"
  MR_Char mercury__char__Digit_3,
#line 317 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 317 "char.m"
{
#line 820 "char.m"
  {
#line 820 "char.m"
    MR_bool mercury__char__succeeded;
#line 820 "char.m"
    MR_Char mercury__char__Upper_5;

#line 818 "char.m"
    {
#line 818 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_3, &mercury__char__Upper_5);
    }
#line 820 "char.m"
    if (mercury__char__succeeded)
#line 819 "char.m"
      {
#line 819 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Upper_5);
      }
#line 820 "char.m"
    else
#line 821 "char.m"
      {
#line 821 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Digit_3);
      }
#line 820 "char.m"
    return mercury__char__succeeded;
#line 820 "char.m"
  }
#line 317 "char.m"
}

#line 311 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_char_2_p_0(
#line 311 "char.m"
  MR_Integer mercury__char__Int_3,
#line 311 "char.m"
  MR_Char * mercury__char__Char_4)
#line 311 "char.m"
{
#line 744 "char.m"
  {
#line 744 "char.m"
    MR_bool mercury__char__succeeded;

#line 744 "char.m"
    {
#line 744 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__char__Int_3, mercury__char__Char_4);
    }
#line 744 "char.m"
    return mercury__char__succeeded;
#line 744 "char.m"
  }
#line 311 "char.m"
}

#line 303 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_2_p_0(
#line 303 "char.m"
  MR_Char mercury__char__Digit_3,
#line 303 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 303 "char.m"
{
#line 619 "char.m"
  {
#line 619 "char.m"
    MR_bool mercury__char__succeeded;

#line 619 "char.m"
    {
#line 619 "char.m"
      return mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, mercury__char__Int_4);
    }
#line 619 "char.m"
    return mercury__char__succeeded;
#line 619 "char.m"
  }
#line 303 "char.m"
}

#line 294 "char.m"
MR_bool MR_CALL 
mercury__char__is_noncharacter_1_p_0(
#line 294 "char.m"
  MR_Char mercury__char__Char_2)
#line 294 "char.m"
{
#line 1060 "char.m"
  {
#line 1060 "char.m"
    MR_bool mercury__char__succeeded;
#line 1060 "char.m"
    MR_Integer mercury__char__Int_3;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_noncharacter_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1213 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 872 "char.m"
}
#line 1062 "char.m"
    {
#line 1062 "char.m"
      MR_Integer mercury__char__V_7_7;

#line 1062 "char.m"
      mercury__char__succeeded = ((MR_Integer) 64976 <= mercury__char__Int_3);
#line 1062 "char.m"
      if (mercury__char__succeeded)
#line 1062 "char.m"
        {
#line 1062 "char.m"
          mercury__char__V_7_7 = (MR_Integer) 65007;
#line 1062 "char.m"
          mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_7_7);
#line 1062 "char.m"
        }
#line 1062 "char.m"
    }
#line 1063 "char.m"
    if (!(mercury__char__succeeded))
#line 1063 "char.m"
      {
#line 1063 "char.m"
        MR_Integer mercury__char__V_4_4 = (mercury__char__Int_3 & (MR_Integer) 65534);

#line 1063 "char.m"
        mercury__char__succeeded = (mercury__char__V_4_4 == (MR_Integer) 65534);
#line 1063 "char.m"
      }
#line 1060 "char.m"
    return mercury__char__succeeded;
#line 1060 "char.m"
  }
#line 294 "char.m"
}

#line 287 "char.m"
MR_bool MR_CALL 
mercury__char__is_trailing_surrogate_1_p_0(
#line 287 "char.m"
  MR_Char mercury__char__Char_2)
#line 287 "char.m"
{
#line 1055 "char.m"
  {
#line 1055 "char.m"
    MR_bool mercury__char__succeeded;
#line 1055 "char.m"
    MR_Integer mercury__char__Int_3;
#line 1055 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_trailing_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1286 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 872 "char.m"
}
#line 1057 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 56320);
#line 1055 "char.m"
    if (mercury__char__succeeded)
#line 1055 "char.m"
      {
#line 1058 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 57343;
#line 1058 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 1055 "char.m"
      }
#line 1055 "char.m"
    return mercury__char__succeeded;
#line 1055 "char.m"
  }
#line 287 "char.m"
}

#line 281 "char.m"
MR_bool MR_CALL 
mercury__char__is_leading_surrogate_1_p_0(
#line 281 "char.m"
  MR_Char mercury__char__Char_2)
#line 281 "char.m"
{
#line 1050 "char.m"
  {
#line 1050 "char.m"
    MR_bool mercury__char__succeeded;
#line 1050 "char.m"
    MR_Integer mercury__char__Int_3;
#line 1050 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_leading_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1341 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 872 "char.m"
}
#line 1052 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
#line 1050 "char.m"
    if (mercury__char__succeeded)
#line 1050 "char.m"
      {
#line 1053 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 56319;
#line 1053 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 1050 "char.m"
      }
#line 1050 "char.m"
    return mercury__char__succeeded;
#line 1050 "char.m"
  }
#line 281 "char.m"
}

#line 275 "char.m"
MR_bool MR_CALL 
mercury__char__is_surrogate_1_p_0(
#line 275 "char.m"
  MR_Char mercury__char__Char_2)
#line 275 "char.m"
{
#line 1045 "char.m"
  {
#line 1045 "char.m"
    MR_bool mercury__char__succeeded;
#line 1045 "char.m"
    MR_Integer mercury__char__Int_3;
#line 1045 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1396 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 872 "char.m"
}
#line 1047 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
#line 1045 "char.m"
    if (mercury__char__succeeded)
#line 1045 "char.m"
      {
#line 1048 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 57343;
#line 1048 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 1045 "char.m"
      }
#line 1045 "char.m"
    return mercury__char__succeeded;
#line 1045 "char.m"
  }
#line 275 "char.m"
}

#line 269 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf16_2_p_0(
#line 269 "char.m"
  MR_Char mercury__char__Char_3,
#line 269 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 269 "char.m"
{
#line 1025 "char.m"
  {
#line 1025 "char.m"
    MR_bool mercury__char__succeeded;
#line 1025 "char.m"
    MR_Integer mercury__char__Int_5;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1451 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 872 "char.m"
}
#line 1027 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 < (MR_Integer) 55296);
#line 1030 "char.m"
    if (mercury__char__succeeded)
#line 1029 "char.m"
      {
#line 1029 "char.m"
        MR_Word mercury__char__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1029 "char.m"
        {
#line 1029 "char.m"
          MR_Word base;
#line 1029 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 1029 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 1029 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_10_10));
#line 1029 "char.m"
        }
#line 1029 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 1029 "char.m"
      }
#line 1030 "char.m"
    else
#line 1033 "char.m"
      {
#line 1030 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 57343);
#line 1033 "char.m"
        if (mercury__char__succeeded)
#line 1032 "char.m"
          mercury__char__succeeded = MR_FALSE;
#line 1033 "char.m"
        else
#line 1035 "char.m"
          {
#line 1033 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 1035 "char.m"
            if (mercury__char__succeeded)
#line 1034 "char.m"
              {
#line 1034 "char.m"
                MR_Word mercury__char__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1034 "char.m"
                {
#line 1034 "char.m"
                  MR_Word base;
#line 1034 "char.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "char.m"
                  *mercury__char__CodeUnits_4 = base;
#line 1034 "char.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 1034 "char.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_13_13));
#line 1034 "char.m"
                }
#line 1034 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 1034 "char.m"
              }
#line 1035 "char.m"
            else
#line 1040 "char.m"
              {
#line 1040 "char.m"
                MR_Integer mercury__char__U_6;
#line 1040 "char.m"
                MR_Integer mercury__char__A_7;
#line 1040 "char.m"
                MR_Integer mercury__char__B_8;
#line 1040 "char.m"
                MR_Integer mercury__char__V_15_15;
#line 1040 "char.m"
                MR_Integer mercury__char__V_16_16;
#line 1040 "char.m"
                MR_Integer mercury__char__V_17_17;
#line 1040 "char.m"
                MR_Integer mercury__char__V_18_18;
#line 1040 "char.m"
                MR_Integer mercury__char__V_19_19;
#line 1040 "char.m"
                MR_Integer mercury__char__V_20_20;
#line 1040 "char.m"
                MR_Integer mercury__char__V_21_21;
#line 1040 "char.m"
                MR_Word mercury__char__V_22_22;
#line 1040 "char.m"
                MR_Word mercury__char__V_23_23;

#line 1035 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 1040 "char.m"
                if (mercury__char__succeeded)
#line 1040 "char.m"
                  {
#line 1036 "char.m"
                    mercury__char__V_15_15 = (MR_Integer) 65536;
#line 1036 "char.m"
                    mercury__char__U_6 = (mercury__char__Int_5 - mercury__char__V_15_15);
#line 1037 "char.m"
                    mercury__char__V_16_16 = (MR_Integer) 55296;
#line 1037 "char.m"
                    mercury__char__V_18_18 = (MR_Integer) 10;
#line 1037 "char.m"
                    {
#line 1037 "char.m"
                      mercury__char__V_17_17 = mercury__int__f_62_62_2_f_0(mercury__char__U_6, mercury__char__V_18_18);
                    }
#line 1037 "char.m"
                    mercury__char__A_7 = (mercury__char__V_16_16 | mercury__char__V_17_17);
#line 1038 "char.m"
                    mercury__char__V_19_19 = (MR_Integer) 56320;
#line 1038 "char.m"
                    mercury__char__V_21_21 = (MR_Integer) 1023;
#line 1038 "char.m"
                    mercury__char__V_20_20 = (mercury__char__U_6 & mercury__char__V_21_21);
#line 1038 "char.m"
                    mercury__char__B_8 = (mercury__char__V_19_19 | mercury__char__V_20_20);
#line 1039 "char.m"
                    mercury__char__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1039 "char.m"
                    {
#line 1039 "char.m"
                      mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 0) = ((MR_Box) (mercury__char__B_8));
#line 1039 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 1) = ((MR_Box) (mercury__char__V_23_23));
#line 1039 "char.m"
                    }
#line 1039 "char.m"
                    {
#line 1039 "char.m"
                      MR_Word base;
#line 1039 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 1039 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_7));
#line 1039 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 1039 "char.m"
                    }
#line 1039 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 1040 "char.m"
                  }
#line 1040 "char.m"
              }
#line 1035 "char.m"
          }
#line 1033 "char.m"
      }
#line 1025 "char.m"
    return mercury__char__succeeded;
#line 1025 "char.m"
  }
#line 269 "char.m"
}

#line 264 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf8_2_p_0(
#line 264 "char.m"
  MR_Char mercury__char__Char_3,
#line 264 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 264 "char.m"
{
#line 1000 "char.m"
  {
#line 1000 "char.m"
    MR_bool mercury__char__succeeded;
#line 1000 "char.m"
    MR_Integer mercury__char__Int_5;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1656 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 872 "char.m"
}
#line 1002 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 127);
#line 1004 "char.m"
    if (mercury__char__succeeded)
#line 1003 "char.m"
      {
#line 1003 "char.m"
        MR_Word mercury__char__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1003 "char.m"
        {
#line 1003 "char.m"
          MR_Word base;
#line 1003 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 1003 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 1003 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_11_11));
#line 1003 "char.m"
        }
#line 1003 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 1003 "char.m"
      }
#line 1004 "char.m"
    else
#line 1008 "char.m"
      {
#line 1004 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 2047);
#line 1008 "char.m"
        if (mercury__char__succeeded)
#line 1005 "char.m"
          {
#line 1005 "char.m"
            MR_Integer mercury__char__A_6;
#line 1005 "char.m"
            MR_Integer mercury__char__B_7;
#line 1005 "char.m"
            MR_Integer mercury__char__V_14_14;
#line 1005 "char.m"
            MR_Integer mercury__char__V_15_15;
#line 1005 "char.m"
            MR_Integer mercury__char__V_19_19;
#line 1005 "char.m"
            MR_Word mercury__char__V_21_21;
#line 1005 "char.m"
            MR_Word mercury__char__V_22_22;

#line 1005 "char.m"
            {
#line 1005 "char.m"
              mercury__char__V_15_15 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, (MR_Integer) 6);
            }
#line 1005 "char.m"
            mercury__char__V_14_14 = (mercury__char__V_15_15 & (MR_Integer) 31);
#line 1005 "char.m"
            mercury__char__A_6 = ((MR_Integer) 192 | mercury__char__V_14_14);
#line 1006 "char.m"
            mercury__char__V_19_19 = (mercury__char__Int_5 & (MR_Integer) 63);
#line 1006 "char.m"
            mercury__char__B_7 = ((MR_Integer) 128 | mercury__char__V_19_19);
#line 1007 "char.m"
            mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "char.m"
            {
#line 1007 "char.m"
              mercury__char__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 0) = ((MR_Box) (mercury__char__B_7));
#line 1007 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 1007 "char.m"
            }
#line 1007 "char.m"
            {
#line 1007 "char.m"
              MR_Word base;
#line 1007 "char.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "char.m"
              *mercury__char__CodeUnits_4 = base;
#line 1007 "char.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_6));
#line 1007 "char.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_21_21));
#line 1007 "char.m"
            }
#line 1005 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 1005 "char.m"
          }
#line 1008 "char.m"
        else
#line 1014 "char.m"
          {
#line 1008 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 1014 "char.m"
            if (mercury__char__succeeded)
#line 1009 "char.m"
              {
#line 1009 "char.m"
                MR_Integer mercury__char__C_8;
#line 1009 "char.m"
                MR_Integer mercury__char__V_24_24;
#line 1009 "char.m"
                MR_Integer mercury__char__V_25_25;
#line 1009 "char.m"
                MR_Integer mercury__char__V_26_26;
#line 1009 "char.m"
                MR_Integer mercury__char__V_27_27;
#line 1009 "char.m"
                MR_Integer mercury__char__V_28_28;
#line 1009 "char.m"
                MR_Integer mercury__char__V_29_29;
#line 1009 "char.m"
                MR_Integer mercury__char__V_30_30;
#line 1009 "char.m"
                MR_Integer mercury__char__V_31_31;
#line 1009 "char.m"
                MR_Integer mercury__char__V_32_32;
#line 1009 "char.m"
                MR_Integer mercury__char__V_33_33;
#line 1009 "char.m"
                MR_Integer mercury__char__V_34_34;
#line 1009 "char.m"
                MR_Integer mercury__char__V_35_35;
#line 1009 "char.m"
                MR_Integer mercury__char__V_36_36;
#line 1009 "char.m"
                MR_Word mercury__char__V_37_37;
#line 1009 "char.m"
                MR_Word mercury__char__V_38_38;
#line 1009 "char.m"
                MR_Word mercury__char__V_39_39;
#line 1009 "char.m"
                MR_Integer mercury__char__A_63;
#line 1009 "char.m"
                MR_Integer mercury__char__B_64;
#line 1045 "char.m"
                MR_Integer mercury__char__Int_76;
#line 1045 "char.m"
                MR_Integer mercury__char__V_78_78;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1824 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_76  = Int;
#line 872 "char.m"
}
#line 1047 "char.m"
                mercury__char__succeeded = (mercury__char__Int_76 >= (MR_Integer) 55296);
#line 1045 "char.m"
                if (mercury__char__succeeded)
#line 1045 "char.m"
                  {
#line 1048 "char.m"
                    mercury__char__V_78_78 = (MR_Integer) 57343;
#line 1048 "char.m"
                    mercury__char__succeeded = (mercury__char__Int_76 <= mercury__char__V_78_78);
#line 1045 "char.m"
                  }
#line 1009 "char.m"
                mercury__char__succeeded = !(mercury__char__succeeded);
#line 1009 "char.m"
                if (mercury__char__succeeded)
#line 1009 "char.m"
                  {
#line 1010 "char.m"
                    mercury__char__V_24_24 = (MR_Integer) 224;
#line 1010 "char.m"
                    mercury__char__V_27_27 = (MR_Integer) 12;
#line 1010 "char.m"
                    {
#line 1010 "char.m"
                      mercury__char__V_26_26 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_27_27);
                    }
#line 1010 "char.m"
                    mercury__char__V_28_28 = (MR_Integer) 15;
#line 1010 "char.m"
                    mercury__char__V_25_25 = (mercury__char__V_26_26 & mercury__char__V_28_28);
#line 1010 "char.m"
                    mercury__char__A_63 = (mercury__char__V_24_24 | mercury__char__V_25_25);
#line 1011 "char.m"
                    mercury__char__V_29_29 = (MR_Integer) 128;
#line 1011 "char.m"
                    mercury__char__V_32_32 = (MR_Integer) 6;
#line 1011 "char.m"
                    {
#line 1011 "char.m"
                      mercury__char__V_31_31 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_32_32);
                    }
#line 1011 "char.m"
                    mercury__char__V_33_33 = (MR_Integer) 63;
#line 1011 "char.m"
                    mercury__char__V_30_30 = (mercury__char__V_31_31 & mercury__char__V_33_33);
#line 1011 "char.m"
                    mercury__char__B_64 = (mercury__char__V_29_29 | mercury__char__V_30_30);
#line 1012 "char.m"
                    mercury__char__V_34_34 = (MR_Integer) 128;
#line 1012 "char.m"
                    mercury__char__V_36_36 = (MR_Integer) 63;
#line 1012 "char.m"
                    mercury__char__V_35_35 = (mercury__char__Int_5 & mercury__char__V_36_36);
#line 1012 "char.m"
                    mercury__char__C_8 = (mercury__char__V_34_34 | mercury__char__V_35_35);
#line 1013 "char.m"
                    mercury__char__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "char.m"
                    {
#line 1013 "char.m"
                      mercury__char__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 0) = ((MR_Box) (mercury__char__C_8));
#line 1013 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 1) = ((MR_Box) (mercury__char__V_39_39));
#line 1013 "char.m"
                    }
#line 1013 "char.m"
                    {
#line 1013 "char.m"
                      mercury__char__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 0) = ((MR_Box) (mercury__char__B_64));
#line 1013 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 1) = ((MR_Box) (mercury__char__V_38_38));
#line 1013 "char.m"
                    }
#line 1013 "char.m"
                    {
#line 1013 "char.m"
                      MR_Word base;
#line 1013 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 1013 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_63));
#line 1013 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_37_37));
#line 1013 "char.m"
                    }
#line 1013 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 1009 "char.m"
                  }
#line 1009 "char.m"
              }
#line 1014 "char.m"
            else
#line 1020 "char.m"
              {
#line 1020 "char.m"
                MR_Integer mercury__char__D_9;
#line 1020 "char.m"
                MR_Integer mercury__char__V_41_41;
#line 1020 "char.m"
                MR_Integer mercury__char__V_42_42;
#line 1020 "char.m"
                MR_Integer mercury__char__V_43_43;
#line 1020 "char.m"
                MR_Integer mercury__char__V_44_44;
#line 1020 "char.m"
                MR_Integer mercury__char__V_45_45;
#line 1020 "char.m"
                MR_Integer mercury__char__V_46_46;
#line 1020 "char.m"
                MR_Integer mercury__char__V_47_47;
#line 1020 "char.m"
                MR_Integer mercury__char__V_48_48;
#line 1020 "char.m"
                MR_Integer mercury__char__V_49_49;
#line 1020 "char.m"
                MR_Integer mercury__char__V_50_50;
#line 1020 "char.m"
                MR_Integer mercury__char__V_51_51;
#line 1020 "char.m"
                MR_Integer mercury__char__V_52_52;
#line 1020 "char.m"
                MR_Integer mercury__char__V_53_53;
#line 1020 "char.m"
                MR_Integer mercury__char__V_54_54;
#line 1020 "char.m"
                MR_Integer mercury__char__V_55_55;
#line 1020 "char.m"
                MR_Integer mercury__char__V_56_56;
#line 1020 "char.m"
                MR_Integer mercury__char__V_57_57;
#line 1020 "char.m"
                MR_Integer mercury__char__V_58_58;
#line 1020 "char.m"
                MR_Word mercury__char__V_59_59;
#line 1020 "char.m"
                MR_Word mercury__char__V_60_60;
#line 1020 "char.m"
                MR_Word mercury__char__V_61_61;
#line 1020 "char.m"
                MR_Word mercury__char__V_62_62;
#line 1020 "char.m"
                MR_Integer mercury__char__A_65;
#line 1020 "char.m"
                MR_Integer mercury__char__B_66;
#line 1020 "char.m"
                MR_Integer mercury__char__C_67;

#line 1014 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 1020 "char.m"
                if (mercury__char__succeeded)
#line 1020 "char.m"
                  {
#line 1015 "char.m"
                    mercury__char__V_41_41 = (MR_Integer) 240;
#line 1015 "char.m"
                    mercury__char__V_44_44 = (MR_Integer) 18;
#line 1015 "char.m"
                    {
#line 1015 "char.m"
                      mercury__char__V_43_43 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_44_44);
                    }
#line 1015 "char.m"
                    mercury__char__V_45_45 = (MR_Integer) 7;
#line 1015 "char.m"
                    mercury__char__V_42_42 = (mercury__char__V_43_43 & mercury__char__V_45_45);
#line 1015 "char.m"
                    mercury__char__A_65 = (mercury__char__V_41_41 | mercury__char__V_42_42);
#line 1016 "char.m"
                    mercury__char__V_46_46 = (MR_Integer) 128;
#line 1016 "char.m"
                    mercury__char__V_49_49 = (MR_Integer) 12;
#line 1016 "char.m"
                    {
#line 1016 "char.m"
                      mercury__char__V_48_48 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_49_49);
                    }
#line 1016 "char.m"
                    mercury__char__V_50_50 = (MR_Integer) 63;
#line 1016 "char.m"
                    mercury__char__V_47_47 = (mercury__char__V_48_48 & mercury__char__V_50_50);
#line 1016 "char.m"
                    mercury__char__B_66 = (mercury__char__V_46_46 | mercury__char__V_47_47);
#line 1017 "char.m"
                    mercury__char__V_51_51 = (MR_Integer) 128;
#line 1017 "char.m"
                    mercury__char__V_54_54 = (MR_Integer) 6;
#line 1017 "char.m"
                    {
#line 1017 "char.m"
                      mercury__char__V_53_53 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_54_54);
                    }
#line 1017 "char.m"
                    mercury__char__V_55_55 = (MR_Integer) 63;
#line 1017 "char.m"
                    mercury__char__V_52_52 = (mercury__char__V_53_53 & mercury__char__V_55_55);
#line 1017 "char.m"
                    mercury__char__C_67 = (mercury__char__V_51_51 | mercury__char__V_52_52);
#line 1018 "char.m"
                    mercury__char__V_56_56 = (MR_Integer) 128;
#line 1018 "char.m"
                    mercury__char__V_58_58 = (MR_Integer) 63;
#line 1018 "char.m"
                    mercury__char__V_57_57 = (mercury__char__Int_5 & mercury__char__V_58_58);
#line 1018 "char.m"
                    mercury__char__D_9 = (mercury__char__V_56_56 | mercury__char__V_57_57);
#line 1019 "char.m"
                    mercury__char__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1019 "char.m"
                    {
#line 1019 "char.m"
                      mercury__char__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 0) = ((MR_Box) (mercury__char__D_9));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 1) = ((MR_Box) (mercury__char__V_62_62));
#line 1019 "char.m"
                    }
#line 1019 "char.m"
                    {
#line 1019 "char.m"
                      mercury__char__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 0) = ((MR_Box) (mercury__char__C_67));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 1) = ((MR_Box) (mercury__char__V_61_61));
#line 1019 "char.m"
                    }
#line 1019 "char.m"
                    {
#line 1019 "char.m"
                      mercury__char__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 0) = ((MR_Box) (mercury__char__B_66));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 1) = ((MR_Box) (mercury__char__V_60_60));
#line 1019 "char.m"
                    }
#line 1019 "char.m"
                    {
#line 1019 "char.m"
                      MR_Word base;
#line 1019 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_65));
#line 1019 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_59_59));
#line 1019 "char.m"
                    }
#line 1019 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 1020 "char.m"
                  }
#line 1020 "char.m"
              }
#line 1014 "char.m"
          }
#line 1008 "char.m"
      }
#line 1000 "char.m"
    return mercury__char__succeeded;
#line 1000 "char.m"
  }
#line 264 "char.m"
}

#line 259 "char.m"
MR_Word MR_CALL 
mercury__char__char_to_doc_1_f_0(
#line 259 "char.m"
  MR_Char mercury__char__C_3)
#line 259 "char.m"
{
#line 1066 "char.m"
  {
#line 1066 "char.m"
    MR_bool mercury__char__succeeded;
#line 1066 "char.m"
    MR_Word mercury__char__HeadVar__2_2;
#line 1066 "char.m"
    MR_String mercury__char__V_4_4;

#line 1066 "char.m"
    {
#line 1066 "char.m"
      mercury__char__V_4_4 = mercury__term_io__quoted_char_1_f_0(mercury__char__C_3);
    }
#line 1066 "char.m"
    {
#line 1066 "char.m"
      mercury__char__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "char.m"
      MR_hl_field(MR_mktag(1), mercury__char__HeadVar__2_2, 0) = ((MR_Box) (mercury__char__V_4_4));
#line 1066 "char.m"
    }
#line 1066 "char.m"
    return mercury__char__HeadVar__2_2;
#line 1066 "char.m"
  }
#line 259 "char.m"
}

#line 255 "char.m"
MR_Integer MR_CALL 
mercury__char__det_base_digit_to_int_2_f_0(
#line 255 "char.m"
  MR_Integer mercury__char__Base_4,
#line 255 "char.m"
  MR_Char mercury__char__Digit_5)
#line 255 "char.m"
{
#line 666 "char.m"
  {
#line 666 "char.m"
    MR_bool mercury__char__succeeded;
#line 666 "char.m"
    MR_Integer mercury__char__Int_6;
#line 666 "char.m"
    MR_Integer mercury__char__IntPrime_7;

#line 664 "char.m"
    {
#line 664 "char.m"
      mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_4, mercury__char__Digit_5, &mercury__char__IntPrime_7);
    }
#line 666 "char.m"
    if (mercury__char__succeeded)
#line 665 "char.m"
      mercury__char__Int_6 = mercury__char__IntPrime_7;
#line 666 "char.m"
    else
#line 667 "char.m"
      {
#line 667 "char.m"
        {
#line 667 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int failed");
        }
#line 667 "char.m"
      }
#line 666 "char.m"
    return mercury__char__Int_6;
#line 666 "char.m"
  }
#line 255 "char.m"
}

#line 251 "char.m"
MR_bool MR_CALL 
mercury__char__base_digit_to_int_3_p_0(
#line 251 "char.m"
  MR_Integer mercury__char__Base_4,
#line 251 "char.m"
  MR_Char mercury__char__Digit_5,
#line 251 "char.m"
  MR_Integer * mercury__char__Int_6)
#line 251 "char.m"
{
#line 659 "char.m"
  {
#line 659 "char.m"
    MR_bool mercury__char__succeeded = ((MR_Integer) 1 < mercury__char__Base_4);
#line 652 "char.m"
    MR_Integer mercury__char__V_9_9;

#line 652 "char.m"
    if (mercury__char__succeeded)
#line 652 "char.m"
      {
#line 652 "char.m"
        mercury__char__V_9_9 = (MR_Integer) 37;
#line 652 "char.m"
        mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__V_9_9);
#line 652 "char.m"
      }
#line 659 "char.m"
    if (mercury__char__succeeded)
#line 657 "char.m"
      {
#line 655 "char.m"
        MR_Char mercury__char__Upper_7;

#line 653 "char.m"
        {
#line 653 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_5, &mercury__char__Upper_7);
        }
#line 655 "char.m"
        if (mercury__char__succeeded)
#line 654 "char.m"
          {
#line 654 "char.m"
            mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Upper_7);
          }
#line 655 "char.m"
        else
#line 656 "char.m"
          {
#line 656 "char.m"
            mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Digit_5);
          }
#line 657 "char.m"
        if (mercury__char__succeeded)
#line 658 "char.m"
          mercury__char__succeeded = (*mercury__char__Int_6 < mercury__char__Base_4);
#line 657 "char.m"
      }
#line 659 "char.m"
    else
#line 660 "char.m"
      {
#line 660 "char.m"
        {
#line 660 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int: invalid base");
        }
#line 660 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 660 "char.m"
      }
#line 659 "char.m"
    return mercury__char__succeeded;
#line 659 "char.m"
  }
#line 251 "char.m"
}

#line 244 "char.m"
MR_Integer MR_CALL 
mercury__char__det_hex_digit_to_int_1_f_0(
#line 244 "char.m"
  MR_Char mercury__char__Digit_3)
#line 244 "char.m"
{
#line 647 "char.m"
  {
#line 647 "char.m"
    MR_bool mercury__char__succeeded;
#line 647 "char.m"
    MR_Integer mercury__char__Int_4;
#line 647 "char.m"
    MR_Integer mercury__char__IntPrime_5;

#line 645 "char.m"
    {
#line 645 "char.m"
      mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__IntPrime_5);
    }
#line 647 "char.m"
    if (mercury__char__succeeded)
#line 646 "char.m"
      mercury__char__Int_4 = mercury__char__IntPrime_5;
#line 647 "char.m"
    else
#line 648 "char.m"
      {
#line 648 "char.m"
        {
#line 648 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.hex_digit_to_int failed");
        }
#line 648 "char.m"
      }
#line 647 "char.m"
    return mercury__char__Int_4;
#line 647 "char.m"
  }
#line 244 "char.m"
}

#line 240 "char.m"
MR_bool MR_CALL 
mercury__char__hex_digit_to_int_2_p_0(
#line 240 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 240 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 240 "char.m"
{
#line 621 "char.m"
  {
#line 621 "char.m"
    MR_bool mercury__char__succeeded;

#line 621 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 54)))
#line 621 "char.m"
      if ((((mercury__char_scalar_common_6[0])[(((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 621 "char.m"
        {
#line 621 "char.m"
          *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[18 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 621 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 621 "char.m"
        }
#line 621 "char.m"
      else
#line 621 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 621 "char.m"
    else
#line 621 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 621 "char.m"
    return mercury__char__succeeded;
#line 621 "char.m"
  }
#line 240 "char.m"
}

#line 234 "char.m"
MR_Integer MR_CALL 
mercury__char__det_decimal_digit_to_int_1_f_0(
#line 234 "char.m"
  MR_Char mercury__char__Digit_3)
#line 234 "char.m"
{
#line 614 "char.m"
  {
#line 614 "char.m"
    MR_bool mercury__char__succeeded;
#line 614 "char.m"
    MR_Integer mercury__char__Int_4;
#line 614 "char.m"
    MR_Integer mercury__char__IntPrime_5;

#line 612 "char.m"
    {
#line 612 "char.m"
      mercury__char__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__IntPrime_5);
    }
#line 614 "char.m"
    if (mercury__char__succeeded)
#line 613 "char.m"
      mercury__char__Int_4 = mercury__char__IntPrime_5;
#line 614 "char.m"
    else
#line 615 "char.m"
      {
#line 615 "char.m"
        {
#line 615 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.decimal_digit_to_int failed");
        }
#line 615 "char.m"
      }
#line 614 "char.m"
    return mercury__char__Int_4;
#line 614 "char.m"
  }
#line 234 "char.m"
}

#line 230 "char.m"
MR_bool MR_CALL 
mercury__char__decimal_digit_to_int_2_p_0(
#line 230 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 230 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 230 "char.m"
{
#line 600 "char.m"
  {
#line 600 "char.m"
    MR_bool mercury__char__succeeded;

#line 600 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 600 "char.m"
      {
#line 600 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[8 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 600 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 600 "char.m"
      }
#line 600 "char.m"
    else
#line 600 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 600 "char.m"
    return mercury__char__succeeded;
#line 600 "char.m"
  }
#line 230 "char.m"
}

#line 225 "char.m"
MR_Integer MR_CALL 
mercury__char__det_octal_digit_to_int_1_f_0(
#line 225 "char.m"
  MR_Char mercury__char__Digit_3)
#line 225 "char.m"
{
#line 596 "char.m"
  {
#line 596 "char.m"
    MR_bool mercury__char__succeeded;
#line 596 "char.m"
    MR_Integer mercury__char__Int_4;
#line 596 "char.m"
    MR_Integer mercury__char__IntPrime_5;

#line 594 "char.m"
    {
#line 594 "char.m"
      mercury__char__succeeded = mercury__char__octal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__IntPrime_5);
    }
#line 596 "char.m"
    if (mercury__char__succeeded)
#line 595 "char.m"
      mercury__char__Int_4 = mercury__char__IntPrime_5;
#line 596 "char.m"
    else
#line 597 "char.m"
      {
#line 597 "char.m"
        {
#line 597 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.octal_digit_to_int failed");
        }
#line 597 "char.m"
      }
#line 596 "char.m"
    return mercury__char__Int_4;
#line 596 "char.m"
  }
#line 225 "char.m"
}

#line 221 "char.m"
MR_bool MR_CALL 
mercury__char__octal_digit_to_int_2_p_0(
#line 221 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 221 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 221 "char.m"
{
#line 584 "char.m"
  {
#line 584 "char.m"
    MR_bool mercury__char__succeeded;

#line 584 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 7)))
#line 584 "char.m"
      {
#line 584 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[0 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 584 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 584 "char.m"
      }
#line 584 "char.m"
    else
#line 584 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 584 "char.m"
    return mercury__char__succeeded;
#line 584 "char.m"
  }
#line 221 "char.m"
}

#line 216 "char.m"
MR_Integer MR_CALL 
mercury__char__det_binary_digit_to_int_1_f_0(
#line 216 "char.m"
  MR_Char mercury__char__Digit_3)
#line 216 "char.m"
{
#line 580 "char.m"
  {
#line 580 "char.m"
    MR_bool mercury__char__succeeded;
#line 580 "char.m"
    MR_Integer mercury__char__Int_4;
#line 580 "char.m"
    MR_Integer mercury__char__IntPrime_5;

#line 574 "char.m"
#line 574 "char.m"
    switch (mercury__char__Digit_3) {
#line 574 "char.m"
      default:
#line 574 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 574 "char.m"
        break;
#line 574 "char.m"
      case (MR_Char) 48:
#line 574 "char.m"
        {
#line 574 "char.m"
          mercury__char__IntPrime_5 = (MR_Integer) 0;
#line 574 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 574 "char.m"
        }
#line 574 "char.m"
        break;
#line 574 "char.m"
      case (MR_Char) 49:
#line 575 "char.m"
        {
#line 575 "char.m"
          mercury__char__IntPrime_5 = (MR_Integer) 1;
#line 575 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 575 "char.m"
        }
#line 574 "char.m"
        break;
#line 574 "char.m"
    }
#line 580 "char.m"
    if (mercury__char__succeeded)
#line 579 "char.m"
      mercury__char__Int_4 = mercury__char__IntPrime_5;
#line 580 "char.m"
    else
#line 581 "char.m"
      {
#line 581 "char.m"
        {
#line 581 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.binary_digit_to_int failed");
        }
#line 581 "char.m"
      }
#line 580 "char.m"
    return mercury__char__Int_4;
#line 580 "char.m"
  }
#line 216 "char.m"
}

#line 212 "char.m"
MR_bool MR_CALL 
mercury__char__binary_digit_to_int_2_p_0(
#line 212 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 212 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 212 "char.m"
{
#line 574 "char.m"
  {
#line 574 "char.m"
    MR_bool mercury__char__succeeded;

#line 574 "char.m"
#line 574 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 574 "char.m"
      default:
#line 574 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 574 "char.m"
        break;
#line 574 "char.m"
      case (MR_Char) 48:
#line 574 "char.m"
        {
#line 574 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 574 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 574 "char.m"
        }
#line 574 "char.m"
        break;
#line 574 "char.m"
      case (MR_Char) 49:
#line 575 "char.m"
        {
#line 575 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 575 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 575 "char.m"
        }
#line 574 "char.m"
        break;
#line 574 "char.m"
    }
#line 574 "char.m"
    return mercury__char__succeeded;
#line 574 "char.m"
  }
#line 212 "char.m"
}

#line 207 "char.m"
MR_Char MR_CALL 
mercury__char__det_base_int_to_digit_2_f_0(
#line 207 "char.m"
  MR_Integer mercury__char__Base_4,
#line 207 "char.m"
  MR_Integer mercury__char__Int_5)
#line 207 "char.m"
{
#line 757 "char.m"
  {
#line 757 "char.m"
    MR_bool mercury__char__succeeded;
#line 757 "char.m"
    MR_Char mercury__char__Digit_6;
#line 757 "char.m"
    MR_Char mercury__char__DigitPrime_7;

#line 755 "char.m"
    {
#line 755 "char.m"
      mercury__char__succeeded = mercury__char__base_int_to_digit_3_p_0(mercury__char__Base_4, mercury__char__Int_5, &mercury__char__DigitPrime_7);
    }
#line 757 "char.m"
    if (mercury__char__succeeded)
#line 756 "char.m"
      mercury__char__Digit_6 = mercury__char__DigitPrime_7;
#line 757 "char.m"
    else
#line 758 "char.m"
      {
#line 758 "char.m"
        {
#line 758 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit failed");
        }
#line 758 "char.m"
      }
#line 757 "char.m"
    return mercury__char__Digit_6;
#line 757 "char.m"
  }
#line 207 "char.m"
}

#line 203 "char.m"
MR_bool MR_CALL 
mercury__char__base_int_to_digit_3_p_0(
#line 203 "char.m"
  MR_Integer mercury__char__Base_4,
#line 203 "char.m"
  MR_Integer mercury__char__Int_5,
#line 203 "char.m"
  MR_Char * mercury__char__Digit_6)
#line 203 "char.m"
{
#line 750 "char.m"
  {
#line 750 "char.m"
    MR_bool mercury__char__succeeded = ((MR_Integer) 1 < mercury__char__Base_4);
#line 747 "char.m"
    MR_Integer mercury__char__V_8_8;

#line 747 "char.m"
    if (mercury__char__succeeded)
#line 747 "char.m"
      {
#line 747 "char.m"
        mercury__char__V_8_8 = (MR_Integer) 37;
#line 747 "char.m"
        mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__V_8_8);
#line 747 "char.m"
      }
#line 750 "char.m"
    if (mercury__char__succeeded)
#line 748 "char.m"
      {
#line 748 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 < mercury__char__Base_4);
#line 748 "char.m"
        if (mercury__char__succeeded)
#line 749 "char.m"
          {
#line 749 "char.m"
            return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_5, mercury__char__Digit_6);
          }
#line 748 "char.m"
      }
#line 750 "char.m"
    else
#line 751 "char.m"
      {
#line 751 "char.m"
        {
#line 751 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit: invalid base");
        }
#line 751 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 751 "char.m"
      }
#line 750 "char.m"
    return mercury__char__succeeded;
#line 750 "char.m"
  }
#line 203 "char.m"
}

#line 196 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_hex_digit_1_f_0(
#line 196 "char.m"
  MR_Integer mercury__char__Int_3)
#line 196 "char.m"
{
#line 739 "char.m"
  {
#line 739 "char.m"
    MR_bool mercury__char__succeeded;
#line 739 "char.m"
    MR_Char mercury__char__Digit_4;
#line 739 "char.m"
    MR_Char mercury__char__DigitPrime_5;

#line 737 "char.m"
    {
#line 737 "char.m"
      mercury__char__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    }
#line 739 "char.m"
    if (mercury__char__succeeded)
#line 738 "char.m"
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
#line 739 "char.m"
    else
#line 740 "char.m"
      {
#line 740 "char.m"
        {
#line 740 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_hex_digit failed");
        }
#line 740 "char.m"
      }
#line 739 "char.m"
    return mercury__char__Digit_4;
#line 739 "char.m"
  }
#line 196 "char.m"
}

#line 192 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_digit_2_p_0(
#line 192 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 192 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 192 "char.m"
{
#line 719 "char.m"
  {
#line 719 "char.m"
    MR_bool mercury__char__succeeded;

#line 719 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 15)))
#line 719 "char.m"
      {
#line 719 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[70 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 719 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 719 "char.m"
      }
#line 719 "char.m"
    else
#line 719 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 719 "char.m"
    return mercury__char__succeeded;
#line 719 "char.m"
  }
#line 192 "char.m"
}

#line 187 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_decimal_digit_1_f_0(
#line 187 "char.m"
  MR_Integer mercury__char__Int_3)
#line 187 "char.m"
{
#line 715 "char.m"
  {
#line 715 "char.m"
    MR_bool mercury__char__succeeded;
#line 715 "char.m"
    MR_Char mercury__char__Digit_4;
#line 715 "char.m"
    MR_Char mercury__char__DigitPrime_5;

#line 713 "char.m"
    {
#line 713 "char.m"
      mercury__char__succeeded = mercury__char__int_to_decimal_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    }
#line 715 "char.m"
    if (mercury__char__succeeded)
#line 714 "char.m"
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
#line 715 "char.m"
    else
#line 716 "char.m"
      {
#line 716 "char.m"
        {
#line 716 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_decimal_digit failed");
        }
#line 716 "char.m"
      }
#line 715 "char.m"
    return mercury__char__Digit_4;
#line 715 "char.m"
  }
#line 187 "char.m"
}

#line 183 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_decimal_digit_2_p_0(
#line 183 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 183 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 183 "char.m"
{
#line 701 "char.m"
  {
#line 701 "char.m"
    MR_bool mercury__char__succeeded;

#line 701 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 701 "char.m"
      {
#line 701 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[60 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 701 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 701 "char.m"
      }
#line 701 "char.m"
    else
#line 701 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 701 "char.m"
    return mercury__char__succeeded;
#line 701 "char.m"
  }
#line 183 "char.m"
}

#line 179 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_octal_digit_1_f_0(
#line 179 "char.m"
  MR_Integer mercury__char__Int_3)
#line 179 "char.m"
{
#line 697 "char.m"
  {
#line 697 "char.m"
    MR_bool mercury__char__succeeded;
#line 697 "char.m"
    MR_Char mercury__char__Digit_4;
#line 697 "char.m"
    MR_Char mercury__char__DigitPrime_5;

#line 695 "char.m"
    {
#line 695 "char.m"
      mercury__char__succeeded = mercury__char__int_to_octal_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    }
#line 697 "char.m"
    if (mercury__char__succeeded)
#line 696 "char.m"
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
#line 697 "char.m"
    else
#line 698 "char.m"
      {
#line 698 "char.m"
        {
#line 698 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_octal_digit failed");
        }
#line 698 "char.m"
      }
#line 697 "char.m"
    return mercury__char__Digit_4;
#line 697 "char.m"
  }
#line 179 "char.m"
}

#line 175 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_octal_digit_2_p_0(
#line 175 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 175 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 175 "char.m"
{
#line 685 "char.m"
  {
#line 685 "char.m"
    MR_bool mercury__char__succeeded;

#line 685 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 7)))
#line 685 "char.m"
      {
#line 685 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[52 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 685 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 685 "char.m"
      }
#line 685 "char.m"
    else
#line 685 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 685 "char.m"
    return mercury__char__succeeded;
#line 685 "char.m"
  }
#line 175 "char.m"
}

#line 171 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_binary_digit_1_f_0(
#line 171 "char.m"
  MR_Integer mercury__char__Int_3)
#line 171 "char.m"
{
#line 681 "char.m"
  {
#line 681 "char.m"
    MR_bool mercury__char__succeeded;
#line 681 "char.m"
    MR_Char mercury__char__Digit_4;
#line 681 "char.m"
    MR_Char mercury__char__DigitPrime_5;

#line 675 "char.m"
#line 675 "char.m"
    switch (mercury__char__Int_3) {
#line 675 "char.m"
      default:
#line 675 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 675 "char.m"
        break;
#line 675 "char.m"
      case (MR_Integer) 0:
#line 675 "char.m"
        {
#line 675 "char.m"
          mercury__char__DigitPrime_5 = (MR_Char) 48;
#line 675 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 675 "char.m"
        }
#line 675 "char.m"
        break;
#line 675 "char.m"
      case (MR_Integer) 1:
#line 676 "char.m"
        {
#line 676 "char.m"
          mercury__char__DigitPrime_5 = (MR_Char) 49;
#line 676 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 676 "char.m"
        }
#line 675 "char.m"
        break;
#line 675 "char.m"
    }
#line 681 "char.m"
    if (mercury__char__succeeded)
#line 680 "char.m"
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
#line 681 "char.m"
    else
#line 682 "char.m"
      {
#line 682 "char.m"
        {
#line 682 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_binary_digit failed");
        }
#line 682 "char.m"
      }
#line 681 "char.m"
    return mercury__char__Digit_4;
#line 681 "char.m"
  }
#line 171 "char.m"
}

#line 167 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_binary_digit_2_p_0(
#line 167 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 167 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 167 "char.m"
{
#line 675 "char.m"
  {
#line 675 "char.m"
    MR_bool mercury__char__succeeded;

#line 675 "char.m"
#line 675 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 675 "char.m"
      default:
#line 675 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 675 "char.m"
        break;
#line 675 "char.m"
      case (MR_Integer) 0:
#line 675 "char.m"
        {
#line 675 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 675 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 675 "char.m"
        }
#line 675 "char.m"
        break;
#line 675 "char.m"
      case (MR_Integer) 1:
#line 676 "char.m"
        {
#line 676 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 676 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 676 "char.m"
        }
#line 675 "char.m"
        break;
#line 675 "char.m"
    }
#line 675 "char.m"
    return mercury__char__succeeded;
#line 675 "char.m"
  }
#line 167 "char.m"
}

#line 162 "char.m"
MR_bool MR_CALL 
mercury__char__is_base_digit_2_p_0(
#line 162 "char.m"
  MR_Integer mercury__char__Base_3,
#line 162 "char.m"
  MR_Char mercury__char__Digit_4)
#line 162 "char.m"
{
#line 565 "char.m"
  {
#line 565 "char.m"
    MR_bool mercury__char__succeeded = ((MR_Integer) 2 <= mercury__char__Base_3);
#line 563 "char.m"
    MR_Integer mercury__char__V_7_7;

#line 563 "char.m"
    if (mercury__char__succeeded)
#line 563 "char.m"
      {
#line 563 "char.m"
        mercury__char__V_7_7 = (MR_Integer) 36;
#line 563 "char.m"
        mercury__char__succeeded = (mercury__char__Base_3 <= mercury__char__V_7_7);
#line 563 "char.m"
      }
#line 565 "char.m"
    if (mercury__char__succeeded)
#line 564 "char.m"
      {
#line 564 "char.m"
        MR_Integer mercury__char___Int_5;

#line 564 "char.m"
        {
#line 564 "char.m"
          mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_3, mercury__char__Digit_4, &mercury__char___Int_5);
        }
#line 564 "char.m"
      }
#line 565 "char.m"
    else
#line 566 "char.m"
      {
#line 566 "char.m"
        {
#line 566 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.is_base_digit: invalid base");
        }
#line 566 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 566 "char.m"
      }
#line 565 "char.m"
    return mercury__char__succeeded;
#line 565 "char.m"
  }
#line 162 "char.m"
}

#line 156 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_1_p_0(
#line 156 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 156 "char.m"
{
#line 539 "char.m"
  {
#line 539 "char.m"
    MR_bool mercury__char__succeeded;

#line 539 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 54)))
#line 539 "char.m"
      if ((((mercury__char_scalar_common_6[0])[(((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 539 "char.m"
        {
#line 539 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 539 "char.m"
        }
#line 539 "char.m"
      else
#line 539 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 539 "char.m"
    else
#line 539 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 539 "char.m"
    return mercury__char__succeeded;
#line 539 "char.m"
  }
#line 156 "char.m"
}

#line 151 "char.m"
MR_bool MR_CALL 
mercury__char__is_decimal_digit_1_p_0(
#line 151 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 151 "char.m"
{
#line 526 "char.m"
  {
#line 526 "char.m"
    MR_bool mercury__char__succeeded;

#line 526 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 526 "char.m"
      {
#line 526 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 526 "char.m"
      }
#line 526 "char.m"
    else
#line 526 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 526 "char.m"
    return mercury__char__succeeded;
#line 526 "char.m"
  }
#line 151 "char.m"
}

#line 146 "char.m"
MR_bool MR_CALL 
mercury__char__is_octal_digit_1_p_0(
#line 146 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 146 "char.m"
{
#line 517 "char.m"
  {
#line 517 "char.m"
    MR_bool mercury__char__succeeded;

#line 517 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 7)))
#line 517 "char.m"
      {
#line 517 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 517 "char.m"
      }
#line 517 "char.m"
    else
#line 517 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 517 "char.m"
    return mercury__char__succeeded;
#line 517 "char.m"
  }
#line 146 "char.m"
}

#line 142 "char.m"
MR_bool MR_CALL 
mercury__char__is_binary_digit_1_p_0(
#line 142 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 142 "char.m"
{
#line 514 "char.m"
  {
#line 514 "char.m"
    MR_bool mercury__char__succeeded;

#line 514 "char.m"
#line 514 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 514 "char.m"
      default:
#line 514 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 514 "char.m"
        break;
#line 514 "char.m"
      case (MR_Char) 48:
#line 514 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 514 "char.m"
        break;
#line 514 "char.m"
      case (MR_Char) 49:
#line 515 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 514 "char.m"
        break;
#line 514 "char.m"
    }
#line 514 "char.m"
    return mercury__char__succeeded;
#line 514 "char.m"
  }
#line 142 "char.m"
}

#line 138 "char.m"
MR_bool MR_CALL 
mercury__char__is_digit_1_p_0(
#line 138 "char.m"
  MR_Char mercury__char__D_2)
#line 138 "char.m"
{
#line 526 "char.m"
  {
#line 526 "char.m"
    MR_bool mercury__char__succeeded;

#line 526 "char.m"
    if ((((MR_Unsigned) (mercury__char__D_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 526 "char.m"
      {
#line 526 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 526 "char.m"
      }
#line 526 "char.m"
    else
#line 526 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 526 "char.m"
    return mercury__char__succeeded;
#line 526 "char.m"
  }
#line 138 "char.m"
}

#line 134 "char.m"
MR_bool MR_CALL 
mercury__char__is_alnum_or_underscore_1_p_0(
#line 134 "char.m"
  MR_Char mercury__char__Char_2)
#line 134 "char.m"
{
#line 401 "char.m"
  {
#line 401 "char.m"
    MR_bool mercury__char__succeeded;

#line 401 "char.m"
    if ((((MR_Unsigned) (mercury__char__Char_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 74)))
#line 401 "char.m"
      if ((((mercury__char_scalar_common_5[0])[(((mercury__char__Char_2 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__Char_2 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 401 "char.m"
        {
#line 401 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 401 "char.m"
        }
#line 401 "char.m"
      else
#line 401 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 401 "char.m"
    else
#line 401 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 401 "char.m"
    return mercury__char__succeeded;
#line 401 "char.m"
  }
#line 134 "char.m"
}

#line 129 "char.m"
MR_bool MR_CALL 
mercury__char__is_alpha_or_underscore_1_p_0(
#line 129 "char.m"
  MR_Char mercury__char__Char_2)
#line 129 "char.m"
{
#line 393 "char.m"
  {
#line 393 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Char_2 == (MR_Char) 95);

#line 393 "char.m"
    if (mercury__char__succeeded)
#line 392 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 393 "char.m"
    else
#line 375 "char.m"
      {
#line 473 "char.m"
        MR_Char mercury__char__V_5_5;

#line 473 "char.m"
        {
#line 473 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
        }
#line 375 "char.m"
        if (mercury__char__succeeded)
#line 374 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
        else
#line 476 "char.m"
          {
#line 476 "char.m"
            MR_Char mercury__char__V_7_7;

#line 476 "char.m"
            {
#line 476 "char.m"
              mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
            }
#line 476 "char.m"
          }
#line 375 "char.m"
      }
#line 393 "char.m"
    return mercury__char__succeeded;
#line 393 "char.m"
  }
#line 129 "char.m"
}

#line 124 "char.m"
MR_bool MR_CALL 
mercury__char__is_alnum_1_p_0(
#line 124 "char.m"
  MR_Char mercury__char__Char_2)
#line 124 "char.m"
{
#line 384 "char.m"
  {
#line 384 "char.m"
    MR_bool mercury__char__succeeded;
#line 473 "char.m"
    MR_Char mercury__char__V_5_5;

#line 473 "char.m"
    {
#line 473 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
    }
#line 375 "char.m"
    if (mercury__char__succeeded)
#line 374 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
    else
#line 476 "char.m"
      {
#line 476 "char.m"
        MR_Char mercury__char__V_7_7;

#line 476 "char.m"
        {
#line 476 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
        }
#line 476 "char.m"
      }
#line 384 "char.m"
    if (mercury__char__succeeded)
#line 383 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
    else
#line 526 "char.m"
    if ((((MR_Unsigned) (mercury__char__Char_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 526 "char.m"
      {
#line 526 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 526 "char.m"
      }
#line 526 "char.m"
    else
#line 526 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 384 "char.m"
    return mercury__char__succeeded;
#line 384 "char.m"
  }
#line 124 "char.m"
}

#line 119 "char.m"
MR_bool MR_CALL 
mercury__char__is_alpha_1_p_0(
#line 119 "char.m"
  MR_Char mercury__char__Char_2)
#line 119 "char.m"
{
#line 375 "char.m"
  {
#line 375 "char.m"
    MR_bool mercury__char__succeeded;
#line 473 "char.m"
    MR_Char mercury__char__V_4_4;

#line 473 "char.m"
    {
#line 473 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_4_4);
    }
#line 375 "char.m"
    if (mercury__char__succeeded)
#line 374 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
    else
#line 476 "char.m"
      {
#line 476 "char.m"
        MR_Char mercury__char__V_6_6;

#line 476 "char.m"
        {
#line 476 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_6_6, mercury__char__Char_2);
        }
#line 476 "char.m"
      }
#line 375 "char.m"
    return mercury__char__succeeded;
#line 375 "char.m"
  }
#line 119 "char.m"
}

#line 115 "char.m"
MR_bool MR_CALL 
mercury__char__is_lower_1_p_0(
#line 115 "char.m"
  MR_Char mercury__char__Lower_2)
#line 115 "char.m"
{
#line 473 "char.m"
  {
#line 473 "char.m"
    MR_bool mercury__char__succeeded;
#line 473 "char.m"
    MR_Char mercury__char__V_3_3;

#line 473 "char.m"
    {
#line 473 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Lower_2, &mercury__char__V_3_3);
    }
#line 473 "char.m"
    return mercury__char__succeeded;
#line 473 "char.m"
  }
#line 115 "char.m"
}

#line 111 "char.m"
MR_bool MR_CALL 
mercury__char__is_upper_1_p_0(
#line 111 "char.m"
  MR_Char mercury__char__Upper_2)
#line 111 "char.m"
{
#line 476 "char.m"
  {
#line 476 "char.m"
    MR_bool mercury__char__succeeded;
#line 476 "char.m"
    MR_Char mercury__char__V_3_3;

#line 476 "char.m"
    {
#line 476 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_3_3, mercury__char__Upper_2);
    }
#line 476 "char.m"
    return mercury__char__succeeded;
#line 476 "char.m"
  }
#line 111 "char.m"
}

#line 107 "char.m"
MR_bool MR_CALL 
mercury__char__is_whitespace_1_p_0(
#line 107 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 107 "char.m"
{
#line 365 "char.m"
  {
#line 365 "char.m"
    MR_bool mercury__char__succeeded;

#line 365 "char.m"
#line 365 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 365 "char.m"
      default:
#line 365 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 365 "char.m"
        break;
#line 365 "char.m"
      case (MR_Char) 9:
#line 366 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
        break;
#line 365 "char.m"
      case (MR_Char) 10:
#line 367 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
        break;
#line 365 "char.m"
      case (MR_Char) 11:
#line 370 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
        break;
#line 365 "char.m"
      case (MR_Char) 12:
#line 369 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
        break;
#line 365 "char.m"
      case (MR_Char) 13:
#line 368 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
        break;
#line 365 "char.m"
      case (MR_Char) 32:
#line 365 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
        break;
#line 365 "char.m"
    }
#line 365 "char.m"
    return mercury__char__succeeded;
#line 365 "char.m"
  }
#line 107 "char.m"
}

#line 102 "char.m"
MR_bool MR_CALL 
mercury__char__lower_upper_2_p_1(
#line 102 "char.m"
  MR_Char * mercury__char__HeadVar__1_1,
#line 102 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 102 "char.m"
{
#line 826 "char.m"
  {
#line 826 "char.m"
    MR_bool mercury__char__succeeded;

#line 826 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__2_2 - (MR_Integer) 65)) <= ((MR_Unsigned) (MR_Integer) 25)))
#line 826 "char.m"
      {
#line 826 "char.m"
        *mercury__char__HeadVar__1_1 = ((&mercury__char_vector_common_4[26 + (mercury__char__HeadVar__2_2 - (MR_Integer) 65)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 826 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 826 "char.m"
      }
#line 826 "char.m"
    else
#line 826 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 826 "char.m"
    return mercury__char__succeeded;
#line 826 "char.m"
  }
#line 102 "char.m"
}

#line 101 "char.m"
MR_bool MR_CALL 
mercury__char__lower_upper_2_p_0(
#line 101 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 101 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 101 "char.m"
{
#line 826 "char.m"
  {
#line 826 "char.m"
    MR_bool mercury__char__succeeded;

#line 826 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 97)) <= ((MR_Unsigned) (MR_Integer) 25)))
#line 826 "char.m"
      {
#line 826 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[0 + (mercury__char__HeadVar__1_1 - (MR_Integer) 97)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 826 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 826 "char.m"
      }
#line 826 "char.m"
    else
#line 826 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 826 "char.m"
    return mercury__char__succeeded;
#line 826 "char.m"
  }
#line 101 "char.m"
}

#line 94 "char.m"
void MR_CALL 
mercury__char__to_lower_2_p_0(
#line 94 "char.m"
  MR_Char mercury__char__Char_3,
#line 94 "char.m"
  MR_Char * mercury__char__Lower_4)
#line 94 "char.m"
{
#line 488 "char.m"
  {
#line 488 "char.m"
    MR_bool mercury__char__succeeded;
#line 488 "char.m"
    MR_Char mercury__char__LowerChar_5;

#line 486 "char.m"
    {
#line 486 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_5, mercury__char__Char_3);
    }
#line 488 "char.m"
    if (mercury__char__succeeded)
#line 487 "char.m"
      *mercury__char__Lower_4 = mercury__char__LowerChar_5;
#line 488 "char.m"
    else
#line 489 "char.m"
      *mercury__char__Lower_4 = mercury__char__Char_3;
#line 488 "char.m"
  }
#line 94 "char.m"
}

#line 93 "char.m"
MR_Char MR_CALL 
mercury__char__to_lower_1_f_0(
#line 93 "char.m"
  MR_Char mercury__char__C1_3)
#line 93 "char.m"
{
#line 488 "char.m"
  {
#line 488 "char.m"
    MR_bool mercury__char__succeeded;
#line 488 "char.m"
    MR_Char mercury__char__C2_4;
#line 488 "char.m"
    MR_Char mercury__char__LowerChar_7;

#line 486 "char.m"
    {
#line 486 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_7, mercury__char__C1_3);
    }
#line 488 "char.m"
    if (mercury__char__succeeded)
#line 487 "char.m"
      mercury__char__C2_4 = mercury__char__LowerChar_7;
#line 488 "char.m"
    else
#line 489 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 488 "char.m"
    return mercury__char__C2_4;
#line 488 "char.m"
  }
#line 93 "char.m"
}

#line 88 "char.m"
void MR_CALL 
mercury__char__to_upper_2_p_0(
#line 88 "char.m"
  MR_Char mercury__char__Char_3,
#line 88 "char.m"
  MR_Char * mercury__char__Upper_4)
#line 88 "char.m"
{
#line 498 "char.m"
  {
#line 498 "char.m"
    MR_bool mercury__char__succeeded;
#line 498 "char.m"
    MR_Char mercury__char__UpperChar_5;

#line 496 "char.m"
    {
#line 496 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_3, &mercury__char__UpperChar_5);
    }
#line 498 "char.m"
    if (mercury__char__succeeded)
#line 497 "char.m"
      *mercury__char__Upper_4 = mercury__char__UpperChar_5;
#line 498 "char.m"
    else
#line 499 "char.m"
      *mercury__char__Upper_4 = mercury__char__Char_3;
#line 498 "char.m"
  }
#line 88 "char.m"
}

#line 87 "char.m"
MR_Char MR_CALL 
mercury__char__to_upper_1_f_0(
#line 87 "char.m"
  MR_Char mercury__char__C1_3)
#line 87 "char.m"
{
#line 498 "char.m"
  {
#line 498 "char.m"
    MR_bool mercury__char__succeeded;
#line 498 "char.m"
    MR_Char mercury__char__C2_4;
#line 498 "char.m"
    MR_Char mercury__char__UpperChar_7;

#line 496 "char.m"
    {
#line 496 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__C1_3, &mercury__char__UpperChar_7);
    }
#line 498 "char.m"
    if (mercury__char__succeeded)
#line 497 "char.m"
      mercury__char__C2_4 = mercury__char__UpperChar_7;
#line 498 "char.m"
    else
#line 499 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 498 "char.m"
    return mercury__char__C2_4;
#line 498 "char.m"
  }
#line 87 "char.m"
}

#line 82 "char.m"
void MR_CALL 
mercury__char__min_char_value_1_p_0(
#line 82 "char.m"
  MR_Integer * mercury__char__HeadVar__1_1)
#line 82 "char.m"
{
#line 967 "char.m"
  {
#line 967 "char.m"
    MR_bool mercury__char__succeeded;

#line 967 "char.m"
    *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 967 "char.m"
  }
#line 82 "char.m"
}

#line 81 "char.m"
MR_Integer MR_CALL 
mercury__char__min_char_value_0_f_0(void)
#line 81 "char.m"
{
#line 967 "char.m"
  {
#line 967 "char.m"
    MR_bool mercury__char__succeeded;

#line 967 "char.m"
    return (MR_Integer) 0;
#line 967 "char.m"
  }
#line 81 "char.m"
}

#line 77 "char.m"
void MR_CALL 
mercury__char__max_char_value_1_p_0(
#line 77 "char.m"
  MR_Integer * mercury__char__Max_1)
#line 77 "char.m"
{
#line 974 "char.m"
  {
#line 974 "char.m"
    MR_bool mercury__char__succeeded;

#line 978 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_1_p_0

	MR_Integer Max;

		{
#line 978 "char.m"

    Max = 0x10ffff;

#line 3926 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Max_1  = Max;
#line 978 "char.m"
}
#line 974 "char.m"
  }
#line 77 "char.m"
}

#line 76 "char.m"
MR_Integer MR_CALL 
mercury__char__max_char_value_0_f_0(void)
#line 76 "char.m"
{
#line 974 "char.m"
  {
#line 974 "char.m"
    MR_bool mercury__char__succeeded;
#line 974 "char.m"
    MR_Integer mercury__char__N_2;

#line 978 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_0_f_0

	MR_Integer Max;

		{
#line 978 "char.m"

    Max = 0x10ffff;

#line 3961 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_2  = Max;
#line 978 "char.m"
}
#line 974 "char.m"
    return mercury__char__N_2;
#line 974 "char.m"
  }
#line 76 "char.m"
}

#line 72 "char.m"
void MR_CALL 
mercury__char__det_from_int_2_p_0(
#line 72 "char.m"
  MR_Integer mercury__char__Int_3,
#line 72 "char.m"
  MR_Char * mercury__char__Char_4)
#line 72 "char.m"
{
#line 861 "char.m"
  {
#line 861 "char.m"
    MR_bool mercury__char__succeeded;
#line 861 "char.m"
    MR_Char mercury__char__CharPrime_5;

#line 891 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 891 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 4006 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_5  = Character;
#line 891 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 861 "char.m"
    if (mercury__char__succeeded)
#line 860 "char.m"
      *mercury__char__Char_4 = mercury__char__CharPrime_5;
#line 861 "char.m"
    else
#line 862 "char.m"
      {
#line 862 "char.m"
        {
#line 862 "char.m"
          mercury__require__unexpected_3_p_0((MR_String) "char", (MR_String) "predicate \140char.det_from_int\'/2", (MR_String) "char.det_from_int: conversion failed");
#line 862 "char.m"
          return;
        }
#line 862 "char.m"
      }
#line 861 "char.m"
  }
#line 72 "char.m"
}

#line 71 "char.m"
MR_Char MR_CALL 
mercury__char__det_from_int_1_f_0(
#line 71 "char.m"
  MR_Integer mercury__char__Int_3)
#line 71 "char.m"
{
#line 861 "char.m"
  {
#line 861 "char.m"
    MR_bool mercury__char__succeeded;
#line 861 "char.m"
    MR_Char mercury__char__Char_4;
#line 861 "char.m"
    MR_Char mercury__char__CharPrime_7;

#line 891 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 891 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 4069 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_7  = Character;
#line 891 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 861 "char.m"
    if (mercury__char__succeeded)
#line 860 "char.m"
      mercury__char__Char_4 = mercury__char__CharPrime_7;
#line 861 "char.m"
    else
#line 862 "char.m"
      {
#line 862 "char.m"
        {
#line 862 "char.m"
          mercury__require__unexpected_3_p_0((MR_String) "char", (MR_String) "predicate \140char.det_from_int\'/2", (MR_String) "char.det_from_int: conversion failed");
        }
#line 862 "char.m"
      }
#line 861 "char.m"
    return mercury__char__Char_4;
#line 861 "char.m"
  }
#line 71 "char.m"
}

#line 66 "char.m"
MR_bool MR_CALL 
mercury__char__from_int_2_p_0(
#line 66 "char.m"
  MR_Integer mercury__char__Int_3,
#line 66 "char.m"
  MR_Char * mercury__char__Char_4)
#line 66 "char.m"
{
#line 887 "char.m"
  {
#line 887 "char.m"
    MR_bool mercury__char__succeeded;

#line 891 "char.m"
{
#define MR_PROC_LABEL mercury__char__from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 891 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 4130 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Char_4  = Character;
#line 891 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 887 "char.m"
    return mercury__char__succeeded;
#line 887 "char.m"
  }
#line 66 "char.m"
}

#line 61 "char.m"
MR_bool MR_CALL 
mercury__char__to_int_2_p_2(
#line 61 "char.m"
  MR_Char * mercury__char__Character_1,
#line 61 "char.m"
  MR_Integer mercury__char__Int_2)
#line 61 "char.m"
{
#line 887 "char.m"
  {
#line 887 "char.m"
    MR_bool mercury__char__succeeded;

#line 891 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_2

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_2 ;
		{
#line 891 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 4176 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Character_1  = Character;
#line 891 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 887 "char.m"
    return mercury__char__succeeded;
#line 887 "char.m"
  }
#line 61 "char.m"
}

#line 60 "char.m"
MR_bool MR_CALL 
mercury__char__to_int_2_p_1(
#line 60 "char.m"
  MR_Char mercury__char__Character_1,
#line 60 "char.m"
  MR_Integer mercury__char__Int_2)
#line 60 "char.m"
{
#line 879 "char.m"
  {
#line 879 "char.m"
    MR_bool mercury__char__succeeded;

#line 883 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__char__Character_1 ;
	Int =  mercury__char__Int_2 ;
		{
#line 883 "char.m"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 4222 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 883 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 879 "char.m"
    return mercury__char__succeeded;
#line 879 "char.m"
  }
#line 60 "char.m"
}

#line 59 "char.m"
void MR_CALL 
mercury__char__to_int_2_p_0(
#line 59 "char.m"
  MR_Char mercury__char__Character_1,
#line 59 "char.m"
  MR_Integer * mercury__char__Int_2)
#line 59 "char.m"
{
#line 868 "char.m"
  {
#line 868 "char.m"
    MR_bool mercury__char__succeeded;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Character_1 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 4265 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Int_2  = Int;
#line 872 "char.m"
}
#line 868 "char.m"
  }
#line 59 "char.m"
}

#line 57 "char.m"
MR_Integer MR_CALL 
mercury__char__to_int_1_f_0(
#line 57 "char.m"
  MR_Char mercury__char__C_3)
#line 57 "char.m"
{
#line 868 "char.m"
  {
#line 868 "char.m"
    MR_bool mercury__char__succeeded;
#line 868 "char.m"
    MR_Integer mercury__char__N_4;

#line 872 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__C_3 ;
		{
#line 872 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 4304 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_4  = Int;
#line 872 "char.m"
}
#line 868 "char.m"
    return mercury__char__N_4;
#line 868 "char.m"
  }
#line 57 "char.m"
}

void mercury__char__init(void)
{
}

void mercury__char__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__char__char__type_ctor_info_char_0);
}

void mercury__char__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module char. */
