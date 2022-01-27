/*
** Automatically generated from `char.m'
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

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__char_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__char_scalar_common_5[1][3];

static /* final */ const MR_Integer mercury__char_scalar_common_6[2][2];


#line 782 "char.m"
/* sealed */ struct mercury__char__vector_common_type_4_0_s {
#line 782 "char.m"
  const MR_Char mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 782 "char.m"
};

static /* final */ const struct mercury__char__vector_common_type_4_0_s mercury__char_vector_common_4[122];

#line 568 "char.m"
/* sealed */ struct mercury__char__vector_common_type_7_0_s {
#line 568 "char.m"
  const MR_Integer mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 568 "char.m"
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


#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
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
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 591 "char.c"
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

#line 608 "char.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__character__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001))
};

#line 619 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 622 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 624 "char.c"
  MR_Box mercury__char__wrapper_arg_2)
#line 626 "char.c"
{
#line 628 "char.c"
  {
#line 630 "char.c"
    MR_bool mercury__char__succeeded;

#line 633 "char.c"
    {
#line 635 "char.c"
      mercury__char__succeeded = mercury__char____Unify____char_0_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2));
    }
#line 638 "char.c"
    return mercury__char__succeeded;
#line 640 "char.c"
  }
#line 642 "char.c"
}

#line 645 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 648 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 650 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 652 "char.c"
  MR_Box mercury__char__wrapper_arg_3)
#line 654 "char.c"
{
#line 656 "char.c"
  {
#line 658 "char.c"
    MR_Word mercury__char__conv0_HeadVar__1_1;

#line 661 "char.c"
    {
#line 663 "char.c"
      mercury__char____Compare____char_0_0(&mercury__char__conv0_HeadVar__1_1, ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_3));
    }
#line 666 "char.c"
    *mercury__char__wrapper_arg_1 = ((MR_Box) (mercury__char__conv0_HeadVar__1_1));
#line 668 "char.c"
  }
#line 670 "char.c"
}

#line 673 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 676 "char.c"
  MR_Box mercury__char__closure_arg,
#line 678 "char.c"
  MR_Box mercury__char__wrapper_arg_1)
#line 680 "char.c"
{
#line 682 "char.c"
  {
#line 684 "char.c"
    MR_Box mercury__char__wrapper_arg_2;
#line 686 "char.c"
    MR_Box mercury__char__closure;
#line 688 "char.c"
    MR_Integer mercury__char__conv0_Y_4;

#line 691 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 693 "char.c"
    {
#line 695 "char.c"
      mercury__char__conv0_Y_4 = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1));
    }
#line 698 "char.c"
    mercury__char__wrapper_arg_2 = ((MR_Box) (mercury__char__conv0_Y_4));
#line 700 "char.c"
    return mercury__char__wrapper_arg_2;
#line 702 "char.c"
  }
#line 704 "char.c"
}

#line 707 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 710 "char.c"
  MR_Box mercury__char__closure_arg,
#line 712 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 714 "char.c"
  MR_Box * mercury__char__wrapper_arg_2)
#line 716 "char.c"
{
#line 718 "char.c"
  {
#line 720 "char.c"
    MR_bool mercury__char__succeeded;
#line 722 "char.c"
    MR_Box mercury__char__closure;
#line 724 "char.c"
    MR_Char mercury__char__conv0_Y_4;

#line 727 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 729 "char.c"
    {
#line 731 "char.c"
      mercury__char__succeeded = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__char__wrapper_arg_1), &mercury__char__conv0_Y_4);
    }
#line 734 "char.c"
    if (mercury__char__succeeded)
#line 736 "char.c"
      {
#line 738 "char.c"
        *mercury__char__wrapper_arg_2 = ((MR_Box) (MR_Word) (mercury__char__conv0_Y_4));
#line 740 "char.c"
        mercury__char__succeeded = MR_TRUE;
#line 742 "char.c"
      }
#line 744 "char.c"
    return mercury__char__succeeded;
#line 746 "char.c"
  }
#line 748 "char.c"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__char__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 344 "char.m"
MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(
#line 344 "char.m"
  MR_Integer mercury__char__X_3,
#line 344 "char.m"
  MR_Char * mercury__char__Y_4)
#line 344 "char.m"
{
#line 843 "char.m"
  {
#line 843 "char.m"
    MR_bool mercury__char__succeeded;

#line 847 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__X_3 ;
		{
#line 847 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 797 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Y_4  = Character;
#line 847 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 843 "char.m"
    return mercury__char__succeeded;
#line 843 "char.m"
  }
#line 344 "char.m"
}

#line 343 "char.m"
MR_Integer MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(
#line 343 "char.m"
  MR_Char mercury__char__X_3)
#line 343 "char.m"
{
#line 824 "char.m"
  {
#line 824 "char.m"
    MR_bool mercury__char__succeeded;
#line 824 "char.m"
    MR_Integer mercury__char__Y_4;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__X_3 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 841 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Y_4  = Int;
#line 828 "char.m"
}
#line 824 "char.m"
    return mercury__char__Y_4;
#line 824 "char.m"
  }
#line 343 "char.m"
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
    MR_Integer mercury__char__XI_7_10;
#line 36 "char.m"
    MR_Integer mercury__char__YI_8_11;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar1_4 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 892 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__XI_7_10  = Int;
#line 828 "char.m"
}
#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar2_5 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 912 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__YI_8_11  = Int;
#line 828 "char.m"
}
#line 53 "private_builtin.opt"
    mercury__char__succeeded = (mercury__char__XI_7_10 < mercury__char__YI_8_11);
#line 56 "private_builtin.opt"
    if (mercury__char__succeeded)
#line 55 "private_builtin.opt"
      *mercury__char__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
    else
#line 61 "private_builtin.opt"
      {
#line 58 "private_builtin.opt"
        mercury__char__succeeded = (mercury__char__XI_7_10 == mercury__char__YI_8_11);
#line 61 "private_builtin.opt"
        if (mercury__char__succeeded)
#line 60 "private_builtin.opt"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
        else
#line 62 "private_builtin.opt"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
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

#line 731 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_1(
#line 731 "char.m"
  MR_Integer * mercury__char__HeadVar__1_1,
#line 731 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 731 "char.m"
{
#line 733 "char.m"
  {
#line 733 "char.m"
    MR_bool mercury__char__succeeded;

#line 733 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__2_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 42)))
#line 733 "char.m"
      if ((((mercury__char_scalar_common_6[1])[(((mercury__char__HeadVar__2_2 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__2_2 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 733 "char.m"
        {
#line 733 "char.m"
          *mercury__char__HeadVar__1_1 = ((&mercury__char_vector_common_7[73 + (mercury__char__HeadVar__2_2 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 733 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 733 "char.m"
        }
#line 733 "char.m"
      else
#line 733 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 733 "char.m"
    else
#line 733 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 733 "char.m"
    return mercury__char__succeeded;
#line 733 "char.m"
  }
#line 731 "char.m"
}

#line 730 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_0(
#line 730 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 730 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 730 "char.m"
{
#line 733 "char.m"
  {
#line 733 "char.m"
    MR_bool mercury__char__succeeded;

#line 733 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 35)))
#line 733 "char.m"
      {
#line 733 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[86 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 733 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 733 "char.m"
      }
#line 733 "char.m"
    else
#line 733 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 733 "char.m"
    return mercury__char__succeeded;
#line 733 "char.m"
  }
#line 730 "char.m"
}

#line 331 "char.m"
void MR_CALL 
mercury__char__det_int_to_digit_2_p_0(
#line 331 "char.m"
  MR_Integer mercury__char__Int_3,
#line 331 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 331 "char.m"
{
#line 725 "char.m"
  {
#line 725 "char.m"
    MR_bool mercury__char__succeeded;
#line 725 "char.m"
    MR_Char mercury__char__Digit1_5;

#line 723 "char.m"
    {
#line 723 "char.m"
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, &mercury__char__Digit1_5);
    }
#line 725 "char.m"
    if (mercury__char__succeeded)
#line 724 "char.m"
      *mercury__char__Digit_4 = mercury__char__Digit1_5;
#line 725 "char.m"
    else
#line 726 "char.m"
      {
#line 726 "char.m"
        {
#line 726 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
#line 726 "char.m"
          return;
        }
#line 726 "char.m"
      }
#line 725 "char.m"
  }
#line 331 "char.m"
}

#line 329 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_digit_1_f_0(
#line 329 "char.m"
  MR_Integer mercury__char__N_3)
#line 329 "char.m"
{
#line 725 "char.m"
  {
#line 725 "char.m"
    MR_bool mercury__char__succeeded;
#line 725 "char.m"
    MR_Char mercury__char__C_4;
#line 725 "char.m"
    MR_Char mercury__char__Digit1_7;

#line 723 "char.m"
    {
#line 723 "char.m"
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__N_3, &mercury__char__Digit1_7);
    }
#line 725 "char.m"
    if (mercury__char__succeeded)
#line 724 "char.m"
      mercury__char__C_4 = mercury__char__Digit1_7;
#line 725 "char.m"
    else
#line 726 "char.m"
      {
#line 726 "char.m"
        {
#line 726 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
        }
#line 726 "char.m"
      }
#line 725 "char.m"
    return mercury__char__C_4;
#line 725 "char.m"
  }
#line 329 "char.m"
}

#line 319 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_1(
#line 319 "char.m"
  MR_Integer * mercury__char__Int_3,
#line 319 "char.m"
  MR_Char mercury__char__Digit_4)
#line 319 "char.m"
{
#line 771 "char.m"
  {
#line 771 "char.m"
    MR_bool mercury__char__succeeded;

#line 771 "char.m"
    {
#line 771 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_3, mercury__char__Digit_4);
    }
#line 771 "char.m"
    return mercury__char__succeeded;
#line 771 "char.m"
  }
#line 319 "char.m"
}

#line 318 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_0(
#line 318 "char.m"
  MR_Integer mercury__char__Int_3,
#line 318 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 318 "char.m"
{
#line 771 "char.m"
  {
#line 771 "char.m"
    MR_bool mercury__char__succeeded;

#line 771 "char.m"
    {
#line 771 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, mercury__char__Digit_4);
    }
#line 771 "char.m"
    return mercury__char__succeeded;
#line 771 "char.m"
  }
#line 318 "char.m"
}

#line 301 "char.m"
MR_bool MR_CALL 
mercury__char__digit_to_int_2_p_0(
#line 301 "char.m"
  MR_Char mercury__char__Digit_3,
#line 301 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 301 "char.m"
{
#line 776 "char.m"
  {
#line 776 "char.m"
    MR_bool mercury__char__succeeded;
#line 776 "char.m"
    MR_Char mercury__char__Upper_5;

#line 774 "char.m"
    {
#line 774 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_3, &mercury__char__Upper_5);
    }
#line 776 "char.m"
    if (mercury__char__succeeded)
#line 775 "char.m"
      {
#line 775 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Upper_5);
      }
#line 776 "char.m"
    else
#line 777 "char.m"
      {
#line 777 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Digit_3);
      }
#line 776 "char.m"
    return mercury__char__succeeded;
#line 776 "char.m"
  }
#line 301 "char.m"
}

#line 295 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_char_2_p_0(
#line 295 "char.m"
  MR_Integer mercury__char__Int_3,
#line 295 "char.m"
  MR_Char * mercury__char__Char_4)
#line 295 "char.m"
{
#line 700 "char.m"
  {
#line 700 "char.m"
    MR_bool mercury__char__succeeded;

#line 700 "char.m"
    {
#line 700 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__char__Int_3, mercury__char__Char_4);
    }
#line 700 "char.m"
    return mercury__char__succeeded;
#line 700 "char.m"
  }
#line 295 "char.m"
}

#line 287 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_2_p_0(
#line 287 "char.m"
  MR_Char mercury__char__Digit_3,
#line 287 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 287 "char.m"
{
#line 603 "char.m"
  {
#line 603 "char.m"
    MR_bool mercury__char__succeeded;

#line 603 "char.m"
    {
#line 603 "char.m"
      return mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, mercury__char__Int_4);
    }
#line 603 "char.m"
    return mercury__char__succeeded;
#line 603 "char.m"
  }
#line 287 "char.m"
}

#line 278 "char.m"
MR_bool MR_CALL 
mercury__char__is_noncharacter_1_p_0(
#line 278 "char.m"
  MR_Char mercury__char__Char_2)
#line 278 "char.m"
{
#line 1016 "char.m"
  {
#line 1016 "char.m"
    MR_bool mercury__char__succeeded;
#line 1016 "char.m"
    MR_Integer mercury__char__Int_3;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_noncharacter_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1308 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 828 "char.m"
}
#line 1018 "char.m"
    {
#line 1018 "char.m"
      MR_Integer mercury__char__V_7_7;

#line 1018 "char.m"
      mercury__char__succeeded = ((MR_Integer) 64976 <= mercury__char__Int_3);
#line 1018 "char.m"
      if (mercury__char__succeeded)
#line 1018 "char.m"
        {
#line 1018 "char.m"
          mercury__char__V_7_7 = (MR_Integer) 65007;
#line 1018 "char.m"
          mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_7_7);
#line 1018 "char.m"
        }
#line 1018 "char.m"
    }
#line 1019 "char.m"
    if (!(mercury__char__succeeded))
#line 1019 "char.m"
      {
#line 1019 "char.m"
        MR_Integer mercury__char__V_4_4 = (mercury__char__Int_3 & (MR_Integer) 65534);

#line 1019 "char.m"
        mercury__char__succeeded = (mercury__char__V_4_4 == (MR_Integer) 65534);
#line 1019 "char.m"
      }
#line 1016 "char.m"
    return mercury__char__succeeded;
#line 1016 "char.m"
  }
#line 278 "char.m"
}

#line 271 "char.m"
MR_bool MR_CALL 
mercury__char__is_trailing_surrogate_1_p_0(
#line 271 "char.m"
  MR_Char mercury__char__Char_2)
#line 271 "char.m"
{
#line 1011 "char.m"
  {
#line 1011 "char.m"
    MR_bool mercury__char__succeeded;
#line 1011 "char.m"
    MR_Integer mercury__char__Int_3;
#line 1011 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_trailing_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1381 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 828 "char.m"
}
#line 1013 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 56320);
#line 1011 "char.m"
    if (mercury__char__succeeded)
#line 1011 "char.m"
      {
#line 1014 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 57343;
#line 1014 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 1011 "char.m"
      }
#line 1011 "char.m"
    return mercury__char__succeeded;
#line 1011 "char.m"
  }
#line 271 "char.m"
}

#line 265 "char.m"
MR_bool MR_CALL 
mercury__char__is_leading_surrogate_1_p_0(
#line 265 "char.m"
  MR_Char mercury__char__Char_2)
#line 265 "char.m"
{
#line 1006 "char.m"
  {
#line 1006 "char.m"
    MR_bool mercury__char__succeeded;
#line 1006 "char.m"
    MR_Integer mercury__char__Int_3;
#line 1006 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_leading_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1436 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 828 "char.m"
}
#line 1008 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
#line 1006 "char.m"
    if (mercury__char__succeeded)
#line 1006 "char.m"
      {
#line 1009 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 56319;
#line 1009 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 1006 "char.m"
      }
#line 1006 "char.m"
    return mercury__char__succeeded;
#line 1006 "char.m"
  }
#line 265 "char.m"
}

#line 259 "char.m"
MR_bool MR_CALL 
mercury__char__is_surrogate_1_p_0(
#line 259 "char.m"
  MR_Char mercury__char__Char_2)
#line 259 "char.m"
{
#line 1001 "char.m"
  {
#line 1001 "char.m"
    MR_bool mercury__char__succeeded;
#line 1001 "char.m"
    MR_Integer mercury__char__Int_3;
#line 1001 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1491 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 828 "char.m"
}
#line 1003 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
#line 1001 "char.m"
    if (mercury__char__succeeded)
#line 1001 "char.m"
      {
#line 1004 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 57343;
#line 1004 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 1001 "char.m"
      }
#line 1001 "char.m"
    return mercury__char__succeeded;
#line 1001 "char.m"
  }
#line 259 "char.m"
}

#line 253 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf16_2_p_0(
#line 253 "char.m"
  MR_Char mercury__char__Char_3,
#line 253 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 253 "char.m"
{
#line 981 "char.m"
  {
#line 981 "char.m"
    MR_bool mercury__char__succeeded;
#line 981 "char.m"
    MR_Integer mercury__char__Int_5;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1546 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 828 "char.m"
}
#line 983 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 < (MR_Integer) 55296);
#line 986 "char.m"
    if (mercury__char__succeeded)
#line 985 "char.m"
      {
#line 985 "char.m"
        MR_Word mercury__char__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 985 "char.m"
        {
#line 985 "char.m"
          MR_Word base;
#line 985 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 985 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 985 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_10_10));
#line 985 "char.m"
        }
#line 985 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 985 "char.m"
      }
#line 986 "char.m"
    else
#line 989 "char.m"
      {
#line 986 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 57343);
#line 989 "char.m"
        if (mercury__char__succeeded)
#line 988 "char.m"
          mercury__char__succeeded = MR_FALSE;
#line 989 "char.m"
        else
#line 991 "char.m"
          {
#line 989 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 991 "char.m"
            if (mercury__char__succeeded)
#line 990 "char.m"
              {
#line 990 "char.m"
                MR_Word mercury__char__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 990 "char.m"
                {
#line 990 "char.m"
                  MR_Word base;
#line 990 "char.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "char.m"
                  *mercury__char__CodeUnits_4 = base;
#line 990 "char.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 990 "char.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_13_13));
#line 990 "char.m"
                }
#line 990 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 990 "char.m"
              }
#line 991 "char.m"
            else
#line 996 "char.m"
              {
#line 996 "char.m"
                MR_Integer mercury__char__U_6;
#line 996 "char.m"
                MR_Integer mercury__char__A_7;
#line 996 "char.m"
                MR_Integer mercury__char__B_8;
#line 996 "char.m"
                MR_Integer mercury__char__V_15_15;
#line 996 "char.m"
                MR_Integer mercury__char__V_16_16;
#line 996 "char.m"
                MR_Integer mercury__char__V_17_17;
#line 996 "char.m"
                MR_Integer mercury__char__V_18_18;
#line 996 "char.m"
                MR_Integer mercury__char__V_19_19;
#line 996 "char.m"
                MR_Integer mercury__char__V_20_20;
#line 996 "char.m"
                MR_Integer mercury__char__V_21_21;
#line 996 "char.m"
                MR_Word mercury__char__V_22_22;
#line 996 "char.m"
                MR_Word mercury__char__V_23_23;

#line 991 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 996 "char.m"
                if (mercury__char__succeeded)
#line 996 "char.m"
                  {
#line 992 "char.m"
                    mercury__char__V_15_15 = (MR_Integer) 65536;
#line 992 "char.m"
                    mercury__char__U_6 = (mercury__char__Int_5 - mercury__char__V_15_15);
#line 993 "char.m"
                    mercury__char__V_16_16 = (MR_Integer) 55296;
#line 993 "char.m"
                    mercury__char__V_18_18 = (MR_Integer) 10;
#line 993 "char.m"
                    {
#line 993 "char.m"
                      mercury__char__V_17_17 = mercury__int__f_62_62_2_f_0(mercury__char__U_6, mercury__char__V_18_18);
                    }
#line 993 "char.m"
                    mercury__char__A_7 = (mercury__char__V_16_16 | mercury__char__V_17_17);
#line 994 "char.m"
                    mercury__char__V_19_19 = (MR_Integer) 56320;
#line 994 "char.m"
                    mercury__char__V_21_21 = (MR_Integer) 1023;
#line 994 "char.m"
                    mercury__char__V_20_20 = (mercury__char__U_6 & mercury__char__V_21_21);
#line 994 "char.m"
                    mercury__char__B_8 = (mercury__char__V_19_19 | mercury__char__V_20_20);
#line 995 "char.m"
                    mercury__char__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 995 "char.m"
                    {
#line 995 "char.m"
                      mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 0) = ((MR_Box) (mercury__char__B_8));
#line 995 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 1) = ((MR_Box) (mercury__char__V_23_23));
#line 995 "char.m"
                    }
#line 995 "char.m"
                    {
#line 995 "char.m"
                      MR_Word base;
#line 995 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 995 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_7));
#line 995 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 995 "char.m"
                    }
#line 995 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 996 "char.m"
                  }
#line 996 "char.m"
              }
#line 991 "char.m"
          }
#line 989 "char.m"
      }
#line 981 "char.m"
    return mercury__char__succeeded;
#line 981 "char.m"
  }
#line 253 "char.m"
}

#line 248 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf8_2_p_0(
#line 248 "char.m"
  MR_Char mercury__char__Char_3,
#line 248 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 248 "char.m"
{
#line 956 "char.m"
  {
#line 956 "char.m"
    MR_bool mercury__char__succeeded;
#line 956 "char.m"
    MR_Integer mercury__char__Int_5;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1751 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 828 "char.m"
}
#line 958 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 127);
#line 960 "char.m"
    if (mercury__char__succeeded)
#line 959 "char.m"
      {
#line 959 "char.m"
        MR_Word mercury__char__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 959 "char.m"
        {
#line 959 "char.m"
          MR_Word base;
#line 959 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 959 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 959 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_11_11));
#line 959 "char.m"
        }
#line 959 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 959 "char.m"
      }
#line 960 "char.m"
    else
#line 964 "char.m"
      {
#line 960 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 2047);
#line 964 "char.m"
        if (mercury__char__succeeded)
#line 961 "char.m"
          {
#line 961 "char.m"
            MR_Integer mercury__char__A_6;
#line 961 "char.m"
            MR_Integer mercury__char__B_7;
#line 961 "char.m"
            MR_Integer mercury__char__V_14_14;
#line 961 "char.m"
            MR_Integer mercury__char__V_15_15;
#line 961 "char.m"
            MR_Integer mercury__char__V_19_19;
#line 961 "char.m"
            MR_Word mercury__char__V_21_21;
#line 961 "char.m"
            MR_Word mercury__char__V_22_22;

#line 961 "char.m"
            {
#line 961 "char.m"
              mercury__char__V_15_15 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, (MR_Integer) 6);
            }
#line 961 "char.m"
            mercury__char__V_14_14 = (mercury__char__V_15_15 & (MR_Integer) 31);
#line 961 "char.m"
            mercury__char__A_6 = ((MR_Integer) 192 | mercury__char__V_14_14);
#line 962 "char.m"
            mercury__char__V_19_19 = (mercury__char__Int_5 & (MR_Integer) 63);
#line 962 "char.m"
            mercury__char__B_7 = ((MR_Integer) 128 | mercury__char__V_19_19);
#line 963 "char.m"
            mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "char.m"
            {
#line 963 "char.m"
              mercury__char__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 0) = ((MR_Box) (mercury__char__B_7));
#line 963 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 963 "char.m"
            }
#line 963 "char.m"
            {
#line 963 "char.m"
              MR_Word base;
#line 963 "char.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "char.m"
              *mercury__char__CodeUnits_4 = base;
#line 963 "char.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_6));
#line 963 "char.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_21_21));
#line 963 "char.m"
            }
#line 961 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 961 "char.m"
          }
#line 964 "char.m"
        else
#line 970 "char.m"
          {
#line 964 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 970 "char.m"
            if (mercury__char__succeeded)
#line 965 "char.m"
              {
#line 965 "char.m"
                MR_Integer mercury__char__C_8;
#line 965 "char.m"
                MR_Integer mercury__char__V_24_24;
#line 965 "char.m"
                MR_Integer mercury__char__V_25_25;
#line 965 "char.m"
                MR_Integer mercury__char__V_26_26;
#line 965 "char.m"
                MR_Integer mercury__char__V_27_27;
#line 965 "char.m"
                MR_Integer mercury__char__V_28_28;
#line 965 "char.m"
                MR_Integer mercury__char__V_29_29;
#line 965 "char.m"
                MR_Integer mercury__char__V_30_30;
#line 965 "char.m"
                MR_Integer mercury__char__V_31_31;
#line 965 "char.m"
                MR_Integer mercury__char__V_32_32;
#line 965 "char.m"
                MR_Integer mercury__char__V_33_33;
#line 965 "char.m"
                MR_Integer mercury__char__V_34_34;
#line 965 "char.m"
                MR_Integer mercury__char__V_35_35;
#line 965 "char.m"
                MR_Integer mercury__char__V_36_36;
#line 965 "char.m"
                MR_Word mercury__char__V_37_37;
#line 965 "char.m"
                MR_Word mercury__char__V_38_38;
#line 965 "char.m"
                MR_Word mercury__char__V_39_39;
#line 965 "char.m"
                MR_Integer mercury__char__A_63;
#line 965 "char.m"
                MR_Integer mercury__char__B_64;
#line 1001 "char.m"
                MR_Integer mercury__char__Int_76;
#line 1001 "char.m"
                MR_Integer mercury__char__V_78_78;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1919 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_76  = Int;
#line 828 "char.m"
}
#line 1003 "char.m"
                mercury__char__succeeded = (mercury__char__Int_76 >= (MR_Integer) 55296);
#line 1001 "char.m"
                if (mercury__char__succeeded)
#line 1001 "char.m"
                  {
#line 1004 "char.m"
                    mercury__char__V_78_78 = (MR_Integer) 57343;
#line 1004 "char.m"
                    mercury__char__succeeded = (mercury__char__Int_76 <= mercury__char__V_78_78);
#line 1001 "char.m"
                  }
#line 965 "char.m"
                mercury__char__succeeded = !(mercury__char__succeeded);
#line 965 "char.m"
                if (mercury__char__succeeded)
#line 965 "char.m"
                  {
#line 966 "char.m"
                    mercury__char__V_24_24 = (MR_Integer) 224;
#line 966 "char.m"
                    mercury__char__V_27_27 = (MR_Integer) 12;
#line 966 "char.m"
                    {
#line 966 "char.m"
                      mercury__char__V_26_26 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_27_27);
                    }
#line 966 "char.m"
                    mercury__char__V_28_28 = (MR_Integer) 15;
#line 966 "char.m"
                    mercury__char__V_25_25 = (mercury__char__V_26_26 & mercury__char__V_28_28);
#line 966 "char.m"
                    mercury__char__A_63 = (mercury__char__V_24_24 | mercury__char__V_25_25);
#line 967 "char.m"
                    mercury__char__V_29_29 = (MR_Integer) 128;
#line 967 "char.m"
                    mercury__char__V_32_32 = (MR_Integer) 6;
#line 967 "char.m"
                    {
#line 967 "char.m"
                      mercury__char__V_31_31 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_32_32);
                    }
#line 967 "char.m"
                    mercury__char__V_33_33 = (MR_Integer) 63;
#line 967 "char.m"
                    mercury__char__V_30_30 = (mercury__char__V_31_31 & mercury__char__V_33_33);
#line 967 "char.m"
                    mercury__char__B_64 = (mercury__char__V_29_29 | mercury__char__V_30_30);
#line 968 "char.m"
                    mercury__char__V_34_34 = (MR_Integer) 128;
#line 968 "char.m"
                    mercury__char__V_36_36 = (MR_Integer) 63;
#line 968 "char.m"
                    mercury__char__V_35_35 = (mercury__char__Int_5 & mercury__char__V_36_36);
#line 968 "char.m"
                    mercury__char__C_8 = (mercury__char__V_34_34 | mercury__char__V_35_35);
#line 969 "char.m"
                    mercury__char__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "char.m"
                    {
#line 969 "char.m"
                      mercury__char__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 0) = ((MR_Box) (mercury__char__C_8));
#line 969 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 1) = ((MR_Box) (mercury__char__V_39_39));
#line 969 "char.m"
                    }
#line 969 "char.m"
                    {
#line 969 "char.m"
                      mercury__char__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 0) = ((MR_Box) (mercury__char__B_64));
#line 969 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 1) = ((MR_Box) (mercury__char__V_38_38));
#line 969 "char.m"
                    }
#line 969 "char.m"
                    {
#line 969 "char.m"
                      MR_Word base;
#line 969 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 969 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_63));
#line 969 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_37_37));
#line 969 "char.m"
                    }
#line 969 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 965 "char.m"
                  }
#line 965 "char.m"
              }
#line 970 "char.m"
            else
#line 976 "char.m"
              {
#line 976 "char.m"
                MR_Integer mercury__char__D_9;
#line 976 "char.m"
                MR_Integer mercury__char__V_41_41;
#line 976 "char.m"
                MR_Integer mercury__char__V_42_42;
#line 976 "char.m"
                MR_Integer mercury__char__V_43_43;
#line 976 "char.m"
                MR_Integer mercury__char__V_44_44;
#line 976 "char.m"
                MR_Integer mercury__char__V_45_45;
#line 976 "char.m"
                MR_Integer mercury__char__V_46_46;
#line 976 "char.m"
                MR_Integer mercury__char__V_47_47;
#line 976 "char.m"
                MR_Integer mercury__char__V_48_48;
#line 976 "char.m"
                MR_Integer mercury__char__V_49_49;
#line 976 "char.m"
                MR_Integer mercury__char__V_50_50;
#line 976 "char.m"
                MR_Integer mercury__char__V_51_51;
#line 976 "char.m"
                MR_Integer mercury__char__V_52_52;
#line 976 "char.m"
                MR_Integer mercury__char__V_53_53;
#line 976 "char.m"
                MR_Integer mercury__char__V_54_54;
#line 976 "char.m"
                MR_Integer mercury__char__V_55_55;
#line 976 "char.m"
                MR_Integer mercury__char__V_56_56;
#line 976 "char.m"
                MR_Integer mercury__char__V_57_57;
#line 976 "char.m"
                MR_Integer mercury__char__V_58_58;
#line 976 "char.m"
                MR_Word mercury__char__V_59_59;
#line 976 "char.m"
                MR_Word mercury__char__V_60_60;
#line 976 "char.m"
                MR_Word mercury__char__V_61_61;
#line 976 "char.m"
                MR_Word mercury__char__V_62_62;
#line 976 "char.m"
                MR_Integer mercury__char__A_65;
#line 976 "char.m"
                MR_Integer mercury__char__B_66;
#line 976 "char.m"
                MR_Integer mercury__char__C_67;

#line 970 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 976 "char.m"
                if (mercury__char__succeeded)
#line 976 "char.m"
                  {
#line 971 "char.m"
                    mercury__char__V_41_41 = (MR_Integer) 240;
#line 971 "char.m"
                    mercury__char__V_44_44 = (MR_Integer) 18;
#line 971 "char.m"
                    {
#line 971 "char.m"
                      mercury__char__V_43_43 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_44_44);
                    }
#line 971 "char.m"
                    mercury__char__V_45_45 = (MR_Integer) 7;
#line 971 "char.m"
                    mercury__char__V_42_42 = (mercury__char__V_43_43 & mercury__char__V_45_45);
#line 971 "char.m"
                    mercury__char__A_65 = (mercury__char__V_41_41 | mercury__char__V_42_42);
#line 972 "char.m"
                    mercury__char__V_46_46 = (MR_Integer) 128;
#line 972 "char.m"
                    mercury__char__V_49_49 = (MR_Integer) 12;
#line 972 "char.m"
                    {
#line 972 "char.m"
                      mercury__char__V_48_48 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_49_49);
                    }
#line 972 "char.m"
                    mercury__char__V_50_50 = (MR_Integer) 63;
#line 972 "char.m"
                    mercury__char__V_47_47 = (mercury__char__V_48_48 & mercury__char__V_50_50);
#line 972 "char.m"
                    mercury__char__B_66 = (mercury__char__V_46_46 | mercury__char__V_47_47);
#line 973 "char.m"
                    mercury__char__V_51_51 = (MR_Integer) 128;
#line 973 "char.m"
                    mercury__char__V_54_54 = (MR_Integer) 6;
#line 973 "char.m"
                    {
#line 973 "char.m"
                      mercury__char__V_53_53 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_54_54);
                    }
#line 973 "char.m"
                    mercury__char__V_55_55 = (MR_Integer) 63;
#line 973 "char.m"
                    mercury__char__V_52_52 = (mercury__char__V_53_53 & mercury__char__V_55_55);
#line 973 "char.m"
                    mercury__char__C_67 = (mercury__char__V_51_51 | mercury__char__V_52_52);
#line 974 "char.m"
                    mercury__char__V_56_56 = (MR_Integer) 128;
#line 974 "char.m"
                    mercury__char__V_58_58 = (MR_Integer) 63;
#line 974 "char.m"
                    mercury__char__V_57_57 = (mercury__char__Int_5 & mercury__char__V_58_58);
#line 974 "char.m"
                    mercury__char__D_9 = (mercury__char__V_56_56 | mercury__char__V_57_57);
#line 975 "char.m"
                    mercury__char__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 975 "char.m"
                    {
#line 975 "char.m"
                      mercury__char__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 0) = ((MR_Box) (mercury__char__D_9));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 1) = ((MR_Box) (mercury__char__V_62_62));
#line 975 "char.m"
                    }
#line 975 "char.m"
                    {
#line 975 "char.m"
                      mercury__char__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 0) = ((MR_Box) (mercury__char__C_67));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 1) = ((MR_Box) (mercury__char__V_61_61));
#line 975 "char.m"
                    }
#line 975 "char.m"
                    {
#line 975 "char.m"
                      mercury__char__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 0) = ((MR_Box) (mercury__char__B_66));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 1) = ((MR_Box) (mercury__char__V_60_60));
#line 975 "char.m"
                    }
#line 975 "char.m"
                    {
#line 975 "char.m"
                      MR_Word base;
#line 975 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_65));
#line 975 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_59_59));
#line 975 "char.m"
                    }
#line 975 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 976 "char.m"
                  }
#line 976 "char.m"
              }
#line 970 "char.m"
          }
#line 964 "char.m"
      }
#line 956 "char.m"
    return mercury__char__succeeded;
#line 956 "char.m"
  }
#line 248 "char.m"
}

#line 243 "char.m"
MR_Word MR_CALL 
mercury__char__char_to_doc_1_f_0(
#line 243 "char.m"
  MR_Char mercury__char__C_3)
#line 243 "char.m"
{
#line 1022 "char.m"
  {
#line 1022 "char.m"
    MR_bool mercury__char__succeeded;
#line 1022 "char.m"
    MR_Word mercury__char__HeadVar__2_2;
#line 1022 "char.m"
    MR_String mercury__char__V_4_4;

#line 1022 "char.m"
    {
#line 1022 "char.m"
      mercury__char__V_4_4 = mercury__term_io__quoted_char_1_f_0(mercury__char__C_3);
    }
#line 1022 "char.m"
    {
#line 1022 "char.m"
      mercury__char__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "char.m"
      MR_hl_field(MR_mktag(1), mercury__char__HeadVar__2_2, 0) = ((MR_Box) (mercury__char__V_4_4));
#line 1022 "char.m"
    }
#line 1022 "char.m"
    return mercury__char__HeadVar__2_2;
#line 1022 "char.m"
  }
#line 243 "char.m"
}

#line 239 "char.m"
MR_Integer MR_CALL 
mercury__char__det_base_digit_to_int_2_f_0(
#line 239 "char.m"
  MR_Integer mercury__char__Base_4,
#line 239 "char.m"
  MR_Char mercury__char__Digit_5)
#line 239 "char.m"
{
#line 650 "char.m"
  {
#line 650 "char.m"
    MR_bool mercury__char__succeeded;
#line 650 "char.m"
    MR_Integer mercury__char__Int_6;
#line 650 "char.m"
    MR_Integer mercury__char__Int0_7;

#line 648 "char.m"
    {
#line 648 "char.m"
      mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_4, mercury__char__Digit_5, &mercury__char__Int0_7);
    }
#line 650 "char.m"
    if (mercury__char__succeeded)
#line 649 "char.m"
      mercury__char__Int_6 = mercury__char__Int0_7;
#line 650 "char.m"
    else
#line 651 "char.m"
      {
#line 651 "char.m"
        {
#line 651 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int failed");
        }
#line 651 "char.m"
      }
#line 650 "char.m"
    return mercury__char__Int_6;
#line 650 "char.m"
  }
#line 239 "char.m"
}

#line 235 "char.m"
MR_bool MR_CALL 
mercury__char__base_digit_to_int_3_p_0(
#line 235 "char.m"
  MR_Integer mercury__char__Base_4,
#line 235 "char.m"
  MR_Char mercury__char__Digit_5,
#line 235 "char.m"
  MR_Integer * mercury__char__Int_6)
#line 235 "char.m"
{
#line 643 "char.m"
  {
#line 643 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Base_4 > (MR_Integer) 1);
#line 636 "char.m"
    MR_Integer mercury__char__V_9_9;

#line 636 "char.m"
    if (mercury__char__succeeded)
#line 636 "char.m"
      {
#line 636 "char.m"
        mercury__char__V_9_9 = (MR_Integer) 37;
#line 636 "char.m"
        mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__V_9_9);
#line 636 "char.m"
      }
#line 643 "char.m"
    if (mercury__char__succeeded)
#line 641 "char.m"
      {
#line 639 "char.m"
        MR_Char mercury__char__Upper_7;

#line 637 "char.m"
        {
#line 637 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_5, &mercury__char__Upper_7);
        }
#line 639 "char.m"
        if (mercury__char__succeeded)
#line 638 "char.m"
          {
#line 638 "char.m"
            mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Upper_7);
          }
#line 639 "char.m"
        else
#line 640 "char.m"
          {
#line 640 "char.m"
            mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Digit_5);
          }
#line 641 "char.m"
        if (mercury__char__succeeded)
#line 642 "char.m"
          mercury__char__succeeded = (*mercury__char__Int_6 < mercury__char__Base_4);
#line 641 "char.m"
      }
#line 643 "char.m"
    else
#line 644 "char.m"
      {
#line 644 "char.m"
        {
#line 644 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int: invalid base");
        }
#line 644 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 644 "char.m"
      }
#line 643 "char.m"
    return mercury__char__succeeded;
#line 643 "char.m"
  }
#line 235 "char.m"
}

#line 228 "char.m"
MR_Integer MR_CALL 
mercury__char__det_hex_digit_to_int_1_f_0(
#line 228 "char.m"
  MR_Char mercury__char__Digit_3)
#line 228 "char.m"
{
#line 631 "char.m"
  {
#line 631 "char.m"
    MR_bool mercury__char__succeeded;
#line 631 "char.m"
    MR_Integer mercury__char__Int_4;
#line 631 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 629 "char.m"
    {
#line 629 "char.m"
      mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__Int0_5);
    }
#line 631 "char.m"
    if (mercury__char__succeeded)
#line 630 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 631 "char.m"
    else
#line 632 "char.m"
      {
#line 632 "char.m"
        {
#line 632 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.hex_digit_to_int failed");
        }
#line 632 "char.m"
      }
#line 631 "char.m"
    return mercury__char__Int_4;
#line 631 "char.m"
  }
#line 228 "char.m"
}

#line 224 "char.m"
MR_bool MR_CALL 
mercury__char__hex_digit_to_int_2_p_0(
#line 224 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 224 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 224 "char.m"
{
#line 605 "char.m"
  {
#line 605 "char.m"
    MR_bool mercury__char__succeeded;

#line 605 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 54)))
#line 605 "char.m"
      if ((((mercury__char_scalar_common_6[0])[(((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 605 "char.m"
        {
#line 605 "char.m"
          *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[18 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 605 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 605 "char.m"
        }
#line 605 "char.m"
      else
#line 605 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 605 "char.m"
    else
#line 605 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 605 "char.m"
    return mercury__char__succeeded;
#line 605 "char.m"
  }
#line 224 "char.m"
}

#line 218 "char.m"
MR_Integer MR_CALL 
mercury__char__det_decimal_digit_to_int_1_f_0(
#line 218 "char.m"
  MR_Char mercury__char__Digit_3)
#line 218 "char.m"
{
#line 598 "char.m"
  {
#line 598 "char.m"
    MR_bool mercury__char__succeeded;
#line 598 "char.m"
    MR_Integer mercury__char__Int_4;
#line 598 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 596 "char.m"
    {
#line 596 "char.m"
      mercury__char__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__Int0_5);
    }
#line 598 "char.m"
    if (mercury__char__succeeded)
#line 597 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 598 "char.m"
    else
#line 599 "char.m"
      {
#line 599 "char.m"
        {
#line 599 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.decimal_digit_to_int failed");
        }
#line 599 "char.m"
      }
#line 598 "char.m"
    return mercury__char__Int_4;
#line 598 "char.m"
  }
#line 218 "char.m"
}

#line 214 "char.m"
MR_bool MR_CALL 
mercury__char__decimal_digit_to_int_2_p_0(
#line 214 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 214 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 214 "char.m"
{
#line 584 "char.m"
  {
#line 584 "char.m"
    MR_bool mercury__char__succeeded;

#line 584 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 584 "char.m"
      {
#line 584 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[8 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
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
#line 214 "char.m"
}

#line 209 "char.m"
MR_Integer MR_CALL 
mercury__char__det_octal_digit_to_int_1_f_0(
#line 209 "char.m"
  MR_Char mercury__char__Digit_3)
#line 209 "char.m"
{
#line 580 "char.m"
  {
#line 580 "char.m"
    MR_bool mercury__char__succeeded;
#line 580 "char.m"
    MR_Integer mercury__char__Int_4;
#line 580 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 578 "char.m"
    {
#line 578 "char.m"
      mercury__char__succeeded = mercury__char__octal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__Int0_5);
    }
#line 580 "char.m"
    if (mercury__char__succeeded)
#line 579 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 580 "char.m"
    else
#line 581 "char.m"
      {
#line 581 "char.m"
        {
#line 581 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.octal_digit_to_int failed");
        }
#line 581 "char.m"
      }
#line 580 "char.m"
    return mercury__char__Int_4;
#line 580 "char.m"
  }
#line 209 "char.m"
}

#line 205 "char.m"
MR_bool MR_CALL 
mercury__char__octal_digit_to_int_2_p_0(
#line 205 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 205 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 205 "char.m"
{
#line 568 "char.m"
  {
#line 568 "char.m"
    MR_bool mercury__char__succeeded;

#line 568 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 7)))
#line 568 "char.m"
      {
#line 568 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[0 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
#line 568 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 568 "char.m"
      }
#line 568 "char.m"
    else
#line 568 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 568 "char.m"
    return mercury__char__succeeded;
#line 568 "char.m"
  }
#line 205 "char.m"
}

#line 200 "char.m"
MR_Integer MR_CALL 
mercury__char__det_binary_digit_to_int_1_f_0(
#line 200 "char.m"
  MR_Char mercury__char__Digit_3)
#line 200 "char.m"
{
#line 564 "char.m"
  {
#line 564 "char.m"
    MR_bool mercury__char__succeeded;
#line 564 "char.m"
    MR_Integer mercury__char__Int_4;
#line 564 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 558 "char.m"
#line 558 "char.m"
    switch (mercury__char__Digit_3) {
#line 558 "char.m"
      default:
#line 558 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 558 "char.m"
        break;
#line 558 "char.m"
      case (MR_Char) 48:
#line 558 "char.m"
        {
#line 558 "char.m"
          mercury__char__Int0_5 = (MR_Integer) 0;
#line 558 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 558 "char.m"
        }
#line 558 "char.m"
        break;
#line 558 "char.m"
      case (MR_Char) 49:
#line 559 "char.m"
        {
#line 559 "char.m"
          mercury__char__Int0_5 = (MR_Integer) 1;
#line 559 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 559 "char.m"
        }
#line 558 "char.m"
        break;
#line 558 "char.m"
    }
#line 564 "char.m"
    if (mercury__char__succeeded)
#line 563 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 564 "char.m"
    else
#line 565 "char.m"
      {
#line 565 "char.m"
        {
#line 565 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.binary_digit_to_int failed");
        }
#line 565 "char.m"
      }
#line 564 "char.m"
    return mercury__char__Int_4;
#line 564 "char.m"
  }
#line 200 "char.m"
}

#line 196 "char.m"
MR_bool MR_CALL 
mercury__char__binary_digit_to_int_2_p_0(
#line 196 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 196 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 196 "char.m"
{
#line 558 "char.m"
  {
#line 558 "char.m"
    MR_bool mercury__char__succeeded;

#line 558 "char.m"
#line 558 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 558 "char.m"
      default:
#line 558 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 558 "char.m"
        break;
#line 558 "char.m"
      case (MR_Char) 48:
#line 558 "char.m"
        {
#line 558 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 558 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 558 "char.m"
        }
#line 558 "char.m"
        break;
#line 558 "char.m"
      case (MR_Char) 49:
#line 559 "char.m"
        {
#line 559 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 559 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 559 "char.m"
        }
#line 558 "char.m"
        break;
#line 558 "char.m"
    }
#line 558 "char.m"
    return mercury__char__succeeded;
#line 558 "char.m"
  }
#line 196 "char.m"
}

#line 191 "char.m"
MR_Char MR_CALL 
mercury__char__det_base_int_to_digit_2_f_0(
#line 191 "char.m"
  MR_Integer mercury__char__Base_4,
#line 191 "char.m"
  MR_Integer mercury__char__Int_5)
#line 191 "char.m"
{
#line 713 "char.m"
  {
#line 713 "char.m"
    MR_bool mercury__char__succeeded;
#line 713 "char.m"
    MR_Char mercury__char__Digit_6;
#line 713 "char.m"
    MR_Char mercury__char__Digit0_7;

#line 711 "char.m"
    {
#line 711 "char.m"
      mercury__char__succeeded = mercury__char__base_int_to_digit_3_p_0(mercury__char__Base_4, mercury__char__Int_5, &mercury__char__Digit0_7);
    }
#line 713 "char.m"
    if (mercury__char__succeeded)
#line 712 "char.m"
      mercury__char__Digit_6 = mercury__char__Digit0_7;
#line 713 "char.m"
    else
#line 714 "char.m"
      {
#line 714 "char.m"
        {
#line 714 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit failed");
        }
#line 714 "char.m"
      }
#line 713 "char.m"
    return mercury__char__Digit_6;
#line 713 "char.m"
  }
#line 191 "char.m"
}

#line 187 "char.m"
MR_bool MR_CALL 
mercury__char__base_int_to_digit_3_p_0(
#line 187 "char.m"
  MR_Integer mercury__char__Base_4,
#line 187 "char.m"
  MR_Integer mercury__char__Int_5,
#line 187 "char.m"
  MR_Char * mercury__char__Digit_6)
#line 187 "char.m"
{
#line 706 "char.m"
  {
#line 706 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Base_4 > (MR_Integer) 1);
#line 703 "char.m"
    MR_Integer mercury__char__V_8_8;

#line 703 "char.m"
    if (mercury__char__succeeded)
#line 703 "char.m"
      {
#line 703 "char.m"
        mercury__char__V_8_8 = (MR_Integer) 37;
#line 703 "char.m"
        mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__V_8_8);
#line 703 "char.m"
      }
#line 706 "char.m"
    if (mercury__char__succeeded)
#line 704 "char.m"
      {
#line 704 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 < mercury__char__Base_4);
#line 704 "char.m"
        if (mercury__char__succeeded)
#line 705 "char.m"
          {
#line 705 "char.m"
            return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_5, mercury__char__Digit_6);
          }
#line 704 "char.m"
      }
#line 706 "char.m"
    else
#line 707 "char.m"
      {
#line 707 "char.m"
        {
#line 707 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit: invalid base");
        }
#line 707 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 707 "char.m"
      }
#line 706 "char.m"
    return mercury__char__succeeded;
#line 706 "char.m"
  }
#line 187 "char.m"
}

#line 180 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_digit_2_p_0(
#line 180 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 180 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 180 "char.m"
{
#line 682 "char.m"
  {
#line 682 "char.m"
    MR_bool mercury__char__succeeded;

#line 682 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 15)))
#line 682 "char.m"
      {
#line 682 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[70 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 682 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 682 "char.m"
      }
#line 682 "char.m"
    else
#line 682 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 682 "char.m"
    return mercury__char__succeeded;
#line 682 "char.m"
  }
#line 180 "char.m"
}

#line 175 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_decimal_digit_2_p_0(
#line 175 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 175 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 175 "char.m"
{
#line 671 "char.m"
  {
#line 671 "char.m"
    MR_bool mercury__char__succeeded;

#line 671 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 671 "char.m"
      {
#line 671 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[60 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 671 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 671 "char.m"
      }
#line 671 "char.m"
    else
#line 671 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 671 "char.m"
    return mercury__char__succeeded;
#line 671 "char.m"
  }
#line 175 "char.m"
}

#line 171 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_octal_digit_2_p_0(
#line 171 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 171 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 171 "char.m"
{
#line 662 "char.m"
  {
#line 662 "char.m"
    MR_bool mercury__char__succeeded;

#line 662 "char.m"
    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 7)))
#line 662 "char.m"
      {
#line 662 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[52 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 662 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 662 "char.m"
      }
#line 662 "char.m"
    else
#line 662 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 662 "char.m"
    return mercury__char__succeeded;
#line 662 "char.m"
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
#line 659 "char.m"
  {
#line 659 "char.m"
    MR_bool mercury__char__succeeded;

#line 659 "char.m"
#line 659 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 659 "char.m"
      default:
#line 659 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 659 "char.m"
        break;
#line 659 "char.m"
      case (MR_Integer) 0:
#line 659 "char.m"
        {
#line 659 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 659 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 659 "char.m"
        }
#line 659 "char.m"
        break;
#line 659 "char.m"
      case (MR_Integer) 1:
#line 660 "char.m"
        {
#line 660 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 660 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 660 "char.m"
        }
#line 659 "char.m"
        break;
#line 659 "char.m"
    }
#line 659 "char.m"
    return mercury__char__succeeded;
#line 659 "char.m"
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
#line 549 "char.m"
  {
#line 549 "char.m"
    MR_bool mercury__char__succeeded = ((MR_Integer) 2 <= mercury__char__Base_3);
#line 547 "char.m"
    MR_Integer mercury__char__V_7_7;

#line 547 "char.m"
    if (mercury__char__succeeded)
#line 547 "char.m"
      {
#line 547 "char.m"
        mercury__char__V_7_7 = (MR_Integer) 36;
#line 547 "char.m"
        mercury__char__succeeded = (mercury__char__Base_3 <= mercury__char__V_7_7);
#line 547 "char.m"
      }
#line 549 "char.m"
    if (mercury__char__succeeded)
#line 548 "char.m"
      {
#line 548 "char.m"
        MR_Integer mercury__char___Int_5;

#line 548 "char.m"
        {
#line 548 "char.m"
          mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_3, mercury__char__Digit_4, &mercury__char___Int_5);
        }
#line 548 "char.m"
      }
#line 549 "char.m"
    else
#line 550 "char.m"
      {
#line 550 "char.m"
        {
#line 550 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.is_base_digit: invalid base");
        }
#line 550 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 550 "char.m"
      }
#line 549 "char.m"
    return mercury__char__succeeded;
#line 549 "char.m"
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
#line 523 "char.m"
  {
#line 523 "char.m"
    MR_bool mercury__char__succeeded;

#line 523 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 54)))
#line 523 "char.m"
      if ((((mercury__char_scalar_common_6[0])[(((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 523 "char.m"
        {
#line 523 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 523 "char.m"
        }
#line 523 "char.m"
      else
#line 523 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 523 "char.m"
    else
#line 523 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 523 "char.m"
    return mercury__char__succeeded;
#line 523 "char.m"
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
#line 510 "char.m"
  {
#line 510 "char.m"
    MR_bool mercury__char__succeeded;

#line 510 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 510 "char.m"
      {
#line 510 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 510 "char.m"
      }
#line 510 "char.m"
    else
#line 510 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 510 "char.m"
    return mercury__char__succeeded;
#line 510 "char.m"
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
#line 501 "char.m"
  {
#line 501 "char.m"
    MR_bool mercury__char__succeeded;

#line 501 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 7)))
#line 501 "char.m"
      {
#line 501 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 501 "char.m"
      }
#line 501 "char.m"
    else
#line 501 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 501 "char.m"
    return mercury__char__succeeded;
#line 501 "char.m"
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
#line 498 "char.m"
  {
#line 498 "char.m"
    MR_bool mercury__char__succeeded;

#line 498 "char.m"
#line 498 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 498 "char.m"
      default:
#line 498 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 498 "char.m"
        break;
#line 498 "char.m"
      case (MR_Char) 48:
#line 498 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
        break;
#line 498 "char.m"
      case (MR_Char) 49:
#line 499 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
        break;
#line 498 "char.m"
    }
#line 498 "char.m"
    return mercury__char__succeeded;
#line 498 "char.m"
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
#line 510 "char.m"
  {
#line 510 "char.m"
    MR_bool mercury__char__succeeded;

#line 510 "char.m"
    if ((((MR_Unsigned) (mercury__char__D_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 510 "char.m"
      {
#line 510 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 510 "char.m"
      }
#line 510 "char.m"
    else
#line 510 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 510 "char.m"
    return mercury__char__succeeded;
#line 510 "char.m"
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
#line 385 "char.m"
  {
#line 385 "char.m"
    MR_bool mercury__char__succeeded;

#line 385 "char.m"
    if ((((MR_Unsigned) (mercury__char__Char_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 74)))
#line 385 "char.m"
      if ((((mercury__char_scalar_common_5[0])[(((mercury__char__Char_2 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__Char_2 - (MR_Integer) 48)) & (MR_Integer) 31))))))
#line 385 "char.m"
        {
#line 385 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 385 "char.m"
        }
#line 385 "char.m"
      else
#line 385 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 385 "char.m"
    else
#line 385 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 385 "char.m"
    return mercury__char__succeeded;
#line 385 "char.m"
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
#line 377 "char.m"
  {
#line 377 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Char_2 == (MR_Char) 95);

#line 377 "char.m"
    if (mercury__char__succeeded)
#line 376 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 377 "char.m"
    else
#line 359 "char.m"
      {
#line 457 "char.m"
        MR_Char mercury__char__V_5_5;

#line 457 "char.m"
        {
#line 457 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
        }
#line 359 "char.m"
        if (mercury__char__succeeded)
#line 358 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 359 "char.m"
        else
#line 460 "char.m"
          {
#line 460 "char.m"
            MR_Char mercury__char__V_7_7;

#line 460 "char.m"
            {
#line 460 "char.m"
              mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
            }
#line 460 "char.m"
          }
#line 359 "char.m"
      }
#line 377 "char.m"
    return mercury__char__succeeded;
#line 377 "char.m"
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
#line 368 "char.m"
  {
#line 368 "char.m"
    MR_bool mercury__char__succeeded;
#line 457 "char.m"
    MR_Char mercury__char__V_5_5;

#line 457 "char.m"
    {
#line 457 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
    }
#line 359 "char.m"
    if (mercury__char__succeeded)
#line 358 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 359 "char.m"
    else
#line 460 "char.m"
      {
#line 460 "char.m"
        MR_Char mercury__char__V_7_7;

#line 460 "char.m"
        {
#line 460 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
        }
#line 460 "char.m"
      }
#line 368 "char.m"
    if (mercury__char__succeeded)
#line 367 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 368 "char.m"
    else
#line 510 "char.m"
    if ((((MR_Unsigned) (mercury__char__Char_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 510 "char.m"
      {
#line 510 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 510 "char.m"
      }
#line 510 "char.m"
    else
#line 510 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 368 "char.m"
    return mercury__char__succeeded;
#line 368 "char.m"
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
#line 359 "char.m"
  {
#line 359 "char.m"
    MR_bool mercury__char__succeeded;
#line 457 "char.m"
    MR_Char mercury__char__V_4_4;

#line 457 "char.m"
    {
#line 457 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_4_4);
    }
#line 359 "char.m"
    if (mercury__char__succeeded)
#line 358 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 359 "char.m"
    else
#line 460 "char.m"
      {
#line 460 "char.m"
        MR_Char mercury__char__V_6_6;

#line 460 "char.m"
        {
#line 460 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_6_6, mercury__char__Char_2);
        }
#line 460 "char.m"
      }
#line 359 "char.m"
    return mercury__char__succeeded;
#line 359 "char.m"
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
#line 457 "char.m"
  {
#line 457 "char.m"
    MR_bool mercury__char__succeeded;
#line 457 "char.m"
    MR_Char mercury__char__V_3_3;

#line 457 "char.m"
    {
#line 457 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Lower_2, &mercury__char__V_3_3);
    }
#line 457 "char.m"
    return mercury__char__succeeded;
#line 457 "char.m"
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
#line 460 "char.m"
  {
#line 460 "char.m"
    MR_bool mercury__char__succeeded;
#line 460 "char.m"
    MR_Char mercury__char__V_3_3;

#line 460 "char.m"
    {
#line 460 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_3_3, mercury__char__Upper_2);
    }
#line 460 "char.m"
    return mercury__char__succeeded;
#line 460 "char.m"
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
#line 349 "char.m"
  {
#line 349 "char.m"
    MR_bool mercury__char__succeeded;

#line 349 "char.m"
#line 349 "char.m"
    switch (mercury__char__HeadVar__1_1) {
#line 349 "char.m"
      default:
#line 349 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 349 "char.m"
        break;
#line 349 "char.m"
      case (MR_Char) 9:
#line 350 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 349 "char.m"
        break;
#line 349 "char.m"
      case (MR_Char) 10:
#line 351 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 349 "char.m"
        break;
#line 349 "char.m"
      case (MR_Char) 11:
#line 354 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 349 "char.m"
        break;
#line 349 "char.m"
      case (MR_Char) 12:
#line 353 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 349 "char.m"
        break;
#line 349 "char.m"
      case (MR_Char) 13:
#line 352 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 349 "char.m"
        break;
#line 349 "char.m"
      case (MR_Char) 32:
#line 349 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 349 "char.m"
        break;
#line 349 "char.m"
    }
#line 349 "char.m"
    return mercury__char__succeeded;
#line 349 "char.m"
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
#line 782 "char.m"
  {
#line 782 "char.m"
    MR_bool mercury__char__succeeded;

#line 782 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__2_2 - (MR_Integer) 65)) <= ((MR_Unsigned) (MR_Integer) 25)))
#line 782 "char.m"
      {
#line 782 "char.m"
        *mercury__char__HeadVar__1_1 = ((&mercury__char_vector_common_4[26 + (mercury__char__HeadVar__2_2 - (MR_Integer) 65)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 782 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 782 "char.m"
      }
#line 782 "char.m"
    else
#line 782 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 782 "char.m"
    return mercury__char__succeeded;
#line 782 "char.m"
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
#line 782 "char.m"
  {
#line 782 "char.m"
    MR_bool mercury__char__succeeded;

#line 782 "char.m"
    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 97)) <= ((MR_Unsigned) (MR_Integer) 25)))
#line 782 "char.m"
      {
#line 782 "char.m"
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[0 + (mercury__char__HeadVar__1_1 - (MR_Integer) 97)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
#line 782 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 782 "char.m"
      }
#line 782 "char.m"
    else
#line 782 "char.m"
      mercury__char__succeeded = MR_FALSE;
#line 782 "char.m"
    return mercury__char__succeeded;
#line 782 "char.m"
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
#line 472 "char.m"
  {
#line 472 "char.m"
    MR_bool mercury__char__succeeded;
#line 472 "char.m"
    MR_Char mercury__char__LowerChar_5;

#line 470 "char.m"
    {
#line 470 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_5, mercury__char__Char_3);
    }
#line 472 "char.m"
    if (mercury__char__succeeded)
#line 471 "char.m"
      *mercury__char__Lower_4 = mercury__char__LowerChar_5;
#line 472 "char.m"
    else
#line 473 "char.m"
      *mercury__char__Lower_4 = mercury__char__Char_3;
#line 472 "char.m"
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
#line 472 "char.m"
  {
#line 472 "char.m"
    MR_bool mercury__char__succeeded;
#line 472 "char.m"
    MR_Char mercury__char__C2_4;
#line 472 "char.m"
    MR_Char mercury__char__LowerChar_7;

#line 470 "char.m"
    {
#line 470 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_7, mercury__char__C1_3);
    }
#line 472 "char.m"
    if (mercury__char__succeeded)
#line 471 "char.m"
      mercury__char__C2_4 = mercury__char__LowerChar_7;
#line 472 "char.m"
    else
#line 473 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 472 "char.m"
    return mercury__char__C2_4;
#line 472 "char.m"
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
#line 482 "char.m"
  {
#line 482 "char.m"
    MR_bool mercury__char__succeeded;
#line 482 "char.m"
    MR_Char mercury__char__UpperChar_5;

#line 480 "char.m"
    {
#line 480 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_3, &mercury__char__UpperChar_5);
    }
#line 482 "char.m"
    if (mercury__char__succeeded)
#line 481 "char.m"
      *mercury__char__Upper_4 = mercury__char__UpperChar_5;
#line 482 "char.m"
    else
#line 483 "char.m"
      *mercury__char__Upper_4 = mercury__char__Char_3;
#line 482 "char.m"
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
#line 482 "char.m"
  {
#line 482 "char.m"
    MR_bool mercury__char__succeeded;
#line 482 "char.m"
    MR_Char mercury__char__C2_4;
#line 482 "char.m"
    MR_Char mercury__char__UpperChar_7;

#line 480 "char.m"
    {
#line 480 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__C1_3, &mercury__char__UpperChar_7);
    }
#line 482 "char.m"
    if (mercury__char__succeeded)
#line 481 "char.m"
      mercury__char__C2_4 = mercury__char__UpperChar_7;
#line 482 "char.m"
    else
#line 483 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 482 "char.m"
    return mercury__char__C2_4;
#line 482 "char.m"
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
#line 923 "char.m"
  {
#line 923 "char.m"
    MR_bool mercury__char__succeeded;

#line 923 "char.m"
    *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 923 "char.m"
  }
#line 82 "char.m"
}

#line 81 "char.m"
MR_Integer MR_CALL 
mercury__char__min_char_value_0_f_0(void)
#line 81 "char.m"
{
#line 923 "char.m"
  {
#line 923 "char.m"
    MR_bool mercury__char__succeeded;

#line 923 "char.m"
    return (MR_Integer) 0;
#line 923 "char.m"
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
#line 930 "char.m"
  {
#line 930 "char.m"
    MR_bool mercury__char__succeeded;

#line 934 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_1_p_0

	MR_Integer Max;

		{
#line 934 "char.m"

    Max = 0x10ffff;

#line 3819 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Max_1  = Max;
#line 934 "char.m"
}
#line 930 "char.m"
  }
#line 77 "char.m"
}

#line 76 "char.m"
MR_Integer MR_CALL 
mercury__char__max_char_value_0_f_0(void)
#line 76 "char.m"
{
#line 930 "char.m"
  {
#line 930 "char.m"
    MR_bool mercury__char__succeeded;
#line 930 "char.m"
    MR_Integer mercury__char__N_2;

#line 934 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_0_f_0

	MR_Integer Max;

		{
#line 934 "char.m"

    Max = 0x10ffff;

#line 3854 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_2  = Max;
#line 934 "char.m"
}
#line 930 "char.m"
    return mercury__char__N_2;
#line 930 "char.m"
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
#line 817 "char.m"
  {
#line 817 "char.m"
    MR_bool mercury__char__succeeded;
#line 817 "char.m"
    MR_Char mercury__char__CharPrime_5;

#line 847 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 847 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 3899 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_5  = Character;
#line 847 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 817 "char.m"
    if (mercury__char__succeeded)
#line 816 "char.m"
      *mercury__char__Char_4 = mercury__char__CharPrime_5;
#line 817 "char.m"
    else
#line 818 "char.m"
      {
#line 818 "char.m"
        {
#line 818 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.det_from_int: conversion failed");
#line 818 "char.m"
          return;
        }
#line 818 "char.m"
      }
#line 817 "char.m"
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
#line 817 "char.m"
  {
#line 817 "char.m"
    MR_bool mercury__char__succeeded;
#line 817 "char.m"
    MR_Char mercury__char__Char_4;
#line 817 "char.m"
    MR_Char mercury__char__CharPrime_7;

#line 847 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 847 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 3962 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_7  = Character;
#line 847 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 817 "char.m"
    if (mercury__char__succeeded)
#line 816 "char.m"
      mercury__char__Char_4 = mercury__char__CharPrime_7;
#line 817 "char.m"
    else
#line 818 "char.m"
      {
#line 818 "char.m"
        {
#line 818 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.det_from_int: conversion failed");
        }
#line 818 "char.m"
      }
#line 817 "char.m"
    return mercury__char__Char_4;
#line 817 "char.m"
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
#line 843 "char.m"
  {
#line 843 "char.m"
    MR_bool mercury__char__succeeded;

#line 847 "char.m"
{
#define MR_PROC_LABEL mercury__char__from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 847 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 4023 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Char_4  = Character;
#line 847 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 843 "char.m"
    return mercury__char__succeeded;
#line 843 "char.m"
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
#line 843 "char.m"
  {
#line 843 "char.m"
    MR_bool mercury__char__succeeded;

#line 847 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_2

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_2 ;
		{
#line 847 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 4069 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Character_1  = Character;
#line 847 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 843 "char.m"
    return mercury__char__succeeded;
#line 843 "char.m"
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
#line 835 "char.m"
  {
#line 835 "char.m"
    MR_bool mercury__char__succeeded;

#line 839 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__char__Character_1 ;
	Int =  mercury__char__Int_2 ;
		{
#line 839 "char.m"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 4115 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 839 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 835 "char.m"
    return mercury__char__succeeded;
#line 835 "char.m"
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
#line 824 "char.m"
  {
#line 824 "char.m"
    MR_bool mercury__char__succeeded;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Character_1 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 4158 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Int_2  = Int;
#line 828 "char.m"
}
#line 824 "char.m"
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
#line 824 "char.m"
  {
#line 824 "char.m"
    MR_bool mercury__char__succeeded;
#line 824 "char.m"
    MR_Integer mercury__char__N_4;

#line 828 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__C_3 ;
		{
#line 828 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 4197 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_4  = Int;
#line 828 "char.m"
}
#line 824 "char.m"
    return mercury__char__N_4;
#line 824 "char.m"
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
