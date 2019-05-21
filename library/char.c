/*
** Automatically generated from `char.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
  MR_Box mercury__char__wrapper_arg_1,
  MR_Box mercury__char__wrapper_arg_2);

static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
  MR_Box * mercury__char__wrapper_arg_1,
  MR_Box mercury__char__wrapper_arg_2,
  MR_Box mercury__char__wrapper_arg_3);

static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__char__closure_arg,
  MR_Box mercury__char__wrapper_arg_1);

static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__char__closure_arg,
  MR_Box mercury__char__wrapper_arg_1,
  MR_Box * mercury__char__wrapper_arg_2);


static /* final */ const MR_Box mercury__char_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__char_scalar_common_5[1][3];

static /* final */ const MR_Integer mercury__char_scalar_common_6[2][2];


/* sealed */ struct mercury__char__vector_common_type_4_0_s {
  const MR_Char mercury__char__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct mercury__char__vector_common_type_4_0_s mercury__char_vector_common_4[122];

/* sealed */ struct mercury__char__vector_common_type_7_0_s {
  const MR_Integer mercury__char__vector_common_type_7_0__vct_7_f_0;
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
  /* row 8 */   {     (MR_Integer) 8 },
  /* row 9 */   {     (MR_Integer) 9 },
  /* row 10 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 14 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 15 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 16 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 17 */   {     (MR_Integer) 10 },
  /* row 18 */   {     (MR_Integer) 11 },
  /* row 19 */   {     (MR_Integer) 12 },
  /* row 20 */   {     (MR_Integer) 13 },
  /* row 21 */   {     (MR_Integer) 14 },
  /* row 22 */   {     (MR_Integer) 15 },
  /* row 23 */   {     (MR_Integer) 16 },
  /* row 24 */   {     (MR_Integer) 17 },
  /* row 25 */   {     (MR_Integer) 18 },
  /* row 26 */   {     (MR_Integer) 19 },
  /* row 27 */   {     (MR_Integer) 20 },
  /* row 28 */   {     (MR_Integer) 21 },
  /* row 29 */   {     (MR_Integer) 22 },
  /* row 30 */   {     (MR_Integer) 23 },
  /* row 31 */   {     (MR_Integer) 24 },
  /* row 32 */   {     (MR_Integer) 25 },
  /* row 33 */   {     (MR_Integer) 26 },
  /* row 34 */   {     (MR_Integer) 27 },
  /* row 35 */   {     (MR_Integer) 28 },
  /* row 36 */   {     (MR_Integer) 29 },
  /* row 37 */   {     (MR_Integer) 30 },
  /* row 38 */   {     (MR_Integer) 31 },
  /* row 39 */   {     (MR_Integer) 32 },
  /* row 40 */   {     (MR_Integer) 33 },
  /* row 41 */   {     (MR_Integer) 34 },
  /* row 42 */   {     (MR_Integer) 35 },
  /* row 43 */   {     (MR_Integer) 0 },
  /* row 44 */   {     (MR_Integer) 1 },
  /* row 45 */   {     (MR_Integer) 2 },
  /* row 46 */   {     (MR_Integer) 3 },
  /* row 47 */   {     (MR_Integer) 4 },
  /* row 48 */   {     (MR_Integer) 5 },
  /* row 49 */   {     (MR_Integer) 6 },
  /* row 50 */   {     (MR_Integer) 7 },
  /* row 51 */   {     (MR_Integer) 0 },
  /* row 52 */   {     (MR_Integer) 1 },
  /* row 53 */   {     (MR_Integer) 2 },
  /* row 54 */   {     (MR_Integer) 3 },
  /* row 55 */   {     (MR_Integer) 4 },
  /* row 56 */   {     (MR_Integer) 5 },
  /* row 57 */   {     (MR_Integer) 6 },
  /* row 58 */   {     (MR_Integer) 7 },
  /* row 59 */   {     (MR_Integer) 8 },
  /* row 60 */   {     (MR_Integer) 9 },
  /* row 61 */   {     (MR_Integer) 0 },
  /* row 62 */   {     (MR_Integer) 1 },
  /* row 63 */   {     (MR_Integer) 2 },
  /* row 64 */   {     (MR_Integer) 3 },
  /* row 65 */   {     (MR_Integer) 4 },
  /* row 66 */   {     (MR_Integer) 5 },
  /* row 67 */   {     (MR_Integer) 6 },
  /* row 68 */   {     (MR_Integer) 7 },
  /* row 69 */   {     (MR_Integer) 8 },
  /* row 70 */   {     (MR_Integer) 9 },
  /* row 71 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 72 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 73 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 74 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 75 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 76 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 77 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 78 */   {     (MR_Integer) 10 },
  /* row 79 */   {     (MR_Integer) 11 },
  /* row 80 */   {     (MR_Integer) 12 },
  /* row 81 */   {     (MR_Integer) 13 },
  /* row 82 */   {     (MR_Integer) 14 },
  /* row 83 */   {     (MR_Integer) 15 },
  /* row 84 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 85 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 86 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 87 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 88 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 89 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 90 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 91 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 92 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 93 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 94 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 95 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 96 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 97 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 98 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 99 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 100 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 101 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 102 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 103 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 104 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 105 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 106 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 107 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 108 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 109 */   {     (MR_Integer) (MR_Integer) 0 },
  /* row 110 */   {     (MR_Integer) 10 },
  /* row 111 */   {     (MR_Integer) 11 },
  /* row 112 */   {     (MR_Integer) 12 },
  /* row 113 */   {     (MR_Integer) 13 },
  /* row 114 */   {     (MR_Integer) 14 },
  /* row 115 */   {     (MR_Integer) 15 },
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



const MR_TypeCtorInfo_Struct mercury__char__char__type_ctor_info_char_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__character__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001))
};

static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(
  MR_Integer mercury__char__X_3,
  MR_Char * mercury__char__Y_4)
{
  {
    MR_bool mercury__char__succeeded;

{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__X_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Y_4  = Character;
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__char__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(
  MR_Char mercury__char__X_3)
{
  {
    MR_Integer mercury__char__Y_4;

{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__X_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Y_4  = Int;
}
    return mercury__char__Y_4;
  }
}

void MR_CALL 
mercury__char____Compare____char_0_0(
  MR_Word * mercury__char__HeadVar__1_1,
  MR_Char mercury__char__HeadVar__2_2,
  MR_Char mercury__char__HeadVar__3_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Cast_HeadVar1_4 = mercury__char__HeadVar__2_2;
    MR_Char mercury__char__Cast_HeadVar2_5 = mercury__char__HeadVar__3_3;
    MR_Integer mercury__char__V_7_10;
    MR_Integer mercury__char__V_8_11;

{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar1_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__V_7_10  = Int;
}
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar2_5 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__V_8_11  = Int;
}
    mercury__char__succeeded = (mercury__char__V_7_10 < mercury__char__V_8_11);
    if (mercury__char__succeeded)
      *mercury__char__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__char__succeeded = (mercury__char__V_7_10 == mercury__char__V_8_11);
      if (mercury__char__succeeded)
        *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__char__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__char____Unify____char_0_0(
  MR_Char mercury__char__HeadVar__1_1,
  MR_Char mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Cast_HeadVar1_3 = mercury__char__HeadVar__1_1;
    MR_Char mercury__char__Cast_HeadVar2_4 = mercury__char__HeadVar__2_2;

    mercury__char__succeeded = (mercury__char__Cast_HeadVar1_3 == mercury__char__Cast_HeadVar2_4);
    return mercury__char__succeeded;
  }
}

void MR_CALL 
mercury__char__det_int_to_digit_2_p_0(
  MR_Integer mercury__char__Int_3,
  MR_Char * mercury__char__Digit_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__DigitPrime_5;

    mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    if (mercury__char__succeeded)
      *mercury__char__Digit_4 = mercury__char__DigitPrime_5;
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
        return;
      }
    }
  }
}

MR_Char MR_CALL 
mercury__char__det_int_to_digit_1_f_0(
  MR_Integer mercury__char__N_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__C_4;
    MR_Char mercury__char__DigitPrime_7;

    mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__N_3, &mercury__char__DigitPrime_7);
    if (mercury__char__succeeded)
      mercury__char__C_4 = mercury__char__DigitPrime_7;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
    }
    return mercury__char__C_4;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_1(
  MR_Integer * mercury__char__Int_3,
  MR_Char mercury__char__Digit_4)
{
  {
    MR_bool mercury__char__succeeded;

    mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_3, mercury__char__Digit_4);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_0(
  MR_Integer mercury__char__Int_3,
  MR_Char * mercury__char__Digit_4)
{
  {
    MR_bool mercury__char__succeeded;

    mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, mercury__char__Digit_4);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__digit_to_int_2_p_0(
  MR_Char mercury__char__Digit_3,
  MR_Integer * mercury__char__Int_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Upper_5;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_3, &mercury__char__Upper_5);
    if (mercury__char__succeeded)
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Upper_5);
    else
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Digit_3);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_hex_char_2_p_0(
  MR_Integer mercury__char__Int_3,
  MR_Char * mercury__char__Char_4)
{
  {
    MR_bool mercury__char__succeeded;

    mercury__char__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__char__Int_3, mercury__char__Char_4);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_hex_digit_2_p_0(
  MR_Char mercury__char__Digit_3,
  MR_Integer * mercury__char__Int_4)
{
  {
    MR_bool mercury__char__succeeded;

    mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, mercury__char__Int_4);
    return mercury__char__succeeded;
  }
}

MR_Word MR_CALL 
mercury__char__char_to_doc_1_f_0(
  MR_Char mercury__char__C_3)
{
  {
    MR_Word mercury__char__HeadVar__2_2;
    MR_String mercury__char__Var_4;

    mercury__char__Var_4 = mercury__term_io__quoted_char_1_f_0(mercury__char__C_3);
    {
      mercury__char__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__char__HeadVar__2_2, 0) = ((MR_Box) (mercury__char__Var_4));
    }
    return mercury__char__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__char__is_private_use_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;

{
#define MR_PROC_LABEL mercury__char__is_private_use_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    {
      MR_Integer mercury__char__Var_9;

      mercury__char__succeeded = ((MR_Integer) 57344 <= mercury__char__Int_3);
      if (mercury__char__succeeded)
      {
        mercury__char__Var_9 = (MR_Integer) 63743;
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_9);
      }
    }
    if (!(mercury__char__succeeded))
    {
      {
        MR_Integer mercury__char__Var_7;

        mercury__char__succeeded = ((MR_Integer) 983040 <= mercury__char__Int_3);
        if (mercury__char__succeeded)
        {
          mercury__char__Var_7 = (MR_Integer) 1048573;
          mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_7);
        }
      }
      if (!(mercury__char__succeeded))
      {
        MR_Integer mercury__char__Var_5;

        mercury__char__succeeded = ((MR_Integer) 1048576 <= mercury__char__Int_3);
        if (mercury__char__succeeded)
        {
          mercury__char__Var_5 = (MR_Integer) 1114109;
          mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_5);
        }
      }
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_paragraph_separator_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Var_4;

{
#define MR_PROC_LABEL mercury__char__is_paragraph_separator_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Var_4  = Int;
}
    mercury__char__succeeded = ((MR_Integer) 8233 == mercury__char__Var_4);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_line_separator_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Var_4;

{
#define MR_PROC_LABEL mercury__char__is_line_separator_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Var_4  = Int;
}
    mercury__char__succeeded = ((MR_Integer) 8232 == mercury__char__Var_4);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_space_separator_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;

{
#define MR_PROC_LABEL mercury__char__is_space_separator_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    switch (mercury__char__Int_3) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 32:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 160:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 5760:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 8239:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 8287:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 12288:
        mercury__char__succeeded = MR_TRUE;
        break;
    }
    if (!(mercury__char__succeeded))
    {
      MR_Integer mercury__char__Var_5;

      mercury__char__succeeded = ((MR_Integer) 8192 <= mercury__char__Int_3);
      if (mercury__char__succeeded)
      {
        mercury__char__Var_5 = (MR_Integer) 8202;
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_5);
      }
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_control_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;

{
#define MR_PROC_LABEL mercury__char__is_control_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    {
      MR_Integer mercury__char__Var_7;

      mercury__char__succeeded = ((MR_Integer) 0 <= mercury__char__Int_3);
      if (mercury__char__succeeded)
      {
        mercury__char__Var_7 = (MR_Integer) 31;
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_7);
      }
    }
    if (!(mercury__char__succeeded))
    {
      MR_Integer mercury__char__Var_5;

      mercury__char__succeeded = ((MR_Integer) 127 <= mercury__char__Int_3);
      if (mercury__char__succeeded)
      {
        mercury__char__Var_5 = (MR_Integer) 159;
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_5);
      }
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_noncharacter_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;

{
#define MR_PROC_LABEL mercury__char__is_noncharacter_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    {
      MR_Integer mercury__char__Var_7;

      mercury__char__succeeded = ((MR_Integer) 64976 <= mercury__char__Int_3);
      if (mercury__char__succeeded)
      {
        mercury__char__Var_7 = (MR_Integer) 65007;
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_7);
      }
    }
    if (!(mercury__char__succeeded))
    {
      MR_Integer mercury__char__Var_4 = (mercury__char__Int_3 & (MR_Integer) 65534);

      mercury__char__succeeded = (mercury__char__Var_4 == (MR_Integer) 65534);
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_trailing_surrogate_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;
    MR_Integer mercury__char__Var_5;

{
#define MR_PROC_LABEL mercury__char__is_trailing_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 56320);
    if (mercury__char__succeeded)
    {
      mercury__char__Var_5 = (MR_Integer) 57343;
      mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_5);
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_leading_surrogate_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;
    MR_Integer mercury__char__Var_5;

{
#define MR_PROC_LABEL mercury__char__is_leading_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
    if (mercury__char__succeeded)
    {
      mercury__char__Var_5 = (MR_Integer) 56319;
      mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_5);
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_surrogate_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_3;
    MR_Integer mercury__char__Var_5;

{
#define MR_PROC_LABEL mercury__char__is_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
}
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
    if (mercury__char__succeeded)
    {
      mercury__char__Var_5 = (MR_Integer) 57343;
      mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__Var_5);
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__to_utf16_2_p_0(
  MR_Char mercury__char__Char_3,
  MR_Word * mercury__char__CodeUnits_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_5;

{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
}
    mercury__char__succeeded = (mercury__char__Int_5 < (MR_Integer) 55296);
    if (mercury__char__succeeded)
    {
      MR_Word mercury__char__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__char__CodeUnits_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_10));
      }
      mercury__char__succeeded = MR_TRUE;
    }
    else
    {
      mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 57343);
      if (mercury__char__succeeded)
        mercury__char__succeeded = MR_FALSE;
      else
      {
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
        if (mercury__char__succeeded)
        {
          MR_Word mercury__char__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__char__CodeUnits_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_13));
          }
          mercury__char__succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer mercury__char__U_6;
          MR_Integer mercury__char__A_7;
          MR_Integer mercury__char__B_8;
          MR_Integer mercury__char__Var_15;
          MR_Integer mercury__char__Var_16;
          MR_Integer mercury__char__Var_17;
          MR_Integer mercury__char__Var_18;
          MR_Integer mercury__char__Var_19;
          MR_Integer mercury__char__Var_20;
          MR_Integer mercury__char__Var_21;
          MR_Word mercury__char__Var_22;
          MR_Word mercury__char__Var_23;

          mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
          if (mercury__char__succeeded)
          {
            mercury__char__Var_15 = (MR_Integer) 65536;
            mercury__char__U_6 = (mercury__char__Int_5 - mercury__char__Var_15);
            mercury__char__Var_16 = (MR_Integer) 55296;
            mercury__char__Var_18 = (MR_Integer) 10;
            mercury__char__Var_17 = mercury__int__f_62_62_2_f_0(mercury__char__U_6, mercury__char__Var_18);
            mercury__char__A_7 = (mercury__char__Var_16 | mercury__char__Var_17);
            mercury__char__Var_19 = (MR_Integer) 56320;
            mercury__char__Var_21 = (MR_Integer) 1023;
            mercury__char__Var_20 = (mercury__char__U_6 & mercury__char__Var_21);
            mercury__char__B_8 = (mercury__char__Var_19 | mercury__char__Var_20);
            mercury__char__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__char__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__char__Var_22, 0) = ((MR_Box) (mercury__char__B_8));
              MR_hl_field(MR_mktag(1), mercury__char__Var_22, 1) = ((MR_Box) (mercury__char__Var_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__char__CodeUnits_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_7));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_22));
            }
            mercury__char__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__to_utf8_2_p_0(
  MR_Char mercury__char__Char_3,
  MR_Word * mercury__char__CodeUnits_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_5;

{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
}
    mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 127);
    if (mercury__char__succeeded)
    {
      MR_Word mercury__char__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__char__CodeUnits_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_11));
      }
      mercury__char__succeeded = MR_TRUE;
    }
    else
    {
      mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 2047);
      if (mercury__char__succeeded)
      {
        MR_Integer mercury__char__A_6;
        MR_Integer mercury__char__B_7;
        MR_Integer mercury__char__Var_14;
        MR_Integer mercury__char__Var_15;
        MR_Integer mercury__char__Var_19;
        MR_Word mercury__char__Var_21;
        MR_Word mercury__char__Var_22;

        mercury__char__Var_15 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, (MR_Integer) 6);
        mercury__char__Var_14 = (mercury__char__Var_15 & (MR_Integer) 31);
        mercury__char__A_6 = ((MR_Integer) 192 | mercury__char__Var_14);
        mercury__char__Var_19 = (mercury__char__Int_5 & (MR_Integer) 63);
        mercury__char__B_7 = ((MR_Integer) 128 | mercury__char__Var_19);
        mercury__char__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__char__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__char__Var_21, 0) = ((MR_Box) (mercury__char__B_7));
          MR_hl_field(MR_mktag(1), mercury__char__Var_21, 1) = ((MR_Box) (mercury__char__Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__char__CodeUnits_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_21));
        }
        mercury__char__succeeded = MR_TRUE;
      }
      else
      {
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
        if (mercury__char__succeeded)
        {
          MR_Integer mercury__char__C_8;
          MR_Integer mercury__char__Var_24;
          MR_Integer mercury__char__Var_25;
          MR_Integer mercury__char__Var_26;
          MR_Integer mercury__char__Var_27;
          MR_Integer mercury__char__Var_28;
          MR_Integer mercury__char__Var_29;
          MR_Integer mercury__char__Var_30;
          MR_Integer mercury__char__Var_31;
          MR_Integer mercury__char__Var_32;
          MR_Integer mercury__char__Var_33;
          MR_Integer mercury__char__Var_34;
          MR_Integer mercury__char__Var_35;
          MR_Integer mercury__char__Var_36;
          MR_Word mercury__char__Var_37;
          MR_Word mercury__char__Var_38;
          MR_Word mercury__char__Var_39;
          MR_Integer mercury__char__A_63;
          MR_Integer mercury__char__B_64;
          MR_Integer mercury__char__Int_76;
          MR_Integer mercury__char__Var_78;

{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_76  = Int;
}
          mercury__char__succeeded = (mercury__char__Int_76 >= (MR_Integer) 55296);
          if (mercury__char__succeeded)
          {
            mercury__char__Var_78 = (MR_Integer) 57343;
            mercury__char__succeeded = (mercury__char__Int_76 <= mercury__char__Var_78);
          }
          mercury__char__succeeded = !(mercury__char__succeeded);
          if (mercury__char__succeeded)
          {
            mercury__char__Var_24 = (MR_Integer) 224;
            mercury__char__Var_27 = (MR_Integer) 12;
            mercury__char__Var_26 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__Var_27);
            mercury__char__Var_28 = (MR_Integer) 15;
            mercury__char__Var_25 = (mercury__char__Var_26 & mercury__char__Var_28);
            mercury__char__A_63 = (mercury__char__Var_24 | mercury__char__Var_25);
            mercury__char__Var_29 = (MR_Integer) 128;
            mercury__char__Var_32 = (MR_Integer) 6;
            mercury__char__Var_31 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__Var_32);
            mercury__char__Var_33 = (MR_Integer) 63;
            mercury__char__Var_30 = (mercury__char__Var_31 & mercury__char__Var_33);
            mercury__char__B_64 = (mercury__char__Var_29 | mercury__char__Var_30);
            mercury__char__Var_34 = (MR_Integer) 128;
            mercury__char__Var_36 = (MR_Integer) 63;
            mercury__char__Var_35 = (mercury__char__Int_5 & mercury__char__Var_36);
            mercury__char__C_8 = (mercury__char__Var_34 | mercury__char__Var_35);
            mercury__char__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__char__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__char__Var_38, 0) = ((MR_Box) (mercury__char__C_8));
              MR_hl_field(MR_mktag(1), mercury__char__Var_38, 1) = ((MR_Box) (mercury__char__Var_39));
            }
            {
              mercury__char__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__char__Var_37, 0) = ((MR_Box) (mercury__char__B_64));
              MR_hl_field(MR_mktag(1), mercury__char__Var_37, 1) = ((MR_Box) (mercury__char__Var_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__char__CodeUnits_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_63));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_37));
            }
            mercury__char__succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Integer mercury__char__D_9;
          MR_Integer mercury__char__Var_41;
          MR_Integer mercury__char__Var_42;
          MR_Integer mercury__char__Var_43;
          MR_Integer mercury__char__Var_44;
          MR_Integer mercury__char__Var_45;
          MR_Integer mercury__char__Var_46;
          MR_Integer mercury__char__Var_47;
          MR_Integer mercury__char__Var_48;
          MR_Integer mercury__char__Var_49;
          MR_Integer mercury__char__Var_50;
          MR_Integer mercury__char__Var_51;
          MR_Integer mercury__char__Var_52;
          MR_Integer mercury__char__Var_53;
          MR_Integer mercury__char__Var_54;
          MR_Integer mercury__char__Var_55;
          MR_Integer mercury__char__Var_56;
          MR_Integer mercury__char__Var_57;
          MR_Integer mercury__char__Var_58;
          MR_Word mercury__char__Var_59;
          MR_Word mercury__char__Var_60;
          MR_Word mercury__char__Var_61;
          MR_Word mercury__char__Var_62;
          MR_Integer mercury__char__A_65;
          MR_Integer mercury__char__B_66;
          MR_Integer mercury__char__C_67;

          mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
          if (mercury__char__succeeded)
          {
            mercury__char__Var_41 = (MR_Integer) 240;
            mercury__char__Var_44 = (MR_Integer) 18;
            mercury__char__Var_43 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__Var_44);
            mercury__char__Var_45 = (MR_Integer) 7;
            mercury__char__Var_42 = (mercury__char__Var_43 & mercury__char__Var_45);
            mercury__char__A_65 = (mercury__char__Var_41 | mercury__char__Var_42);
            mercury__char__Var_46 = (MR_Integer) 128;
            mercury__char__Var_49 = (MR_Integer) 12;
            mercury__char__Var_48 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__Var_49);
            mercury__char__Var_50 = (MR_Integer) 63;
            mercury__char__Var_47 = (mercury__char__Var_48 & mercury__char__Var_50);
            mercury__char__B_66 = (mercury__char__Var_46 | mercury__char__Var_47);
            mercury__char__Var_51 = (MR_Integer) 128;
            mercury__char__Var_54 = (MR_Integer) 6;
            mercury__char__Var_53 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__Var_54);
            mercury__char__Var_55 = (MR_Integer) 63;
            mercury__char__Var_52 = (mercury__char__Var_53 & mercury__char__Var_55);
            mercury__char__C_67 = (mercury__char__Var_51 | mercury__char__Var_52);
            mercury__char__Var_56 = (MR_Integer) 128;
            mercury__char__Var_58 = (MR_Integer) 63;
            mercury__char__Var_57 = (mercury__char__Int_5 & mercury__char__Var_58);
            mercury__char__D_9 = (mercury__char__Var_56 | mercury__char__Var_57);
            mercury__char__Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__char__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__char__Var_61, 0) = ((MR_Box) (mercury__char__D_9));
              MR_hl_field(MR_mktag(1), mercury__char__Var_61, 1) = ((MR_Box) (mercury__char__Var_62));
            }
            {
              mercury__char__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__char__Var_60, 0) = ((MR_Box) (mercury__char__C_67));
              MR_hl_field(MR_mktag(1), mercury__char__Var_60, 1) = ((MR_Box) (mercury__char__Var_61));
            }
            {
              mercury__char__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__char__Var_59, 0) = ((MR_Box) (mercury__char__B_66));
              MR_hl_field(MR_mktag(1), mercury__char__Var_59, 1) = ((MR_Box) (mercury__char__Var_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__char__CodeUnits_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_65));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__Var_59));
            }
            mercury__char__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mercury__char__succeeded;
  }
}

MR_Char MR_CALL 
mercury__char__det_base_int_to_digit_2_f_0(
  MR_Integer mercury__char__Base_4,
  MR_Integer mercury__char__Int_5)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Digit_6;
    MR_Char mercury__char__DigitPrime_7;

    mercury__char__succeeded = mercury__char__base_int_to_digit_3_p_0(mercury__char__Base_4, mercury__char__Int_5, &mercury__char__DigitPrime_7);
    if (mercury__char__succeeded)
      mercury__char__Digit_6 = mercury__char__DigitPrime_7;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit failed");
    }
    return mercury__char__Digit_6;
  }
}

MR_bool MR_CALL 
mercury__char__base_int_to_digit_3_p_0(
  MR_Integer mercury__char__Base_4,
  MR_Integer mercury__char__Int_5,
  MR_Char * mercury__char__Digit_6)
{
  {
    MR_bool mercury__char__succeeded = ((MR_Integer) 1 < mercury__char__Base_4);
    MR_Integer mercury__char__Var_8;

    if (mercury__char__succeeded)
    {
      mercury__char__Var_8 = (MR_Integer) 37;
      mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__Var_8);
    }
    if (mercury__char__succeeded)
    {
      mercury__char__succeeded = (mercury__char__Int_5 < mercury__char__Base_4);
      if (mercury__char__succeeded)
        mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_5, mercury__char__Digit_6);
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit: invalid base");
      mercury__char__succeeded = MR_TRUE;
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_0(
  MR_Integer mercury__char__HeadVar__1_1,
  MR_Char * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 35)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[86 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Char MR_CALL 
mercury__char__det_int_to_hex_digit_1_f_0(
  MR_Integer mercury__char__Int_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Digit_4;
    MR_Char mercury__char__DigitPrime_5;

    mercury__char__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    if (mercury__char__succeeded)
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.int_to_hex_digit failed");
    }
    return mercury__char__Digit_4;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_hex_digit_2_p_0(
  MR_Integer mercury__char__HeadVar__1_1,
  MR_Char * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 15)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[70 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Char MR_CALL 
mercury__char__det_int_to_decimal_digit_1_f_0(
  MR_Integer mercury__char__Int_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Digit_4;
    MR_Char mercury__char__DigitPrime_5;

    mercury__char__succeeded = mercury__char__int_to_decimal_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    if (mercury__char__succeeded)
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.int_to_decimal_digit failed");
    }
    return mercury__char__Digit_4;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_decimal_digit_2_p_0(
  MR_Integer mercury__char__HeadVar__1_1,
  MR_Char * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 9)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[60 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Char MR_CALL 
mercury__char__det_int_to_octal_digit_1_f_0(
  MR_Integer mercury__char__Int_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Digit_4;
    MR_Char mercury__char__DigitPrime_5;

    mercury__char__succeeded = mercury__char__int_to_octal_digit_2_p_0(mercury__char__Int_3, &mercury__char__DigitPrime_5);
    if (mercury__char__succeeded)
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.int_to_octal_digit failed");
    }
    return mercury__char__Digit_4;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_octal_digit_2_p_0(
  MR_Integer mercury__char__HeadVar__1_1,
  MR_Char * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) mercury__char__HeadVar__1_1) <= ((MR_Unsigned) (MR_Integer) 7)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[52 + mercury__char__HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Char MR_CALL 
mercury__char__det_int_to_binary_digit_1_f_0(
  MR_Integer mercury__char__Int_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Digit_4;
    MR_Char mercury__char__DigitPrime_5;

    switch (mercury__char__Int_3) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          mercury__char__DigitPrime_5 = (MR_Char) 48;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__char__DigitPrime_5 = (MR_Char) 49;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__char__succeeded)
      mercury__char__Digit_4 = mercury__char__DigitPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.int_to_binary_digit failed");
    }
    return mercury__char__Digit_4;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_binary_digit_2_p_0(
  MR_Integer mercury__char__HeadVar__1_1,
  MR_Char * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    switch (mercury__char__HeadVar__1_1) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          *mercury__char__HeadVar__2_2 = (MR_Char) 48;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
    }
    return mercury__char__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__char__det_base_digit_to_int_2_f_0(
  MR_Integer mercury__char__Base_4,
  MR_Char mercury__char__Digit_5)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_6;
    MR_Integer mercury__char__IntPrime_7;

    mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_4, mercury__char__Digit_5, &mercury__char__IntPrime_7);
    if (mercury__char__succeeded)
      mercury__char__Int_6 = mercury__char__IntPrime_7;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int failed");
    }
    return mercury__char__Int_6;
  }
}

MR_Integer MR_CALL 
mercury__char__det_hex_digit_to_int_1_f_0(
  MR_Char mercury__char__Digit_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_4;
    MR_Integer mercury__char__IntPrime_5;

    mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__IntPrime_5);
    if (mercury__char__succeeded)
      mercury__char__Int_4 = mercury__char__IntPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.hex_digit_to_int failed");
    }
    return mercury__char__Int_4;
  }
}

MR_bool MR_CALL 
mercury__char__hex_digit_to_int_2_p_0(
  MR_Char mercury__char__HeadVar__1_1,
  MR_Integer * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 54)))
      if ((((mercury__char_scalar_common_6[0])[(((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) & (MR_Integer) 31))))))
      {
        *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[61 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
        mercury__char__succeeded = MR_TRUE;
      }
      else
        mercury__char__succeeded = MR_FALSE;
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__char__det_decimal_digit_to_int_1_f_0(
  MR_Char mercury__char__Digit_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_4;
    MR_Integer mercury__char__IntPrime_5;

    mercury__char__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__IntPrime_5);
    if (mercury__char__succeeded)
      mercury__char__Int_4 = mercury__char__IntPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.decimal_digit_to_int failed");
    }
    return mercury__char__Int_4;
  }
}

MR_bool MR_CALL 
mercury__char__decimal_digit_to_int_2_p_0(
  MR_Char mercury__char__HeadVar__1_1,
  MR_Integer * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[51 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__char__det_octal_digit_to_int_1_f_0(
  MR_Char mercury__char__Digit_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_4;
    MR_Integer mercury__char__IntPrime_5;

    mercury__char__succeeded = mercury__char__octal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__IntPrime_5);
    if (mercury__char__succeeded)
      mercury__char__Int_4 = mercury__char__IntPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.octal_digit_to_int failed");
    }
    return mercury__char__Int_4;
  }
}

MR_bool MR_CALL 
mercury__char__octal_digit_to_int_2_p_0(
  MR_Char mercury__char__HeadVar__1_1,
  MR_Integer * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 7)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_7[43 + (mercury__char__HeadVar__1_1 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__char__det_binary_digit_to_int_1_f_0(
  MR_Char mercury__char__Digit_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Integer mercury__char__Int_4;
    MR_Integer mercury__char__IntPrime_5;

    switch (mercury__char__Digit_3) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Char) 48:
        {
          mercury__char__IntPrime_5 = (MR_Integer) 0;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 49:
        {
          mercury__char__IntPrime_5 = (MR_Integer) 1;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__char__succeeded)
      mercury__char__Int_4 = mercury__char__IntPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.binary_digit_to_int failed");
    }
    return mercury__char__Int_4;
  }
}

MR_bool MR_CALL 
mercury__char__binary_digit_to_int_2_p_0(
  MR_Char mercury__char__HeadVar__1_1,
  MR_Integer * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    switch (mercury__char__HeadVar__1_1) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Char) 48:
        {
          *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 49:
        {
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
          mercury__char__succeeded = MR_TRUE;
        }
        break;
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_base_digit_2_p_0(
  MR_Integer mercury__char__Base_3,
  MR_Char mercury__char__Digit_4)
{
  {
    MR_bool mercury__char__succeeded = ((MR_Integer) 2 <= mercury__char__Base_3);
    MR_Integer mercury__char__Var_7;

    if (mercury__char__succeeded)
    {
      mercury__char__Var_7 = (MR_Integer) 36;
      mercury__char__succeeded = (mercury__char__Base_3 <= mercury__char__Var_7);
    }
    if (mercury__char__succeeded)
    {
      MR_Integer mercury__char___Int_5;

      mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_3, mercury__char__Digit_4, &mercury__char___Int_5);
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.is_base_digit: invalid base");
      mercury__char__succeeded = MR_TRUE;
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__base_digit_to_int_3_p_0(
  MR_Integer mercury__char__Base_4,
  MR_Char mercury__char__Digit_5,
  MR_Integer * mercury__char__Int_6)
{
  {
    MR_bool mercury__char__succeeded = ((MR_Integer) 1 < mercury__char__Base_4);
    MR_Integer mercury__char__Var_9;

    if (mercury__char__succeeded)
    {
      mercury__char__Var_9 = (MR_Integer) 37;
      mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__Var_9);
    }
    if (mercury__char__succeeded)
    {
      MR_Char mercury__char__Upper_7;

      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_5, &mercury__char__Upper_7);
      if (mercury__char__succeeded)
        mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Upper_7);
      else
        mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Digit_5);
      if (mercury__char__succeeded)
        mercury__char__succeeded = (*mercury__char__Int_6 < mercury__char__Base_4);
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int: invalid base");
      mercury__char__succeeded = MR_TRUE;
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_1(
  MR_Integer * mercury__char__HeadVar__1_1,
  MR_Char mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__2_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 42)))
      if ((((mercury__char_scalar_common_6[1])[(((mercury__char__HeadVar__2_2 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__2_2 - (MR_Integer) 48)) & (MR_Integer) 31))))))
      {
        *mercury__char__HeadVar__1_1 = ((&mercury__char_vector_common_7[0 + (mercury__char__HeadVar__2_2 - (MR_Integer) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
        mercury__char__succeeded = MR_TRUE;
      }
      else
        mercury__char__succeeded = MR_FALSE;
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_hex_digit_1_p_0(
  MR_Char mercury__char__HeadVar__1_1)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 54)))
      if ((((mercury__char_scalar_common_6[0])[(((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__HeadVar__1_1 - (MR_Integer) 48)) & (MR_Integer) 31))))))
      {
        mercury__char__succeeded = MR_TRUE;
      }
      else
        mercury__char__succeeded = MR_FALSE;
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_decimal_digit_1_p_0(
  MR_Char mercury__char__HeadVar__1_1)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
    {
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_octal_digit_1_p_0(
  MR_Char mercury__char__HeadVar__1_1)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 7)))
    {
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_binary_digit_1_p_0(
  MR_Char mercury__char__HeadVar__1_1)
{
  {
    MR_bool mercury__char__succeeded;

    switch (mercury__char__HeadVar__1_1) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Char) 48:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Char) 49:
        mercury__char__succeeded = MR_TRUE;
        break;
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_digit_1_p_0(
  MR_Char mercury__char__D_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__D_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
    {
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_alnum_or_underscore_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__Char_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 74)))
      if ((((mercury__char_scalar_common_5[0])[(((mercury__char__Char_2 - (MR_Integer) 48)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__char__Char_2 - (MR_Integer) 48)) & (MR_Integer) 31))))))
      {
        mercury__char__succeeded = MR_TRUE;
      }
      else
        mercury__char__succeeded = MR_FALSE;
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_alpha_or_underscore_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded = (mercury__char__Char_2 == (MR_Char) 95);

    if (mercury__char__succeeded)
      mercury__char__succeeded = MR_TRUE;
    else
    {
      MR_Char mercury__char__Var_5;

      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__Var_5);
      if (mercury__char__succeeded)
        mercury__char__succeeded = MR_TRUE;
      else
      {
        MR_Char mercury__char__Var_7;

        mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__Var_7, mercury__char__Char_2);
      }
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_alnum_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Var_5;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__Var_5);
    if (mercury__char__succeeded)
      mercury__char__succeeded = MR_TRUE;
    else
    {
      MR_Char mercury__char__Var_7;

      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__Var_7, mercury__char__Char_2);
    }
    if (mercury__char__succeeded)
      mercury__char__succeeded = MR_TRUE;
    else
    if ((((MR_Unsigned) (mercury__char__Char_2 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
    {
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_alpha_1_p_0(
  MR_Char mercury__char__Char_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Var_4;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__Var_4);
    if (mercury__char__succeeded)
      mercury__char__succeeded = MR_TRUE;
    else
    {
      MR_Char mercury__char__Var_6;

      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__Var_6, mercury__char__Char_2);
    }
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_whitespace_1_p_0(
  MR_Char mercury__char__HeadVar__1_1)
{
  {
    MR_bool mercury__char__succeeded;

    switch (mercury__char__HeadVar__1_1) {
      default:
        mercury__char__succeeded = MR_FALSE;
        break;
      case (MR_Char) 9:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Char) 10:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Char) 11:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Char) 12:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Char) 13:
        mercury__char__succeeded = MR_TRUE;
        break;
      case (MR_Char) 32:
        mercury__char__succeeded = MR_TRUE;
        break;
    }
    return mercury__char__succeeded;
  }
}

void MR_CALL 
mercury__char__to_upper_2_p_0(
  MR_Char mercury__char__Char_3,
  MR_Char * mercury__char__Upper_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__UpperChar_5;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_3, &mercury__char__UpperChar_5);
    if (mercury__char__succeeded)
      *mercury__char__Upper_4 = mercury__char__UpperChar_5;
    else
      *mercury__char__Upper_4 = mercury__char__Char_3;
  }
}

MR_Char MR_CALL 
mercury__char__to_upper_1_f_0(
  MR_Char mercury__char__C1_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__C2_4;
    MR_Char mercury__char__UpperChar_7;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__C1_3, &mercury__char__UpperChar_7);
    if (mercury__char__succeeded)
      mercury__char__C2_4 = mercury__char__UpperChar_7;
    else
      mercury__char__C2_4 = mercury__char__C1_3;
    return mercury__char__C2_4;
  }
}

void MR_CALL 
mercury__char__to_lower_2_p_0(
  MR_Char mercury__char__Char_3,
  MR_Char * mercury__char__Lower_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__LowerChar_5;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_5, mercury__char__Char_3);
    if (mercury__char__succeeded)
      *mercury__char__Lower_4 = mercury__char__LowerChar_5;
    else
      *mercury__char__Lower_4 = mercury__char__Char_3;
  }
}

MR_Char MR_CALL 
mercury__char__to_lower_1_f_0(
  MR_Char mercury__char__C1_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__C2_4;
    MR_Char mercury__char__LowerChar_7;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_7, mercury__char__C1_3);
    if (mercury__char__succeeded)
      mercury__char__C2_4 = mercury__char__LowerChar_7;
    else
      mercury__char__C2_4 = mercury__char__C1_3;
    return mercury__char__C2_4;
  }
}

MR_bool MR_CALL 
mercury__char__is_upper_1_p_0(
  MR_Char mercury__char__Upper_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Var_3;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__Var_3, mercury__char__Upper_2);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__lower_upper_2_p_1(
  MR_Char * mercury__char__HeadVar__1_1,
  MR_Char mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__2_2 - (MR_Integer) 65)) <= ((MR_Unsigned) (MR_Integer) 25)))
    {
      *mercury__char__HeadVar__1_1 = ((&mercury__char_vector_common_4[26 + (mercury__char__HeadVar__2_2 - (MR_Integer) 65)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__is_lower_1_p_0(
  MR_Char mercury__char__Lower_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Var_3;

    mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Lower_2, &mercury__char__Var_3);
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__lower_upper_2_p_0(
  MR_Char mercury__char__HeadVar__1_1,
  MR_Char * mercury__char__HeadVar__2_2)
{
  {
    MR_bool mercury__char__succeeded;

    if ((((MR_Unsigned) (mercury__char__HeadVar__1_1 - (MR_Integer) 97)) <= ((MR_Unsigned) (MR_Integer) 25)))
    {
      *mercury__char__HeadVar__2_2 = ((&mercury__char_vector_common_4[0 + (mercury__char__HeadVar__1_1 - (MR_Integer) 97)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
      mercury__char__succeeded = MR_TRUE;
    }
    else
      mercury__char__succeeded = MR_FALSE;
    return mercury__char__succeeded;
  }
}

void MR_CALL 
mercury__char__max_char_value_1_p_0(
  MR_Integer * mercury__char__Max_1)
{
  {
{
#define MR_PROC_LABEL mercury__char__max_char_value_1_p_0

	MR_Integer Max;

		{

    Max = 0x10ffff;


		;}
#undef MR_PROC_LABEL
	 *mercury__char__Max_1  = Max;
}
  }
}

MR_Integer MR_CALL 
mercury__char__max_char_value_0_f_0(void)
{
  {
    MR_Integer mercury__char__N_2;

{
#define MR_PROC_LABEL mercury__char__max_char_value_0_f_0

	MR_Integer Max;

		{

    Max = 0x10ffff;


		;}
#undef MR_PROC_LABEL
	 mercury__char__N_2  = Max;
}
    return mercury__char__N_2;
  }
}

void MR_CALL 
mercury__char__min_char_value_1_p_0(
  MR_Integer * mercury__char__HeadVar__1_1)
{
  *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
}

MR_Integer MR_CALL 
mercury__char__min_char_value_0_f_0(void)
{
  {
    return (MR_Integer) 0;
  }
}

void MR_CALL 
mercury__char__det_from_int_2_p_0(
  MR_Integer mercury__char__Int_3,
  MR_Char * mercury__char__Char_4)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__CharPrime_5;

{
#define MR_PROC_LABEL mercury__char__det_from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_5  = Character;
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__char__succeeded)
      *mercury__char__Char_4 = mercury__char__CharPrime_5;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "char", (MR_String) "predicate \140char.det_from_int\'/2", (MR_String) "char.det_from_int: conversion failed");
        return;
      }
    }
  }
}

MR_Char MR_CALL 
mercury__char__det_from_int_1_f_0(
  MR_Integer mercury__char__Int_3)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Char mercury__char__Char_4;
    MR_Char mercury__char__CharPrime_7;

{
#define MR_PROC_LABEL mercury__char__det_from_int_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_7  = Character;
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__char__succeeded)
      mercury__char__Char_4 = mercury__char__CharPrime_7;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "char", (MR_String) "predicate \140char.det_from_int\'/2", (MR_String) "char.det_from_int: conversion failed");
    }
    return mercury__char__Char_4;
  }
}

MR_bool MR_CALL 
mercury__char__from_int_2_p_0(
  MR_Integer mercury__char__Int_3,
  MR_Char * mercury__char__Char_4)
{
  {
    MR_bool mercury__char__succeeded;

{
#define MR_PROC_LABEL mercury__char__from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Char_4  = Character;
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__to_int_2_p_2(
  MR_Char * mercury__char__Character_1,
  MR_Integer mercury__char__Int_2)
{
  {
    MR_bool mercury__char__succeeded;

{
#define MR_PROC_LABEL mercury__char__to_int_2_p_2

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_2 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Character_1  = Character;
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__char__succeeded;
  }
}

MR_bool MR_CALL 
mercury__char__to_int_2_p_1(
  MR_Char mercury__char__Character_1,
  MR_Integer mercury__char__Int_2)
{
  {
    MR_bool mercury__char__succeeded;

{
#define MR_PROC_LABEL mercury__char__to_int_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__char__Character_1 ;
	Int =  mercury__char__Int_2 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__char__succeeded;
  }
}

void MR_CALL 
mercury__char__to_int_2_p_0(
  MR_Char mercury__char__Character_1,
  MR_Integer * mercury__char__Int_2)
{
  {
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Character_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 *mercury__char__Int_2  = Int;
}
  }
}

MR_Integer MR_CALL 
mercury__char__to_int_1_f_0(
  MR_Char mercury__char__C_3)
{
  {
    MR_Integer mercury__char__N_4;

{
#define MR_PROC_LABEL mercury__char__to_int_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__char__N_4  = Int;
}
    return mercury__char__N_4;
  }
}

static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
  MR_Box mercury__char__wrapper_arg_1,
  MR_Box mercury__char__wrapper_arg_2)
{
  {
    MR_bool mercury__char__succeeded;

    mercury__char__succeeded = mercury__char____Unify____char_0_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2));
    return mercury__char__succeeded;
  }
}

static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
  MR_Box * mercury__char__wrapper_arg_1,
  MR_Box mercury__char__wrapper_arg_2,
  MR_Box mercury__char__wrapper_arg_3)
{
  {
    MR_Word mercury__char__conv0_HeadVar__1_1;

    mercury__char____Compare____char_0_0(&mercury__char__conv0_HeadVar__1_1, ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_3));
    *mercury__char__wrapper_arg_1 = ((MR_Box) (mercury__char__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__char__closure_arg,
  MR_Box mercury__char__wrapper_arg_1)
{
  {
    MR_Box mercury__char__wrapper_arg_2;
    MR_Box mercury__char__closure = mercury__char__closure_arg;
    MR_Integer mercury__char__conv0_Y_4;

    mercury__char__conv0_Y_4 = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1));
    mercury__char__wrapper_arg_2 = ((MR_Box) (mercury__char__conv0_Y_4));
    return mercury__char__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__char__closure_arg,
  MR_Box mercury__char__wrapper_arg_1,
  MR_Box * mercury__char__wrapper_arg_2)
{
  {
    MR_bool mercury__char__succeeded;
    MR_Box mercury__char__closure = mercury__char__closure_arg;
    MR_Char mercury__char__conv0_Y_4;

    mercury__char__succeeded = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__char__wrapper_arg_1), &mercury__char__conv0_Y_4);
    if (mercury__char__succeeded)
    {
      *mercury__char__wrapper_arg_2 = ((MR_Box) (MR_Word) (mercury__char__conv0_Y_4));
      mercury__char__succeeded = MR_TRUE;
    }
    return mercury__char__succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__char__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module char. */
